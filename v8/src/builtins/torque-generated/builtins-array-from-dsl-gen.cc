#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::GetLengthProperty(TNode<Context> p_context, TNode<Object> p_o) {
  TVARIABLE(Number, _return_71_impl);
  auto _return_71 = &_return_71_impl;
  USE(_return_71);
  Label label_macro_end_1046_impl(this, {_return_71});
  Label* label_macro_end_1046 = &label_macro_end_1046_impl;
  USE(label_macro_end_1046);
  // ../../src/builtins/array.tq:17:64
  {
    // ../../src/builtins/array.tq:18:5
    {
      Label label__True_23_impl(this);
      Label* label__True_23 = &label__True_23_impl;
      USE(label__True_23);
      Label label__False_24_impl(this);
      Label* label__False_24 = &label__False_24_impl;
      USE(label__False_24);
      Label label_if_done_label_573_1047_impl(this, {});
      Label* label_if_done_label_573_1047 = &label_if_done_label_573_1047_impl;
      USE(label_if_done_label_573_1047);
      BranchIfFastJSArray(implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Context>>(p_context), label__True_23, label__False_24);
      if (label__True_23->is_used())
      {
        BIND(label__True_23);
        // ../../src/builtins/array.tq:18:42
        {
          // ../../src/builtins/array.tq:19:7
          TNode<JSArray> t94 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_o)));
          USE(implicit_cast<TNode<JSArray>>(t94));
          TVARIABLE(JSArray, a_72_impl);
          auto a_72 = &a_72_impl;
          USE(a_72);
          *a_72 = implicit_cast<TNode<JSArray>>(t94);
          // ../../src/builtins/array.tq:20:7
          TNode<Smi> t95 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_72).value())));
          *_return_71 = implicit_cast<TNode<Number>>(t95);
          Goto(label_macro_end_1046);
        }
      }
      if (label__False_24->is_used())
      {
        BIND(label__False_24);
        // ../../src/builtins/array.tq:22:7
        {
          // ../../src/builtins/array.tq:23:9
          const char* t96 = "length";
          TNode<Object> t97 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t96)));
          TNode<Object> t98 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>(t97)));
          USE(implicit_cast<TNode<Object>>(t98));
          TNode<Number> t99 = UncheckedCast<Number>(ToLength_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t98)));
          USE(implicit_cast<TNode<Number>>(t99));
          *_return_71 = implicit_cast<TNode<Number>>(t99);
          Goto(label_macro_end_1046);
        }
      }
    }
  }
  BIND(label_macro_end_1046);
  return implicit_cast<TNode<Number>>((*_return_71).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArraySplice(TNode<Context> p_context, CodeStubArguments* p_args, TNode<Object> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, Label* label_Bailout_25) {
  TVARIABLE(Object, _return_73_impl);
  auto _return_73 = &_return_73_impl;
  USE(_return_73);
  Label label_macro_end_1048_impl(this, {_return_73});
  Label* label_macro_end_1048 = &label_macro_end_1048_impl;
  USE(label_macro_end_1048);
  // ../../src/builtins/array.tq:31:18
  {
    // ../../src/builtins/array.tq:32:5
    TNode<Smi> t100 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_originalLengthNumber), label_Bailout_25));
    USE(implicit_cast<TNode<Smi>>(t100));
    TVARIABLE(Smi, originalLength_74_impl);
    auto originalLength_74 = &originalLength_74_impl;
    USE(originalLength_74);
    *originalLength_74 = implicit_cast<TNode<Smi>>(t100);
    // ../../src/builtins/array.tq:33:5
    TNode<Smi> t101 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_actualStartNumber), label_Bailout_25));
    USE(implicit_cast<TNode<Smi>>(t101));
    TVARIABLE(Smi, actualStart_75_impl);
    auto actualStart_75 = &actualStart_75_impl;
    USE(actualStart_75);
    *actualStart_75 = implicit_cast<TNode<Smi>>(t101);
    // ../../src/builtins/array.tq:34:5
    TNode<Smi> t102 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_actualDeleteCountNumber), label_Bailout_25));
    USE(implicit_cast<TNode<Smi>>(t102));
    TVARIABLE(Smi, actualDeleteCount_76_impl);
    auto actualDeleteCount_76 = &actualDeleteCount_76_impl;
    USE(actualDeleteCount_76);
    *actualDeleteCount_76 = implicit_cast<TNode<Smi>>(t102);
    // ../../src/builtins/array.tq:36:5
    TNode<Smi> t103 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>((*actualDeleteCount_76).value())));
    USE(implicit_cast<TNode<Smi>>(t103));
    TVARIABLE(Smi, lengthDelta_77_impl);
    auto lengthDelta_77 = &lengthDelta_77_impl;
    USE(lengthDelta_77);
    *lengthDelta_77 = implicit_cast<TNode<Smi>>(t103);
    // ../../src/builtins/array.tq:37:5
    TNode<Smi> t104 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*originalLength_74).value()), implicit_cast<TNode<Smi>>((*lengthDelta_77).value())));
    USE(implicit_cast<TNode<Smi>>(t104));
    TVARIABLE(Smi, newLength_78_impl);
    auto newLength_78 = &newLength_78_impl;
    USE(newLength_78);
    *newLength_78 = implicit_cast<TNode<Smi>>(t104);
    // ../../src/builtins/array.tq:39:5
    TNode<JSArray> t105 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<Object>>(p_o), label_Bailout_25));
    USE(implicit_cast<TNode<JSArray>>(t105));
    TVARIABLE(JSArray, a_79_impl);
    auto a_79 = &a_79_impl;
    USE(a_79);
    *a_79 = implicit_cast<TNode<JSArray>>(t105);
    // ../../src/builtins/array.tq:41:5
    TNode<Map> t106 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_79).value())));
    TVARIABLE(Map, map_80_impl);
    auto map_80 = &map_80_impl;
    USE(map_80);
    *map_80 = implicit_cast<TNode<Map>>(t106);
    // ../../src/builtins/array.tq:42:5
    {
      Label label__True_26_impl(this);
      Label* label__True_26 = &label__True_26_impl;
      USE(label__True_26);
      Label label__False_27_impl(this, {});
      Label* label__False_27 = &label__False_27_impl;
      USE(label__False_27);
      TNode<BoolT> t107 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Map>>((*map_80).value())));
      USE(implicit_cast<TNode<BoolT>>(t107));
      TNode<BoolT> t108 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t107)));
      USE(implicit_cast<TNode<BoolT>>(t108));
      Branch(implicit_cast<TNode<BoolT>>(t108), label__True_26, label__False_27);
      if (label__True_26->is_used())
      {
        BIND(label__True_26);
        // ../../src/builtins/array.tq:42:58
        Goto(label_Bailout_25);
      }
      BIND(label__False_27);
    }
    // ../../src/builtins/array.tq:43:5
    {
      Label label__True_28_impl(this);
      Label* label__True_28 = &label__True_28_impl;
      USE(label__True_28);
      Label label__False_29_impl(this, {});
      Label* label__False_29 = &label__False_29_impl;
      USE(label__False_29);
      TNode<BoolT> t109 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
      USE(implicit_cast<TNode<BoolT>>(t109));
      Branch(implicit_cast<TNode<BoolT>>(t109), label__True_28, label__False_29);
      if (label__True_28->is_used())
      {
        BIND(label__True_28);
        // ../../src/builtins/array.tq:43:45
        Goto(label_Bailout_25);
      }
      BIND(label__False_29);
    }
    // ../../src/builtins/array.tq:44:5
    {
      Label label__True_30_impl(this);
      Label* label__True_30 = &label__True_30_impl;
      USE(label__True_30);
      Label label__False_31_impl(this, {});
      Label* label__False_31 = &label__False_31_impl;
      USE(label__False_31);
      TNode<BoolT> t110 = UncheckedCast<BoolT>(IsArraySpeciesProtectorCellInvalid());
      USE(implicit_cast<TNode<BoolT>>(t110));
      Branch(implicit_cast<TNode<BoolT>>(t110), label__True_30, label__False_31);
      if (label__True_30->is_used())
      {
        BIND(label__True_30);
        // ../../src/builtins/array.tq:44:47
        Goto(label_Bailout_25);
      }
      BIND(label__False_31);
    }
    // ../../src/builtins/array.tq:47:5
    TNode<Int32T> t111 = UncheckedCast<Int32T>(EnsureArrayPushable(implicit_cast<TNode<Map>>((*map_80).value()), label_Bailout_25));
    USE(implicit_cast<TNode<Int32T>>(t111));
    TVARIABLE(Int32T, elementsKind_81_impl);
    auto elementsKind_81 = &elementsKind_81_impl;
    USE(elementsKind_81);
    *elementsKind_81 = implicit_cast<TNode<Int32T>>(t111);
    // ../../src/builtins/array.tq:48:5
    {
      Label label__True_32_impl(this);
      Label* label__True_32 = &label__True_32_impl;
      USE(label__True_32);
      Label label__False_33_impl(this, {});
      Label* label__False_33 = &label__False_33_impl;
      USE(label__False_33);
      TNode<BoolT> t112 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_81).value())));
      USE(implicit_cast<TNode<BoolT>>(t112));
      TNode<BoolT> t113 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t112)));
      USE(implicit_cast<TNode<BoolT>>(t113));
      Branch(implicit_cast<TNode<BoolT>>(t113), label__True_32, label__False_33);
      if (label__True_32->is_used())
      {
        BIND(label__True_32);
        // ../../src/builtins/array.tq:48:44
        Goto(label_Bailout_25);
      }
      BIND(label__False_33);
    }
    // ../../src/builtins/array.tq:51:5
    {
      Label label__True_34_impl(this);
      Label* label__True_34 = &label__True_34_impl;
      USE(label__True_34);
      Label label__False_35_impl(this, {});
      Label* label__False_35 = &label__False_35_impl;
      USE(label__False_35);
      TNode<BoolT> t114 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_81).value())));
      USE(implicit_cast<TNode<BoolT>>(t114));
      TNode<BoolT> t115 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t114)));
      USE(implicit_cast<TNode<BoolT>>(t115));
      Branch(implicit_cast<TNode<BoolT>>(t115), label__True_34, label__False_35);
      if (label__True_34->is_used())
      {
        BIND(label__True_34);
        // ../../src/builtins/array.tq:51:55
        Goto(label_Bailout_25);
      }
      BIND(label__False_35);
    }
    // ../../src/builtins/array.tq:53:5
    {
      Label label__True_36_impl(this);
      Label* label__True_36 = &label__True_36_impl;
      USE(label__True_36);
      Label label__False_37_impl(this, {});
      Label* label__False_37 = &label__False_37_impl;
      USE(label__False_37);
      TNode<BoolT> t116 = UncheckedCast<BoolT>(IsFastSmiElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_81).value())));
      USE(implicit_cast<TNode<BoolT>>(t116));
      Branch(implicit_cast<TNode<BoolT>>(t116), label__True_36, label__False_37);
      if (label__True_36->is_used())
      {
        BIND(label__True_36);
        // ../../src/builtins/array.tq:53:46
        {
          // ../../src/builtins/array.tq:54:7
          int31_t t117 = 2;
          TNode<IntPtrT> t118 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_args)));
          Label label_body_574_1049_impl(this);
          Label* label_body_574_1049 = &label_body_574_1049_impl;
          USE(label_body_574_1049);
          Label label_increment_575_1050_impl(this);
          Label* label_increment_575_1050 = &label_increment_575_1050_impl;
          USE(label_increment_575_1050);
          Label label_exit_576_1051_impl(this);
          Label* label_exit_576_1051 = &label_exit_576_1051_impl;
          USE(label_exit_576_1051);
          TVARIABLE(IntPtrT, _for_index_t119_577_impl);
          auto _for_index_t119_577 = &_for_index_t119_577_impl;
          USE(_for_index_t119_577);
          TNode<IntPtrT> t120 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t117)));
          *_for_index_t119_577 = implicit_cast<TNode<IntPtrT>>(t120);
          Label label_header_578_1052_impl(this, {_for_index_t119_577});
          Label* label_header_578_1052 = &label_header_578_1052_impl;
          USE(label_header_578_1052);
          Goto(label_header_578_1052);
          BIND(label_header_578_1052);
          TNode<BoolT> t121 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t119_577).value()), implicit_cast<TNode<IntPtrT>>(t118)));
          Branch(implicit_cast<TNode<BoolT>>(t121), label_body_574_1049, label_exit_576_1051);
          BIND(label_body_574_1049);
          TNode<Object> t122 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<IntPtrT>>((*_for_index_t119_577).value())));
          TVARIABLE(Object, e_82_impl);
          auto e_82 = &e_82_impl;
          USE(e_82);
          *e_82 = implicit_cast<TNode<Object>>(t122);
          // ../../src/builtins/array.tq:54:41
          {
            // ../../src/builtins/array.tq:55:9
            {
              Label label__True_38_impl(this);
              Label* label__True_38 = &label__True_38_impl;
              USE(label__True_38);
              Label label__False_39_impl(this, {});
              Label* label__False_39 = &label__False_39_impl;
              USE(label__False_39);
              TNode<BoolT> t123 = UncheckedCast<BoolT>(TaggedIsNotSmi(implicit_cast<TNode<Object>>((*e_82).value())));
              USE(implicit_cast<TNode<BoolT>>(t123));
              Branch(implicit_cast<TNode<BoolT>>(t123), label__True_38, label__False_39);
              if (label__True_38->is_used())
              {
                BIND(label__True_38);
                // ../../src/builtins/array.tq:55:32
                Goto(label_Bailout_25);
              }
              BIND(label__False_39);
            }
          }
          Goto(label_increment_575_1050);
          BIND(label_increment_575_1050);
          TNode<IntPtrT> t124 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t125 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t119_577).value()), implicit_cast<TNode<IntPtrT>>(t124)));
          *_for_index_t119_577 = implicit_cast<TNode<IntPtrT>>(t125);
          Goto(label_header_578_1052);
          BIND(label_exit_576_1051);
        }
        Goto(label__False_37);
      }
      BIND(label__False_37);
    }
    // ../../src/builtins/array.tq:60:5
    TNode<Number> t126 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>((*a_79).value())));
    TNode<Smi> t127 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(t126), label_Bailout_25));
    USE(implicit_cast<TNode<Smi>>(t127));
    TVARIABLE(Smi, length_83_impl);
    auto length_83 = &length_83_impl;
    USE(length_83);
    *length_83 = implicit_cast<TNode<Smi>>(t127);
    // ../../src/builtins/array.tq:61:5
    {
      Label label__True_40_impl(this);
      Label* label__True_40 = &label__True_40_impl;
      USE(label__True_40);
      Label label__False_41_impl(this, {});
      Label* label__False_41 = &label__False_41_impl;
      USE(label__False_41);
      TNode<BoolT> t128 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>((*originalLength_74).value()), implicit_cast<TNode<Smi>>((*length_83).value())));
      USE(implicit_cast<TNode<BoolT>>(t128));
      Branch(implicit_cast<TNode<BoolT>>(t128), label__True_40, label__False_41);
      if (label__True_40->is_used())
      {
        BIND(label__True_40);
        // ../../src/builtins/array.tq:61:35
        Goto(label_Bailout_25);
      }
      BIND(label__False_41);
    }
    // ../../src/builtins/array.tq:63:5
    TNode<JSArray> t129 = UncheckedCast<JSArray>(CallBuiltin(Builtins::kExtractFastJSArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_79).value()), implicit_cast<TNode<Smi>>((*actualStart_75).value()), implicit_cast<TNode<Smi>>((*actualDeleteCount_76).value())));
    USE(implicit_cast<TNode<JSArray>>(t129));
    TVARIABLE(JSArray, deletedResult_84_impl);
    auto deletedResult_84 = &deletedResult_84_impl;
    USE(deletedResult_84);
    *deletedResult_84 = implicit_cast<TNode<JSArray>>(t129);
    // ../../src/builtins/array.tq:66:5
    {
      Label label__True_42_impl(this);
      Label* label__True_42 = &label__True_42_impl;
      USE(label__True_42);
      Label label__False_43_impl(this, {});
      Label* label__False_43 = &label__False_43_impl;
      USE(label__False_43);
      int31_t t130 = 0;
      TNode<Smi> t131 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t130)));
      TNode<BoolT> t132 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*newLength_78).value()), implicit_cast<TNode<Smi>>(t131)));
      USE(implicit_cast<TNode<BoolT>>(t132));
      Branch(implicit_cast<TNode<BoolT>>(t132), label__True_42, label__False_43);
      if (label__True_42->is_used())
      {
        BIND(label__True_42);
        // ../../src/builtins/array.tq:66:25
        {
          // ../../src/builtins/array.tq:67:7
          StoreElements(implicit_cast<TNode<JSObject>>((*a_79).value()), implicit_cast<TNode<FixedArrayBase>>(kEmptyFixedArray()));
          // ../../src/builtins/array.tq:68:7
          int31_t t133 = 0;
          TNode<Smi> t134 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t133)));
          StoreJSArrayLength(implicit_cast<TNode<JSArray>>((*a_79).value()), implicit_cast<TNode<Smi>>(t134));
          // ../../src/builtins/array.tq:69:7
          *_return_73 = implicit_cast<TNode<Object>>((*deletedResult_84).value());
          Goto(label_macro_end_1048);
        }
      }
      BIND(label__False_43);
    }
    // ../../src/builtins/array.tq:72:5
    TNode<FixedArrayBase> t135 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*a_79).value())));
    TNode<FixedArray> t136 = UncheckedCast<FixedArray>(cast12ATFixedArray(implicit_cast<TNode<HeapObject>>(t135), label_Bailout_25));
    USE(implicit_cast<TNode<FixedArray>>(t136));
    TVARIABLE(FixedArray, elements_85_impl);
    auto elements_85 = &elements_85_impl;
    USE(elements_85);
    *elements_85 = implicit_cast<TNode<FixedArray>>(t136);
    // ../../src/builtins/array.tq:73:5
    TNode<Map> t137 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*elements_85).value())));
    TVARIABLE(Map, elementsMap_86_impl);
    auto elementsMap_86 = &elementsMap_86_impl;
    USE(elementsMap_86);
    *elementsMap_86 = implicit_cast<TNode<Map>>(t137);
    // ../../src/builtins/array.tq:77:5
    TVARIABLE(FixedArray, newElements_87_impl);
    auto newElements_87 = &newElements_87_impl;
    USE(newElements_87);
    *newElements_87 = implicit_cast<TNode<FixedArray>>((*elements_85).value());
    // ../../src/builtins/array.tq:78:5
    {
      Label label__True_44_impl(this);
      Label* label__True_44 = &label__True_44_impl;
      USE(label__True_44);
      Label label__False_45_impl(this, {newElements_87});
      Label* label__False_45 = &label__False_45_impl;
      USE(label__False_45);
      Label label__False_46_impl(this);
      Label* label__False_46 = &label__False_46_impl;
      USE(label__False_46);
      TNode<BoolT> t138 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elementsMap_86).value()), implicit_cast<TNode<Object>>(kCOWMap())));
      USE(implicit_cast<TNode<BoolT>>(t138));
      GotoIf(implicit_cast<TNode<BoolT>>(t138), label__True_44);
      int31_t t139 = 0;
      TNode<Smi> t140 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t139)));
      TNode<BoolT> t141 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*lengthDelta_77).value()), implicit_cast<TNode<Smi>>(t140)));
      USE(implicit_cast<TNode<BoolT>>(t141));
      Branch(implicit_cast<TNode<BoolT>>(t141), label__True_44, label__False_45);
      if (label__True_44->is_used())
      {
        BIND(label__True_44);
        // ../../src/builtins/array.tq:78:56
        {
          // ../../src/builtins/array.tq:79:7
          int31_t t142 = 0;
          TNode<Smi> t143 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t142)));
          TNode<FixedArray> t144 = UncheckedCast<FixedArray>(ExtractFixedArray(implicit_cast<TNode<FixedArray>>((*elements_85).value()), implicit_cast<TNode<Smi>>(t143), implicit_cast<TNode<Smi>>((*actualStart_75).value()), implicit_cast<TNode<Smi>>((*newLength_78).value()), implicit_cast<ExtractFixedArrayFlags>(ExtractFixedArrayFlag::kAllFixedArrays)));
          USE(implicit_cast<TNode<FixedArray>>(t144));
          *newElements_87 = implicit_cast<TNode<FixedArray>>(t144);
          // ../../src/builtins/array.tq:81:7
          StoreMap(implicit_cast<TNode<HeapObject>>((*newElements_87).value()), implicit_cast<TNode<Map>>((*elementsMap_86).value()));
          // ../../src/builtins/array.tq:82:7
          StoreElements(implicit_cast<TNode<JSObject>>((*a_79).value()), implicit_cast<TNode<FixedArrayBase>>((*newElements_87).value()));
        }
        Goto(label__False_45);
      }
      BIND(label__False_45);
    }
    // ../../src/builtins/array.tq:86:5
    // ../../src/builtins/array.tq:89:5
    TVARIABLE(Smi, k_88_impl);
    auto k_88 = &k_88_impl;
    USE(k_88);
    *k_88 = implicit_cast<TNode<Smi>>((*actualStart_75).value());
    // ../../src/builtins/array.tq:90:5
    {
      Label label__True_47_impl(this);
      Label* label__True_47 = &label__True_47_impl;
      USE(label__True_47);
      Label label__False_48_impl(this, {k_88});
      Label* label__False_48 = &label__False_48_impl;
      USE(label__False_48);
      int31_t t145 = 0;
      TNode<Smi> t146 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t145)));
      TNode<BoolT> t147 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(p_insertCount), implicit_cast<TNode<Smi>>(t146)));
      USE(implicit_cast<TNode<BoolT>>(t147));
      Branch(implicit_cast<TNode<BoolT>>(t147), label__True_47, label__False_48);
      if (label__True_47->is_used())
      {
        BIND(label__True_47);
        // ../../src/builtins/array.tq:90:26
        {
          // ../../src/builtins/array.tq:91:7
          int31_t t148 = 2;
          TNode<IntPtrT> t149 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(p_args)));
          Label label_body_579_1053_impl(this);
          Label* label_body_579_1053 = &label_body_579_1053_impl;
          USE(label_body_579_1053);
          Label label_increment_580_1054_impl(this);
          Label* label_increment_580_1054 = &label_increment_580_1054_impl;
          USE(label_increment_580_1054);
          Label label_exit_581_1055_impl(this);
          Label* label_exit_581_1055 = &label_exit_581_1055_impl;
          USE(label_exit_581_1055);
          TVARIABLE(IntPtrT, _for_index_t150_582_impl);
          auto _for_index_t150_582 = &_for_index_t150_582_impl;
          USE(_for_index_t150_582);
          TNode<IntPtrT> t151 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t148)));
          *_for_index_t150_582 = implicit_cast<TNode<IntPtrT>>(t151);
          Label label_header_583_1056_impl(this, {_for_index_t150_582, k_88});
          Label* label_header_583_1056 = &label_header_583_1056_impl;
          USE(label_header_583_1056);
          Goto(label_header_583_1056);
          BIND(label_header_583_1056);
          TNode<BoolT> t152 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t150_582).value()), implicit_cast<TNode<IntPtrT>>(t149)));
          Branch(implicit_cast<TNode<BoolT>>(t152), label_body_579_1053, label_exit_581_1055);
          BIND(label_body_579_1053);
          TNode<Object> t153 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(p_args), implicit_cast<TNode<IntPtrT>>((*_for_index_t150_582).value())));
          TVARIABLE(Object, e_89_impl);
          auto e_89 = &e_89_impl;
          USE(e_89);
          *e_89 = implicit_cast<TNode<Object>>(t153);
          // ../../src/builtins/array.tq:91:41
          {
            // ../../src/builtins/array.tq:92:9
            TNode<Smi> t154 = implicit_cast<TNode<Smi>>((*k_88).value());
            USE(t154);
            TNode<Smi> t155 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t156 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>(t155)));
            *k_88 = implicit_cast<TNode<Smi>>(t156);
            StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*newElements_87).value()), implicit_cast<TNode<Smi>>(t154), implicit_cast<TNode<Object>>((*e_89).value()));
          }
          Goto(label_increment_580_1054);
          BIND(label_increment_580_1054);
          TNode<IntPtrT> t157 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t158 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t150_582).value()), implicit_cast<TNode<IntPtrT>>(t157)));
          *_for_index_t150_582 = implicit_cast<TNode<IntPtrT>>(t158);
          Goto(label_header_583_1056);
          BIND(label_exit_581_1055);
        }
        Goto(label__False_48);
      }
      BIND(label__False_48);
    }
    // ../../src/builtins/array.tq:97:5
    TNode<Smi> t159 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_83).value()), implicit_cast<TNode<Smi>>((*actualStart_75).value())));
    USE(implicit_cast<TNode<Smi>>(t159));
    TNode<Smi> t160 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t159), implicit_cast<TNode<Smi>>((*actualDeleteCount_76).value())));
    USE(implicit_cast<TNode<Smi>>(t160));
    TVARIABLE(Smi, count_90_impl);
    auto count_90 = &count_90_impl;
    USE(count_90);
    *count_90 = implicit_cast<TNode<Smi>>(t160);
    // ../../src/builtins/array.tq:98:5
    {
      Label label__True_49_impl(this);
      Label* label__True_49 = &label__True_49_impl;
      USE(label__True_49);
      Label label__False_50_impl(this);
      Label* label__False_50 = &label__False_50_impl;
      USE(label__False_50);
      Label label_header_584_1057_impl(this, {count_90, k_88});
      Label* label_header_584_1057 = &label_header_584_1057_impl;
      USE(label_header_584_1057);
      Goto(label_header_584_1057);
      BIND(label_header_584_1057);
      int31_t t161 = 0;
      TNode<Smi> t162 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t161)));
      TNode<BoolT> t163 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*count_90).value()), implicit_cast<TNode<Smi>>(t162)));
      USE(implicit_cast<TNode<BoolT>>(t163));
      Branch(implicit_cast<TNode<BoolT>>(t163), label__True_49, label__False_50);
      if (label__True_49->is_used())
      {
        BIND(label__True_49);
        // ../../src/builtins/array.tq:98:23
        {
          // ../../src/builtins/array.tq:99:7
          TNode<Smi> t164 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>((*lengthDelta_77).value())));
          USE(implicit_cast<TNode<Smi>>(t164));
          TNode<Object> t165 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elements_85).value()), implicit_cast<TNode<Smi>>(t164)));
          TVARIABLE(Object, e_91_impl);
          auto e_91 = &e_91_impl;
          USE(e_91);
          *e_91 = implicit_cast<TNode<Object>>(t165);
          // ../../src/builtins/array.tq:100:7
          TNode<Smi> t166 = implicit_cast<TNode<Smi>>((*k_88).value());
          USE(t166);
          TNode<Smi> t167 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t168 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>(t167)));
          *k_88 = implicit_cast<TNode<Smi>>(t168);
          StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*newElements_87).value()), implicit_cast<TNode<Smi>>(t166), implicit_cast<TNode<Object>>((*e_91).value()));
          // ../../src/builtins/array.tq:101:7
          TNode<Smi> t169 = implicit_cast<TNode<Smi>>((*count_90).value());
          USE(t169);
          TNode<Smi> t170 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t171 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*count_90).value()), implicit_cast<TNode<Smi>>(t170)));
          *count_90 = implicit_cast<TNode<Smi>>(t171);
        }
        Goto(label_header_584_1057);
      }
      BIND(label__False_50);
    }
    // ../../src/builtins/array.tq:107:5
    {
      Label label__True_51_impl(this);
      Label* label__True_51 = &label__True_51_impl;
      USE(label__True_51);
      Label label__False_52_impl(this, {k_88});
      Label* label__False_52 = &label__False_52_impl;
      USE(label__False_52);
      TNode<BoolT> t172 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*elements_85).value()), implicit_cast<TNode<Object>>((*newElements_87).value())));
      USE(implicit_cast<TNode<BoolT>>(t172));
      Branch(implicit_cast<TNode<BoolT>>(t172), label__True_51, label__False_52);
      if (label__True_51->is_used())
      {
        BIND(label__True_51);
        // ../../src/builtins/array.tq:107:34
        {
          // ../../src/builtins/array.tq:108:7
          TNode<Smi> t173 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>((*elements_85).value())));
          TVARIABLE(Smi, limit_92_impl);
          auto limit_92 = &limit_92_impl;
          USE(limit_92);
          *limit_92 = implicit_cast<TNode<Smi>>(t173);
          // ../../src/builtins/array.tq:109:7
          {
            Label label__True_53_impl(this);
            Label* label__True_53 = &label__True_53_impl;
            USE(label__True_53);
            Label label__False_54_impl(this);
            Label* label__False_54 = &label__False_54_impl;
            USE(label__False_54);
            Label label_header_585_1058_impl(this, {k_88});
            Label* label_header_585_1058 = &label_header_585_1058_impl;
            USE(label_header_585_1058);
            Goto(label_header_585_1058);
            BIND(label_header_585_1058);
            TNode<BoolT> t174 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>((*limit_92).value())));
            USE(implicit_cast<TNode<BoolT>>(t174));
            Branch(implicit_cast<TNode<BoolT>>(t174), label__True_53, label__False_54);
            if (label__True_53->is_used())
            {
              BIND(label__True_53);
              // ../../src/builtins/array.tq:109:25
              {
                // ../../src/builtins/array.tq:110:9
                TNode<Smi> t175 = implicit_cast<TNode<Smi>>((*k_88).value());
                USE(t175);
                TNode<Smi> t176 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t177 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_88).value()), implicit_cast<TNode<Smi>>(t176)));
                *k_88 = implicit_cast<TNode<Smi>>(t177);
                StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*newElements_87).value()), implicit_cast<TNode<Smi>>(t175), implicit_cast<TNode<Object>>(Hole()));
              }
              Goto(label_header_585_1058);
            }
            BIND(label__False_54);
          }
        }
        Goto(label__False_52);
      }
      BIND(label__False_52);
    }
    // ../../src/builtins/array.tq:115:5
    StoreJSArrayLength(implicit_cast<TNode<JSArray>>((*a_79).value()), implicit_cast<TNode<Smi>>((*newLength_78).value()));
    // ../../src/builtins/array.tq:117:5
    *_return_73 = implicit_cast<TNode<Object>>((*deletedResult_84).value());
    Goto(label_macro_end_1048);
  }
  BIND(label_macro_end_1048);
  return implicit_cast<TNode<Object>>((*_return_73).value());
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
  // ../../src/builtins/array.tq:122:65
  {
    // ../../src/builtins/array.tq:124:5
    TNode<JSReceiver> t178 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t178));
    TVARIABLE(JSReceiver, o_93_impl);
    auto o_93 = &o_93_impl;
    USE(o_93);
    *o_93 = implicit_cast<TNode<JSReceiver>>(t178);
    // ../../src/builtins/array.tq:127:5
    TNode<Number> t179 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value())));
    USE(implicit_cast<TNode<Number>>(t179));
    TVARIABLE(Number, len_94_impl);
    auto len_94 = &len_94_impl;
    USE(len_94);
    *len_94 = implicit_cast<TNode<Number>>(t179);
    // ../../src/builtins/array.tq:130:5
    int31_t t180 = 0;
    TNode<IntPtrT> t181 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t180)));
    TNode<Object> t182 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t181)));
    TVARIABLE(Object, start_95_impl);
    auto start_95 = &start_95_impl;
    USE(start_95);
    *start_95 = implicit_cast<TNode<Object>>(t182);
    // ../../src/builtins/array.tq:131:5
    TNode<Number> t183 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*start_95).value())));
    USE(implicit_cast<TNode<Number>>(t183));
    TVARIABLE(Number, relativeStart_96_impl);
    auto relativeStart_96 = &relativeStart_96_impl;
    USE(relativeStart_96);
    *relativeStart_96 = implicit_cast<TNode<Number>>(t183);
    // ../../src/builtins/array.tq:136:5
    auto t184 = [=]() {
      TNode<Number> t186 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*relativeStart_96).value())));
      USE(implicit_cast<TNode<Number>>(t186));
      int31_t t187 = 0;
      TNode<Number> t188 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t187)));
      TNode<Number> t189 = UncheckedCast<Number>(max(implicit_cast<TNode<Number>>(t186), implicit_cast<TNode<Number>>(t188)));
      USE(implicit_cast<TNode<Number>>(t189));
      return implicit_cast<TNode<Number>>(t189);
    };
    auto t185 = [=]() {
      TNode<Number> t190 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>((*relativeStart_96).value()), implicit_cast<TNode<Number>>((*len_94).value())));
      USE(implicit_cast<TNode<Number>>(t190));
      return implicit_cast<TNode<Number>>(t190);
    };
    TVARIABLE(Number, t191_586_impl);
    auto t191_586 = &t191_586_impl;
    USE(t191_586);
    {
      Label label__True_55_impl(this);
      Label* label__True_55 = &label__True_55_impl;
      USE(label__True_55);
      Label label__False_56_impl(this);
      Label* label__False_56 = &label__False_56_impl;
      USE(label__False_56);
      Label label__done_587_1059_impl(this, {t191_586});
      Label* label__done_587_1059 = &label__done_587_1059_impl;
      USE(label__done_587_1059);
      int31_t t192 = 0;
      TNode<Number> t193 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t192)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*relativeStart_96).value()), implicit_cast<TNode<Number>>(t193), label__True_55, label__False_56);
      BIND(label__True_55);
            *t191_586 = implicit_cast<TNode<Number>>(t184());
      Goto(label__done_587_1059);
      BIND(label__False_56);
            *t191_586 = implicit_cast<TNode<Number>>(t185());
      Goto(label__done_587_1059);
      BIND(label__done_587_1059);
    }
    TVARIABLE(Number, actualStart_97_impl);
    auto actualStart_97 = &actualStart_97_impl;
    USE(actualStart_97);
    *actualStart_97 = implicit_cast<TNode<Number>>((*t191_586).value());
    // ../../src/builtins/array.tq:140:5
    TVARIABLE(Smi, insertCount_98_impl);
    auto insertCount_98 = &insertCount_98_impl;
    USE(insertCount_98);
    // ../../src/builtins/array.tq:141:5
    TVARIABLE(Number, actualDeleteCount_99_impl);
    auto actualDeleteCount_99 = &actualDeleteCount_99_impl;
    USE(actualDeleteCount_99);
    // ../../src/builtins/array.tq:143:5
    {
      Label label__True_57_impl(this);
      Label* label__True_57 = &label__True_57_impl;
      USE(label__True_57);
      Label label__False_58_impl(this);
      Label* label__False_58 = &label__False_58_impl;
      USE(label__False_58);
      Label label_if_done_label_588_1060_impl(this, {actualDeleteCount_99, insertCount_98});
      Label* label_if_done_label_588_1060 = &label_if_done_label_588_1060_impl;
      USE(label_if_done_label_588_1060);
      TNode<IntPtrT> t194 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t195 = 0;
      TNode<IntPtrT> t196 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t195)));
      TNode<BoolT> t197 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t194), implicit_cast<TNode<IntPtrT>>(t196)));
      USE(implicit_cast<TNode<BoolT>>(t197));
      Branch(implicit_cast<TNode<BoolT>>(t197), label__True_57, label__False_58);
      if (label__True_57->is_used())
      {
        BIND(label__True_57);
        // ../../src/builtins/array.tq:143:32
        {
          // ../../src/builtins/array.tq:145:7
          int31_t t198 = 0;
          TNode<Smi> t199 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t198)));
          *insertCount_98 = implicit_cast<TNode<Smi>>(t199);
          // ../../src/builtins/array.tq:147:7
          int31_t t200 = 0;
          TNode<Number> t201 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t200)));
          *actualDeleteCount_99 = implicit_cast<TNode<Number>>(t201);
        }
        Goto(label_if_done_label_588_1060);
      }
      if (label__False_58->is_used())
      {
        BIND(label__False_58);
        // ../../src/builtins/array.tq:149:12
        {
          Label label__True_59_impl(this);
          Label* label__True_59 = &label__True_59_impl;
          USE(label__True_59);
          Label label__False_60_impl(this);
          Label* label__False_60 = &label__False_60_impl;
          USE(label__False_60);
          Label label_if_done_label_589_1061_impl(this, {actualDeleteCount_99, insertCount_98});
          Label* label_if_done_label_589_1061 = &label_if_done_label_589_1061_impl;
          USE(label_if_done_label_589_1061);
          TNode<IntPtrT> t202 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
          int31_t t203 = 1;
          TNode<IntPtrT> t204 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t203)));
          TNode<BoolT> t205 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t202), implicit_cast<TNode<IntPtrT>>(t204)));
          USE(implicit_cast<TNode<BoolT>>(t205));
          Branch(implicit_cast<TNode<BoolT>>(t205), label__True_59, label__False_60);
          if (label__True_59->is_used())
          {
            BIND(label__True_59);
            // ../../src/builtins/array.tq:149:39
            {
              // ../../src/builtins/array.tq:151:7
              int31_t t206 = 0;
              TNode<Smi> t207 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t206)));
              *insertCount_98 = implicit_cast<TNode<Smi>>(t207);
              // ../../src/builtins/array.tq:153:7
              TNode<Number> t208 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualStart_97).value())));
              USE(implicit_cast<TNode<Number>>(t208));
              *actualDeleteCount_99 = implicit_cast<TNode<Number>>(t208);
            }
            Goto(label_if_done_label_589_1061);
          }
          if (label__False_60->is_used())
          {
            BIND(label__False_60);
            // ../../src/builtins/array.tq:155:12
            {
              // ../../src/builtins/array.tq:157:7
              TNode<IntPtrT> t209 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
              TNode<Smi> t210 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<IntPtrT>>(t209)));
              USE(implicit_cast<TNode<Smi>>(t210));
              int31_t t211 = 2;
              TNode<Smi> t212 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t211)));
              TNode<Smi> t213 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t210), implicit_cast<TNode<Smi>>(t212)));
              USE(implicit_cast<TNode<Smi>>(t213));
              *insertCount_98 = implicit_cast<TNode<Smi>>(t213);
              // ../../src/builtins/array.tq:159:7
              int31_t t214 = 1;
              TNode<IntPtrT> t215 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t214)));
              TNode<Object> t216 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t215)));
              TVARIABLE(Object, deleteCount_100_impl);
              auto deleteCount_100 = &deleteCount_100_impl;
              USE(deleteCount_100);
              *deleteCount_100 = implicit_cast<TNode<Object>>(t216);
              // ../../src/builtins/array.tq:160:7
              TNode<Number> t217 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*deleteCount_100).value())));
              USE(implicit_cast<TNode<Number>>(t217));
              TVARIABLE(Number, dc_101_impl);
              auto dc_101 = &dc_101_impl;
              USE(dc_101);
              *dc_101 = implicit_cast<TNode<Number>>(t217);
              // ../../src/builtins/array.tq:162:7
              int31_t t218 = 0;
              TNode<Number> t219 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t218)));
              TNode<Number> t220 = UncheckedCast<Number>(max(implicit_cast<TNode<Number>>((*dc_101).value()), implicit_cast<TNode<Number>>(t219)));
              USE(implicit_cast<TNode<Number>>(t220));
              TNode<Number> t221 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualStart_97).value())));
              USE(implicit_cast<TNode<Number>>(t221));
              TNode<Number> t222 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>(t220), implicit_cast<TNode<Number>>(t221)));
              USE(implicit_cast<TNode<Number>>(t222));
              *actualDeleteCount_99 = implicit_cast<TNode<Number>>(t222);
            }
            Goto(label_if_done_label_589_1061);
          }
          BIND(label_if_done_label_589_1061);
        }
        Goto(label_if_done_label_588_1060);
      }
      BIND(label_if_done_label_588_1060);
    }
    // ../../src/builtins/array.tq:167:5
    {
      Label label__True_61_impl(this);
      Label* label__True_61 = &label__True_61_impl;
      USE(label__True_61);
      Label label__False_62_impl(this, {});
      Label* label__False_62 = &label__False_62_impl;
      USE(label__False_62);
      TNode<Number> t223 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*insertCount_98).value())));
      USE(implicit_cast<TNode<Number>>(t223));
      TNode<Number> t224 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t223), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
      USE(implicit_cast<TNode<Number>>(t224));
      TNode<Number> t225 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(kMaxSafeInteger)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t224), implicit_cast<TNode<Number>>(t225), label__True_61, label__False_62);
      if (label__True_61->is_used())
      {
        BIND(label__True_61);
        // ../../src/builtins/array.tq:167:66
        {
          // ../../src/builtins/array.tq:168:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidArrayLength));
        }
      }
      BIND(label__False_62);
    }
    // ../../src/builtins/array.tq:171:5
    {
      Label label_try_done_590_1062_impl(this);
      Label* label_try_done_590_1062 = &label_try_done_590_1062_impl;
      USE(label_try_done_590_1062);
      Label label_Bailout_63_impl(this);
      Label* label_Bailout_63 = &label_Bailout_63_impl;
      USE(label_Bailout_63);
      Label label_try_begin_591_1063_impl(this);
      Label* label_try_begin_591_1063 = &label_try_begin_591_1063_impl;
      USE(label_try_begin_591_1063);
      Goto(label_try_begin_591_1063);
      if (label_try_begin_591_1063->is_used())
      {
        BIND(label_try_begin_591_1063);
        // ../../src/builtins/array.tq:171:9
        {
          // ../../src/builtins/array.tq:172:7
          TNode<Object> t226 = UncheckedCast<Object>(FastArraySplice(implicit_cast<TNode<Context>>(p_context), implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualStart_97).value()), implicit_cast<TNode<Smi>>((*insertCount_98).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value()), label_Bailout_63));
          USE(implicit_cast<TNode<Object>>(t226));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t226));
        }
      }
      if (label_Bailout_63->is_used())
      {
        BIND(label_Bailout_63);
        // ../../src/builtins/array.tq:176:19
        {
        }
        Goto(label_try_done_590_1062);
      }
      BIND(label_try_done_590_1062);
    }
    // ../../src/builtins/array.tq:181:5
    TNode<Object> t227 = UncheckedCast<Object>(ArraySpeciesCreate(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
    USE(implicit_cast<TNode<Object>>(t227));
    TVARIABLE(Object, a_102_impl);
    auto a_102 = &a_102_impl;
    USE(a_102);
    *a_102 = implicit_cast<TNode<Object>>(t227);
    // ../../src/builtins/array.tq:184:5
    int31_t t228 = 0;
    TVARIABLE(Number, k_103_impl);
    auto k_103 = &k_103_impl;
    USE(k_103);
    TNode<Number> t229 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t228)));
    *k_103 = implicit_cast<TNode<Number>>(t229);
    // ../../src/builtins/array.tq:187:5
    {
      Label label__True_64_impl(this);
      Label* label__True_64 = &label__True_64_impl;
      USE(label__True_64);
      Label label__False_65_impl(this);
      Label* label__False_65 = &label__False_65_impl;
      USE(label__False_65);
      Label label_header_592_1064_impl(this, {k_103});
      Label* label_header_592_1064 = &label_header_592_1064_impl;
      USE(label_header_592_1064);
      Goto(label_header_592_1064);
      BIND(label_header_592_1064);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_103).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value()), label__True_64, label__False_65);
      if (label__True_64->is_used())
      {
        BIND(label__True_64);
        // ../../src/builtins/array.tq:187:35
        {
          // ../../src/builtins/array.tq:189:7
          TNode<Number> t230 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*actualStart_97).value()), implicit_cast<TNode<Number>>((*k_103).value())));
          USE(implicit_cast<TNode<Number>>(t230));
          TNode<String> t231 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t230)));
          USE(implicit_cast<TNode<String>>(t231));
          TVARIABLE(String, from_104_impl);
          auto from_104 = &from_104_impl;
          USE(from_104);
          *from_104 = implicit_cast<TNode<String>>(t231);
          // ../../src/builtins/array.tq:192:7
          TNode<Oddball> t232 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_104).value())));
          USE(implicit_cast<TNode<Oddball>>(t232));
          TVARIABLE(Oddball, fromPresent_105_impl);
          auto fromPresent_105 = &fromPresent_105_impl;
          USE(fromPresent_105);
          *fromPresent_105 = implicit_cast<TNode<Oddball>>(t232);
          // ../../src/builtins/array.tq:195:7
          {
            Label label__True_66_impl(this);
            Label* label__True_66 = &label__True_66_impl;
            USE(label__True_66);
            Label label__False_67_impl(this, {});
            Label* label__False_67 = &label__False_67_impl;
            USE(label__False_67);
            TNode<BoolT> t233 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_105).value()), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t233));
            Branch(implicit_cast<TNode<BoolT>>(t233), label__True_66, label__False_67);
            if (label__True_66->is_used())
            {
              BIND(label__True_66);
              // ../../src/builtins/array.tq:195:32
              {
                // ../../src/builtins/array.tq:197:9
                TNode<Object> t234 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_104).value())));
                USE(implicit_cast<TNode<Object>>(t234));
                TVARIABLE(Object, fromValue_106_impl);
                auto fromValue_106 = &fromValue_106_impl;
                USE(fromValue_106);
                *fromValue_106 = implicit_cast<TNode<Object>>(t234);
                // ../../src/builtins/array.tq:200:9
                TNode<String> t235 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*k_103).value())));
                USE(implicit_cast<TNode<String>>(t235));
                CallRuntime(Runtime::kCreateDataProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*a_102).value()), implicit_cast<TNode<Object>>(t235), implicit_cast<TNode<Object>>((*fromValue_106).value()));
              }
              Goto(label__False_67);
            }
            BIND(label__False_67);
          }
          // ../../src/builtins/array.tq:204:7
          int31_t t236 = 1;
          TNode<Number> t237 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t236)));
          TNode<Number> t238 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_103).value()), implicit_cast<TNode<Number>>(t237)));
          USE(implicit_cast<TNode<Number>>(t238));
          *k_103 = implicit_cast<TNode<Number>>(t238);
        }
        Goto(label_header_592_1064);
      }
      BIND(label__False_65);
    }
    // ../../src/builtins/array.tq:208:5
    const char* t239 = "length";
    TNode<Object> t240 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t239)));
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*a_102).value()), implicit_cast<TNode<Object>>(t240), implicit_cast<TNode<Object>>((*actualDeleteCount_99).value()));
    // ../../src/builtins/array.tq:215:5
    TVARIABLE(Number, itemCount_107_impl);
    auto itemCount_107 = &itemCount_107_impl;
    USE(itemCount_107);
    *itemCount_107 = implicit_cast<TNode<Number>>((*insertCount_98).value());
    // ../../src/builtins/array.tq:218:5
    {
      Label label__True_68_impl(this);
      Label* label__True_68 = &label__True_68_impl;
      USE(label__True_68);
      Label label__False_69_impl(this);
      Label* label__False_69 = &label__False_69_impl;
      USE(label__False_69);
      Label label_if_done_label_593_1065_impl(this, {});
      Label* label_if_done_label_593_1065 = &label_if_done_label_593_1065_impl;
      USE(label_if_done_label_593_1065);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*itemCount_107).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value()), label__True_68, label__False_69);
      if (label__True_68->is_used())
      {
        BIND(label__True_68);
        // ../../src/builtins/array.tq:218:40
        {
          // ../../src/builtins/array.tq:220:7
          TVARIABLE(Number, k_108_impl);
          auto k_108 = &k_108_impl;
          USE(k_108);
          *k_108 = implicit_cast<TNode<Number>>((*actualStart_97).value());
          // ../../src/builtins/array.tq:223:7
          {
            Label label__True_70_impl(this);
            Label* label__True_70 = &label__True_70_impl;
            USE(label__True_70);
            Label label__False_71_impl(this);
            Label* label__False_71 = &label__False_71_impl;
            USE(label__False_71);
            Label label_header_594_1066_impl(this, {k_108});
            Label* label_header_594_1066 = &label_header_594_1066_impl;
            USE(label_header_594_1066);
            Goto(label_header_594_1066);
            BIND(label_header_594_1066);
            TNode<Number> t241 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
            USE(implicit_cast<TNode<Number>>(t241));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t241), label__True_70, label__False_71);
            if (label__True_70->is_used())
            {
              BIND(label__True_70);
              // ../../src/builtins/array.tq:223:45
              {
                // ../../src/builtins/array.tq:225:9
                TNode<Number> t242 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
                USE(implicit_cast<TNode<Number>>(t242));
                TNode<String> t243 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t242)));
                USE(implicit_cast<TNode<String>>(t243));
                TVARIABLE(String, from_109_impl);
                auto from_109 = &from_109_impl;
                USE(from_109);
                *from_109 = implicit_cast<TNode<String>>(t243);
                // ../../src/builtins/array.tq:227:9
                TNode<Number> t244 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>((*itemCount_107).value())));
                USE(implicit_cast<TNode<Number>>(t244));
                TNode<String> t245 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t244)));
                USE(implicit_cast<TNode<String>>(t245));
                TVARIABLE(String, to_110_impl);
                auto to_110 = &to_110_impl;
                USE(to_110);
                *to_110 = implicit_cast<TNode<String>>(t245);
                // ../../src/builtins/array.tq:230:9
                TNode<Oddball> t246 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_109).value())));
                USE(implicit_cast<TNode<Oddball>>(t246));
                TVARIABLE(Oddball, fromPresent_111_impl);
                auto fromPresent_111 = &fromPresent_111_impl;
                USE(fromPresent_111);
                *fromPresent_111 = implicit_cast<TNode<Oddball>>(t246);
                // ../../src/builtins/array.tq:233:9
                {
                  Label label__True_72_impl(this);
                  Label* label__True_72 = &label__True_72_impl;
                  USE(label__True_72);
                  Label label__False_73_impl(this);
                  Label* label__False_73 = &label__False_73_impl;
                  USE(label__False_73);
                  Label label_if_done_label_595_1067_impl(this, {});
                  Label* label_if_done_label_595_1067 = &label_if_done_label_595_1067_impl;
                  USE(label_if_done_label_595_1067);
                  TNode<BoolT> t247 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_111).value()), implicit_cast<TNode<Object>>(True())));
                  USE(implicit_cast<TNode<BoolT>>(t247));
                  Branch(implicit_cast<TNode<BoolT>>(t247), label__True_72, label__False_73);
                  if (label__True_72->is_used())
                  {
                    BIND(label__True_72);
                    // ../../src/builtins/array.tq:233:34
                    {
                      // ../../src/builtins/array.tq:235:11
                      TNode<Object> t248 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_109).value())));
                      USE(implicit_cast<TNode<Object>>(t248));
                      TVARIABLE(Object, fromValue_112_impl);
                      auto fromValue_112 = &fromValue_112_impl;
                      USE(fromValue_112);
                      *fromValue_112 = implicit_cast<TNode<Object>>(t248);
                      // ../../src/builtins/array.tq:238:11
                      CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*to_110).value()), implicit_cast<TNode<Object>>((*fromValue_112).value()));
                    }
                    Goto(label_if_done_label_595_1067);
                  }
                  if (label__False_73->is_used())
                  {
                    BIND(label__False_73);
                    // ../../src/builtins/array.tq:241:16
                    {
                      // ../../src/builtins/array.tq:243:11
                      TNode<Smi> t249 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                      CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*to_110).value()), implicit_cast<TNode<Smi>>(t249));
                    }
                    Goto(label_if_done_label_595_1067);
                  }
                  BIND(label_if_done_label_595_1067);
                }
                // ../../src/builtins/array.tq:246:9
                int31_t t250 = 1;
                TNode<Number> t251 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t250)));
                TNode<Number> t252 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t251)));
                USE(implicit_cast<TNode<Number>>(t252));
                *k_108 = implicit_cast<TNode<Number>>(t252);
              }
              Goto(label_header_594_1066);
            }
            BIND(label__False_71);
          }
          // ../../src/builtins/array.tq:250:7
          *k_108 = implicit_cast<TNode<Number>>((*len_94).value());
          // ../../src/builtins/array.tq:252:7
          {
            Label label__True_74_impl(this);
            Label* label__True_74 = &label__True_74_impl;
            USE(label__True_74);
            Label label__False_75_impl(this);
            Label* label__False_75 = &label__False_75_impl;
            USE(label__False_75);
            Label label_header_596_1068_impl(this, {k_108});
            Label* label_header_596_1068 = &label_header_596_1068_impl;
            USE(label_header_596_1068);
            Goto(label_header_596_1068);
            BIND(label_header_596_1068);
            TNode<Number> t253 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
            USE(implicit_cast<TNode<Number>>(t253));
            TNode<Number> t254 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(t253), implicit_cast<TNode<Number>>((*itemCount_107).value())));
            USE(implicit_cast<TNode<Number>>(t254));
            BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t254), label__True_74, label__False_75);
            if (label__True_74->is_used())
            {
              BIND(label__True_74);
              // ../../src/builtins/array.tq:252:57
              {
                // ../../src/builtins/array.tq:254:9
                int31_t t255 = 1;
                TNode<Number> t256 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t255)));
                TNode<Number> t257 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t256)));
                USE(implicit_cast<TNode<Number>>(t257));
                TNode<String> t258 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t257)));
                USE(implicit_cast<TNode<String>>(t258));
                TNode<Smi> t259 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>(t258), implicit_cast<TNode<Smi>>(t259));
                // ../../src/builtins/array.tq:257:9
                int31_t t260 = 1;
                TNode<Number> t261 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t260)));
                TNode<Number> t262 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_108).value()), implicit_cast<TNode<Number>>(t261)));
                USE(implicit_cast<TNode<Number>>(t262));
                *k_108 = implicit_cast<TNode<Number>>(t262);
              }
              Goto(label_header_596_1068);
            }
            BIND(label__False_75);
          }
        }
        Goto(label_if_done_label_593_1065);
      }
      if (label__False_69->is_used())
      {
        BIND(label__False_69);
        // ../../src/builtins/array.tq:260:12
        {
          Label label__True_76_impl(this);
          Label* label__True_76 = &label__True_76_impl;
          USE(label__True_76);
          Label label__False_77_impl(this, {});
          Label* label__False_77 = &label__False_77_impl;
          USE(label__False_77);
          BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*itemCount_107).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value()), label__True_76, label__False_77);
          if (label__True_76->is_used())
          {
            BIND(label__True_76);
            // ../../src/builtins/array.tq:260:47
            {
              // ../../src/builtins/array.tq:262:7
              TNode<Number> t263 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
              USE(implicit_cast<TNode<Number>>(t263));
              TVARIABLE(Number, k_113_impl);
              auto k_113 = &k_113_impl;
              USE(k_113);
              *k_113 = implicit_cast<TNode<Number>>(t263);
              // ../../src/builtins/array.tq:265:7
              {
                Label label__True_78_impl(this);
                Label* label__True_78 = &label__True_78_impl;
                USE(label__True_78);
                Label label__False_79_impl(this);
                Label* label__False_79 = &label__False_79_impl;
                USE(label__False_79);
                Label label_header_597_1069_impl(this, {k_113});
                Label* label_header_597_1069 = &label_header_597_1069_impl;
                USE(label_header_597_1069);
                Goto(label_header_597_1069);
                BIND(label_header_597_1069);
                BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>((*actualStart_97).value()), label__True_78, label__False_79);
                if (label__True_78->is_used())
                {
                  BIND(label__True_78);
                  // ../../src/builtins/array.tq:265:31
                  {
                    // ../../src/builtins/array.tq:267:9
                    TNode<Number> t264 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
                    USE(implicit_cast<TNode<Number>>(t264));
                    int31_t t265 = 1;
                    TNode<Number> t266 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t265)));
                    TNode<Number> t267 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t264), implicit_cast<TNode<Number>>(t266)));
                    USE(implicit_cast<TNode<Number>>(t267));
                    TNode<String> t268 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t267)));
                    USE(implicit_cast<TNode<String>>(t268));
                    TVARIABLE(String, from_114_impl);
                    auto from_114 = &from_114_impl;
                    USE(from_114);
                    *from_114 = implicit_cast<TNode<String>>(t268);
                    // ../../src/builtins/array.tq:270:9
                    TNode<Number> t269 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>((*itemCount_107).value())));
                    USE(implicit_cast<TNode<Number>>(t269));
                    int31_t t270 = 1;
                    TNode<Number> t271 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t270)));
                    TNode<Number> t272 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t269), implicit_cast<TNode<Number>>(t271)));
                    USE(implicit_cast<TNode<Number>>(t272));
                    TNode<String> t273 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t272)));
                    USE(implicit_cast<TNode<String>>(t273));
                    TVARIABLE(String, to_115_impl);
                    auto to_115 = &to_115_impl;
                    USE(to_115);
                    *to_115 = implicit_cast<TNode<String>>(t273);
                    // ../../src/builtins/array.tq:273:9
                    TNode<Oddball> t274 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_114).value())));
                    USE(implicit_cast<TNode<Oddball>>(t274));
                    TVARIABLE(Oddball, fromPresent_116_impl);
                    auto fromPresent_116 = &fromPresent_116_impl;
                    USE(fromPresent_116);
                    *fromPresent_116 = implicit_cast<TNode<Oddball>>(t274);
                    // ../../src/builtins/array.tq:276:9
                    {
                      Label label__True_80_impl(this);
                      Label* label__True_80 = &label__True_80_impl;
                      USE(label__True_80);
                      Label label__False_81_impl(this);
                      Label* label__False_81 = &label__False_81_impl;
                      USE(label__False_81);
                      Label label_if_done_label_598_1070_impl(this, {});
                      Label* label_if_done_label_598_1070 = &label_if_done_label_598_1070_impl;
                      USE(label_if_done_label_598_1070);
                      TNode<BoolT> t275 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*fromPresent_116).value()), implicit_cast<TNode<Object>>(True())));
                      USE(implicit_cast<TNode<BoolT>>(t275));
                      Branch(implicit_cast<TNode<BoolT>>(t275), label__True_80, label__False_81);
                      if (label__True_80->is_used())
                      {
                        BIND(label__True_80);
                        // ../../src/builtins/array.tq:276:34
                        {
                          // ../../src/builtins/array.tq:278:11
                          TNode<Object> t276 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*from_114).value())));
                          USE(implicit_cast<TNode<Object>>(t276));
                          TVARIABLE(Object, fromValue_117_impl);
                          auto fromValue_117 = &fromValue_117_impl;
                          USE(fromValue_117);
                          *fromValue_117 = implicit_cast<TNode<Object>>(t276);
                          // ../../src/builtins/array.tq:281:11
                          CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*to_115).value()), implicit_cast<TNode<Object>>((*fromValue_117).value()));
                        }
                        Goto(label_if_done_label_598_1070);
                      }
                      if (label__False_81->is_used())
                      {
                        BIND(label__False_81);
                        // ../../src/builtins/array.tq:284:16
                        {
                          // ../../src/builtins/array.tq:286:11
                          TNode<Smi> t277 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                          CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>((*to_115).value()), implicit_cast<TNode<Smi>>(t277));
                        }
                        Goto(label_if_done_label_598_1070);
                      }
                      BIND(label_if_done_label_598_1070);
                    }
                    // ../../src/builtins/array.tq:290:9
                    int31_t t278 = 1;
                    TNode<Number> t279 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t278)));
                    TNode<Number> t280 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*k_113).value()), implicit_cast<TNode<Number>>(t279)));
                    USE(implicit_cast<TNode<Number>>(t280));
                    *k_113 = implicit_cast<TNode<Number>>(t280);
                  }
                  Goto(label_header_597_1069);
                }
                BIND(label__False_79);
              }
            }
            Goto(label__False_77);
          }
          BIND(label__False_77);
        }
        Goto(label_if_done_label_593_1065);
      }
      BIND(label_if_done_label_593_1065);
    }
    // ../../src/builtins/array.tq:295:5
    *k_103 = implicit_cast<TNode<Number>>((*actualStart_97).value());
    // ../../src/builtins/array.tq:300:5
    {
      Label label__True_82_impl(this);
      Label* label__True_82 = &label__True_82_impl;
      USE(label__True_82);
      Label label__False_83_impl(this, {k_103});
      Label* label__False_83 = &label__False_83_impl;
      USE(label__False_83);
      TNode<IntPtrT> t281 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t282 = 2;
      TNode<IntPtrT> t283 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t282)));
      TNode<BoolT> t284 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t281), implicit_cast<TNode<IntPtrT>>(t283)));
      USE(implicit_cast<TNode<BoolT>>(t284));
      Branch(implicit_cast<TNode<BoolT>>(t284), label__True_82, label__False_83);
      if (label__True_82->is_used())
      {
        BIND(label__True_82);
        // ../../src/builtins/array.tq:300:31
        {
          // ../../src/builtins/array.tq:301:7
          int31_t t285 = 2;
          TNode<IntPtrT> t286 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
          Label label_body_599_1071_impl(this);
          Label* label_body_599_1071 = &label_body_599_1071_impl;
          USE(label_body_599_1071);
          Label label_increment_600_1072_impl(this);
          Label* label_increment_600_1072 = &label_increment_600_1072_impl;
          USE(label_increment_600_1072);
          Label label_exit_601_1073_impl(this);
          Label* label_exit_601_1073 = &label_exit_601_1073_impl;
          USE(label_exit_601_1073);
          TVARIABLE(IntPtrT, _for_index_t287_602_impl);
          auto _for_index_t287_602 = &_for_index_t287_602_impl;
          USE(_for_index_t287_602);
          TNode<IntPtrT> t288 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t285)));
          *_for_index_t287_602 = implicit_cast<TNode<IntPtrT>>(t288);
          Label label_header_603_1074_impl(this, {_for_index_t287_602, k_103});
          Label* label_header_603_1074 = &label_header_603_1074_impl;
          USE(label_header_603_1074);
          Goto(label_header_603_1074);
          BIND(label_header_603_1074);
          TNode<BoolT> t289 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*_for_index_t287_602).value()), implicit_cast<TNode<IntPtrT>>(t286)));
          Branch(implicit_cast<TNode<BoolT>>(t289), label_body_599_1071, label_exit_601_1073);
          BIND(label_body_599_1071);
          TNode<Object> t290 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>((*_for_index_t287_602).value())));
          TVARIABLE(Object, e_118_impl);
          auto e_118 = &e_118_impl;
          USE(e_118);
          *e_118 = implicit_cast<TNode<Object>>(t290);
          // ../../src/builtins/array.tq:301:46
          {
            // ../../src/builtins/array.tq:303:9
            TNode<String> t291 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*k_103).value())));
            USE(implicit_cast<TNode<String>>(t291));
            CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>(t291), implicit_cast<TNode<Object>>((*e_118).value()));
            // ../../src/builtins/array.tq:306:9
            int31_t t292 = 1;
            TNode<Number> t293 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t292)));
            TNode<Number> t294 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*k_103).value()), implicit_cast<TNode<Number>>(t293)));
            USE(implicit_cast<TNode<Number>>(t294));
            *k_103 = implicit_cast<TNode<Number>>(t294);
          }
          Goto(label_increment_600_1072);
          BIND(label_increment_600_1072);
          TNode<IntPtrT> t295 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(1)));
          TNode<IntPtrT> t296 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*_for_index_t287_602).value()), implicit_cast<TNode<IntPtrT>>(t295)));
          *_for_index_t287_602 = implicit_cast<TNode<IntPtrT>>(t296);
          Goto(label_header_603_1074);
          BIND(label_exit_601_1073);
        }
        Goto(label__False_83);
      }
      BIND(label__False_83);
    }
    // ../../src/builtins/array.tq:312:5
    const char* t297 = "length";
    TNode<Number> t298 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*len_94).value()), implicit_cast<TNode<Number>>((*actualDeleteCount_99).value())));
    USE(implicit_cast<TNode<Number>>(t298));
    TNode<Number> t299 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(t298), implicit_cast<TNode<Number>>((*itemCount_107).value())));
    USE(implicit_cast<TNode<Number>>(t299));
    TNode<Object> t300 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t297)));
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_93).value()), implicit_cast<TNode<Object>>(t300), implicit_cast<TNode<Object>>(t299));
    // ../../src/builtins/array.tq:314:5
    arguments->PopAndReturn(implicit_cast<TNode<Object>>((*a_102).value()));
  }
}

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::ConvertToRelativeIndex(TNode<Number> p_index, TNode<Number> p_length) {
  TVARIABLE(Number, _return_119_impl);
  auto _return_119 = &_return_119_impl;
  USE(_return_119);
  Label label_macro_end_1075_impl(this, {_return_119});
  Label* label_macro_end_1075 = &label_macro_end_1075_impl;
  USE(label_macro_end_1075);
  // ../../src/builtins/array-copywithin.tq:6:71
  {
    // ../../src/builtins/array-copywithin.tq:7:5
    auto t301 = [=]() {
      TNode<Number> t303 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>(p_index), implicit_cast<TNode<Number>>(p_length)));
      USE(implicit_cast<TNode<Number>>(t303));
      int31_t t304 = 0;
      TNode<Number> t305 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t304)));
      TNode<Number> t306 = UncheckedCast<Number>(max(implicit_cast<TNode<Number>>(t303), implicit_cast<TNode<Number>>(t305)));
      USE(implicit_cast<TNode<Number>>(t306));
      return implicit_cast<TNode<Number>>(t306);
    };
    auto t302 = [=]() {
      TNode<Number> t307 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>(p_index), implicit_cast<TNode<Number>>(p_length)));
      USE(implicit_cast<TNode<Number>>(t307));
      return implicit_cast<TNode<Number>>(t307);
    };
    TVARIABLE(Number, t308_604_impl);
    auto t308_604 = &t308_604_impl;
    USE(t308_604);
    {
      Label label__True_84_impl(this);
      Label* label__True_84 = &label__True_84_impl;
      USE(label__True_84);
      Label label__False_85_impl(this);
      Label* label__False_85 = &label__False_85_impl;
      USE(label__False_85);
      Label label__done_605_1076_impl(this, {t308_604});
      Label* label__done_605_1076 = &label__done_605_1076_impl;
      USE(label__done_605_1076);
      int31_t t309 = 0;
      TNode<Number> t310 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t309)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>(p_index), implicit_cast<TNode<Number>>(t310), label__True_84, label__False_85);
      BIND(label__True_84);
            *t308_604 = implicit_cast<TNode<Number>>(t301());
      Goto(label__done_605_1076);
      BIND(label__False_85);
            *t308_604 = implicit_cast<TNode<Number>>(t302());
      Goto(label__done_605_1076);
      BIND(label__done_605_1076);
    }
    *_return_119 = implicit_cast<TNode<Number>>((*t308_604).value());
    Goto(label_macro_end_1075);
  }
  BIND(label_macro_end_1075);
  return implicit_cast<TNode<Number>>((*_return_119).value());
}

TF_BUILTIN(ArrayPrototypeCopyWithin, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-copywithin.tq:12:65
  {
    // ../../src/builtins/array-copywithin.tq:14:5
    TNode<JSReceiver> t311 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t311));
    TNode<JSReceiver> object_606_impl;
    auto object_606 = &object_606_impl;
    USE(object_606);
    *object_606 = implicit_cast<TNode<JSReceiver>>(t311);
    // ../../src/builtins/array-copywithin.tq:17:5
    TNode<Number> t312 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_606))));
    USE(implicit_cast<TNode<Number>>(t312));
    TNode<Number> length_607_impl;
    auto length_607 = &length_607_impl;
    USE(length_607);
    *length_607 = implicit_cast<TNode<Number>>(t312);
    // ../../src/builtins/array-copywithin.tq:20:5
    int31_t t313 = 0;
    TNode<IntPtrT> t314 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t313)));
    TNode<Object> t315 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t314)));
    TNode<Number> t316 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t315)));
    USE(implicit_cast<TNode<Number>>(t316));
    TNode<Number> relative_target_608_impl;
    auto relative_target_608 = &relative_target_608_impl;
    USE(relative_target_608);
    *relative_target_608 = implicit_cast<TNode<Number>>(t316);
    // ../../src/builtins/array-copywithin.tq:24:5
    TNode<Number> t317 = UncheckedCast<Number>(ConvertToRelativeIndex(implicit_cast<TNode<Number>>((*relative_target_608)), implicit_cast<TNode<Number>>((*length_607))));
    USE(implicit_cast<TNode<Number>>(t317));
    TVARIABLE(Number, to_120_impl);
    auto to_120 = &to_120_impl;
    USE(to_120);
    *to_120 = implicit_cast<TNode<Number>>(t317);
    // ../../src/builtins/array-copywithin.tq:27:5
    int31_t t318 = 1;
    TNode<IntPtrT> t319 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t318)));
    TNode<Object> t320 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t319)));
    TNode<Number> t321 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t320)));
    USE(implicit_cast<TNode<Number>>(t321));
    TNode<Number> relative_start_609_impl;
    auto relative_start_609 = &relative_start_609_impl;
    USE(relative_start_609);
    *relative_start_609 = implicit_cast<TNode<Number>>(t321);
    // ../../src/builtins/array-copywithin.tq:31:5
    TNode<Number> t322 = UncheckedCast<Number>(ConvertToRelativeIndex(implicit_cast<TNode<Number>>((*relative_start_609)), implicit_cast<TNode<Number>>((*length_607))));
    USE(implicit_cast<TNode<Number>>(t322));
    TVARIABLE(Number, from_121_impl);
    auto from_121 = &from_121_impl;
    USE(from_121);
    *from_121 = implicit_cast<TNode<Number>>(t322);
    // ../../src/builtins/array-copywithin.tq:35:5
    TVARIABLE(Number, relative_end_122_impl);
    auto relative_end_122 = &relative_end_122_impl;
    USE(relative_end_122);
    *relative_end_122 = implicit_cast<TNode<Number>>((*length_607));
    // ../../src/builtins/array-copywithin.tq:36:5
    {
      Label label__True_86_impl(this);
      Label* label__True_86 = &label__True_86_impl;
      USE(label__True_86);
      Label label__False_87_impl(this, {relative_end_122});
      Label* label__False_87 = &label__False_87_impl;
      USE(label__False_87);
      int31_t t323 = 2;
      TNode<IntPtrT> t324 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t323)));
      TNode<Object> t325 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t324)));
      TNode<BoolT> t326 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t325), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t326));
      Branch(implicit_cast<TNode<BoolT>>(t326), label__True_86, label__False_87);
      if (label__True_86->is_used())
      {
        BIND(label__True_86);
        // ../../src/builtins/array-copywithin.tq:36:36
        {
          // ../../src/builtins/array-copywithin.tq:37:7
          int31_t t327 = 2;
          TNode<IntPtrT> t328 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t327)));
          TNode<Object> t329 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t328)));
          TNode<Number> t330 = UncheckedCast<Number>(ToInteger_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t329)));
          USE(implicit_cast<TNode<Number>>(t330));
          *relative_end_122 = implicit_cast<TNode<Number>>(t330);
        }
        Goto(label__False_87);
      }
      BIND(label__False_87);
    }
    // ../../src/builtins/array-copywithin.tq:42:5
    TNode<Number> t331 = UncheckedCast<Number>(ConvertToRelativeIndex(implicit_cast<TNode<Number>>((*relative_end_122).value()), implicit_cast<TNode<Number>>((*length_607))));
    USE(implicit_cast<TNode<Number>>(t331));
    TNode<Number> final_610_impl;
    auto final_610 = &final_610_impl;
    USE(final_610);
    *final_610 = implicit_cast<TNode<Number>>(t331);
    // ../../src/builtins/array-copywithin.tq:45:5
    TNode<Number> t332 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*final_610)), implicit_cast<TNode<Number>>((*from_121).value())));
    USE(implicit_cast<TNode<Number>>(t332));
    TNode<Number> t333 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*length_607)), implicit_cast<TNode<Number>>((*to_120).value())));
    USE(implicit_cast<TNode<Number>>(t333));
    TNode<Number> t334 = UncheckedCast<Number>(min(implicit_cast<TNode<Number>>(t332), implicit_cast<TNode<Number>>(t333)));
    USE(implicit_cast<TNode<Number>>(t334));
    TVARIABLE(Number, count_123_impl);
    auto count_123 = &count_123_impl;
    USE(count_123);
    *count_123 = implicit_cast<TNode<Number>>(t334);
    // ../../src/builtins/array-copywithin.tq:48:5
    int31_t t335 = 1;
    TVARIABLE(Number, direction_124_impl);
    auto direction_124 = &direction_124_impl;
    USE(direction_124);
    TNode<Number> t336 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t335)));
    *direction_124 = implicit_cast<TNode<Number>>(t336);
    // ../../src/builtins/array-copywithin.tq:50:5
    {
      Label label__True_88_impl(this);
      Label* label__True_88 = &label__True_88_impl;
      USE(label__True_88);
      Label label__False_89_impl(this, {direction_124, from_121, to_120});
      Label* label__False_89 = &label__False_89_impl;
      USE(label__False_89);
      Label label__True_90_impl(this);
      Label* label__True_90 = &label__True_90_impl;
      USE(label__True_90);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*from_121).value()), implicit_cast<TNode<Number>>((*to_120).value()), label__True_90, label__False_89);
      BIND(label__True_90);
      TNode<Number> t337 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*from_121).value()), implicit_cast<TNode<Number>>((*count_123).value())));
      USE(implicit_cast<TNode<Number>>(t337));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*to_120).value()), implicit_cast<TNode<Number>>(t337), label__True_88, label__False_89);
      if (label__True_88->is_used())
      {
        BIND(label__True_88);
        // ../../src/builtins/array-copywithin.tq:50:43
        {
          // ../../src/builtins/array-copywithin.tq:52:7
          int31_t t338 = -1;
          TNode<Number> t339 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t338)));
          *direction_124 = implicit_cast<TNode<Number>>(t339);
          // ../../src/builtins/array-copywithin.tq:55:7
          TNode<Number> t340 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*from_121).value()), implicit_cast<TNode<Number>>((*count_123).value())));
          USE(implicit_cast<TNode<Number>>(t340));
          int31_t t341 = 1;
          TNode<Number> t342 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t341)));
          TNode<Number> t343 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t340), implicit_cast<TNode<Number>>(t342)));
          USE(implicit_cast<TNode<Number>>(t343));
          *from_121 = implicit_cast<TNode<Number>>(t343);
          // ../../src/builtins/array-copywithin.tq:58:7
          TNode<Number> t344 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*to_120).value()), implicit_cast<TNode<Number>>((*count_123).value())));
          USE(implicit_cast<TNode<Number>>(t344));
          int31_t t345 = 1;
          TNode<Number> t346 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t345)));
          TNode<Number> t347 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>(t344), implicit_cast<TNode<Number>>(t346)));
          USE(implicit_cast<TNode<Number>>(t347));
          *to_120 = implicit_cast<TNode<Number>>(t347);
        }
        Goto(label__False_89);
      }
      BIND(label__False_89);
    }
    // ../../src/builtins/array-copywithin.tq:62:5
    {
      Label label__True_91_impl(this);
      Label* label__True_91 = &label__True_91_impl;
      USE(label__True_91);
      Label label__False_92_impl(this);
      Label* label__False_92 = &label__False_92_impl;
      USE(label__False_92);
      Label label_header_611_1077_impl(this, {count_123, from_121, to_120});
      Label* label_header_611_1077 = &label_header_611_1077_impl;
      USE(label_header_611_1077);
      Goto(label_header_611_1077);
      BIND(label_header_611_1077);
      int31_t t348 = 0;
      TNode<Number> t349 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t348)));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>((*count_123).value()), implicit_cast<TNode<Number>>(t349), label__True_91, label__False_92);
      if (label__True_91->is_used())
      {
        BIND(label__True_91);
        // ../../src/builtins/array-copywithin.tq:62:23
        {
          // ../../src/builtins/array-copywithin.tq:66:7
          TNode<Oddball> t350 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_606)), implicit_cast<TNode<Object>>((*from_121).value())));
          USE(implicit_cast<TNode<Oddball>>(t350));
          TNode<Oddball> from_present_612_impl;
          auto from_present_612 = &from_present_612_impl;
          USE(from_present_612);
          *from_present_612 = implicit_cast<TNode<Oddball>>(t350);
          // ../../src/builtins/array-copywithin.tq:69:7
          {
            Label label__True_93_impl(this);
            Label* label__True_93 = &label__True_93_impl;
            USE(label__True_93);
            Label label__False_94_impl(this);
            Label* label__False_94 = &label__False_94_impl;
            USE(label__False_94);
            Label label_if_done_label_613_1078_impl(this, {});
            Label* label_if_done_label_613_1078 = &label_if_done_label_613_1078_impl;
            USE(label_if_done_label_613_1078);
            TNode<BoolT> t351 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*from_present_612)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t351));
            Branch(implicit_cast<TNode<BoolT>>(t351), label__True_93, label__False_94);
            if (label__True_93->is_used())
            {
              BIND(label__True_93);
              // ../../src/builtins/array-copywithin.tq:69:33
              {
                // ../../src/builtins/array-copywithin.tq:71:9
                TNode<Object> t352 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_606)), implicit_cast<TNode<Object>>((*from_121).value())));
                USE(implicit_cast<TNode<Object>>(t352));
                TNode<Object> from_val_614_impl;
                auto from_val_614 = &from_val_614_impl;
                USE(from_val_614);
                *from_val_614 = implicit_cast<TNode<Object>>(t352);
                // ../../src/builtins/array-copywithin.tq:74:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_606)), implicit_cast<TNode<Object>>((*to_120).value()), implicit_cast<TNode<Object>>((*from_val_614)));
              }
              Goto(label_if_done_label_613_1078);
            }
            if (label__False_94->is_used())
            {
              BIND(label__False_94);
              // ../../src/builtins/array-copywithin.tq:75:14
              {
                // ../../src/builtins/array-copywithin.tq:77:9
                TNode<Smi> t353 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_606)), implicit_cast<TNode<Object>>((*to_120).value()), implicit_cast<TNode<Smi>>(t353));
              }
              Goto(label_if_done_label_613_1078);
            }
            BIND(label_if_done_label_613_1078);
          }
          // ../../src/builtins/array-copywithin.tq:81:7
          TNode<Number> t354 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*from_121).value()), implicit_cast<TNode<Number>>((*direction_124).value())));
          USE(implicit_cast<TNode<Number>>(t354));
          *from_121 = implicit_cast<TNode<Number>>(t354);
          // ../../src/builtins/array-copywithin.tq:84:7
          TNode<Number> t355 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*to_120).value()), implicit_cast<TNode<Number>>((*direction_124).value())));
          USE(implicit_cast<TNode<Number>>(t355));
          *to_120 = implicit_cast<TNode<Number>>(t355);
          // ../../src/builtins/array-copywithin.tq:87:7
          TNode<Number> t356 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t357 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*count_123).value()), implicit_cast<TNode<Number>>(t356)));
          *count_123 = implicit_cast<TNode<Number>>(t357);
        }
        Goto(label_header_611_1077);
      }
      BIND(label__False_92);
    }
    // ../../src/builtins/array-copywithin.tq:91:5
    arguments->PopAndReturn(implicit_cast<TNode<Object>>((*object_606)));
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::ArrayForEachTorqueContinuation(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, TNode<Smi> p_initial_k) {
  TVARIABLE(Object, _return_125_impl);
  auto _return_125 = &_return_125_impl;
  USE(_return_125);
  Label label_macro_end_1079_impl(this, {_return_125});
  Label* label_macro_end_1079 = &label_macro_end_1079_impl;
  USE(label_macro_end_1079);
  // ../../src/builtins/array-foreach.tq:8:48
  {
    // ../../src/builtins/array-foreach.tq:11:5
    TVARIABLE(Smi, k_126_impl);
    auto k_126 = &k_126_impl;
    USE(k_126);
    *k_126 = implicit_cast<TNode<Smi>>(p_initial_k);
    Label label__True_95_impl(this);
    Label* label__True_95 = &label__True_95_impl;
    USE(label__True_95);
    Label label__False_96_impl(this);
    Label* label__False_96 = &label__False_96_impl;
    USE(label__False_96);
    Label label_header_615_1080_impl(this, {k_126});
    Label* label_header_615_1080 = &label_header_615_1080_impl;
    USE(label_header_615_1080);
    Goto(label_header_615_1080);
    BIND(label_header_615_1080);
    Label label_action_616_1081_impl(this);
    Label* label_action_616_1081 = &label_action_616_1081_impl;
    USE(label_action_616_1081);
    BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*k_126).value()), implicit_cast<TNode<Number>>(p_len), label__True_95, label__False_96);
    if (label__True_95->is_used())
    {
      BIND(label__True_95);
      // ../../src/builtins/array-foreach.tq:11:54
      {
        // ../../src/builtins/array-foreach.tq:13:7
        TNode<String> t358 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*k_126).value())));
        USE(implicit_cast<TNode<String>>(t358));
        TNode<String> pK_617_impl;
        auto pK_617 = &pK_617_impl;
        USE(pK_617);
        *pK_617 = implicit_cast<TNode<String>>(t358);
        // ../../src/builtins/array-foreach.tq:16:7
        TNode<Oddball> t359 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_o), implicit_cast<TNode<Object>>((*pK_617))));
        USE(implicit_cast<TNode<Oddball>>(t359));
        TNode<Oddball> kPresent_618_impl;
        auto kPresent_618 = &kPresent_618_impl;
        USE(kPresent_618);
        *kPresent_618 = implicit_cast<TNode<Oddball>>(t359);
        // ../../src/builtins/array-foreach.tq:19:7
        {
          Label label__True_97_impl(this);
          Label* label__True_97 = &label__True_97_impl;
          USE(label__True_97);
          Label label__False_98_impl(this, {});
          Label* label__False_98 = &label__False_98_impl;
          USE(label__False_98);
          TNode<BoolT> t360 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*kPresent_618)), implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<BoolT>>(t360));
          Branch(implicit_cast<TNode<BoolT>>(t360), label__True_97, label__False_98);
          if (label__True_97->is_used())
          {
            BIND(label__True_97);
            // ../../src/builtins/array-foreach.tq:19:29
            {
              // ../../src/builtins/array-foreach.tq:21:9
              TNode<Object> t361 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_o), implicit_cast<TNode<Object>>((*pK_617))));
              USE(implicit_cast<TNode<Object>>(t361));
              TNode<Object> kValue_619_impl;
              auto kValue_619 = &kValue_619_impl;
              USE(kValue_619);
              *kValue_619 = implicit_cast<TNode<Object>>(t361);
              // ../../src/builtins/array-foreach.tq:24:9
              TNode<Object> t362 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*kValue_619)), implicit_cast<TNode<Object>>((*k_126).value()), implicit_cast<TNode<Object>>(p_o)));
              USE(implicit_cast<TNode<Object>>(t362));
            }
            Goto(label__False_98);
          }
          BIND(label__False_98);
        }
      }
      Goto(label_action_616_1081);
    }
    {
      BIND(label_action_616_1081);
      int31_t t363 = 1;
      TNode<Smi> t364 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t363)));
      TNode<Smi> t365 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_126).value()), implicit_cast<TNode<Smi>>(t364)));
      USE(implicit_cast<TNode<Smi>>(t365));
      *k_126 = implicit_cast<TNode<Smi>>(t365);
      Goto(label_header_615_1080);
    }
    BIND(label__False_96);
    // ../../src/builtins/array-foreach.tq:29:5
    *_return_125 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1079);
  }
  BIND(label_macro_end_1079);
  return implicit_cast<TNode<Object>>((*_return_125).value());
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
  // ../../src/builtins/array-foreach.tq:34:49
  {
    // ../../src/builtins/array-foreach.tq:38:5
    TNode<JSReceiver> t366 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t366));
    TNode<JSReceiver> jsreceiver_620_impl;
    auto jsreceiver_620 = &jsreceiver_620_impl;
    USE(jsreceiver_620);
    *jsreceiver_620 = implicit_cast<TNode<JSReceiver>>(t366);
    // ../../src/builtins/array-foreach.tq:39:5
    TNode<Object> t367 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*jsreceiver_620)), implicit_cast<TNode<Object>>(p_callback), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>((*jsreceiver_620)), implicit_cast<TNode<Object>>(p_initialK), implicit_cast<TNode<Object>>(p_length), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t367));
    Return(implicit_cast<TNode<Object>>(t367));
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
  // ../../src/builtins/array-foreach.tq:46:65
  {
    // ../../src/builtins/array-foreach.tq:50:5
    TNode<JSReceiver> t368 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t368));
    TNode<JSReceiver> jsreceiver_621_impl;
    auto jsreceiver_621 = &jsreceiver_621_impl;
    USE(jsreceiver_621);
    *jsreceiver_621 = implicit_cast<TNode<JSReceiver>>(t368);
    // ../../src/builtins/array-foreach.tq:51:5
    TNode<Object> t369 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*jsreceiver_621)), implicit_cast<TNode<Object>>(p_callback), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>((*jsreceiver_621)), implicit_cast<TNode<Object>>(p_initialK), implicit_cast<TNode<Object>>(p_length), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t369));
    Return(implicit_cast<TNode<Object>>(t369));
  }
}

TF_BUILTIN(ArrayForEachLoopContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
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
  // ../../src/builtins/array-foreach.tq:59:27
  {
    // ../../src/builtins/array-foreach.tq:60:5
    {
      Label label_try_done_622_1082_impl(this);
      Label* label_try_done_622_1082 = &label_try_done_622_1082_impl;
      USE(label_try_done_622_1082);
      Label label_Unexpected_99_impl(this);
      Label* label_Unexpected_99 = &label_Unexpected_99_impl;
      USE(label_Unexpected_99);
      Label label_try_begin_623_1083_impl(this);
      Label* label_try_begin_623_1083 = &label_try_begin_623_1083_impl;
      USE(label_try_begin_623_1083);
      Goto(label_try_begin_623_1083);
      if (label_try_begin_623_1083->is_used())
      {
        BIND(label_try_begin_623_1083);
        // ../../src/builtins/array-foreach.tq:60:9
        {
          // ../../src/builtins/array-foreach.tq:61:7
          TNode<JSReceiver> t370 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(p_callback), label_Unexpected_99));
          USE(implicit_cast<TNode<JSReceiver>>(t370));
          TNode<JSReceiver> callbackfn_624_impl;
          auto callbackfn_624 = &callbackfn_624_impl;
          USE(callbackfn_624);
          *callbackfn_624 = implicit_cast<TNode<JSReceiver>>(t370);
          // ../../src/builtins/array-foreach.tq:63:7
          TNode<Smi> t371 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_initialK), label_Unexpected_99));
          USE(implicit_cast<TNode<Smi>>(t371));
          TNode<Smi> k_625_impl;
          auto k_625 = &k_625_impl;
          USE(k_625);
          *k_625 = implicit_cast<TNode<Smi>>(t371);
          // ../../src/builtins/array-foreach.tq:64:7
          TNode<Number> t372 = UncheckedCast<Number>(cast22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_length), label_Unexpected_99));
          USE(implicit_cast<TNode<Number>>(t372));
          TNode<Number> number_length_626_impl;
          auto number_length_626 = &number_length_626_impl;
          USE(number_length_626);
          *number_length_626 = implicit_cast<TNode<Number>>(t372);
          // ../../src/builtins/array-foreach.tq:66:7
          TNode<Object> t373 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_receiver), implicit_cast<TNode<Number>>((*number_length_626)), implicit_cast<TNode<JSReceiver>>((*callbackfn_624)), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Smi>>((*k_625))));
          USE(implicit_cast<TNode<Object>>(t373));
          Return(implicit_cast<TNode<Object>>(t373));
        }
      }
      if (label_Unexpected_99->is_used())
      {
        BIND(label_Unexpected_99);
        // ../../src/builtins/array-foreach.tq:69:22
        {
          // ../../src/builtins/array-foreach.tq:70:7
          Unreachable();
        }
      }
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArrayForEach(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_100, TVariable<Smi>* Bailout0_127) {
  TVARIABLE(Object, _return_128_impl);
  auto _return_128 = &_return_128_impl;
  USE(_return_128);
  Label label_macro_end_1084_impl(this, {_return_128});
  Label* label_macro_end_1084 = &label_macro_end_1084_impl;
  USE(label_macro_end_1084);
  // ../../src/builtins/array-foreach.tq:111:16
  {
    // ../../src/builtins/array-foreach.tq:112:5
    int31_t t374 = 0;
    TVARIABLE(Smi, k_129_impl);
    auto k_129 = &k_129_impl;
    USE(k_129);
    TNode<Smi> t375 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t374)));
    *k_129 = implicit_cast<TNode<Smi>>(t375);
    // ../../src/builtins/array-foreach.tq:113:5
    {
      Label label_try_done_627_1085_impl(this);
      Label* label_try_done_627_1085 = &label_try_done_627_1085_impl;
      USE(label_try_done_627_1085);
      Label label_Slow_101_impl(this);
      Label* label_Slow_101 = &label_Slow_101_impl;
      USE(label_Slow_101);
      Label label_try_begin_628_1086_impl(this);
      Label* label_try_begin_628_1086 = &label_try_begin_628_1086_impl;
      USE(label_try_begin_628_1086);
      Goto(label_try_begin_628_1086);
      if (label_try_begin_628_1086->is_used())
      {
        BIND(label_try_begin_628_1086);
        // ../../src/builtins/array-foreach.tq:113:9
        {
          // ../../src/builtins/array-foreach.tq:114:7
          TNode<Smi> t376 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>(p_len), label_Slow_101));
          USE(implicit_cast<TNode<Smi>>(t376));
          TNode<Smi> smi_len_629_impl;
          auto smi_len_629 = &smi_len_629_impl;
          USE(smi_len_629);
          *smi_len_629 = implicit_cast<TNode<Smi>>(t376);
          // ../../src/builtins/array-foreach.tq:115:7
          TNode<JSArray> t377 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<HeapObject>>(p_o), label_Slow_101));
          USE(implicit_cast<TNode<JSArray>>(t377));
          TNode<JSArray> a_630_impl;
          auto a_630 = &a_630_impl;
          USE(a_630);
          *a_630 = implicit_cast<TNode<JSArray>>(t377);
          // ../../src/builtins/array-foreach.tq:116:7
          TNode<Map> t378 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_630))));
          TNode<Map> map_631_impl;
          auto map_631 = &map_631_impl;
          USE(map_631);
          *map_631 = implicit_cast<TNode<Map>>(t378);
          // ../../src/builtins/array-foreach.tq:118:7
          {
            Label label__True_102_impl(this);
            Label* label__True_102 = &label__True_102_impl;
            USE(label__True_102);
            Label label__False_103_impl(this, {});
            Label* label__False_103 = &label__False_103_impl;
            USE(label__False_103);
            TNode<BoolT> t379 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Map>>((*map_631))));
            USE(implicit_cast<TNode<BoolT>>(t379));
            TNode<BoolT> t380 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t379)));
            USE(implicit_cast<TNode<BoolT>>(t380));
            Branch(implicit_cast<TNode<BoolT>>(t380), label__True_102, label__False_103);
            if (label__True_102->is_used())
            {
              BIND(label__True_102);
              // ../../src/builtins/array-foreach.tq:118:60
              Goto(label_Slow_101);
            }
            BIND(label__False_103);
          }
          // ../../src/builtins/array-foreach.tq:119:7
          TNode<Int32T> t381 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_631))));
          TNode<Int32T> elementsKind_632_impl;
          auto elementsKind_632 = &elementsKind_632_impl;
          USE(elementsKind_632);
          *elementsKind_632 = implicit_cast<TNode<Int32T>>(t381);
          // ../../src/builtins/array-foreach.tq:120:7
          {
            Label label__True_104_impl(this);
            Label* label__True_104 = &label__True_104_impl;
            USE(label__True_104);
            Label label__False_105_impl(this, {});
            Label* label__False_105 = &label__False_105_impl;
            USE(label__False_105);
            TNode<BoolT> t382 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_632))));
            USE(implicit_cast<TNode<BoolT>>(t382));
            TNode<BoolT> t383 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t382)));
            USE(implicit_cast<TNode<BoolT>>(t383));
            Branch(implicit_cast<TNode<BoolT>>(t383), label__True_104, label__False_105);
            if (label__True_104->is_used())
            {
              BIND(label__True_104);
              // ../../src/builtins/array-foreach.tq:120:46
              Goto(label_Slow_101);
            }
            BIND(label__False_105);
          }
          // ../../src/builtins/array-foreach.tq:122:7
          {
            Label label__True_106_impl(this);
            Label* label__True_106 = &label__True_106_impl;
            USE(label__True_106);
            Label label__False_107_impl(this);
            Label* label__False_107 = &label__False_107_impl;
            USE(label__False_107);
            Label label_if_done_label_633_1087_impl(this, {});
            Label* label_if_done_label_633_1087 = &label_if_done_label_633_1087_impl;
            USE(label_if_done_label_633_1087);
            TNode<BoolT> t384 = UncheckedCast<BoolT>(IsElementsKindGreaterThan(implicit_cast<TNode<Int32T>>((*elementsKind_632)), implicit_cast<ElementsKind>(HOLEY_ELEMENTS)));
            USE(implicit_cast<TNode<BoolT>>(t384));
            Branch(implicit_cast<TNode<BoolT>>(t384), label__True_106, label__False_107);
            if (label__True_106->is_used())
            {
              BIND(label__True_106);
              // ../../src/builtins/array-foreach.tq:122:68
              {
                // ../../src/builtins/array-foreach.tq:123:9
                VisitAllElements18ATFixedDoubleArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_630)), implicit_cast<TNode<Smi>>((*smi_len_629)), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), label_Bailout_100, Bailout0_127);
              }
              Goto(label_if_done_label_633_1087);
            }
            if (label__False_107->is_used())
            {
              BIND(label__False_107);
              // ../../src/builtins/array-foreach.tq:126:14
              {
                // ../../src/builtins/array-foreach.tq:127:9
                VisitAllElements12ATFixedArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSArray>>((*a_630)), implicit_cast<TNode<Smi>>((*smi_len_629)), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), label_Bailout_100, Bailout0_127);
              }
              Goto(label_if_done_label_633_1087);
            }
            BIND(label_if_done_label_633_1087);
          }
        }
        Goto(label_try_done_627_1085);
      }
      if (label_Slow_101->is_used())
      {
        BIND(label_Slow_101);
        // ../../src/builtins/array-foreach.tq:131:16
        {
          // ../../src/builtins/array-foreach.tq:132:7
          *Bailout0_127 = implicit_cast<TNode<Smi>>((*k_129).value());
          Goto(label_Bailout_100);
        }
      }
      BIND(label_try_done_627_1085);
    }
    // ../../src/builtins/array-foreach.tq:134:5
    *_return_128 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1084);
  }
  BIND(label_macro_end_1084);
  return implicit_cast<TNode<Object>>((*_return_128).value());
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
  // ../../src/builtins/array-foreach.tq:139:65
  {
    // ../../src/builtins/array-foreach.tq:140:5
    {
      Label label_try_done_634_1088_impl(this);
      Label* label_try_done_634_1088 = &label_try_done_634_1088_impl;
      USE(label_try_done_634_1088);
      Label label_TypeError_108_impl(this);
      Label* label_TypeError_108 = &label_TypeError_108_impl;
      USE(label_TypeError_108);
      Label label_NullOrUndefinedError_109_impl(this);
      Label* label_NullOrUndefinedError_109 = &label_NullOrUndefinedError_109_impl;
      USE(label_NullOrUndefinedError_109);
      Label label_try_begin_635_1089_impl(this);
      Label* label_try_begin_635_1089 = &label_try_begin_635_1089_impl;
      USE(label_try_begin_635_1089);
      Goto(label_try_begin_635_1089);
      if (label_try_begin_635_1089->is_used())
      {
        BIND(label_try_begin_635_1089);
        // ../../src/builtins/array-foreach.tq:140:9
        {
          // ../../src/builtins/array-foreach.tq:141:7
          {
            Label label__True_110_impl(this);
            Label* label__True_110 = &label__True_110_impl;
            USE(label__True_110);
            Label label__False_111_impl(this, {});
            Label* label__False_111 = &label__False_111_impl;
            USE(label__False_111);
            TNode<BoolT> t385 = UncheckedCast<BoolT>(IsNullOrUndefined(implicit_cast<TNode<Object>>(p_receiver)));
            USE(implicit_cast<TNode<BoolT>>(t385));
            Branch(implicit_cast<TNode<BoolT>>(t385), label__True_110, label__False_111);
            if (label__True_110->is_used())
            {
              BIND(label__True_110);
              // ../../src/builtins/array-foreach.tq:141:40
              {
                // ../../src/builtins/array-foreach.tq:142:9
                Goto(label_NullOrUndefinedError_109);
              }
            }
            BIND(label__False_111);
          }
          // ../../src/builtins/array-foreach.tq:146:7
          TNode<JSReceiver> t386 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
          USE(implicit_cast<TNode<JSReceiver>>(t386));
          TNode<JSReceiver> o_636_impl;
          auto o_636 = &o_636_impl;
          USE(o_636);
          *o_636 = implicit_cast<TNode<JSReceiver>>(t386);
          // ../../src/builtins/array-foreach.tq:149:7
          TNode<Number> t387 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*o_636))));
          USE(implicit_cast<TNode<Number>>(t387));
          TNode<Number> len_637_impl;
          auto len_637 = &len_637_impl;
          USE(len_637);
          *len_637 = implicit_cast<TNode<Number>>(t387);
          // ../../src/builtins/array-foreach.tq:152:7
          {
            Label label__True_112_impl(this);
            Label* label__True_112 = &label__True_112_impl;
            USE(label__True_112);
            Label label__False_113_impl(this, {});
            Label* label__False_113 = &label__False_113_impl;
            USE(label__False_113);
            TNode<IntPtrT> t388 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
            int31_t t389 = 0;
            TNode<IntPtrT> t390 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t389)));
            TNode<BoolT> t391 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t388), implicit_cast<TNode<IntPtrT>>(t390)));
            USE(implicit_cast<TNode<BoolT>>(t391));
            Branch(implicit_cast<TNode<BoolT>>(t391), label__True_112, label__False_113);
            if (label__True_112->is_used())
            {
              BIND(label__True_112);
              // ../../src/builtins/array-foreach.tq:152:34
              {
                // ../../src/builtins/array-foreach.tq:153:9
                Goto(label_TypeError_108);
              }
            }
            BIND(label__False_113);
          }
          // ../../src/builtins/array-foreach.tq:155:7
          int31_t t392 = 0;
          TNode<IntPtrT> t393 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t392)));
          TNode<Object> t394 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t393)));
          TNode<JSReceiver> t395 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(t394), label_TypeError_108));
          USE(implicit_cast<TNode<JSReceiver>>(t395));
          TNode<JSReceiver> callbackfn_638_impl;
          auto callbackfn_638 = &callbackfn_638_impl;
          USE(callbackfn_638);
          *callbackfn_638 = implicit_cast<TNode<JSReceiver>>(t395);
          // ../../src/builtins/array-foreach.tq:159:7
          auto t396 = [=]() {
            int31_t t398 = 1;
            TNode<IntPtrT> t399 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t398)));
            TNode<Object> t400 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t399)));
            return implicit_cast<TNode<Object>>(t400);
          };
          auto t397 = [=]() {
            return implicit_cast<TNode<Oddball>>(Undefined());
          };
          TVARIABLE(Object, t401_639_impl);
          auto t401_639 = &t401_639_impl;
          USE(t401_639);
          {
            Label label__True_114_impl(this);
            Label* label__True_114 = &label__True_114_impl;
            USE(label__True_114);
            Label label__False_115_impl(this);
            Label* label__False_115 = &label__False_115_impl;
            USE(label__False_115);
            Label label__done_640_1090_impl(this, {t401_639});
            Label* label__done_640_1090 = &label__done_640_1090_impl;
            USE(label__done_640_1090);
            TNode<IntPtrT> t402 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
            int31_t t403 = 1;
            TNode<IntPtrT> t404 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t403)));
            TNode<BoolT> t405 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t402), implicit_cast<TNode<IntPtrT>>(t404)));
            USE(implicit_cast<TNode<BoolT>>(t405));
            Branch(implicit_cast<TNode<BoolT>>(t405), label__True_114, label__False_115);
            BIND(label__True_114);
                        *t401_639 = implicit_cast<TNode<Object>>(t396());
            Goto(label__done_640_1090);
            BIND(label__False_115);
                        *t401_639 = implicit_cast<TNode<Object>>(t397());
            Goto(label__done_640_1090);
            BIND(label__done_640_1090);
          }
          TNode<Object> thisArg_641_impl;
          auto thisArg_641 = &thisArg_641_impl;
          USE(thisArg_641);
          *thisArg_641 = implicit_cast<TNode<Object>>((*t401_639).value());
          // ../../src/builtins/array-foreach.tq:162:7
          int31_t t406 = 0;
          TVARIABLE(Smi, k_130_impl);
          auto k_130 = &k_130_impl;
          USE(k_130);
          TNode<Smi> t407 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t406)));
          *k_130 = implicit_cast<TNode<Smi>>(t407);
          // ../../src/builtins/array-foreach.tq:163:7
          {
            Label label_try_done_642_1091_impl(this);
            Label* label_try_done_642_1091 = &label_try_done_642_1091_impl;
            USE(label_try_done_642_1091);
            Label label_Bailout_116_impl(this);
            Label* label_Bailout_116 = &label_Bailout_116_impl;
            USE(label_Bailout_116);
            TVARIABLE(Smi, k_value_131_impl);
            auto k_value_131 = &k_value_131_impl;
            USE(k_value_131);
            Label label_try_begin_643_1092_impl(this);
            Label* label_try_begin_643_1092 = &label_try_begin_643_1092_impl;
            USE(label_try_begin_643_1092);
            Goto(label_try_begin_643_1092);
            if (label_try_begin_643_1092->is_used())
            {
              BIND(label_try_begin_643_1092);
              // ../../src/builtins/array-foreach.tq:163:11
              {
                // ../../src/builtins/array-foreach.tq:164:9
                TNode<Object> t408 = UncheckedCast<Object>(FastArrayForEach(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_636)), implicit_cast<TNode<Number>>((*len_637)), implicit_cast<TNode<JSReceiver>>((*callbackfn_638)), implicit_cast<TNode<Object>>((*thisArg_641)), label_Bailout_116, k_value_131));
                USE(implicit_cast<TNode<Object>>(t408));
                arguments->PopAndReturn(implicit_cast<TNode<Object>>(t408));
              }
            }
            if (label_Bailout_116->is_used())
            {
              BIND(label_Bailout_116);
              // ../../src/builtins/array-foreach.tq:167:35
              {
                // ../../src/builtins/array-foreach.tq:168:9
                *k_130 = implicit_cast<TNode<Smi>>((*k_value_131).value());
              }
              Goto(label_try_done_642_1091);
            }
            BIND(label_try_done_642_1091);
          }
          // ../../src/builtins/array-foreach.tq:171:7
          TNode<Object> t409 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*o_636)), implicit_cast<TNode<Number>>((*len_637)), implicit_cast<TNode<JSReceiver>>((*callbackfn_638)), implicit_cast<TNode<Object>>((*thisArg_641)), implicit_cast<TNode<Smi>>((*k_130).value())));
          USE(implicit_cast<TNode<Object>>(t409));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t409));
        }
      }
      if (label_TypeError_108->is_used())
      {
        BIND(label_TypeError_108);
        // ../../src/builtins/array-foreach.tq:174:21
        {
          // ../../src/builtins/array-foreach.tq:175:7
          int31_t t410 = 0;
          TNode<IntPtrT> t411 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t410)));
          TNode<Object> t412 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t411)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kCalledNonCallable), implicit_cast<TNode<Object>>(t412));
        }
      }
      if (label_NullOrUndefinedError_109->is_used())
      {
        BIND(label_NullOrUndefinedError_109);
        // ../../src/builtins/array-foreach.tq:177:32
        {
          // ../../src/builtins/array-foreach.tq:178:7
          const char* t413 = "Array.prototype.forEach";
          TNode<Object> t414 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t413)));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kCalledOnNullOrUndefined), implicit_cast<TNode<Object>>(t414));
        }
      }
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::LoadElement23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index) {
  TVARIABLE(Smi, _return_132_impl);
  auto _return_132 = &_return_132_impl;
  USE(_return_132);
  Label label_macro_end_1093_impl(this, {_return_132});
  Label* label_macro_end_1093 = &label_macro_end_1093_impl;
  USE(label_macro_end_1093);
  // ../../src/builtins/array-reverse.tq:10:50
  {
    // ../../src/builtins/array-reverse.tq:11:5
    TNode<FixedArray> t415 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t415));
    TNode<FixedArray> elems_644_impl;
    auto elems_644 = &elems_644_impl;
    USE(elems_644);
    *elems_644 = implicit_cast<TNode<FixedArray>>(t415);
    // ../../src/builtins/array-reverse.tq:12:5
    TNode<Object> t416 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_644)), implicit_cast<TNode<Smi>>(p_index)));
    TNode<Smi> t417 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t416)));
    USE(implicit_cast<TNode<Smi>>(t417));
    *_return_132 = implicit_cast<TNode<Smi>>(t417);
    Goto(label_macro_end_1093);
  }
  BIND(label_macro_end_1093);
  return implicit_cast<TNode<Smi>>((*_return_132).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index) {
  TVARIABLE(Object, _return_133_impl);
  auto _return_133 = &_return_133_impl;
  USE(_return_133);
  Label label_macro_end_1094_impl(this, {_return_133});
  Label* label_macro_end_1094 = &label_macro_end_1094_impl;
  USE(label_macro_end_1094);
  // ../../src/builtins/array-reverse.tq:16:53
  {
    // ../../src/builtins/array-reverse.tq:17:5
    TNode<FixedArray> t418 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t418));
    TNode<FixedArray> elems_645_impl;
    auto elems_645 = &elems_645_impl;
    USE(elems_645);
    *elems_645 = implicit_cast<TNode<FixedArray>>(t418);
    // ../../src/builtins/array-reverse.tq:18:5
    TNode<Object> t419 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_645)), implicit_cast<TNode<Smi>>(p_index)));
    *_return_133 = implicit_cast<TNode<Object>>(t419);
    Goto(label_macro_end_1094);
  }
  BIND(label_macro_end_1094);
  return implicit_cast<TNode<Object>>((*_return_133).value());
}

compiler::TNode<Float64T> ArrayBuiltinsFromDSLAssembler::LoadElement26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index) {
  TVARIABLE(Float64T, _return_134_impl);
  auto _return_134 = &_return_134_impl;
  USE(_return_134);
  Label label_macro_end_1095_impl(this, {_return_134});
  Label* label_macro_end_1095 = &label_macro_end_1095_impl;
  USE(label_macro_end_1095);
  // ../../src/builtins/array-reverse.tq:22:54
  {
    // ../../src/builtins/array-reverse.tq:23:5
    {
      Label label_try_done_646_1096_impl(this);
      Label* label_try_done_646_1096 = &label_try_done_646_1096_impl;
      USE(label_try_done_646_1096);
      Label label_Hole_117_impl(this);
      Label* label_Hole_117 = &label_Hole_117_impl;
      USE(label_Hole_117);
      Label label_try_begin_647_1097_impl(this);
      Label* label_try_begin_647_1097 = &label_try_begin_647_1097_impl;
      USE(label_try_begin_647_1097);
      Goto(label_try_begin_647_1097);
      if (label_try_begin_647_1097->is_used())
      {
        BIND(label_try_begin_647_1097);
        // ../../src/builtins/array-reverse.tq:23:9
        {
          // ../../src/builtins/array-reverse.tq:24:7
          TNode<FixedDoubleArray> t420 = UncheckedCast<FixedDoubleArray>(unsafe_cast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t420));
          TNode<FixedDoubleArray> elems_648_impl;
          auto elems_648 = &elems_648_impl;
          USE(elems_648);
          *elems_648 = implicit_cast<TNode<FixedDoubleArray>>(t420);
          // ../../src/builtins/array-reverse.tq:25:7
          TNode<Float64T> t421 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elems_648)), implicit_cast<TNode<Smi>>(p_index), label_Hole_117));
          USE(implicit_cast<TNode<Float64T>>(t421));
          *_return_134 = implicit_cast<TNode<Float64T>>(t421);
          Goto(label_macro_end_1095);
        }
      }
      if (label_Hole_117->is_used())
      {
        BIND(label_Hole_117);
        // ../../src/builtins/array-reverse.tq:27:16
        {
          // ../../src/builtins/array-reverse.tq:30:7
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_1095);
  return implicit_cast<TNode<Float64T>>((*_return_134).value());
}

void ArrayBuiltinsFromDSLAssembler::StoreElement23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Smi> p_value) {
  Label label_macro_end_1098_impl(this, {});
  Label* label_macro_end_1098 = &label_macro_end_1098_impl;
  USE(label_macro_end_1098);
  // ../../src/builtins/array-reverse.tq:38:57
  {
    // ../../src/builtins/array-reverse.tq:39:5
    TNode<FixedArray> t422 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t422));
    TNode<FixedArray> elems_649_impl;
    auto elems_649 = &elems_649_impl;
    USE(elems_649);
    *elems_649 = implicit_cast<TNode<FixedArray>>(t422);
    // ../../src/builtins/array-reverse.tq:40:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_649)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<WriteBarrierMode>(SKIP_WRITE_BARRIER));
  }
}

void ArrayBuiltinsFromDSLAssembler::StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Object> p_value) {
  Label label_macro_end_1099_impl(this, {});
  Label* label_macro_end_1099 = &label_macro_end_1099_impl;
  USE(label_macro_end_1099);
  // ../../src/builtins/array-reverse.tq:44:60
  {
    // ../../src/builtins/array-reverse.tq:45:5
    TNode<FixedArray> t423 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t423));
    TNode<FixedArray> elems_650_impl;
    auto elems_650 = &elems_650_impl;
    USE(elems_650);
    *elems_650 = implicit_cast<TNode<FixedArray>>(t423);
    // ../../src/builtins/array-reverse.tq:46:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_650)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value));
  }
}

void ArrayBuiltinsFromDSLAssembler::StoreElement26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_index, TNode<Float64T> p_value) {
  Label label_macro_end_1100_impl(this, {});
  Label* label_macro_end_1100 = &label_macro_end_1100_impl;
  USE(label_macro_end_1100);
  // ../../src/builtins/array-reverse.tq:50:61
  {
    // ../../src/builtins/array-reverse.tq:51:5
    TNode<FixedDoubleArray> t424 = UncheckedCast<FixedDoubleArray>(unsafe_cast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t424));
    TNode<FixedDoubleArray> elems_651_impl;
    auto elems_651 = &elems_651_impl;
    USE(elems_651);
    *elems_651 = implicit_cast<TNode<FixedDoubleArray>>(t424);
    // ../../src/builtins/array-reverse.tq:53:5
    // ../../src/builtins/array-reverse.tq:54:5
    StoreFixedDoubleArrayElementWithSmiIndex(implicit_cast<TNode<FixedDoubleArray>>((*elems_651)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Float64T>>(p_value));
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::GenericArrayReverse(TNode<Context> p_context, TNode<Object> p_receiver) {
  TVARIABLE(Object, _return_135_impl);
  auto _return_135 = &_return_135_impl;
  USE(_return_135);
  Label label_macro_end_1101_impl(this, {_return_135});
  Label* label_macro_end_1101 = &label_macro_end_1101_impl;
  USE(label_macro_end_1101);
  // ../../src/builtins/array-reverse.tq:75:73
  {
    // ../../src/builtins/array-reverse.tq:77:5
    TNode<JSReceiver> t425 = UncheckedCast<JSReceiver>(ToObject_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t425));
    TNode<JSReceiver> object_652_impl;
    auto object_652 = &object_652_impl;
    USE(object_652);
    *object_652 = implicit_cast<TNode<JSReceiver>>(t425);
    // ../../src/builtins/array-reverse.tq:80:5
    TNode<Number> t426 = UncheckedCast<Number>(GetLengthProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_652))));
    USE(implicit_cast<TNode<Number>>(t426));
    TNode<Number> length_653_impl;
    auto length_653 = &length_653_impl;
    USE(length_653);
    *length_653 = implicit_cast<TNode<Number>>(t426);
    // ../../src/builtins/array-reverse.tq:89:5
    int31_t t427 = 0;
    TVARIABLE(Number, lower_136_impl);
    auto lower_136 = &lower_136_impl;
    USE(lower_136);
    TNode<Number> t428 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t427)));
    *lower_136 = implicit_cast<TNode<Number>>(t428);
    // ../../src/builtins/array-reverse.tq:90:5
    int31_t t429 = 1;
    TNode<Number> t430 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t429)));
    TNode<Number> t431 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*length_653)), implicit_cast<TNode<Number>>(t430)));
    USE(implicit_cast<TNode<Number>>(t431));
    TVARIABLE(Number, upper_137_impl);
    auto upper_137 = &upper_137_impl;
    USE(upper_137);
    *upper_137 = implicit_cast<TNode<Number>>(t431);
    // ../../src/builtins/array-reverse.tq:92:5
    {
      Label label__True_118_impl(this);
      Label* label__True_118 = &label__True_118_impl;
      USE(label__True_118);
      Label label__False_119_impl(this);
      Label* label__False_119 = &label__False_119_impl;
      USE(label__False_119);
      Label label_header_654_1102_impl(this, {lower_136, upper_137});
      Label* label_header_654_1102 = &label_header_654_1102_impl;
      USE(label_header_654_1102);
      Goto(label_header_654_1102);
      BIND(label_header_654_1102);
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*lower_136).value()), implicit_cast<TNode<Number>>((*upper_137).value()), label__True_118, label__False_119);
      if (label__True_118->is_used())
      {
        BIND(label__True_118);
        // ../../src/builtins/array-reverse.tq:92:27
        {
          // ../../src/builtins/array-reverse.tq:93:7
          TVARIABLE(Object, lower_value_138_impl);
          auto lower_value_138 = &lower_value_138_impl;
          USE(lower_value_138);
          *lower_value_138 = implicit_cast<TNode<Object>>(Undefined());
          // ../../src/builtins/array-reverse.tq:94:7
          TVARIABLE(Object, upper_value_139_impl);
          auto upper_value_139 = &upper_value_139_impl;
          USE(upper_value_139);
          *upper_value_139 = implicit_cast<TNode<Object>>(Undefined());
          // ../../src/builtins/array-reverse.tq:99:7
          TNode<Oddball> t432 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_652)), implicit_cast<TNode<Object>>((*lower_136).value())));
          USE(implicit_cast<TNode<Oddball>>(t432));
          TNode<Oddball> lower_exists_655_impl;
          auto lower_exists_655 = &lower_exists_655_impl;
          USE(lower_exists_655);
          *lower_exists_655 = implicit_cast<TNode<Oddball>>(t432);
          // ../../src/builtins/array-reverse.tq:102:7
          {
            Label label__True_120_impl(this);
            Label* label__True_120 = &label__True_120_impl;
            USE(label__True_120);
            Label label__False_121_impl(this, {lower_value_138});
            Label* label__False_121 = &label__False_121_impl;
            USE(label__False_121);
            TNode<BoolT> t433 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lower_exists_655)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t433));
            Branch(implicit_cast<TNode<BoolT>>(t433), label__True_120, label__False_121);
            if (label__True_120->is_used())
            {
              BIND(label__True_120);
              // ../../src/builtins/array-reverse.tq:102:33
              {
                // ../../src/builtins/array-reverse.tq:104:9
                TNode<Object> t434 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_652)), implicit_cast<TNode<Object>>((*lower_136).value())));
                USE(implicit_cast<TNode<Object>>(t434));
                *lower_value_138 = implicit_cast<TNode<Object>>(t434);
              }
              Goto(label__False_121);
            }
            BIND(label__False_121);
          }
          // ../../src/builtins/array-reverse.tq:108:7
          TNode<Oddball> t435 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kHasProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*object_652)), implicit_cast<TNode<Object>>((*upper_137).value())));
          USE(implicit_cast<TNode<Oddball>>(t435));
          TNode<Oddball> upper_exists_656_impl;
          auto upper_exists_656 = &upper_exists_656_impl;
          USE(upper_exists_656);
          *upper_exists_656 = implicit_cast<TNode<Oddball>>(t435);
          // ../../src/builtins/array-reverse.tq:111:7
          {
            Label label__True_122_impl(this);
            Label* label__True_122 = &label__True_122_impl;
            USE(label__True_122);
            Label label__False_123_impl(this, {upper_value_139});
            Label* label__False_123 = &label__False_123_impl;
            USE(label__False_123);
            TNode<BoolT> t436 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upper_exists_656)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t436));
            Branch(implicit_cast<TNode<BoolT>>(t436), label__True_122, label__False_123);
            if (label__True_122->is_used())
            {
              BIND(label__True_122);
              // ../../src/builtins/array-reverse.tq:111:33
              {
                // ../../src/builtins/array-reverse.tq:113:9
                TNode<Object> t437 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_652)), implicit_cast<TNode<Object>>((*upper_137).value())));
                USE(implicit_cast<TNode<Object>>(t437));
                *upper_value_139 = implicit_cast<TNode<Object>>(t437);
              }
              Goto(label__False_123);
            }
            BIND(label__False_123);
          }
          // ../../src/builtins/array-reverse.tq:117:7
          {
            Label label__True_124_impl(this);
            Label* label__True_124 = &label__True_124_impl;
            USE(label__True_124);
            Label label__False_125_impl(this);
            Label* label__False_125 = &label__False_125_impl;
            USE(label__False_125);
            Label label_if_done_label_657_1103_impl(this, {});
            Label* label_if_done_label_657_1103 = &label_if_done_label_657_1103_impl;
            USE(label_if_done_label_657_1103);
            Label label__True_126_impl(this);
            Label* label__True_126 = &label__True_126_impl;
            USE(label__True_126);
            TNode<BoolT> t438 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lower_exists_655)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t438));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t438), label__False_125);
            TNode<BoolT> t439 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upper_exists_656)), implicit_cast<TNode<Object>>(True())));
            USE(implicit_cast<TNode<BoolT>>(t439));
            Branch(implicit_cast<TNode<BoolT>>(t439), label__True_124, label__False_125);
            if (label__True_124->is_used())
            {
              BIND(label__True_124);
              // ../../src/builtins/array-reverse.tq:117:57
              {
                // ../../src/builtins/array-reverse.tq:119:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_652)), implicit_cast<TNode<Object>>((*lower_136).value()), implicit_cast<TNode<Object>>((*upper_value_139).value()));
                // ../../src/builtins/array-reverse.tq:122:9
                CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_652)), implicit_cast<TNode<Object>>((*upper_137).value()), implicit_cast<TNode<Object>>((*lower_value_138).value()));
              }
              Goto(label_if_done_label_657_1103);
            }
            if (label__False_125->is_used())
            {
              BIND(label__False_125);
              // ../../src/builtins/array-reverse.tq:123:14
              {
                Label label__True_127_impl(this);
                Label* label__True_127 = &label__True_127_impl;
                USE(label__True_127);
                Label label__False_128_impl(this);
                Label* label__False_128 = &label__False_128_impl;
                USE(label__False_128);
                Label label_if_done_label_658_1104_impl(this, {});
                Label* label_if_done_label_658_1104 = &label_if_done_label_658_1104_impl;
                USE(label_if_done_label_658_1104);
                Label label__True_129_impl(this);
                Label* label__True_129 = &label__True_129_impl;
                USE(label__True_129);
                TNode<BoolT> t440 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lower_exists_655)), implicit_cast<TNode<Object>>(False())));
                USE(implicit_cast<TNode<BoolT>>(t440));
                GotoIfNot(implicit_cast<TNode<BoolT>>(t440), label__False_128);
                TNode<BoolT> t441 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upper_exists_656)), implicit_cast<TNode<Object>>(True())));
                USE(implicit_cast<TNode<BoolT>>(t441));
                Branch(implicit_cast<TNode<BoolT>>(t441), label__True_127, label__False_128);
                if (label__True_127->is_used())
                {
                  BIND(label__True_127);
                  // ../../src/builtins/array-reverse.tq:123:65
                  {
                    // ../../src/builtins/array-reverse.tq:125:9
                    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_652)), implicit_cast<TNode<Object>>((*lower_136).value()), implicit_cast<TNode<Object>>((*upper_value_139).value()));
                    // ../../src/builtins/array-reverse.tq:128:9
                    TNode<Smi> t442 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                    CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_652)), implicit_cast<TNode<Object>>((*upper_137).value()), implicit_cast<TNode<Smi>>(t442));
                  }
                  Goto(label_if_done_label_658_1104);
                }
                if (label__False_128->is_used())
                {
                  BIND(label__False_128);
                  // ../../src/builtins/array-reverse.tq:129:14
                  {
                    Label label__True_130_impl(this);
                    Label* label__True_130 = &label__True_130_impl;
                    USE(label__True_130);
                    Label label__False_131_impl(this, {});
                    Label* label__False_131 = &label__False_131_impl;
                    USE(label__False_131);
                    Label label__True_132_impl(this);
                    Label* label__True_132 = &label__True_132_impl;
                    USE(label__True_132);
                    TNode<BoolT> t443 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*lower_exists_655)), implicit_cast<TNode<Object>>(True())));
                    USE(implicit_cast<TNode<BoolT>>(t443));
                    GotoIfNot(implicit_cast<TNode<BoolT>>(t443), label__False_131);
                    TNode<BoolT> t444 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*upper_exists_656)), implicit_cast<TNode<Object>>(False())));
                    USE(implicit_cast<TNode<BoolT>>(t444));
                    Branch(implicit_cast<TNode<BoolT>>(t444), label__True_130, label__False_131);
                    if (label__True_130->is_used())
                    {
                      BIND(label__True_130);
                      // ../../src/builtins/array-reverse.tq:129:65
                      {
                        // ../../src/builtins/array-reverse.tq:131:9
                        TNode<Smi> t445 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(implicit_cast<LanguageMode>(LanguageMode::kStrict)));
                        CallBuiltin(Builtins::kDeleteProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_652)), implicit_cast<TNode<Object>>((*lower_136).value()), implicit_cast<TNode<Smi>>(t445));
                        // ../../src/builtins/array-reverse.tq:134:9
                        CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*object_652)), implicit_cast<TNode<Object>>((*upper_137).value()), implicit_cast<TNode<Object>>((*lower_value_138).value()));
                      }
                      Goto(label__False_131);
                    }
                    BIND(label__False_131);
                  }
                  Goto(label_if_done_label_658_1104);
                }
                BIND(label_if_done_label_658_1104);
              }
              Goto(label_if_done_label_657_1103);
            }
            BIND(label_if_done_label_657_1103);
          }
          // ../../src/builtins/array-reverse.tq:138:7
          TNode<Number> t446 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t447 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*lower_136).value()), implicit_cast<TNode<Number>>(t446)));
          *lower_136 = implicit_cast<TNode<Number>>(t447);
          // ../../src/builtins/array-reverse.tq:139:7
          TNode<Number> t448 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Number> t449 = UncheckedCast<Number>(NumberSub(implicit_cast<TNode<Number>>((*upper_137).value()), implicit_cast<TNode<Number>>(t448)));
          *upper_137 = implicit_cast<TNode<Number>>(t449);
        }
        Goto(label_header_654_1102);
      }
      BIND(label__False_119);
    }
    // ../../src/builtins/array-reverse.tq:143:5
    *_return_135 = implicit_cast<TNode<Object>>((*object_652));
    Goto(label_macro_end_1101);
  }
  BIND(label_macro_end_1101);
  return implicit_cast<TNode<Object>>((*_return_135).value());
}

void ArrayBuiltinsFromDSLAssembler::EnsureWriteableFastElements(TNode<JSArray> p_array) {
  Label label_macro_end_1105_impl(this, {});
  Label* label_macro_end_1105 = &label_macro_end_1105_impl;
  USE(label_macro_end_1105);
  // ../../src/builtins/array-reverse.tq:146:53
  {
    // ../../src/builtins/array-reverse.tq:147:5
    TNode<FixedArrayBase> t450 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>(p_array)));
    TNode<FixedArrayBase> elements_659_impl;
    auto elements_659 = &elements_659_impl;
    USE(elements_659);
    *elements_659 = implicit_cast<TNode<FixedArrayBase>>(t450);
    // ../../src/builtins/array-reverse.tq:148:5
    {
      Label label__True_133_impl(this);
      Label* label__True_133 = &label__True_133_impl;
      USE(label__True_133);
      Label label__False_134_impl(this, {});
      Label* label__False_134 = &label__False_134_impl;
      USE(label__False_134);
      TNode<Map> t451 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*elements_659))));
      TNode<BoolT> t452 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t451), implicit_cast<TNode<Object>>(kCOWMap())));
      USE(implicit_cast<TNode<BoolT>>(t452));
      Branch(implicit_cast<TNode<BoolT>>(t452), label__True_133, label__False_134);
      if (label__True_133->is_used())
      {
        BIND(label__True_133);
        // ../../src/builtins/array-reverse.tq:148:34
        Goto(label_macro_end_1105);
      }
      BIND(label__False_134);
    }
    // ../../src/builtins/array-reverse.tq:152:5
    // ../../src/builtins/array-reverse.tq:154:5
    TNode<Smi> t453 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>(p_array)));
    TNode<Smi> length_660_impl;
    auto length_660 = &length_660_impl;
    USE(length_660);
    *length_660 = implicit_cast<TNode<Smi>>(t453);
    // ../../src/builtins/array-reverse.tq:155:5
    TNode<FixedArray> t454 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>((*elements_659))));
    USE(implicit_cast<TNode<FixedArray>>(t454));
    int31_t t455 = 0;
    TNode<Smi> t456 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t455)));
    TNode<FixedArray> t457 = UncheckedCast<FixedArray>(ExtractFixedArray(implicit_cast<TNode<FixedArray>>(t454), implicit_cast<TNode<Smi>>(t456), implicit_cast<TNode<Smi>>((*length_660)), implicit_cast<TNode<Smi>>((*length_660)), implicit_cast<ExtractFixedArrayFlags>(ExtractFixedArrayFlag::kFixedArrays)));
    USE(implicit_cast<TNode<FixedArray>>(t457));
    StoreElements(implicit_cast<TNode<JSObject>>(p_array), implicit_cast<TNode<FixedArrayBase>>(t457));
  }
  Goto(label_macro_end_1105);
  BIND(label_macro_end_1105);
}

void ArrayBuiltinsFromDSLAssembler::TryFastPackedArrayReverse(TNode<Object> p_receiver, Label* label_Slow_135) {
  Label label_macro_end_1106_impl(this, {});
  Label* label_macro_end_1106 = &label_macro_end_1106_impl;
  USE(label_macro_end_1106);
  // ../../src/builtins/array-reverse.tq:159:65
  {
    // ../../src/builtins/array-reverse.tq:160:5
    TNode<JSArray> t458 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver), label_Slow_135));
    USE(implicit_cast<TNode<JSArray>>(t458));
    TNode<JSArray> array_661_impl;
    auto array_661 = &array_661_impl;
    USE(array_661);
    *array_661 = implicit_cast<TNode<JSArray>>(t458);
    // ../../src/builtins/array-reverse.tq:161:5
    EnsureWriteableFastElements(implicit_cast<TNode<JSArray>>((*array_661)));
    // ../../src/builtins/array-reverse.tq:162:5
    // ../../src/builtins/array-reverse.tq:164:5
    TNode<Map> t459 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*array_661))));
    TNode<Int32T> t460 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>(t459)));
    TNode<Int32T> kind_662_impl;
    auto kind_662 = &kind_662_impl;
    USE(kind_662);
    *kind_662 = implicit_cast<TNode<Int32T>>(t460);
    // ../../src/builtins/array-reverse.tq:165:5
    {
      Label label__True_136_impl(this);
      Label* label__True_136 = &label__True_136_impl;
      USE(label__True_136);
      Label label__False_137_impl(this);
      Label* label__False_137 = &label__False_137_impl;
      USE(label__False_137);
      Label label_if_done_label_663_1107_impl(this, {});
      Label* label_if_done_label_663_1107 = &label_if_done_label_663_1107_impl;
      USE(label_if_done_label_663_1107);
      TNode<Int32T> t461 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS)));
      TNode<BoolT> t462 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*kind_662)), implicit_cast<TNode<Int32T>>(t461)));
      USE(implicit_cast<TNode<BoolT>>(t462));
      Branch(implicit_cast<TNode<BoolT>>(t462), label__True_136, label__False_137);
      if (label__True_136->is_used())
      {
        BIND(label__True_136);
        // ../../src/builtins/array-reverse.tq:165:38
        {
          // ../../src/builtins/array-reverse.tq:166:7
          TNode<FixedArrayBase> t463 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*array_661))));
          TNode<Smi> t464 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_661))));
          FastPackedArrayReverse23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(t463), implicit_cast<TNode<Smi>>(t464));
        }
        Goto(label_if_done_label_663_1107);
      }
      if (label__False_137->is_used())
      {
        BIND(label__False_137);
        // ../../src/builtins/array-reverse.tq:168:12
        {
          Label label__True_138_impl(this);
          Label* label__True_138 = &label__True_138_impl;
          USE(label__True_138);
          Label label__False_139_impl(this);
          Label* label__False_139 = &label__False_139_impl;
          USE(label__False_139);
          Label label_if_done_label_664_1108_impl(this, {});
          Label* label_if_done_label_664_1108 = &label_if_done_label_664_1108_impl;
          USE(label_if_done_label_664_1108);
          TNode<Int32T> t465 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_ELEMENTS)));
          TNode<BoolT> t466 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*kind_662)), implicit_cast<TNode<Int32T>>(t465)));
          USE(implicit_cast<TNode<BoolT>>(t466));
          Branch(implicit_cast<TNode<BoolT>>(t466), label__True_138, label__False_139);
          if (label__True_138->is_used())
          {
            BIND(label__True_138);
            // ../../src/builtins/array-reverse.tq:168:41
            {
              // ../../src/builtins/array-reverse.tq:169:7
              TNode<FixedArrayBase> t467 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*array_661))));
              TNode<Smi> t468 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_661))));
              FastPackedArrayReverse26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(t467), implicit_cast<TNode<Smi>>(t468));
            }
            Goto(label_if_done_label_664_1108);
          }
          if (label__False_139->is_used())
          {
            BIND(label__False_139);
            // ../../src/builtins/array-reverse.tq:171:12
            {
              Label label__True_140_impl(this);
              Label* label__True_140 = &label__True_140_impl;
              USE(label__True_140);
              Label label__False_141_impl(this);
              Label* label__False_141 = &label__False_141_impl;
              USE(label__False_141);
              Label label_if_done_label_665_1109_impl(this, {});
              Label* label_if_done_label_665_1109 = &label_if_done_label_665_1109_impl;
              USE(label_if_done_label_665_1109);
              TNode<Int32T> t469 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_DOUBLE_ELEMENTS)));
              TNode<BoolT> t470 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*kind_662)), implicit_cast<TNode<Int32T>>(t469)));
              USE(implicit_cast<TNode<BoolT>>(t470));
              Branch(implicit_cast<TNode<BoolT>>(t470), label__True_140, label__False_141);
              if (label__True_140->is_used())
              {
                BIND(label__True_140);
                // ../../src/builtins/array-reverse.tq:171:48
                {
                  // ../../src/builtins/array-reverse.tq:172:7
                  TNode<FixedArrayBase> t471 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*array_661))));
                  TNode<Smi> t472 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*array_661))));
                  FastPackedArrayReverse26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(t471), implicit_cast<TNode<Smi>>(t472));
                }
                Goto(label_if_done_label_665_1109);
              }
              if (label__False_141->is_used())
              {
                BIND(label__False_141);
                // ../../src/builtins/array-reverse.tq:174:12
                {
                  // ../../src/builtins/array-reverse.tq:175:7
                  Goto(label_Slow_135);
                }
              }
              BIND(label_if_done_label_665_1109);
            }
            Goto(label_if_done_label_664_1108);
          }
          BIND(label_if_done_label_664_1108);
        }
        Goto(label_if_done_label_663_1107);
      }
      BIND(label_if_done_label_663_1107);
    }
  }
}

TF_BUILTIN(ArrayPrototypeReverse, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-reverse.tq:181:65
  {
    // ../../src/builtins/array-reverse.tq:182:5
    {
      Label label_try_done_666_1110_impl(this);
      Label* label_try_done_666_1110 = &label_try_done_666_1110_impl;
      USE(label_try_done_666_1110);
      Label label_Baseline_142_impl(this);
      Label* label_Baseline_142 = &label_Baseline_142_impl;
      USE(label_Baseline_142);
      Label label_try_begin_667_1111_impl(this);
      Label* label_try_begin_667_1111 = &label_try_begin_667_1111_impl;
      USE(label_try_begin_667_1111);
      Goto(label_try_begin_667_1111);
      if (label_try_begin_667_1111->is_used())
      {
        BIND(label_try_begin_667_1111);
        // ../../src/builtins/array-reverse.tq:182:9
        {
          // ../../src/builtins/array-reverse.tq:183:7
          TryFastPackedArrayReverse(implicit_cast<TNode<Object>>(p_receiver), label_Baseline_142);
          // ../../src/builtins/array-reverse.tq:184:7
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
        }
      }
      if (label_Baseline_142->is_used())
      {
        BIND(label_Baseline_142);
        // ../../src/builtins/array-reverse.tq:186:20
        {
          // ../../src/builtins/array-reverse.tq:187:7
          TNode<Object> t473 = UncheckedCast<Object>(GenericArrayReverse(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
          USE(implicit_cast<TNode<Object>>(t473));
          arguments->PopAndReturn(implicit_cast<TNode<Object>>(t473));
        }
      }
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kGenericElementsAccessorId() {
  int31_t t2246 = 0;
  TNode<Smi> t2247 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2246)));
  return implicit_cast<TNode<Smi>>(t2247);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kFastElementsAccessorId() {
  int31_t t2248 = 1;
  TNode<Smi> t2249 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2248)));
  return implicit_cast<TNode<Smi>>(t2249);
}

int31_t ArrayBuiltinsFromDSLAssembler::kReceiverIdx() {
  int31_t t2250 = 0;
  return implicit_cast<int31_t>(t2250);
}

int31_t ArrayBuiltinsFromDSLAssembler::kInitialReceiverMapIdx() {
  int31_t t2251 = 1;
  return implicit_cast<int31_t>(t2251);
}

int31_t ArrayBuiltinsFromDSLAssembler::kInitialReceiverLengthIdx() {
  int31_t t2252 = 2;
  return implicit_cast<int31_t>(t2252);
}

int31_t ArrayBuiltinsFromDSLAssembler::kUserCmpFnIdx() {
  int31_t t2253 = 3;
  return implicit_cast<int31_t>(t2253);
}

int31_t ArrayBuiltinsFromDSLAssembler::kSortComparePtrIdx() {
  int31_t t2254 = 4;
  return implicit_cast<int31_t>(t2254);
}

int31_t ArrayBuiltinsFromDSLAssembler::kLoadFnIdx() {
  int31_t t2255 = 5;
  return implicit_cast<int31_t>(t2255);
}

int31_t ArrayBuiltinsFromDSLAssembler::kStoreFnIdx() {
  int31_t t2256 = 6;
  return implicit_cast<int31_t>(t2256);
}

int31_t ArrayBuiltinsFromDSLAssembler::kCanUseSameAccessorFnIdx() {
  int31_t t2257 = 7;
  return implicit_cast<int31_t>(t2257);
}

int31_t ArrayBuiltinsFromDSLAssembler::kBailoutStatusIdx() {
  int31_t t2258 = 8;
  return implicit_cast<int31_t>(t2258);
}

int31_t ArrayBuiltinsFromDSLAssembler::kMinGallopIdx() {
  int31_t t2259 = 9;
  return implicit_cast<int31_t>(t2259);
}

int31_t ArrayBuiltinsFromDSLAssembler::kPendingRunsSizeIdx() {
  int31_t t2260 = 10;
  return implicit_cast<int31_t>(t2260);
}

int31_t ArrayBuiltinsFromDSLAssembler::kPendingRunsIdx() {
  int31_t t2261 = 11;
  return implicit_cast<int31_t>(t2261);
}

int31_t ArrayBuiltinsFromDSLAssembler::kTempArraySizeIdx() {
  int31_t t2262 = 12;
  return implicit_cast<int31_t>(t2262);
}

int31_t ArrayBuiltinsFromDSLAssembler::kTempArrayIdx() {
  int31_t t2263 = 13;
  return implicit_cast<int31_t>(t2263);
}

int31_t ArrayBuiltinsFromDSLAssembler::kAccessorIdx() {
  int31_t t2264 = 14;
  return implicit_cast<int31_t>(t2264);
}

compiler::TNode<IntPtrT> ArrayBuiltinsFromDSLAssembler::kSortStateSize() {
  int31_t t2265 = 15;
  TNode<IntPtrT> t2266 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t2265)));
  return implicit_cast<TNode<IntPtrT>>(t2266);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kFailure() {
  int31_t t2267 = -1;
  TNode<Smi> t2268 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2267)));
  return implicit_cast<TNode<Smi>>(t2268);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kSuccess() {
  int31_t t2269 = 0;
  TNode<Smi> t2270 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2269)));
  return implicit_cast<TNode<Smi>>(t2270);
}

int31_t ArrayBuiltinsFromDSLAssembler::kMaxMergePending() {
  int31_t t2271 = 85;
  return implicit_cast<int31_t>(t2271);
}

int31_t ArrayBuiltinsFromDSLAssembler::kMinGallopWins() {
  int31_t t2272 = 7;
  return implicit_cast<int31_t>(t2272);
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::kSortStateTempSize() {
  int31_t t2273 = 32;
  TNode<Smi> t2274 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2273)));
  return implicit_cast<TNode<Smi>>(t2274);
}

TF_BUILTIN(Load23ATFastPackedSmiElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:135:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:136:5
    TNode<FixedArray> t2275 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2275));
    TNode<FixedArray> elems_880_impl;
    auto elems_880 = &elems_880_impl;
    USE(elems_880);
    *elems_880 = implicit_cast<TNode<FixedArray>>(t2275);
    // ../../third_party/v8/builtins/array-sort.tq:137:5
    TNode<Object> t2276 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_880)), implicit_cast<TNode<Smi>>(p_index)));
    Return(implicit_cast<TNode<Object>>(t2276));
  }
}

TF_BUILTIN(Load25ATFastSmiOrObjectElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:142:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:143:5
    TNode<FixedArray> t2277 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2277));
    TNode<FixedArray> elems_881_impl;
    auto elems_881 = &elems_881_impl;
    USE(elems_881);
    *elems_881 = implicit_cast<TNode<FixedArray>>(t2277);
    // ../../third_party/v8/builtins/array-sort.tq:144:5
    TNode<Object> t2278 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_881)), implicit_cast<TNode<Smi>>(p_index)));
    TNode<Object> result_882_impl;
    auto result_882 = &result_882_impl;
    USE(result_882);
    *result_882 = implicit_cast<TNode<Object>>(t2278);
    // ../../third_party/v8/builtins/array-sort.tq:145:5
    {
      Label label__True_655_impl(this);
      Label* label__True_655 = &label__True_655_impl;
      USE(label__True_655);
      Label label__False_656_impl(this, {});
      Label* label__False_656 = &label__False_656_impl;
      USE(label__False_656);
      TNode<BoolT> t2279 = UncheckedCast<BoolT>(IsTheHole(implicit_cast<TNode<Object>>((*result_882))));
      USE(implicit_cast<TNode<BoolT>>(t2279));
      Branch(implicit_cast<TNode<BoolT>>(t2279), label__True_655, label__False_656);
      if (label__True_655->is_used())
      {
        BIND(label__True_655);
        // ../../third_party/v8/builtins/array-sort.tq:145:28
        {
          // ../../third_party/v8/builtins/array-sort.tq:149:7
          TNode<Smi> t2280 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2280));
          Return(implicit_cast<TNode<Object>>(t2280));
        }
      }
      BIND(label__False_656);
    }
    // ../../third_party/v8/builtins/array-sort.tq:151:5
    Return(implicit_cast<TNode<Object>>((*result_882)));
  }
}

TF_BUILTIN(Load20ATFastDoubleElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:156:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:157:5
    {
      Label label_try_done_883_1314_impl(this);
      Label* label_try_done_883_1314 = &label_try_done_883_1314_impl;
      USE(label_try_done_883_1314);
      Label label_Bailout_657_impl(this);
      Label* label_Bailout_657 = &label_Bailout_657_impl;
      USE(label_Bailout_657);
      Label label_try_begin_884_1315_impl(this);
      Label* label_try_begin_884_1315 = &label_try_begin_884_1315_impl;
      USE(label_try_begin_884_1315);
      Goto(label_try_begin_884_1315);
      if (label_try_begin_884_1315->is_used())
      {
        BIND(label_try_begin_884_1315);
        // ../../third_party/v8/builtins/array-sort.tq:157:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:158:7
          TNode<FixedDoubleArray> t2281 = UncheckedCast<FixedDoubleArray>(unsafe_cast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
          USE(implicit_cast<TNode<FixedDoubleArray>>(t2281));
          TNode<FixedDoubleArray> elems_885_impl;
          auto elems_885 = &elems_885_impl;
          USE(elems_885);
          *elems_885 = implicit_cast<TNode<FixedDoubleArray>>(t2281);
          // ../../third_party/v8/builtins/array-sort.tq:159:7
          TNode<Float64T> t2282 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(implicit_cast<TNode<FixedDoubleArray>>((*elems_885)), implicit_cast<TNode<Smi>>(p_index), label_Bailout_657));
          USE(implicit_cast<TNode<Float64T>>(t2282));
          TNode<Float64T> value_886_impl;
          auto value_886 = &value_886_impl;
          USE(value_886);
          *value_886 = implicit_cast<TNode<Float64T>>(t2282);
          // ../../third_party/v8/builtins/array-sort.tq:161:7
          TNode<HeapNumber> t2283 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(implicit_cast<TNode<Float64T>>((*value_886))));
          USE(implicit_cast<TNode<HeapNumber>>(t2283));
          Return(implicit_cast<TNode<Object>>(t2283));
        }
      }
      if (label_Bailout_657->is_used())
      {
        BIND(label_Bailout_657);
        // ../../third_party/v8/builtins/array-sort.tq:163:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:167:7
          TNode<Smi> t2284 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2284));
          Return(implicit_cast<TNode<Object>>(t2284));
        }
      }
    }
  }
}

TF_BUILTIN(Load20ATDictionaryElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:173:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:174:5
    {
      Label label_try_done_887_1316_impl(this);
      Label* label_try_done_887_1316 = &label_try_done_887_1316_impl;
      USE(label_try_done_887_1316);
      Label label_Bailout_658_impl(this);
      Label* label_Bailout_658 = &label_Bailout_658_impl;
      USE(label_Bailout_658);
      Label label_try_begin_888_1317_impl(this);
      Label* label_try_begin_888_1317 = &label_try_begin_888_1317_impl;
      USE(label_try_begin_888_1317);
      Goto(label_try_begin_888_1317);
      if (label_try_begin_888_1317->is_used())
      {
        BIND(label_try_begin_888_1317);
        // ../../third_party/v8/builtins/array-sort.tq:174:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:175:7
          TNode<NumberDictionary> t2285 = UncheckedCast<NumberDictionary>(unsafe_cast18ATNumberDictionary(implicit_cast<TNode<Object>>(p_elements)));
          USE(implicit_cast<TNode<NumberDictionary>>(t2285));
          TNode<NumberDictionary> dictionary_889_impl;
          auto dictionary_889 = &dictionary_889_impl;
          USE(dictionary_889);
          *dictionary_889 = implicit_cast<TNode<NumberDictionary>>(t2285);
          // ../../third_party/v8/builtins/array-sort.tq:177:7
          TNode<IntPtrT> t2286 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Smi>>(p_index)));
          USE(implicit_cast<TNode<IntPtrT>>(t2286));
          TNode<IntPtrT> intptr_index_890_impl;
          auto intptr_index_890 = &intptr_index_890_impl;
          USE(intptr_index_890);
          *intptr_index_890 = implicit_cast<TNode<IntPtrT>>(t2286);
          // ../../third_party/v8/builtins/array-sort.tq:178:7
          TNode<Object> t2287 = UncheckedCast<Object>(BasicLoadNumberDictionaryElement(implicit_cast<TNode<NumberDictionary>>((*dictionary_889)), implicit_cast<TNode<IntPtrT>>((*intptr_index_890)), label_Bailout_658, label_Bailout_658));
          USE(implicit_cast<TNode<Object>>(t2287));
          TNode<Object> value_891_impl;
          auto value_891 = &value_891_impl;
          USE(value_891);
          *value_891 = implicit_cast<TNode<Object>>(t2287);
          // ../../third_party/v8/builtins/array-sort.tq:181:7
          Return(implicit_cast<TNode<Object>>((*value_891)));
        }
      }
      if (label_Bailout_658->is_used())
      {
        BIND(label_Bailout_658);
        // ../../third_party/v8/builtins/array-sort.tq:183:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:184:7
          TNode<Smi> t2288 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2288));
          Return(implicit_cast<TNode<Object>>(t2288));
        }
      }
    }
  }
}

TF_BUILTIN(Load19ATTempArrayElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:190:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:191:5
    // ../../third_party/v8/builtins/array-sort.tq:192:5
    TNode<FixedArray> t2289 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2289));
    TNode<FixedArray> elems_892_impl;
    auto elems_892 = &elems_892_impl;
    USE(elems_892);
    *elems_892 = implicit_cast<TNode<FixedArray>>(t2289);
    // ../../third_party/v8/builtins/array-sort.tq:193:5
    TNode<Object> t2290 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*elems_892)), implicit_cast<TNode<Smi>>(p_index)));
    Return(implicit_cast<TNode<Object>>(t2290));
  }
}

TF_BUILTIN(Store23ATFastPackedSmiElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:205:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:206:5
    TNode<FixedArray> t2291 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2291));
    TNode<FixedArray> elems_893_impl;
    auto elems_893 = &elems_893_impl;
    USE(elems_893);
    *elems_893 = implicit_cast<TNode<FixedArray>>(t2291);
    // ../../third_party/v8/builtins/array-sort.tq:207:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_893)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value), implicit_cast<WriteBarrierMode>(SKIP_WRITE_BARRIER));
    // ../../third_party/v8/builtins/array-sort.tq:208:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(Store25ATFastSmiOrObjectElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:213:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:214:5
    TNode<FixedArray> t2292 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2292));
    TNode<FixedArray> elems_894_impl;
    auto elems_894 = &elems_894_impl;
    USE(elems_894);
    *elems_894 = implicit_cast<TNode<FixedArray>>(t2292);
    // ../../third_party/v8/builtins/array-sort.tq:215:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_894)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value));
    // ../../third_party/v8/builtins/array-sort.tq:216:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(Store20ATFastDoubleElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:221:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:222:5
    TNode<FixedDoubleArray> t2293 = UncheckedCast<FixedDoubleArray>(unsafe_cast18ATFixedDoubleArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedDoubleArray>>(t2293));
    TNode<FixedDoubleArray> elems_895_impl;
    auto elems_895 = &elems_895_impl;
    USE(elems_895);
    *elems_895 = implicit_cast<TNode<FixedDoubleArray>>(t2293);
    // ../../third_party/v8/builtins/array-sort.tq:223:5
    TNode<HeapNumber> t2294 = UncheckedCast<HeapNumber>(unsafe_cast12ATHeapNumber(implicit_cast<TNode<Object>>(p_value)));
    USE(implicit_cast<TNode<HeapNumber>>(t2294));
    TNode<HeapNumber> heap_val_896_impl;
    auto heap_val_896 = &heap_val_896_impl;
    USE(heap_val_896);
    *heap_val_896 = implicit_cast<TNode<HeapNumber>>(t2294);
    // ../../third_party/v8/builtins/array-sort.tq:225:5
    TNode<Float64T> t2295 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<HeapNumber>>((*heap_val_896))));
    USE(implicit_cast<TNode<Float64T>>(t2295));
    TNode<Float64T> t2296 = UncheckedCast<Float64T>(Float64SilenceNaN(implicit_cast<TNode<Float64T>>(t2295)));
    USE(implicit_cast<TNode<Float64T>>(t2296));
    TNode<Float64T> val_897_impl;
    auto val_897 = &val_897_impl;
    USE(val_897);
    *val_897 = implicit_cast<TNode<Float64T>>(t2296);
    // ../../third_party/v8/builtins/array-sort.tq:226:5
    StoreFixedDoubleArrayElementWithSmiIndex(implicit_cast<TNode<FixedDoubleArray>>((*elems_895)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Float64T>>((*val_897)));
    // ../../third_party/v8/builtins/array-sort.tq:227:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(Store20ATDictionaryElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:232:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:233:5
    TNode<NumberDictionary> t2297 = UncheckedCast<NumberDictionary>(unsafe_cast18ATNumberDictionary(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<NumberDictionary>>(t2297));
    TNode<NumberDictionary> dictionary_898_impl;
    auto dictionary_898 = &dictionary_898_impl;
    USE(dictionary_898);
    *dictionary_898 = implicit_cast<TNode<NumberDictionary>>(t2297);
    // ../../third_party/v8/builtins/array-sort.tq:235:5
    TNode<IntPtrT> t2298 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Smi>>(p_index)));
    USE(implicit_cast<TNode<IntPtrT>>(t2298));
    TNode<IntPtrT> intptr_index_899_impl;
    auto intptr_index_899 = &intptr_index_899_impl;
    USE(intptr_index_899);
    *intptr_index_899 = implicit_cast<TNode<IntPtrT>>(t2298);
    // ../../third_party/v8/builtins/array-sort.tq:236:5
    {
      Label label_try_done_900_1318_impl(this);
      Label* label_try_done_900_1318 = &label_try_done_900_1318_impl;
      USE(label_try_done_900_1318);
      Label label_ReadOnly_659_impl(this);
      Label* label_ReadOnly_659 = &label_ReadOnly_659_impl;
      USE(label_ReadOnly_659);
      Label label_Fail_660_impl(this);
      Label* label_Fail_660 = &label_Fail_660_impl;
      USE(label_Fail_660);
      Label label_try_begin_901_1319_impl(this);
      Label* label_try_begin_901_1319 = &label_try_begin_901_1319_impl;
      USE(label_try_begin_901_1319);
      Goto(label_try_begin_901_1319);
      if (label_try_begin_901_1319->is_used())
      {
        BIND(label_try_begin_901_1319);
        // ../../third_party/v8/builtins/array-sort.tq:236:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:237:7
          BasicStoreNumberDictionaryElement(implicit_cast<TNode<NumberDictionary>>((*dictionary_898)), implicit_cast<TNode<IntPtrT>>((*intptr_index_899)), implicit_cast<TNode<Object>>(p_value), label_Fail_660, label_Fail_660, label_ReadOnly_659);
          // ../../third_party/v8/builtins/array-sort.tq:239:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_ReadOnly_659->is_used())
      {
        BIND(label_ReadOnly_659);
        // ../../third_party/v8/builtins/array-sort.tq:241:20
        {
          // ../../third_party/v8/builtins/array-sort.tq:244:7
          TNode<JSReceiver> t2299 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<JSReceiver>>(t2299));
          TNode<JSReceiver> receiver_902_impl;
          auto receiver_902 = &receiver_902_impl;
          USE(receiver_902);
          *receiver_902 = implicit_cast<TNode<JSReceiver>>(t2299);
          // ../../third_party/v8/builtins/array-sort.tq:245:7
          TNode<Object> t2300 = UncheckedCast<Object>(Typeof(implicit_cast<TNode<Object>>((*receiver_902))));
          USE(implicit_cast<TNode<Object>>(t2300));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kStrictReadOnlyProperty), implicit_cast<TNode<Object>>(p_index), implicit_cast<TNode<Object>>(t2300), implicit_cast<TNode<Object>>((*receiver_902)));
        }
      }
      if (label_Fail_660->is_used())
      {
        BIND(label_Fail_660);
        // ../../third_party/v8/builtins/array-sort.tq:248:16
        {
          // ../../third_party/v8/builtins/array-sort.tq:249:7
          TNode<Smi> t2301 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2301));
          Return(implicit_cast<TNode<Smi>>(t2301));
        }
      }
    }
  }
}

TF_BUILTIN(Store19ATTempArrayElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:255:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:256:5
    TNode<FixedArray> t2302 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(p_elements)));
    USE(implicit_cast<TNode<FixedArray>>(t2302));
    TNode<FixedArray> elems_903_impl;
    auto elems_903 = &elems_903_impl;
    USE(elems_903);
    *elems_903 = implicit_cast<TNode<FixedArray>>(t2302);
    // ../../third_party/v8/builtins/array-sort.tq:257:5
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>((*elems_903)), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value));
    // ../../third_party/v8/builtins/array-sort.tq:258:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

TF_BUILTIN(SortCompareDefault, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_comparefn = UncheckedCast<Object>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Object> p_x = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(p_x);
  TNode<Object> p_y = UncheckedCast<Object>(Parameter(Descriptor::kY));
  USE(p_y);
  // ../../third_party/v8/builtins/array-sort.tq:283:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:284:5
    // ../../third_party/v8/builtins/array-sort.tq:286:5
    {
      Label label__True_661_impl(this);
      Label* label__True_661 = &label__True_661_impl;
      USE(label__True_661);
      Label label__False_662_impl(this, {});
      Label* label__False_662 = &label__False_662_impl;
      USE(label__False_662);
      Label label__True_663_impl(this);
      Label* label__True_663 = &label__True_663_impl;
      USE(label__True_663);
      TNode<BoolT> t2307 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_x)));
      USE(implicit_cast<TNode<BoolT>>(t2307));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t2307), label__False_662);
      TNode<BoolT> t2308 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_y)));
      USE(implicit_cast<TNode<BoolT>>(t2308));
      Branch(implicit_cast<TNode<BoolT>>(t2308), label__True_661, label__False_662);
      if (label__True_661->is_used())
      {
        BIND(label__True_661);
        // ../../third_party/v8/builtins/array-sort.tq:286:43
        {
          // ../../third_party/v8/builtins/array-sort.tq:288:7
          TNode<Number> t2309 = UncheckedCast<Number>(CallRuntime(Runtime::kSmiLexicographicCompare, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_x), implicit_cast<TNode<Object>>(p_y)));
          USE(implicit_cast<TNode<Number>>(t2309));
          Return(implicit_cast<TNode<Number>>(t2309));
        }
      }
      BIND(label__False_662);
    }
    // ../../third_party/v8/builtins/array-sort.tq:292:5
    TNode<String> t2310 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_x)));
    USE(implicit_cast<TNode<String>>(t2310));
    TNode<String> xString_904_impl;
    auto xString_904 = &xString_904_impl;
    USE(xString_904);
    *xString_904 = implicit_cast<TNode<String>>(t2310);
    // ../../third_party/v8/builtins/array-sort.tq:295:5
    TNode<String> t2311 = UncheckedCast<String>(ToString_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_y)));
    USE(implicit_cast<TNode<String>>(t2311));
    TNode<String> yString_905_impl;
    auto yString_905 = &yString_905_impl;
    USE(yString_905);
    *yString_905 = implicit_cast<TNode<String>>(t2311);
    // ../../third_party/v8/builtins/array-sort.tq:300:5
    {
      Label label__True_664_impl(this);
      Label* label__True_664 = &label__True_664_impl;
      USE(label__True_664);
      Label label__False_665_impl(this, {});
      Label* label__False_665 = &label__False_665_impl;
      USE(label__False_665);
      TNode<Oddball> t2312 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kStringLessThan, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<String>>((*xString_904)), implicit_cast<TNode<String>>((*yString_905))));
      USE(implicit_cast<TNode<Oddball>>(t2312));
      TNode<BoolT> t2313 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2312), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t2313));
      Branch(implicit_cast<TNode<BoolT>>(t2313), label__True_664, label__False_665);
      if (label__True_664->is_used())
      {
        BIND(label__True_664);
        // ../../third_party/v8/builtins/array-sort.tq:300:60
        int31_t t2314 = -1;
        TNode<Number> t2315 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2314)));
        Return(implicit_cast<TNode<Number>>(t2315));
      }
      BIND(label__False_665);
    }
    // ../../third_party/v8/builtins/array-sort.tq:305:5
    {
      Label label__True_666_impl(this);
      Label* label__True_666 = &label__True_666_impl;
      USE(label__True_666);
      Label label__False_667_impl(this, {});
      Label* label__False_667 = &label__False_667_impl;
      USE(label__False_667);
      TNode<Oddball> t2316 = UncheckedCast<Oddball>(CallBuiltin(Builtins::kStringLessThan, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<String>>((*yString_905)), implicit_cast<TNode<String>>((*xString_904))));
      USE(implicit_cast<TNode<Oddball>>(t2316));
      TNode<BoolT> t2317 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2316), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t2317));
      Branch(implicit_cast<TNode<BoolT>>(t2317), label__True_666, label__False_667);
      if (label__True_666->is_used())
      {
        BIND(label__True_666);
        // ../../third_party/v8/builtins/array-sort.tq:305:60
        int31_t t2318 = 1;
        TNode<Number> t2319 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2318)));
        Return(implicit_cast<TNode<Number>>(t2319));
      }
      BIND(label__False_667);
    }
    // ../../third_party/v8/builtins/array-sort.tq:308:5
    int31_t t2320 = 0;
    TNode<Number> t2321 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2320)));
    Return(implicit_cast<TNode<Number>>(t2321));
  }
}

TF_BUILTIN(SortCompareUserFn, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_comparefn = UncheckedCast<Object>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Object> p_x = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(p_x);
  TNode<Object> p_y = UncheckedCast<Object>(Parameter(Descriptor::kY));
  USE(p_y);
  // ../../third_party/v8/builtins/array-sort.tq:312:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:313:5
    // ../../third_party/v8/builtins/array-sort.tq:314:5
    TNode<JSReceiver> t2322 = UncheckedCast<JSReceiver>(unsafe_cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(implicit_cast<TNode<Object>>(p_comparefn)));
    USE(implicit_cast<TNode<JSReceiver>>(t2322));
    TNode<JSReceiver> cmpfn_906_impl;
    auto cmpfn_906 = &cmpfn_906_impl;
    USE(cmpfn_906);
    *cmpfn_906 = implicit_cast<TNode<JSReceiver>>(t2322);
    // ../../third_party/v8/builtins/array-sort.tq:317:5
    TNode<Object> t2323 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*cmpfn_906)), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<TNode<Object>>(p_x), implicit_cast<TNode<Object>>(p_y)));
    USE(implicit_cast<TNode<Object>>(t2323));
    TNode<Number> t2324 = UncheckedCast<Number>(ToNumber_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t2323)));
    USE(implicit_cast<TNode<Number>>(t2324));
    TNode<Number> v_907_impl;
    auto v_907 = &v_907_impl;
    USE(v_907);
    *v_907 = implicit_cast<TNode<Number>>(t2324);
    // ../../third_party/v8/builtins/array-sort.tq:321:5
    {
      Label label__True_668_impl(this);
      Label* label__True_668 = &label__True_668_impl;
      USE(label__True_668);
      Label label__False_669_impl(this, {});
      Label* label__False_669 = &label__False_669_impl;
      USE(label__False_669);
      TNode<BoolT> t2325 = UncheckedCast<BoolT>(NumberIsNaN(implicit_cast<TNode<Number>>((*v_907))));
      USE(implicit_cast<TNode<BoolT>>(t2325));
      Branch(implicit_cast<TNode<BoolT>>(t2325), label__True_668, label__False_669);
      if (label__True_668->is_used())
      {
        BIND(label__True_668);
        // ../../third_party/v8/builtins/array-sort.tq:321:25
        int31_t t2326 = 0;
        TNode<Number> t2327 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2326)));
        Return(implicit_cast<TNode<Number>>(t2327));
      }
      BIND(label__False_669);
    }
    // ../../third_party/v8/builtins/array-sort.tq:324:5
    Return(implicit_cast<TNode<Number>>((*v_907)));
  }
}

TF_BUILTIN(CanUseSameAccessor25ATGenericElementsAccessor, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:344:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:346:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

TF_BUILTIN(CanUseSameAccessor20ATDictionaryElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:351:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:352:5
    TNode<JSReceiver> t2328 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t2328));
    TVARIABLE(JSReceiver, obj_419_impl);
    auto obj_419 = &obj_419_impl;
    USE(obj_419);
    *obj_419 = implicit_cast<TNode<JSReceiver>>(t2328);
    // ../../third_party/v8/builtins/array-sort.tq:353:5
    TNode<Map> t2329 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*obj_419).value())));
    TNode<BoolT> t2330 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2329), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
    USE(implicit_cast<TNode<BoolT>>(t2330));
    TNode<Oddball> t2331 = UncheckedCast<Oddball>(SelectBooleanConstant(implicit_cast<TNode<BoolT>>(t2330)));
    USE(implicit_cast<TNode<Oddball>>(t2331));
    Return(implicit_cast<TNode<Oddball>>(t2331));
  }
}

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::CallCompareFn(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Object> p_x, TNode<Object> p_y, Label* label_Bailout_670) {
  TVARIABLE(Number, _return_420_impl);
  auto _return_420 = &_return_420_impl;
  USE(_return_420);
  Label label_macro_end_1324_impl(this, {_return_420});
  Label* label_macro_end_1324 = &label_macro_end_1324_impl;
  USE(label_macro_end_1324);
  // ../../third_party/v8/builtins/array-sort.tq:358:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:359:5
    TNode<Object> t2332 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kUserCmpFnIdx())));
    TNode<Object> userCmpFn_908_impl;
    auto userCmpFn_908 = &userCmpFn_908_impl;
    USE(userCmpFn_908);
    *userCmpFn_908 = implicit_cast<TNode<Object>>(t2332);
    // ../../third_party/v8/builtins/array-sort.tq:360:5
    TNode<Object> t2333 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kSortComparePtrIdx())));
    TNode<Code> t2334 = UncheckedCast<Code>(unsafe_cast108FT9ATContext22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(t2333)));
    USE(implicit_cast<TNode<Code>>(t2334));
    TNode<Code> sortCompare_909_impl;
    auto sortCompare_909 = &sortCompare_909_impl;
    USE(sortCompare_909);
    *sortCompare_909 = implicit_cast<TNode<Code>>(t2334);
    // ../../third_party/v8/builtins/array-sort.tq:363:5
    TNode<Number> t2335 = UncheckedCast<Number>(CallStub(Builtins::CallableFor(isolate(), Builtins::kSortCompareDefault).descriptor(), implicit_cast<TNode<Code>>((*sortCompare_909)), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*userCmpFn_908)), implicit_cast<TNode<Object>>(p_x), implicit_cast<TNode<Object>>(p_y)));
    USE(implicit_cast<TNode<Number>>(t2335));
    TNode<Number> result_910_impl;
    auto result_910 = &result_910_impl;
    USE(result_910);
    *result_910 = implicit_cast<TNode<Number>>(t2335);
    // ../../third_party/v8/builtins/array-sort.tq:365:5
    TNode<JSReceiver> t2336 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<JSReceiver>>(t2336));
    TNode<JSReceiver> receiver_911_impl;
    auto receiver_911 = &receiver_911_impl;
    USE(receiver_911);
    *receiver_911 = implicit_cast<TNode<JSReceiver>>(t2336);
    // ../../third_party/v8/builtins/array-sort.tq:366:5
    TNode<Object> t2337 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kInitialReceiverMapIdx())));
    TNode<Object> initialReceiverMap_912_impl;
    auto initialReceiverMap_912 = &initialReceiverMap_912_impl;
    USE(initialReceiverMap_912);
    *initialReceiverMap_912 = implicit_cast<TNode<Object>>(t2337);
    // ../../third_party/v8/builtins/array-sort.tq:367:5
    TNode<Object> t2338 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kInitialReceiverLengthIdx())));
    TNode<Number> t2339 = UncheckedCast<Number>(unsafe_cast22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(t2338)));
    USE(implicit_cast<TNode<Number>>(t2339));
    TNode<Number> initialReceiverLength_913_impl;
    auto initialReceiverLength_913 = &initialReceiverLength_913_impl;
    USE(initialReceiverLength_913);
    *initialReceiverLength_913 = implicit_cast<TNode<Number>>(t2339);
    // ../../third_party/v8/builtins/array-sort.tq:369:5
    TNode<Code> t2340 = UncheckedCast<Code>(GetCanUseSameAccessorFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2340));
    TNode<Code> CanUseSameAccessor_914_impl;
    auto CanUseSameAccessor_914 = &CanUseSameAccessor_914_impl;
    USE(CanUseSameAccessor_914);
    *CanUseSameAccessor_914 = implicit_cast<TNode<Code>>(t2340);
    // ../../third_party/v8/builtins/array-sort.tq:372:5
    {
      Label label__True_671_impl(this);
      Label* label__True_671 = &label__True_671_impl;
      USE(label__True_671);
      Label label__False_672_impl(this, {});
      Label* label__False_672 = &label__False_672_impl;
      USE(label__False_672);
      TNode<Oddball> t2341 = UncheckedCast<Oddball>(CallStub(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor25ATGenericElementsAccessor).descriptor(), implicit_cast<TNode<Code>>((*CanUseSameAccessor_914)), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>((*receiver_911)), implicit_cast<TNode<Object>>((*initialReceiverMap_912)), implicit_cast<TNode<Number>>((*initialReceiverLength_913))));
      USE(implicit_cast<TNode<Oddball>>(t2341));
      TNode<BoolT> t2342 = UncheckedCast<BoolT>(IsFalse(implicit_cast<TNode<Oddball>>(t2341)));
      USE(implicit_cast<TNode<BoolT>>(t2342));
      Branch(implicit_cast<TNode<BoolT>>(t2342), label__True_671, label__False_672);
      if (label__True_671->is_used())
      {
        BIND(label__True_671);
        // ../../third_party/v8/builtins/array-sort.tq:373:76
        {
          // ../../third_party/v8/builtins/array-sort.tq:374:7
          Goto(label_Bailout_670);
        }
      }
      BIND(label__False_672);
    }
    // ../../third_party/v8/builtins/array-sort.tq:376:5
    *_return_420 = implicit_cast<TNode<Number>>((*result_910));
    Goto(label_macro_end_1324);
  }
  BIND(label_macro_end_1324);
  return implicit_cast<TNode<Number>>((*_return_420).value());
}

compiler::TNode<HeapObject> ArrayBuiltinsFromDSLAssembler::ReloadElements(TNode<FixedArray> p_sortState) {
  TVARIABLE(HeapObject, _return_421_impl);
  auto _return_421 = &_return_421_impl;
  USE(_return_421);
  Label label_macro_end_1325_impl(this, {_return_421});
  Label* label_macro_end_1325 = &label_macro_end_1325_impl;
  USE(label_macro_end_1325);
  // ../../third_party/v8/builtins/array-sort.tq:383:59
  {
    // ../../third_party/v8/builtins/array-sort.tq:384:5
    TNode<JSReceiver> t2343 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<JSReceiver>>(t2343));
    TNode<JSReceiver> receiver_915_impl;
    auto receiver_915 = &receiver_915_impl;
    USE(receiver_915);
    *receiver_915 = implicit_cast<TNode<JSReceiver>>(t2343);
    // ../../third_party/v8/builtins/array-sort.tq:385:5
    {
      Label label__True_673_impl(this);
      Label* label__True_673 = &label__True_673_impl;
      USE(label__True_673);
      Label label__False_674_impl(this, {});
      Label* label__False_674 = &label__False_674_impl;
      USE(label__False_674);
      TNode<Object> t2344 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx())));
      TNode<BoolT> t2345 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t2344), implicit_cast<TNode<Object>>(kGenericElementsAccessorId())));
      USE(implicit_cast<TNode<BoolT>>(t2345));
      Branch(implicit_cast<TNode<BoolT>>(t2345), label__True_673, label__False_674);
      if (label__True_673->is_used())
      {
        BIND(label__True_673);
        // ../../third_party/v8/builtins/array-sort.tq:385:64
        *_return_421 = implicit_cast<TNode<HeapObject>>((*receiver_915));
        Goto(label_macro_end_1325);
      }
      BIND(label__False_674);
    }
    // ../../third_party/v8/builtins/array-sort.tq:387:5
    TNode<JSObject> t2346 = UncheckedCast<JSObject>(unsafe_cast10ATJSObject(implicit_cast<TNode<Object>>((*receiver_915))));
    USE(implicit_cast<TNode<JSObject>>(t2346));
    TNode<JSObject> object_916_impl;
    auto object_916 = &object_916_impl;
    USE(object_916);
    *object_916 = implicit_cast<TNode<JSObject>>(t2346);
    // ../../third_party/v8/builtins/array-sort.tq:388:5
    TNode<FixedArrayBase> t2347 = UncheckedCast<FixedArrayBase>(LoadElements(implicit_cast<TNode<JSObject>>((*object_916))));
    *_return_421 = implicit_cast<TNode<HeapObject>>(t2347);
    Goto(label_macro_end_1325);
  }
  BIND(label_macro_end_1325);
  return implicit_cast<TNode<HeapObject>>((*_return_421).value());
}

compiler::TNode<Code> ArrayBuiltinsFromDSLAssembler::GetLoadFn(TNode<FixedArray> p_sortState) {
  TVARIABLE(Code, _return_422_impl);
  auto _return_422 = &_return_422_impl;
  USE(_return_422);
  Label label_macro_end_1326_impl(this, {_return_422});
  Label* label_macro_end_1326 = &label_macro_end_1326_impl;
  USE(label_macro_end_1326);
  // ../../third_party/v8/builtins/array-sort.tq:391:50
  {
    // ../../third_party/v8/builtins/array-sort.tq:392:5
    TNode<Object> t2348 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx())));
    TNode<Code> t2349 = UncheckedCast<Code>(unsafe_cast70FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(t2348)));
    USE(implicit_cast<TNode<Code>>(t2349));
    *_return_422 = implicit_cast<TNode<Code>>(t2349);
    Goto(label_macro_end_1326);
  }
  BIND(label_macro_end_1326);
  return implicit_cast<TNode<Code>>((*_return_422).value());
}

compiler::TNode<Code> ArrayBuiltinsFromDSLAssembler::GetStoreFn(TNode<FixedArray> p_sortState) {
  TVARIABLE(Code, _return_423_impl);
  auto _return_423 = &_return_423_impl;
  USE(_return_423);
  Label label_macro_end_1327_impl(this, {_return_423});
  Label* label_macro_end_1327 = &label_macro_end_1327_impl;
  USE(label_macro_end_1327);
  // ../../third_party/v8/builtins/array-sort.tq:395:52
  {
    // ../../third_party/v8/builtins/array-sort.tq:396:5
    TNode<Object> t2350 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx())));
    TNode<Code> t2351 = UncheckedCast<Code>(unsafe_cast76FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi5ATSmi(implicit_cast<TNode<Object>>(t2350)));
    USE(implicit_cast<TNode<Code>>(t2351));
    *_return_423 = implicit_cast<TNode<Code>>(t2351);
    Goto(label_macro_end_1327);
  }
  BIND(label_macro_end_1327);
  return implicit_cast<TNode<Code>>((*_return_423).value());
}

compiler::TNode<Code> ArrayBuiltinsFromDSLAssembler::GetCanUseSameAccessorFn(TNode<FixedArray> p_sortState) {
  TVARIABLE(Code, _return_424_impl);
  auto _return_424 = &_return_424_impl;
  USE(_return_424);
  Label label_macro_end_1328_impl(this, {_return_424});
  Label* label_macro_end_1328 = &label_macro_end_1328_impl;
  USE(label_macro_end_1328);
  // ../../third_party/v8/builtins/array-sort.tq:399:78
  {
    // ../../third_party/v8/builtins/array-sort.tq:400:5
    TNode<Object> t2352 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx())));
    TNode<Code> t2353 = UncheckedCast<Code>(unsafe_cast84FT9ATContext12ATJSReceiver22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi9ATBoolean(implicit_cast<TNode<Object>>(t2352)));
    USE(implicit_cast<TNode<Code>>(t2353));
    *_return_424 = implicit_cast<TNode<Code>>(t2353);
    Goto(label_macro_end_1328);
  }
  BIND(label_macro_end_1328);
  return implicit_cast<TNode<Code>>((*_return_424).value());
}

compiler::TNode<JSReceiver> ArrayBuiltinsFromDSLAssembler::GetReceiver(TNode<FixedArray> p_sortState) {
  TVARIABLE(JSReceiver, _return_425_impl);
  auto _return_425 = &_return_425_impl;
  USE(_return_425);
  Label label_macro_end_1329_impl(this, {_return_425});
  Label* label_macro_end_1329 = &label_macro_end_1329_impl;
  USE(label_macro_end_1329);
  // ../../third_party/v8/builtins/array-sort.tq:404:56
  {
    // ../../third_party/v8/builtins/array-sort.tq:405:5
    TNode<Object> t2354 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kReceiverIdx())));
    TNode<JSReceiver> t2355 = UncheckedCast<JSReceiver>(unsafe_cast12ATJSReceiver(implicit_cast<TNode<Object>>(t2354)));
    USE(implicit_cast<TNode<JSReceiver>>(t2355));
    *_return_425 = implicit_cast<TNode<JSReceiver>>(t2355);
    Goto(label_macro_end_1329);
  }
  BIND(label_macro_end_1329);
  return implicit_cast<TNode<JSReceiver>>((*_return_425).value());
}

compiler::TNode<FixedArray> ArrayBuiltinsFromDSLAssembler::GetTempArray(TNode<FixedArray> p_sortState) {
  TVARIABLE(FixedArray, _return_426_impl);
  auto _return_426 = &_return_426_impl;
  USE(_return_426);
  Label label_macro_end_1330_impl(this, {_return_426});
  Label* label_macro_end_1330 = &label_macro_end_1330_impl;
  USE(label_macro_end_1330);
  // ../../third_party/v8/builtins/array-sort.tq:409:57
  {
    // ../../third_party/v8/builtins/array-sort.tq:410:5
    TNode<Object> t2356 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArrayIdx())));
    TNode<FixedArray> t2357 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t2356)));
    USE(implicit_cast<TNode<FixedArray>>(t2357));
    *_return_426 = implicit_cast<TNode<FixedArray>>(t2357);
    Goto(label_macro_end_1330);
  }
  BIND(label_macro_end_1330);
  return implicit_cast<TNode<FixedArray>>((*_return_426).value());
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetPendingRunsSize(TNode<FixedArray> p_sortState) {
  TVARIABLE(Smi, _return_427_impl);
  auto _return_427 = &_return_427_impl;
  USE(_return_427);
  Label label_macro_end_1331_impl(this, {_return_427});
  Label* label_macro_end_1331 = &label_macro_end_1331_impl;
  USE(label_macro_end_1331);
  // ../../third_party/v8/builtins/array-sort.tq:415:56
  {
    // ../../third_party/v8/builtins/array-sort.tq:416:5
    // ../../third_party/v8/builtins/array-sort.tq:417:5
    TNode<Object> t2358 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsSizeIdx())));
    TNode<Smi> t2359 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2358)));
    USE(implicit_cast<TNode<Smi>>(t2359));
    TNode<Smi> stack_size_917_impl;
    auto stack_size_917 = &stack_size_917_impl;
    USE(stack_size_917);
    *stack_size_917 = implicit_cast<TNode<Smi>>(t2359);
    // ../../third_party/v8/builtins/array-sort.tq:419:5
    // ../../third_party/v8/builtins/array-sort.tq:420:5
    *_return_427 = implicit_cast<TNode<Smi>>((*stack_size_917));
    Goto(label_macro_end_1331);
  }
  BIND(label_macro_end_1331);
  return implicit_cast<TNode<Smi>>((*_return_427).value());
}

void ArrayBuiltinsFromDSLAssembler::SetPendingRunsSize(TNode<FixedArray> p_sortState, TNode<Smi> p_value) {
  Label label_macro_end_1332_impl(this, {});
  Label* label_macro_end_1332 = &label_macro_end_1332_impl;
  USE(label_macro_end_1332);
  // ../../third_party/v8/builtins/array-sort.tq:423:63
  {
    // ../../third_party/v8/builtins/array-sort.tq:424:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsSizeIdx()), implicit_cast<TNode<Object>>(p_value));
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetPendingRunBase(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run) {
  TVARIABLE(Smi, _return_428_impl);
  auto _return_428 = &_return_428_impl;
  USE(_return_428);
  Label label_macro_end_1333_impl(this, {_return_428});
  Label* label_macro_end_1333 = &label_macro_end_1333_impl;
  USE(label_macro_end_1333);
  // ../../third_party/v8/builtins/array-sort.tq:427:67
  {
    // ../../third_party/v8/builtins/array-sort.tq:428:5
    int31_t t2360 = 1;
    TNode<Smi> t2361 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2360)));
    USE(implicit_cast<TNode<Smi>>(t2361));
    TNode<Object> t2362 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2361)));
    TNode<Smi> t2363 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2362)));
    USE(implicit_cast<TNode<Smi>>(t2363));
    *_return_428 = implicit_cast<TNode<Smi>>(t2363);
    Goto(label_macro_end_1333);
  }
  BIND(label_macro_end_1333);
  return implicit_cast<TNode<Smi>>((*_return_428).value());
}

void ArrayBuiltinsFromDSLAssembler::SetPendingRunBase(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value) {
  Label label_macro_end_1334_impl(this, {});
  Label* label_macro_end_1334 = &label_macro_end_1334_impl;
  USE(label_macro_end_1334);
  // ../../third_party/v8/builtins/array-sort.tq:431:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:432:5
    int31_t t2364 = 1;
    TNode<Smi> t2365 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2364)));
    USE(implicit_cast<TNode<Smi>>(t2365));
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2365), implicit_cast<TNode<Object>>(p_value));
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetPendingRunLength(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run) {
  TVARIABLE(Smi, _return_429_impl);
  auto _return_429 = &_return_429_impl;
  USE(_return_429);
  Label label_macro_end_1335_impl(this, {_return_429});
  Label* label_macro_end_1335 = &label_macro_end_1335_impl;
  USE(label_macro_end_1335);
  // ../../third_party/v8/builtins/array-sort.tq:435:69
  {
    // ../../third_party/v8/builtins/array-sort.tq:436:5
    int31_t t2366 = 1;
    TNode<Smi> t2367 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2366)));
    USE(implicit_cast<TNode<Smi>>(t2367));
    int31_t t2368 = 1;
    TNode<Smi> t2369 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2368)));
    TNode<Smi> t2370 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2367), implicit_cast<TNode<Smi>>(t2369)));
    USE(implicit_cast<TNode<Smi>>(t2370));
    TNode<Object> t2371 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2370)));
    TNode<Smi> t2372 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2371)));
    USE(implicit_cast<TNode<Smi>>(t2372));
    *_return_429 = implicit_cast<TNode<Smi>>(t2372);
    Goto(label_macro_end_1335);
  }
  BIND(label_macro_end_1335);
  return implicit_cast<TNode<Smi>>((*_return_429).value());
}

void ArrayBuiltinsFromDSLAssembler::SetPendingRunLength(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_run, TNode<Smi> p_value) {
  Label label_macro_end_1336_impl(this, {});
  Label* label_macro_end_1336 = &label_macro_end_1336_impl;
  USE(label_macro_end_1336);
  // ../../third_party/v8/builtins/array-sort.tq:439:76
  {
    // ../../third_party/v8/builtins/array-sort.tq:440:5
    int31_t t2373 = 1;
    TNode<Smi> t2374 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>(p_run), implicit_cast<int31_t>(t2373)));
    USE(implicit_cast<TNode<Smi>>(t2374));
    int31_t t2375 = 1;
    TNode<Smi> t2376 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2375)));
    TNode<Smi> t2377 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2374), implicit_cast<TNode<Smi>>(t2376)));
    USE(implicit_cast<TNode<Smi>>(t2377));
    StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t2377), implicit_cast<TNode<Object>>(p_value));
  }
}

void ArrayBuiltinsFromDSLAssembler::PushRun(TNode<FixedArray> p_sortState, TNode<Smi> p_base, TNode<Smi> p_length) {
  Label label_macro_end_1337_impl(this, {});
  Label* label_macro_end_1337 = &label_macro_end_1337_impl;
  USE(label_macro_end_1337);
  // ../../third_party/v8/builtins/array-sort.tq:443:64
  {
    // ../../third_party/v8/builtins/array-sort.tq:444:5
    // ../../third_party/v8/builtins/array-sort.tq:446:5
    TNode<Smi> t2378 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2378));
    TNode<Smi> stack_size_918_impl;
    auto stack_size_918 = &stack_size_918_impl;
    USE(stack_size_918);
    *stack_size_918 = implicit_cast<TNode<Smi>>(t2378);
    // ../../third_party/v8/builtins/array-sort.tq:447:5
    TNode<Object> t2379 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t2380 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t2379)));
    USE(implicit_cast<TNode<FixedArray>>(t2380));
    TNode<FixedArray> pending_runs_919_impl;
    auto pending_runs_919 = &pending_runs_919_impl;
    USE(pending_runs_919);
    *pending_runs_919 = implicit_cast<TNode<FixedArray>>(t2380);
    // ../../third_party/v8/builtins/array-sort.tq:450:5
    SetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_919)), implicit_cast<TNode<Smi>>((*stack_size_918)), implicit_cast<TNode<Smi>>(p_base));
    // ../../third_party/v8/builtins/array-sort.tq:451:5
    SetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_919)), implicit_cast<TNode<Smi>>((*stack_size_918)), implicit_cast<TNode<Smi>>(p_length));
    // ../../third_party/v8/builtins/array-sort.tq:453:5
    int31_t t2381 = 1;
    TNode<Smi> t2382 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2381)));
    TNode<Smi> t2383 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*stack_size_918)), implicit_cast<TNode<Smi>>(t2382)));
    USE(implicit_cast<TNode<Smi>>(t2383));
    SetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(t2383));
  }
}

compiler::TNode<FixedArray> ArrayBuiltinsFromDSLAssembler::GetTempArray(TNode<FixedArray> p_sortState, TNode<Smi> p_requestedSize) {
  TVARIABLE(FixedArray, _return_430_impl);
  auto _return_430 = &_return_430_impl;
  USE(_return_430);
  Label label_macro_end_1338_impl(this, {_return_430});
  Label* label_macro_end_1338 = &label_macro_end_1338_impl;
  USE(label_macro_end_1338);
  // ../../third_party/v8/builtins/array-sort.tq:458:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:459:5
    TNode<Smi> t2384 = UncheckedCast<Smi>(SmiMax(implicit_cast<TNode<Smi>>(kSortStateTempSize()), implicit_cast<TNode<Smi>>(p_requestedSize)));
    USE(implicit_cast<TNode<Smi>>(t2384));
    TNode<Smi> min_size_920_impl;
    auto min_size_920 = &min_size_920_impl;
    USE(min_size_920);
    *min_size_920 = implicit_cast<TNode<Smi>>(t2384);
    // ../../third_party/v8/builtins/array-sort.tq:461:5
    TNode<Object> t2385 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArraySizeIdx())));
    TNode<Smi> t2386 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2385)));
    USE(implicit_cast<TNode<Smi>>(t2386));
    TNode<Smi> current_size_921_impl;
    auto current_size_921 = &current_size_921_impl;
    USE(current_size_921);
    *current_size_921 = implicit_cast<TNode<Smi>>(t2386);
    // ../../third_party/v8/builtins/array-sort.tq:462:5
    {
      Label label__True_675_impl(this);
      Label* label__True_675 = &label__True_675_impl;
      USE(label__True_675);
      Label label__False_676_impl(this, {});
      Label* label__False_676 = &label__False_676_impl;
      USE(label__False_676);
      TNode<BoolT> t2387 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*current_size_921)), implicit_cast<TNode<Smi>>((*min_size_920))));
      USE(implicit_cast<TNode<BoolT>>(t2387));
      Branch(implicit_cast<TNode<BoolT>>(t2387), label__True_675, label__False_676);
      if (label__True_675->is_used())
      {
        BIND(label__True_675);
        // ../../third_party/v8/builtins/array-sort.tq:462:35
        {
          // ../../third_party/v8/builtins/array-sort.tq:463:7
          TNode<FixedArray> t2388 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<FixedArray>>(t2388));
          *_return_430 = implicit_cast<TNode<FixedArray>>(t2388);
          Goto(label_macro_end_1338);
        }
      }
      BIND(label__False_676);
    }
    // ../../third_party/v8/builtins/array-sort.tq:466:5
    TNode<IntPtrT> t2389 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Smi>>((*min_size_920))));
    USE(implicit_cast<TNode<IntPtrT>>(t2389));
    TNode<FixedArray> t2390 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(t2389)));
    USE(implicit_cast<TNode<FixedArray>>(t2390));
    TNode<FixedArray> temp_array_922_impl;
    auto temp_array_922 = &temp_array_922_impl;
    USE(temp_array_922);
    *temp_array_922 = implicit_cast<TNode<FixedArray>>(t2390);
    // ../../third_party/v8/builtins/array-sort.tq:468:5
    FillFixedArrayWithSmiZero(implicit_cast<TNode<FixedArray>>((*temp_array_922)), implicit_cast<TNode<Smi>>((*min_size_920)));
    // ../../third_party/v8/builtins/array-sort.tq:470:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArraySizeIdx()), implicit_cast<TNode<Object>>((*min_size_920)));
    // ../../third_party/v8/builtins/array-sort.tq:471:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArrayIdx()), implicit_cast<TNode<Object>>((*temp_array_922)));
    // ../../third_party/v8/builtins/array-sort.tq:472:5
    *_return_430 = implicit_cast<TNode<FixedArray>>((*temp_array_922));
    Goto(label_macro_end_1338);
  }
  BIND(label_macro_end_1338);
  return implicit_cast<TNode<FixedArray>>((*_return_430).value());
}

void ArrayBuiltinsFromDSLAssembler::EnsureSuccess(TNode<FixedArray> p_sortState, Label* label_Bailout_677) {
  Label label_macro_end_1339_impl(this, {});
  Label* label_macro_end_1339 = &label_macro_end_1339_impl;
  USE(label_macro_end_1339);
  // ../../third_party/v8/builtins/array-sort.tq:476:61
  {
    // ../../third_party/v8/builtins/array-sort.tq:477:5
    TNode<Object> t2391 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kBailoutStatusIdx())));
    TNode<Smi> t2392 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2391)));
    USE(implicit_cast<TNode<Smi>>(t2392));
    TNode<Smi> status_923_impl;
    auto status_923 = &status_923_impl;
    USE(status_923);
    *status_923 = implicit_cast<TNode<Smi>>(t2392);
    // ../../third_party/v8/builtins/array-sort.tq:478:5
    {
      Label label__True_678_impl(this);
      Label* label__True_678 = &label__True_678_impl;
      USE(label__True_678);
      Label label__False_679_impl(this, {});
      Label* label__False_679 = &label__False_679_impl;
      USE(label__False_679);
      TNode<BoolT> t2393 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*status_923)), implicit_cast<TNode<Smi>>(kFailure())));
      USE(implicit_cast<TNode<BoolT>>(t2393));
      Branch(implicit_cast<TNode<BoolT>>(t2393), label__True_678, label__False_679);
      if (label__True_678->is_used())
      {
        BIND(label__True_678);
        // ../../third_party/v8/builtins/array-sort.tq:478:29
        Goto(label_Bailout_677);
      }
      BIND(label__False_679);
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::Failure(TNode<FixedArray> p_sortState) {
  TVARIABLE(Smi, _return_431_impl);
  auto _return_431 = &_return_431_impl;
  USE(_return_431);
  Label label_macro_end_1340_impl(this, {_return_431});
  Label* label_macro_end_1340 = &label_macro_end_1340_impl;
  USE(label_macro_end_1340);
  // ../../third_party/v8/builtins/array-sort.tq:482:45
  {
    // ../../third_party/v8/builtins/array-sort.tq:483:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kBailoutStatusIdx()), implicit_cast<TNode<Object>>(kFailure()));
    // ../../third_party/v8/builtins/array-sort.tq:484:5
    *_return_431 = implicit_cast<TNode<Smi>>(kFailure());
    Goto(label_macro_end_1340);
  }
  BIND(label_macro_end_1340);
  return implicit_cast<TNode<Smi>>((*_return_431).value());
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::CallLoad(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<HeapObject> p_elements, TNode<Smi> p_index, Label* label_Bailout_680) {
  TVARIABLE(Object, _return_432_impl);
  auto _return_432 = &_return_432_impl;
  USE(_return_432);
  Label label_macro_end_1341_impl(this, {_return_432});
  Label* label_macro_end_1341 = &label_macro_end_1341_impl;
  USE(label_macro_end_1341);
  // ../../third_party/v8/builtins/array-sort.tq:493:64
  {
    // ../../third_party/v8/builtins/array-sort.tq:494:5
    TNode<Object> t2394 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoad23ATFastPackedSmiElements).descriptor(), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_index)));
    USE(implicit_cast<TNode<Object>>(t2394));
    TNode<Object> result_924_impl;
    auto result_924 = &result_924_impl;
    USE(result_924);
    *result_924 = implicit_cast<TNode<Object>>(t2394);
    // ../../third_party/v8/builtins/array-sort.tq:495:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_680);
    // ../../third_party/v8/builtins/array-sort.tq:496:5
    *_return_432 = implicit_cast<TNode<Object>>((*result_924));
    Goto(label_macro_end_1341);
  }
  BIND(label_macro_end_1341);
  return implicit_cast<TNode<Object>>((*_return_432).value());
}

void ArrayBuiltinsFromDSLAssembler::CallStore(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Store, TNode<HeapObject> p_elements, TNode<Smi> p_index, TNode<Object> p_value, Label* label_Bailout_681) {
  Label label_macro_end_1342_impl(this, {});
  Label* label_macro_end_1342 = &label_macro_end_1342_impl;
  USE(label_macro_end_1342);
  // ../../third_party/v8/builtins/array-sort.tq:501:71
  {
    // ../../third_party/v8/builtins/array-sort.tq:502:5
    TNode<Smi> t2395 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStore23ATFastPackedSmiElements).descriptor(), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_index), implicit_cast<TNode<Object>>(p_value)));
    USE(implicit_cast<TNode<Smi>>(t2395));
    // ../../third_party/v8/builtins/array-sort.tq:503:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_681);
  }
}

void ArrayBuiltinsFromDSLAssembler::CallCopyFromTempArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<HeapObject> p_dstElements, TNode<Smi> p_dstPos, TNode<FixedArray> p_tempArray, TNode<Smi> p_srcPos, TNode<Smi> p_length, Label* label_Bailout_682) {
  Label label_macro_end_1343_impl(this, {});
  Label* label_macro_end_1343 = &label_macro_end_1343_impl;
  USE(label_macro_end_1343);
  // ../../third_party/v8/builtins/array-sort.tq:509:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:510:5
    TNode<Smi> t2396 = UncheckedCast<Smi>(CallBuiltin(Builtins::kCopyFromTempArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_dstElements), implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<FixedArray>>(p_tempArray), implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2396));
    // ../../third_party/v8/builtins/array-sort.tq:512:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_682);
  }
}

void ArrayBuiltinsFromDSLAssembler::CallCopyWithinSortArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<HeapObject> p_elements, TNode<Smi> p_srcPos, TNode<Smi> p_dstPos, TNode<Smi> p_length, Label* label_Bailout_683) {
  Label label_macro_end_1344_impl(this, {});
  Label* label_macro_end_1344 = &label_macro_end_1344_impl;
  USE(label_macro_end_1344);
  // ../../third_party/v8/builtins/array-sort.tq:518:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:519:5
    TNode<Smi> t2397 = UncheckedCast<Smi>(CallBuiltin(Builtins::kCopyWithinSortArray, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2397));
    // ../../third_party/v8/builtins/array-sort.tq:520:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_683);
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::CallGallopRight(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Object> p_key, TNode<Smi> p_base, TNode<Smi> p_length, TNode<Smi> p_hint, TNode<Oddball> p_useTempArray, Label* label_Bailout_684) {
  TVARIABLE(Smi, _return_433_impl);
  auto _return_433 = &_return_433_impl;
  USE(_return_433);
  Label label_macro_end_1345_impl(this, {_return_433});
  Label* label_macro_end_1345 = &label_macro_end_1345_impl;
  USE(label_macro_end_1345);
  // ../../third_party/v8/builtins/array-sort.tq:526:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:527:5
    TNode<Smi> t2398 = UncheckedCast<Smi>(CallBuiltin(Builtins::kGallopRight, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Oddball>>(p_useTempArray)));
    USE(implicit_cast<TNode<Smi>>(t2398));
    TNode<Smi> result_925_impl;
    auto result_925 = &result_925_impl;
    USE(result_925);
    *result_925 = implicit_cast<TNode<Smi>>(t2398);
    // ../../third_party/v8/builtins/array-sort.tq:529:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_684);
    // ../../third_party/v8/builtins/array-sort.tq:530:5
    *_return_433 = implicit_cast<TNode<Smi>>((*result_925));
    Goto(label_macro_end_1345);
  }
  BIND(label_macro_end_1345);
  return implicit_cast<TNode<Smi>>((*_return_433).value());
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::CallGallopLeft(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Object> p_key, TNode<Smi> p_base, TNode<Smi> p_length, TNode<Smi> p_hint, TNode<Oddball> p_useTempArray, Label* label_Bailout_685) {
  TVARIABLE(Smi, _return_434_impl);
  auto _return_434 = &_return_434_impl;
  USE(_return_434);
  Label label_macro_end_1346_impl(this, {_return_434});
  Label* label_macro_end_1346 = &label_macro_end_1346_impl;
  USE(label_macro_end_1346);
  // ../../third_party/v8/builtins/array-sort.tq:536:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:537:5
    TNode<Smi> t2399 = UncheckedCast<Smi>(CallBuiltin(Builtins::kGallopLeft, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Oddball>>(p_useTempArray)));
    USE(implicit_cast<TNode<Smi>>(t2399));
    TNode<Smi> result_926_impl;
    auto result_926 = &result_926_impl;
    USE(result_926);
    *result_926 = implicit_cast<TNode<Smi>>(t2399);
    // ../../third_party/v8/builtins/array-sort.tq:539:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_685);
    // ../../third_party/v8/builtins/array-sort.tq:540:5
    *_return_434 = implicit_cast<TNode<Smi>>((*result_926));
    Goto(label_macro_end_1346);
  }
  BIND(label_macro_end_1346);
  return implicit_cast<TNode<Smi>>((*_return_434).value());
}

void ArrayBuiltinsFromDSLAssembler::CallMergeAt(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_i, Label* label_Bailout_686) {
  Label label_macro_end_1347_impl(this, {});
  Label* label_macro_end_1347 = &label_macro_end_1347_impl;
  USE(label_macro_end_1347);
  // ../../third_party/v8/builtins/array-sort.tq:544:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:545:5
    TNode<Smi> t2400 = UncheckedCast<Smi>(CallBuiltin(Builtins::kMergeAt, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t2400));
    // ../../third_party/v8/builtins/array-sort.tq:546:5
    EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_686);
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::GetReceiverLengthProperty(TNode<Context> p_context, TNode<FixedArray> p_sortState) {
  TVARIABLE(Smi, _return_435_impl);
  auto _return_435 = &_return_435_impl;
  USE(_return_435);
  Label label_macro_end_1348_impl(this, {_return_435});
  Label* label_macro_end_1348 = &label_macro_end_1348_impl;
  USE(label_macro_end_1348);
  // ../../third_party/v8/builtins/array-sort.tq:551:53
  {
    // ../../third_party/v8/builtins/array-sort.tq:552:5
    TNode<JSReceiver> t2401 = UncheckedCast<JSReceiver>(GetReceiver(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<JSReceiver>>(t2401));
    TNode<JSReceiver> receiver_927_impl;
    auto receiver_927 = &receiver_927_impl;
    USE(receiver_927);
    *receiver_927 = implicit_cast<TNode<JSReceiver>>(t2401);
    // ../../third_party/v8/builtins/array-sort.tq:554:5
    {
      Label label__True_687_impl(this);
      Label* label__True_687 = &label__True_687_impl;
      USE(label__True_687);
      Label label__False_688_impl(this, {});
      Label* label__False_688 = &label__False_688_impl;
      USE(label__False_688);
      TNode<BoolT> t2402 = UncheckedCast<BoolT>(IsJSArray(implicit_cast<TNode<HeapObject>>((*receiver_927))));
      USE(implicit_cast<TNode<BoolT>>(t2402));
      Branch(implicit_cast<TNode<BoolT>>(t2402), label__True_687, label__False_688);
      if (label__True_687->is_used())
      {
        BIND(label__True_687);
        // ../../third_party/v8/builtins/array-sort.tq:554:30
        TNode<JSArray> t2403 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>((*receiver_927))));
        USE(implicit_cast<TNode<JSArray>>(t2403));
        TNode<Smi> t2404 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>(t2403)));
        *_return_435 = implicit_cast<TNode<Smi>>(t2404);
        Goto(label_macro_end_1348);
      }
      BIND(label__False_688);
    }
    // ../../third_party/v8/builtins/array-sort.tq:556:5
    const char* t2405 = "length";
    TNode<Object> t2406 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t2405)));
    TNode<Object> t2407 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*receiver_927)), implicit_cast<TNode<Object>>(t2406)));
    USE(implicit_cast<TNode<Object>>(t2407));
    TNode<Number> t2408 = UncheckedCast<Number>(ToLength_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t2407)));
    USE(implicit_cast<TNode<Number>>(t2408));
    TNode<Number> len_928_impl;
    auto len_928 = &len_928_impl;
    USE(len_928);
    *len_928 = implicit_cast<TNode<Number>>(t2408);
    // ../../third_party/v8/builtins/array-sort.tq:558:5
    TNode<Smi> t2409 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>((*len_928))));
    USE(implicit_cast<TNode<Smi>>(t2409));
    *_return_435 = implicit_cast<TNode<Smi>>(t2409);
    Goto(label_macro_end_1348);
  }
  BIND(label_macro_end_1348);
  return implicit_cast<TNode<Smi>>((*_return_435).value());
}

void ArrayBuiltinsFromDSLAssembler::CopyToTempArray(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<HeapObject> p_srcElements, TNode<Smi> p_srcPos, TNode<FixedArray> p_tempArray, TNode<Smi> p_dstPos, TNode<Smi> p_length, Label* label_Bailout_689) {
  Label label_macro_end_1349_impl(this, {});
  Label* label_macro_end_1349 = &label_macro_end_1349_impl;
  USE(label_macro_end_1349);
  // ../../third_party/v8/builtins/array-sort.tq:565:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:566:5
    // ../../third_party/v8/builtins/array-sort.tq:567:5
    // ../../third_party/v8/builtins/array-sort.tq:568:5
    // ../../third_party/v8/builtins/array-sort.tq:569:5
    // ../../third_party/v8/builtins/array-sort.tq:571:5
    TVARIABLE(Smi, src_idx_436_impl);
    auto src_idx_436 = &src_idx_436_impl;
    USE(src_idx_436);
    *src_idx_436 = implicit_cast<TNode<Smi>>(p_srcPos);
    // ../../third_party/v8/builtins/array-sort.tq:572:5
    TVARIABLE(Smi, dst_idx_437_impl);
    auto dst_idx_437 = &dst_idx_437_impl;
    USE(dst_idx_437);
    *dst_idx_437 = implicit_cast<TNode<Smi>>(p_dstPos);
    // ../../third_party/v8/builtins/array-sort.tq:573:5
    TNode<Smi> t2410 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2410));
    TVARIABLE(Smi, to_438_impl);
    auto to_438 = &to_438_impl;
    USE(to_438);
    *to_438 = implicit_cast<TNode<Smi>>(t2410);
    // ../../third_party/v8/builtins/array-sort.tq:575:5
    {
      Label label__True_690_impl(this);
      Label* label__True_690 = &label__True_690_impl;
      USE(label__True_690);
      Label label__False_691_impl(this);
      Label* label__False_691 = &label__False_691_impl;
      USE(label__False_691);
      Label label_header_929_1350_impl(this, {dst_idx_437, src_idx_436});
      Label* label_header_929_1350 = &label_header_929_1350_impl;
      USE(label_header_929_1350);
      Goto(label_header_929_1350);
      BIND(label_header_929_1350);
      TNode<BoolT> t2411 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*src_idx_436).value()), implicit_cast<TNode<Smi>>((*to_438).value())));
      USE(implicit_cast<TNode<BoolT>>(t2411));
      Branch(implicit_cast<TNode<BoolT>>(t2411), label__True_690, label__False_691);
      if (label__True_690->is_used())
      {
        BIND(label__True_690);
        // ../../third_party/v8/builtins/array-sort.tq:575:26
        {
          // ../../third_party/v8/builtins/array-sort.tq:576:7
          TNode<Smi> t2412 = implicit_cast<TNode<Smi>>((*src_idx_436).value());
          USE(t2412);
          TNode<Smi> t2413 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2414 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*src_idx_436).value()), implicit_cast<TNode<Smi>>(t2413)));
          *src_idx_436 = implicit_cast<TNode<Smi>>(t2414);
          TNode<Object> t2415 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(p_srcElements), implicit_cast<TNode<Smi>>(t2412), label_Bailout_689));
          USE(implicit_cast<TNode<Object>>(t2415));
          TVARIABLE(Object, element_439_impl);
          auto element_439 = &element_439_impl;
          USE(element_439);
          *element_439 = implicit_cast<TNode<Object>>(t2415);
          // ../../third_party/v8/builtins/array-sort.tq:579:7
          TNode<Smi> t2416 = implicit_cast<TNode<Smi>>((*dst_idx_437).value());
          USE(t2416);
          TNode<Smi> t2417 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2418 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dst_idx_437).value()), implicit_cast<TNode<Smi>>(t2417)));
          *dst_idx_437 = implicit_cast<TNode<Smi>>(t2418);
          StoreFixedArrayElementSmi(implicit_cast<TNode<FixedArray>>(p_tempArray), implicit_cast<TNode<Smi>>(t2416), implicit_cast<TNode<Object>>((*element_439).value()));
        }
        Goto(label_header_929_1350);
      }
      BIND(label__False_691);
    }
  }
}

TF_BUILTIN(CopyFromTempArray, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_dstElements = UncheckedCast<HeapObject>(Parameter(Descriptor::kDstElements));
  USE(p_dstElements);
  TNode<Smi> p_dstPos = UncheckedCast<Smi>(Parameter(Descriptor::kDstPos));
  USE(p_dstPos);
  TNode<FixedArray> p_tempArray = UncheckedCast<FixedArray>(Parameter(Descriptor::kTempArray));
  USE(p_tempArray);
  TNode<Smi> p_srcPos = UncheckedCast<Smi>(Parameter(Descriptor::kSrcPos));
  USE(p_srcPos);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../third_party/v8/builtins/array-sort.tq:585:74
  {
    // ../../third_party/v8/builtins/array-sort.tq:586:5
    // ../../third_party/v8/builtins/array-sort.tq:587:5
    // ../../third_party/v8/builtins/array-sort.tq:588:5
    // ../../third_party/v8/builtins/array-sort.tq:589:5
    // ../../third_party/v8/builtins/array-sort.tq:591:5
    TNode<Code> t2419 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2419));
    TVARIABLE(Code, Store_440_impl);
    auto Store_440 = &Store_440_impl;
    USE(Store_440);
    *Store_440 = implicit_cast<TNode<Code>>(t2419);
    // ../../third_party/v8/builtins/array-sort.tq:593:5
    TVARIABLE(Smi, src_idx_441_impl);
    auto src_idx_441 = &src_idx_441_impl;
    USE(src_idx_441);
    *src_idx_441 = implicit_cast<TNode<Smi>>(p_srcPos);
    // ../../third_party/v8/builtins/array-sort.tq:594:5
    TVARIABLE(Smi, dst_idx_442_impl);
    auto dst_idx_442 = &dst_idx_442_impl;
    USE(dst_idx_442);
    *dst_idx_442 = implicit_cast<TNode<Smi>>(p_dstPos);
    // ../../third_party/v8/builtins/array-sort.tq:595:5
    TNode<Smi> t2420 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
    USE(implicit_cast<TNode<Smi>>(t2420));
    TVARIABLE(Smi, to_443_impl);
    auto to_443 = &to_443_impl;
    USE(to_443);
    *to_443 = implicit_cast<TNode<Smi>>(t2420);
    // ../../third_party/v8/builtins/array-sort.tq:596:5
    {
      Label label_try_done_930_1351_impl(this);
      Label* label_try_done_930_1351 = &label_try_done_930_1351_impl;
      USE(label_try_done_930_1351);
      Label label_Bailout_692_impl(this);
      Label* label_Bailout_692 = &label_Bailout_692_impl;
      USE(label_Bailout_692);
      Label label_try_begin_931_1352_impl(this);
      Label* label_try_begin_931_1352 = &label_try_begin_931_1352_impl;
      USE(label_try_begin_931_1352);
      Goto(label_try_begin_931_1352);
      if (label_try_begin_931_1352->is_used())
      {
        BIND(label_try_begin_931_1352);
        // ../../third_party/v8/builtins/array-sort.tq:596:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:597:7
          {
            Label label__True_693_impl(this);
            Label* label__True_693 = &label__True_693_impl;
            USE(label__True_693);
            Label label__False_694_impl(this);
            Label* label__False_694 = &label__False_694_impl;
            USE(label__False_694);
            Label label_header_932_1353_impl(this, {dst_idx_442, src_idx_441});
            Label* label_header_932_1353 = &label_header_932_1353_impl;
            USE(label_header_932_1353);
            Goto(label_header_932_1353);
            BIND(label_header_932_1353);
            TNode<BoolT> t2421 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*src_idx_441).value()), implicit_cast<TNode<Smi>>((*to_443).value())));
            USE(implicit_cast<TNode<BoolT>>(t2421));
            Branch(implicit_cast<TNode<BoolT>>(t2421), label__True_693, label__False_694);
            if (label__True_693->is_used())
            {
              BIND(label__True_693);
              // ../../third_party/v8/builtins/array-sort.tq:597:28
              {
                // ../../third_party/v8/builtins/array-sort.tq:598:9
                TNode<Smi> t2422 = implicit_cast<TNode<Smi>>((*dst_idx_442).value());
                USE(t2422);
                TNode<Smi> t2423 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2424 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dst_idx_442).value()), implicit_cast<TNode<Smi>>(t2423)));
                *dst_idx_442 = implicit_cast<TNode<Smi>>(t2424);
                TNode<Smi> t2425 = implicit_cast<TNode<Smi>>((*src_idx_441).value());
                USE(t2425);
                TNode<Smi> t2426 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2427 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*src_idx_441).value()), implicit_cast<TNode<Smi>>(t2426)));
                *src_idx_441 = implicit_cast<TNode<Smi>>(t2427);
                TNode<Object> t2428 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_tempArray), implicit_cast<TNode<Smi>>(t2425)));
                CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_440).value()), implicit_cast<TNode<HeapObject>>(p_dstElements), implicit_cast<TNode<Smi>>(t2422), implicit_cast<TNode<Object>>(t2428), label_Bailout_692);
              }
              Goto(label_header_932_1353);
            }
            BIND(label__False_694);
          }
          // ../../third_party/v8/builtins/array-sort.tq:603:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_692->is_used())
      {
        BIND(label_Bailout_692);
        // ../../third_party/v8/builtins/array-sort.tq:605:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:606:7
          TNode<Smi> t2429 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2429));
          Return(implicit_cast<TNode<Smi>>(t2429));
        }
      }
    }
  }
}

TF_BUILTIN(CopyWithinSortArray, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_srcPos = UncheckedCast<Smi>(Parameter(Descriptor::kSrcPos));
  USE(p_srcPos);
  TNode<Smi> p_dstPos = UncheckedCast<Smi>(Parameter(Descriptor::kDstPos));
  USE(p_dstPos);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../third_party/v8/builtins/array-sort.tq:612:51
  {
    // ../../third_party/v8/builtins/array-sort.tq:613:5
    // ../../third_party/v8/builtins/array-sort.tq:614:5
    // ../../third_party/v8/builtins/array-sort.tq:615:5
    // ../../third_party/v8/builtins/array-sort.tq:616:5
    // ../../third_party/v8/builtins/array-sort.tq:618:5
    {
      Label label_try_done_933_1354_impl(this);
      Label* label_try_done_933_1354 = &label_try_done_933_1354_impl;
      USE(label_try_done_933_1354);
      Label label_Bailout_695_impl(this);
      Label* label_Bailout_695 = &label_Bailout_695_impl;
      USE(label_Bailout_695);
      Label label_try_begin_934_1355_impl(this);
      Label* label_try_begin_934_1355 = &label_try_begin_934_1355_impl;
      USE(label_try_begin_934_1355);
      Goto(label_try_begin_934_1355);
      if (label_try_begin_934_1355->is_used())
      {
        BIND(label_try_begin_934_1355);
        // ../../third_party/v8/builtins/array-sort.tq:618:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:619:7
          TNode<Code> t2430 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2430));
          TVARIABLE(Code, Load_444_impl);
          auto Load_444 = &Load_444_impl;
          USE(Load_444);
          *Load_444 = implicit_cast<TNode<Code>>(t2430);
          // ../../third_party/v8/builtins/array-sort.tq:620:7
          TNode<Code> t2431 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2431));
          TVARIABLE(Code, Store_445_impl);
          auto Store_445 = &Store_445_impl;
          USE(Store_445);
          *Store_445 = implicit_cast<TNode<Code>>(t2431);
          // ../../third_party/v8/builtins/array-sort.tq:622:7
          {
            Label label__True_696_impl(this);
            Label* label__True_696 = &label__True_696_impl;
            USE(label__True_696);
            Label label__False_697_impl(this);
            Label* label__False_697 = &label__False_697_impl;
            USE(label__False_697);
            Label label_if_done_label_935_1356_impl(this, {});
            Label* label_if_done_label_935_1356 = &label_if_done_label_935_1356_impl;
            USE(label_if_done_label_935_1356);
            TNode<BoolT> t2432 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_dstPos)));
            USE(implicit_cast<TNode<BoolT>>(t2432));
            Branch(implicit_cast<TNode<BoolT>>(t2432), label__True_696, label__False_697);
            if (label__True_696->is_used())
            {
              BIND(label__True_696);
              // ../../third_party/v8/builtins/array-sort.tq:622:28
              {
                // ../../third_party/v8/builtins/array-sort.tq:623:9
                TNode<Smi> t2433 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
                USE(implicit_cast<TNode<Smi>>(t2433));
                int31_t t2434 = 1;
                TNode<Smi> t2435 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2434)));
                TNode<Smi> t2436 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2433), implicit_cast<TNode<Smi>>(t2435)));
                USE(implicit_cast<TNode<Smi>>(t2436));
                TVARIABLE(Smi, src_idx_446_impl);
                auto src_idx_446 = &src_idx_446_impl;
                USE(src_idx_446);
                *src_idx_446 = implicit_cast<TNode<Smi>>(t2436);
                // ../../third_party/v8/builtins/array-sort.tq:624:9
                TNode<Smi> t2437 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_dstPos), implicit_cast<TNode<Smi>>(p_length)));
                USE(implicit_cast<TNode<Smi>>(t2437));
                int31_t t2438 = 1;
                TNode<Smi> t2439 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2438)));
                TNode<Smi> t2440 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2437), implicit_cast<TNode<Smi>>(t2439)));
                USE(implicit_cast<TNode<Smi>>(t2440));
                TVARIABLE(Smi, dst_idx_447_impl);
                auto dst_idx_447 = &dst_idx_447_impl;
                USE(dst_idx_447);
                *dst_idx_447 = implicit_cast<TNode<Smi>>(t2440);
                // ../../third_party/v8/builtins/array-sort.tq:625:9
                {
                  Label label__True_698_impl(this);
                  Label* label__True_698 = &label__True_698_impl;
                  USE(label__True_698);
                  Label label__False_699_impl(this);
                  Label* label__False_699 = &label__False_699_impl;
                  USE(label__False_699);
                  Label label_header_936_1357_impl(this, {dst_idx_447, src_idx_446});
                  Label* label_header_936_1357 = &label_header_936_1357_impl;
                  USE(label_header_936_1357);
                  Goto(label_header_936_1357);
                  BIND(label_header_936_1357);
                  TNode<BoolT> t2441 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*src_idx_446).value()), implicit_cast<TNode<Smi>>(p_srcPos)));
                  USE(implicit_cast<TNode<BoolT>>(t2441));
                  Branch(implicit_cast<TNode<BoolT>>(t2441), label__True_698, label__False_699);
                  if (label__True_698->is_used())
                  {
                    BIND(label__True_698);
                    // ../../third_party/v8/builtins/array-sort.tq:625:35
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:626:11
                      TNode<Smi> t2442 = implicit_cast<TNode<Smi>>((*src_idx_446).value());
                      USE(t2442);
                      TNode<Smi> t2443 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2444 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*src_idx_446).value()), implicit_cast<TNode<Smi>>(t2443)));
                      *src_idx_446 = implicit_cast<TNode<Smi>>(t2444);
                      TNode<Smi> t2445 = implicit_cast<TNode<Smi>>((*dst_idx_447).value());
                      USE(t2445);
                      TNode<Smi> t2446 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2447 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dst_idx_447).value()), implicit_cast<TNode<Smi>>(t2446)));
                      *dst_idx_447 = implicit_cast<TNode<Smi>>(t2447);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_444).value()), implicit_cast<TNode<Code>>((*Store_445).value()), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2442), implicit_cast<TNode<Smi>>(t2445), label_Bailout_695);
                    }
                    Goto(label_header_936_1357);
                  }
                  BIND(label__False_699);
                }
              }
              Goto(label_if_done_label_935_1356);
            }
            if (label__False_697->is_used())
            {
              BIND(label__False_697);
              // ../../third_party/v8/builtins/array-sort.tq:630:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:631:9
                TVARIABLE(Smi, src_idx_448_impl);
                auto src_idx_448 = &src_idx_448_impl;
                USE(src_idx_448);
                *src_idx_448 = implicit_cast<TNode<Smi>>(p_srcPos);
                // ../../third_party/v8/builtins/array-sort.tq:632:9
                TVARIABLE(Smi, dst_idx_449_impl);
                auto dst_idx_449 = &dst_idx_449_impl;
                USE(dst_idx_449);
                *dst_idx_449 = implicit_cast<TNode<Smi>>(p_dstPos);
                // ../../third_party/v8/builtins/array-sort.tq:633:9
                TNode<Smi> t2448 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_srcPos), implicit_cast<TNode<Smi>>(p_length)));
                USE(implicit_cast<TNode<Smi>>(t2448));
                TVARIABLE(Smi, to_450_impl);
                auto to_450 = &to_450_impl;
                USE(to_450);
                *to_450 = implicit_cast<TNode<Smi>>(t2448);
                // ../../third_party/v8/builtins/array-sort.tq:634:9
                {
                  Label label__True_700_impl(this);
                  Label* label__True_700 = &label__True_700_impl;
                  USE(label__True_700);
                  Label label__False_701_impl(this);
                  Label* label__False_701 = &label__False_701_impl;
                  USE(label__False_701);
                  Label label_header_937_1358_impl(this, {dst_idx_449, src_idx_448});
                  Label* label_header_937_1358 = &label_header_937_1358_impl;
                  USE(label_header_937_1358);
                  Goto(label_header_937_1358);
                  BIND(label_header_937_1358);
                  TNode<BoolT> t2449 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*src_idx_448).value()), implicit_cast<TNode<Smi>>((*to_450).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2449));
                  Branch(implicit_cast<TNode<BoolT>>(t2449), label__True_700, label__False_701);
                  if (label__True_700->is_used())
                  {
                    BIND(label__True_700);
                    // ../../third_party/v8/builtins/array-sort.tq:634:30
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:635:11
                      TNode<Smi> t2450 = implicit_cast<TNode<Smi>>((*src_idx_448).value());
                      USE(t2450);
                      TNode<Smi> t2451 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2452 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*src_idx_448).value()), implicit_cast<TNode<Smi>>(t2451)));
                      *src_idx_448 = implicit_cast<TNode<Smi>>(t2452);
                      TNode<Smi> t2453 = implicit_cast<TNode<Smi>>((*dst_idx_449).value());
                      USE(t2453);
                      TNode<Smi> t2454 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2455 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dst_idx_449).value()), implicit_cast<TNode<Smi>>(t2454)));
                      *dst_idx_449 = implicit_cast<TNode<Smi>>(t2455);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_444).value()), implicit_cast<TNode<Code>>((*Store_445).value()), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2450), implicit_cast<TNode<Smi>>(t2453), label_Bailout_695);
                    }
                    Goto(label_header_937_1358);
                  }
                  BIND(label__False_701);
                }
              }
              Goto(label_if_done_label_935_1356);
            }
            BIND(label_if_done_label_935_1356);
          }
          // ../../third_party/v8/builtins/array-sort.tq:640:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_695->is_used())
      {
        BIND(label_Bailout_695);
        // ../../third_party/v8/builtins/array-sort.tq:642:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:643:7
          TNode<Smi> t2456 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2456));
          Return(implicit_cast<TNode<Smi>>(t2456));
        }
      }
    }
  }
}

TF_BUILTIN(BinaryInsertionSort, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Smi> p_low = UncheckedCast<Smi>(Parameter(Descriptor::kLow));
  USE(p_low);
  TNode<Smi> p_startArg = UncheckedCast<Smi>(Parameter(Descriptor::kStartArg));
  USE(p_startArg);
  TNode<Smi> p_high = UncheckedCast<Smi>(Parameter(Descriptor::kHigh));
  USE(p_high);
  // ../../third_party/v8/builtins/array-sort.tq:659:23
  {
    // ../../third_party/v8/builtins/array-sort.tq:660:5
    // ../../third_party/v8/builtins/array-sort.tq:662:5
    {
      Label label_try_done_938_1359_impl(this);
      Label* label_try_done_938_1359 = &label_try_done_938_1359_impl;
      USE(label_try_done_938_1359);
      Label label_Bailout_702_impl(this);
      Label* label_Bailout_702 = &label_Bailout_702_impl;
      USE(label_Bailout_702);
      Label label_try_begin_939_1360_impl(this);
      Label* label_try_begin_939_1360 = &label_try_begin_939_1360_impl;
      USE(label_try_begin_939_1360);
      Goto(label_try_begin_939_1360);
      if (label_try_begin_939_1360->is_used())
      {
        BIND(label_try_begin_939_1360);
        // ../../third_party/v8/builtins/array-sort.tq:662:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:663:7
          TNode<HeapObject> t2457 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<HeapObject>>(t2457));
          TVARIABLE(HeapObject, elements_451_impl);
          auto elements_451 = &elements_451_impl;
          USE(elements_451);
          *elements_451 = implicit_cast<TNode<HeapObject>>(t2457);
          // ../../third_party/v8/builtins/array-sort.tq:665:7
          TNode<Code> t2458 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2458));
          TNode<Code> Load_940_impl;
          auto Load_940 = &Load_940_impl;
          USE(Load_940);
          *Load_940 = implicit_cast<TNode<Code>>(t2458);
          // ../../third_party/v8/builtins/array-sort.tq:666:7
          TNode<Code> t2459 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Code>>(t2459));
          TNode<Code> Store_941_impl;
          auto Store_941 = &Store_941_impl;
          USE(Store_941);
          *Store_941 = implicit_cast<TNode<Code>>(t2459);
          // ../../third_party/v8/builtins/array-sort.tq:668:7
          auto t2460 = [=]() {
            int31_t t2462 = 1;
            TNode<Smi> t2463 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2462)));
            TNode<Smi> t2464 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_startArg), implicit_cast<TNode<Smi>>(t2463)));
            USE(implicit_cast<TNode<Smi>>(t2464));
            return implicit_cast<TNode<Smi>>(t2464);
          };
          auto t2461 = [=]() {
            return implicit_cast<TNode<Smi>>(p_startArg);
          };
          TVARIABLE(Smi, t2465_942_impl);
          auto t2465_942 = &t2465_942_impl;
          USE(t2465_942);
          {
            Label label__True_703_impl(this);
            Label* label__True_703 = &label__True_703_impl;
            USE(label__True_703);
            Label label__False_704_impl(this);
            Label* label__False_704 = &label__False_704_impl;
            USE(label__False_704);
            Label label__done_943_1361_impl(this, {t2465_942});
            Label* label__done_943_1361 = &label__done_943_1361_impl;
            USE(label__done_943_1361);
            TNode<BoolT> t2466 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(p_low), implicit_cast<TNode<Smi>>(p_startArg)));
            USE(implicit_cast<TNode<BoolT>>(t2466));
            Branch(implicit_cast<TNode<BoolT>>(t2466), label__True_703, label__False_704);
            BIND(label__True_703);
                        *t2465_942 = implicit_cast<TNode<Smi>>(t2460());
            Goto(label__done_943_1361);
            BIND(label__False_704);
                        *t2465_942 = implicit_cast<TNode<Smi>>(t2461());
            Goto(label__done_943_1361);
            BIND(label__done_943_1361);
          }
          TVARIABLE(Smi, start_452_impl);
          auto start_452 = &start_452_impl;
          USE(start_452);
          *start_452 = implicit_cast<TNode<Smi>>((*t2465_942).value());
          // ../../third_party/v8/builtins/array-sort.tq:670:7
          Label label__True_705_impl(this);
          Label* label__True_705 = &label__True_705_impl;
          USE(label__True_705);
          Label label__False_706_impl(this);
          Label* label__False_706 = &label__False_706_impl;
          USE(label__False_706);
          Label label_header_944_1362_impl(this, {elements_451, start_452});
          Label* label_header_944_1362 = &label_header_944_1362_impl;
          USE(label_header_944_1362);
          Goto(label_header_944_1362);
          BIND(label_header_944_1362);
          Label label_action_945_1363_impl(this);
          Label* label_action_945_1363 = &label_action_945_1363_impl;
          USE(label_action_945_1363);
          TNode<BoolT> t2467 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*start_452).value()), implicit_cast<TNode<Smi>>(p_high)));
          USE(implicit_cast<TNode<BoolT>>(t2467));
          Branch(implicit_cast<TNode<BoolT>>(t2467), label__True_705, label__False_706);
          if (label__True_705->is_used())
          {
            BIND(label__True_705);
            // ../../third_party/v8/builtins/array-sort.tq:670:37
            {
              // ../../third_party/v8/builtins/array-sort.tq:672:9
              TVARIABLE(Smi, left_453_impl);
              auto left_453 = &left_453_impl;
              USE(left_453);
              *left_453 = implicit_cast<TNode<Smi>>(p_low);
              // ../../third_party/v8/builtins/array-sort.tq:673:9
              TVARIABLE(Smi, right_454_impl);
              auto right_454 = &right_454_impl;
              USE(right_454);
              *right_454 = implicit_cast<TNode<Smi>>((*start_452).value());
              // ../../third_party/v8/builtins/array-sort.tq:675:9
              TNode<Object> t2468 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_940)), implicit_cast<TNode<HeapObject>>((*elements_451).value()), implicit_cast<TNode<Smi>>((*right_454).value()), label_Bailout_702));
              USE(implicit_cast<TNode<Object>>(t2468));
              TNode<Object> pivot_946_impl;
              auto pivot_946 = &pivot_946_impl;
              USE(pivot_946);
              *pivot_946 = implicit_cast<TNode<Object>>(t2468);
              // ../../third_party/v8/builtins/array-sort.tq:682:9
              // ../../third_party/v8/builtins/array-sort.tq:685:9
              {
                Label label__True_707_impl(this);
                Label* label__True_707 = &label__True_707_impl;
                USE(label__True_707);
                Label label__False_708_impl(this);
                Label* label__False_708 = &label__False_708_impl;
                USE(label__False_708);
                Label label_header_947_1364_impl(this, {elements_451, left_453, right_454});
                Label* label_header_947_1364 = &label_header_947_1364_impl;
                USE(label_header_947_1364);
                Goto(label_header_947_1364);
                BIND(label_header_947_1364);
                TNode<BoolT> t2469 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*left_453).value()), implicit_cast<TNode<Smi>>((*right_454).value())));
                USE(implicit_cast<TNode<BoolT>>(t2469));
                Branch(implicit_cast<TNode<BoolT>>(t2469), label__True_707, label__False_708);
                if (label__True_707->is_used())
                {
                  BIND(label__True_707);
                  // ../../third_party/v8/builtins/array-sort.tq:685:30
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:686:11
                    TNode<Smi> t2470 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*right_454).value()), implicit_cast<TNode<Smi>>((*left_453).value())));
                    USE(implicit_cast<TNode<Smi>>(t2470));
                    int31_t t2471 = 1;
                    TNode<Smi> t2472 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t2470), implicit_cast<int31_t>(t2471)));
                    USE(implicit_cast<TNode<Smi>>(t2472));
                    TNode<Smi> t2473 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*left_453).value()), implicit_cast<TNode<Smi>>(t2472)));
                    USE(implicit_cast<TNode<Smi>>(t2473));
                    TNode<Smi> mid_948_impl;
                    auto mid_948 = &mid_948_impl;
                    USE(mid_948);
                    *mid_948 = implicit_cast<TNode<Smi>>(t2473);
                    // ../../third_party/v8/builtins/array-sort.tq:687:11
                    TNode<Object> t2474 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_940)), implicit_cast<TNode<HeapObject>>((*elements_451).value()), implicit_cast<TNode<Smi>>((*mid_948)), label_Bailout_702));
                    USE(implicit_cast<TNode<Object>>(t2474));
                    TNode<Object> mid_element_949_impl;
                    auto mid_element_949 = &mid_element_949_impl;
                    USE(mid_element_949);
                    *mid_element_949 = implicit_cast<TNode<Object>>(t2474);
                    // ../../third_party/v8/builtins/array-sort.tq:690:11
                    TNode<Number> t2475 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*pivot_946)), implicit_cast<TNode<Object>>((*mid_element_949)), label_Bailout_702));
                    USE(implicit_cast<TNode<Number>>(t2475));
                    TNode<Number> order_950_impl;
                    auto order_950 = &order_950_impl;
                    USE(order_950);
                    *order_950 = implicit_cast<TNode<Number>>(t2475);
                    // ../../third_party/v8/builtins/array-sort.tq:693:11
                    TNode<HeapObject> t2476 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                    USE(implicit_cast<TNode<HeapObject>>(t2476));
                    *elements_451 = implicit_cast<TNode<HeapObject>>(t2476);
                    // ../../third_party/v8/builtins/array-sort.tq:695:11
                    {
                      Label label__True_709_impl(this);
                      Label* label__True_709 = &label__True_709_impl;
                      USE(label__True_709);
                      Label label__False_710_impl(this);
                      Label* label__False_710 = &label__False_710_impl;
                      USE(label__False_710);
                      Label label_if_done_label_951_1365_impl(this, {left_453, right_454});
                      Label* label_if_done_label_951_1365 = &label_if_done_label_951_1365_impl;
                      USE(label_if_done_label_951_1365);
                      int31_t t2477 = 0;
                      TNode<Number> t2478 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2477)));
                      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_950)), implicit_cast<TNode<Number>>(t2478), label__True_709, label__False_710);
                      if (label__True_709->is_used())
                      {
                        BIND(label__True_709);
                        // ../../third_party/v8/builtins/array-sort.tq:695:26
                        {
                          // ../../third_party/v8/builtins/array-sort.tq:696:13
                          *right_454 = implicit_cast<TNode<Smi>>((*mid_948));
                        }
                        Goto(label_if_done_label_951_1365);
                      }
                      if (label__False_710->is_used())
                      {
                        BIND(label__False_710);
                        // ../../third_party/v8/builtins/array-sort.tq:697:18
                        {
                          // ../../third_party/v8/builtins/array-sort.tq:698:13
                          int31_t t2479 = 1;
                          TNode<Smi> t2480 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2479)));
                          TNode<Smi> t2481 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*mid_948)), implicit_cast<TNode<Smi>>(t2480)));
                          USE(implicit_cast<TNode<Smi>>(t2481));
                          *left_453 = implicit_cast<TNode<Smi>>(t2481);
                        }
                        Goto(label_if_done_label_951_1365);
                      }
                      BIND(label_if_done_label_951_1365);
                    }
                  }
                  Goto(label_header_947_1364);
                }
                BIND(label__False_708);
              }
              // ../../third_party/v8/builtins/array-sort.tq:701:9
              // ../../third_party/v8/builtins/array-sort.tq:711:9
              TVARIABLE(Smi, p_455_impl);
              auto p_455 = &p_455_impl;
              USE(p_455);
              *p_455 = implicit_cast<TNode<Smi>>((*start_452).value());
              Label label__True_711_impl(this);
              Label* label__True_711 = &label__True_711_impl;
              USE(label__True_711);
              Label label__False_712_impl(this);
              Label* label__False_712 = &label__False_712_impl;
              USE(label__False_712);
              Label label_header_952_1366_impl(this, {p_455});
              Label* label_header_952_1366 = &label_header_952_1366_impl;
              USE(label_header_952_1366);
              Goto(label_header_952_1366);
              BIND(label_header_952_1366);
              Label label_action_953_1367_impl(this);
              Label* label_action_953_1367 = &label_action_953_1367_impl;
              USE(label_action_953_1367);
              TNode<BoolT> t2482 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*p_455).value()), implicit_cast<TNode<Smi>>((*left_453).value())));
              USE(implicit_cast<TNode<BoolT>>(t2482));
              Branch(implicit_cast<TNode<BoolT>>(t2482), label__True_711, label__False_712);
              if (label__True_711->is_used())
              {
                BIND(label__True_711);
                // ../../third_party/v8/builtins/array-sort.tq:711:49
                {
                  // ../../third_party/v8/builtins/array-sort.tq:712:11
                  int31_t t2483 = 1;
                  TNode<Smi> t2484 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2483)));
                  TNode<Smi> t2485 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*p_455).value()), implicit_cast<TNode<Smi>>(t2484)));
                  USE(implicit_cast<TNode<Smi>>(t2485));
                  CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_940)), implicit_cast<TNode<Code>>((*Store_941)), implicit_cast<TNode<HeapObject>>((*elements_451).value()), implicit_cast<TNode<Smi>>(t2485), implicit_cast<TNode<Smi>>((*p_455).value()), label_Bailout_702);
                }
                Goto(label_action_953_1367);
              }
              {
                BIND(label_action_953_1367);
                TNode<Smi> t2486 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2487 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*p_455).value()), implicit_cast<TNode<Smi>>(t2486)));
                *p_455 = implicit_cast<TNode<Smi>>(t2487);
                Goto(label_header_952_1366);
              }
              BIND(label__False_712);
              // ../../third_party/v8/builtins/array-sort.tq:715:9
              CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_941)), implicit_cast<TNode<HeapObject>>((*elements_451).value()), implicit_cast<TNode<Smi>>((*left_453).value()), implicit_cast<TNode<Object>>((*pivot_946)), label_Bailout_702);
            }
            Goto(label_action_945_1363);
          }
          {
            BIND(label_action_945_1363);
            TNode<Smi> t2488 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t2489 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*start_452).value()), implicit_cast<TNode<Smi>>(t2488)));
            *start_452 = implicit_cast<TNode<Smi>>(t2489);
            Goto(label_header_944_1362);
          }
          BIND(label__False_706);
          // ../../third_party/v8/builtins/array-sort.tq:718:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_702->is_used())
      {
        BIND(label_Bailout_702);
        // ../../third_party/v8/builtins/array-sort.tq:720:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:721:7
          TNode<Smi> t2490 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2490));
          Return(implicit_cast<TNode<Smi>>(t2490));
        }
      }
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::CountAndMakeRun(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_lowArg, TNode<Smi> p_high, Label* label_Bailout_713) {
  TVARIABLE(Smi, _return_456_impl);
  auto _return_456 = &_return_456_impl;
  USE(_return_456);
  Label label_macro_end_1368_impl(this, {_return_456});
  Label* label_macro_end_1368 = &label_macro_end_1368_impl;
  USE(label_macro_end_1368);
  // ../../third_party/v8/builtins/array-sort.tq:744:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:745:5
    // ../../third_party/v8/builtins/array-sort.tq:747:5
    TNode<HeapObject> t2491 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2491));
    TVARIABLE(HeapObject, elements_457_impl);
    auto elements_457 = &elements_457_impl;
    USE(elements_457);
    *elements_457 = implicit_cast<TNode<HeapObject>>(t2491);
    // ../../third_party/v8/builtins/array-sort.tq:748:5
    TNode<Code> t2492 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2492));
    TNode<Code> Load_954_impl;
    auto Load_954 = &Load_954_impl;
    USE(Load_954);
    *Load_954 = implicit_cast<TNode<Code>>(t2492);
    // ../../third_party/v8/builtins/array-sort.tq:749:5
    TNode<Code> t2493 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2493));
    TNode<Code> Store_955_impl;
    auto Store_955 = &Store_955_impl;
    USE(Store_955);
    *Store_955 = implicit_cast<TNode<Code>>(t2493);
    // ../../third_party/v8/builtins/array-sort.tq:751:5
    int31_t t2494 = 1;
    TNode<Smi> t2495 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2494)));
    TNode<Smi> t2496 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>(t2495)));
    USE(implicit_cast<TNode<Smi>>(t2496));
    TVARIABLE(Smi, low_458_impl);
    auto low_458 = &low_458_impl;
    USE(low_458);
    *low_458 = implicit_cast<TNode<Smi>>(t2496);
    // ../../third_party/v8/builtins/array-sort.tq:752:5
    {
      Label label__True_714_impl(this);
      Label* label__True_714 = &label__True_714_impl;
      USE(label__True_714);
      Label label__False_715_impl(this, {});
      Label* label__False_715 = &label__False_715_impl;
      USE(label__False_715);
      TNode<BoolT> t2497 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*low_458).value()), implicit_cast<TNode<Smi>>(p_high)));
      USE(implicit_cast<TNode<BoolT>>(t2497));
      Branch(implicit_cast<TNode<BoolT>>(t2497), label__True_714, label__False_715);
      if (label__True_714->is_used())
      {
        BIND(label__True_714);
        // ../../third_party/v8/builtins/array-sort.tq:752:22
        int31_t t2498 = 1;
        TNode<Smi> t2499 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2498)));
        *_return_456 = implicit_cast<TNode<Smi>>(t2499);
        Goto(label_macro_end_1368);
      }
      BIND(label__False_715);
    }
    // ../../third_party/v8/builtins/array-sort.tq:754:5
    int31_t t2500 = 2;
    TVARIABLE(Smi, run_length_459_impl);
    auto run_length_459 = &run_length_459_impl;
    USE(run_length_459);
    TNode<Smi> t2501 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2500)));
    *run_length_459 = implicit_cast<TNode<Smi>>(t2501);
    // ../../third_party/v8/builtins/array-sort.tq:756:5
    TNode<Object> t2502 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_954)), implicit_cast<TNode<HeapObject>>((*elements_457).value()), implicit_cast<TNode<Smi>>((*low_458).value()), label_Bailout_713));
    USE(implicit_cast<TNode<Object>>(t2502));
    TNode<Object> element_low_956_impl;
    auto element_low_956 = &element_low_956_impl;
    USE(element_low_956);
    *element_low_956 = implicit_cast<TNode<Object>>(t2502);
    // ../../third_party/v8/builtins/array-sort.tq:758:5
    int31_t t2503 = 1;
    TNode<Smi> t2504 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2503)));
    TNode<Smi> t2505 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*low_458).value()), implicit_cast<TNode<Smi>>(t2504)));
    USE(implicit_cast<TNode<Smi>>(t2505));
    TNode<Object> t2506 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_954)), implicit_cast<TNode<HeapObject>>((*elements_457).value()), implicit_cast<TNode<Smi>>(t2505), label_Bailout_713));
    USE(implicit_cast<TNode<Object>>(t2506));
    TNode<Object> element_low_pred_957_impl;
    auto element_low_pred_957 = &element_low_pred_957_impl;
    USE(element_low_pred_957);
    *element_low_pred_957 = implicit_cast<TNode<Object>>(t2506);
    // ../../third_party/v8/builtins/array-sort.tq:760:5
    TNode<Number> t2507 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*element_low_956)), implicit_cast<TNode<Object>>((*element_low_pred_957)), label_Bailout_713));
    USE(implicit_cast<TNode<Number>>(t2507));
    TVARIABLE(Number, order_460_impl);
    auto order_460 = &order_460_impl;
    USE(order_460);
    *order_460 = implicit_cast<TNode<Number>>(t2507);
    // ../../third_party/v8/builtins/array-sort.tq:763:5
    TNode<HeapObject> t2508 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2508));
    *elements_457 = implicit_cast<TNode<HeapObject>>(t2508);
    // ../../third_party/v8/builtins/array-sort.tq:768:5
    auto t2509 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t2510 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t2511_958_impl);
    auto t2511_958 = &t2511_958_impl;
    USE(t2511_958);
    {
      Label label__True_716_impl(this);
      Label* label__True_716 = &label__True_716_impl;
      USE(label__True_716);
      Label label__False_717_impl(this);
      Label* label__False_717 = &label__False_717_impl;
      USE(label__False_717);
      Label label__done_959_1369_impl(this, {t2511_958});
      Label* label__done_959_1369 = &label__done_959_1369_impl;
      USE(label__done_959_1369);
      int31_t t2512 = 0;
      TNode<Number> t2513 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2512)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_460).value()), implicit_cast<TNode<Number>>(t2513), label__True_716, label__False_717);
      BIND(label__True_716);
            TNode<BoolT> t2514 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t2509())));
      *t2511_958 = implicit_cast<TNode<BoolT>>(t2514);
      Goto(label__done_959_1369);
      BIND(label__False_717);
            TNode<BoolT> t2515 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t2510())));
      *t2511_958 = implicit_cast<TNode<BoolT>>(t2515);
      Goto(label__done_959_1369);
      BIND(label__done_959_1369);
    }
    TNode<BoolT> is_descending_960_impl;
    auto is_descending_960 = &is_descending_960_impl;
    USE(is_descending_960);
    *is_descending_960 = implicit_cast<TNode<BoolT>>((*t2511_958).value());
    // ../../third_party/v8/builtins/array-sort.tq:770:5
    TVARIABLE(Object, previous_element_461_impl);
    auto previous_element_461 = &previous_element_461_impl;
    USE(previous_element_461);
    *previous_element_461 = implicit_cast<TNode<Object>>((*element_low_956));
    // ../../third_party/v8/builtins/array-sort.tq:771:5
    int31_t t2516 = 1;
    TNode<Smi> t2517 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2516)));
    TNode<Smi> t2518 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_458).value()), implicit_cast<TNode<Smi>>(t2517)));
    USE(implicit_cast<TNode<Smi>>(t2518));
    TVARIABLE(Smi, idx_462_impl);
    auto idx_462 = &idx_462_impl;
    USE(idx_462);
    *idx_462 = implicit_cast<TNode<Smi>>(t2518);
    Label label__True_718_impl(this);
    Label* label__True_718 = &label__True_718_impl;
    USE(label__True_718);
    Label label__False_719_impl(this);
    Label* label__False_719 = &label__False_719_impl;
    USE(label__False_719);
    Label label_header_961_1370_impl(this, {elements_457, idx_462, order_460, previous_element_461, run_length_459});
    Label* label_header_961_1370 = &label_header_961_1370_impl;
    USE(label_header_961_1370);
    Goto(label_header_961_1370);
    BIND(label_header_961_1370);
    Label label_action_962_1371_impl(this);
    Label* label_action_962_1371 = &label_action_962_1371_impl;
    USE(label_action_962_1371);
    TNode<BoolT> t2519 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*idx_462).value()), implicit_cast<TNode<Smi>>(p_high)));
    USE(implicit_cast<TNode<BoolT>>(t2519));
    Branch(implicit_cast<TNode<BoolT>>(t2519), label__True_718, label__False_719);
    if (label__True_718->is_used())
    {
      BIND(label__True_718);
      // ../../third_party/v8/builtins/array-sort.tq:771:53
      {
        // ../../third_party/v8/builtins/array-sort.tq:772:7
        TNode<Object> t2520 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_954)), implicit_cast<TNode<HeapObject>>((*elements_457).value()), implicit_cast<TNode<Smi>>((*idx_462).value()), label_Bailout_713));
        USE(implicit_cast<TNode<Object>>(t2520));
        TNode<Object> current_element_963_impl;
        auto current_element_963 = &current_element_963_impl;
        USE(current_element_963);
        *current_element_963 = implicit_cast<TNode<Object>>(t2520);
        // ../../third_party/v8/builtins/array-sort.tq:774:7
        TNode<Number> t2521 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*current_element_963)), implicit_cast<TNode<Object>>((*previous_element_461).value()), label_Bailout_713));
        USE(implicit_cast<TNode<Number>>(t2521));
        *order_460 = implicit_cast<TNode<Number>>(t2521);
        // ../../third_party/v8/builtins/array-sort.tq:777:7
        TNode<HeapObject> t2522 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
        USE(implicit_cast<TNode<HeapObject>>(t2522));
        *elements_457 = implicit_cast<TNode<HeapObject>>(t2522);
        // ../../third_party/v8/builtins/array-sort.tq:779:7
        {
          Label label__True_720_impl(this);
          Label* label__True_720 = &label__True_720_impl;
          USE(label__True_720);
          Label label__False_721_impl(this);
          Label* label__False_721 = &label__False_721_impl;
          USE(label__False_721);
          Label label_if_done_label_964_1372_impl(this, {});
          Label* label_if_done_label_964_1372 = &label_if_done_label_964_1372_impl;
          USE(label_if_done_label_964_1372);
          Branch(implicit_cast<TNode<BoolT>>((*is_descending_960)), label__True_720, label__False_721);
          if (label__True_720->is_used())
          {
            BIND(label__True_720);
            // ../../third_party/v8/builtins/array-sort.tq:779:26
            {
              // ../../third_party/v8/builtins/array-sort.tq:780:9
              {
                Label label__True_722_impl(this);
                Label* label__True_722 = &label__True_722_impl;
                USE(label__True_722);
                Label label__False_723_impl(this, {});
                Label* label__False_723 = &label__False_723_impl;
                USE(label__False_723);
                int31_t t2523 = 0;
                TNode<Number> t2524 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2523)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_460).value()), implicit_cast<TNode<Number>>(t2524), label__True_722, label__False_723);
                if (label__True_722->is_used())
                {
                  BIND(label__True_722);
                  // ../../third_party/v8/builtins/array-sort.tq:780:25
                  Goto(label__False_719);
                }
                BIND(label__False_723);
              }
            }
            Goto(label_if_done_label_964_1372);
          }
          if (label__False_721->is_used())
          {
            BIND(label__False_721);
            // ../../third_party/v8/builtins/array-sort.tq:781:14
            {
              // ../../third_party/v8/builtins/array-sort.tq:782:9
              {
                Label label__True_724_impl(this);
                Label* label__True_724 = &label__True_724_impl;
                USE(label__True_724);
                Label label__False_725_impl(this, {});
                Label* label__False_725 = &label__False_725_impl;
                USE(label__False_725);
                int31_t t2525 = 0;
                TNode<Number> t2526 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2525)));
                BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_460).value()), implicit_cast<TNode<Number>>(t2526), label__True_724, label__False_725);
                if (label__True_724->is_used())
                {
                  BIND(label__True_724);
                  // ../../third_party/v8/builtins/array-sort.tq:782:24
                  Goto(label__False_719);
                }
                BIND(label__False_725);
              }
            }
            Goto(label_if_done_label_964_1372);
          }
          BIND(label_if_done_label_964_1372);
        }
        // ../../third_party/v8/builtins/array-sort.tq:785:7
        *previous_element_461 = implicit_cast<TNode<Object>>((*current_element_963));
        // ../../third_party/v8/builtins/array-sort.tq:786:7
        TNode<Smi> t2527 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2528 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*run_length_459).value()), implicit_cast<TNode<Smi>>(t2527)));
        *run_length_459 = implicit_cast<TNode<Smi>>(t2528);
      }
      Goto(label_action_962_1371);
    }
    {
      BIND(label_action_962_1371);
      TNode<Smi> t2529 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2530 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*idx_462).value()), implicit_cast<TNode<Smi>>(t2529)));
      *idx_462 = implicit_cast<TNode<Smi>>(t2530);
      Goto(label_header_961_1370);
    }
    BIND(label__False_719);
    // ../../third_party/v8/builtins/array-sort.tq:789:5
    {
      Label label__True_726_impl(this);
      Label* label__True_726 = &label__True_726_impl;
      USE(label__True_726);
      Label label__False_727_impl(this, {});
      Label* label__False_727 = &label__False_727_impl;
      USE(label__False_727);
      Branch(implicit_cast<TNode<BoolT>>((*is_descending_960)), label__True_726, label__False_727);
      if (label__True_726->is_used())
      {
        BIND(label__True_726);
        // ../../third_party/v8/builtins/array-sort.tq:789:24
        {
          // ../../third_party/v8/builtins/array-sort.tq:790:7
          TNode<Smi> t2531 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>((*run_length_459).value())));
          USE(implicit_cast<TNode<Smi>>(t2531));
          ReverseRange(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_954)), implicit_cast<TNode<Code>>((*Store_955)), implicit_cast<TNode<HeapObject>>((*elements_457).value()), implicit_cast<TNode<Smi>>(p_lowArg), implicit_cast<TNode<Smi>>(t2531), label_Bailout_713);
        }
        Goto(label__False_727);
      }
      BIND(label__False_727);
    }
    // ../../third_party/v8/builtins/array-sort.tq:796:5
    *_return_456 = implicit_cast<TNode<Smi>>((*run_length_459).value());
    Goto(label_macro_end_1368);
  }
  BIND(label_macro_end_1368);
  return implicit_cast<TNode<Smi>>((*_return_456).value());
}

void ArrayBuiltinsFromDSLAssembler::ReverseRange(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Code> p_Store, TNode<HeapObject> p_elements, TNode<Smi> p_from, TNode<Smi> p_to, Label* label_Bailout_728) {
  Label label_macro_end_1373_impl(this, {});
  Label* label_macro_end_1373 = &label_macro_end_1373_impl;
  USE(label_macro_end_1373);
  // ../../third_party/v8/builtins/array-sort.tq:802:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:803:5
    TVARIABLE(Smi, low_463_impl);
    auto low_463 = &low_463_impl;
    USE(low_463);
    *low_463 = implicit_cast<TNode<Smi>>(p_from);
    // ../../third_party/v8/builtins/array-sort.tq:804:5
    int31_t t2532 = 1;
    TNode<Smi> t2533 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2532)));
    TNode<Smi> t2534 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<Smi>>(t2533)));
    USE(implicit_cast<TNode<Smi>>(t2534));
    TVARIABLE(Smi, high_464_impl);
    auto high_464 = &high_464_impl;
    USE(high_464);
    *high_464 = implicit_cast<TNode<Smi>>(t2534);
    // ../../third_party/v8/builtins/array-sort.tq:806:5
    {
      Label label__True_729_impl(this);
      Label* label__True_729 = &label__True_729_impl;
      USE(label__True_729);
      Label label__False_730_impl(this);
      Label* label__False_730 = &label__False_730_impl;
      USE(label__False_730);
      Label label_header_965_1374_impl(this, {high_464, low_463});
      Label* label_header_965_1374 = &label_header_965_1374_impl;
      USE(label_header_965_1374);
      Goto(label_header_965_1374);
      BIND(label_header_965_1374);
      TNode<BoolT> t2535 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*low_463).value()), implicit_cast<TNode<Smi>>((*high_464).value())));
      USE(implicit_cast<TNode<BoolT>>(t2535));
      Branch(implicit_cast<TNode<BoolT>>(t2535), label__True_729, label__False_730);
      if (label__True_729->is_used())
      {
        BIND(label__True_729);
        // ../../third_party/v8/builtins/array-sort.tq:806:24
        {
          // ../../third_party/v8/builtins/array-sort.tq:807:7
          TNode<Object> t2536 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>((*low_463).value()), label_Bailout_728));
          USE(implicit_cast<TNode<Object>>(t2536));
          TNode<Object> element_low_966_impl;
          auto element_low_966 = &element_low_966_impl;
          USE(element_low_966);
          *element_low_966 = implicit_cast<TNode<Object>>(t2536);
          // ../../third_party/v8/builtins/array-sort.tq:809:7
          TNode<Object> t2537 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>((*high_464).value()), label_Bailout_728));
          USE(implicit_cast<TNode<Object>>(t2537));
          TNode<Object> element_high_967_impl;
          auto element_high_967 = &element_high_967_impl;
          USE(element_high_967);
          *element_high_967 = implicit_cast<TNode<Object>>(t2537);
          // ../../third_party/v8/builtins/array-sort.tq:811:7
          TNode<Smi> t2538 = implicit_cast<TNode<Smi>>((*low_463).value());
          USE(t2538);
          TNode<Smi> t2539 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2540 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_463).value()), implicit_cast<TNode<Smi>>(t2539)));
          *low_463 = implicit_cast<TNode<Smi>>(t2540);
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2538), implicit_cast<TNode<Object>>((*element_high_967)), label_Bailout_728);
          // ../../third_party/v8/builtins/array-sort.tq:813:7
          TNode<Smi> t2541 = implicit_cast<TNode<Smi>>((*high_464).value());
          USE(t2541);
          TNode<Smi> t2542 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2543 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*high_464).value()), implicit_cast<TNode<Smi>>(t2542)));
          *high_464 = implicit_cast<TNode<Smi>>(t2543);
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(t2541), implicit_cast<TNode<Object>>((*element_low_966)), label_Bailout_728);
        }
        Goto(label_header_965_1374);
      }
      BIND(label__False_730);
    }
  }
}

TF_BUILTIN(MergeAt, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Smi> p_i = UncheckedCast<Smi>(Parameter(Descriptor::kI));
  USE(p_i);
  // ../../third_party/v8/builtins/array-sort.tq:820:73
  {
    // ../../third_party/v8/builtins/array-sort.tq:821:5
    TNode<Smi> t2544 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Smi>>(t2544));
    TNode<Smi> stack_size_968_impl;
    auto stack_size_968 = &stack_size_968_impl;
    USE(stack_size_968);
    *stack_size_968 = implicit_cast<TNode<Smi>>(t2544);
    // ../../third_party/v8/builtins/array-sort.tq:825:5
    // ../../third_party/v8/builtins/array-sort.tq:826:5
    // ../../third_party/v8/builtins/array-sort.tq:827:5
    // ../../third_party/v8/builtins/array-sort.tq:829:5
    TNode<HeapObject> t2545 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2545));
    TVARIABLE(HeapObject, elements_465_impl);
    auto elements_465 = &elements_465_impl;
    USE(elements_465);
    *elements_465 = implicit_cast<TNode<HeapObject>>(t2545);
    // ../../third_party/v8/builtins/array-sort.tq:830:5
    TNode<Code> t2546 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2546));
    TNode<Code> Load_969_impl;
    auto Load_969 = &Load_969_impl;
    USE(Load_969);
    *Load_969 = implicit_cast<TNode<Code>>(t2546);
    // ../../third_party/v8/builtins/array-sort.tq:832:5
    TNode<Object> t2547 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t2548 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t2547)));
    USE(implicit_cast<TNode<FixedArray>>(t2548));
    TNode<FixedArray> pending_runs_970_impl;
    auto pending_runs_970 = &pending_runs_970_impl;
    USE(pending_runs_970);
    *pending_runs_970 = implicit_cast<TNode<FixedArray>>(t2548);
    // ../../third_party/v8/builtins/array-sort.tq:834:5
    TNode<Smi> t2549 = UncheckedCast<Smi>(GetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_970)), implicit_cast<TNode<Smi>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t2549));
    TVARIABLE(Smi, base_a_466_impl);
    auto base_a_466 = &base_a_466_impl;
    USE(base_a_466);
    *base_a_466 = implicit_cast<TNode<Smi>>(t2549);
    // ../../third_party/v8/builtins/array-sort.tq:835:5
    TNode<Smi> t2550 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_970)), implicit_cast<TNode<Smi>>(p_i)));
    USE(implicit_cast<TNode<Smi>>(t2550));
    TVARIABLE(Smi, length_a_467_impl);
    auto length_a_467 = &length_a_467_impl;
    USE(length_a_467);
    *length_a_467 = implicit_cast<TNode<Smi>>(t2550);
    // ../../third_party/v8/builtins/array-sort.tq:836:5
    int31_t t2551 = 1;
    TNode<Smi> t2552 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2551)));
    TNode<Smi> t2553 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2552)));
    USE(implicit_cast<TNode<Smi>>(t2553));
    TNode<Smi> t2554 = UncheckedCast<Smi>(GetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_970)), implicit_cast<TNode<Smi>>(t2553)));
    USE(implicit_cast<TNode<Smi>>(t2554));
    TVARIABLE(Smi, base_b_468_impl);
    auto base_b_468 = &base_b_468_impl;
    USE(base_b_468);
    *base_b_468 = implicit_cast<TNode<Smi>>(t2554);
    // ../../third_party/v8/builtins/array-sort.tq:837:5
    int31_t t2555 = 1;
    TNode<Smi> t2556 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2555)));
    TNode<Smi> t2557 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2556)));
    USE(implicit_cast<TNode<Smi>>(t2557));
    TNode<Smi> t2558 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_970)), implicit_cast<TNode<Smi>>(t2557)));
    USE(implicit_cast<TNode<Smi>>(t2558));
    TVARIABLE(Smi, length_b_469_impl);
    auto length_b_469 = &length_b_469_impl;
    USE(length_b_469);
    *length_b_469 = implicit_cast<TNode<Smi>>(t2558);
    // ../../third_party/v8/builtins/array-sort.tq:838:5
    // ../../third_party/v8/builtins/array-sort.tq:839:5
    // ../../third_party/v8/builtins/array-sort.tq:844:5
    TNode<Smi> t2559 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*length_a_467).value()), implicit_cast<TNode<Smi>>((*length_b_469).value())));
    USE(implicit_cast<TNode<Smi>>(t2559));
    SetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_970)), implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2559));
    // ../../third_party/v8/builtins/array-sort.tq:845:5
    {
      Label label__True_731_impl(this);
      Label* label__True_731 = &label__True_731_impl;
      USE(label__True_731);
      Label label__False_732_impl(this, {});
      Label* label__False_732 = &label__False_732_impl;
      USE(label__False_732);
      int31_t t2560 = 3;
      TNode<Smi> t2561 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2560)));
      TNode<Smi> t2562 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*stack_size_968)), implicit_cast<TNode<Smi>>(t2561)));
      USE(implicit_cast<TNode<Smi>>(t2562));
      TNode<BoolT> t2563 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2562)));
      USE(implicit_cast<TNode<BoolT>>(t2563));
      Branch(implicit_cast<TNode<BoolT>>(t2563), label__True_731, label__False_732);
      if (label__True_731->is_used())
      {
        BIND(label__True_731);
        // ../../third_party/v8/builtins/array-sort.tq:845:30
        {
          // ../../third_party/v8/builtins/array-sort.tq:846:7
          int31_t t2564 = 2;
          TNode<Smi> t2565 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2564)));
          TNode<Smi> t2566 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2565)));
          USE(implicit_cast<TNode<Smi>>(t2566));
          TNode<Smi> t2567 = UncheckedCast<Smi>(GetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_970)), implicit_cast<TNode<Smi>>(t2566)));
          USE(implicit_cast<TNode<Smi>>(t2567));
          TNode<Smi> base_971_impl;
          auto base_971 = &base_971_impl;
          USE(base_971);
          *base_971 = implicit_cast<TNode<Smi>>(t2567);
          // ../../third_party/v8/builtins/array-sort.tq:847:7
          int31_t t2568 = 2;
          TNode<Smi> t2569 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2568)));
          TNode<Smi> t2570 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2569)));
          USE(implicit_cast<TNode<Smi>>(t2570));
          TNode<Smi> t2571 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_970)), implicit_cast<TNode<Smi>>(t2570)));
          USE(implicit_cast<TNode<Smi>>(t2571));
          TNode<Smi> length_972_impl;
          auto length_972 = &length_972_impl;
          USE(length_972);
          *length_972 = implicit_cast<TNode<Smi>>(t2571);
          // ../../third_party/v8/builtins/array-sort.tq:848:7
          int31_t t2572 = 1;
          TNode<Smi> t2573 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2572)));
          TNode<Smi> t2574 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2573)));
          USE(implicit_cast<TNode<Smi>>(t2574));
          SetPendingRunBase(implicit_cast<TNode<FixedArray>>((*pending_runs_970)), implicit_cast<TNode<Smi>>(t2574), implicit_cast<TNode<Smi>>((*base_971)));
          // ../../third_party/v8/builtins/array-sort.tq:849:7
          int31_t t2575 = 1;
          TNode<Smi> t2576 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2575)));
          TNode<Smi> t2577 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_i), implicit_cast<TNode<Smi>>(t2576)));
          USE(implicit_cast<TNode<Smi>>(t2577));
          SetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_970)), implicit_cast<TNode<Smi>>(t2577), implicit_cast<TNode<Smi>>((*length_972)));
        }
        Goto(label__False_732);
      }
      BIND(label__False_732);
    }
    // ../../third_party/v8/builtins/array-sort.tq:851:5
    int31_t t2578 = 1;
    TNode<Smi> t2579 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2578)));
    TNode<Smi> t2580 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*stack_size_968)), implicit_cast<TNode<Smi>>(t2579)));
    USE(implicit_cast<TNode<Smi>>(t2580));
    SetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(t2580));
    // ../../third_party/v8/builtins/array-sort.tq:853:5
    {
      Label label_try_done_973_1375_impl(this);
      Label* label_try_done_973_1375 = &label_try_done_973_1375_impl;
      USE(label_try_done_973_1375);
      Label label_Bailout_733_impl(this);
      Label* label_Bailout_733 = &label_Bailout_733_impl;
      USE(label_Bailout_733);
      Label label_try_begin_974_1376_impl(this);
      Label* label_try_begin_974_1376 = &label_try_begin_974_1376_impl;
      USE(label_try_begin_974_1376);
      Goto(label_try_begin_974_1376);
      if (label_try_begin_974_1376->is_used())
      {
        BIND(label_try_begin_974_1376);
        // ../../third_party/v8/builtins/array-sort.tq:853:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:856:7
          TNode<Object> t2581 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_969)), implicit_cast<TNode<HeapObject>>((*elements_465).value()), implicit_cast<TNode<Smi>>((*base_b_468).value()), label_Bailout_733));
          USE(implicit_cast<TNode<Object>>(t2581));
          TNode<Object> key_right_975_impl;
          auto key_right_975 = &key_right_975_impl;
          USE(key_right_975);
          *key_right_975 = implicit_cast<TNode<Object>>(t2581);
          // ../../third_party/v8/builtins/array-sort.tq:859:7
          int31_t t2582 = 0;
          TNode<Smi> t2583 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2582)));
          TNode<Smi> t2584 = UncheckedCast<Smi>(CallGallopRight(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_969)), implicit_cast<TNode<Object>>((*key_right_975)), implicit_cast<TNode<Smi>>((*base_a_466).value()), implicit_cast<TNode<Smi>>((*length_a_467).value()), implicit_cast<TNode<Smi>>(t2583), implicit_cast<TNode<Oddball>>(False()), label_Bailout_733));
          USE(implicit_cast<TNode<Smi>>(t2584));
          TNode<Smi> k_976_impl;
          auto k_976 = &k_976_impl;
          USE(k_976);
          *k_976 = implicit_cast<TNode<Smi>>(t2584);
          // ../../third_party/v8/builtins/array-sort.tq:862:7
          TNode<HeapObject> t2585 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<HeapObject>>(t2585));
          *elements_465 = implicit_cast<TNode<HeapObject>>(t2585);
          // ../../third_party/v8/builtins/array-sort.tq:863:7
          // ../../third_party/v8/builtins/array-sort.tq:865:7
          TNode<Smi> t2586 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*base_a_466).value()), implicit_cast<TNode<Smi>>((*k_976))));
          USE(implicit_cast<TNode<Smi>>(t2586));
          *base_a_466 = implicit_cast<TNode<Smi>>(t2586);
          // ../../third_party/v8/builtins/array-sort.tq:866:7
          TNode<Smi> t2587 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_467).value()), implicit_cast<TNode<Smi>>((*k_976))));
          USE(implicit_cast<TNode<Smi>>(t2587));
          *length_a_467 = implicit_cast<TNode<Smi>>(t2587);
          // ../../third_party/v8/builtins/array-sort.tq:867:7
          {
            Label label__True_734_impl(this);
            Label* label__True_734 = &label__True_734_impl;
            USE(label__True_734);
            Label label__False_735_impl(this, {});
            Label* label__False_735 = &label__False_735_impl;
            USE(label__False_735);
            int31_t t2588 = 0;
            TNode<Smi> t2589 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2588)));
            TNode<BoolT> t2590 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_467).value()), implicit_cast<TNode<Smi>>(t2589)));
            USE(implicit_cast<TNode<BoolT>>(t2590));
            Branch(implicit_cast<TNode<BoolT>>(t2590), label__True_734, label__False_735);
            if (label__True_734->is_used())
            {
              BIND(label__True_734);
              // ../../third_party/v8/builtins/array-sort.tq:867:26
              Return(implicit_cast<TNode<Smi>>(kSuccess()));
            }
            BIND(label__False_735);
          }
          // ../../third_party/v8/builtins/array-sort.tq:868:7
          // ../../third_party/v8/builtins/array-sort.tq:872:7
          TNode<Smi> t2591 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*base_a_466).value()), implicit_cast<TNode<Smi>>((*length_a_467).value())));
          USE(implicit_cast<TNode<Smi>>(t2591));
          int31_t t2592 = 1;
          TNode<Smi> t2593 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2592)));
          TNode<Smi> t2594 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2591), implicit_cast<TNode<Smi>>(t2593)));
          USE(implicit_cast<TNode<Smi>>(t2594));
          TNode<Object> t2595 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_969)), implicit_cast<TNode<HeapObject>>((*elements_465).value()), implicit_cast<TNode<Smi>>(t2594), label_Bailout_733));
          USE(implicit_cast<TNode<Object>>(t2595));
          TVARIABLE(Object, key_left_470_impl);
          auto key_left_470 = &key_left_470_impl;
          USE(key_left_470);
          *key_left_470 = implicit_cast<TNode<Object>>(t2595);
          // ../../third_party/v8/builtins/array-sort.tq:875:7
          int31_t t2596 = 1;
          TNode<Smi> t2597 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2596)));
          TNode<Smi> t2598 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_469).value()), implicit_cast<TNode<Smi>>(t2597)));
          USE(implicit_cast<TNode<Smi>>(t2598));
          TNode<Smi> t2599 = UncheckedCast<Smi>(CallGallopLeft(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Load_969)), implicit_cast<TNode<Object>>((*key_left_470).value()), implicit_cast<TNode<Smi>>((*base_b_468).value()), implicit_cast<TNode<Smi>>((*length_b_469).value()), implicit_cast<TNode<Smi>>(t2598), implicit_cast<TNode<Oddball>>(False()), label_Bailout_733));
          USE(implicit_cast<TNode<Smi>>(t2599));
          *length_b_469 = implicit_cast<TNode<Smi>>(t2599);
          // ../../third_party/v8/builtins/array-sort.tq:878:7
          TNode<HeapObject> t2600 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<HeapObject>>(t2600));
          *elements_465 = implicit_cast<TNode<HeapObject>>(t2600);
          // ../../third_party/v8/builtins/array-sort.tq:879:7
          // ../../third_party/v8/builtins/array-sort.tq:880:7
          {
            Label label__True_736_impl(this);
            Label* label__True_736 = &label__True_736_impl;
            USE(label__True_736);
            Label label__False_737_impl(this, {});
            Label* label__False_737 = &label__False_737_impl;
            USE(label__False_737);
            int31_t t2601 = 0;
            TNode<Smi> t2602 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2601)));
            TNode<BoolT> t2603 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_469).value()), implicit_cast<TNode<Smi>>(t2602)));
            USE(implicit_cast<TNode<BoolT>>(t2603));
            Branch(implicit_cast<TNode<BoolT>>(t2603), label__True_736, label__False_737);
            if (label__True_736->is_used())
            {
              BIND(label__True_736);
              // ../../third_party/v8/builtins/array-sort.tq:880:26
              Return(implicit_cast<TNode<Smi>>(kSuccess()));
            }
            BIND(label__False_737);
          }
          // ../../third_party/v8/builtins/array-sort.tq:884:7
          {
            Label label__True_738_impl(this);
            Label* label__True_738 = &label__True_738_impl;
            USE(label__True_738);
            Label label__False_739_impl(this);
            Label* label__False_739 = &label__False_739_impl;
            USE(label__False_739);
            Label label_if_done_label_977_1377_impl(this, {});
            Label* label_if_done_label_977_1377 = &label_if_done_label_977_1377_impl;
            USE(label_if_done_label_977_1377);
            TNode<BoolT> t2604 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*length_a_467).value()), implicit_cast<TNode<Smi>>((*length_b_469).value())));
            USE(implicit_cast<TNode<BoolT>>(t2604));
            Branch(implicit_cast<TNode<BoolT>>(t2604), label__True_738, label__False_739);
            if (label__True_738->is_used())
            {
              BIND(label__True_738);
              // ../../third_party/v8/builtins/array-sort.tq:884:33
              {
                // ../../third_party/v8/builtins/array-sort.tq:885:9
                MergeLow(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*base_a_466).value()), implicit_cast<TNode<Smi>>((*length_a_467).value()), implicit_cast<TNode<Smi>>((*base_b_468).value()), implicit_cast<TNode<Smi>>((*length_b_469).value()), label_Bailout_733);
              }
              Goto(label_if_done_label_977_1377);
            }
            if (label__False_739->is_used())
            {
              BIND(label__False_739);
              // ../../third_party/v8/builtins/array-sort.tq:887:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:888:9
                MergeHigh(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*base_a_466).value()), implicit_cast<TNode<Smi>>((*length_a_467).value()), implicit_cast<TNode<Smi>>((*base_b_468).value()), implicit_cast<TNode<Smi>>((*length_b_469).value()), label_Bailout_733);
              }
              Goto(label_if_done_label_977_1377);
            }
            BIND(label_if_done_label_977_1377);
          }
          // ../../third_party/v8/builtins/array-sort.tq:891:7
          Return(implicit_cast<TNode<Smi>>(kSuccess()));
        }
      }
      if (label_Bailout_733->is_used())
      {
        BIND(label_Bailout_733);
        // ../../third_party/v8/builtins/array-sort.tq:893:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:894:7
          TNode<Smi> t2605 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2605));
          Return(implicit_cast<TNode<Smi>>(t2605));
        }
      }
    }
  }
}

compiler::TNode<HeapObject> ArrayBuiltinsFromDSLAssembler::LoadElementsOrTempArray(TNode<Oddball> p_useTempArray, TNode<FixedArray> p_sortState) {
  TVARIABLE(HeapObject, _return_471_impl);
  auto _return_471 = &_return_471_impl;
  USE(_return_471);
  Label label_macro_end_1378_impl(this, {_return_471});
  Label* label_macro_end_1378 = &label_macro_end_1378_impl;
  USE(label_macro_end_1378);
  // ../../third_party/v8/builtins/array-sort.tq:899:65
  {
    // ../../third_party/v8/builtins/array-sort.tq:900:5
    auto t2606 = [=]() {
      TNode<FixedArray> t2608 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<FixedArray>>(t2608));
      return implicit_cast<TNode<FixedArray>>(t2608);
    };
    auto t2607 = [=]() {
      TNode<HeapObject> t2609 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<HeapObject>>(t2609));
      return implicit_cast<TNode<HeapObject>>(t2609);
    };
    TVARIABLE(HeapObject, t2610_978_impl);
    auto t2610_978 = &t2610_978_impl;
    USE(t2610_978);
    {
      Label label__True_740_impl(this);
      Label* label__True_740 = &label__True_740_impl;
      USE(label__True_740);
      Label label__False_741_impl(this);
      Label* label__False_741 = &label__False_741_impl;
      USE(label__False_741);
      Label label__done_979_1379_impl(this, {t2610_978});
      Label* label__done_979_1379 = &label__done_979_1379_impl;
      USE(label__done_979_1379);
      TNode<BoolT> t2611 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(p_useTempArray), implicit_cast<TNode<Object>>(True())));
      USE(implicit_cast<TNode<BoolT>>(t2611));
      Branch(implicit_cast<TNode<BoolT>>(t2611), label__True_740, label__False_741);
      BIND(label__True_740);
            *t2610_978 = implicit_cast<TNode<HeapObject>>(t2606());
      Goto(label__done_979_1379);
      BIND(label__False_741);
            *t2610_978 = implicit_cast<TNode<HeapObject>>(t2607());
      Goto(label__done_979_1379);
      BIND(label__done_979_1379);
    }
    *_return_471 = implicit_cast<TNode<HeapObject>>((*t2610_978).value());
    Goto(label_macro_end_1378);
  }
  BIND(label_macro_end_1378);
  return implicit_cast<TNode<HeapObject>>((*_return_471).value());
}

TF_BUILTIN(GallopLeft, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Code> p_Load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_Load);
  TNode<Object> p_key = UncheckedCast<Object>(Parameter(Descriptor::kKey));
  USE(p_key);
  TNode<Smi> p_base = UncheckedCast<Smi>(Parameter(Descriptor::kBase));
  USE(p_base);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Smi> p_hint = UncheckedCast<Smi>(Parameter(Descriptor::kHint));
  USE(p_hint);
  TNode<Oddball> p_useTempArray = UncheckedCast<Oddball>(Parameter(Descriptor::kUseTempArray));
  USE(p_useTempArray);
  // ../../third_party/v8/builtins/array-sort.tq:923:70
  {
    // ../../third_party/v8/builtins/array-sort.tq:924:5
    // ../../third_party/v8/builtins/array-sort.tq:925:5
    // ../../third_party/v8/builtins/array-sort.tq:927:5
    int31_t t2612 = 0;
    TVARIABLE(Smi, last_ofs_472_impl);
    auto last_ofs_472 = &last_ofs_472_impl;
    USE(last_ofs_472);
    TNode<Smi> t2613 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2612)));
    *last_ofs_472 = implicit_cast<TNode<Smi>>(t2613);
    // ../../third_party/v8/builtins/array-sort.tq:928:5
    int31_t t2614 = 1;
    TVARIABLE(Smi, offset_473_impl);
    auto offset_473 = &offset_473_impl;
    USE(offset_473);
    TNode<Smi> t2615 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2614)));
    *offset_473 = implicit_cast<TNode<Smi>>(t2615);
    // ../../third_party/v8/builtins/array-sort.tq:930:5
    {
      Label label_try_done_980_1380_impl(this);
      Label* label_try_done_980_1380 = &label_try_done_980_1380_impl;
      USE(label_try_done_980_1380);
      Label label_Bailout_742_impl(this);
      Label* label_Bailout_742 = &label_Bailout_742_impl;
      USE(label_Bailout_742);
      Label label_try_begin_981_1381_impl(this);
      Label* label_try_begin_981_1381 = &label_try_begin_981_1381_impl;
      USE(label_try_begin_981_1381);
      Goto(label_try_begin_981_1381);
      if (label_try_begin_981_1381->is_used())
      {
        BIND(label_try_begin_981_1381);
        // ../../third_party/v8/builtins/array-sort.tq:930:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:931:7
          TNode<HeapObject> t2616 = UncheckedCast<HeapObject>(LoadElementsOrTempArray(implicit_cast<TNode<Oddball>>(p_useTempArray), implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<HeapObject>>(t2616));
          TNode<Smi> t2617 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
          USE(implicit_cast<TNode<Smi>>(t2617));
          TNode<Object> t2618 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(t2616), implicit_cast<TNode<Smi>>(t2617), label_Bailout_742));
          USE(implicit_cast<TNode<Object>>(t2618));
          TNode<Object> base_hint_element_982_impl;
          auto base_hint_element_982 = &base_hint_element_982_impl;
          USE(base_hint_element_982);
          *base_hint_element_982 = implicit_cast<TNode<Object>>(t2618);
          // ../../third_party/v8/builtins/array-sort.tq:935:7
          TNode<Number> t2619 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*base_hint_element_982)), implicit_cast<TNode<Object>>(p_key), label_Bailout_742));
          USE(implicit_cast<TNode<Number>>(t2619));
          TVARIABLE(Number, order_474_impl);
          auto order_474 = &order_474_impl;
          USE(order_474);
          *order_474 = implicit_cast<TNode<Number>>(t2619);
          // ../../third_party/v8/builtins/array-sort.tq:939:7
          {
            Label label__True_743_impl(this);
            Label* label__True_743 = &label__True_743_impl;
            USE(label__True_743);
            Label label__False_744_impl(this);
            Label* label__False_744 = &label__False_744_impl;
            USE(label__False_744);
            Label label_if_done_label_983_1382_impl(this, {last_ofs_472, offset_473, order_474});
            Label* label_if_done_label_983_1382 = &label_if_done_label_983_1382_impl;
            USE(label_if_done_label_983_1382);
            int31_t t2620 = 0;
            TNode<Number> t2621 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2620)));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_474).value()), implicit_cast<TNode<Number>>(t2621), label__True_743, label__False_744);
            if (label__True_743->is_used())
            {
              BIND(label__True_743);
              // ../../third_party/v8/builtins/array-sort.tq:939:22
              {
                // ../../third_party/v8/builtins/array-sort.tq:944:9
                TNode<Smi> t2622 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2622));
                TVARIABLE(Smi, max_ofs_475_impl);
                auto max_ofs_475 = &max_ofs_475_impl;
                USE(max_ofs_475);
                *max_ofs_475 = implicit_cast<TNode<Smi>>(t2622);
                // ../../third_party/v8/builtins/array-sort.tq:945:9
                {
                  Label label__True_745_impl(this);
                  Label* label__True_745 = &label__True_745_impl;
                  USE(label__True_745);
                  Label label__False_746_impl(this);
                  Label* label__False_746 = &label__False_746_impl;
                  USE(label__False_746);
                  Label label_header_984_1383_impl(this, {last_ofs_472, offset_473, order_474});
                  Label* label_header_984_1383 = &label_header_984_1383_impl;
                  USE(label_header_984_1383);
                  Goto(label_header_984_1383);
                  BIND(label_header_984_1383);
                  TNode<BoolT> t2623 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<TNode<Smi>>((*max_ofs_475).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2623));
                  Branch(implicit_cast<TNode<BoolT>>(t2623), label__True_745, label__False_746);
                  if (label__True_745->is_used())
                  {
                    BIND(label__True_745);
                    // ../../third_party/v8/builtins/array-sort.tq:945:34
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:946:11
                      TNode<HeapObject> t2624 = UncheckedCast<HeapObject>(LoadElementsOrTempArray(implicit_cast<TNode<Oddball>>(p_useTempArray), implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2624));
                      TNode<Smi> t2625 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t2625));
                      TNode<Smi> t2626 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2625), implicit_cast<TNode<Smi>>((*offset_473).value())));
                      USE(implicit_cast<TNode<Smi>>(t2626));
                      TNode<Object> t2627 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(t2624), implicit_cast<TNode<Smi>>(t2626), label_Bailout_742));
                      USE(implicit_cast<TNode<Object>>(t2627));
                      TNode<Object> offset_element_985_impl;
                      auto offset_element_985 = &offset_element_985_impl;
                      USE(offset_element_985);
                      *offset_element_985 = implicit_cast<TNode<Object>>(t2627);
                      // ../../third_party/v8/builtins/array-sort.tq:951:11
                      TNode<Number> t2628 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*offset_element_985)), implicit_cast<TNode<Object>>(p_key), label_Bailout_742));
                      USE(implicit_cast<TNode<Number>>(t2628));
                      *order_474 = implicit_cast<TNode<Number>>(t2628);
                      // ../../third_party/v8/builtins/array-sort.tq:955:11
                      {
                        Label label__True_747_impl(this);
                        Label* label__True_747 = &label__True_747_impl;
                        USE(label__True_747);
                        Label label__False_748_impl(this, {});
                        Label* label__False_748 = &label__False_748_impl;
                        USE(label__False_748);
                        int31_t t2629 = 0;
                        TNode<Number> t2630 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2629)));
                        BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_474).value()), implicit_cast<TNode<Number>>(t2630), label__True_747, label__False_748);
                        if (label__True_747->is_used())
                        {
                          BIND(label__True_747);
                          // ../../third_party/v8/builtins/array-sort.tq:955:27
                          Goto(label__False_746);
                        }
                        BIND(label__False_748);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:957:11
                      *last_ofs_472 = implicit_cast<TNode<Smi>>((*offset_473).value());
                      // ../../third_party/v8/builtins/array-sort.tq:958:11
                      int31_t t2631 = 1;
                      TNode<Smi> t2632 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<int31_t>(t2631)));
                      USE(implicit_cast<TNode<Smi>>(t2632));
                      int31_t t2633 = 1;
                      TNode<Smi> t2634 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2633)));
                      TNode<Smi> t2635 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2632), implicit_cast<TNode<Smi>>(t2634)));
                      USE(implicit_cast<TNode<Smi>>(t2635));
                      *offset_473 = implicit_cast<TNode<Smi>>(t2635);
                      // ../../third_party/v8/builtins/array-sort.tq:961:11
                      {
                        Label label__True_749_impl(this);
                        Label* label__True_749 = &label__True_749_impl;
                        USE(label__True_749);
                        Label label__False_750_impl(this, {offset_473});
                        Label* label__False_750 = &label__False_750_impl;
                        USE(label__False_750);
                        int31_t t2636 = 0;
                        TNode<Smi> t2637 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2636)));
                        TNode<BoolT> t2638 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<TNode<Smi>>(t2637)));
                        USE(implicit_cast<TNode<BoolT>>(t2638));
                        Branch(implicit_cast<TNode<BoolT>>(t2638), label__True_749, label__False_750);
                        if (label__True_749->is_used())
                        {
                          BIND(label__True_749);
                          // ../../third_party/v8/builtins/array-sort.tq:961:28
                          *offset_473 = implicit_cast<TNode<Smi>>((*max_ofs_475).value());
                          Goto(label__False_750);
                        }
                        BIND(label__False_750);
                      }
                    }
                    Goto(label_header_984_1383);
                  }
                  BIND(label__False_746);
                }
                // ../../third_party/v8/builtins/array-sort.tq:964:9
                {
                  Label label__True_751_impl(this);
                  Label* label__True_751 = &label__True_751_impl;
                  USE(label__True_751);
                  Label label__False_752_impl(this, {offset_473});
                  Label* label__False_752 = &label__False_752_impl;
                  USE(label__False_752);
                  TNode<BoolT> t2639 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<TNode<Smi>>((*max_ofs_475).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2639));
                  Branch(implicit_cast<TNode<BoolT>>(t2639), label__True_751, label__False_752);
                  if (label__True_751->is_used())
                  {
                    BIND(label__True_751);
                    // ../../third_party/v8/builtins/array-sort.tq:964:31
                    *offset_473 = implicit_cast<TNode<Smi>>((*max_ofs_475).value());
                    Goto(label__False_752);
                  }
                  BIND(label__False_752);
                }
                // ../../third_party/v8/builtins/array-sort.tq:967:9
                TNode<Smi> t2640 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_472).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2640));
                *last_ofs_472 = implicit_cast<TNode<Smi>>(t2640);
                // ../../third_party/v8/builtins/array-sort.tq:968:9
                TNode<Smi> t2641 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2641));
                *offset_473 = implicit_cast<TNode<Smi>>(t2641);
              }
              Goto(label_if_done_label_983_1382);
            }
            if (label__False_744->is_used())
            {
              BIND(label__False_744);
              // ../../third_party/v8/builtins/array-sort.tq:969:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:972:9
                // ../../third_party/v8/builtins/array-sort.tq:975:9
                int31_t t2642 = 1;
                TNode<Smi> t2643 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2642)));
                TNode<Smi> t2644 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>(t2643)));
                USE(implicit_cast<TNode<Smi>>(t2644));
                TVARIABLE(Smi, max_ofs_476_impl);
                auto max_ofs_476 = &max_ofs_476_impl;
                USE(max_ofs_476);
                *max_ofs_476 = implicit_cast<TNode<Smi>>(t2644);
                // ../../third_party/v8/builtins/array-sort.tq:976:9
                {
                  Label label__True_753_impl(this);
                  Label* label__True_753 = &label__True_753_impl;
                  USE(label__True_753);
                  Label label__False_754_impl(this);
                  Label* label__False_754 = &label__False_754_impl;
                  USE(label__False_754);
                  Label label_header_986_1384_impl(this, {last_ofs_472, offset_473, order_474});
                  Label* label_header_986_1384 = &label_header_986_1384_impl;
                  USE(label_header_986_1384);
                  Goto(label_header_986_1384);
                  BIND(label_header_986_1384);
                  TNode<BoolT> t2645 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<TNode<Smi>>((*max_ofs_476).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2645));
                  Branch(implicit_cast<TNode<BoolT>>(t2645), label__True_753, label__False_754);
                  if (label__True_753->is_used())
                  {
                    BIND(label__True_753);
                    // ../../third_party/v8/builtins/array-sort.tq:976:34
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:977:11
                      TNode<HeapObject> t2646 = UncheckedCast<HeapObject>(LoadElementsOrTempArray(implicit_cast<TNode<Oddball>>(p_useTempArray), implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2646));
                      TNode<Smi> t2647 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t2647));
                      TNode<Smi> t2648 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2647), implicit_cast<TNode<Smi>>((*offset_473).value())));
                      USE(implicit_cast<TNode<Smi>>(t2648));
                      TNode<Object> t2649 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(t2646), implicit_cast<TNode<Smi>>(t2648), label_Bailout_742));
                      USE(implicit_cast<TNode<Object>>(t2649));
                      TNode<Object> offset_element_987_impl;
                      auto offset_element_987 = &offset_element_987_impl;
                      USE(offset_element_987);
                      *offset_element_987 = implicit_cast<TNode<Object>>(t2649);
                      // ../../third_party/v8/builtins/array-sort.tq:982:11
                      TNode<Number> t2650 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*offset_element_987)), implicit_cast<TNode<Object>>(p_key), label_Bailout_742));
                      USE(implicit_cast<TNode<Number>>(t2650));
                      *order_474 = implicit_cast<TNode<Number>>(t2650);
                      // ../../third_party/v8/builtins/array-sort.tq:985:11
                      {
                        Label label__True_755_impl(this);
                        Label* label__True_755 = &label__True_755_impl;
                        USE(label__True_755);
                        Label label__False_756_impl(this, {});
                        Label* label__False_756 = &label__False_756_impl;
                        USE(label__False_756);
                        int31_t t2651 = 0;
                        TNode<Number> t2652 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2651)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_474).value()), implicit_cast<TNode<Number>>(t2652), label__True_755, label__False_756);
                        if (label__True_755->is_used())
                        {
                          BIND(label__True_755);
                          // ../../third_party/v8/builtins/array-sort.tq:985:26
                          Goto(label__False_754);
                        }
                        BIND(label__False_756);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:987:11
                      *last_ofs_472 = implicit_cast<TNode<Smi>>((*offset_473).value());
                      // ../../third_party/v8/builtins/array-sort.tq:988:11
                      int31_t t2653 = 1;
                      TNode<Smi> t2654 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<int31_t>(t2653)));
                      USE(implicit_cast<TNode<Smi>>(t2654));
                      int31_t t2655 = 1;
                      TNode<Smi> t2656 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2655)));
                      TNode<Smi> t2657 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2654), implicit_cast<TNode<Smi>>(t2656)));
                      USE(implicit_cast<TNode<Smi>>(t2657));
                      *offset_473 = implicit_cast<TNode<Smi>>(t2657);
                      // ../../third_party/v8/builtins/array-sort.tq:991:11
                      {
                        Label label__True_757_impl(this);
                        Label* label__True_757 = &label__True_757_impl;
                        USE(label__True_757);
                        Label label__False_758_impl(this, {offset_473});
                        Label* label__False_758 = &label__False_758_impl;
                        USE(label__False_758);
                        int31_t t2658 = 0;
                        TNode<Smi> t2659 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2658)));
                        TNode<BoolT> t2660 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<TNode<Smi>>(t2659)));
                        USE(implicit_cast<TNode<BoolT>>(t2660));
                        Branch(implicit_cast<TNode<BoolT>>(t2660), label__True_757, label__False_758);
                        if (label__True_757->is_used())
                        {
                          BIND(label__True_757);
                          // ../../third_party/v8/builtins/array-sort.tq:991:28
                          *offset_473 = implicit_cast<TNode<Smi>>((*max_ofs_476).value());
                          Goto(label__False_758);
                        }
                        BIND(label__False_758);
                      }
                    }
                    Goto(label_header_986_1384);
                  }
                  BIND(label__False_754);
                }
                // ../../third_party/v8/builtins/array-sort.tq:994:9
                {
                  Label label__True_759_impl(this);
                  Label* label__True_759 = &label__True_759_impl;
                  USE(label__True_759);
                  Label label__False_760_impl(this, {offset_473});
                  Label* label__False_760 = &label__False_760_impl;
                  USE(label__False_760);
                  TNode<BoolT> t2661 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<TNode<Smi>>((*max_ofs_476).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2661));
                  Branch(implicit_cast<TNode<BoolT>>(t2661), label__True_759, label__False_760);
                  if (label__True_759->is_used())
                  {
                    BIND(label__True_759);
                    // ../../third_party/v8/builtins/array-sort.tq:994:31
                    *offset_473 = implicit_cast<TNode<Smi>>((*max_ofs_476).value());
                    Goto(label__False_760);
                  }
                  BIND(label__False_760);
                }
                // ../../third_party/v8/builtins/array-sort.tq:997:9
                TNode<Smi> tmp_988_impl;
                auto tmp_988 = &tmp_988_impl;
                USE(tmp_988);
                *tmp_988 = implicit_cast<TNode<Smi>>((*last_ofs_472).value());
                // ../../third_party/v8/builtins/array-sort.tq:998:9
                TNode<Smi> t2662 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*offset_473).value())));
                USE(implicit_cast<TNode<Smi>>(t2662));
                *last_ofs_472 = implicit_cast<TNode<Smi>>(t2662);
                // ../../third_party/v8/builtins/array-sort.tq:999:9
                TNode<Smi> t2663 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*tmp_988))));
                USE(implicit_cast<TNode<Smi>>(t2663));
                *offset_473 = implicit_cast<TNode<Smi>>(t2663);
              }
              Goto(label_if_done_label_983_1382);
            }
            BIND(label_if_done_label_983_1382);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1002:7
          // ../../third_party/v8/builtins/array-sort.tq:1008:7
          TNode<Smi> t2664 = implicit_cast<TNode<Smi>>((*last_ofs_472).value());
          USE(t2664);
          TNode<Smi> t2665 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2666 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_472).value()), implicit_cast<TNode<Smi>>(t2665)));
          *last_ofs_472 = implicit_cast<TNode<Smi>>(t2666);
          // ../../third_party/v8/builtins/array-sort.tq:1009:7
          {
            Label label__True_761_impl(this);
            Label* label__True_761 = &label__True_761_impl;
            USE(label__True_761);
            Label label__False_762_impl(this);
            Label* label__False_762 = &label__False_762_impl;
            USE(label__False_762);
            Label label_header_989_1385_impl(this, {last_ofs_472, offset_473, order_474});
            Label* label_header_989_1385 = &label_header_989_1385_impl;
            USE(label_header_989_1385);
            Goto(label_header_989_1385);
            BIND(label_header_989_1385);
            TNode<BoolT> t2667 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*last_ofs_472).value()), implicit_cast<TNode<Smi>>((*offset_473).value())));
            USE(implicit_cast<TNode<BoolT>>(t2667));
            Branch(implicit_cast<TNode<BoolT>>(t2667), label__True_761, label__False_762);
            if (label__True_761->is_used())
            {
              BIND(label__True_761);
              // ../../third_party/v8/builtins/array-sort.tq:1009:33
              {
                // ../../third_party/v8/builtins/array-sort.tq:1010:9
                TNode<Smi> t2668 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*offset_473).value()), implicit_cast<TNode<Smi>>((*last_ofs_472).value())));
                USE(implicit_cast<TNode<Smi>>(t2668));
                int31_t t2669 = 1;
                TNode<Smi> t2670 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t2668), implicit_cast<int31_t>(t2669)));
                USE(implicit_cast<TNode<Smi>>(t2670));
                TNode<Smi> t2671 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_472).value()), implicit_cast<TNode<Smi>>(t2670)));
                USE(implicit_cast<TNode<Smi>>(t2671));
                TNode<Smi> m_990_impl;
                auto m_990 = &m_990_impl;
                USE(m_990);
                *m_990 = implicit_cast<TNode<Smi>>(t2671);
                // ../../third_party/v8/builtins/array-sort.tq:1012:9
                TNode<HeapObject> t2672 = UncheckedCast<HeapObject>(LoadElementsOrTempArray(implicit_cast<TNode<Oddball>>(p_useTempArray), implicit_cast<TNode<FixedArray>>(p_sortState)));
                USE(implicit_cast<TNode<HeapObject>>(t2672));
                TNode<Smi> t2673 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>((*m_990))));
                USE(implicit_cast<TNode<Smi>>(t2673));
                TNode<Object> t2674 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(t2672), implicit_cast<TNode<Smi>>(t2673), label_Bailout_742));
                USE(implicit_cast<TNode<Object>>(t2674));
                TNode<Object> base_m_element_991_impl;
                auto base_m_element_991 = &base_m_element_991_impl;
                USE(base_m_element_991);
                *base_m_element_991 = implicit_cast<TNode<Object>>(t2674);
                // ../../third_party/v8/builtins/array-sort.tq:1016:9
                TNode<Number> t2675 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*base_m_element_991)), implicit_cast<TNode<Object>>(p_key), label_Bailout_742));
                USE(implicit_cast<TNode<Number>>(t2675));
                *order_474 = implicit_cast<TNode<Number>>(t2675);
                // ../../third_party/v8/builtins/array-sort.tq:1019:9
                {
                  Label label__True_763_impl(this);
                  Label* label__True_763 = &label__True_763_impl;
                  USE(label__True_763);
                  Label label__False_764_impl(this);
                  Label* label__False_764 = &label__False_764_impl;
                  USE(label__False_764);
                  Label label_if_done_label_992_1386_impl(this, {last_ofs_472, offset_473});
                  Label* label_if_done_label_992_1386 = &label_if_done_label_992_1386_impl;
                  USE(label_if_done_label_992_1386);
                  int31_t t2676 = 0;
                  TNode<Number> t2677 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2676)));
                  BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_474).value()), implicit_cast<TNode<Number>>(t2677), label__True_763, label__False_764);
                  if (label__True_763->is_used())
                  {
                    BIND(label__True_763);
                    // ../../third_party/v8/builtins/array-sort.tq:1019:24
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1020:11
                      int31_t t2678 = 1;
                      TNode<Smi> t2679 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2678)));
                      TNode<Smi> t2680 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*m_990)), implicit_cast<TNode<Smi>>(t2679)));
                      USE(implicit_cast<TNode<Smi>>(t2680));
                      *last_ofs_472 = implicit_cast<TNode<Smi>>(t2680);
                    }
                    Goto(label_if_done_label_992_1386);
                  }
                  if (label__False_764->is_used())
                  {
                    BIND(label__False_764);
                    // ../../third_party/v8/builtins/array-sort.tq:1021:16
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1022:11
                      *offset_473 = implicit_cast<TNode<Smi>>((*m_990));
                    }
                    Goto(label_if_done_label_992_1386);
                  }
                  BIND(label_if_done_label_992_1386);
                }
              }
              Goto(label_header_989_1385);
            }
            BIND(label__False_762);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1026:7
          // ../../third_party/v8/builtins/array-sort.tq:1027:7
          // ../../third_party/v8/builtins/array-sort.tq:1028:7
          Return(implicit_cast<TNode<Smi>>((*offset_473).value()));
        }
      }
      if (label_Bailout_742->is_used())
      {
        BIND(label_Bailout_742);
        // ../../third_party/v8/builtins/array-sort.tq:1030:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1031:7
          TNode<Smi> t2681 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2681));
          Return(implicit_cast<TNode<Smi>>(t2681));
        }
      }
    }
  }
}

TF_BUILTIN(GallopRight, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Code> p_Load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_Load);
  TNode<Object> p_key = UncheckedCast<Object>(Parameter(Descriptor::kKey));
  USE(p_key);
  TNode<Smi> p_base = UncheckedCast<Smi>(Parameter(Descriptor::kBase));
  USE(p_base);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Smi> p_hint = UncheckedCast<Smi>(Parameter(Descriptor::kHint));
  USE(p_hint);
  TNode<Oddball> p_useTempArray = UncheckedCast<Oddball>(Parameter(Descriptor::kUseTempArray));
  USE(p_useTempArray);
  // ../../third_party/v8/builtins/array-sort.tq:1046:70
  {
    // ../../third_party/v8/builtins/array-sort.tq:1047:5
    // ../../third_party/v8/builtins/array-sort.tq:1048:5
    // ../../third_party/v8/builtins/array-sort.tq:1050:5
    int31_t t2682 = 0;
    TVARIABLE(Smi, last_ofs_477_impl);
    auto last_ofs_477 = &last_ofs_477_impl;
    USE(last_ofs_477);
    TNode<Smi> t2683 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2682)));
    *last_ofs_477 = implicit_cast<TNode<Smi>>(t2683);
    // ../../third_party/v8/builtins/array-sort.tq:1051:5
    int31_t t2684 = 1;
    TVARIABLE(Smi, offset_478_impl);
    auto offset_478 = &offset_478_impl;
    USE(offset_478);
    TNode<Smi> t2685 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2684)));
    *offset_478 = implicit_cast<TNode<Smi>>(t2685);
    // ../../third_party/v8/builtins/array-sort.tq:1053:5
    {
      Label label_try_done_993_1387_impl(this);
      Label* label_try_done_993_1387 = &label_try_done_993_1387_impl;
      USE(label_try_done_993_1387);
      Label label_Bailout_765_impl(this);
      Label* label_Bailout_765 = &label_Bailout_765_impl;
      USE(label_Bailout_765);
      Label label_try_begin_994_1388_impl(this);
      Label* label_try_begin_994_1388 = &label_try_begin_994_1388_impl;
      USE(label_try_begin_994_1388);
      Goto(label_try_begin_994_1388);
      if (label_try_begin_994_1388->is_used())
      {
        BIND(label_try_begin_994_1388);
        // ../../third_party/v8/builtins/array-sort.tq:1053:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1054:7
          TNode<HeapObject> t2686 = UncheckedCast<HeapObject>(LoadElementsOrTempArray(implicit_cast<TNode<Oddball>>(p_useTempArray), implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<HeapObject>>(t2686));
          TNode<Smi> t2687 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
          USE(implicit_cast<TNode<Smi>>(t2687));
          TNode<Object> t2688 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(t2686), implicit_cast<TNode<Smi>>(t2687), label_Bailout_765));
          USE(implicit_cast<TNode<Object>>(t2688));
          TNode<Object> base_hint_element_995_impl;
          auto base_hint_element_995 = &base_hint_element_995_impl;
          USE(base_hint_element_995);
          *base_hint_element_995 = implicit_cast<TNode<Object>>(t2688);
          // ../../third_party/v8/builtins/array-sort.tq:1058:7
          TNode<Number> t2689 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*base_hint_element_995)), label_Bailout_765));
          USE(implicit_cast<TNode<Number>>(t2689));
          TVARIABLE(Number, order_479_impl);
          auto order_479 = &order_479_impl;
          USE(order_479);
          *order_479 = implicit_cast<TNode<Number>>(t2689);
          // ../../third_party/v8/builtins/array-sort.tq:1062:7
          {
            Label label__True_766_impl(this);
            Label* label__True_766 = &label__True_766_impl;
            USE(label__True_766);
            Label label__False_767_impl(this);
            Label* label__False_767 = &label__False_767_impl;
            USE(label__False_767);
            Label label_if_done_label_996_1389_impl(this, {last_ofs_477, offset_478, order_479});
            Label* label_if_done_label_996_1389 = &label_if_done_label_996_1389_impl;
            USE(label_if_done_label_996_1389);
            int31_t t2690 = 0;
            TNode<Number> t2691 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2690)));
            BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_479).value()), implicit_cast<TNode<Number>>(t2691), label__True_766, label__False_767);
            if (label__True_766->is_used())
            {
              BIND(label__True_766);
              // ../../third_party/v8/builtins/array-sort.tq:1062:22
              {
                // ../../third_party/v8/builtins/array-sort.tq:1067:9
                int31_t t2692 = 1;
                TNode<Smi> t2693 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2692)));
                TNode<Smi> t2694 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>(t2693)));
                USE(implicit_cast<TNode<Smi>>(t2694));
                TVARIABLE(Smi, max_ofs_480_impl);
                auto max_ofs_480 = &max_ofs_480_impl;
                USE(max_ofs_480);
                *max_ofs_480 = implicit_cast<TNode<Smi>>(t2694);
                // ../../third_party/v8/builtins/array-sort.tq:1068:9
                {
                  Label label__True_768_impl(this);
                  Label* label__True_768 = &label__True_768_impl;
                  USE(label__True_768);
                  Label label__False_769_impl(this);
                  Label* label__False_769 = &label__False_769_impl;
                  USE(label__False_769);
                  Label label_header_997_1390_impl(this, {last_ofs_477, offset_478, order_479});
                  Label* label_header_997_1390 = &label_header_997_1390_impl;
                  USE(label_header_997_1390);
                  Goto(label_header_997_1390);
                  BIND(label_header_997_1390);
                  TNode<BoolT> t2695 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<TNode<Smi>>((*max_ofs_480).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2695));
                  Branch(implicit_cast<TNode<BoolT>>(t2695), label__True_768, label__False_769);
                  if (label__True_768->is_used())
                  {
                    BIND(label__True_768);
                    // ../../third_party/v8/builtins/array-sort.tq:1068:34
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1069:11
                      TNode<HeapObject> t2696 = UncheckedCast<HeapObject>(LoadElementsOrTempArray(implicit_cast<TNode<Oddball>>(p_useTempArray), implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2696));
                      TNode<Smi> t2697 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t2697));
                      TNode<Smi> t2698 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2697), implicit_cast<TNode<Smi>>((*offset_478).value())));
                      USE(implicit_cast<TNode<Smi>>(t2698));
                      TNode<Object> t2699 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(t2696), implicit_cast<TNode<Smi>>(t2698), label_Bailout_765));
                      USE(implicit_cast<TNode<Object>>(t2699));
                      TNode<Object> offset_element_998_impl;
                      auto offset_element_998 = &offset_element_998_impl;
                      USE(offset_element_998);
                      *offset_element_998 = implicit_cast<TNode<Object>>(t2699);
                      // ../../third_party/v8/builtins/array-sort.tq:1074:11
                      TNode<Number> t2700 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*offset_element_998)), label_Bailout_765));
                      USE(implicit_cast<TNode<Number>>(t2700));
                      *order_479 = implicit_cast<TNode<Number>>(t2700);
                      // ../../third_party/v8/builtins/array-sort.tq:1077:11
                      {
                        Label label__True_770_impl(this);
                        Label* label__True_770 = &label__True_770_impl;
                        USE(label__True_770);
                        Label label__False_771_impl(this, {});
                        Label* label__False_771 = &label__False_771_impl;
                        USE(label__False_771);
                        int31_t t2701 = 0;
                        TNode<Number> t2702 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2701)));
                        BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*order_479).value()), implicit_cast<TNode<Number>>(t2702), label__True_770, label__False_771);
                        if (label__True_770->is_used())
                        {
                          BIND(label__True_770);
                          // ../../third_party/v8/builtins/array-sort.tq:1077:27
                          Goto(label__False_769);
                        }
                        BIND(label__False_771);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1079:11
                      *last_ofs_477 = implicit_cast<TNode<Smi>>((*offset_478).value());
                      // ../../third_party/v8/builtins/array-sort.tq:1080:11
                      int31_t t2703 = 1;
                      TNode<Smi> t2704 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<int31_t>(t2703)));
                      USE(implicit_cast<TNode<Smi>>(t2704));
                      int31_t t2705 = 1;
                      TNode<Smi> t2706 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2705)));
                      TNode<Smi> t2707 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2704), implicit_cast<TNode<Smi>>(t2706)));
                      USE(implicit_cast<TNode<Smi>>(t2707));
                      *offset_478 = implicit_cast<TNode<Smi>>(t2707);
                      // ../../third_party/v8/builtins/array-sort.tq:1083:11
                      {
                        Label label__True_772_impl(this);
                        Label* label__True_772 = &label__True_772_impl;
                        USE(label__True_772);
                        Label label__False_773_impl(this, {offset_478});
                        Label* label__False_773 = &label__False_773_impl;
                        USE(label__False_773);
                        int31_t t2708 = 0;
                        TNode<Smi> t2709 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2708)));
                        TNode<BoolT> t2710 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<TNode<Smi>>(t2709)));
                        USE(implicit_cast<TNode<BoolT>>(t2710));
                        Branch(implicit_cast<TNode<BoolT>>(t2710), label__True_772, label__False_773);
                        if (label__True_772->is_used())
                        {
                          BIND(label__True_772);
                          // ../../third_party/v8/builtins/array-sort.tq:1083:28
                          *offset_478 = implicit_cast<TNode<Smi>>((*max_ofs_480).value());
                          Goto(label__False_773);
                        }
                        BIND(label__False_773);
                      }
                    }
                    Goto(label_header_997_1390);
                  }
                  BIND(label__False_769);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1086:9
                {
                  Label label__True_774_impl(this);
                  Label* label__True_774 = &label__True_774_impl;
                  USE(label__True_774);
                  Label label__False_775_impl(this, {offset_478});
                  Label* label__False_775 = &label__False_775_impl;
                  USE(label__False_775);
                  TNode<BoolT> t2711 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<TNode<Smi>>((*max_ofs_480).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2711));
                  Branch(implicit_cast<TNode<BoolT>>(t2711), label__True_774, label__False_775);
                  if (label__True_774->is_used())
                  {
                    BIND(label__True_774);
                    // ../../third_party/v8/builtins/array-sort.tq:1086:31
                    *offset_478 = implicit_cast<TNode<Smi>>((*max_ofs_480).value());
                    Goto(label__False_775);
                  }
                  BIND(label__False_775);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1089:9
                TNode<Smi> tmp_999_impl;
                auto tmp_999 = &tmp_999_impl;
                USE(tmp_999);
                *tmp_999 = implicit_cast<TNode<Smi>>((*last_ofs_477).value());
                // ../../third_party/v8/builtins/array-sort.tq:1090:9
                TNode<Smi> t2712 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*offset_478).value())));
                USE(implicit_cast<TNode<Smi>>(t2712));
                *last_ofs_477 = implicit_cast<TNode<Smi>>(t2712);
                // ../../third_party/v8/builtins/array-sort.tq:1091:9
                TNode<Smi> t2713 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_hint), implicit_cast<TNode<Smi>>((*tmp_999))));
                USE(implicit_cast<TNode<Smi>>(t2713));
                *offset_478 = implicit_cast<TNode<Smi>>(t2713);
              }
              Goto(label_if_done_label_996_1389);
            }
            if (label__False_767->is_used())
            {
              BIND(label__False_767);
              // ../../third_party/v8/builtins/array-sort.tq:1092:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:1097:9
                TNode<Smi> t2714 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2714));
                TVARIABLE(Smi, max_ofs_481_impl);
                auto max_ofs_481 = &max_ofs_481_impl;
                USE(max_ofs_481);
                *max_ofs_481 = implicit_cast<TNode<Smi>>(t2714);
                // ../../third_party/v8/builtins/array-sort.tq:1098:9
                {
                  Label label__True_776_impl(this);
                  Label* label__True_776 = &label__True_776_impl;
                  USE(label__True_776);
                  Label label__False_777_impl(this);
                  Label* label__False_777 = &label__False_777_impl;
                  USE(label__False_777);
                  Label label_header_1000_1391_impl(this, {last_ofs_477, offset_478, order_479});
                  Label* label_header_1000_1391 = &label_header_1000_1391_impl;
                  USE(label_header_1000_1391);
                  Goto(label_header_1000_1391);
                  BIND(label_header_1000_1391);
                  TNode<BoolT> t2715 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<TNode<Smi>>((*max_ofs_481).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2715));
                  Branch(implicit_cast<TNode<BoolT>>(t2715), label__True_776, label__False_777);
                  if (label__True_776->is_used())
                  {
                    BIND(label__True_776);
                    // ../../third_party/v8/builtins/array-sort.tq:1098:34
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1099:11
                      TNode<HeapObject> t2716 = UncheckedCast<HeapObject>(LoadElementsOrTempArray(implicit_cast<TNode<Oddball>>(p_useTempArray), implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2716));
                      TNode<Smi> t2717 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>(p_hint)));
                      USE(implicit_cast<TNode<Smi>>(t2717));
                      TNode<Smi> t2718 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2717), implicit_cast<TNode<Smi>>((*offset_478).value())));
                      USE(implicit_cast<TNode<Smi>>(t2718));
                      TNode<Object> t2719 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(t2716), implicit_cast<TNode<Smi>>(t2718), label_Bailout_765));
                      USE(implicit_cast<TNode<Object>>(t2719));
                      TNode<Object> offset_element_1001_impl;
                      auto offset_element_1001 = &offset_element_1001_impl;
                      USE(offset_element_1001);
                      *offset_element_1001 = implicit_cast<TNode<Object>>(t2719);
                      // ../../third_party/v8/builtins/array-sort.tq:1104:11
                      TNode<Number> t2720 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*offset_element_1001)), label_Bailout_765));
                      USE(implicit_cast<TNode<Number>>(t2720));
                      *order_479 = implicit_cast<TNode<Number>>(t2720);
                      // ../../third_party/v8/builtins/array-sort.tq:1108:11
                      {
                        Label label__True_778_impl(this);
                        Label* label__True_778 = &label__True_778_impl;
                        USE(label__True_778);
                        Label label__False_779_impl(this, {});
                        Label* label__False_779 = &label__False_779_impl;
                        USE(label__False_779);
                        int31_t t2721 = 0;
                        TNode<Number> t2722 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2721)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_479).value()), implicit_cast<TNode<Number>>(t2722), label__True_778, label__False_779);
                        if (label__True_778->is_used())
                        {
                          BIND(label__True_778);
                          // ../../third_party/v8/builtins/array-sort.tq:1108:26
                          Goto(label__False_777);
                        }
                        BIND(label__False_779);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1110:11
                      *last_ofs_477 = implicit_cast<TNode<Smi>>((*offset_478).value());
                      // ../../third_party/v8/builtins/array-sort.tq:1111:11
                      int31_t t2723 = 1;
                      TNode<Smi> t2724 = UncheckedCast<Smi>(SmiShl(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<int31_t>(t2723)));
                      USE(implicit_cast<TNode<Smi>>(t2724));
                      int31_t t2725 = 1;
                      TNode<Smi> t2726 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2725)));
                      TNode<Smi> t2727 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t2724), implicit_cast<TNode<Smi>>(t2726)));
                      USE(implicit_cast<TNode<Smi>>(t2727));
                      *offset_478 = implicit_cast<TNode<Smi>>(t2727);
                      // ../../third_party/v8/builtins/array-sort.tq:1114:11
                      {
                        Label label__True_780_impl(this);
                        Label* label__True_780 = &label__True_780_impl;
                        USE(label__True_780);
                        Label label__False_781_impl(this, {offset_478});
                        Label* label__False_781 = &label__False_781_impl;
                        USE(label__False_781);
                        int31_t t2728 = 0;
                        TNode<Smi> t2729 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2728)));
                        TNode<BoolT> t2730 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<TNode<Smi>>(t2729)));
                        USE(implicit_cast<TNode<BoolT>>(t2730));
                        Branch(implicit_cast<TNode<BoolT>>(t2730), label__True_780, label__False_781);
                        if (label__True_780->is_used())
                        {
                          BIND(label__True_780);
                          // ../../third_party/v8/builtins/array-sort.tq:1114:28
                          *offset_478 = implicit_cast<TNode<Smi>>((*max_ofs_481).value());
                          Goto(label__False_781);
                        }
                        BIND(label__False_781);
                      }
                    }
                    Goto(label_header_1000_1391);
                  }
                  BIND(label__False_777);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1117:9
                {
                  Label label__True_782_impl(this);
                  Label* label__True_782 = &label__True_782_impl;
                  USE(label__True_782);
                  Label label__False_783_impl(this, {offset_478});
                  Label* label__False_783 = &label__False_783_impl;
                  USE(label__False_783);
                  TNode<BoolT> t2731 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<TNode<Smi>>((*max_ofs_481).value())));
                  USE(implicit_cast<TNode<BoolT>>(t2731));
                  Branch(implicit_cast<TNode<BoolT>>(t2731), label__True_782, label__False_783);
                  if (label__True_782->is_used())
                  {
                    BIND(label__True_782);
                    // ../../third_party/v8/builtins/array-sort.tq:1117:31
                    *offset_478 = implicit_cast<TNode<Smi>>((*max_ofs_481).value());
                    Goto(label__False_783);
                  }
                  BIND(label__False_783);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1120:9
                TNode<Smi> t2732 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_477).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2732));
                *last_ofs_477 = implicit_cast<TNode<Smi>>(t2732);
                // ../../third_party/v8/builtins/array-sort.tq:1121:9
                TNode<Smi> t2733 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<TNode<Smi>>(p_hint)));
                USE(implicit_cast<TNode<Smi>>(t2733));
                *offset_478 = implicit_cast<TNode<Smi>>(t2733);
              }
              Goto(label_if_done_label_996_1389);
            }
            BIND(label_if_done_label_996_1389);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1123:7
          // ../../third_party/v8/builtins/array-sort.tq:1129:7
          TNode<Smi> t2734 = implicit_cast<TNode<Smi>>((*last_ofs_477).value());
          USE(t2734);
          TNode<Smi> t2735 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t2736 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_477).value()), implicit_cast<TNode<Smi>>(t2735)));
          *last_ofs_477 = implicit_cast<TNode<Smi>>(t2736);
          // ../../third_party/v8/builtins/array-sort.tq:1130:7
          {
            Label label__True_784_impl(this);
            Label* label__True_784 = &label__True_784_impl;
            USE(label__True_784);
            Label label__False_785_impl(this);
            Label* label__False_785 = &label__False_785_impl;
            USE(label__False_785);
            Label label_header_1002_1392_impl(this, {last_ofs_477, offset_478, order_479});
            Label* label_header_1002_1392 = &label_header_1002_1392_impl;
            USE(label_header_1002_1392);
            Goto(label_header_1002_1392);
            BIND(label_header_1002_1392);
            TNode<BoolT> t2737 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*last_ofs_477).value()), implicit_cast<TNode<Smi>>((*offset_478).value())));
            USE(implicit_cast<TNode<BoolT>>(t2737));
            Branch(implicit_cast<TNode<BoolT>>(t2737), label__True_784, label__False_785);
            if (label__True_784->is_used())
            {
              BIND(label__True_784);
              // ../../third_party/v8/builtins/array-sort.tq:1130:33
              {
                // ../../third_party/v8/builtins/array-sort.tq:1131:9
                TNode<Smi> t2738 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*offset_478).value()), implicit_cast<TNode<Smi>>((*last_ofs_477).value())));
                USE(implicit_cast<TNode<Smi>>(t2738));
                int31_t t2739 = 1;
                TNode<Smi> t2740 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>(t2738), implicit_cast<int31_t>(t2739)));
                USE(implicit_cast<TNode<Smi>>(t2740));
                TNode<Smi> t2741 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*last_ofs_477).value()), implicit_cast<TNode<Smi>>(t2740)));
                USE(implicit_cast<TNode<Smi>>(t2741));
                TNode<Smi> m_1003_impl;
                auto m_1003 = &m_1003_impl;
                USE(m_1003);
                *m_1003 = implicit_cast<TNode<Smi>>(t2741);
                // ../../third_party/v8/builtins/array-sort.tq:1133:9
                TNode<HeapObject> t2742 = UncheckedCast<HeapObject>(LoadElementsOrTempArray(implicit_cast<TNode<Oddball>>(p_useTempArray), implicit_cast<TNode<FixedArray>>(p_sortState)));
                USE(implicit_cast<TNode<HeapObject>>(t2742));
                TNode<Smi> t2743 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_base), implicit_cast<TNode<Smi>>((*m_1003))));
                USE(implicit_cast<TNode<Smi>>(t2743));
                TNode<Object> t2744 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(t2742), implicit_cast<TNode<Smi>>(t2743), label_Bailout_765));
                USE(implicit_cast<TNode<Object>>(t2744));
                TNode<Object> base_m_element_1004_impl;
                auto base_m_element_1004 = &base_m_element_1004_impl;
                USE(base_m_element_1004);
                *base_m_element_1004 = implicit_cast<TNode<Object>>(t2744);
                // ../../third_party/v8/builtins/array-sort.tq:1137:9
                TNode<Number> t2745 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(p_key), implicit_cast<TNode<Object>>((*base_m_element_1004)), label_Bailout_765));
                USE(implicit_cast<TNode<Number>>(t2745));
                *order_479 = implicit_cast<TNode<Number>>(t2745);
                // ../../third_party/v8/builtins/array-sort.tq:1140:9
                {
                  Label label__True_786_impl(this);
                  Label* label__True_786 = &label__True_786_impl;
                  USE(label__True_786);
                  Label label__False_787_impl(this);
                  Label* label__False_787 = &label__False_787_impl;
                  USE(label__False_787);
                  Label label_if_done_label_1005_1393_impl(this, {last_ofs_477, offset_478});
                  Label* label_if_done_label_1005_1393 = &label_if_done_label_1005_1393_impl;
                  USE(label_if_done_label_1005_1393);
                  int31_t t2746 = 0;
                  TNode<Number> t2747 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2746)));
                  BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_479).value()), implicit_cast<TNode<Number>>(t2747), label__True_786, label__False_787);
                  if (label__True_786->is_used())
                  {
                    BIND(label__True_786);
                    // ../../third_party/v8/builtins/array-sort.tq:1140:24
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1141:11
                      *offset_478 = implicit_cast<TNode<Smi>>((*m_1003));
                    }
                    Goto(label_if_done_label_1005_1393);
                  }
                  if (label__False_787->is_used())
                  {
                    BIND(label__False_787);
                    // ../../third_party/v8/builtins/array-sort.tq:1142:16
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1143:11
                      int31_t t2748 = 1;
                      TNode<Smi> t2749 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2748)));
                      TNode<Smi> t2750 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*m_1003)), implicit_cast<TNode<Smi>>(t2749)));
                      USE(implicit_cast<TNode<Smi>>(t2750));
                      *last_ofs_477 = implicit_cast<TNode<Smi>>(t2750);
                    }
                    Goto(label_if_done_label_1005_1393);
                  }
                  BIND(label_if_done_label_1005_1393);
                }
              }
              Goto(label_header_1002_1392);
            }
            BIND(label__False_785);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1147:7
          // ../../third_party/v8/builtins/array-sort.tq:1148:7
          // ../../third_party/v8/builtins/array-sort.tq:1149:7
          Return(implicit_cast<TNode<Smi>>((*offset_478).value()));
        }
      }
      if (label_Bailout_765->is_used())
      {
        BIND(label_Bailout_765);
        // ../../third_party/v8/builtins/array-sort.tq:1151:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1152:7
          TNode<Smi> t2751 = UncheckedCast<Smi>(Failure(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t2751));
          Return(implicit_cast<TNode<Smi>>(t2751));
        }
      }
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::CopyElement(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Code> p_Load, TNode<Code> p_Store, TNode<HeapObject> p_elements, TNode<Smi> p_from, TNode<Smi> p_to, Label* label_Bailout_788) {
  Label label_macro_end_1394_impl(this, {});
  Label* label_macro_end_1394 = &label_macro_end_1394_impl;
  USE(label_macro_end_1394);
  // ../../third_party/v8/builtins/array-sort.tq:1160:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1161:5
    TNode<Object> t2752 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Load), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_from), label_Bailout_788));
    USE(implicit_cast<TNode<Object>>(t2752));
    TNode<Object> element_1006_impl;
    auto element_1006 = &element_1006_impl;
    USE(element_1006);
    *element_1006 = implicit_cast<TNode<Object>>(t2752);
    // ../../third_party/v8/builtins/array-sort.tq:1163:5
    CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(p_Store), implicit_cast<TNode<HeapObject>>(p_elements), implicit_cast<TNode<Smi>>(p_to), implicit_cast<TNode<Object>>((*element_1006)), label_Bailout_788);
  }
}

void ArrayBuiltinsFromDSLAssembler::MergeLow(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthA, TNode<Smi> p_baseB, TNode<Smi> p_lengthB, Label* label_Bailout_789) {
  Label label_macro_end_1395_impl(this, {});
  Label* label_macro_end_1395 = &label_macro_end_1395_impl;
  USE(label_macro_end_1395);
  // ../../third_party/v8/builtins/array-sort.tq:1176:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1177:5
    // ../../third_party/v8/builtins/array-sort.tq:1178:5
    // ../../third_party/v8/builtins/array-sort.tq:1179:5
    // ../../third_party/v8/builtins/array-sort.tq:1181:5
    TVARIABLE(Smi, length_a_482_impl);
    auto length_a_482 = &length_a_482_impl;
    USE(length_a_482);
    *length_a_482 = implicit_cast<TNode<Smi>>(p_lengthA);
    // ../../third_party/v8/builtins/array-sort.tq:1182:5
    TVARIABLE(Smi, length_b_483_impl);
    auto length_b_483 = &length_b_483_impl;
    USE(length_b_483);
    *length_b_483 = implicit_cast<TNode<Smi>>(p_lengthB);
    // ../../third_party/v8/builtins/array-sort.tq:1184:5
    TNode<HeapObject> t2753 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2753));
    TVARIABLE(HeapObject, elements_484_impl);
    auto elements_484 = &elements_484_impl;
    USE(elements_484);
    *elements_484 = implicit_cast<TNode<HeapObject>>(t2753);
    // ../../third_party/v8/builtins/array-sort.tq:1185:5
    TNode<Code> t2754 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2754));
    TNode<Code> LoadF_1007_impl;
    auto LoadF_1007 = &LoadF_1007_impl;
    USE(LoadF_1007);
    *LoadF_1007 = implicit_cast<TNode<Code>>(t2754);
    // ../../third_party/v8/builtins/array-sort.tq:1186:5
    TNode<Code> t2755 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2755));
    TNode<Code> Store_1008_impl;
    auto Store_1008 = &Store_1008_impl;
    USE(Store_1008);
    *Store_1008 = implicit_cast<TNode<Code>>(t2755);
    // ../../third_party/v8/builtins/array-sort.tq:1188:5
    TNode<FixedArray> t2756 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*length_a_482).value())));
    USE(implicit_cast<TNode<FixedArray>>(t2756));
    TNode<FixedArray> temp_array_1009_impl;
    auto temp_array_1009 = &temp_array_1009_impl;
    USE(temp_array_1009);
    *temp_array_1009 = implicit_cast<TNode<FixedArray>>(t2756);
    // ../../third_party/v8/builtins/array-sort.tq:1189:5
    int31_t t2757 = 0;
    TNode<Smi> t2758 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2757)));
    CopyToTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1007)), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<FixedArray>>((*temp_array_1009)), implicit_cast<TNode<Smi>>(t2758), implicit_cast<TNode<Smi>>((*length_a_482).value()), label_Bailout_789);
    // ../../third_party/v8/builtins/array-sort.tq:1193:5
    TVARIABLE(Smi, dest_485_impl);
    auto dest_485 = &dest_485_impl;
    USE(dest_485);
    *dest_485 = implicit_cast<TNode<Smi>>(p_baseA);
    // ../../third_party/v8/builtins/array-sort.tq:1194:5
    int31_t t2759 = 0;
    TVARIABLE(Smi, cursor_temp_486_impl);
    auto cursor_temp_486 = &cursor_temp_486_impl;
    USE(cursor_temp_486);
    TNode<Smi> t2760 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2759)));
    *cursor_temp_486 = implicit_cast<TNode<Smi>>(t2760);
    // ../../third_party/v8/builtins/array-sort.tq:1195:5
    TVARIABLE(Smi, cursor_b_487_impl);
    auto cursor_b_487 = &cursor_b_487_impl;
    USE(cursor_b_487);
    *cursor_b_487 = implicit_cast<TNode<Smi>>(p_baseB);
    // ../../third_party/v8/builtins/array-sort.tq:1197:5
    TNode<Smi> t2761 = implicit_cast<TNode<Smi>>((*cursor_b_487).value());
    USE(t2761);
    TNode<Smi> t2762 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t2763 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_b_487).value()), implicit_cast<TNode<Smi>>(t2762)));
    *cursor_b_487 = implicit_cast<TNode<Smi>>(t2763);
    TNode<Smi> t2764 = implicit_cast<TNode<Smi>>((*dest_485).value());
    USE(t2764);
    TNode<Smi> t2765 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t2766 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>(t2765)));
    *dest_485 = implicit_cast<TNode<Smi>>(t2766);
    CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1007)), implicit_cast<TNode<Code>>((*Store_1008)), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>(t2761), implicit_cast<TNode<Smi>>(t2764), label_Bailout_789);
    // ../../third_party/v8/builtins/array-sort.tq:1200:5
    {
      Label label_try_done_1010_1396_impl(this);
      Label* label_try_done_1010_1396 = &label_try_done_1010_1396_impl;
      USE(label_try_done_1010_1396);
      Label label_Succeed_790_impl(this);
      Label* label_Succeed_790 = &label_Succeed_790_impl;
      USE(label_Succeed_790);
      Label label_CopyB_791_impl(this);
      Label* label_CopyB_791 = &label_CopyB_791_impl;
      USE(label_CopyB_791);
      Label label_try_begin_1011_1397_impl(this);
      Label* label_try_begin_1011_1397 = &label_try_begin_1011_1397_impl;
      USE(label_try_begin_1011_1397);
      Goto(label_try_begin_1011_1397);
      if (label_try_begin_1011_1397->is_used())
      {
        BIND(label_try_begin_1011_1397);
        // ../../third_party/v8/builtins/array-sort.tq:1200:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1201:7
          {
            Label label__True_792_impl(this);
            Label* label__True_792 = &label__True_792_impl;
            USE(label__True_792);
            Label label__False_793_impl(this, {length_b_483});
            Label* label__False_793 = &label__False_793_impl;
            USE(label__False_793);
            TNode<Smi> t2767 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t2768 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_483).value()), implicit_cast<TNode<Smi>>(t2767)));
            *length_b_483 = implicit_cast<TNode<Smi>>(t2768);
            int31_t t2769 = 0;
            TNode<Smi> t2770 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2769)));
            TNode<BoolT> t2771 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2768), implicit_cast<TNode<Smi>>(t2770)));
            USE(implicit_cast<TNode<BoolT>>(t2771));
            Branch(implicit_cast<TNode<BoolT>>(t2771), label__True_792, label__False_793);
            if (label__True_792->is_used())
            {
              BIND(label__True_792);
              // ../../third_party/v8/builtins/array-sort.tq:1201:28
              Goto(label_Succeed_790);
            }
            BIND(label__False_793);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1202:7
          {
            Label label__True_794_impl(this);
            Label* label__True_794 = &label__True_794_impl;
            USE(label__True_794);
            Label label__False_795_impl(this, {});
            Label* label__False_795 = &label__False_795_impl;
            USE(label__False_795);
            int31_t t2772 = 1;
            TNode<Smi> t2773 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2772)));
            TNode<BoolT> t2774 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_482).value()), implicit_cast<TNode<Smi>>(t2773)));
            USE(implicit_cast<TNode<BoolT>>(t2774));
            Branch(implicit_cast<TNode<BoolT>>(t2774), label__True_794, label__False_795);
            if (label__True_794->is_used())
            {
              BIND(label__True_794);
              // ../../third_party/v8/builtins/array-sort.tq:1202:26
              Goto(label_CopyB_791);
            }
            BIND(label__False_795);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1204:7
          TNode<Object> t2775 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx())));
          TNode<Smi> t2776 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2775)));
          USE(implicit_cast<TNode<Smi>>(t2776));
          TVARIABLE(Smi, min_gallop_488_impl);
          auto min_gallop_488 = &min_gallop_488_impl;
          USE(min_gallop_488);
          *min_gallop_488 = implicit_cast<TNode<Smi>>(t2776);
          // ../../third_party/v8/builtins/array-sort.tq:1207:7
          {
            Label label__True_796_impl(this);
            Label* label__True_796 = &label__True_796_impl;
            USE(label__True_796);
            Label label__False_797_impl(this);
            Label* label__False_797 = &label__False_797_impl;
            USE(label__False_797);
            Label label_header_1012_1398_impl(this, {cursor_b_487, cursor_temp_486, dest_485, elements_484, length_a_482, length_b_483, min_gallop_488});
            Label* label_header_1012_1398 = &label_header_1012_1398_impl;
            USE(label_header_1012_1398);
            Goto(label_header_1012_1398);
            BIND(label_header_1012_1398);
            TNode<BoolT> t2777 = UncheckedCast<BoolT>(Int32TrueConstant());
            USE(implicit_cast<TNode<BoolT>>(t2777));
            Branch(implicit_cast<TNode<BoolT>>(t2777), label__True_796, label__False_797);
            if (label__True_796->is_used())
            {
              BIND(label__True_796);
              // ../../third_party/v8/builtins/array-sort.tq:1207:35
              {
                // ../../third_party/v8/builtins/array-sort.tq:1208:9
                int31_t t2778 = 0;
                TVARIABLE(Smi, nof_wins_a_489_impl);
                auto nof_wins_a_489 = &nof_wins_a_489_impl;
                USE(nof_wins_a_489);
                TNode<Smi> t2779 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2778)));
                *nof_wins_a_489 = implicit_cast<TNode<Smi>>(t2779);
                // ../../third_party/v8/builtins/array-sort.tq:1209:9
                int31_t t2780 = 0;
                TVARIABLE(Smi, nof_wins_b_490_impl);
                auto nof_wins_b_490 = &nof_wins_b_490_impl;
                USE(nof_wins_b_490);
                TNode<Smi> t2781 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2780)));
                *nof_wins_b_490 = implicit_cast<TNode<Smi>>(t2781);
                // ../../third_party/v8/builtins/array-sort.tq:1215:9
                {
                  Label label__True_798_impl(this);
                  Label* label__True_798 = &label__True_798_impl;
                  USE(label__True_798);
                  Label label__False_799_impl(this);
                  Label* label__False_799 = &label__False_799_impl;
                  USE(label__False_799);
                  Label label_header_1013_1399_impl(this, {cursor_b_487, cursor_temp_486, dest_485, elements_484, length_a_482, length_b_483, nof_wins_a_489, nof_wins_b_490});
                  Label* label_header_1013_1399 = &label_header_1013_1399_impl;
                  USE(label_header_1013_1399);
                  Goto(label_header_1013_1399);
                  BIND(label_header_1013_1399);
                  TNode<BoolT> t2782 = UncheckedCast<BoolT>(Int32TrueConstant());
                  USE(implicit_cast<TNode<BoolT>>(t2782));
                  Branch(implicit_cast<TNode<BoolT>>(t2782), label__True_798, label__False_799);
                  if (label__True_798->is_used())
                  {
                    BIND(label__True_798);
                    // ../../third_party/v8/builtins/array-sort.tq:1215:37
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1216:11
                      // ../../third_party/v8/builtins/array-sort.tq:1218:11
                      TNode<Object> t2783 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1007)), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>((*cursor_b_487).value()), label_Bailout_789));
                      USE(implicit_cast<TNode<Object>>(t2783));
                      TVARIABLE(Object, element_b_491_impl);
                      auto element_b_491 = &element_b_491_impl;
                      USE(element_b_491);
                      *element_b_491 = implicit_cast<TNode<Object>>(t2783);
                      // ../../third_party/v8/builtins/array-sort.tq:1221:11
                      TNode<Object> t2784 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1009)), implicit_cast<TNode<Smi>>((*cursor_temp_486).value())));
                      TNode<Number> t2785 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>((*element_b_491).value()), implicit_cast<TNode<Object>>(t2784), label_Bailout_789));
                      USE(implicit_cast<TNode<Number>>(t2785));
                      TVARIABLE(Number, order_492_impl);
                      auto order_492 = &order_492_impl;
                      USE(order_492);
                      *order_492 = implicit_cast<TNode<Number>>(t2785);
                      // ../../third_party/v8/builtins/array-sort.tq:1224:11
                      TNode<HeapObject> t2786 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2786));
                      *elements_484 = implicit_cast<TNode<HeapObject>>(t2786);
                      // ../../third_party/v8/builtins/array-sort.tq:1226:11
                      {
                        Label label__True_800_impl(this);
                        Label* label__True_800 = &label__True_800_impl;
                        USE(label__True_800);
                        Label label__False_801_impl(this);
                        Label* label__False_801 = &label__False_801_impl;
                        USE(label__False_801);
                        Label label_if_done_label_1014_1400_impl(this, {cursor_b_487, cursor_temp_486, dest_485, length_a_482, length_b_483, nof_wins_a_489, nof_wins_b_490});
                        Label* label_if_done_label_1014_1400 = &label_if_done_label_1014_1400_impl;
                        USE(label_if_done_label_1014_1400);
                        int31_t t2787 = 0;
                        TNode<Number> t2788 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2787)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_492).value()), implicit_cast<TNode<Number>>(t2788), label__True_800, label__False_801);
                        if (label__True_800->is_used())
                        {
                          BIND(label__True_800);
                          // ../../third_party/v8/builtins/array-sort.tq:1226:26
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1227:13
                            CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1007)), implicit_cast<TNode<Code>>((*Store_1008)), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>((*cursor_b_487).value()), implicit_cast<TNode<Smi>>((*dest_485).value()), label_Bailout_789);
                            // ../../third_party/v8/builtins/array-sort.tq:1231:13
                            TNode<Smi> t2789 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2790 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_b_487).value()), implicit_cast<TNode<Smi>>(t2789)));
                            *cursor_b_487 = implicit_cast<TNode<Smi>>(t2790);
                            // ../../third_party/v8/builtins/array-sort.tq:1232:13
                            TNode<Smi> t2791 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2792 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>(t2791)));
                            *dest_485 = implicit_cast<TNode<Smi>>(t2792);
                            // ../../third_party/v8/builtins/array-sort.tq:1233:13
                            TNode<Smi> t2793 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2794 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nof_wins_b_490).value()), implicit_cast<TNode<Smi>>(t2793)));
                            *nof_wins_b_490 = implicit_cast<TNode<Smi>>(t2794);
                            // ../../third_party/v8/builtins/array-sort.tq:1234:13
                            TNode<Smi> t2795 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2796 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_483).value()), implicit_cast<TNode<Smi>>(t2795)));
                            *length_b_483 = implicit_cast<TNode<Smi>>(t2796);
                            // ../../third_party/v8/builtins/array-sort.tq:1235:13
                            int31_t t2797 = 0;
                            TNode<Smi> t2798 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2797)));
                            *nof_wins_a_489 = implicit_cast<TNode<Smi>>(t2798);
                            // ../../third_party/v8/builtins/array-sort.tq:1237:13
                            {
                              Label label__True_802_impl(this);
                              Label* label__True_802 = &label__True_802_impl;
                              USE(label__True_802);
                              Label label__False_803_impl(this, {});
                              Label* label__False_803 = &label__False_803_impl;
                              USE(label__False_803);
                              int31_t t2799 = 0;
                              TNode<Smi> t2800 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2799)));
                              TNode<BoolT> t2801 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_483).value()), implicit_cast<TNode<Smi>>(t2800)));
                              USE(implicit_cast<TNode<BoolT>>(t2801));
                              Branch(implicit_cast<TNode<BoolT>>(t2801), label__True_802, label__False_803);
                              if (label__True_802->is_used())
                              {
                                BIND(label__True_802);
                                // ../../third_party/v8/builtins/array-sort.tq:1237:32
                                Goto(label_Succeed_790);
                              }
                              BIND(label__False_803);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1238:13
                            {
                              Label label__True_804_impl(this);
                              Label* label__True_804 = &label__True_804_impl;
                              USE(label__True_804);
                              Label label__False_805_impl(this, {});
                              Label* label__False_805 = &label__False_805_impl;
                              USE(label__False_805);
                              TNode<BoolT> t2802 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_b_490).value()), implicit_cast<TNode<Smi>>((*min_gallop_488).value())));
                              USE(implicit_cast<TNode<BoolT>>(t2802));
                              Branch(implicit_cast<TNode<BoolT>>(t2802), label__True_804, label__False_805);
                              if (label__True_804->is_used())
                              {
                                BIND(label__True_804);
                                // ../../third_party/v8/builtins/array-sort.tq:1238:43
                                Goto(label__False_799);
                              }
                              BIND(label__False_805);
                            }
                          }
                          Goto(label_if_done_label_1014_1400);
                        }
                        if (label__False_801->is_used())
                        {
                          BIND(label__False_801);
                          // ../../third_party/v8/builtins/array-sort.tq:1239:18
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1240:13
                            TNode<Object> t2803 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1009)), implicit_cast<TNode<Smi>>((*cursor_temp_486).value())));
                            CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1008)), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Object>>(t2803), label_Bailout_789);
                            // ../../third_party/v8/builtins/array-sort.tq:1245:13
                            TNode<Smi> t2804 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2805 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_temp_486).value()), implicit_cast<TNode<Smi>>(t2804)));
                            *cursor_temp_486 = implicit_cast<TNode<Smi>>(t2805);
                            // ../../third_party/v8/builtins/array-sort.tq:1246:13
                            TNode<Smi> t2806 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2807 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>(t2806)));
                            *dest_485 = implicit_cast<TNode<Smi>>(t2807);
                            // ../../third_party/v8/builtins/array-sort.tq:1247:13
                            TNode<Smi> t2808 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2809 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nof_wins_a_489).value()), implicit_cast<TNode<Smi>>(t2808)));
                            *nof_wins_a_489 = implicit_cast<TNode<Smi>>(t2809);
                            // ../../third_party/v8/builtins/array-sort.tq:1248:13
                            TNode<Smi> t2810 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2811 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_482).value()), implicit_cast<TNode<Smi>>(t2810)));
                            *length_a_482 = implicit_cast<TNode<Smi>>(t2811);
                            // ../../third_party/v8/builtins/array-sort.tq:1249:13
                            int31_t t2812 = 0;
                            TNode<Smi> t2813 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2812)));
                            *nof_wins_b_490 = implicit_cast<TNode<Smi>>(t2813);
                            // ../../third_party/v8/builtins/array-sort.tq:1251:13
                            {
                              Label label__True_806_impl(this);
                              Label* label__True_806 = &label__True_806_impl;
                              USE(label__True_806);
                              Label label__False_807_impl(this, {});
                              Label* label__False_807 = &label__False_807_impl;
                              USE(label__False_807);
                              int31_t t2814 = 1;
                              TNode<Smi> t2815 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2814)));
                              TNode<BoolT> t2816 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_482).value()), implicit_cast<TNode<Smi>>(t2815)));
                              USE(implicit_cast<TNode<BoolT>>(t2816));
                              Branch(implicit_cast<TNode<BoolT>>(t2816), label__True_806, label__False_807);
                              if (label__True_806->is_used())
                              {
                                BIND(label__True_806);
                                // ../../third_party/v8/builtins/array-sort.tq:1251:32
                                Goto(label_CopyB_791);
                              }
                              BIND(label__False_807);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1252:13
                            {
                              Label label__True_808_impl(this);
                              Label* label__True_808 = &label__True_808_impl;
                              USE(label__True_808);
                              Label label__False_809_impl(this, {});
                              Label* label__False_809 = &label__False_809_impl;
                              USE(label__False_809);
                              TNode<BoolT> t2817 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_a_489).value()), implicit_cast<TNode<Smi>>((*min_gallop_488).value())));
                              USE(implicit_cast<TNode<BoolT>>(t2817));
                              Branch(implicit_cast<TNode<BoolT>>(t2817), label__True_808, label__False_809);
                              if (label__True_808->is_used())
                              {
                                BIND(label__True_808);
                                // ../../third_party/v8/builtins/array-sort.tq:1252:43
                                Goto(label__False_799);
                              }
                              BIND(label__False_809);
                            }
                          }
                          Goto(label_if_done_label_1014_1400);
                        }
                        BIND(label_if_done_label_1014_1400);
                      }
                    }
                    Goto(label_header_1013_1399);
                  }
                  BIND(label__False_799);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1259:9
                TNode<Smi> t2818 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2819 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*min_gallop_488).value()), implicit_cast<TNode<Smi>>(t2818)));
                *min_gallop_488 = implicit_cast<TNode<Smi>>(t2819);
                // ../../third_party/v8/builtins/array-sort.tq:1260:9
                TVARIABLE(BoolT, first_iteration_493_impl);
                auto first_iteration_493 = &first_iteration_493_impl;
                USE(first_iteration_493);
                TNode<BoolT> t2820 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                *first_iteration_493 = implicit_cast<TNode<BoolT>>(t2820);
                // ../../third_party/v8/builtins/array-sort.tq:1261:9
                {
                  Label label__True_810_impl(this);
                  Label* label__True_810 = &label__True_810_impl;
                  USE(label__True_810);
                  Label label__False_811_impl(this);
                  Label* label__False_811 = &label__False_811_impl;
                  USE(label__False_811);
                  Label label_header_1015_1401_impl(this, {cursor_b_487, cursor_temp_486, dest_485, elements_484, first_iteration_493, length_a_482, length_b_483, min_gallop_488, nof_wins_a_489, nof_wins_b_490});
                  Label* label_header_1015_1401 = &label_header_1015_1401_impl;
                  USE(label_header_1015_1401);
                  Goto(label_header_1015_1401);
                  BIND(label_header_1015_1401);
                  Label label__False_812_impl(this);
                  Label* label__False_812 = &label__False_812_impl;
                  USE(label__False_812);
                  Label label__False_813_impl(this);
                  Label* label__False_813 = &label__False_813_impl;
                  USE(label__False_813);
                  TNode<Smi> t2821 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t2822 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_a_489).value()), implicit_cast<TNode<Smi>>(t2821)));
                  USE(implicit_cast<TNode<BoolT>>(t2822));
                  GotoIf(implicit_cast<TNode<BoolT>>(t2822), label__True_810);
                  TNode<Smi> t2823 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t2824 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_b_490).value()), implicit_cast<TNode<Smi>>(t2823)));
                  USE(implicit_cast<TNode<BoolT>>(t2824));
                  GotoIf(implicit_cast<TNode<BoolT>>(t2824), label__True_810);
                  Branch(implicit_cast<TNode<BoolT>>((*first_iteration_493).value()), label__True_810, label__False_811);
                  if (label__True_810->is_used())
                  {
                    BIND(label__True_810);
                    // ../../third_party/v8/builtins/array-sort.tq:1262:33
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1263:11
                      TNode<BoolT> t2825 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                      *first_iteration_493 = implicit_cast<TNode<BoolT>>(t2825);
                      // ../../third_party/v8/builtins/array-sort.tq:1264:11
                      // ../../third_party/v8/builtins/array-sort.tq:1266:11
                      int31_t t2826 = 1;
                      int31_t t2827 = 1;
                      TNode<Smi> t2828 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2827)));
                      TNode<Smi> t2829 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*min_gallop_488).value()), implicit_cast<TNode<Smi>>(t2828)));
                      USE(implicit_cast<TNode<Smi>>(t2829));
                      TNode<Smi> t2830 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2826)));
                      TNode<Smi> t2831 = UncheckedCast<Smi>(SmiMax(implicit_cast<TNode<Smi>>(t2830), implicit_cast<TNode<Smi>>(t2829)));
                      USE(implicit_cast<TNode<Smi>>(t2831));
                      *min_gallop_488 = implicit_cast<TNode<Smi>>(t2831);
                      // ../../third_party/v8/builtins/array-sort.tq:1267:11
                      StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*min_gallop_488).value()));
                      // ../../third_party/v8/builtins/array-sort.tq:1269:11
                      TNode<Object> t2832 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1007)), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>((*cursor_b_487).value()), label_Bailout_789));
                      USE(implicit_cast<TNode<Object>>(t2832));
                      TVARIABLE(Object, key_right_494_impl);
                      auto key_right_494 = &key_right_494_impl;
                      USE(key_right_494);
                      *key_right_494 = implicit_cast<TNode<Object>>(t2832);
                      // ../../third_party/v8/builtins/array-sort.tq:1272:11
                      int31_t t2833 = 0;
                      TNode<Smi> t2834 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2833)));
                      TNode<Smi> t2835 = UncheckedCast<Smi>(CallGallopRight(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad19ATTempArrayElements).code())), implicit_cast<TNode<Object>>((*key_right_494).value()), implicit_cast<TNode<Smi>>((*cursor_temp_486).value()), implicit_cast<TNode<Smi>>((*length_a_482).value()), implicit_cast<TNode<Smi>>(t2834), implicit_cast<TNode<Oddball>>(True()), label_Bailout_789));
                      USE(implicit_cast<TNode<Smi>>(t2835));
                      *nof_wins_a_489 = implicit_cast<TNode<Smi>>(t2835);
                      // ../../third_party/v8/builtins/array-sort.tq:1275:11
                      TNode<HeapObject> t2836 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2836));
                      *elements_484 = implicit_cast<TNode<HeapObject>>(t2836);
                      // ../../third_party/v8/builtins/array-sort.tq:1276:11
                      // ../../third_party/v8/builtins/array-sort.tq:1278:11
                      {
                        Label label__True_814_impl(this);
                        Label* label__True_814 = &label__True_814_impl;
                        USE(label__True_814);
                        Label label__False_815_impl(this, {cursor_temp_486, dest_485, length_a_482});
                        Label* label__False_815 = &label__False_815_impl;
                        USE(label__False_815);
                        int31_t t2837 = 0;
                        TNode<Smi> t2838 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2837)));
                        TNode<BoolT> t2839 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nof_wins_a_489).value()), implicit_cast<TNode<Smi>>(t2838)));
                        USE(implicit_cast<TNode<BoolT>>(t2839));
                        Branch(implicit_cast<TNode<BoolT>>(t2839), label__True_814, label__False_815);
                        if (label__True_814->is_used())
                        {
                          BIND(label__True_814);
                          // ../../third_party/v8/builtins/array-sort.tq:1278:31
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1279:13
                            CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<FixedArray>>((*temp_array_1009)), implicit_cast<TNode<Smi>>((*cursor_temp_486).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_489).value()), label_Bailout_789);
                            // ../../third_party/v8/builtins/array-sort.tq:1282:13
                            TNode<Smi> t2840 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_489).value())));
                            USE(implicit_cast<TNode<Smi>>(t2840));
                            *dest_485 = implicit_cast<TNode<Smi>>(t2840);
                            // ../../third_party/v8/builtins/array-sort.tq:1283:13
                            TNode<Smi> t2841 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_temp_486).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_489).value())));
                            USE(implicit_cast<TNode<Smi>>(t2841));
                            *cursor_temp_486 = implicit_cast<TNode<Smi>>(t2841);
                            // ../../third_party/v8/builtins/array-sort.tq:1284:13
                            TNode<Smi> t2842 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_482).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_489).value())));
                            USE(implicit_cast<TNode<Smi>>(t2842));
                            *length_a_482 = implicit_cast<TNode<Smi>>(t2842);
                            // ../../third_party/v8/builtins/array-sort.tq:1286:13
                            {
                              Label label__True_816_impl(this);
                              Label* label__True_816 = &label__True_816_impl;
                              USE(label__True_816);
                              Label label__False_817_impl(this, {});
                              Label* label__False_817 = &label__False_817_impl;
                              USE(label__False_817);
                              int31_t t2843 = 1;
                              TNode<Smi> t2844 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2843)));
                              TNode<BoolT> t2845 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_482).value()), implicit_cast<TNode<Smi>>(t2844)));
                              USE(implicit_cast<TNode<BoolT>>(t2845));
                              Branch(implicit_cast<TNode<BoolT>>(t2845), label__True_816, label__False_817);
                              if (label__True_816->is_used())
                              {
                                BIND(label__True_816);
                                // ../../third_party/v8/builtins/array-sort.tq:1286:32
                                Goto(label_CopyB_791);
                              }
                              BIND(label__False_817);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1290:13
                            {
                              Label label__True_818_impl(this);
                              Label* label__True_818 = &label__True_818_impl;
                              USE(label__True_818);
                              Label label__False_819_impl(this, {});
                              Label* label__False_819 = &label__False_819_impl;
                              USE(label__False_819);
                              int31_t t2846 = 0;
                              TNode<Smi> t2847 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2846)));
                              TNode<BoolT> t2848 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_482).value()), implicit_cast<TNode<Smi>>(t2847)));
                              USE(implicit_cast<TNode<BoolT>>(t2848));
                              Branch(implicit_cast<TNode<BoolT>>(t2848), label__True_818, label__False_819);
                              if (label__True_818->is_used())
                              {
                                BIND(label__True_818);
                                // ../../third_party/v8/builtins/array-sort.tq:1290:32
                                Goto(label_Succeed_790);
                              }
                              BIND(label__False_819);
                            }
                          }
                          Goto(label__False_815);
                        }
                        BIND(label__False_815);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1292:11
                      TNode<Smi> t2849 = implicit_cast<TNode<Smi>>((*cursor_b_487).value());
                      USE(t2849);
                      TNode<Smi> t2850 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2851 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_b_487).value()), implicit_cast<TNode<Smi>>(t2850)));
                      *cursor_b_487 = implicit_cast<TNode<Smi>>(t2851);
                      TNode<Smi> t2852 = implicit_cast<TNode<Smi>>((*dest_485).value());
                      USE(t2852);
                      TNode<Smi> t2853 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2854 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>(t2853)));
                      *dest_485 = implicit_cast<TNode<Smi>>(t2854);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1007)), implicit_cast<TNode<Code>>((*Store_1008)), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>(t2849), implicit_cast<TNode<Smi>>(t2852), label_Bailout_789);
                      // ../../third_party/v8/builtins/array-sort.tq:1295:11
                      {
                        Label label__True_820_impl(this);
                        Label* label__True_820 = &label__True_820_impl;
                        USE(label__True_820);
                        Label label__False_821_impl(this, {length_b_483});
                        Label* label__False_821 = &label__False_821_impl;
                        USE(label__False_821);
                        TNode<Smi> t2855 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t2856 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_483).value()), implicit_cast<TNode<Smi>>(t2855)));
                        *length_b_483 = implicit_cast<TNode<Smi>>(t2856);
                        int31_t t2857 = 0;
                        TNode<Smi> t2858 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2857)));
                        TNode<BoolT> t2859 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2856), implicit_cast<TNode<Smi>>(t2858)));
                        USE(implicit_cast<TNode<BoolT>>(t2859));
                        Branch(implicit_cast<TNode<BoolT>>(t2859), label__True_820, label__False_821);
                        if (label__True_820->is_used())
                        {
                          BIND(label__True_820);
                          // ../../third_party/v8/builtins/array-sort.tq:1295:32
                          Goto(label_Succeed_790);
                        }
                        BIND(label__False_821);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1297:11
                      TNode<Object> t2860 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1009)), implicit_cast<TNode<Smi>>((*cursor_temp_486).value())));
                      int31_t t2861 = 0;
                      TNode<Smi> t2862 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2861)));
                      TNode<Smi> t2863 = UncheckedCast<Smi>(CallGallopLeft(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1007)), implicit_cast<TNode<Object>>(t2860), implicit_cast<TNode<Smi>>((*cursor_b_487).value()), implicit_cast<TNode<Smi>>((*length_b_483).value()), implicit_cast<TNode<Smi>>(t2862), implicit_cast<TNode<Oddball>>(False()), label_Bailout_789));
                      USE(implicit_cast<TNode<Smi>>(t2863));
                      *nof_wins_b_490 = implicit_cast<TNode<Smi>>(t2863);
                      // ../../third_party/v8/builtins/array-sort.tq:1301:11
                      TNode<HeapObject> t2864 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2864));
                      *elements_484 = implicit_cast<TNode<HeapObject>>(t2864);
                      // ../../third_party/v8/builtins/array-sort.tq:1302:11
                      // ../../third_party/v8/builtins/array-sort.tq:1303:11
                      {
                        Label label__True_822_impl(this);
                        Label* label__True_822 = &label__True_822_impl;
                        USE(label__True_822);
                        Label label__False_823_impl(this, {cursor_b_487, dest_485, length_b_483});
                        Label* label__False_823 = &label__False_823_impl;
                        USE(label__False_823);
                        int31_t t2865 = 0;
                        TNode<Smi> t2866 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2865)));
                        TNode<BoolT> t2867 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nof_wins_b_490).value()), implicit_cast<TNode<Smi>>(t2866)));
                        USE(implicit_cast<TNode<BoolT>>(t2867));
                        Branch(implicit_cast<TNode<BoolT>>(t2867), label__True_822, label__False_823);
                        if (label__True_822->is_used())
                        {
                          BIND(label__True_822);
                          // ../../third_party/v8/builtins/array-sort.tq:1303:31
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1304:13
                            CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>((*cursor_b_487).value()), implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_490).value()), label_Bailout_789);
                            // ../../third_party/v8/builtins/array-sort.tq:1308:13
                            TNode<Smi> t2868 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_490).value())));
                            USE(implicit_cast<TNode<Smi>>(t2868));
                            *dest_485 = implicit_cast<TNode<Smi>>(t2868);
                            // ../../third_party/v8/builtins/array-sort.tq:1309:13
                            TNode<Smi> t2869 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_b_487).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_490).value())));
                            USE(implicit_cast<TNode<Smi>>(t2869));
                            *cursor_b_487 = implicit_cast<TNode<Smi>>(t2869);
                            // ../../third_party/v8/builtins/array-sort.tq:1310:13
                            TNode<Smi> t2870 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_483).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_490).value())));
                            USE(implicit_cast<TNode<Smi>>(t2870));
                            *length_b_483 = implicit_cast<TNode<Smi>>(t2870);
                            // ../../third_party/v8/builtins/array-sort.tq:1312:13
                            {
                              Label label__True_824_impl(this);
                              Label* label__True_824 = &label__True_824_impl;
                              USE(label__True_824);
                              Label label__False_825_impl(this, {});
                              Label* label__False_825 = &label__False_825_impl;
                              USE(label__False_825);
                              int31_t t2871 = 0;
                              TNode<Smi> t2872 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2871)));
                              TNode<BoolT> t2873 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_483).value()), implicit_cast<TNode<Smi>>(t2872)));
                              USE(implicit_cast<TNode<BoolT>>(t2873));
                              Branch(implicit_cast<TNode<BoolT>>(t2873), label__True_824, label__False_825);
                              if (label__True_824->is_used())
                              {
                                BIND(label__True_824);
                                // ../../third_party/v8/builtins/array-sort.tq:1312:32
                                Goto(label_Succeed_790);
                              }
                              BIND(label__False_825);
                            }
                          }
                          Goto(label__False_823);
                        }
                        BIND(label__False_823);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1314:11
                      TNode<Smi> t2874 = implicit_cast<TNode<Smi>>((*dest_485).value());
                      USE(t2874);
                      TNode<Smi> t2875 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2876 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>(t2875)));
                      *dest_485 = implicit_cast<TNode<Smi>>(t2876);
                      TNode<Smi> t2877 = implicit_cast<TNode<Smi>>((*cursor_temp_486).value());
                      USE(t2877);
                      TNode<Smi> t2878 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t2879 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_temp_486).value()), implicit_cast<TNode<Smi>>(t2878)));
                      *cursor_temp_486 = implicit_cast<TNode<Smi>>(t2879);
                      TNode<Object> t2880 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1009)), implicit_cast<TNode<Smi>>(t2877)));
                      CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1008)), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>(t2874), implicit_cast<TNode<Object>>(t2880), label_Bailout_789);
                      // ../../third_party/v8/builtins/array-sort.tq:1318:11
                      {
                        Label label__True_826_impl(this);
                        Label* label__True_826 = &label__True_826_impl;
                        USE(label__True_826);
                        Label label__False_827_impl(this, {length_a_482});
                        Label* label__False_827 = &label__False_827_impl;
                        USE(label__False_827);
                        TNode<Smi> t2881 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t2882 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_482).value()), implicit_cast<TNode<Smi>>(t2881)));
                        *length_a_482 = implicit_cast<TNode<Smi>>(t2882);
                        int31_t t2883 = 1;
                        TNode<Smi> t2884 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2883)));
                        TNode<BoolT> t2885 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2882), implicit_cast<TNode<Smi>>(t2884)));
                        USE(implicit_cast<TNode<BoolT>>(t2885));
                        Branch(implicit_cast<TNode<BoolT>>(t2885), label__True_826, label__False_827);
                        if (label__True_826->is_used())
                        {
                          BIND(label__True_826);
                          // ../../third_party/v8/builtins/array-sort.tq:1318:32
                          Goto(label_CopyB_791);
                        }
                        BIND(label__False_827);
                      }
                    }
                    Goto(label_header_1015_1401);
                  }
                  BIND(label__False_811);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1320:9
                TNode<Smi> t2886 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2887 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*min_gallop_488).value()), implicit_cast<TNode<Smi>>(t2886)));
                *min_gallop_488 = implicit_cast<TNode<Smi>>(t2887);
                // ../../third_party/v8/builtins/array-sort.tq:1321:9
                StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*min_gallop_488).value()));
              }
              Goto(label_header_1012_1398);
            }
            BIND(label__False_797);
          }
        }
        Goto(label_try_done_1010_1396);
      }
      if (label_Succeed_790->is_used())
      {
        BIND(label_Succeed_790);
        // ../../third_party/v8/builtins/array-sort.tq:1324:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1325:7
          {
            Label label__True_828_impl(this);
            Label* label__True_828 = &label__True_828_impl;
            USE(label__True_828);
            Label label__False_829_impl(this, {});
            Label* label__False_829 = &label__False_829_impl;
            USE(label__False_829);
            int31_t t2888 = 0;
            TNode<Smi> t2889 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2888)));
            TNode<BoolT> t2890 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*length_a_482).value()), implicit_cast<TNode<Smi>>(t2889)));
            USE(implicit_cast<TNode<BoolT>>(t2890));
            Branch(implicit_cast<TNode<BoolT>>(t2890), label__True_828, label__False_829);
            if (label__True_828->is_used())
            {
              BIND(label__True_828);
              // ../../third_party/v8/builtins/array-sort.tq:1325:25
              {
                // ../../third_party/v8/builtins/array-sort.tq:1326:9
                CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<FixedArray>>((*temp_array_1009)), implicit_cast<TNode<Smi>>((*cursor_temp_486).value()), implicit_cast<TNode<Smi>>((*length_a_482).value()), label_Bailout_789);
              }
              Goto(label__False_829);
            }
            BIND(label__False_829);
          }
        }
        Goto(label_try_done_1010_1396);
      }
      if (label_CopyB_791->is_used())
      {
        BIND(label_CopyB_791);
        // ../../third_party/v8/builtins/array-sort.tq:1331:17
        {
          // ../../third_party/v8/builtins/array-sort.tq:1332:7
          // ../../third_party/v8/builtins/array-sort.tq:1334:7
          CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>((*cursor_b_487).value()), implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>((*length_b_483).value()), label_Bailout_789);
          // ../../third_party/v8/builtins/array-sort.tq:1337:7
          TNode<Smi> t2891 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_485).value()), implicit_cast<TNode<Smi>>((*length_b_483).value())));
          USE(implicit_cast<TNode<Smi>>(t2891));
          TNode<Object> t2892 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1009)), implicit_cast<TNode<Smi>>((*cursor_temp_486).value())));
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1008)), implicit_cast<TNode<HeapObject>>((*elements_484).value()), implicit_cast<TNode<Smi>>(t2891), implicit_cast<TNode<Object>>(t2892), label_Bailout_789);
        }
        Goto(label_try_done_1010_1396);
      }
      BIND(label_try_done_1010_1396);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::MergeHigh(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_baseA, TNode<Smi> p_lengthA, TNode<Smi> p_baseB, TNode<Smi> p_lengthB, Label* label_Bailout_830) {
  Label label_macro_end_1402_impl(this, {});
  Label* label_macro_end_1402 = &label_macro_end_1402_impl;
  USE(label_macro_end_1402);
  // ../../third_party/v8/builtins/array-sort.tq:1351:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1352:5
    // ../../third_party/v8/builtins/array-sort.tq:1353:5
    // ../../third_party/v8/builtins/array-sort.tq:1354:5
    // ../../third_party/v8/builtins/array-sort.tq:1356:5
    TVARIABLE(Smi, length_a_495_impl);
    auto length_a_495 = &length_a_495_impl;
    USE(length_a_495);
    *length_a_495 = implicit_cast<TNode<Smi>>(p_lengthA);
    // ../../third_party/v8/builtins/array-sort.tq:1357:5
    TVARIABLE(Smi, length_b_496_impl);
    auto length_b_496 = &length_b_496_impl;
    USE(length_b_496);
    *length_b_496 = implicit_cast<TNode<Smi>>(p_lengthB);
    // ../../third_party/v8/builtins/array-sort.tq:1359:5
    TNode<HeapObject> t2893 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<HeapObject>>(t2893));
    TVARIABLE(HeapObject, elements_497_impl);
    auto elements_497 = &elements_497_impl;
    USE(elements_497);
    *elements_497 = implicit_cast<TNode<HeapObject>>(t2893);
    // ../../third_party/v8/builtins/array-sort.tq:1360:5
    TNode<Code> t2894 = UncheckedCast<Code>(GetLoadFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2894));
    TNode<Code> LoadF_1016_impl;
    auto LoadF_1016 = &LoadF_1016_impl;
    USE(LoadF_1016);
    *LoadF_1016 = implicit_cast<TNode<Code>>(t2894);
    // ../../third_party/v8/builtins/array-sort.tq:1361:5
    TNode<Code> t2895 = UncheckedCast<Code>(GetStoreFn(implicit_cast<TNode<FixedArray>>(p_sortState)));
    USE(implicit_cast<TNode<Code>>(t2895));
    TNode<Code> Store_1017_impl;
    auto Store_1017 = &Store_1017_impl;
    USE(Store_1017);
    *Store_1017 = implicit_cast<TNode<Code>>(t2895);
    // ../../third_party/v8/builtins/array-sort.tq:1363:5
    TNode<FixedArray> t2896 = UncheckedCast<FixedArray>(GetTempArray(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*length_b_496).value())));
    USE(implicit_cast<TNode<FixedArray>>(t2896));
    TNode<FixedArray> temp_array_1018_impl;
    auto temp_array_1018 = &temp_array_1018_impl;
    USE(temp_array_1018);
    *temp_array_1018 = implicit_cast<TNode<FixedArray>>(t2896);
    // ../../third_party/v8/builtins/array-sort.tq:1364:5
    int31_t t2897 = 0;
    TNode<Smi> t2898 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2897)));
    CopyToTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1016)), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>(p_baseB), implicit_cast<TNode<FixedArray>>((*temp_array_1018)), implicit_cast<TNode<Smi>>(t2898), implicit_cast<TNode<Smi>>((*length_b_496).value()), label_Bailout_830);
    // ../../third_party/v8/builtins/array-sort.tq:1369:5
    TNode<Smi> t2899 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_baseB), implicit_cast<TNode<Smi>>((*length_b_496).value())));
    USE(implicit_cast<TNode<Smi>>(t2899));
    int31_t t2900 = 1;
    TNode<Smi> t2901 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2900)));
    TNode<Smi> t2902 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2899), implicit_cast<TNode<Smi>>(t2901)));
    USE(implicit_cast<TNode<Smi>>(t2902));
    TVARIABLE(Smi, dest_498_impl);
    auto dest_498 = &dest_498_impl;
    USE(dest_498);
    *dest_498 = implicit_cast<TNode<Smi>>(t2902);
    // ../../third_party/v8/builtins/array-sort.tq:1370:5
    int31_t t2903 = 1;
    TNode<Smi> t2904 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2903)));
    TNode<Smi> t2905 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t2904)));
    USE(implicit_cast<TNode<Smi>>(t2905));
    TVARIABLE(Smi, cursor_temp_499_impl);
    auto cursor_temp_499 = &cursor_temp_499_impl;
    USE(cursor_temp_499);
    *cursor_temp_499 = implicit_cast<TNode<Smi>>(t2905);
    // ../../third_party/v8/builtins/array-sort.tq:1371:5
    TNode<Smi> t2906 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<Smi>>((*length_a_495).value())));
    USE(implicit_cast<TNode<Smi>>(t2906));
    int31_t t2907 = 1;
    TNode<Smi> t2908 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2907)));
    TNode<Smi> t2909 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t2906), implicit_cast<TNode<Smi>>(t2908)));
    USE(implicit_cast<TNode<Smi>>(t2909));
    TVARIABLE(Smi, cursor_a_500_impl);
    auto cursor_a_500 = &cursor_a_500_impl;
    USE(cursor_a_500);
    *cursor_a_500 = implicit_cast<TNode<Smi>>(t2909);
    // ../../third_party/v8/builtins/array-sort.tq:1373:5
    TNode<Smi> t2910 = implicit_cast<TNode<Smi>>((*cursor_a_500).value());
    USE(t2910);
    TNode<Smi> t2911 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t2912 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_500).value()), implicit_cast<TNode<Smi>>(t2911)));
    *cursor_a_500 = implicit_cast<TNode<Smi>>(t2912);
    TNode<Smi> t2913 = implicit_cast<TNode<Smi>>((*dest_498).value());
    USE(t2913);
    TNode<Smi> t2914 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
    TNode<Smi> t2915 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>(t2914)));
    *dest_498 = implicit_cast<TNode<Smi>>(t2915);
    CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1016)), implicit_cast<TNode<Code>>((*Store_1017)), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>(t2910), implicit_cast<TNode<Smi>>(t2913), label_Bailout_830);
    // ../../third_party/v8/builtins/array-sort.tq:1376:5
    {
      Label label_try_done_1019_1403_impl(this);
      Label* label_try_done_1019_1403 = &label_try_done_1019_1403_impl;
      USE(label_try_done_1019_1403);
      Label label_Succeed_831_impl(this);
      Label* label_Succeed_831 = &label_Succeed_831_impl;
      USE(label_Succeed_831);
      Label label_CopyA_832_impl(this);
      Label* label_CopyA_832 = &label_CopyA_832_impl;
      USE(label_CopyA_832);
      Label label_try_begin_1020_1404_impl(this);
      Label* label_try_begin_1020_1404 = &label_try_begin_1020_1404_impl;
      USE(label_try_begin_1020_1404);
      Goto(label_try_begin_1020_1404);
      if (label_try_begin_1020_1404->is_used())
      {
        BIND(label_try_begin_1020_1404);
        // ../../third_party/v8/builtins/array-sort.tq:1376:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1377:7
          {
            Label label__True_833_impl(this);
            Label* label__True_833 = &label__True_833_impl;
            USE(label__True_833);
            Label label__False_834_impl(this, {length_a_495});
            Label* label__False_834 = &label__False_834_impl;
            USE(label__False_834);
            TNode<Smi> t2916 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
            TNode<Smi> t2917 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_495).value()), implicit_cast<TNode<Smi>>(t2916)));
            *length_a_495 = implicit_cast<TNode<Smi>>(t2917);
            int31_t t2918 = 0;
            TNode<Smi> t2919 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2918)));
            TNode<BoolT> t2920 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2917), implicit_cast<TNode<Smi>>(t2919)));
            USE(implicit_cast<TNode<BoolT>>(t2920));
            Branch(implicit_cast<TNode<BoolT>>(t2920), label__True_833, label__False_834);
            if (label__True_833->is_used())
            {
              BIND(label__True_833);
              // ../../third_party/v8/builtins/array-sort.tq:1377:28
              Goto(label_Succeed_831);
            }
            BIND(label__False_834);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1378:7
          {
            Label label__True_835_impl(this);
            Label* label__True_835 = &label__True_835_impl;
            USE(label__True_835);
            Label label__False_836_impl(this, {});
            Label* label__False_836 = &label__False_836_impl;
            USE(label__False_836);
            int31_t t2921 = 1;
            TNode<Smi> t2922 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2921)));
            TNode<BoolT> t2923 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t2922)));
            USE(implicit_cast<TNode<BoolT>>(t2923));
            Branch(implicit_cast<TNode<BoolT>>(t2923), label__True_835, label__False_836);
            if (label__True_835->is_used())
            {
              BIND(label__True_835);
              // ../../third_party/v8/builtins/array-sort.tq:1378:26
              Goto(label_CopyA_832);
            }
            BIND(label__False_836);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1380:7
          TNode<Object> t2924 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx())));
          TNode<Smi> t2925 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2924)));
          USE(implicit_cast<TNode<Smi>>(t2925));
          TVARIABLE(Smi, min_gallop_501_impl);
          auto min_gallop_501 = &min_gallop_501_impl;
          USE(min_gallop_501);
          *min_gallop_501 = implicit_cast<TNode<Smi>>(t2925);
          // ../../third_party/v8/builtins/array-sort.tq:1383:7
          {
            Label label__True_837_impl(this);
            Label* label__True_837 = &label__True_837_impl;
            USE(label__True_837);
            Label label__False_838_impl(this);
            Label* label__False_838 = &label__False_838_impl;
            USE(label__False_838);
            Label label_header_1021_1405_impl(this, {cursor_a_500, cursor_temp_499, dest_498, elements_497, length_a_495, length_b_496, min_gallop_501});
            Label* label_header_1021_1405 = &label_header_1021_1405_impl;
            USE(label_header_1021_1405);
            Goto(label_header_1021_1405);
            BIND(label_header_1021_1405);
            TNode<BoolT> t2926 = UncheckedCast<BoolT>(Int32TrueConstant());
            USE(implicit_cast<TNode<BoolT>>(t2926));
            Branch(implicit_cast<TNode<BoolT>>(t2926), label__True_837, label__False_838);
            if (label__True_837->is_used())
            {
              BIND(label__True_837);
              // ../../third_party/v8/builtins/array-sort.tq:1383:35
              {
                // ../../third_party/v8/builtins/array-sort.tq:1384:9
                int31_t t2927 = 0;
                TVARIABLE(Smi, nof_wins_a_502_impl);
                auto nof_wins_a_502 = &nof_wins_a_502_impl;
                USE(nof_wins_a_502);
                TNode<Smi> t2928 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2927)));
                *nof_wins_a_502 = implicit_cast<TNode<Smi>>(t2928);
                // ../../third_party/v8/builtins/array-sort.tq:1385:9
                int31_t t2929 = 0;
                TVARIABLE(Smi, nof_wins_b_503_impl);
                auto nof_wins_b_503 = &nof_wins_b_503_impl;
                USE(nof_wins_b_503);
                TNode<Smi> t2930 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2929)));
                *nof_wins_b_503 = implicit_cast<TNode<Smi>>(t2930);
                // ../../third_party/v8/builtins/array-sort.tq:1391:9
                {
                  Label label__True_839_impl(this);
                  Label* label__True_839 = &label__True_839_impl;
                  USE(label__True_839);
                  Label label__False_840_impl(this);
                  Label* label__False_840 = &label__False_840_impl;
                  USE(label__False_840);
                  Label label_header_1022_1406_impl(this, {cursor_a_500, cursor_temp_499, dest_498, elements_497, length_a_495, length_b_496, nof_wins_a_502, nof_wins_b_503});
                  Label* label_header_1022_1406 = &label_header_1022_1406_impl;
                  USE(label_header_1022_1406);
                  Goto(label_header_1022_1406);
                  BIND(label_header_1022_1406);
                  TNode<BoolT> t2931 = UncheckedCast<BoolT>(Int32TrueConstant());
                  USE(implicit_cast<TNode<BoolT>>(t2931));
                  Branch(implicit_cast<TNode<BoolT>>(t2931), label__True_839, label__False_840);
                  if (label__True_839->is_used())
                  {
                    BIND(label__True_839);
                    // ../../third_party/v8/builtins/array-sort.tq:1391:37
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1392:11
                      // ../../third_party/v8/builtins/array-sort.tq:1394:11
                      TNode<Object> t2932 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1016)), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>((*cursor_a_500).value()), label_Bailout_830));
                      USE(implicit_cast<TNode<Object>>(t2932));
                      TVARIABLE(Object, element_a_504_impl);
                      auto element_a_504 = &element_a_504_impl;
                      USE(element_a_504);
                      *element_a_504 = implicit_cast<TNode<Object>>(t2932);
                      // ../../third_party/v8/builtins/array-sort.tq:1397:11
                      TNode<Object> t2933 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1018)), implicit_cast<TNode<Smi>>((*cursor_temp_499).value())));
                      TNode<Number> t2934 = UncheckedCast<Number>(CallCompareFn(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Object>>(t2933), implicit_cast<TNode<Object>>((*element_a_504).value()), label_Bailout_830));
                      USE(implicit_cast<TNode<Number>>(t2934));
                      TVARIABLE(Number, order_505_impl);
                      auto order_505 = &order_505_impl;
                      USE(order_505);
                      *order_505 = implicit_cast<TNode<Number>>(t2934);
                      // ../../third_party/v8/builtins/array-sort.tq:1400:11
                      TNode<HeapObject> t2935 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2935));
                      *elements_497 = implicit_cast<TNode<HeapObject>>(t2935);
                      // ../../third_party/v8/builtins/array-sort.tq:1402:11
                      {
                        Label label__True_841_impl(this);
                        Label* label__True_841 = &label__True_841_impl;
                        USE(label__True_841);
                        Label label__False_842_impl(this);
                        Label* label__False_842 = &label__False_842_impl;
                        USE(label__False_842);
                        Label label_if_done_label_1023_1407_impl(this, {cursor_a_500, cursor_temp_499, dest_498, length_a_495, length_b_496, nof_wins_a_502, nof_wins_b_503});
                        Label* label_if_done_label_1023_1407 = &label_if_done_label_1023_1407_impl;
                        USE(label_if_done_label_1023_1407);
                        int31_t t2936 = 0;
                        TNode<Number> t2937 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2936)));
                        BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*order_505).value()), implicit_cast<TNode<Number>>(t2937), label__True_841, label__False_842);
                        if (label__True_841->is_used())
                        {
                          BIND(label__True_841);
                          // ../../third_party/v8/builtins/array-sort.tq:1402:26
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1403:13
                            CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1016)), implicit_cast<TNode<Code>>((*Store_1017)), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>((*cursor_a_500).value()), implicit_cast<TNode<Smi>>((*dest_498).value()), label_Bailout_830);
                            // ../../third_party/v8/builtins/array-sort.tq:1407:13
                            TNode<Smi> t2938 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2939 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_500).value()), implicit_cast<TNode<Smi>>(t2938)));
                            *cursor_a_500 = implicit_cast<TNode<Smi>>(t2939);
                            // ../../third_party/v8/builtins/array-sort.tq:1408:13
                            TNode<Smi> t2940 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2941 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>(t2940)));
                            *dest_498 = implicit_cast<TNode<Smi>>(t2941);
                            // ../../third_party/v8/builtins/array-sort.tq:1409:13
                            TNode<Smi> t2942 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2943 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nof_wins_a_502).value()), implicit_cast<TNode<Smi>>(t2942)));
                            *nof_wins_a_502 = implicit_cast<TNode<Smi>>(t2943);
                            // ../../third_party/v8/builtins/array-sort.tq:1410:13
                            TNode<Smi> t2944 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2945 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_495).value()), implicit_cast<TNode<Smi>>(t2944)));
                            *length_a_495 = implicit_cast<TNode<Smi>>(t2945);
                            // ../../third_party/v8/builtins/array-sort.tq:1411:13
                            int31_t t2946 = 0;
                            TNode<Smi> t2947 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2946)));
                            *nof_wins_b_503 = implicit_cast<TNode<Smi>>(t2947);
                            // ../../third_party/v8/builtins/array-sort.tq:1413:13
                            {
                              Label label__True_843_impl(this);
                              Label* label__True_843 = &label__True_843_impl;
                              USE(label__True_843);
                              Label label__False_844_impl(this, {});
                              Label* label__False_844 = &label__False_844_impl;
                              USE(label__False_844);
                              int31_t t2948 = 0;
                              TNode<Smi> t2949 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2948)));
                              TNode<BoolT> t2950 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_495).value()), implicit_cast<TNode<Smi>>(t2949)));
                              USE(implicit_cast<TNode<BoolT>>(t2950));
                              Branch(implicit_cast<TNode<BoolT>>(t2950), label__True_843, label__False_844);
                              if (label__True_843->is_used())
                              {
                                BIND(label__True_843);
                                // ../../third_party/v8/builtins/array-sort.tq:1413:32
                                Goto(label_Succeed_831);
                              }
                              BIND(label__False_844);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1414:13
                            {
                              Label label__True_845_impl(this);
                              Label* label__True_845 = &label__True_845_impl;
                              USE(label__True_845);
                              Label label__False_846_impl(this, {});
                              Label* label__False_846 = &label__False_846_impl;
                              USE(label__False_846);
                              TNode<BoolT> t2951 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_a_502).value()), implicit_cast<TNode<Smi>>((*min_gallop_501).value())));
                              USE(implicit_cast<TNode<BoolT>>(t2951));
                              Branch(implicit_cast<TNode<BoolT>>(t2951), label__True_845, label__False_846);
                              if (label__True_845->is_used())
                              {
                                BIND(label__True_845);
                                // ../../third_party/v8/builtins/array-sort.tq:1414:43
                                Goto(label__False_840);
                              }
                              BIND(label__False_846);
                            }
                          }
                          Goto(label_if_done_label_1023_1407);
                        }
                        if (label__False_842->is_used())
                        {
                          BIND(label__False_842);
                          // ../../third_party/v8/builtins/array-sort.tq:1415:18
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1416:13
                            TNode<Object> t2952 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1018)), implicit_cast<TNode<Smi>>((*cursor_temp_499).value())));
                            CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1017)), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Object>>(t2952), label_Bailout_830);
                            // ../../third_party/v8/builtins/array-sort.tq:1421:13
                            TNode<Smi> t2953 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2954 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_temp_499).value()), implicit_cast<TNode<Smi>>(t2953)));
                            *cursor_temp_499 = implicit_cast<TNode<Smi>>(t2954);
                            // ../../third_party/v8/builtins/array-sort.tq:1422:13
                            TNode<Smi> t2955 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2956 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>(t2955)));
                            *dest_498 = implicit_cast<TNode<Smi>>(t2956);
                            // ../../third_party/v8/builtins/array-sort.tq:1423:13
                            TNode<Smi> t2957 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2958 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*nof_wins_b_503).value()), implicit_cast<TNode<Smi>>(t2957)));
                            *nof_wins_b_503 = implicit_cast<TNode<Smi>>(t2958);
                            // ../../third_party/v8/builtins/array-sort.tq:1424:13
                            TNode<Smi> t2959 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                            TNode<Smi> t2960 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t2959)));
                            *length_b_496 = implicit_cast<TNode<Smi>>(t2960);
                            // ../../third_party/v8/builtins/array-sort.tq:1425:13
                            int31_t t2961 = 0;
                            TNode<Smi> t2962 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2961)));
                            *nof_wins_a_502 = implicit_cast<TNode<Smi>>(t2962);
                            // ../../third_party/v8/builtins/array-sort.tq:1427:13
                            {
                              Label label__True_847_impl(this);
                              Label* label__True_847 = &label__True_847_impl;
                              USE(label__True_847);
                              Label label__False_848_impl(this, {});
                              Label* label__False_848 = &label__False_848_impl;
                              USE(label__False_848);
                              int31_t t2963 = 1;
                              TNode<Smi> t2964 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2963)));
                              TNode<BoolT> t2965 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t2964)));
                              USE(implicit_cast<TNode<BoolT>>(t2965));
                              Branch(implicit_cast<TNode<BoolT>>(t2965), label__True_847, label__False_848);
                              if (label__True_847->is_used())
                              {
                                BIND(label__True_847);
                                // ../../third_party/v8/builtins/array-sort.tq:1427:32
                                Goto(label_CopyA_832);
                              }
                              BIND(label__False_848);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1428:13
                            {
                              Label label__True_849_impl(this);
                              Label* label__True_849 = &label__True_849_impl;
                              USE(label__True_849);
                              Label label__False_850_impl(this, {});
                              Label* label__False_850 = &label__False_850_impl;
                              USE(label__False_850);
                              TNode<BoolT> t2966 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_b_503).value()), implicit_cast<TNode<Smi>>((*min_gallop_501).value())));
                              USE(implicit_cast<TNode<BoolT>>(t2966));
                              Branch(implicit_cast<TNode<BoolT>>(t2966), label__True_849, label__False_850);
                              if (label__True_849->is_used())
                              {
                                BIND(label__True_849);
                                // ../../third_party/v8/builtins/array-sort.tq:1428:43
                                Goto(label__False_840);
                              }
                              BIND(label__False_850);
                            }
                          }
                          Goto(label_if_done_label_1023_1407);
                        }
                        BIND(label_if_done_label_1023_1407);
                      }
                    }
                    Goto(label_header_1022_1406);
                  }
                  BIND(label__False_840);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1435:9
                TNode<Smi> t2967 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t2968 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*min_gallop_501).value()), implicit_cast<TNode<Smi>>(t2967)));
                *min_gallop_501 = implicit_cast<TNode<Smi>>(t2968);
                // ../../third_party/v8/builtins/array-sort.tq:1436:9
                TVARIABLE(BoolT, first_iteration_506_impl);
                auto first_iteration_506 = &first_iteration_506_impl;
                USE(first_iteration_506);
                TNode<BoolT> t2969 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                *first_iteration_506 = implicit_cast<TNode<BoolT>>(t2969);
                // ../../third_party/v8/builtins/array-sort.tq:1437:9
                {
                  Label label__True_851_impl(this);
                  Label* label__True_851 = &label__True_851_impl;
                  USE(label__True_851);
                  Label label__False_852_impl(this);
                  Label* label__False_852 = &label__False_852_impl;
                  USE(label__False_852);
                  Label label_header_1024_1408_impl(this, {cursor_a_500, cursor_temp_499, dest_498, elements_497, first_iteration_506, length_a_495, length_b_496, min_gallop_501, nof_wins_a_502, nof_wins_b_503});
                  Label* label_header_1024_1408 = &label_header_1024_1408_impl;
                  USE(label_header_1024_1408);
                  Goto(label_header_1024_1408);
                  BIND(label_header_1024_1408);
                  Label label__False_853_impl(this);
                  Label* label__False_853 = &label__False_853_impl;
                  USE(label__False_853);
                  Label label__False_854_impl(this);
                  Label* label__False_854 = &label__False_854_impl;
                  USE(label__False_854);
                  TNode<Smi> t2970 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t2971 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_a_502).value()), implicit_cast<TNode<Smi>>(t2970)));
                  USE(implicit_cast<TNode<BoolT>>(t2971));
                  GotoIf(implicit_cast<TNode<BoolT>>(t2971), label__True_851);
                  TNode<Smi> t2972 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMinGallopWins())));
                  TNode<BoolT> t2973 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*nof_wins_b_503).value()), implicit_cast<TNode<Smi>>(t2972)));
                  USE(implicit_cast<TNode<BoolT>>(t2973));
                  GotoIf(implicit_cast<TNode<BoolT>>(t2973), label__True_851);
                  Branch(implicit_cast<TNode<BoolT>>((*first_iteration_506).value()), label__True_851, label__False_852);
                  if (label__True_851->is_used())
                  {
                    BIND(label__True_851);
                    // ../../third_party/v8/builtins/array-sort.tq:1438:33
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1439:11
                      TNode<BoolT> t2974 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                      *first_iteration_506 = implicit_cast<TNode<BoolT>>(t2974);
                      // ../../third_party/v8/builtins/array-sort.tq:1441:11
                      // ../../third_party/v8/builtins/array-sort.tq:1443:11
                      int31_t t2975 = 1;
                      int31_t t2976 = 1;
                      TNode<Smi> t2977 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2976)));
                      TNode<Smi> t2978 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*min_gallop_501).value()), implicit_cast<TNode<Smi>>(t2977)));
                      USE(implicit_cast<TNode<Smi>>(t2978));
                      TNode<Smi> t2979 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2975)));
                      TNode<Smi> t2980 = UncheckedCast<Smi>(SmiMax(implicit_cast<TNode<Smi>>(t2979), implicit_cast<TNode<Smi>>(t2978)));
                      USE(implicit_cast<TNode<Smi>>(t2980));
                      *min_gallop_501 = implicit_cast<TNode<Smi>>(t2980);
                      // ../../third_party/v8/builtins/array-sort.tq:1444:11
                      StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*min_gallop_501).value()));
                      // ../../third_party/v8/builtins/array-sort.tq:1446:11
                      TNode<Object> t2981 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1018)), implicit_cast<TNode<Smi>>((*cursor_temp_499).value())));
                      int31_t t2982 = 1;
                      TNode<Smi> t2983 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2982)));
                      TNode<Smi> t2984 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_495).value()), implicit_cast<TNode<Smi>>(t2983)));
                      USE(implicit_cast<TNode<Smi>>(t2984));
                      TNode<Smi> t2985 = UncheckedCast<Smi>(CallGallopRight(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1016)), implicit_cast<TNode<Object>>(t2981), implicit_cast<TNode<Smi>>(p_baseA), implicit_cast<TNode<Smi>>((*length_a_495).value()), implicit_cast<TNode<Smi>>(t2984), implicit_cast<TNode<Oddball>>(False()), label_Bailout_830));
                      USE(implicit_cast<TNode<Smi>>(t2985));
                      TVARIABLE(Smi, k_507_impl);
                      auto k_507 = &k_507_impl;
                      USE(k_507);
                      *k_507 = implicit_cast<TNode<Smi>>(t2985);
                      // ../../third_party/v8/builtins/array-sort.tq:1450:11
                      TNode<HeapObject> t2986 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t2986));
                      *elements_497 = implicit_cast<TNode<HeapObject>>(t2986);
                      // ../../third_party/v8/builtins/array-sort.tq:1451:11
                      // ../../third_party/v8/builtins/array-sort.tq:1452:11
                      TNode<Smi> t2987 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_495).value()), implicit_cast<TNode<Smi>>((*k_507).value())));
                      USE(implicit_cast<TNode<Smi>>(t2987));
                      *nof_wins_a_502 = implicit_cast<TNode<Smi>>(t2987);
                      // ../../third_party/v8/builtins/array-sort.tq:1454:11
                      {
                        Label label__True_855_impl(this);
                        Label* label__True_855 = &label__True_855_impl;
                        USE(label__True_855);
                        Label label__False_856_impl(this, {cursor_a_500, dest_498, length_a_495});
                        Label* label__False_856 = &label__False_856_impl;
                        USE(label__False_856);
                        int31_t t2988 = 0;
                        TNode<Smi> t2989 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2988)));
                        TNode<BoolT> t2990 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nof_wins_a_502).value()), implicit_cast<TNode<Smi>>(t2989)));
                        USE(implicit_cast<TNode<BoolT>>(t2990));
                        Branch(implicit_cast<TNode<BoolT>>(t2990), label__True_855, label__False_856);
                        if (label__True_855->is_used())
                        {
                          BIND(label__True_855);
                          // ../../third_party/v8/builtins/array-sort.tq:1454:31
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1455:13
                            TNode<Smi> t2991 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_502).value())));
                            USE(implicit_cast<TNode<Smi>>(t2991));
                            *dest_498 = implicit_cast<TNode<Smi>>(t2991);
                            // ../../third_party/v8/builtins/array-sort.tq:1456:13
                            TNode<Smi> t2992 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_500).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_502).value())));
                            USE(implicit_cast<TNode<Smi>>(t2992));
                            *cursor_a_500 = implicit_cast<TNode<Smi>>(t2992);
                            // ../../third_party/v8/builtins/array-sort.tq:1457:13
                            int31_t t2993 = 1;
                            TNode<Smi> t2994 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2993)));
                            TNode<Smi> t2995 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_a_500).value()), implicit_cast<TNode<Smi>>(t2994)));
                            USE(implicit_cast<TNode<Smi>>(t2995));
                            int31_t t2996 = 1;
                            TNode<Smi> t2997 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2996)));
                            TNode<Smi> t2998 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>(t2997)));
                            USE(implicit_cast<TNode<Smi>>(t2998));
                            CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>(t2995), implicit_cast<TNode<Smi>>(t2998), implicit_cast<TNode<Smi>>((*nof_wins_a_502).value()), label_Bailout_830);
                            // ../../third_party/v8/builtins/array-sort.tq:1462:13
                            TNode<Smi> t2999 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_495).value()), implicit_cast<TNode<Smi>>((*nof_wins_a_502).value())));
                            USE(implicit_cast<TNode<Smi>>(t2999));
                            *length_a_495 = implicit_cast<TNode<Smi>>(t2999);
                            // ../../third_party/v8/builtins/array-sort.tq:1463:13
                            {
                              Label label__True_857_impl(this);
                              Label* label__True_857 = &label__True_857_impl;
                              USE(label__True_857);
                              Label label__False_858_impl(this, {});
                              Label* label__False_858 = &label__False_858_impl;
                              USE(label__False_858);
                              int31_t t3000 = 0;
                              TNode<Smi> t3001 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3000)));
                              TNode<BoolT> t3002 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_a_495).value()), implicit_cast<TNode<Smi>>(t3001)));
                              USE(implicit_cast<TNode<BoolT>>(t3002));
                              Branch(implicit_cast<TNode<BoolT>>(t3002), label__True_857, label__False_858);
                              if (label__True_857->is_used())
                              {
                                BIND(label__True_857);
                                // ../../third_party/v8/builtins/array-sort.tq:1463:32
                                Goto(label_Succeed_831);
                              }
                              BIND(label__False_858);
                            }
                          }
                          Goto(label__False_856);
                        }
                        BIND(label__False_856);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1465:11
                      TNode<Smi> t3003 = implicit_cast<TNode<Smi>>((*dest_498).value());
                      USE(t3003);
                      TNode<Smi> t3004 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3005 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>(t3004)));
                      *dest_498 = implicit_cast<TNode<Smi>>(t3005);
                      TNode<Smi> t3006 = implicit_cast<TNode<Smi>>((*cursor_temp_499).value());
                      USE(t3006);
                      TNode<Smi> t3007 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3008 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_temp_499).value()), implicit_cast<TNode<Smi>>(t3007)));
                      *cursor_temp_499 = implicit_cast<TNode<Smi>>(t3008);
                      TNode<Object> t3009 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1018)), implicit_cast<TNode<Smi>>(t3006)));
                      CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1017)), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>(t3003), implicit_cast<TNode<Object>>(t3009), label_Bailout_830);
                      // ../../third_party/v8/builtins/array-sort.tq:1469:11
                      {
                        Label label__True_859_impl(this);
                        Label* label__True_859 = &label__True_859_impl;
                        USE(label__True_859);
                        Label label__False_860_impl(this, {length_b_496});
                        Label* label__False_860 = &label__False_860_impl;
                        USE(label__False_860);
                        TNode<Smi> t3010 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t3011 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t3010)));
                        *length_b_496 = implicit_cast<TNode<Smi>>(t3011);
                        int31_t t3012 = 1;
                        TNode<Smi> t3013 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3012)));
                        TNode<BoolT> t3014 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3011), implicit_cast<TNode<Smi>>(t3013)));
                        USE(implicit_cast<TNode<BoolT>>(t3014));
                        Branch(implicit_cast<TNode<BoolT>>(t3014), label__True_859, label__False_860);
                        if (label__True_859->is_used())
                        {
                          BIND(label__True_859);
                          // ../../third_party/v8/builtins/array-sort.tq:1469:32
                          Goto(label_CopyA_832);
                        }
                        BIND(label__False_860);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1471:11
                      TNode<Object> t3015 = UncheckedCast<Object>(CallLoad(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1016)), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>((*cursor_a_500).value()), label_Bailout_830));
                      USE(implicit_cast<TNode<Object>>(t3015));
                      TVARIABLE(Object, key_508_impl);
                      auto key_508 = &key_508_impl;
                      USE(key_508);
                      *key_508 = implicit_cast<TNode<Object>>(t3015);
                      // ../../third_party/v8/builtins/array-sort.tq:1474:11
                      int31_t t3016 = 0;
                      int31_t t3017 = 1;
                      TNode<Smi> t3018 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3017)));
                      TNode<Smi> t3019 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t3018)));
                      USE(implicit_cast<TNode<Smi>>(t3019));
                      TNode<Smi> t3020 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3016)));
                      TNode<Smi> t3021 = UncheckedCast<Smi>(CallGallopLeft(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad19ATTempArrayElements).code())), implicit_cast<TNode<Object>>((*key_508).value()), implicit_cast<TNode<Smi>>(t3020), implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t3019), implicit_cast<TNode<Oddball>>(True()), label_Bailout_830));
                      USE(implicit_cast<TNode<Smi>>(t3021));
                      *k_507 = implicit_cast<TNode<Smi>>(t3021);
                      // ../../third_party/v8/builtins/array-sort.tq:1477:11
                      TNode<HeapObject> t3022 = UncheckedCast<HeapObject>(ReloadElements(implicit_cast<TNode<FixedArray>>(p_sortState)));
                      USE(implicit_cast<TNode<HeapObject>>(t3022));
                      *elements_497 = implicit_cast<TNode<HeapObject>>(t3022);
                      // ../../third_party/v8/builtins/array-sort.tq:1478:11
                      // ../../third_party/v8/builtins/array-sort.tq:1479:11
                      TNode<Smi> t3023 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>((*k_507).value())));
                      USE(implicit_cast<TNode<Smi>>(t3023));
                      *nof_wins_b_503 = implicit_cast<TNode<Smi>>(t3023);
                      // ../../third_party/v8/builtins/array-sort.tq:1481:11
                      {
                        Label label__True_861_impl(this);
                        Label* label__True_861 = &label__True_861_impl;
                        USE(label__True_861);
                        Label label__False_862_impl(this, {cursor_temp_499, dest_498, length_b_496});
                        Label* label__False_862 = &label__False_862_impl;
                        USE(label__False_862);
                        int31_t t3024 = 0;
                        TNode<Smi> t3025 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3024)));
                        TNode<BoolT> t3026 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*nof_wins_b_503).value()), implicit_cast<TNode<Smi>>(t3025)));
                        USE(implicit_cast<TNode<BoolT>>(t3026));
                        Branch(implicit_cast<TNode<BoolT>>(t3026), label__True_861, label__False_862);
                        if (label__True_861->is_used())
                        {
                          BIND(label__True_861);
                          // ../../third_party/v8/builtins/array-sort.tq:1481:31
                          {
                            // ../../third_party/v8/builtins/array-sort.tq:1482:13
                            TNode<Smi> t3027 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_503).value())));
                            USE(implicit_cast<TNode<Smi>>(t3027));
                            *dest_498 = implicit_cast<TNode<Smi>>(t3027);
                            // ../../third_party/v8/builtins/array-sort.tq:1483:13
                            TNode<Smi> t3028 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_temp_499).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_503).value())));
                            USE(implicit_cast<TNode<Smi>>(t3028));
                            *cursor_temp_499 = implicit_cast<TNode<Smi>>(t3028);
                            // ../../third_party/v8/builtins/array-sort.tq:1484:13
                            int31_t t3029 = 1;
                            TNode<Smi> t3030 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3029)));
                            TNode<Smi> t3031 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>(t3030)));
                            USE(implicit_cast<TNode<Smi>>(t3031));
                            int31_t t3032 = 1;
                            TNode<Smi> t3033 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3032)));
                            TNode<Smi> t3034 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_temp_499).value()), implicit_cast<TNode<Smi>>(t3033)));
                            USE(implicit_cast<TNode<Smi>>(t3034));
                            CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>(t3031), implicit_cast<TNode<FixedArray>>((*temp_array_1018)), implicit_cast<TNode<Smi>>(t3034), implicit_cast<TNode<Smi>>((*nof_wins_b_503).value()), label_Bailout_830);
                            // ../../third_party/v8/builtins/array-sort.tq:1488:13
                            TNode<Smi> t3035 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>((*nof_wins_b_503).value())));
                            USE(implicit_cast<TNode<Smi>>(t3035));
                            *length_b_496 = implicit_cast<TNode<Smi>>(t3035);
                            // ../../third_party/v8/builtins/array-sort.tq:1489:13
                            {
                              Label label__True_863_impl(this);
                              Label* label__True_863 = &label__True_863_impl;
                              USE(label__True_863);
                              Label label__False_864_impl(this, {});
                              Label* label__False_864 = &label__False_864_impl;
                              USE(label__False_864);
                              int31_t t3036 = 1;
                              TNode<Smi> t3037 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3036)));
                              TNode<BoolT> t3038 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t3037)));
                              USE(implicit_cast<TNode<BoolT>>(t3038));
                              Branch(implicit_cast<TNode<BoolT>>(t3038), label__True_863, label__False_864);
                              if (label__True_863->is_used())
                              {
                                BIND(label__True_863);
                                // ../../third_party/v8/builtins/array-sort.tq:1489:32
                                Goto(label_CopyA_832);
                              }
                              BIND(label__False_864);
                            }
                            // ../../third_party/v8/builtins/array-sort.tq:1493:13
                            {
                              Label label__True_865_impl(this);
                              Label* label__True_865 = &label__True_865_impl;
                              USE(label__True_865);
                              Label label__False_866_impl(this, {});
                              Label* label__False_866 = &label__False_866_impl;
                              USE(label__False_866);
                              int31_t t3039 = 0;
                              TNode<Smi> t3040 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3039)));
                              TNode<BoolT> t3041 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t3040)));
                              USE(implicit_cast<TNode<BoolT>>(t3041));
                              Branch(implicit_cast<TNode<BoolT>>(t3041), label__True_865, label__False_866);
                              if (label__True_865->is_used())
                              {
                                BIND(label__True_865);
                                // ../../third_party/v8/builtins/array-sort.tq:1493:32
                                Goto(label_Succeed_831);
                              }
                              BIND(label__False_866);
                            }
                          }
                          Goto(label__False_862);
                        }
                        BIND(label__False_862);
                      }
                      // ../../third_party/v8/builtins/array-sort.tq:1495:11
                      TNode<Smi> t3042 = implicit_cast<TNode<Smi>>((*cursor_a_500).value());
                      USE(t3042);
                      TNode<Smi> t3043 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3044 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_500).value()), implicit_cast<TNode<Smi>>(t3043)));
                      *cursor_a_500 = implicit_cast<TNode<Smi>>(t3044);
                      TNode<Smi> t3045 = implicit_cast<TNode<Smi>>((*dest_498).value());
                      USE(t3045);
                      TNode<Smi> t3046 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3047 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>(t3046)));
                      *dest_498 = implicit_cast<TNode<Smi>>(t3047);
                      CopyElement(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*LoadF_1016)), implicit_cast<TNode<Code>>((*Store_1017)), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>(t3042), implicit_cast<TNode<Smi>>(t3045), label_Bailout_830);
                      // ../../third_party/v8/builtins/array-sort.tq:1498:11
                      {
                        Label label__True_867_impl(this);
                        Label* label__True_867 = &label__True_867_impl;
                        USE(label__True_867);
                        Label label__False_868_impl(this, {length_a_495});
                        Label* label__False_868 = &label__False_868_impl;
                        USE(label__False_868);
                        TNode<Smi> t3048 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                        TNode<Smi> t3049 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_a_495).value()), implicit_cast<TNode<Smi>>(t3048)));
                        *length_a_495 = implicit_cast<TNode<Smi>>(t3049);
                        int31_t t3050 = 0;
                        TNode<Smi> t3051 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3050)));
                        TNode<BoolT> t3052 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t3049), implicit_cast<TNode<Smi>>(t3051)));
                        USE(implicit_cast<TNode<BoolT>>(t3052));
                        Branch(implicit_cast<TNode<BoolT>>(t3052), label__True_867, label__False_868);
                        if (label__True_867->is_used())
                        {
                          BIND(label__True_867);
                          // ../../third_party/v8/builtins/array-sort.tq:1498:32
                          Goto(label_Succeed_831);
                        }
                        BIND(label__False_868);
                      }
                    }
                    Goto(label_header_1024_1408);
                  }
                  BIND(label__False_852);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1500:9
                TNode<Smi> t3053 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3054 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*min_gallop_501).value()), implicit_cast<TNode<Smi>>(t3053)));
                *min_gallop_501 = implicit_cast<TNode<Smi>>(t3054);
                // ../../third_party/v8/builtins/array-sort.tq:1501:9
                StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>((*min_gallop_501).value()));
              }
              Goto(label_header_1021_1405);
            }
            BIND(label__False_838);
          }
        }
        Goto(label_try_done_1019_1403);
      }
      if (label_Succeed_831->is_used())
      {
        BIND(label_Succeed_831);
        // ../../third_party/v8/builtins/array-sort.tq:1504:19
        {
          // ../../third_party/v8/builtins/array-sort.tq:1505:7
          {
            Label label__True_869_impl(this);
            Label* label__True_869 = &label__True_869_impl;
            USE(label__True_869);
            Label label__False_870_impl(this, {});
            Label* label__False_870 = &label__False_870_impl;
            USE(label__False_870);
            int31_t t3055 = 0;
            TNode<Smi> t3056 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3055)));
            TNode<BoolT> t3057 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t3056)));
            USE(implicit_cast<TNode<BoolT>>(t3057));
            Branch(implicit_cast<TNode<BoolT>>(t3057), label__True_869, label__False_870);
            if (label__True_869->is_used())
            {
              BIND(label__True_869);
              // ../../third_party/v8/builtins/array-sort.tq:1505:25
              {
                // ../../third_party/v8/builtins/array-sort.tq:1506:9
                // ../../third_party/v8/builtins/array-sort.tq:1507:9
                int31_t t3058 = 1;
                TNode<Smi> t3059 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3058)));
                TNode<Smi> t3060 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*length_b_496).value()), implicit_cast<TNode<Smi>>(t3059)));
                USE(implicit_cast<TNode<Smi>>(t3060));
                TNode<Smi> t3061 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>(t3060)));
                USE(implicit_cast<TNode<Smi>>(t3061));
                int31_t t3062 = 0;
                TNode<Smi> t3063 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3062)));
                CallCopyFromTempArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>(t3061), implicit_cast<TNode<FixedArray>>((*temp_array_1018)), implicit_cast<TNode<Smi>>(t3063), implicit_cast<TNode<Smi>>((*length_b_496).value()), label_Bailout_830);
              }
              Goto(label__False_870);
            }
            BIND(label__False_870);
          }
        }
        Goto(label_try_done_1019_1403);
      }
      if (label_CopyA_832->is_used())
      {
        BIND(label_CopyA_832);
        // ../../third_party/v8/builtins/array-sort.tq:1512:17
        {
          // ../../third_party/v8/builtins/array-sort.tq:1513:7
          // ../../third_party/v8/builtins/array-sort.tq:1516:7
          TNode<Smi> t3064 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>((*length_a_495).value())));
          USE(implicit_cast<TNode<Smi>>(t3064));
          *dest_498 = implicit_cast<TNode<Smi>>(t3064);
          // ../../third_party/v8/builtins/array-sort.tq:1517:7
          TNode<Smi> t3065 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*cursor_a_500).value()), implicit_cast<TNode<Smi>>((*length_a_495).value())));
          USE(implicit_cast<TNode<Smi>>(t3065));
          *cursor_a_500 = implicit_cast<TNode<Smi>>(t3065);
          // ../../third_party/v8/builtins/array-sort.tq:1518:7
          int31_t t3066 = 1;
          TNode<Smi> t3067 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3066)));
          TNode<Smi> t3068 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*cursor_a_500).value()), implicit_cast<TNode<Smi>>(t3067)));
          USE(implicit_cast<TNode<Smi>>(t3068));
          int31_t t3069 = 1;
          TNode<Smi> t3070 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3069)));
          TNode<Smi> t3071 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Smi>>(t3070)));
          USE(implicit_cast<TNode<Smi>>(t3071));
          CallCopyWithinSortArray(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>(t3068), implicit_cast<TNode<Smi>>(t3071), implicit_cast<TNode<Smi>>((*length_a_495).value()), label_Bailout_830);
          // ../../third_party/v8/builtins/array-sort.tq:1521:7
          TNode<Object> t3072 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>((*temp_array_1018)), implicit_cast<TNode<Smi>>((*cursor_temp_499).value())));
          CallStore(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Code>>((*Store_1017)), implicit_cast<TNode<HeapObject>>((*elements_497).value()), implicit_cast<TNode<Smi>>((*dest_498).value()), implicit_cast<TNode<Object>>(t3072), label_Bailout_830);
        }
        Goto(label_try_done_1019_1403);
      }
      BIND(label_try_done_1019_1403);
    }
  }
}

compiler::TNode<Smi> ArrayBuiltinsFromDSLAssembler::ComputeMinRunLength(TNode<Smi> p_nArg) {
  TVARIABLE(Smi, _return_509_impl);
  auto _return_509 = &_return_509_impl;
  USE(_return_509);
  Label label_macro_end_1409_impl(this, {_return_509});
  Label* label_macro_end_1409 = &label_macro_end_1409_impl;
  USE(label_macro_end_1409);
  // ../../third_party/v8/builtins/array-sort.tq:1536:45
  {
    // ../../third_party/v8/builtins/array-sort.tq:1537:5
    TVARIABLE(Smi, n_510_impl);
    auto n_510 = &n_510_impl;
    USE(n_510);
    *n_510 = implicit_cast<TNode<Smi>>(p_nArg);
    // ../../third_party/v8/builtins/array-sort.tq:1538:5
    int31_t t3073 = 0;
    TVARIABLE(Smi, r_511_impl);
    auto r_511 = &r_511_impl;
    USE(r_511);
    TNode<Smi> t3074 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3073)));
    *r_511 = implicit_cast<TNode<Smi>>(t3074);
    // ../../third_party/v8/builtins/array-sort.tq:1540:5
    // ../../third_party/v8/builtins/array-sort.tq:1541:5
    {
      Label label__True_871_impl(this);
      Label* label__True_871 = &label__True_871_impl;
      USE(label__True_871);
      Label label__False_872_impl(this);
      Label* label__False_872 = &label__False_872_impl;
      USE(label__False_872);
      Label label_header_1025_1410_impl(this, {n_510, r_511});
      Label* label_header_1025_1410 = &label_header_1025_1410_impl;
      USE(label_header_1025_1410);
      Goto(label_header_1025_1410);
      BIND(label_header_1025_1410);
      int31_t t3075 = 64;
      TNode<Smi> t3076 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3075)));
      TNode<BoolT> t3077 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(implicit_cast<TNode<Smi>>((*n_510).value()), implicit_cast<TNode<Smi>>(t3076)));
      USE(implicit_cast<TNode<BoolT>>(t3077));
      Branch(implicit_cast<TNode<BoolT>>(t3077), label__True_871, label__False_872);
      if (label__True_871->is_used())
      {
        BIND(label__True_871);
        // ../../third_party/v8/builtins/array-sort.tq:1541:21
        {
          // ../../third_party/v8/builtins/array-sort.tq:1542:7
          int31_t t3078 = 1;
          TNode<Smi> t3079 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3078)));
          TNode<Smi> t3080 = UncheckedCast<Smi>(SmiAnd(implicit_cast<TNode<Smi>>((*n_510).value()), implicit_cast<TNode<Smi>>(t3079)));
          USE(implicit_cast<TNode<Smi>>(t3080));
          TNode<Smi> t3081 = UncheckedCast<Smi>(SmiOr(implicit_cast<TNode<Smi>>((*r_511).value()), implicit_cast<TNode<Smi>>(t3080)));
          USE(implicit_cast<TNode<Smi>>(t3081));
          *r_511 = implicit_cast<TNode<Smi>>(t3081);
          // ../../third_party/v8/builtins/array-sort.tq:1543:7
          int31_t t3082 = 1;
          TNode<Smi> t3083 = UncheckedCast<Smi>(SmiShr(implicit_cast<TNode<Smi>>((*n_510).value()), implicit_cast<int31_t>(t3082)));
          USE(implicit_cast<TNode<Smi>>(t3083));
          *n_510 = implicit_cast<TNode<Smi>>(t3083);
        }
        Goto(label_header_1025_1410);
      }
      BIND(label__False_872);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1546:5
    TNode<Smi> t3084 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_510).value()), implicit_cast<TNode<Smi>>((*r_511).value())));
    USE(implicit_cast<TNode<Smi>>(t3084));
    TNode<Smi> min_run_length_1026_impl;
    auto min_run_length_1026 = &min_run_length_1026_impl;
    USE(min_run_length_1026);
    *min_run_length_1026 = implicit_cast<TNode<Smi>>(t3084);
    // ../../third_party/v8/builtins/array-sort.tq:1547:5
    // ../../third_party/v8/builtins/array-sort.tq:1548:5
    *_return_509 = implicit_cast<TNode<Smi>>((*min_run_length_1026));
    Goto(label_macro_end_1409);
  }
  BIND(label_macro_end_1409);
  return implicit_cast<TNode<Smi>>((*_return_509).value());
}

compiler::TNode<BoolT> ArrayBuiltinsFromDSLAssembler::RunInvariantEstablished(TNode<FixedArray> p_pendingRuns, TNode<Smi> p_n) {
  TVARIABLE(BoolT, _return_512_impl);
  auto _return_512 = &_return_512_impl;
  USE(_return_512);
  Label label_macro_end_1411_impl(this, {_return_512});
  Label* label_macro_end_1411 = &label_macro_end_1411_impl;
  USE(label_macro_end_1411);
  // ../../third_party/v8/builtins/array-sort.tq:1552:72
  {
    // ../../third_party/v8/builtins/array-sort.tq:1553:5
    {
      Label label__True_873_impl(this);
      Label* label__True_873 = &label__True_873_impl;
      USE(label__True_873);
      Label label__False_874_impl(this, {});
      Label* label__False_874 = &label__False_874_impl;
      USE(label__False_874);
      int31_t t3085 = 2;
      TNode<Smi> t3086 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3085)));
      TNode<BoolT> t3087 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_n), implicit_cast<TNode<Smi>>(t3086)));
      USE(implicit_cast<TNode<BoolT>>(t3087));
      Branch(implicit_cast<TNode<BoolT>>(t3087), label__True_873, label__False_874);
      if (label__True_873->is_used())
      {
        BIND(label__True_873);
        // ../../third_party/v8/builtins/array-sort.tq:1553:16
        TNode<BoolT> t3088 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
        *_return_512 = implicit_cast<TNode<BoolT>>(t3088);
        Goto(label_macro_end_1411);
      }
      BIND(label__False_874);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1555:5
    TNode<Smi> t3089 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(p_n)));
    USE(implicit_cast<TNode<Smi>>(t3089));
    TNode<Smi> run_length_n_1027_impl;
    auto run_length_n_1027 = &run_length_n_1027_impl;
    USE(run_length_n_1027);
    *run_length_n_1027 = implicit_cast<TNode<Smi>>(t3089);
    // ../../third_party/v8/builtins/array-sort.tq:1556:5
    int31_t t3090 = 1;
    TNode<Smi> t3091 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3090)));
    TNode<Smi> t3092 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_n), implicit_cast<TNode<Smi>>(t3091)));
    USE(implicit_cast<TNode<Smi>>(t3092));
    TNode<Smi> t3093 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t3092)));
    USE(implicit_cast<TNode<Smi>>(t3093));
    TNode<Smi> run_length_nm_1028_impl;
    auto run_length_nm_1028 = &run_length_nm_1028_impl;
    USE(run_length_nm_1028);
    *run_length_nm_1028 = implicit_cast<TNode<Smi>>(t3093);
    // ../../third_party/v8/builtins/array-sort.tq:1557:5
    int31_t t3094 = 2;
    TNode<Smi> t3095 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3094)));
    TNode<Smi> t3096 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_n), implicit_cast<TNode<Smi>>(t3095)));
    USE(implicit_cast<TNode<Smi>>(t3096));
    TNode<Smi> t3097 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>(p_pendingRuns), implicit_cast<TNode<Smi>>(t3096)));
    USE(implicit_cast<TNode<Smi>>(t3097));
    TNode<Smi> run_length_nmm_1029_impl;
    auto run_length_nmm_1029 = &run_length_nmm_1029_impl;
    USE(run_length_nmm_1029);
    *run_length_nmm_1029 = implicit_cast<TNode<Smi>>(t3097);
    // ../../third_party/v8/builtins/array-sort.tq:1559:5
    TNode<Smi> t3098 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*run_length_nm_1028)), implicit_cast<TNode<Smi>>((*run_length_n_1027))));
    USE(implicit_cast<TNode<Smi>>(t3098));
    TNode<BoolT> t3099 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*run_length_nmm_1029)), implicit_cast<TNode<Smi>>(t3098)));
    USE(implicit_cast<TNode<BoolT>>(t3099));
    *_return_512 = implicit_cast<TNode<BoolT>>(t3099);
    Goto(label_macro_end_1411);
  }
  BIND(label_macro_end_1411);
  return implicit_cast<TNode<BoolT>>((*_return_512).value());
}

void ArrayBuiltinsFromDSLAssembler::MergeCollapse(TNode<Context> p_context, TNode<FixedArray> p_sortState, Label* label_Bailout_875) {
  Label label_macro_end_1412_impl(this, {});
  Label* label_macro_end_1412 = &label_macro_end_1412_impl;
  USE(label_macro_end_1412);
  // ../../third_party/v8/builtins/array-sort.tq:1572:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1573:5
    TNode<Object> t3100 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t3101 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t3100)));
    USE(implicit_cast<TNode<FixedArray>>(t3101));
    TNode<FixedArray> pending_runs_1030_impl;
    auto pending_runs_1030 = &pending_runs_1030_impl;
    USE(pending_runs_1030);
    *pending_runs_1030 = implicit_cast<TNode<FixedArray>>(t3101);
    // ../../third_party/v8/builtins/array-sort.tq:1577:5
    {
      Label label__True_876_impl(this);
      Label* label__True_876 = &label__True_876_impl;
      USE(label__True_876);
      Label label__False_877_impl(this);
      Label* label__False_877 = &label__False_877_impl;
      USE(label__False_877);
      Label label_header_1031_1413_impl(this, {});
      Label* label_header_1031_1413 = &label_header_1031_1413_impl;
      USE(label_header_1031_1413);
      Goto(label_header_1031_1413);
      BIND(label_header_1031_1413);
      TNode<Smi> t3102 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<Smi>>(t3102));
      int31_t t3103 = 1;
      TNode<Smi> t3104 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3103)));
      TNode<BoolT> t3105 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(t3102), implicit_cast<TNode<Smi>>(t3104)));
      USE(implicit_cast<TNode<BoolT>>(t3105));
      Branch(implicit_cast<TNode<BoolT>>(t3105), label__True_876, label__False_877);
      if (label__True_876->is_used())
      {
        BIND(label__True_876);
        // ../../third_party/v8/builtins/array-sort.tq:1577:47
        {
          // ../../third_party/v8/builtins/array-sort.tq:1578:7
          TNode<Smi> t3106 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t3106));
          int31_t t3107 = 2;
          TNode<Smi> t3108 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3107)));
          TNode<Smi> t3109 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3106), implicit_cast<TNode<Smi>>(t3108)));
          USE(implicit_cast<TNode<Smi>>(t3109));
          TVARIABLE(Smi, n_513_impl);
          auto n_513 = &n_513_impl;
          USE(n_513);
          *n_513 = implicit_cast<TNode<Smi>>(t3109);
          // ../../third_party/v8/builtins/array-sort.tq:1580:7
          {
            Label label__True_878_impl(this);
            Label* label__True_878 = &label__True_878_impl;
            USE(label__True_878);
            Label label__False_879_impl(this);
            Label* label__False_879 = &label__False_879_impl;
            USE(label__False_879);
            Label label_if_done_label_1032_1414_impl(this, {n_513});
            Label* label_if_done_label_1032_1414 = &label_if_done_label_1032_1414_impl;
            USE(label_if_done_label_1032_1414);
            Label label__False_880_impl(this);
            Label* label__False_880 = &label__False_880_impl;
            USE(label__False_880);
            int31_t t3110 = 1;
            TNode<Smi> t3111 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3110)));
            TNode<Smi> t3112 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_513).value()), implicit_cast<TNode<Smi>>(t3111)));
            USE(implicit_cast<TNode<Smi>>(t3112));
            TNode<BoolT> t3113 = UncheckedCast<BoolT>(RunInvariantEstablished(implicit_cast<TNode<FixedArray>>((*pending_runs_1030)), implicit_cast<TNode<Smi>>(t3112)));
            USE(implicit_cast<TNode<BoolT>>(t3113));
            TNode<BoolT> t3114 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3113)));
            USE(implicit_cast<TNode<BoolT>>(t3114));
            GotoIf(implicit_cast<TNode<BoolT>>(t3114), label__True_878);
            TNode<BoolT> t3115 = UncheckedCast<BoolT>(RunInvariantEstablished(implicit_cast<TNode<FixedArray>>((*pending_runs_1030)), implicit_cast<TNode<Smi>>((*n_513).value())));
            USE(implicit_cast<TNode<BoolT>>(t3115));
            TNode<BoolT> t3116 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3115)));
            USE(implicit_cast<TNode<BoolT>>(t3116));
            Branch(implicit_cast<TNode<BoolT>>(t3116), label__True_878, label__False_879);
            if (label__True_878->is_used())
            {
              BIND(label__True_878);
              // ../../third_party/v8/builtins/array-sort.tq:1581:54
              {
                // ../../third_party/v8/builtins/array-sort.tq:1582:9
                {
                  Label label__True_881_impl(this);
                  Label* label__True_881 = &label__True_881_impl;
                  USE(label__True_881);
                  Label label__False_882_impl(this, {n_513});
                  Label* label__False_882 = &label__False_882_impl;
                  USE(label__False_882);
                  int31_t t3117 = 1;
                  TNode<Smi> t3118 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3117)));
                  TNode<Smi> t3119 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_513).value()), implicit_cast<TNode<Smi>>(t3118)));
                  USE(implicit_cast<TNode<Smi>>(t3119));
                  TNode<Smi> t3120 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1030)), implicit_cast<TNode<Smi>>(t3119)));
                  USE(implicit_cast<TNode<Smi>>(t3120));
                  int31_t t3121 = 1;
                  TNode<Smi> t3122 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3121)));
                  TNode<Smi> t3123 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_513).value()), implicit_cast<TNode<Smi>>(t3122)));
                  USE(implicit_cast<TNode<Smi>>(t3123));
                  TNode<Smi> t3124 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1030)), implicit_cast<TNode<Smi>>(t3123)));
                  USE(implicit_cast<TNode<Smi>>(t3124));
                  TNode<BoolT> t3125 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3120), implicit_cast<TNode<Smi>>(t3124)));
                  USE(implicit_cast<TNode<BoolT>>(t3125));
                  Branch(implicit_cast<TNode<BoolT>>(t3125), label__True_881, label__False_882);
                  if (label__True_881->is_used())
                  {
                    BIND(label__True_881);
                    // ../../third_party/v8/builtins/array-sort.tq:1583:55
                    {
                      // ../../third_party/v8/builtins/array-sort.tq:1584:11
                      TNode<Smi> t3126 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                      TNode<Smi> t3127 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_513).value()), implicit_cast<TNode<Smi>>(t3126)));
                      *n_513 = implicit_cast<TNode<Smi>>(t3127);
                    }
                    Goto(label__False_882);
                  }
                  BIND(label__False_882);
                }
                // ../../third_party/v8/builtins/array-sort.tq:1587:9
                CallMergeAt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*n_513).value()), label_Bailout_875);
              }
              Goto(label_if_done_label_1032_1414);
            }
            if (label__False_879->is_used())
            {
              BIND(label__False_879);
              // ../../third_party/v8/builtins/array-sort.tq:1588:14
              {
                Label label__True_883_impl(this);
                Label* label__True_883 = &label__True_883_impl;
                USE(label__True_883);
                Label label__False_884_impl(this);
                Label* label__False_884 = &label__False_884_impl;
                USE(label__False_884);
                Label label_if_done_label_1033_1415_impl(this, {});
                Label* label_if_done_label_1033_1415 = &label_if_done_label_1033_1415_impl;
                USE(label_if_done_label_1033_1415);
                TNode<Smi> t3128 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1030)), implicit_cast<TNode<Smi>>((*n_513).value())));
                USE(implicit_cast<TNode<Smi>>(t3128));
                int31_t t3129 = 1;
                TNode<Smi> t3130 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3129)));
                TNode<Smi> t3131 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_513).value()), implicit_cast<TNode<Smi>>(t3130)));
                USE(implicit_cast<TNode<Smi>>(t3131));
                TNode<Smi> t3132 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_1030)), implicit_cast<TNode<Smi>>(t3131)));
                USE(implicit_cast<TNode<Smi>>(t3132));
                TNode<BoolT> t3133 = UncheckedCast<BoolT>(SmiLessThanOrEqual(implicit_cast<TNode<Smi>>(t3128), implicit_cast<TNode<Smi>>(t3132)));
                USE(implicit_cast<TNode<BoolT>>(t3133));
                Branch(implicit_cast<TNode<BoolT>>(t3133), label__True_883, label__False_884);
                if (label__True_883->is_used())
                {
                  BIND(label__True_883);
                  // ../../third_party/v8/builtins/array-sort.tq:1590:53
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1591:9
                    CallMergeAt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*n_513).value()), label_Bailout_875);
                  }
                  Goto(label_if_done_label_1033_1415);
                }
                if (label__False_884->is_used())
                {
                  BIND(label__False_884);
                  // ../../third_party/v8/builtins/array-sort.tq:1592:14
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1593:9
                    Goto(label__False_877);
                  }
                }
                BIND(label_if_done_label_1033_1415);
              }
              Goto(label_if_done_label_1032_1414);
            }
            BIND(label_if_done_label_1032_1414);
          }
        }
        Goto(label_header_1031_1413);
      }
      BIND(label__False_877);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::MergeForceCollapse(TNode<Context> p_context, TNode<FixedArray> p_sortState, Label* label_Bailout_885) {
  Label label_macro_end_1416_impl(this, {});
  Label* label_macro_end_1416 = &label_macro_end_1416_impl;
  USE(label_macro_end_1416);
  // ../../third_party/v8/builtins/array-sort.tq:1601:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1602:5
    TNode<Object> t3134 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx())));
    TNode<FixedArray> t3135 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(t3134)));
    USE(implicit_cast<TNode<FixedArray>>(t3135));
    TVARIABLE(FixedArray, pending_runs_514_impl);
    auto pending_runs_514 = &pending_runs_514_impl;
    USE(pending_runs_514);
    *pending_runs_514 = implicit_cast<TNode<FixedArray>>(t3135);
    // ../../third_party/v8/builtins/array-sort.tq:1606:5
    {
      Label label__True_886_impl(this);
      Label* label__True_886 = &label__True_886_impl;
      USE(label__True_886);
      Label label__False_887_impl(this);
      Label* label__False_887 = &label__False_887_impl;
      USE(label__False_887);
      Label label_header_1034_1417_impl(this, {});
      Label* label_header_1034_1417 = &label_header_1034_1417_impl;
      USE(label_header_1034_1417);
      Goto(label_header_1034_1417);
      BIND(label_header_1034_1417);
      TNode<Smi> t3136 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
      USE(implicit_cast<TNode<Smi>>(t3136));
      int31_t t3137 = 1;
      TNode<Smi> t3138 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3137)));
      TNode<BoolT> t3139 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>(t3136), implicit_cast<TNode<Smi>>(t3138)));
      USE(implicit_cast<TNode<BoolT>>(t3139));
      Branch(implicit_cast<TNode<BoolT>>(t3139), label__True_886, label__False_887);
      if (label__True_886->is_used())
      {
        BIND(label__True_886);
        // ../../third_party/v8/builtins/array-sort.tq:1606:47
        {
          // ../../third_party/v8/builtins/array-sort.tq:1607:7
          TNode<Smi> t3140 = UncheckedCast<Smi>(GetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState)));
          USE(implicit_cast<TNode<Smi>>(t3140));
          int31_t t3141 = 2;
          TNode<Smi> t3142 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3141)));
          TNode<Smi> t3143 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(t3140), implicit_cast<TNode<Smi>>(t3142)));
          USE(implicit_cast<TNode<Smi>>(t3143));
          TVARIABLE(Smi, n_515_impl);
          auto n_515 = &n_515_impl;
          USE(n_515);
          *n_515 = implicit_cast<TNode<Smi>>(t3143);
          // ../../third_party/v8/builtins/array-sort.tq:1609:7
          {
            Label label__True_888_impl(this);
            Label* label__True_888 = &label__True_888_impl;
            USE(label__True_888);
            Label label__False_889_impl(this, {n_515});
            Label* label__False_889 = &label__False_889_impl;
            USE(label__False_889);
            Label label__True_890_impl(this);
            Label* label__True_890 = &label__True_890_impl;
            USE(label__True_890);
            int31_t t3144 = 0;
            TNode<Smi> t3145 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3144)));
            TNode<BoolT> t3146 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*n_515).value()), implicit_cast<TNode<Smi>>(t3145)));
            USE(implicit_cast<TNode<BoolT>>(t3146));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t3146), label__False_889);
            int31_t t3147 = 1;
            TNode<Smi> t3148 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3147)));
            TNode<Smi> t3149 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_515).value()), implicit_cast<TNode<Smi>>(t3148)));
            USE(implicit_cast<TNode<Smi>>(t3149));
            TNode<Smi> t3150 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_514).value()), implicit_cast<TNode<Smi>>(t3149)));
            USE(implicit_cast<TNode<Smi>>(t3150));
            int31_t t3151 = 1;
            TNode<Smi> t3152 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3151)));
            TNode<Smi> t3153 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*n_515).value()), implicit_cast<TNode<Smi>>(t3152)));
            USE(implicit_cast<TNode<Smi>>(t3153));
            TNode<Smi> t3154 = UncheckedCast<Smi>(GetPendingRunLength(implicit_cast<TNode<FixedArray>>((*pending_runs_514).value()), implicit_cast<TNode<Smi>>(t3153)));
            USE(implicit_cast<TNode<Smi>>(t3154));
            TNode<BoolT> t3155 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(t3150), implicit_cast<TNode<Smi>>(t3154)));
            USE(implicit_cast<TNode<BoolT>>(t3155));
            Branch(implicit_cast<TNode<BoolT>>(t3155), label__True_888, label__False_889);
            if (label__True_888->is_used())
            {
              BIND(label__True_888);
              // ../../third_party/v8/builtins/array-sort.tq:1611:57
              {
                // ../../third_party/v8/builtins/array-sort.tq:1612:9
                TNode<Smi> t3156 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
                TNode<Smi> t3157 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*n_515).value()), implicit_cast<TNode<Smi>>(t3156)));
                *n_515 = implicit_cast<TNode<Smi>>(t3157);
              }
              Goto(label__False_889);
            }
            BIND(label__False_889);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1614:7
          CallMergeAt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*n_515).value()), label_Bailout_885);
        }
        Goto(label_header_1034_1417);
      }
      BIND(label__False_887);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortState(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1418_impl(this, {});
  Label* label_macro_end_1418 = &label_macro_end_1418_impl;
  USE(label_macro_end_1418);
  // ../../third_party/v8/builtins/array-sort.tq:1618:52
  {
    // ../../third_party/v8/builtins/array-sort.tq:1619:5
    TNode<Smi> t3158 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(kMinGallopWins())));
    USE(implicit_cast<TNode<Smi>>(t3158));
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kMinGallopIdx()), implicit_cast<TNode<Object>>(t3158));
    // ../../third_party/v8/builtins/array-sort.tq:1620:5
    int31_t t3159 = 0;
    TNode<Smi> t3160 = UncheckedCast<Smi>(SmiConstant(implicit_cast<int31_t>(t3159)));
    USE(implicit_cast<TNode<Smi>>(t3160));
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kTempArraySizeIdx()), implicit_cast<TNode<Object>>(t3160));
    // ../../third_party/v8/builtins/array-sort.tq:1622:5
    int31_t t3161 = 0;
    TNode<Smi> t3162 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3161)));
    SetPendingRunsSize(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(t3162));
    // ../../third_party/v8/builtins/array-sort.tq:1623:5
    TNode<IntPtrT> t3163 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<int31_t>(kMaxMergePending())));
    USE(implicit_cast<TNode<IntPtrT>>(t3163));
    TNode<FixedArray> t3164 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(t3163)));
    USE(implicit_cast<TNode<FixedArray>>(t3164));
    TVARIABLE(FixedArray, pending_runs_516_impl);
    auto pending_runs_516 = &pending_runs_516_impl;
    USE(pending_runs_516);
    *pending_runs_516 = implicit_cast<TNode<FixedArray>>(t3164);
    // ../../third_party/v8/builtins/array-sort.tq:1625:5
    TNode<Smi> t3165 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(kMaxMergePending())));
    FillFixedArrayWithSmiZero(implicit_cast<TNode<FixedArray>>((*pending_runs_516).value()), implicit_cast<TNode<Smi>>(t3165));
    // ../../third_party/v8/builtins/array-sort.tq:1626:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kPendingRunsIdx()), implicit_cast<TNode<Object>>((*pending_runs_516).value()));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor25ATGenericElementsAccessor(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1419_impl(this, {});
  Label* label_macro_end_1419 = &label_macro_end_1419_impl;
  USE(label_macro_end_1419);
  // ../../third_party/v8/builtins/array-sort.tq:1636:79
  {
    // ../../third_party/v8/builtins/array-sort.tq:1637:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kGenericElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1638:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad25ATGenericElementsAccessor).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1639:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore25ATGenericElementsAccessor).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1640:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor25ATGenericElementsAccessor).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::ArrayTimSortImpl(TNode<Context> p_context, TNode<FixedArray> p_sortState, TNode<Smi> p_length, Label* label_Bailout_891) {
  Label label_macro_end_1420_impl(this, {});
  Label* label_macro_end_1420 = &label_macro_end_1420_impl;
  USE(label_macro_end_1420);
  // ../../third_party/v8/builtins/array-sort.tq:1645:18
  {
    // ../../third_party/v8/builtins/array-sort.tq:1646:5
    InitializeSortState(implicit_cast<TNode<FixedArray>>(p_sortState));
    // ../../third_party/v8/builtins/array-sort.tq:1648:5
    {
      Label label__True_892_impl(this);
      Label* label__True_892 = &label__True_892_impl;
      USE(label__True_892);
      Label label__False_893_impl(this, {});
      Label* label__False_893 = &label__False_893_impl;
      USE(label__False_893);
      int31_t t3166 = 2;
      TNode<Smi> t3167 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3166)));
      TNode<BoolT> t3168 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3167)));
      USE(implicit_cast<TNode<BoolT>>(t3168));
      Branch(implicit_cast<TNode<BoolT>>(t3168), label__True_892, label__False_893);
      if (label__True_892->is_used())
      {
        BIND(label__True_892);
        // ../../third_party/v8/builtins/array-sort.tq:1648:21
        Goto(label_macro_end_1420);
      }
      BIND(label__False_893);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1649:5
    TVARIABLE(Smi, remaining_517_impl);
    auto remaining_517 = &remaining_517_impl;
    USE(remaining_517);
    *remaining_517 = implicit_cast<TNode<Smi>>(p_length);
    // ../../third_party/v8/builtins/array-sort.tq:1653:5
    int31_t t3169 = 0;
    TVARIABLE(Smi, low_518_impl);
    auto low_518 = &low_518_impl;
    USE(low_518);
    TNode<Smi> t3170 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3169)));
    *low_518 = implicit_cast<TNode<Smi>>(t3170);
    // ../../third_party/v8/builtins/array-sort.tq:1654:5
    TNode<Smi> t3171 = UncheckedCast<Smi>(ComputeMinRunLength(implicit_cast<TNode<Smi>>((*remaining_517).value())));
    USE(implicit_cast<TNode<Smi>>(t3171));
    TNode<Smi> min_run_length_1035_impl;
    auto min_run_length_1035 = &min_run_length_1035_impl;
    USE(min_run_length_1035);
    *min_run_length_1035 = implicit_cast<TNode<Smi>>(t3171);
    // ../../third_party/v8/builtins/array-sort.tq:1655:5
    {
      Label label__True_894_impl(this);
      Label* label__True_894 = &label__True_894_impl;
      USE(label__True_894);
      Label label__False_895_impl(this);
      Label* label__False_895 = &label__False_895_impl;
      USE(label__False_895);
      Label label_header_1036_1421_impl(this, {low_518, remaining_517});
      Label* label_header_1036_1421 = &label_header_1036_1421_impl;
      USE(label_header_1036_1421);
      Goto(label_header_1036_1421);
      BIND(label_header_1036_1421);
      int31_t t3172 = 0;
      TNode<Smi> t3173 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3172)));
      TNode<BoolT> t3174 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>((*remaining_517).value()), implicit_cast<TNode<Smi>>(t3173)));
      USE(implicit_cast<TNode<BoolT>>(t3174));
      Branch(implicit_cast<TNode<BoolT>>(t3174), label__True_894, label__False_895);
      if (label__True_894->is_used())
      {
        BIND(label__True_894);
        // ../../third_party/v8/builtins/array-sort.tq:1655:28
        {
          // ../../third_party/v8/builtins/array-sort.tq:1656:7
          TNode<Smi> t3175 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_518).value()), implicit_cast<TNode<Smi>>((*remaining_517).value())));
          USE(implicit_cast<TNode<Smi>>(t3175));
          TNode<Smi> t3176 = UncheckedCast<Smi>(CountAndMakeRun(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*low_518).value()), implicit_cast<TNode<Smi>>(t3175), label_Bailout_891));
          USE(implicit_cast<TNode<Smi>>(t3176));
          TVARIABLE(Smi, current_run_length_519_impl);
          auto current_run_length_519 = &current_run_length_519_impl;
          USE(current_run_length_519);
          *current_run_length_519 = implicit_cast<TNode<Smi>>(t3176);
          // ../../third_party/v8/builtins/array-sort.tq:1661:7
          {
            Label label__True_896_impl(this);
            Label* label__True_896 = &label__True_896_impl;
            USE(label__True_896);
            Label label__False_897_impl(this, {current_run_length_519});
            Label* label__False_897 = &label__False_897_impl;
            USE(label__False_897);
            TNode<BoolT> t3177 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*current_run_length_519).value()), implicit_cast<TNode<Smi>>((*min_run_length_1035))));
            USE(implicit_cast<TNode<BoolT>>(t3177));
            Branch(implicit_cast<TNode<BoolT>>(t3177), label__True_896, label__False_897);
            if (label__True_896->is_used())
            {
              BIND(label__True_896);
              // ../../third_party/v8/builtins/array-sort.tq:1661:48
              {
                // ../../third_party/v8/builtins/array-sort.tq:1662:9
                TNode<Smi> t3178 = UncheckedCast<Smi>(SmiMin(implicit_cast<TNode<Smi>>((*min_run_length_1035)), implicit_cast<TNode<Smi>>((*remaining_517).value())));
                USE(implicit_cast<TNode<Smi>>(t3178));
                TNode<Smi> forced_run_length_1037_impl;
                auto forced_run_length_1037 = &forced_run_length_1037_impl;
                USE(forced_run_length_1037);
                *forced_run_length_1037 = implicit_cast<TNode<Smi>>(t3178);
                // ../../third_party/v8/builtins/array-sort.tq:1663:9
                TNode<Smi> t3179 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_518).value()), implicit_cast<TNode<Smi>>((*current_run_length_519).value())));
                USE(implicit_cast<TNode<Smi>>(t3179));
                TNode<Smi> t3180 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_518).value()), implicit_cast<TNode<Smi>>((*forced_run_length_1037))));
                USE(implicit_cast<TNode<Smi>>(t3180));
                TNode<Smi> t3181 = UncheckedCast<Smi>(CallBuiltin(Builtins::kBinaryInsertionSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*low_518).value()), implicit_cast<TNode<Smi>>(t3179), implicit_cast<TNode<Smi>>(t3180)));
                USE(implicit_cast<TNode<Smi>>(t3181));
                // ../../third_party/v8/builtins/array-sort.tq:1666:9
                EnsureSuccess(implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_891);
                // ../../third_party/v8/builtins/array-sort.tq:1667:9
                *current_run_length_519 = implicit_cast<TNode<Smi>>((*forced_run_length_1037));
              }
              Goto(label__False_897);
            }
            BIND(label__False_897);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1671:7
          PushRun(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>((*low_518).value()), implicit_cast<TNode<Smi>>((*current_run_length_519).value()));
          // ../../third_party/v8/builtins/array-sort.tq:1673:7
          MergeCollapse(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_891);
          // ../../third_party/v8/builtins/array-sort.tq:1676:7
          TNode<Smi> t3182 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*low_518).value()), implicit_cast<TNode<Smi>>((*current_run_length_519).value())));
          USE(implicit_cast<TNode<Smi>>(t3182));
          *low_518 = implicit_cast<TNode<Smi>>(t3182);
          // ../../third_party/v8/builtins/array-sort.tq:1677:7
          TNode<Smi> t3183 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*remaining_517).value()), implicit_cast<TNode<Smi>>((*current_run_length_519).value())));
          USE(implicit_cast<TNode<Smi>>(t3183));
          *remaining_517 = implicit_cast<TNode<Smi>>(t3183);
        }
        Goto(label_header_1036_1421);
      }
      BIND(label__False_895);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1680:5
    MergeForceCollapse(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), label_Bailout_891);
    // ../../third_party/v8/builtins/array-sort.tq:1681:5
    // ../../third_party/v8/builtins/array-sort.tq:1682:5
  }
  Goto(label_macro_end_1420);
  BIND(label_macro_end_1420);
}

TF_BUILTIN(ArrayTimSort, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<Smi> p_length = UncheckedCast<Smi>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../third_party/v8/builtins/array-sort.tq:1688:69
  {
    // ../../third_party/v8/builtins/array-sort.tq:1689:5
    {
      Label label_try_done_1038_1422_impl(this);
      Label* label_try_done_1038_1422 = &label_try_done_1038_1422_impl;
      USE(label_try_done_1038_1422);
      Label label_Slow_898_impl(this);
      Label* label_Slow_898 = &label_Slow_898_impl;
      USE(label_Slow_898);
      Label label_try_begin_1039_1423_impl(this);
      Label* label_try_begin_1039_1423 = &label_try_begin_1039_1423_impl;
      USE(label_try_begin_1039_1423);
      Goto(label_try_begin_1039_1423);
      if (label_try_begin_1039_1423->is_used())
      {
        BIND(label_try_begin_1039_1423);
        // ../../third_party/v8/builtins/array-sort.tq:1689:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1690:7
          ArrayTimSortImpl(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(p_length), label_Slow_898);
        }
        Goto(label_try_done_1038_1422);
      }
      if (label_Slow_898->is_used())
      {
        BIND(label_Slow_898);
        // ../../third_party/v8/builtins/array-sort.tq:1693:16
        {
          // ../../third_party/v8/builtins/array-sort.tq:1694:7
          {
            Label label__True_899_impl(this);
            Label* label__True_899 = &label__True_899_impl;
            USE(label__True_899);
            Label label__False_900_impl(this, {});
            Label* label__False_900 = &label__False_900_impl;
            USE(label__False_900);
            TNode<Object> t3184 = UncheckedCast<Object>(LoadFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx())));
            TNode<BoolT> t3185 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t3184), implicit_cast<TNode<Object>>(kGenericElementsAccessorId())));
            USE(implicit_cast<TNode<BoolT>>(t3185));
            Branch(implicit_cast<TNode<BoolT>>(t3185), label__True_899, label__False_900);
            if (label__True_899->is_used())
            {
              BIND(label__True_899);
              // ../../third_party/v8/builtins/array-sort.tq:1694:66
              {
                // ../../third_party/v8/builtins/array-sort.tq:1696:9
                Unreachable();
              }
            }
            BIND(label__False_900);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1698:7
          StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kBailoutStatusIdx()), implicit_cast<TNode<Object>>(kSuccess()));
          // ../../third_party/v8/builtins/array-sort.tq:1700:7
          InitializeSortStateAccessor25ATGenericElementsAccessor(implicit_cast<TNode<FixedArray>>(p_sortState));
          // ../../third_party/v8/builtins/array-sort.tq:1701:7
          TNode<Object> t3186 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayTimSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<TNode<Smi>>(p_length)));
          USE(implicit_cast<TNode<Object>>(t3186));
        }
        Goto(label_try_done_1038_1422);
      }
      BIND(label_try_done_1038_1422);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1703:5
    Return(implicit_cast<TNode<Object>>(kSuccess()));
  }
}

TF_BUILTIN(ArrayPrototypeSort, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../third_party/v8/builtins/array-sort.tq:1723:65
  {
    // ../../third_party/v8/builtins/array-sort.tq:1726:5
    int31_t t3187 = 0;
    TNode<IntPtrT> t3188 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t3187)));
    TNode<Object> t3189 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t3188)));
    TNode<Object> comparefnObj_1040_impl;
    auto comparefnObj_1040 = &comparefnObj_1040_impl;
    USE(comparefnObj_1040);
    *comparefnObj_1040 = implicit_cast<TNode<Object>>(t3189);
    // ../../third_party/v8/builtins/array-sort.tq:1727:5
    {
      Label label__True_901_impl(this);
      Label* label__True_901 = &label__True_901_impl;
      USE(label__True_901);
      Label label__False_902_impl(this, {});
      Label* label__False_902 = &label__False_902_impl;
      USE(label__False_902);
      Label label__True_903_impl(this);
      Label* label__True_903 = &label__True_903_impl;
      USE(label__True_903);
      TNode<BoolT> t3190 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*comparefnObj_1040)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t3190));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t3190), label__False_902);
      TNode<BoolT> t3191 = UncheckedCast<BoolT>(TaggedIsCallable(implicit_cast<TNode<Object>>((*comparefnObj_1040))));
      USE(implicit_cast<TNode<BoolT>>(t3191));
      TNode<BoolT> t3192 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3191)));
      USE(implicit_cast<TNode<BoolT>>(t3192));
      Branch(implicit_cast<TNode<BoolT>>(t3192), label__True_901, label__False_902);
      if (label__True_901->is_used())
      {
        BIND(label__True_901);
        // ../../third_party/v8/builtins/array-sort.tq:1727:71
        {
          // ../../third_party/v8/builtins/array-sort.tq:1728:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kBadSortComparisonFunction), implicit_cast<TNode<Object>>((*comparefnObj_1040)));
        }
      }
      BIND(label__False_902);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1732:5
    TNode<JSReceiver> t3193 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSReceiver>>(t3193));
    TNode<JSReceiver> obj_1041_impl;
    auto obj_1041 = &obj_1041_impl;
    USE(obj_1041);
    *obj_1041 = implicit_cast<TNode<JSReceiver>>(t3193);
    // ../../third_party/v8/builtins/array-sort.tq:1734:5
    TNode<FixedArray> t3194 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(kSortStateSize())));
    USE(implicit_cast<TNode<FixedArray>>(t3194));
    TNode<FixedArray> sort_state_1042_impl;
    auto sort_state_1042 = &sort_state_1042_impl;
    USE(sort_state_1042);
    *sort_state_1042 = implicit_cast<TNode<FixedArray>>(t3194);
    // ../../third_party/v8/builtins/array-sort.tq:1735:5
    TNode<Smi> t3195 = UncheckedCast<Smi>(SmiTag(implicit_cast<TNode<IntPtrT>>(kSortStateSize())));
    USE(implicit_cast<TNode<Smi>>(t3195));
    FillFixedArrayWithSmiZero(implicit_cast<TNode<FixedArray>>((*sort_state_1042)), implicit_cast<TNode<Smi>>(t3195));
    // ../../third_party/v8/builtins/array-sort.tq:1737:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1042)), implicit_cast<int31_t>(kReceiverIdx()), implicit_cast<TNode<Object>>((*obj_1041)));
    // ../../third_party/v8/builtins/array-sort.tq:1738:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1042)), implicit_cast<int31_t>(kUserCmpFnIdx()), implicit_cast<TNode<Object>>((*comparefnObj_1040)));
    // ../../third_party/v8/builtins/array-sort.tq:1739:5
    auto t3196 = [=]() {
      return implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kSortCompareUserFn).code()));
    };
    auto t3197 = [=]() {
      return implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kSortCompareDefault).code()));
    };
    TVARIABLE(Code, t3198_1043_impl);
    auto t3198_1043 = &t3198_1043_impl;
    USE(t3198_1043);
    {
      Label label__True_904_impl(this);
      Label* label__True_904 = &label__True_904_impl;
      USE(label__True_904);
      Label label__False_905_impl(this);
      Label* label__False_905 = &label__False_905_impl;
      USE(label__False_905);
      Label label__done_1044_1424_impl(this, {t3198_1043});
      Label* label__done_1044_1424 = &label__done_1044_1424_impl;
      USE(label__done_1044_1424);
      TNode<BoolT> t3199 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*comparefnObj_1040)), implicit_cast<TNode<Object>>(Undefined())));
      USE(implicit_cast<TNode<BoolT>>(t3199));
      Branch(implicit_cast<TNode<BoolT>>(t3199), label__True_904, label__False_905);
      BIND(label__True_904);
            *t3198_1043 = implicit_cast<TNode<Code>>(t3196());
      Goto(label__done_1044_1424);
      BIND(label__False_905);
            *t3198_1043 = implicit_cast<TNode<Code>>(t3197());
      Goto(label__done_1044_1424);
      BIND(label__done_1044_1424);
    }
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1042)), implicit_cast<int31_t>(kSortComparePtrIdx()), implicit_cast<TNode<Object>>((*t3198_1043).value()));
    // ../../third_party/v8/builtins/array-sort.tq:1741:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1042)), implicit_cast<int31_t>(kBailoutStatusIdx()), implicit_cast<TNode<Object>>(kSuccess()));
    // ../../third_party/v8/builtins/array-sort.tq:1744:5
    const char* t3200 = "length";
    TNode<Object> t3201 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t3200)));
    TNode<Object> t3202 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_1041)), implicit_cast<TNode<Object>>(t3201)));
    USE(implicit_cast<TNode<Object>>(t3202));
    TNode<Number> t3203 = UncheckedCast<Number>(ToLength_Inline(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(t3202)));
    USE(implicit_cast<TNode<Number>>(t3203));
    TNode<Number> len_1045_impl;
    auto len_1045 = &len_1045_impl;
    USE(len_1045);
    *len_1045 = implicit_cast<TNode<Number>>(t3203);
    // ../../third_party/v8/builtins/array-sort.tq:1746:5
    {
      Label label__True_906_impl(this);
      Label* label__True_906 = &label__True_906_impl;
      USE(label__True_906);
      Label label__False_907_impl(this, {});
      Label* label__False_907 = &label__False_907_impl;
      USE(label__False_907);
      int31_t t3204 = 2;
      TNode<Number> t3205 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t3204)));
      BranchIfNumberLessThan(implicit_cast<TNode<Number>>((*len_1045)), implicit_cast<TNode<Number>>(t3205), label__True_906, label__False_907);
      if (label__True_906->is_used())
      {
        BIND(label__True_906);
        // ../../third_party/v8/builtins/array-sort.tq:1746:18
        arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
      }
      BIND(label__False_907);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1750:5
    TNode<Smi> t3206 = UncheckedCast<Smi>(CallRuntime(Runtime::kPrepareElementsForSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>((*obj_1041)), implicit_cast<TNode<Number>>((*len_1045))));
    USE(implicit_cast<TNode<Smi>>(t3206));
    TNode<Smi> nofNonUndefined_1046_impl;
    auto nofNonUndefined_1046 = &nofNonUndefined_1046_impl;
    USE(nofNonUndefined_1046);
    *nofNonUndefined_1046 = implicit_cast<TNode<Smi>>(t3206);
    // ../../third_party/v8/builtins/array-sort.tq:1751:5
    // ../../third_party/v8/builtins/array-sort.tq:1753:5
    TNode<Map> t3207 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*obj_1041))));
    TVARIABLE(Map, map_520_impl);
    auto map_520 = &map_520_impl;
    USE(map_520);
    *map_520 = implicit_cast<TNode<Map>>(t3207);
    // ../../third_party/v8/builtins/array-sort.tq:1754:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1042)), implicit_cast<int31_t>(kInitialReceiverMapIdx()), implicit_cast<TNode<Object>>((*map_520).value()));
    // ../../third_party/v8/builtins/array-sort.tq:1755:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>((*sort_state_1042)), implicit_cast<int31_t>(kInitialReceiverLengthIdx()), implicit_cast<TNode<Object>>((*len_1045)));
    // ../../third_party/v8/builtins/array-sort.tq:1757:5
    {
      Label label_try_done_1047_1425_impl(this);
      Label* label_try_done_1047_1425 = &label_try_done_1047_1425_impl;
      USE(label_try_done_1047_1425);
      Label label_slow_908_impl(this);
      Label* label_slow_908 = &label_slow_908_impl;
      USE(label_slow_908);
      Label label_try_begin_1048_1426_impl(this);
      Label* label_try_begin_1048_1426 = &label_try_begin_1048_1426_impl;
      USE(label_try_begin_1048_1426);
      Goto(label_try_begin_1048_1426);
      if (label_try_begin_1048_1426->is_used())
      {
        BIND(label_try_begin_1048_1426);
        // ../../third_party/v8/builtins/array-sort.tq:1757:9
        {
          // ../../third_party/v8/builtins/array-sort.tq:1758:7
          TNode<JSArray> t3208 = UncheckedCast<JSArray>(cast9ATJSArray(implicit_cast<TNode<HeapObject>>((*obj_1041)), label_slow_908));
          USE(implicit_cast<TNode<JSArray>>(t3208));
          TNode<JSArray> a_1049_impl;
          auto a_1049 = &a_1049_impl;
          USE(a_1049);
          *a_1049 = implicit_cast<TNode<JSArray>>(t3208);
          // ../../third_party/v8/builtins/array-sort.tq:1759:7
          TNode<Int32T> t3209 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_520).value())));
          TNode<Int32T> elementsKind_1050_impl;
          auto elementsKind_1050 = &elementsKind_1050_impl;
          USE(elementsKind_1050);
          *elementsKind_1050 = implicit_cast<TNode<Int32T>>(t3209);
          // ../../third_party/v8/builtins/array-sort.tq:1760:7
          {
            Label label__True_909_impl(this);
            Label* label__True_909 = &label__True_909_impl;
            USE(label__True_909);
            Label label__False_910_impl(this, {});
            Label* label__False_910 = &label__False_910_impl;
            USE(label__False_910);
            TNode<BoolT> t3210 = UncheckedCast<BoolT>(IsFastElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_1050))));
            USE(implicit_cast<TNode<BoolT>>(t3210));
            TNode<BoolT> t3211 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3210)));
            USE(implicit_cast<TNode<BoolT>>(t3211));
            Branch(implicit_cast<TNode<BoolT>>(t3211), label__True_909, label__False_910);
            if (label__True_909->is_used())
            {
              BIND(label__True_909);
              // ../../third_party/v8/builtins/array-sort.tq:1760:46
              Goto(label_slow_908);
            }
            BIND(label__False_910);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1762:7
          {
            Label label__True_911_impl(this);
            Label* label__True_911 = &label__True_911_impl;
            USE(label__True_911);
            Label label__False_912_impl(this);
            Label* label__False_912 = &label__False_912_impl;
            USE(label__False_912);
            Label label_if_done_label_1051_1427_impl(this, {});
            Label* label_if_done_label_1051_1427 = &label_if_done_label_1051_1427_impl;
            USE(label_if_done_label_1051_1427);
            TNode<BoolT> t3212 = UncheckedCast<BoolT>(IsDoubleElementsKind(implicit_cast<TNode<Int32T>>((*elementsKind_1050))));
            USE(implicit_cast<TNode<BoolT>>(t3212));
            Branch(implicit_cast<TNode<BoolT>>(t3212), label__True_911, label__False_912);
            if (label__True_911->is_used())
            {
              BIND(label__True_911);
              // ../../third_party/v8/builtins/array-sort.tq:1762:47
              {
                // ../../third_party/v8/builtins/array-sort.tq:1763:9
                InitializeSortStateAccessor20ATFastDoubleElements(implicit_cast<TNode<FixedArray>>((*sort_state_1042)));
              }
              Goto(label_if_done_label_1051_1427);
            }
            if (label__False_912->is_used())
            {
              BIND(label__False_912);
              // ../../third_party/v8/builtins/array-sort.tq:1764:14
              {
                Label label__True_913_impl(this);
                Label* label__True_913 = &label__True_913_impl;
                USE(label__True_913);
                Label label__False_914_impl(this);
                Label* label__False_914 = &label__False_914_impl;
                USE(label__False_914);
                Label label_if_done_label_1052_1428_impl(this, {});
                Label* label_if_done_label_1052_1428 = &label_if_done_label_1052_1428_impl;
                USE(label_if_done_label_1052_1428);
                TNode<Int32T> t3213 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS)));
                TNode<BoolT> t3214 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>((*elementsKind_1050)), implicit_cast<TNode<Int32T>>(t3213)));
                USE(implicit_cast<TNode<BoolT>>(t3214));
                Branch(implicit_cast<TNode<BoolT>>(t3214), label__True_913, label__False_914);
                if (label__True_913->is_used())
                {
                  BIND(label__True_913);
                  // ../../third_party/v8/builtins/array-sort.tq:1764:55
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1765:9
                    InitializeSortStateAccessor23ATFastPackedSmiElements(implicit_cast<TNode<FixedArray>>((*sort_state_1042)));
                  }
                  Goto(label_if_done_label_1052_1428);
                }
                if (label__False_914->is_used())
                {
                  BIND(label__False_914);
                  // ../../third_party/v8/builtins/array-sort.tq:1766:14
                  {
                    // ../../third_party/v8/builtins/array-sort.tq:1767:9
                    InitializeSortStateAccessor25ATFastSmiOrObjectElements(implicit_cast<TNode<FixedArray>>((*sort_state_1042)));
                  }
                  Goto(label_if_done_label_1052_1428);
                }
                BIND(label_if_done_label_1052_1428);
              }
              Goto(label_if_done_label_1051_1427);
            }
            BIND(label_if_done_label_1051_1427);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1769:7
          TNode<Object> t3215 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayTimSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>((*sort_state_1042)), implicit_cast<TNode<Smi>>((*nofNonUndefined_1046))));
          USE(implicit_cast<TNode<Object>>(t3215));
        }
        Goto(label_try_done_1047_1425);
      }
      if (label_slow_908->is_used())
      {
        BIND(label_slow_908);
        // ../../third_party/v8/builtins/array-sort.tq:1771:16
        {
          // ../../third_party/v8/builtins/array-sort.tq:1772:7
          {
            Label label__True_915_impl(this);
            Label* label__True_915 = &label__True_915_impl;
            USE(label__True_915);
            Label label__False_916_impl(this);
            Label* label__False_916 = &label__False_916_impl;
            USE(label__False_916);
            Label label_if_done_label_1053_1429_impl(this, {});
            Label* label_if_done_label_1053_1429 = &label_if_done_label_1053_1429_impl;
            USE(label_if_done_label_1053_1429);
            Label label__True_917_impl(this);
            Label* label__True_917 = &label__True_917_impl;
            USE(label__True_917);
            Label label__True_918_impl(this);
            Label* label__True_918 = &label__True_918_impl;
            USE(label__True_918);
            TNode<Int32T> t3216 = UncheckedCast<Int32T>(LoadMapElementsKind(implicit_cast<TNode<Map>>((*map_520).value())));
            TNode<Int32T> t3217 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(implicit_cast<ElementsKind>(DICTIONARY_ELEMENTS)));
            TNode<BoolT> t3218 = UncheckedCast<BoolT>(ElementsKindEqual(implicit_cast<TNode<Int32T>>(t3216), implicit_cast<TNode<Int32T>>(t3217)));
            USE(implicit_cast<TNode<BoolT>>(t3218));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t3218), label__False_916);
            TNode<BoolT> t3219 = UncheckedCast<BoolT>(IsExtensibleMap(implicit_cast<TNode<Map>>((*map_520).value())));
            USE(implicit_cast<TNode<BoolT>>(t3219));
            GotoIfNot(implicit_cast<TNode<BoolT>>(t3219), label__False_916);
            TNode<Int32T> t3220 = UncheckedCast<Int32T>(LoadMapInstanceType(implicit_cast<TNode<Map>>((*map_520).value())));
            TNode<BoolT> t3221 = UncheckedCast<BoolT>(IsCustomElementsReceiverInstanceType(implicit_cast<TNode<Int32T>>(t3220)));
            USE(implicit_cast<TNode<BoolT>>(t3221));
            TNode<BoolT> t3222 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t3221)));
            USE(implicit_cast<TNode<BoolT>>(t3222));
            Branch(implicit_cast<TNode<BoolT>>(t3222), label__True_915, label__False_916);
            if (label__True_915->is_used())
            {
              BIND(label__True_915);
              // ../../third_party/v8/builtins/array-sort.tq:1773:69
              {
                // ../../third_party/v8/builtins/array-sort.tq:1774:9
                InitializeSortStateAccessor20ATDictionaryElements(implicit_cast<TNode<FixedArray>>((*sort_state_1042)));
              }
              Goto(label_if_done_label_1053_1429);
            }
            if (label__False_916->is_used())
            {
              BIND(label__False_916);
              // ../../third_party/v8/builtins/array-sort.tq:1775:14
              {
                // ../../third_party/v8/builtins/array-sort.tq:1776:9
                InitializeSortStateAccessor25ATGenericElementsAccessor(implicit_cast<TNode<FixedArray>>((*sort_state_1042)));
              }
              Goto(label_if_done_label_1053_1429);
            }
            BIND(label_if_done_label_1053_1429);
          }
          // ../../third_party/v8/builtins/array-sort.tq:1778:7
          TNode<Object> t3223 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayTimSort, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<FixedArray>>((*sort_state_1042)), implicit_cast<TNode<Smi>>((*nofNonUndefined_1046))));
          USE(implicit_cast<TNode<Object>>(t3223));
        }
        Goto(label_try_done_1047_1425);
      }
      BIND(label_try_done_1047_1425);
    }
    // ../../third_party/v8/builtins/array-sort.tq:1781:5
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(p_receiver));
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_929, TVariable<Smi>* Bailout0_533) {
  Label label_macro_end_1435_impl(this, {});
  Label* label_macro_end_1435 = &label_macro_end_1435_impl;
  USE(label_macro_end_1435);
  // ../../src/builtins/array-foreach.tq:77:16
  {
    // ../../src/builtins/array-foreach.tq:78:5
    int31_t t3231 = 0;
    TVARIABLE(Smi, k_534_impl);
    auto k_534 = &k_534_impl;
    USE(k_534);
    TNode<Smi> t3232 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3231)));
    *k_534 = implicit_cast<TNode<Smi>>(t3232);
    // ../../src/builtins/array-foreach.tq:79:5
    TNode<Map> t3233 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
    TNode<Map> map_1054_impl;
    auto map_1054 = &map_1054_impl;
    USE(map_1054);
    *map_1054 = implicit_cast<TNode<Map>>(t3233);
    // ../../src/builtins/array-foreach.tq:81:5
    {
      Label label_try_done_1055_1436_impl(this);
      Label* label_try_done_1055_1436 = &label_try_done_1055_1436_impl;
      USE(label_try_done_1055_1436);
      Label label_Slow_930_impl(this);
      Label* label_Slow_930 = &label_Slow_930_impl;
      USE(label_Slow_930);
      Label label_try_begin_1056_1437_impl(this);
      Label* label_try_begin_1056_1437 = &label_try_begin_1056_1437_impl;
      USE(label_try_begin_1056_1437);
      Goto(label_try_begin_1056_1437);
      if (label_try_begin_1056_1437->is_used())
      {
        BIND(label_try_begin_1056_1437);
        // ../../src/builtins/array-foreach.tq:81:9
        {
          // ../../src/builtins/array-foreach.tq:83:7
          Label label__True_931_impl(this);
          Label* label__True_931 = &label__True_931_impl;
          USE(label__True_931);
          Label label__False_932_impl(this);
          Label* label__False_932 = &label__False_932_impl;
          USE(label__False_932);
          Label label_header_1057_1438_impl(this, {k_534});
          Label* label_header_1057_1438 = &label_header_1057_1438_impl;
          USE(label_header_1057_1438);
          Goto(label_header_1057_1438);
          BIND(label_header_1057_1438);
          Label label_action_1058_1439_impl(this);
          Label* label_action_1058_1439 = &label_action_1058_1439_impl;
          USE(label_action_1058_1439);
          TNode<BoolT> t3234 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_534).value()), implicit_cast<TNode<Smi>>(p_len)));
          USE(implicit_cast<TNode<BoolT>>(t3234));
          Branch(implicit_cast<TNode<BoolT>>(t3234), label__True_931, label__False_932);
          if (label__True_931->is_used())
          {
            BIND(label__True_931);
            // ../../src/builtins/array-foreach.tq:83:34
            {
              // ../../src/builtins/array-foreach.tq:85:9
              {
                Label label__True_933_impl(this);
                Label* label__True_933 = &label__True_933_impl;
                USE(label__True_933);
                Label label__False_934_impl(this, {});
                Label* label__False_934 = &label__False_934_impl;
                USE(label__False_934);
                TNode<Map> t3235 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
                TNode<BoolT> t3236 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*map_1054)), implicit_cast<TNode<Object>>(t3235)));
                USE(implicit_cast<TNode<BoolT>>(t3236));
                Branch(implicit_cast<TNode<BoolT>>(t3236), label__True_933, label__False_934);
                if (label__True_933->is_used())
                {
                  BIND(label__True_933);
                  // ../../src/builtins/array-foreach.tq:85:27
                  Goto(label_Slow_930);
                }
                BIND(label__False_934);
              }
              // ../../src/builtins/array-foreach.tq:87:9
              {
                Label label__True_935_impl(this);
                Label* label__True_935 = &label__True_935_impl;
                USE(label__True_935);
                Label label__False_936_impl(this, {});
                Label* label__False_936 = &label__False_936_impl;
                USE(label__False_936);
                TNode<Number> t3237 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>(p_a)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_534).value()), implicit_cast<TNode<Number>>(t3237), label__True_935, label__False_936);
                if (label__True_935->is_used())
                {
                  BIND(label__True_935);
                  // ../../src/builtins/array-foreach.tq:87:28
                  Goto(label_Slow_930);
                }
                BIND(label__False_936);
              }
              // ../../src/builtins/array-foreach.tq:89:9
              {
                Label label_try_done_1059_1440_impl(this);
                Label* label_try_done_1059_1440 = &label_try_done_1059_1440_impl;
                USE(label_try_done_1059_1440);
                Label label_FoundHole_937_impl(this);
                Label* label_FoundHole_937 = &label_FoundHole_937_impl;
                USE(label_FoundHole_937);
                Label label_try_begin_1060_1441_impl(this);
                Label* label_try_begin_1060_1441 = &label_try_begin_1060_1441_impl;
                USE(label_try_begin_1060_1441);
                Goto(label_try_begin_1060_1441);
                if (label_try_begin_1060_1441->is_used())
                {
                  BIND(label_try_begin_1060_1441);
                  // ../../src/builtins/array-foreach.tq:89:13
                  {
                    // ../../src/builtins/array-foreach.tq:90:11
                    TNode<Object> t3238 = UncheckedCast<Object>(LoadElementNoHole18ATFixedDoubleArray(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>((*k_534).value()), label_FoundHole_937));
                    USE(implicit_cast<TNode<Object>>(t3238));
                    TNode<Object> value_1061_impl;
                    auto value_1061 = &value_1061_impl;
                    USE(value_1061);
                    *value_1061 = implicit_cast<TNode<Object>>(t3238);
                    // ../../src/builtins/array-foreach.tq:92:11
                    TNode<Object> t3239 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*value_1061)), implicit_cast<TNode<Object>>((*k_534).value()), implicit_cast<TNode<Object>>(p_a)));
                    USE(implicit_cast<TNode<Object>>(t3239));
                  }
                  Goto(label_try_done_1059_1440);
                }
                if (label_FoundHole_937->is_used())
                {
                  BIND(label_FoundHole_937);
                  // ../../src/builtins/array-foreach.tq:94:25
                  {
                    // ../../src/builtins/array-foreach.tq:99:11
                    {
                      Label label__True_938_impl(this);
                      Label* label__True_938 = &label__True_938_impl;
                      USE(label__True_938);
                      Label label__False_939_impl(this, {});
                      Label* label__False_939 = &label__False_939_impl;
                      USE(label__False_939);
                      TNode<BoolT> t3240 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(implicit_cast<TNode<BoolT>>(t3240));
                      Branch(implicit_cast<TNode<BoolT>>(t3240), label__True_938, label__False_939);
                      if (label__True_938->is_used())
                      {
                        BIND(label__True_938);
                        // ../../src/builtins/array-foreach.tq:99:51
                        *Bailout0_533 = implicit_cast<TNode<Smi>>((*k_534).value());
                        Goto(label_Bailout_929);
                      }
                      BIND(label__False_939);
                    }
                  }
                  Goto(label_try_done_1059_1440);
                }
                BIND(label_try_done_1059_1440);
              }
            }
            Goto(label_action_1058_1439);
          }
          {
            BIND(label_action_1058_1439);
            int31_t t3241 = 1;
            TNode<Smi> t3242 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3241)));
            TNode<Smi> t3243 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_534).value()), implicit_cast<TNode<Smi>>(t3242)));
            USE(implicit_cast<TNode<Smi>>(t3243));
            *k_534 = implicit_cast<TNode<Smi>>(t3243);
            Goto(label_header_1057_1438);
          }
          BIND(label__False_932);
        }
        Goto(label_try_done_1055_1436);
      }
      if (label_Slow_930->is_used())
      {
        BIND(label_Slow_930);
        // ../../src/builtins/array-foreach.tq:103:16
        {
          // ../../src/builtins/array-foreach.tq:104:7
          *Bailout0_533 = implicit_cast<TNode<Smi>>((*k_534).value());
          Goto(label_Bailout_929);
        }
      }
      BIND(label_try_done_1055_1436);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_940, TVariable<Smi>* Bailout0_535) {
  Label label_macro_end_1442_impl(this, {});
  Label* label_macro_end_1442 = &label_macro_end_1442_impl;
  USE(label_macro_end_1442);
  // ../../src/builtins/array-foreach.tq:77:16
  {
    // ../../src/builtins/array-foreach.tq:78:5
    int31_t t3244 = 0;
    TVARIABLE(Smi, k_536_impl);
    auto k_536 = &k_536_impl;
    USE(k_536);
    TNode<Smi> t3245 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3244)));
    *k_536 = implicit_cast<TNode<Smi>>(t3245);
    // ../../src/builtins/array-foreach.tq:79:5
    TNode<Map> t3246 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
    TNode<Map> map_1062_impl;
    auto map_1062 = &map_1062_impl;
    USE(map_1062);
    *map_1062 = implicit_cast<TNode<Map>>(t3246);
    // ../../src/builtins/array-foreach.tq:81:5
    {
      Label label_try_done_1063_1443_impl(this);
      Label* label_try_done_1063_1443 = &label_try_done_1063_1443_impl;
      USE(label_try_done_1063_1443);
      Label label_Slow_941_impl(this);
      Label* label_Slow_941 = &label_Slow_941_impl;
      USE(label_Slow_941);
      Label label_try_begin_1064_1444_impl(this);
      Label* label_try_begin_1064_1444 = &label_try_begin_1064_1444_impl;
      USE(label_try_begin_1064_1444);
      Goto(label_try_begin_1064_1444);
      if (label_try_begin_1064_1444->is_used())
      {
        BIND(label_try_begin_1064_1444);
        // ../../src/builtins/array-foreach.tq:81:9
        {
          // ../../src/builtins/array-foreach.tq:83:7
          Label label__True_942_impl(this);
          Label* label__True_942 = &label__True_942_impl;
          USE(label__True_942);
          Label label__False_943_impl(this);
          Label* label__False_943 = &label__False_943_impl;
          USE(label__False_943);
          Label label_header_1065_1445_impl(this, {k_536});
          Label* label_header_1065_1445 = &label_header_1065_1445_impl;
          USE(label_header_1065_1445);
          Goto(label_header_1065_1445);
          BIND(label_header_1065_1445);
          Label label_action_1066_1446_impl(this);
          Label* label_action_1066_1446 = &label_action_1066_1446_impl;
          USE(label_action_1066_1446);
          TNode<BoolT> t3247 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*k_536).value()), implicit_cast<TNode<Smi>>(p_len)));
          USE(implicit_cast<TNode<BoolT>>(t3247));
          Branch(implicit_cast<TNode<BoolT>>(t3247), label__True_942, label__False_943);
          if (label__True_942->is_used())
          {
            BIND(label__True_942);
            // ../../src/builtins/array-foreach.tq:83:34
            {
              // ../../src/builtins/array-foreach.tq:85:9
              {
                Label label__True_944_impl(this);
                Label* label__True_944 = &label__True_944_impl;
                USE(label__True_944);
                Label label__False_945_impl(this, {});
                Label* label__False_945 = &label__False_945_impl;
                USE(label__False_945);
                TNode<Map> t3248 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>(p_a)));
                TNode<BoolT> t3249 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>((*map_1062)), implicit_cast<TNode<Object>>(t3248)));
                USE(implicit_cast<TNode<BoolT>>(t3249));
                Branch(implicit_cast<TNode<BoolT>>(t3249), label__True_944, label__False_945);
                if (label__True_944->is_used())
                {
                  BIND(label__True_944);
                  // ../../src/builtins/array-foreach.tq:85:27
                  Goto(label_Slow_941);
                }
                BIND(label__False_945);
              }
              // ../../src/builtins/array-foreach.tq:87:9
              {
                Label label__True_946_impl(this);
                Label* label__True_946 = &label__True_946_impl;
                USE(label__True_946);
                Label label__False_947_impl(this, {});
                Label* label__False_947 = &label__False_947_impl;
                USE(label__False_947);
                TNode<Number> t3250 = UncheckedCast<Number>(LoadJSArrayLength(implicit_cast<TNode<JSArray>>(p_a)));
                BranchIfNumberGreaterThanOrEqual(implicit_cast<TNode<Number>>((*k_536).value()), implicit_cast<TNode<Number>>(t3250), label__True_946, label__False_947);
                if (label__True_946->is_used())
                {
                  BIND(label__True_946);
                  // ../../src/builtins/array-foreach.tq:87:28
                  Goto(label_Slow_941);
                }
                BIND(label__False_947);
              }
              // ../../src/builtins/array-foreach.tq:89:9
              {
                Label label_try_done_1067_1447_impl(this);
                Label* label_try_done_1067_1447 = &label_try_done_1067_1447_impl;
                USE(label_try_done_1067_1447);
                Label label_FoundHole_948_impl(this);
                Label* label_FoundHole_948 = &label_FoundHole_948_impl;
                USE(label_FoundHole_948);
                Label label_try_begin_1068_1448_impl(this);
                Label* label_try_begin_1068_1448 = &label_try_begin_1068_1448_impl;
                USE(label_try_begin_1068_1448);
                Goto(label_try_begin_1068_1448);
                if (label_try_begin_1068_1448->is_used())
                {
                  BIND(label_try_begin_1068_1448);
                  // ../../src/builtins/array-foreach.tq:89:13
                  {
                    // ../../src/builtins/array-foreach.tq:90:11
                    TNode<Object> t3251 = UncheckedCast<Object>(LoadElementNoHole12ATFixedArray(implicit_cast<TNode<JSArray>>(p_a), implicit_cast<TNode<Smi>>((*k_536).value()), label_FoundHole_948));
                    USE(implicit_cast<TNode<Object>>(t3251));
                    TNode<Object> value_1069_impl;
                    auto value_1069 = &value_1069_impl;
                    USE(value_1069);
                    *value_1069 = implicit_cast<TNode<Object>>(t3251);
                    // ../../src/builtins/array-foreach.tq:92:11
                    TNode<Object> t3252 = UncheckedCast<Object>(Call(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<JSReceiver>>(p_callbackfn), implicit_cast<TNode<Object>>(p_thisArg), implicit_cast<TNode<Object>>((*value_1069)), implicit_cast<TNode<Object>>((*k_536).value()), implicit_cast<TNode<Object>>(p_a)));
                    USE(implicit_cast<TNode<Object>>(t3252));
                  }
                  Goto(label_try_done_1067_1447);
                }
                if (label_FoundHole_948->is_used())
                {
                  BIND(label_FoundHole_948);
                  // ../../src/builtins/array-foreach.tq:94:25
                  {
                    // ../../src/builtins/array-foreach.tq:99:11
                    {
                      Label label__True_949_impl(this);
                      Label* label__True_949 = &label__True_949_impl;
                      USE(label__True_949);
                      Label label__False_950_impl(this, {});
                      Label* label__False_950 = &label__False_950_impl;
                      USE(label__False_950);
                      TNode<BoolT> t3253 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(implicit_cast<TNode<BoolT>>(t3253));
                      Branch(implicit_cast<TNode<BoolT>>(t3253), label__True_949, label__False_950);
                      if (label__True_949->is_used())
                      {
                        BIND(label__True_949);
                        // ../../src/builtins/array-foreach.tq:99:51
                        *Bailout0_535 = implicit_cast<TNode<Smi>>((*k_536).value());
                        Goto(label_Bailout_940);
                      }
                      BIND(label__False_950);
                    }
                  }
                  Goto(label_try_done_1067_1447);
                }
                BIND(label_try_done_1067_1447);
              }
            }
            Goto(label_action_1066_1446);
          }
          {
            BIND(label_action_1066_1446);
            int31_t t3254 = 1;
            TNode<Smi> t3255 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3254)));
            TNode<Smi> t3256 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*k_536).value()), implicit_cast<TNode<Smi>>(t3255)));
            USE(implicit_cast<TNode<Smi>>(t3256));
            *k_536 = implicit_cast<TNode<Smi>>(t3256);
            Goto(label_header_1065_1445);
          }
          BIND(label__False_943);
        }
        Goto(label_try_done_1063_1443);
      }
      if (label_Slow_941->is_used())
      {
        BIND(label_Slow_941);
        // ../../src/builtins/array-foreach.tq:103:16
        {
          // ../../src/builtins/array-foreach.tq:104:7
          *Bailout0_535 = implicit_cast<TNode<Smi>>((*k_536).value());
          Goto(label_Bailout_940);
        }
      }
      BIND(label_try_done_1063_1443);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::FastPackedArrayReverse23ATFastPackedSmiElements5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  Label label_macro_end_1449_impl(this, {});
  Label* label_macro_end_1449 = &label_macro_end_1449_impl;
  USE(label_macro_end_1449);
  // ../../src/builtins/array-reverse.tq:61:46
  {
    // ../../src/builtins/array-reverse.tq:62:5
    int31_t t3257 = 0;
    TVARIABLE(Smi, lower_537_impl);
    auto lower_537 = &lower_537_impl;
    USE(lower_537);
    TNode<Smi> t3258 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3257)));
    *lower_537 = implicit_cast<TNode<Smi>>(t3258);
    // ../../src/builtins/array-reverse.tq:63:5
    int31_t t3259 = 1;
    TNode<Smi> t3260 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3259)));
    TNode<Smi> t3261 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3260)));
    USE(implicit_cast<TNode<Smi>>(t3261));
    TVARIABLE(Smi, upper_538_impl);
    auto upper_538 = &upper_538_impl;
    USE(upper_538);
    *upper_538 = implicit_cast<TNode<Smi>>(t3261);
    // ../../src/builtins/array-reverse.tq:65:5
    {
      Label label__True_951_impl(this);
      Label* label__True_951 = &label__True_951_impl;
      USE(label__True_951);
      Label label__False_952_impl(this);
      Label* label__False_952 = &label__False_952_impl;
      USE(label__False_952);
      Label label_header_1070_1450_impl(this, {lower_537, upper_538});
      Label* label_header_1070_1450 = &label_header_1070_1450_impl;
      USE(label_header_1070_1450);
      Goto(label_header_1070_1450);
      BIND(label_header_1070_1450);
      TNode<BoolT> t3262 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lower_537).value()), implicit_cast<TNode<Smi>>((*upper_538).value())));
      USE(implicit_cast<TNode<BoolT>>(t3262));
      Branch(implicit_cast<TNode<BoolT>>(t3262), label__True_951, label__False_952);
      if (label__True_951->is_used())
      {
        BIND(label__True_951);
        // ../../src/builtins/array-reverse.tq:65:27
        {
          // ../../src/builtins/array-reverse.tq:66:7
          TNode<Smi> t3263 = UncheckedCast<Smi>(LoadElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_537).value())));
          USE(implicit_cast<TNode<Smi>>(t3263));
          TNode<Smi> lower_value_1071_impl;
          auto lower_value_1071 = &lower_value_1071_impl;
          USE(lower_value_1071);
          *lower_value_1071 = implicit_cast<TNode<Smi>>(t3263);
          // ../../src/builtins/array-reverse.tq:67:7
          TNode<Smi> t3264 = UncheckedCast<Smi>(LoadElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_538).value())));
          USE(implicit_cast<TNode<Smi>>(t3264));
          TNode<Smi> upper_value_1072_impl;
          auto upper_value_1072 = &upper_value_1072_impl;
          USE(upper_value_1072);
          *upper_value_1072 = implicit_cast<TNode<Smi>>(t3264);
          // ../../src/builtins/array-reverse.tq:68:7
          StoreElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_537).value()), implicit_cast<TNode<Smi>>((*upper_value_1072)));
          // ../../src/builtins/array-reverse.tq:69:7
          StoreElement23ATFastPackedSmiElements5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_538).value()), implicit_cast<TNode<Smi>>((*lower_value_1071)));
          // ../../src/builtins/array-reverse.tq:70:7
          TNode<Smi> t3265 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3266 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lower_537).value()), implicit_cast<TNode<Smi>>(t3265)));
          *lower_537 = implicit_cast<TNode<Smi>>(t3266);
          // ../../src/builtins/array-reverse.tq:71:7
          TNode<Smi> t3267 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3268 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*upper_538).value()), implicit_cast<TNode<Smi>>(t3267)));
          *upper_538 = implicit_cast<TNode<Smi>>(t3268);
        }
        Goto(label_header_1070_1450);
      }
      BIND(label__False_952);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::FastPackedArrayReverse26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  Label label_macro_end_1451_impl(this, {});
  Label* label_macro_end_1451 = &label_macro_end_1451_impl;
  USE(label_macro_end_1451);
  // ../../src/builtins/array-reverse.tq:61:46
  {
    // ../../src/builtins/array-reverse.tq:62:5
    int31_t t3269 = 0;
    TVARIABLE(Smi, lower_539_impl);
    auto lower_539 = &lower_539_impl;
    USE(lower_539);
    TNode<Smi> t3270 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3269)));
    *lower_539 = implicit_cast<TNode<Smi>>(t3270);
    // ../../src/builtins/array-reverse.tq:63:5
    int31_t t3271 = 1;
    TNode<Smi> t3272 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3271)));
    TNode<Smi> t3273 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3272)));
    USE(implicit_cast<TNode<Smi>>(t3273));
    TVARIABLE(Smi, upper_540_impl);
    auto upper_540 = &upper_540_impl;
    USE(upper_540);
    *upper_540 = implicit_cast<TNode<Smi>>(t3273);
    // ../../src/builtins/array-reverse.tq:65:5
    {
      Label label__True_953_impl(this);
      Label* label__True_953 = &label__True_953_impl;
      USE(label__True_953);
      Label label__False_954_impl(this);
      Label* label__False_954 = &label__False_954_impl;
      USE(label__False_954);
      Label label_header_1073_1452_impl(this, {lower_539, upper_540});
      Label* label_header_1073_1452 = &label_header_1073_1452_impl;
      USE(label_header_1073_1452);
      Goto(label_header_1073_1452);
      BIND(label_header_1073_1452);
      TNode<BoolT> t3274 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lower_539).value()), implicit_cast<TNode<Smi>>((*upper_540).value())));
      USE(implicit_cast<TNode<BoolT>>(t3274));
      Branch(implicit_cast<TNode<BoolT>>(t3274), label__True_953, label__False_954);
      if (label__True_953->is_used())
      {
        BIND(label__True_953);
        // ../../src/builtins/array-reverse.tq:65:27
        {
          // ../../src/builtins/array-reverse.tq:66:7
          TNode<Object> t3275 = UncheckedCast<Object>(LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_539).value())));
          USE(implicit_cast<TNode<Object>>(t3275));
          TNode<Object> lower_value_1074_impl;
          auto lower_value_1074 = &lower_value_1074_impl;
          USE(lower_value_1074);
          *lower_value_1074 = implicit_cast<TNode<Object>>(t3275);
          // ../../src/builtins/array-reverse.tq:67:7
          TNode<Object> t3276 = UncheckedCast<Object>(LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_540).value())));
          USE(implicit_cast<TNode<Object>>(t3276));
          TNode<Object> upper_value_1075_impl;
          auto upper_value_1075 = &upper_value_1075_impl;
          USE(upper_value_1075);
          *upper_value_1075 = implicit_cast<TNode<Object>>(t3276);
          // ../../src/builtins/array-reverse.tq:68:7
          StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_539).value()), implicit_cast<TNode<Object>>((*upper_value_1075)));
          // ../../src/builtins/array-reverse.tq:69:7
          StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_540).value()), implicit_cast<TNode<Object>>((*lower_value_1074)));
          // ../../src/builtins/array-reverse.tq:70:7
          TNode<Smi> t3277 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3278 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lower_539).value()), implicit_cast<TNode<Smi>>(t3277)));
          *lower_539 = implicit_cast<TNode<Smi>>(t3278);
          // ../../src/builtins/array-reverse.tq:71:7
          TNode<Smi> t3279 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3280 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*upper_540).value()), implicit_cast<TNode<Smi>>(t3279)));
          *upper_540 = implicit_cast<TNode<Smi>>(t3280);
        }
        Goto(label_header_1073_1452);
      }
      BIND(label__False_954);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::FastPackedArrayReverse26ATFastPackedDoubleElements9ATfloat64(TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  Label label_macro_end_1453_impl(this, {});
  Label* label_macro_end_1453 = &label_macro_end_1453_impl;
  USE(label_macro_end_1453);
  // ../../src/builtins/array-reverse.tq:61:46
  {
    // ../../src/builtins/array-reverse.tq:62:5
    int31_t t3281 = 0;
    TVARIABLE(Smi, lower_541_impl);
    auto lower_541 = &lower_541_impl;
    USE(lower_541);
    TNode<Smi> t3282 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3281)));
    *lower_541 = implicit_cast<TNode<Smi>>(t3282);
    // ../../src/builtins/array-reverse.tq:63:5
    int31_t t3283 = 1;
    TNode<Smi> t3284 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3283)));
    TNode<Smi> t3285 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_length), implicit_cast<TNode<Smi>>(t3284)));
    USE(implicit_cast<TNode<Smi>>(t3285));
    TVARIABLE(Smi, upper_542_impl);
    auto upper_542 = &upper_542_impl;
    USE(upper_542);
    *upper_542 = implicit_cast<TNode<Smi>>(t3285);
    // ../../src/builtins/array-reverse.tq:65:5
    {
      Label label__True_955_impl(this);
      Label* label__True_955 = &label__True_955_impl;
      USE(label__True_955);
      Label label__False_956_impl(this);
      Label* label__False_956 = &label__False_956_impl;
      USE(label__False_956);
      Label label_header_1076_1454_impl(this, {lower_541, upper_542});
      Label* label_header_1076_1454 = &label_header_1076_1454_impl;
      USE(label_header_1076_1454);
      Goto(label_header_1076_1454);
      BIND(label_header_1076_1454);
      TNode<BoolT> t3286 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*lower_541).value()), implicit_cast<TNode<Smi>>((*upper_542).value())));
      USE(implicit_cast<TNode<BoolT>>(t3286));
      Branch(implicit_cast<TNode<BoolT>>(t3286), label__True_955, label__False_956);
      if (label__True_955->is_used())
      {
        BIND(label__True_955);
        // ../../src/builtins/array-reverse.tq:65:27
        {
          // ../../src/builtins/array-reverse.tq:66:7
          TNode<Float64T> t3287 = UncheckedCast<Float64T>(LoadElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_541).value())));
          USE(implicit_cast<TNode<Float64T>>(t3287));
          TNode<Float64T> lower_value_1077_impl;
          auto lower_value_1077 = &lower_value_1077_impl;
          USE(lower_value_1077);
          *lower_value_1077 = implicit_cast<TNode<Float64T>>(t3287);
          // ../../src/builtins/array-reverse.tq:67:7
          TNode<Float64T> t3288 = UncheckedCast<Float64T>(LoadElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_542).value())));
          USE(implicit_cast<TNode<Float64T>>(t3288));
          TNode<Float64T> upper_value_1078_impl;
          auto upper_value_1078 = &upper_value_1078_impl;
          USE(upper_value_1078);
          *upper_value_1078 = implicit_cast<TNode<Float64T>>(t3288);
          // ../../src/builtins/array-reverse.tq:68:7
          StoreElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*lower_541).value()), implicit_cast<TNode<Float64T>>((*upper_value_1078)));
          // ../../src/builtins/array-reverse.tq:69:7
          StoreElement26ATFastPackedDoubleElements9ATfloat64(implicit_cast<TNode<FixedArrayBase>>(p_elements), implicit_cast<TNode<Smi>>((*upper_542).value()), implicit_cast<TNode<Float64T>>((*lower_value_1077)));
          // ../../src/builtins/array-reverse.tq:70:7
          TNode<Smi> t3289 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3290 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*lower_541).value()), implicit_cast<TNode<Smi>>(t3289)));
          *lower_541 = implicit_cast<TNode<Smi>>(t3290);
          // ../../src/builtins/array-reverse.tq:71:7
          TNode<Smi> t3291 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
          TNode<Smi> t3292 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>((*upper_542).value()), implicit_cast<TNode<Smi>>(t3291)));
          *upper_542 = implicit_cast<TNode<Smi>>(t3292);
        }
        Goto(label_header_1076_1454);
      }
      BIND(label__False_956);
    }
  }
}

TF_BUILTIN(Load25ATGenericElementsAccessor, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../third_party/v8/builtins/array-sort.tq:129:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:130:5
    TNode<Object> t3371 = UncheckedCast<Object>(GetProperty(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_elements), implicit_cast<TNode<Object>>(p_index)));
    USE(implicit_cast<TNode<Object>>(t3371));
    Return(implicit_cast<TNode<Object>>(t3371));
  }
}

TF_BUILTIN(Store25ATGenericElementsAccessor, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<FixedArray> p_sortState = UncheckedCast<FixedArray>(Parameter(Descriptor::kSortState));
  USE(p_sortState);
  TNode<HeapObject> p_elements = UncheckedCast<HeapObject>(Parameter(Descriptor::kElements));
  USE(p_elements);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../third_party/v8/builtins/array-sort.tq:198:27
  {
    // ../../third_party/v8/builtins/array-sort.tq:199:5
    CallBuiltin(Builtins::kSetProperty, implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_elements), implicit_cast<TNode<Object>>(p_index), implicit_cast<TNode<Object>>(p_value));
    // ../../third_party/v8/builtins/array-sort.tq:200:5
    Return(implicit_cast<TNode<Smi>>(kSuccess()));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor20ATFastDoubleElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1465_impl(this, {});
  Label* label_macro_end_1465 = &label_macro_end_1465_impl;
  USE(label_macro_end_1465);
  // ../../third_party/v8/builtins/array-sort.tq:1629:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:1630:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1631:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad20ATFastDoubleElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1632:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore20ATFastDoubleElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1633:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor20ATFastDoubleElements).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor23ATFastPackedSmiElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1466_impl(this, {});
  Label* label_macro_end_1466 = &label_macro_end_1466_impl;
  USE(label_macro_end_1466);
  // ../../third_party/v8/builtins/array-sort.tq:1629:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:1630:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1631:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad23ATFastPackedSmiElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1632:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore23ATFastPackedSmiElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1633:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor23ATFastPackedSmiElements).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor25ATFastSmiOrObjectElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1467_impl(this, {});
  Label* label_macro_end_1467 = &label_macro_end_1467_impl;
  USE(label_macro_end_1467);
  // ../../third_party/v8/builtins/array-sort.tq:1629:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:1630:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1631:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad25ATFastSmiOrObjectElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1632:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore25ATFastSmiOrObjectElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1633:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor25ATFastSmiOrObjectElements).code())));
  }
}

void ArrayBuiltinsFromDSLAssembler::InitializeSortStateAccessor20ATDictionaryElements(TNode<FixedArray> p_sortState) {
  Label label_macro_end_1468_impl(this, {});
  Label* label_macro_end_1468 = &label_macro_end_1468_impl;
  USE(label_macro_end_1468);
  // ../../third_party/v8/builtins/array-sort.tq:1629:77
  {
    // ../../third_party/v8/builtins/array-sort.tq:1630:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kAccessorIdx()), implicit_cast<TNode<Object>>(kFastElementsAccessorId()));
    // ../../third_party/v8/builtins/array-sort.tq:1631:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kLoadFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoad20ATDictionaryElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1632:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kStoreFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStore20ATDictionaryElements).code())));
    // ../../third_party/v8/builtins/array-sort.tq:1633:5
    StoreFixedArrayElement(implicit_cast<TNode<FixedArray>>(p_sortState), implicit_cast<int31_t>(kCanUseSameAccessorFnIdx()), implicit_cast<TNode<Object>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kCanUseSameAccessor20ATDictionaryElements).code())));
  }
}

TF_BUILTIN(CanUseSameAccessor20ATFastDoubleElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:329:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:330:5
    // ../../third_party/v8/builtins/array-sort.tq:332:5
    TNode<JSArray> t3372 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t3372));
    TVARIABLE(JSArray, a_557_impl);
    auto a_557 = &a_557_impl;
    USE(a_557);
    *a_557 = implicit_cast<TNode<JSArray>>(t3372);
    // ../../third_party/v8/builtins/array-sort.tq:333:5
    {
      Label label__True_961_impl(this);
      Label* label__True_961 = &label__True_961_impl;
      USE(label__True_961);
      Label label__False_962_impl(this, {});
      Label* label__False_962 = &label__False_962_impl;
      USE(label__False_962);
      TNode<Map> t3373 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_557).value())));
      TNode<BoolT> t3374 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t3373), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
      USE(implicit_cast<TNode<BoolT>>(t3374));
      Branch(implicit_cast<TNode<BoolT>>(t3374), label__True_961, label__False_962);
      if (label__True_961->is_used())
      {
        BIND(label__True_961);
        // ../../third_party/v8/builtins/array-sort.tq:333:38
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_962);
    }
    // ../../third_party/v8/builtins/array-sort.tq:335:5
    // ../../third_party/v8/builtins/array-sort.tq:336:5
    TNode<Smi> t3375 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<Smi>>(t3375));
    TVARIABLE(Smi, originalLength_558_impl);
    auto originalLength_558 = &originalLength_558_impl;
    USE(originalLength_558);
    *originalLength_558 = implicit_cast<TNode<Smi>>(t3375);
    // ../../third_party/v8/builtins/array-sort.tq:337:5
    {
      Label label__True_963_impl(this);
      Label* label__True_963 = &label__True_963_impl;
      USE(label__True_963);
      Label label__False_964_impl(this, {});
      Label* label__False_964 = &label__False_964_impl;
      USE(label__False_964);
      TNode<Smi> t3376 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_557).value())));
      TNode<BoolT> t3377 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>(t3376), implicit_cast<TNode<Smi>>((*originalLength_558).value())));
      USE(implicit_cast<TNode<BoolT>>(t3377));
      Branch(implicit_cast<TNode<BoolT>>(t3377), label__True_963, label__False_964);
      if (label__True_963->is_used())
      {
        BIND(label__True_963);
        // ../../third_party/v8/builtins/array-sort.tq:337:42
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_964);
    }
    // ../../third_party/v8/builtins/array-sort.tq:339:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

TF_BUILTIN(CanUseSameAccessor23ATFastPackedSmiElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:329:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:330:5
    // ../../third_party/v8/builtins/array-sort.tq:332:5
    TNode<JSArray> t3378 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t3378));
    TVARIABLE(JSArray, a_559_impl);
    auto a_559 = &a_559_impl;
    USE(a_559);
    *a_559 = implicit_cast<TNode<JSArray>>(t3378);
    // ../../third_party/v8/builtins/array-sort.tq:333:5
    {
      Label label__True_965_impl(this);
      Label* label__True_965 = &label__True_965_impl;
      USE(label__True_965);
      Label label__False_966_impl(this, {});
      Label* label__False_966 = &label__False_966_impl;
      USE(label__False_966);
      TNode<Map> t3379 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_559).value())));
      TNode<BoolT> t3380 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t3379), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
      USE(implicit_cast<TNode<BoolT>>(t3380));
      Branch(implicit_cast<TNode<BoolT>>(t3380), label__True_965, label__False_966);
      if (label__True_965->is_used())
      {
        BIND(label__True_965);
        // ../../third_party/v8/builtins/array-sort.tq:333:38
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_966);
    }
    // ../../third_party/v8/builtins/array-sort.tq:335:5
    // ../../third_party/v8/builtins/array-sort.tq:336:5
    TNode<Smi> t3381 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<Smi>>(t3381));
    TVARIABLE(Smi, originalLength_560_impl);
    auto originalLength_560 = &originalLength_560_impl;
    USE(originalLength_560);
    *originalLength_560 = implicit_cast<TNode<Smi>>(t3381);
    // ../../third_party/v8/builtins/array-sort.tq:337:5
    {
      Label label__True_967_impl(this);
      Label* label__True_967 = &label__True_967_impl;
      USE(label__True_967);
      Label label__False_968_impl(this, {});
      Label* label__False_968 = &label__False_968_impl;
      USE(label__False_968);
      TNode<Smi> t3382 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_559).value())));
      TNode<BoolT> t3383 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>(t3382), implicit_cast<TNode<Smi>>((*originalLength_560).value())));
      USE(implicit_cast<TNode<BoolT>>(t3383));
      Branch(implicit_cast<TNode<BoolT>>(t3383), label__True_967, label__False_968);
      if (label__True_967->is_used())
      {
        BIND(label__True_967);
        // ../../third_party/v8/builtins/array-sort.tq:337:42
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_968);
    }
    // ../../third_party/v8/builtins/array-sort.tq:339:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

TF_BUILTIN(CanUseSameAccessor25ATFastSmiOrObjectElements, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSReceiver> p_receiver = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_initialReceiverMap = UncheckedCast<Object>(Parameter(Descriptor::kInitialReceiverMap));
  USE(p_initialReceiverMap);
  TNode<Number> p_initialReceiverLength = UncheckedCast<Number>(Parameter(Descriptor::kInitialReceiverLength));
  USE(p_initialReceiverLength);
  // ../../third_party/v8/builtins/array-sort.tq:329:47
  {
    // ../../third_party/v8/builtins/array-sort.tq:330:5
    // ../../third_party/v8/builtins/array-sort.tq:332:5
    TNode<JSArray> t3384 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(implicit_cast<TNode<Object>>(p_receiver)));
    USE(implicit_cast<TNode<JSArray>>(t3384));
    TVARIABLE(JSArray, a_561_impl);
    auto a_561 = &a_561_impl;
    USE(a_561);
    *a_561 = implicit_cast<TNode<JSArray>>(t3384);
    // ../../third_party/v8/builtins/array-sort.tq:333:5
    {
      Label label__True_969_impl(this);
      Label* label__True_969 = &label__True_969_impl;
      USE(label__True_969);
      Label label__False_970_impl(this, {});
      Label* label__False_970 = &label__False_970_impl;
      USE(label__False_970);
      TNode<Map> t3385 = UncheckedCast<Map>(LoadMap(implicit_cast<TNode<HeapObject>>((*a_561).value())));
      TNode<BoolT> t3386 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<Object>>(t3385), implicit_cast<TNode<Object>>(p_initialReceiverMap)));
      USE(implicit_cast<TNode<BoolT>>(t3386));
      Branch(implicit_cast<TNode<BoolT>>(t3386), label__True_969, label__False_970);
      if (label__True_969->is_used())
      {
        BIND(label__True_969);
        // ../../third_party/v8/builtins/array-sort.tq:333:38
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_970);
    }
    // ../../third_party/v8/builtins/array-sort.tq:335:5
    // ../../third_party/v8/builtins/array-sort.tq:336:5
    TNode<Smi> t3387 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(p_initialReceiverLength)));
    USE(implicit_cast<TNode<Smi>>(t3387));
    TVARIABLE(Smi, originalLength_562_impl);
    auto originalLength_562 = &originalLength_562_impl;
    USE(originalLength_562);
    *originalLength_562 = implicit_cast<TNode<Smi>>(t3387);
    // ../../third_party/v8/builtins/array-sort.tq:337:5
    {
      Label label__True_971_impl(this);
      Label* label__True_971 = &label__True_971_impl;
      USE(label__True_971);
      Label label__False_972_impl(this, {});
      Label* label__False_972 = &label__False_972_impl;
      USE(label__False_972);
      TNode<Smi> t3388 = UncheckedCast<Smi>(LoadFastJSArrayLength(implicit_cast<TNode<JSArray>>((*a_561).value())));
      TNode<BoolT> t3389 = UncheckedCast<BoolT>(SmiNotEqual(implicit_cast<TNode<Smi>>(t3388), implicit_cast<TNode<Smi>>((*originalLength_562).value())));
      USE(implicit_cast<TNode<BoolT>>(t3389));
      Branch(implicit_cast<TNode<BoolT>>(t3389), label__True_971, label__False_972);
      if (label__True_971->is_used())
      {
        BIND(label__True_971);
        // ../../third_party/v8/builtins/array-sort.tq:337:42
        Return(implicit_cast<TNode<Oddball>>(False()));
      }
      BIND(label__False_972);
    }
    // ../../third_party/v8/builtins/array-sort.tq:339:5
    Return(implicit_cast<TNode<Oddball>>(True()));
  }
}

}  // namespace internal
}  // namespace v8

