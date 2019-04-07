#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-typed-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedUint8Array() {
  ElementsKind _return_136_impl;
  auto _return_136 = &_return_136_impl;
  USE(_return_136);
  Label label_macro_end_627_impl(this, {});
  Label* label_macro_end_627 = &label_macro_end_627_impl;
  USE(label_macro_end_627);
  // ../../src/builtins/typed-array.tq:20:62
  {
    // ../../src/builtins/typed-array.tq:21:4
    *_return_136 = UINT8_ELEMENTS;
    Goto(label_macro_end_627);
  }
  BIND(label_macro_end_627);
  return (*_return_136);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType16ATFixedInt8Array() {
  ElementsKind _return_137_impl;
  auto _return_137 = &_return_137_impl;
  USE(_return_137);
  Label label_macro_end_628_impl(this, {});
  Label* label_macro_end_628 = &label_macro_end_628_impl;
  USE(label_macro_end_628);
  // ../../src/builtins/typed-array.tq:23:61
  {
    // ../../src/builtins/typed-array.tq:24:4
    *_return_137 = INT8_ELEMENTS;
    Goto(label_macro_end_628);
  }
  BIND(label_macro_end_628);
  return (*_return_137);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint16Array() {
  ElementsKind _return_138_impl;
  auto _return_138 = &_return_138_impl;
  USE(_return_138);
  Label label_macro_end_629_impl(this, {});
  Label* label_macro_end_629 = &label_macro_end_629_impl;
  USE(label_macro_end_629);
  // ../../src/builtins/typed-array.tq:26:63
  {
    // ../../src/builtins/typed-array.tq:27:4
    *_return_138 = UINT16_ELEMENTS;
    Goto(label_macro_end_629);
  }
  BIND(label_macro_end_629);
  return (*_return_138);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt16Array() {
  ElementsKind _return_139_impl;
  auto _return_139 = &_return_139_impl;
  USE(_return_139);
  Label label_macro_end_630_impl(this, {});
  Label* label_macro_end_630 = &label_macro_end_630_impl;
  USE(label_macro_end_630);
  // ../../src/builtins/typed-array.tq:29:62
  {
    // ../../src/builtins/typed-array.tq:30:4
    *_return_139 = INT16_ELEMENTS;
    Goto(label_macro_end_630);
  }
  BIND(label_macro_end_630);
  return (*_return_139);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint32Array() {
  ElementsKind _return_140_impl;
  auto _return_140 = &_return_140_impl;
  USE(_return_140);
  Label label_macro_end_631_impl(this, {});
  Label* label_macro_end_631 = &label_macro_end_631_impl;
  USE(label_macro_end_631);
  // ../../src/builtins/typed-array.tq:32:63
  {
    // ../../src/builtins/typed-array.tq:33:4
    *_return_140 = UINT32_ELEMENTS;
    Goto(label_macro_end_631);
  }
  BIND(label_macro_end_631);
  return (*_return_140);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt32Array() {
  ElementsKind _return_141_impl;
  auto _return_141 = &_return_141_impl;
  USE(_return_141);
  Label label_macro_end_632_impl(this, {});
  Label* label_macro_end_632 = &label_macro_end_632_impl;
  USE(label_macro_end_632);
  // ../../src/builtins/typed-array.tq:35:62
  {
    // ../../src/builtins/typed-array.tq:36:4
    *_return_141 = INT32_ELEMENTS;
    Goto(label_macro_end_632);
  }
  BIND(label_macro_end_632);
  return (*_return_141);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat32Array() {
  ElementsKind _return_142_impl;
  auto _return_142 = &_return_142_impl;
  USE(_return_142);
  Label label_macro_end_633_impl(this, {});
  Label* label_macro_end_633 = &label_macro_end_633_impl;
  USE(label_macro_end_633);
  // ../../src/builtins/typed-array.tq:38:64
  {
    // ../../src/builtins/typed-array.tq:39:4
    *_return_142 = FLOAT32_ELEMENTS;
    Goto(label_macro_end_633);
  }
  BIND(label_macro_end_633);
  return (*_return_142);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat64Array() {
  ElementsKind _return_143_impl;
  auto _return_143 = &_return_143_impl;
  USE(_return_143);
  Label label_macro_end_634_impl(this, {});
  Label* label_macro_end_634 = &label_macro_end_634_impl;
  USE(label_macro_end_634);
  // ../../src/builtins/typed-array.tq:41:64
  {
    // ../../src/builtins/typed-array.tq:42:4
    *_return_143 = FLOAT64_ELEMENTS;
    Goto(label_macro_end_634);
  }
  BIND(label_macro_end_634);
  return (*_return_143);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType24ATFixedUint8ClampedArray() {
  ElementsKind _return_144_impl;
  auto _return_144 = &_return_144_impl;
  USE(_return_144);
  Label label_macro_end_635_impl(this, {});
  Label* label_macro_end_635 = &label_macro_end_635_impl;
  USE(label_macro_end_635);
  // ../../src/builtins/typed-array.tq:44:69
  {
    // ../../src/builtins/typed-array.tq:45:4
    *_return_144 = UINT8_CLAMPED_ELEMENTS;
    Goto(label_macro_end_635);
  }
  BIND(label_macro_end_635);
  return (*_return_144);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType21ATFixedBigUint64Array() {
  ElementsKind _return_145_impl;
  auto _return_145 = &_return_145_impl;
  USE(_return_145);
  Label label_macro_end_636_impl(this, {});
  Label* label_macro_end_636 = &label_macro_end_636_impl;
  USE(label_macro_end_636);
  // ../../src/builtins/typed-array.tq:47:66
  {
    // ../../src/builtins/typed-array.tq:48:4
    *_return_145 = BIGUINT64_ELEMENTS;
    Goto(label_macro_end_636);
  }
  BIND(label_macro_end_636);
  return (*_return_145);
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType20ATFixedBigInt64Array() {
  ElementsKind _return_146_impl;
  auto _return_146 = &_return_146_impl;
  USE(_return_146);
  Label label_macro_end_637_impl(this, {});
  Label* label_macro_end_637 = &label_macro_end_637_impl;
  USE(label_macro_end_637);
  // ../../src/builtins/typed-array.tq:50:65
  {
    // ../../src/builtins/typed-array.tq:51:4
    *_return_146 = BIGINT64_ELEMENTS;
    Goto(label_macro_end_637);
  }
  BIND(label_macro_end_637);
  return (*_return_146);
}

compiler::TNode<Number> TypedArrayBuiltinsFromDSLAssembler::CallCompareWithDetachedCheck(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b, Label* label_Detached_102) {
  TVARIABLE(Number, _return_147_impl);
  auto _return_147 = &_return_147_impl;
  USE(_return_147);
  Label label_macro_end_638_impl(this, {_return_147});
  Label* label_macro_end_638 = &label_macro_end_638_impl;
  USE(label_macro_end_638);
  // ../../src/builtins/typed-array.tq:72:41
  {
    // ../../src/builtins/typed-array.tq:74:4
    TNode<Object> t355 = UncheckedCast<Object>(Call(p_context, p_comparefn, Undefined(), p_a, p_b));
    USE(t355);
    TNode<Number> t356 = UncheckedCast<Number>(ToNumber_Inline(p_context, t355));
    USE(t356);
    TNode<Number> v_148_impl;
    auto v_148 = &v_148_impl;
    USE(v_148);
    *v_148 = t356;
    // ../../src/builtins/typed-array.tq:78:4
    {
      Label label__True_103_impl(this);
      Label* label__True_103 = &label__True_103_impl;
      USE(label__True_103);
      Label label__False_104_impl(this, {});
      Label* label__False_104 = &label__False_104_impl;
      USE(label__False_104);
      TNode<JSArrayBuffer> t357 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(p_array));
      TNode<BoolT> t358 = UncheckedCast<BoolT>(IsDetachedBuffer(t357));
      USE(t358);
      Branch(t358, label__True_103, label__False_104);
      if (label__True_103->is_used())
      {
        BIND(label__True_103);
        // ../../src/builtins/typed-array.tq:78:40
        Goto(label_Detached_102);
      }
      BIND(label__False_104);
    }
    // ../../src/builtins/typed-array.tq:81:4
    {
      Label label__True_105_impl(this);
      Label* label__True_105 = &label__True_105_impl;
      USE(label__True_105);
      Label label__False_106_impl(this, {});
      Label* label__False_106 = &label__False_106_impl;
      USE(label__False_106);
      TNode<BoolT> t359 = UncheckedCast<BoolT>(NumberIsNaN((*v_148)));
      USE(t359);
      Branch(t359, label__True_105, label__False_106);
      if (label__True_105->is_used())
      {
        BIND(label__True_105);
        // ../../src/builtins/typed-array.tq:81:24
        int31_t t360 = 0;
        TNode<Number> t361 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t360));
        *_return_147 = t361;
        Goto(label_macro_end_638);
      }
      BIND(label__False_106);
    }
    // ../../src/builtins/typed-array.tq:84:4
    *_return_147 = (*v_148);
    Goto(label_macro_end_638);
  }
  BIND(label_macro_end_638);
  return (*_return_147).value();
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayInsertionSort(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_107) {
  Label label_macro_end_639_impl(this, {});
  Label* label_macro_end_639 = &label_macro_end_639_impl;
  USE(label_macro_end_639);
  // ../../src/builtins/typed-array.tq:91:18
  {
    // ../../src/builtins/typed-array.tq:92:4
    TVARIABLE(Smi, from_149_impl);
    auto from_149 = &from_149_impl;
    USE(from_149);
    *from_149 = p_from_arg;
    // ../../src/builtins/typed-array.tq:93:4
    TVARIABLE(Smi, to_150_impl);
    auto to_150 = &to_150_impl;
    USE(to_150);
    *to_150 = p_to_arg;
    // ../../src/builtins/typed-array.tq:95:4
    {
      Label label__True_108_impl(this);
      Label* label__True_108 = &label__True_108_impl;
      USE(label__True_108);
      Label label__False_109_impl(this, {});
      Label* label__False_109 = &label__False_109_impl;
      USE(label__False_109);
      TNode<JSArrayBuffer> t362 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(p_array));
      TNode<BoolT> t363 = UncheckedCast<BoolT>(IsDetachedBuffer(t362));
      USE(t363);
      Branch(t363, label__True_108, label__False_109);
      if (label__True_108->is_used())
      {
        BIND(label__True_108);
        // ../../src/builtins/typed-array.tq:95:40
        Goto(label_Detached_107);
      }
      BIND(label__False_109);
    }
    // ../../src/builtins/typed-array.tq:97:4
    int31_t t364 = 1;
    TNode<Smi> t365 = UncheckedCast<Smi>(from_constexpr5ATSmi(t364));
    TNode<Smi> t366 = UncheckedCast<Smi>(SmiAdd((*from_149).value(), t365));
    USE(t366);
    TVARIABLE(Smi, i_151_impl);
    auto i_151 = &i_151_impl;
    USE(i_151);
    *i_151 = t366;
    Label label__True_110_impl(this);
    Label* label__True_110 = &label__True_110_impl;
    USE(label__True_110);
    Label label__False_111_impl(this);
    Label* label__False_111 = &label__False_111_impl;
    USE(label__False_111);
    Label label_header_500_640_impl(this, {i_151});
    Label* label_header_500_640 = &label_header_500_640_impl;
    USE(label_header_500_640);
    Goto(label_header_500_640);
    BIND(label_header_500_640);
    Label label_assignment_501_641_impl(this);
    Label* label_assignment_501_641 = &label_assignment_501_641_impl;
    USE(label_assignment_501_641);
    TNode<BoolT> t367 = UncheckedCast<BoolT>(SmiLessThan((*i_151).value(), (*to_150).value()));
    USE(t367);
    Branch(t367, label__True_110, label__False_111);
    if (label__True_110->is_used())
    {
      BIND(label__True_110);
      // ../../src/builtins/typed-array.tq:97:45
      {
        // ../../src/builtins/typed-array.tq:98:6
        TNode<Object> t368 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*i_151).value()));
        USE(t368);
        TNode<Object> element_152_impl;
        auto element_152 = &element_152_impl;
        USE(element_152);
        *element_152 = t368;
        // ../../src/builtins/typed-array.tq:99:6
        int31_t t369 = 1;
        TNode<Smi> t370 = UncheckedCast<Smi>(from_constexpr5ATSmi(t369));
        TNode<Smi> t371 = UncheckedCast<Smi>(SmiSub((*i_151).value(), t370));
        USE(t371);
        TVARIABLE(Smi, j_153_impl);
        auto j_153 = &j_153_impl;
        USE(j_153);
        *j_153 = t371;
        // ../../src/builtins/typed-array.tq:100:6
        Label label__True_112_impl(this);
        Label* label__True_112 = &label__True_112_impl;
        USE(label__True_112);
        Label label__False_113_impl(this);
        Label* label__False_113 = &label__False_113_impl;
        USE(label__False_113);
        Label label_header_502_642_impl(this, {j_153});
        Label* label_header_502_642 = &label_header_502_642_impl;
        USE(label_header_502_642);
        Goto(label_header_502_642);
        BIND(label_header_502_642);
        Label label_assignment_503_643_impl(this);
        Label* label_assignment_503_643 = &label_assignment_503_643_impl;
        USE(label_assignment_503_643);
        TNode<BoolT> t372 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual((*j_153).value(), (*from_149).value()));
        USE(t372);
        Branch(t372, label__True_112, label__False_113);
        if (label__True_112->is_used())
        {
          BIND(label__True_112);
          // ../../src/builtins/typed-array.tq:100:29
          {
            // ../../src/builtins/typed-array.tq:101:8
            TNode<Object> t373 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*j_153).value()));
            USE(t373);
            TNode<Object> tmp_154_impl;
            auto tmp_154 = &tmp_154_impl;
            USE(tmp_154);
            *tmp_154 = t373;
            // ../../src/builtins/typed-array.tq:102:8
            TNode<Number> t374 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*tmp_154), (*element_152), label_Detached_107));
            USE(t374);
            TNode<Number> order_155_impl;
            auto order_155 = &order_155_impl;
            USE(order_155);
            *order_155 = t374;
            // ../../src/builtins/typed-array.tq:104:8
            {
              Label label__True_114_impl(this);
              Label* label__True_114 = &label__True_114_impl;
              USE(label__True_114);
              Label label__False_115_impl(this);
              Label* label__False_115 = &label__False_115_impl;
              USE(label__False_115);
              Label label_if_done_label_504_644_impl(this, {});
              Label* label_if_done_label_504_644 = &label_if_done_label_504_644_impl;
              USE(label_if_done_label_504_644);
              int31_t t375 = 0;
              TNode<Number> t376 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t375));
              BranchIfNumberGreaterThan((*order_155), t376, label__True_114, label__False_115);
              if (label__True_114->is_used())
              {
                BIND(label__True_114);
                // ../../src/builtins/typed-array.tq:104:23
                {
                  // ../../src/builtins/typed-array.tq:105:10
                  int31_t t377 = 1;
                  TNode<Smi> t378 = UncheckedCast<Smi>(from_constexpr5ATSmi(t377));
                  TNode<Smi> t379 = UncheckedCast<Smi>(SmiAdd((*j_153).value(), t378));
                  USE(t379);
                  TNode<Object> t380 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, t379, (*tmp_154)));
                  USE(t380);
                }
                Goto(label_if_done_label_504_644);
              }
              if (label__False_115->is_used())
              {
                BIND(label__False_115);
                // ../../src/builtins/typed-array.tq:106:15
                {
                  // ../../src/builtins/typed-array.tq:107:10
                  Goto(label__False_113);
                }
              }
              BIND(label_if_done_label_504_644);
            }
          }
          Goto(label_assignment_503_643);
        }
        {
          BIND(label_assignment_503_643);
          TNode<Smi> t381 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
          TNode<Smi> t382 = UncheckedCast<Smi>(SmiSub((*j_153).value(), t381));
          *j_153 = t382;
          Goto(label_header_502_642);
        }
        BIND(label__False_113);
        // ../../src/builtins/typed-array.tq:110:6
        int31_t t383 = 1;
        TNode<Smi> t384 = UncheckedCast<Smi>(from_constexpr5ATSmi(t383));
        TNode<Smi> t385 = UncheckedCast<Smi>(SmiAdd((*j_153).value(), t384));
        USE(t385);
        TNode<Object> t386 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, t385, (*element_152)));
        USE(t386);
      }
      Goto(label_assignment_501_641);
    }
    {
      BIND(label_assignment_501_641);
      TNode<Smi> t387 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
      TNode<Smi> t388 = UncheckedCast<Smi>(SmiAdd((*i_151).value(), t387));
      *i_151 = t388;
      Goto(label_header_500_640);
    }
    BIND(label__False_111);
  }
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayQuickSortImpl(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, TNode<Code> p_Load, TNode<Code> p_Store, Label* label_Detached_116) {
  Label label_macro_end_645_impl(this, {});
  Label* label_macro_end_645 = &label_macro_end_645_impl;
  USE(label_macro_end_645);
  // ../../src/builtins/typed-array.tq:117:18
  {
    // ../../src/builtins/typed-array.tq:118:4
    TVARIABLE(Smi, from_156_impl);
    auto from_156 = &from_156_impl;
    USE(from_156);
    *from_156 = p_from_arg;
    // ../../src/builtins/typed-array.tq:119:4
    TVARIABLE(Smi, to_157_impl);
    auto to_157 = &to_157_impl;
    USE(to_157);
    *to_157 = p_to_arg;
    // ../../src/builtins/typed-array.tq:121:4
    {
      Label label__True_117_impl(this);
      Label* label__True_117 = &label__True_117_impl;
      USE(label__True_117);
      Label label__False_118_impl(this);
      Label* label__False_118 = &label__False_118_impl;
      USE(label__False_118);
      Label label_header_505_646_impl(this, {from_156, to_157});
      Label* label_header_505_646 = &label_header_505_646_impl;
      USE(label_header_505_646);
      Goto(label_header_505_646);
      BIND(label_header_505_646);
      TNode<Smi> t389 = UncheckedCast<Smi>(SmiSub((*to_157).value(), (*from_156).value()));
      USE(t389);
      int31_t t390 = 1;
      TNode<Smi> t391 = UncheckedCast<Smi>(from_constexpr5ATSmi(t390));
      TNode<BoolT> t392 = UncheckedCast<BoolT>(SmiGreaterThan(t389, t391));
      USE(t392);
      Branch(t392, label__True_117, label__False_118);
      if (label__True_117->is_used())
      {
        BIND(label__True_117);
        // ../../src/builtins/typed-array.tq:121:26
        {
          // ../../src/builtins/typed-array.tq:122:6
          {
            Label label__True_119_impl(this);
            Label* label__True_119 = &label__True_119_impl;
            USE(label__True_119);
            Label label__False_120_impl(this, {});
            Label* label__False_120 = &label__False_120_impl;
            USE(label__False_120);
            TNode<Smi> t393 = UncheckedCast<Smi>(SmiSub((*to_157).value(), (*from_156).value()));
            USE(t393);
            int31_t t394 = 10;
            TNode<Smi> t395 = UncheckedCast<Smi>(from_constexpr5ATSmi(t394));
            TNode<BoolT> t396 = UncheckedCast<BoolT>(SmiLessThanOrEqual(t393, t395));
            USE(t396);
            Branch(t396, label__True_119, label__False_120);
            if (label__True_119->is_used())
            {
              BIND(label__True_119);
              // ../../src/builtins/typed-array.tq:122:27
              {
                // ../../src/builtins/typed-array.tq:126:8
                TypedArrayInsertionSort(p_context, p_array, (*from_156).value(), (*to_157).value(), p_comparefn, p_Load, p_Store, label_Detached_116);
                // ../../src/builtins/typed-array.tq:129:8
                Goto(label__False_118);
              }
            }
            BIND(label__False_120);
          }
          // ../../src/builtins/typed-array.tq:134:6
          TNode<Smi> t397 = UncheckedCast<Smi>(SmiSub((*to_157).value(), (*from_156).value()));
          USE(t397);
          int31_t t398 = 1;
          TNode<Smi> t399 = UncheckedCast<Smi>(SmiShr(t397, t398));
          USE(t399);
          TNode<Smi> t400 = UncheckedCast<Smi>(SmiAdd((*from_156).value(), t399));
          USE(t400);
          TNode<Smi> third_index_158_impl;
          auto third_index_158 = &third_index_158_impl;
          USE(third_index_158);
          *third_index_158 = t400;
          // ../../src/builtins/typed-array.tq:136:6
          {
            Label label__True_121_impl(this);
            Label* label__True_121 = &label__True_121_impl;
            USE(label__True_121);
            Label label__False_122_impl(this, {});
            Label* label__False_122 = &label__False_122_impl;
            USE(label__False_122);
            TNode<JSArrayBuffer> t401 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(p_array));
            TNode<BoolT> t402 = UncheckedCast<BoolT>(IsDetachedBuffer(t401));
            USE(t402);
            Branch(t402, label__True_121, label__False_122);
            if (label__True_121->is_used())
            {
              BIND(label__True_121);
              // ../../src/builtins/typed-array.tq:136:42
              Goto(label_Detached_116);
            }
            BIND(label__False_122);
          }
          // ../../src/builtins/typed-array.tq:139:6
          TNode<Object> t403 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*from_156).value()));
          USE(t403);
          TVARIABLE(Object, v0_159_impl);
          auto v0_159 = &v0_159_impl;
          USE(v0_159);
          *v0_159 = t403;
          // ../../src/builtins/typed-array.tq:140:6
          int31_t t404 = 1;
          TNode<Smi> t405 = UncheckedCast<Smi>(from_constexpr5ATSmi(t404));
          TNode<Smi> t406 = UncheckedCast<Smi>(SmiSub((*to_157).value(), t405));
          USE(t406);
          TNode<Object> t407 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, t406));
          USE(t407);
          TVARIABLE(Object, v1_160_impl);
          auto v1_160 = &v1_160_impl;
          USE(v1_160);
          *v1_160 = t407;
          // ../../src/builtins/typed-array.tq:141:6
          TNode<Object> t408 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*third_index_158)));
          USE(t408);
          TVARIABLE(Object, v2_161_impl);
          auto v2_161 = &v2_161_impl;
          USE(v2_161);
          *v2_161 = t408;
          // ../../src/builtins/typed-array.tq:143:6
          TNode<Number> t409 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*v0_159).value(), (*v1_160).value(), label_Detached_116));
          USE(t409);
          TNode<Number> c01_162_impl;
          auto c01_162 = &c01_162_impl;
          USE(c01_162);
          *c01_162 = t409;
          // ../../src/builtins/typed-array.tq:145:6
          {
            Label label__True_123_impl(this);
            Label* label__True_123 = &label__True_123_impl;
            USE(label__True_123);
            Label label__False_124_impl(this, {v0_159, v1_160});
            Label* label__False_124 = &label__False_124_impl;
            USE(label__False_124);
            int31_t t410 = 0;
            TNode<Number> t411 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t410));
            BranchIfNumberGreaterThan((*c01_162), t411, label__True_123, label__False_124);
            if (label__True_123->is_used())
            {
              BIND(label__True_123);
              // ../../src/builtins/typed-array.tq:145:19
              {
                // ../../src/builtins/typed-array.tq:147:8
                TVARIABLE(Object, tmp_163_impl);
                auto tmp_163 = &tmp_163_impl;
                USE(tmp_163);
                *tmp_163 = (*v0_159).value();
                // ../../src/builtins/typed-array.tq:148:8
                *v0_159 = (*v1_160).value();
                // ../../src/builtins/typed-array.tq:149:8
                *v1_160 = (*tmp_163).value();
              }
              Goto(label__False_124);
            }
            BIND(label__False_124);
          }
          // ../../src/builtins/typed-array.tq:152:6
          TNode<Number> t412 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*v0_159).value(), (*v2_161).value(), label_Detached_116));
          USE(t412);
          TNode<Number> c02_164_impl;
          auto c02_164 = &c02_164_impl;
          USE(c02_164);
          *c02_164 = t412;
          // ../../src/builtins/typed-array.tq:154:6
          {
            Label label__True_125_impl(this);
            Label* label__True_125 = &label__True_125_impl;
            USE(label__True_125);
            Label label__False_126_impl(this);
            Label* label__False_126 = &label__False_126_impl;
            USE(label__False_126);
            Label label_if_done_label_506_647_impl(this, {v0_159, v1_160, v2_161});
            Label* label_if_done_label_506_647 = &label_if_done_label_506_647_impl;
            USE(label_if_done_label_506_647);
            int31_t t413 = 0;
            TNode<Number> t414 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t413));
            BranchIfNumberGreaterThanOrEqual((*c02_164), t414, label__True_125, label__False_126);
            if (label__True_125->is_used())
            {
              BIND(label__True_125);
              // ../../src/builtins/typed-array.tq:154:20
              {
                // ../../src/builtins/typed-array.tq:156:8
                TNode<Object> tmp_165_impl;
                auto tmp_165 = &tmp_165_impl;
                USE(tmp_165);
                *tmp_165 = (*v0_159).value();
                // ../../src/builtins/typed-array.tq:157:8
                *v0_159 = (*v2_161).value();
                // ../../src/builtins/typed-array.tq:158:8
                *v2_161 = (*v1_160).value();
                // ../../src/builtins/typed-array.tq:159:8
                *v1_160 = (*tmp_165);
              }
              Goto(label_if_done_label_506_647);
            }
            if (label__False_126->is_used())
            {
              BIND(label__False_126);
              // ../../src/builtins/typed-array.tq:160:13
              {
                // ../../src/builtins/typed-array.tq:162:8
                TNode<Number> t415 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*v1_160).value(), (*v2_161).value(), label_Detached_116));
                USE(t415);
                TNode<Number> c12_166_impl;
                auto c12_166 = &c12_166_impl;
                USE(c12_166);
                *c12_166 = t415;
                // ../../src/builtins/typed-array.tq:164:8
                {
                  Label label__True_127_impl(this);
                  Label* label__True_127 = &label__True_127_impl;
                  USE(label__True_127);
                  Label label__False_128_impl(this, {v1_160, v2_161});
                  Label* label__False_128 = &label__False_128_impl;
                  USE(label__False_128);
                  int31_t t416 = 0;
                  TNode<Number> t417 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t416));
                  BranchIfNumberGreaterThan((*c12_166), t417, label__True_127, label__False_128);
                  if (label__True_127->is_used())
                  {
                    BIND(label__True_127);
                    // ../../src/builtins/typed-array.tq:164:21
                    {
                      // ../../src/builtins/typed-array.tq:166:10
                      TNode<Object> tmp_167_impl;
                      auto tmp_167 = &tmp_167_impl;
                      USE(tmp_167);
                      *tmp_167 = (*v1_160).value();
                      // ../../src/builtins/typed-array.tq:167:10
                      *v1_160 = (*v2_161).value();
                      // ../../src/builtins/typed-array.tq:168:10
                      *v2_161 = (*tmp_167);
                    }
                    Goto(label__False_128);
                  }
                  BIND(label__False_128);
                }
              }
              Goto(label_if_done_label_506_647);
            }
            BIND(label_if_done_label_506_647);
          }
          // ../../src/builtins/typed-array.tq:173:6
          TNode<Object> t418 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*from_156).value(), (*v0_159).value()));
          USE(t418);
          // ../../src/builtins/typed-array.tq:174:6
          int31_t t419 = 1;
          TNode<Smi> t420 = UncheckedCast<Smi>(from_constexpr5ATSmi(t419));
          TNode<Smi> t421 = UncheckedCast<Smi>(SmiSub((*to_157).value(), t420));
          USE(t421);
          TNode<Object> t422 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, t421, (*v2_161).value()));
          USE(t422);
          // ../../src/builtins/typed-array.tq:176:6
          TNode<Object> pivot_168_impl;
          auto pivot_168 = &pivot_168_impl;
          USE(pivot_168);
          *pivot_168 = (*v1_160).value();
          // ../../src/builtins/typed-array.tq:177:6
          int31_t t423 = 1;
          TNode<Smi> t424 = UncheckedCast<Smi>(from_constexpr5ATSmi(t423));
          TNode<Smi> t425 = UncheckedCast<Smi>(SmiAdd((*from_156).value(), t424));
          USE(t425);
          TVARIABLE(Smi, low_end_169_impl);
          auto low_end_169 = &low_end_169_impl;
          USE(low_end_169);
          *low_end_169 = t425;
          // ../../src/builtins/typed-array.tq:178:6
          int31_t t426 = 1;
          TNode<Smi> t427 = UncheckedCast<Smi>(from_constexpr5ATSmi(t426));
          TNode<Smi> t428 = UncheckedCast<Smi>(SmiSub((*to_157).value(), t427));
          USE(t428);
          TVARIABLE(Smi, high_start_170_impl);
          auto high_start_170 = &high_start_170_impl;
          USE(high_start_170);
          *high_start_170 = t428;
          // ../../src/builtins/typed-array.tq:180:6
          TNode<Object> t429 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*low_end_169).value()));
          USE(t429);
          TVARIABLE(Object, low_end_value_171_impl);
          auto low_end_value_171 = &low_end_value_171_impl;
          USE(low_end_value_171);
          *low_end_value_171 = t429;
          // ../../src/builtins/typed-array.tq:181:6
          TNode<Object> t430 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*third_index_158), (*low_end_value_171).value()));
          USE(t430);
          // ../../src/builtins/typed-array.tq:182:6
          TNode<Object> t431 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*low_end_169).value(), (*pivot_168)));
          USE(t431);
          // ../../src/builtins/typed-array.tq:186:6
          int31_t t432 = 1;
          TNode<Smi> t433 = UncheckedCast<Smi>(from_constexpr5ATSmi(t432));
          TNode<Smi> t434 = UncheckedCast<Smi>(SmiAdd((*low_end_169).value(), t433));
          USE(t434);
          TVARIABLE(Smi, idx_172_impl);
          auto idx_172 = &idx_172_impl;
          USE(idx_172);
          *idx_172 = t434;
          Label label__True_129_impl(this);
          Label* label__True_129 = &label__True_129_impl;
          USE(label__True_129);
          Label label__False_130_impl(this);
          Label* label__False_130 = &label__False_130_impl;
          USE(label__False_130);
          Label label_header_507_648_impl(this, {low_end_169, high_start_170, low_end_value_171, idx_172});
          Label* label_header_507_648 = &label_header_507_648_impl;
          USE(label_header_507_648);
          Goto(label_header_507_648);
          BIND(label_header_507_648);
          Label label_assignment_508_649_impl(this);
          Label* label_assignment_508_649 = &label_assignment_508_649_impl;
          USE(label_assignment_508_649);
          TNode<BoolT> t435 = UncheckedCast<BoolT>(SmiLessThan((*idx_172).value(), (*high_start_170).value()));
          USE(t435);
          Branch(t435, label__True_129, label__False_130);
          if (label__True_129->is_used())
          {
            BIND(label__True_129);
            // ../../src/builtins/typed-array.tq:186:64
            {
              // ../../src/builtins/typed-array.tq:187:8
              TNode<Object> t436 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*idx_172).value()));
              USE(t436);
              TVARIABLE(Object, element_173_impl);
              auto element_173 = &element_173_impl;
              USE(element_173);
              *element_173 = t436;
              // ../../src/builtins/typed-array.tq:188:8
              TNode<Number> t437 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*element_173).value(), (*pivot_168), label_Detached_116));
              USE(t437);
              TVARIABLE(Number, order_174_impl);
              auto order_174 = &order_174_impl;
              USE(order_174);
              *order_174 = t437;
              // ../../src/builtins/typed-array.tq:191:8
              {
                Label label__True_131_impl(this);
                Label* label__True_131 = &label__True_131_impl;
                USE(label__True_131);
                Label label__False_132_impl(this);
                Label* label__False_132 = &label__False_132_impl;
                USE(label__False_132);
                Label label_if_done_label_509_650_impl(this, {low_end_169, high_start_170, low_end_value_171, element_173, order_174});
                Label* label_if_done_label_509_650 = &label_if_done_label_509_650_impl;
                USE(label_if_done_label_509_650);
                int31_t t438 = 0;
                TNode<Number> t439 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t438));
                BranchIfNumberLessThan((*order_174).value(), t439, label__True_131, label__False_132);
                if (label__True_131->is_used())
                {
                  BIND(label__True_131);
                  // ../../src/builtins/typed-array.tq:191:23
                  {
                    // ../../src/builtins/typed-array.tq:192:10
                    TNode<Object> t440 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*low_end_169).value()));
                    USE(t440);
                    *low_end_value_171 = t440;
                    // ../../src/builtins/typed-array.tq:193:10
                    TNode<Object> t441 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*idx_172).value(), (*low_end_value_171).value()));
                    USE(t441);
                    // ../../src/builtins/typed-array.tq:194:10
                    TNode<Object> t442 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*low_end_169).value(), (*element_173).value()));
                    USE(t442);
                    // ../../src/builtins/typed-array.tq:195:10
                    TNode<Smi> t443 = (*low_end_169).value();
                    USE(t443);
                    TNode<Smi> t444 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
                    TNode<Smi> t445 = UncheckedCast<Smi>(SmiAdd((*low_end_169).value(), t444));
                    *low_end_169 = t445;
                  }
                  Goto(label_if_done_label_509_650);
                }
                if (label__False_132->is_used())
                {
                  BIND(label__False_132);
                  // ../../src/builtins/typed-array.tq:196:15
                  {
                    Label label__True_133_impl(this);
                    Label* label__True_133 = &label__True_133_impl;
                    USE(label__True_133);
                    Label label__False_134_impl(this, {low_end_169, high_start_170, low_end_value_171, element_173, order_174});
                    Label* label__False_134 = &label__False_134_impl;
                    USE(label__False_134);
                    int31_t t446 = 0;
                    TNode<Number> t447 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t446));
                    BranchIfNumberGreaterThan((*order_174).value(), t447, label__True_133, label__False_134);
                    if (label__True_133->is_used())
                    {
                      BIND(label__True_133);
                      // ../../src/builtins/typed-array.tq:196:30
                      {
                        // ../../src/builtins/typed-array.tq:197:10
                        TVARIABLE(BoolT, break_for_175_impl);
                        auto break_for_175 = &break_for_175_impl;
                        USE(break_for_175);
                        TNode<BoolT> t448 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
                        *break_for_175 = t448;
                        // ../../src/builtins/typed-array.tq:199:10
                        {
                          Label label__True_135_impl(this);
                          Label* label__True_135 = &label__True_135_impl;
                          USE(label__True_135);
                          Label label__False_136_impl(this);
                          Label* label__False_136 = &label__False_136_impl;
                          USE(label__False_136);
                          Label label_header_510_651_impl(this, {high_start_170, order_174, break_for_175});
                          Label* label_header_510_651 = &label_header_510_651_impl;
                          USE(label_header_510_651);
                          Goto(label_header_510_651);
                          BIND(label_header_510_651);
                          int31_t t449 = 0;
                          TNode<Number> t450 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t449));
                          BranchIfNumberGreaterThan((*order_174).value(), t450, label__True_135, label__False_136);
                          if (label__True_135->is_used())
                          {
                            BIND(label__True_135);
                            // ../../src/builtins/typed-array.tq:199:28
                            {
                              // ../../src/builtins/typed-array.tq:200:12
                              TNode<Smi> t451 = (*high_start_170).value();
                              USE(t451);
                              TNode<Smi> t452 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
                              TNode<Smi> t453 = UncheckedCast<Smi>(SmiSub((*high_start_170).value(), t452));
                              *high_start_170 = t453;
                              // ../../src/builtins/typed-array.tq:201:12
                              {
                                Label label__True_137_impl(this);
                                Label* label__True_137 = &label__True_137_impl;
                                USE(label__True_137);
                                Label label__False_138_impl(this, {break_for_175});
                                Label* label__False_138 = &label__False_138_impl;
                                USE(label__False_138);
                                TNode<BoolT> t454 = UncheckedCast<BoolT>(SmiEqual((*high_start_170).value(), (*idx_172).value()));
                                USE(t454);
                                Branch(t454, label__True_137, label__False_138);
                                if (label__True_137->is_used())
                                {
                                  BIND(label__True_137);
                                  // ../../src/builtins/typed-array.tq:201:35
                                  {
                                    // ../../src/builtins/typed-array.tq:202:14
                                    TNode<BoolT> t455 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
                                    *break_for_175 = t455;
                                    // ../../src/builtins/typed-array.tq:203:14
                                    Goto(label__False_136);
                                  }
                                }
                                BIND(label__False_138);
                              }
                              // ../../src/builtins/typed-array.tq:206:12
                              TNode<Object> t456 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*high_start_170).value()));
                              USE(t456);
                              TNode<Object> top_elem_176_impl;
                              auto top_elem_176 = &top_elem_176_impl;
                              USE(top_elem_176);
                              *top_elem_176 = t456;
                              // ../../src/builtins/typed-array.tq:207:12
                              TNode<Number> t457 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, (*top_elem_176), (*pivot_168), label_Detached_116));
                              USE(t457);
                              *order_174 = t457;
                            }
                            Goto(label_header_510_651);
                          }
                          BIND(label__False_136);
                        }
                        // ../../src/builtins/typed-array.tq:211:10
                        {
                          Label label__True_139_impl(this);
                          Label* label__True_139 = &label__True_139_impl;
                          USE(label__True_139);
                          Label label__False_140_impl(this, {});
                          Label* label__False_140 = &label__False_140_impl;
                          USE(label__False_140);
                          Branch((*break_for_175).value(), label__True_139, label__False_140);
                          if (label__True_139->is_used())
                          {
                            BIND(label__True_139);
                            // ../../src/builtins/typed-array.tq:211:25
                            {
                              // ../../src/builtins/typed-array.tq:212:12
                              Goto(label__False_130);
                            }
                          }
                          BIND(label__False_140);
                        }
                        // ../../src/builtins/typed-array.tq:215:10
                        TNode<Object> t458 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*high_start_170).value()));
                        USE(t458);
                        TNode<Object> high_start_value_177_impl;
                        auto high_start_value_177 = &high_start_value_177_impl;
                        USE(high_start_value_177);
                        *high_start_value_177 = t458;
                        // ../../src/builtins/typed-array.tq:216:10
                        TNode<Object> t459 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*idx_172).value(), (*high_start_value_177)));
                        USE(t459);
                        // ../../src/builtins/typed-array.tq:217:10
                        TNode<Object> t460 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*high_start_170).value(), (*element_173).value()));
                        USE(t460);
                        // ../../src/builtins/typed-array.tq:219:10
                        {
                          Label label__True_141_impl(this);
                          Label* label__True_141 = &label__True_141_impl;
                          USE(label__True_141);
                          Label label__False_142_impl(this, {low_end_169, low_end_value_171, element_173});
                          Label* label__False_142 = &label__False_142_impl;
                          USE(label__False_142);
                          int31_t t461 = 0;
                          TNode<Number> t462 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t461));
                          BranchIfNumberLessThan((*order_174).value(), t462, label__True_141, label__False_142);
                          if (label__True_141->is_used())
                          {
                            BIND(label__True_141);
                            // ../../src/builtins/typed-array.tq:219:25
                            {
                              // ../../src/builtins/typed-array.tq:220:12
                              TNode<Object> t463 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*idx_172).value()));
                              USE(t463);
                              *element_173 = t463;
                              // ../../src/builtins/typed-array.tq:222:12
                              TNode<Object> t464 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).descriptor(), p_Load, p_context, p_array, (*low_end_169).value()));
                              USE(t464);
                              *low_end_value_171 = t464;
                              // ../../src/builtins/typed-array.tq:223:12
                              TNode<Object> t465 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*idx_172).value(), (*low_end_value_171).value()));
                              USE(t465);
                              // ../../src/builtins/typed-array.tq:224:12
                              TNode<Object> t466 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).descriptor(), p_Store, p_context, p_array, (*low_end_169).value(), (*element_173).value()));
                              USE(t466);
                              // ../../src/builtins/typed-array.tq:225:12
                              TNode<Smi> t467 = (*low_end_169).value();
                              USE(t467);
                              TNode<Smi> t468 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
                              TNode<Smi> t469 = UncheckedCast<Smi>(SmiAdd((*low_end_169).value(), t468));
                              *low_end_169 = t469;
                            }
                            Goto(label__False_142);
                          }
                          BIND(label__False_142);
                        }
                      }
                      Goto(label__False_134);
                    }
                    BIND(label__False_134);
                  }
                  Goto(label_if_done_label_509_650);
                }
                BIND(label_if_done_label_509_650);
              }
            }
            Goto(label_assignment_508_649);
          }
          {
            BIND(label_assignment_508_649);
            TNode<Smi> t470 = (*idx_172).value();
            USE(t470);
            TNode<Smi> t471 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
            TNode<Smi> t472 = UncheckedCast<Smi>(SmiAdd((*idx_172).value(), t471));
            *idx_172 = t472;
            Goto(label_header_507_648);
          }
          BIND(label__False_130);
          // ../../src/builtins/typed-array.tq:230:6
          {
            Label label__True_143_impl(this);
            Label* label__True_143 = &label__True_143_impl;
            USE(label__True_143);
            Label label__False_144_impl(this);
            Label* label__False_144 = &label__False_144_impl;
            USE(label__False_144);
            Label label_if_done_label_511_652_impl(this, {from_156, to_157});
            Label* label_if_done_label_511_652 = &label_if_done_label_511_652_impl;
            USE(label_if_done_label_511_652);
            TNode<Smi> t473 = UncheckedCast<Smi>(SmiSub((*to_157).value(), (*high_start_170).value()));
            USE(t473);
            TNode<Smi> t474 = UncheckedCast<Smi>(SmiSub((*low_end_169).value(), (*from_156).value()));
            USE(t474);
            TNode<BoolT> t475 = UncheckedCast<BoolT>(SmiLessThan(t473, t474));
            USE(t475);
            Branch(t475, label__True_143, label__False_144);
            if (label__True_143->is_used())
            {
              BIND(label__True_143);
              // ../../src/builtins/typed-array.tq:230:48
              {
                // ../../src/builtins/typed-array.tq:231:8
                TNode<JSTypedArray> t476 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, p_context, p_array, (*high_start_170).value(), (*to_157).value(), p_comparefn, p_Load, p_Store));
                USE(t476);
                // ../../src/builtins/typed-array.tq:233:8
                *to_157 = (*low_end_169).value();
              }
              Goto(label_if_done_label_511_652);
            }
            if (label__False_144->is_used())
            {
              BIND(label__False_144);
              // ../../src/builtins/typed-array.tq:234:13
              {
                // ../../src/builtins/typed-array.tq:235:8
                TNode<JSTypedArray> t477 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, p_context, p_array, (*from_156).value(), (*low_end_169).value(), p_comparefn, p_Load, p_Store));
                USE(t477);
                // ../../src/builtins/typed-array.tq:237:8
                *from_156 = (*high_start_170).value();
              }
              Goto(label_if_done_label_511_652);
            }
            BIND(label_if_done_label_511_652);
          }
        }
        Goto(label_header_505_646);
      }
      BIND(label__False_118);
    }
  }
}

TF_BUILTIN(TypedArrayQuickSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_from = UncheckedCast<Smi>(Parameter(Descriptor::kFrom));
  USE(p_from);
  TNode<Smi> p_to = UncheckedCast<Smi>(Parameter(Descriptor::kTo));
  USE(p_to);
  TNode<JSReceiver> p_comparefn = UncheckedCast<JSReceiver>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  TNode<Code> p_Load = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(p_Load);
  TNode<Code> p_Store = UncheckedCast<Code>(Parameter(Descriptor::kStore));
  USE(p_Store);
  // ../../src/builtins/typed-array.tq:244:71
  {
    // ../../src/builtins/typed-array.tq:245:4
    {
      Label label_try_done_512_653_impl(this);
      Label* label_try_done_512_653 = &label_try_done_512_653_impl;
      USE(label_try_done_512_653);
      Label label_Detached_145_impl(this);
      Label* label_Detached_145 = &label_Detached_145_impl;
      USE(label_Detached_145);
      Label label_try_begin_513_654_impl(this);
      Label* label_try_begin_513_654 = &label_try_begin_513_654_impl;
      USE(label_try_begin_513_654);
      Goto(label_try_begin_513_654);
      if (label_try_begin_513_654->is_used())
      {
        BIND(label_try_begin_513_654);
        // ../../src/builtins/typed-array.tq:245:8
        {
          // ../../src/builtins/typed-array.tq:246:6
          TypedArrayQuickSortImpl(p_context, p_array, p_from, p_to, p_comparefn, p_Load, p_Store, label_Detached_145);
        }
        Goto(label_try_done_512_653);
      }
      if (label_Detached_145->is_used())
      {
        BIND(label_Detached_145);
        // ../../src/builtins/typed-array.tq:249:19
        {
          // ../../src/builtins/typed-array.tq:250:6
          const char* t478 = "%TypedArray%.prototype.sort";
          TNode<Object> t479 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t478));
          ThrowTypeError(p_context, MessageTemplate::kDetachedOperation, t479);
        }
      }
      BIND(label_try_done_512_653);
    }
    // ../../src/builtins/typed-array.tq:253:4
    Return(p_array);
  }
}

TF_BUILTIN(TypedArrayPrototypeSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/typed-array.tq:258:70
  {
    // ../../src/builtins/typed-array.tq:261:4
    auto t480 = [=]() {
      int31_t t482 = 0;
      TNode<IntPtrT> t483 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t482));
      TNode<Object> t484 = UncheckedCast<Object>(GetArgumentValue(arguments, t483));
      return t484;
    };
    auto t481 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t485_514_impl);
    auto t485_514 = &t485_514_impl;
    USE(t485_514);
    {
      Label label__True_146_impl(this);
      Label* label__True_146 = &label__True_146_impl;
      USE(label__True_146);
      Label label__False_147_impl(this);
      Label* label__False_147 = &label__False_147_impl;
      USE(label__False_147);
      Label label__done_515_655_impl(this, {t485_514});
      Label* label__done_515_655 = &label__done_515_655_impl;
      USE(label__done_515_655);
      TNode<IntPtrT> t486 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t487 = 0;
      TNode<IntPtrT> t488 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t487));
      TNode<BoolT> t489 = UncheckedCast<BoolT>(IntPtrGreaterThan(t486, t488));
      USE(t489);
      Branch(t489, label__True_146, label__False_147);
      BIND(label__True_146);
            *t485_514 = t480();
      Goto(label__done_515_655);
      BIND(label__False_147);
            *t485_514 = t481();
      Goto(label__done_515_655);
      BIND(label__done_515_655);
    }
    TNode<Object> comparefn_obj_178_impl;
    auto comparefn_obj_178 = &comparefn_obj_178_impl;
    USE(comparefn_obj_178);
    *comparefn_obj_178 = (*t485_514).value();
    // ../../src/builtins/typed-array.tq:263:4
    {
      Label label__True_148_impl(this);
      Label* label__True_148 = &label__True_148_impl;
      USE(label__True_148);
      Label label__False_149_impl(this, {});
      Label* label__False_149 = &label__False_149_impl;
      USE(label__False_149);
      Label label__True_150_impl(this);
      Label* label__True_150 = &label__True_150_impl;
      USE(label__True_150);
      TNode<BoolT> t490 = UncheckedCast<BoolT>(WordNotEqual((*comparefn_obj_178), Undefined()));
      USE(t490);
      GotoIfNot(t490, label__False_149);
      TNode<BoolT> t491 = UncheckedCast<BoolT>(TaggedIsCallable((*comparefn_obj_178)));
      USE(t491);
      TNode<BoolT> t492 = UncheckedCast<BoolT>(Word32BinaryNot(t491));
      USE(t492);
      Branch(t492, label__True_148, label__False_149);
      if (label__True_148->is_used())
      {
        BIND(label__True_148);
        // ../../src/builtins/typed-array.tq:263:72
        {
          // ../../src/builtins/typed-array.tq:264:6
          ThrowTypeError(p_context, MessageTemplate::kBadSortComparisonFunction, (*comparefn_obj_178));
        }
      }
      BIND(label__False_149);
    }
    // ../../src/builtins/typed-array.tq:268:4
    TNode<Object> obj_179_impl;
    auto obj_179 = &obj_179_impl;
    USE(obj_179);
    *obj_179 = p_receiver;
    // ../../src/builtins/typed-array.tq:272:4
    const char* t493 = "%TypedArray%.prototype.sort";
    TNode<JSTypedArray> t494 = UncheckedCast<JSTypedArray>(ValidateTypedArray(p_context, (*obj_179), t493));
    USE(t494);
    TNode<JSTypedArray> array_180_impl;
    auto array_180 = &array_180_impl;
    USE(array_180);
    *array_180 = t494;
    // ../../src/builtins/typed-array.tq:276:4
    {
      Label label__True_151_impl(this);
      Label* label__True_151 = &label__True_151_impl;
      USE(label__True_151);
      Label label__False_152_impl(this, {});
      Label* label__False_152 = &label__False_152_impl;
      USE(label__False_152);
      TNode<BoolT> t495 = UncheckedCast<BoolT>(WordEqual((*comparefn_obj_178), Undefined()));
      USE(t495);
      Branch(t495, label__True_151, label__False_152);
      if (label__True_151->is_used())
      {
        BIND(label__True_151);
        // ../../src/builtins/typed-array.tq:276:36
        {
          // ../../src/builtins/typed-array.tq:277:6
          TNode<JSTypedArray> t496 = UncheckedCast<JSTypedArray>(CallRuntime(Runtime::kTypedArraySortFast, p_context, (*obj_179)));
          USE(t496);
          arguments->PopAndReturn(t496);
        }
      }
      BIND(label__False_152);
    }
    // ../../src/builtins/typed-array.tq:281:4
    TNode<Smi> t497 = UncheckedCast<Smi>(LoadTypedArrayLength((*array_180)));
    TNode<Smi> len_181_impl;
    auto len_181 = &len_181_impl;
    USE(len_181);
    *len_181 = t497;
    // ../../src/builtins/typed-array.tq:283:4
    {
      Label label_try_done_516_656_impl(this);
      Label* label_try_done_516_656 = &label_try_done_516_656_impl;
      USE(label_try_done_516_656);
      Label label_CastError_153_impl(this);
      Label* label_CastError_153 = &label_CastError_153_impl;
      USE(label_CastError_153);
      Label label_try_begin_517_657_impl(this);
      Label* label_try_begin_517_657 = &label_try_begin_517_657_impl;
      USE(label_try_begin_517_657);
      Goto(label_try_begin_517_657);
      if (label_try_begin_517_657->is_used())
      {
        BIND(label_try_begin_517_657);
        // ../../src/builtins/typed-array.tq:283:8
        {
          // ../../src/builtins/typed-array.tq:284:6
          TNode<JSReceiver> t498 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy((*comparefn_obj_178), label_CastError_153));
          USE(t498);
          TNode<JSReceiver> comparefn_182_impl;
          auto comparefn_182 = &comparefn_182_impl;
          USE(comparefn_182);
          *comparefn_182 = t498;
          // ../../src/builtins/typed-array.tq:286:6
          TVARIABLE(Code, loadfn_183_impl);
          auto loadfn_183 = &loadfn_183_impl;
          USE(loadfn_183);
          // ../../src/builtins/typed-array.tq:287:6
          TVARIABLE(Code, storefn_184_impl);
          auto storefn_184 = &storefn_184_impl;
          USE(storefn_184);
          // ../../src/builtins/typed-array.tq:289:6
          TNode<Int32T> t499 = UncheckedCast<Int32T>(LoadElementsKind((*array_180)));
          TVARIABLE(Int32T, elements_kind_185_impl);
          auto elements_kind_185 = &elements_kind_185_impl;
          USE(elements_kind_185);
          *elements_kind_185 = t499;
          // ../../src/builtins/typed-array.tq:291:6
          {
            Label label__True_154_impl(this);
            Label* label__True_154 = &label__True_154_impl;
            USE(label__True_154);
            Label label__False_155_impl(this);
            Label* label__False_155 = &label__False_155_impl;
            USE(label__False_155);
            Label label_if_done_label_518_658_impl(this, {loadfn_183, storefn_184});
            Label* label_if_done_label_518_658 = &label_if_done_label_518_658_impl;
            USE(label_if_done_label_518_658);
            TNode<BoolT> t500 = UncheckedCast<BoolT>(IsElementsKindGreaterThan((*elements_kind_185).value(), UINT32_ELEMENTS));
            USE(t500);
            Branch(t500, label__True_154, label__False_155);
            if (label__True_154->is_used())
            {
              BIND(label__True_154);
              // ../../src/builtins/typed-array.tq:291:69
              {
                // ../../src/builtins/typed-array.tq:292:8
                {
                  Label label__True_156_impl(this);
                  Label* label__True_156 = &label__True_156_impl;
                  USE(label__True_156);
                  Label label__False_157_impl(this);
                  Label* label__False_157 = &label__False_157_impl;
                  USE(label__False_157);
                  Label label_if_done_label_519_659_impl(this, {loadfn_183, storefn_184});
                  Label* label_if_done_label_519_659 = &label_if_done_label_519_659_impl;
                  USE(label_if_done_label_519_659);
                  TNode<Int32T> t501 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(INT32_ELEMENTS));
                  TNode<BoolT> t502 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t501));
                  USE(t502);
                  Branch(t502, label__True_156, label__False_157);
                  if (label__True_156->is_used())
                  {
                    BIND(label__True_156);
                    // ../../src/builtins/typed-array.tq:292:45
                    {
                      // ../../src/builtins/typed-array.tq:293:10
                      *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).code());
                      // ../../src/builtins/typed-array.tq:294:10
                      *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).code());
                    }
                    Goto(label_if_done_label_519_659);
                  }
                  if (label__False_157->is_used())
                  {
                    BIND(label__False_157);
                    // ../../src/builtins/typed-array.tq:295:15
                    {
                      Label label__True_158_impl(this);
                      Label* label__True_158 = &label__True_158_impl;
                      USE(label__True_158);
                      Label label__False_159_impl(this);
                      Label* label__False_159 = &label__False_159_impl;
                      USE(label__False_159);
                      Label label_if_done_label_520_660_impl(this, {loadfn_183, storefn_184});
                      Label* label_if_done_label_520_660 = &label_if_done_label_520_660_impl;
                      USE(label_if_done_label_520_660);
                      TNode<Int32T> t503 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(FLOAT32_ELEMENTS));
                      TNode<BoolT> t504 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t503));
                      USE(t504);
                      Branch(t504, label__True_158, label__False_159);
                      if (label__True_158->is_used())
                      {
                        BIND(label__True_158);
                        // ../../src/builtins/typed-array.tq:295:54
                        {
                          // ../../src/builtins/typed-array.tq:296:10
                          *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat32Array).code());
                          // ../../src/builtins/typed-array.tq:297:10
                          *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat32Array).code());
                        }
                        Goto(label_if_done_label_520_660);
                      }
                      if (label__False_159->is_used())
                      {
                        BIND(label__False_159);
                        // ../../src/builtins/typed-array.tq:298:15
                        {
                          Label label__True_160_impl(this);
                          Label* label__True_160 = &label__True_160_impl;
                          USE(label__True_160);
                          Label label__False_161_impl(this);
                          Label* label__False_161 = &label__False_161_impl;
                          USE(label__False_161);
                          Label label_if_done_label_521_661_impl(this, {loadfn_183, storefn_184});
                          Label* label_if_done_label_521_661 = &label_if_done_label_521_661_impl;
                          USE(label_if_done_label_521_661);
                          TNode<Int32T> t505 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(FLOAT64_ELEMENTS));
                          TNode<BoolT> t506 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t505));
                          USE(t506);
                          Branch(t506, label__True_160, label__False_161);
                          if (label__True_160->is_used())
                          {
                            BIND(label__True_160);
                            // ../../src/builtins/typed-array.tq:298:54
                            {
                              // ../../src/builtins/typed-array.tq:299:10
                              *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement19ATFixedFloat64Array).code());
                              // ../../src/builtins/typed-array.tq:300:10
                              *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement19ATFixedFloat64Array).code());
                            }
                            Goto(label_if_done_label_521_661);
                          }
                          if (label__False_161->is_used())
                          {
                            BIND(label__False_161);
                            // ../../src/builtins/typed-array.tq:301:15
                            {
                              Label label__True_162_impl(this);
                              Label* label__True_162 = &label__True_162_impl;
                              USE(label__True_162);
                              Label label__False_163_impl(this);
                              Label* label__False_163 = &label__False_163_impl;
                              USE(label__False_163);
                              Label label_if_done_label_522_662_impl(this, {loadfn_183, storefn_184});
                              Label* label_if_done_label_522_662 = &label_if_done_label_522_662_impl;
                              USE(label_if_done_label_522_662);
                              TNode<Int32T> t507 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(UINT8_CLAMPED_ELEMENTS));
                              TNode<BoolT> t508 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t507));
                              USE(t508);
                              Branch(t508, label__True_162, label__False_163);
                              if (label__True_162->is_used())
                              {
                                BIND(label__True_162);
                                // ../../src/builtins/typed-array.tq:301:60
                                {
                                  // ../../src/builtins/typed-array.tq:302:10
                                  *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement24ATFixedUint8ClampedArray).code());
                                  // ../../src/builtins/typed-array.tq:303:10
                                  *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement24ATFixedUint8ClampedArray).code());
                                }
                                Goto(label_if_done_label_522_662);
                              }
                              if (label__False_163->is_used())
                              {
                                BIND(label__False_163);
                                // ../../src/builtins/typed-array.tq:304:15
                                {
                                  Label label__True_164_impl(this);
                                  Label* label__True_164 = &label__True_164_impl;
                                  USE(label__True_164);
                                  Label label__False_165_impl(this);
                                  Label* label__False_165 = &label__False_165_impl;
                                  USE(label__False_165);
                                  Label label_if_done_label_523_663_impl(this, {loadfn_183, storefn_184});
                                  Label* label_if_done_label_523_663 = &label_if_done_label_523_663_impl;
                                  USE(label_if_done_label_523_663);
                                  TNode<Int32T> t509 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(BIGUINT64_ELEMENTS));
                                  TNode<BoolT> t510 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t509));
                                  USE(t510);
                                  Branch(t510, label__True_164, label__False_165);
                                  if (label__True_164->is_used())
                                  {
                                    BIND(label__True_164);
                                    // ../../src/builtins/typed-array.tq:304:56
                                    {
                                      // ../../src/builtins/typed-array.tq:305:10
                                      *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement21ATFixedBigUint64Array).code());
                                      // ../../src/builtins/typed-array.tq:306:10
                                      *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement21ATFixedBigUint64Array).code());
                                    }
                                    Goto(label_if_done_label_523_663);
                                  }
                                  if (label__False_165->is_used())
                                  {
                                    BIND(label__False_165);
                                    // ../../src/builtins/typed-array.tq:307:15
                                    {
                                      Label label__True_166_impl(this);
                                      Label* label__True_166 = &label__True_166_impl;
                                      USE(label__True_166);
                                      Label label__False_167_impl(this);
                                      Label* label__False_167 = &label__False_167_impl;
                                      USE(label__False_167);
                                      Label label_if_done_label_524_664_impl(this, {loadfn_183, storefn_184});
                                      Label* label_if_done_label_524_664 = &label_if_done_label_524_664_impl;
                                      USE(label_if_done_label_524_664);
                                      TNode<Int32T> t511 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(BIGINT64_ELEMENTS));
                                      TNode<BoolT> t512 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t511));
                                      USE(t512);
                                      Branch(t512, label__True_166, label__False_167);
                                      if (label__True_166->is_used())
                                      {
                                        BIND(label__True_166);
                                        // ../../src/builtins/typed-array.tq:307:55
                                        {
                                          // ../../src/builtins/typed-array.tq:308:10
                                          *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement20ATFixedBigInt64Array).code());
                                          // ../../src/builtins/typed-array.tq:309:10
                                          *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement20ATFixedBigInt64Array).code());
                                        }
                                        Goto(label_if_done_label_524_664);
                                      }
                                      if (label__False_167->is_used())
                                      {
                                        BIND(label__False_167);
                                        // ../../src/builtins/typed-array.tq:310:15
                                        {
                                          // ../../src/builtins/typed-array.tq:311:10
                                          Unreachable();
                                        }
                                      }
                                      BIND(label_if_done_label_524_664);
                                    }
                                    Goto(label_if_done_label_523_663);
                                  }
                                  BIND(label_if_done_label_523_663);
                                }
                                Goto(label_if_done_label_522_662);
                              }
                              BIND(label_if_done_label_522_662);
                            }
                            Goto(label_if_done_label_521_661);
                          }
                          BIND(label_if_done_label_521_661);
                        }
                        Goto(label_if_done_label_520_660);
                      }
                      BIND(label_if_done_label_520_660);
                    }
                    Goto(label_if_done_label_519_659);
                  }
                  BIND(label_if_done_label_519_659);
                }
              }
              Goto(label_if_done_label_518_658);
            }
            if (label__False_155->is_used())
            {
              BIND(label__False_155);
              // ../../src/builtins/typed-array.tq:313:13
              {
                // ../../src/builtins/typed-array.tq:314:8
                {
                  Label label__True_168_impl(this);
                  Label* label__True_168 = &label__True_168_impl;
                  USE(label__True_168);
                  Label label__False_169_impl(this);
                  Label* label__False_169 = &label__False_169_impl;
                  USE(label__False_169);
                  Label label_if_done_label_525_665_impl(this, {loadfn_183, storefn_184});
                  Label* label_if_done_label_525_665 = &label_if_done_label_525_665_impl;
                  USE(label_if_done_label_525_665);
                  TNode<Int32T> t513 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(UINT8_ELEMENTS));
                  TNode<BoolT> t514 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t513));
                  USE(t514);
                  Branch(t514, label__True_168, label__False_169);
                  if (label__True_168->is_used())
                  {
                    BIND(label__True_168);
                    // ../../src/builtins/typed-array.tq:314:45
                    {
                      // ../../src/builtins/typed-array.tq:315:10
                      *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedUint8Array).code());
                      // ../../src/builtins/typed-array.tq:316:10
                      *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedUint8Array).code());
                    }
                    Goto(label_if_done_label_525_665);
                  }
                  if (label__False_169->is_used())
                  {
                    BIND(label__False_169);
                    // ../../src/builtins/typed-array.tq:317:15
                    {
                      Label label__True_170_impl(this);
                      Label* label__True_170 = &label__True_170_impl;
                      USE(label__True_170);
                      Label label__False_171_impl(this);
                      Label* label__False_171 = &label__False_171_impl;
                      USE(label__False_171);
                      Label label_if_done_label_526_666_impl(this, {loadfn_183, storefn_184});
                      Label* label_if_done_label_526_666 = &label_if_done_label_526_666_impl;
                      USE(label_if_done_label_526_666);
                      TNode<Int32T> t515 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(INT8_ELEMENTS));
                      TNode<BoolT> t516 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t515));
                      USE(t516);
                      Branch(t516, label__True_170, label__False_171);
                      if (label__True_170->is_used())
                      {
                        BIND(label__True_170);
                        // ../../src/builtins/typed-array.tq:317:51
                        {
                          // ../../src/builtins/typed-array.tq:318:10
                          *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement16ATFixedInt8Array).code());
                          // ../../src/builtins/typed-array.tq:319:10
                          *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement16ATFixedInt8Array).code());
                        }
                        Goto(label_if_done_label_526_666);
                      }
                      if (label__False_171->is_used())
                      {
                        BIND(label__False_171);
                        // ../../src/builtins/typed-array.tq:320:15
                        {
                          Label label__True_172_impl(this);
                          Label* label__True_172 = &label__True_172_impl;
                          USE(label__True_172);
                          Label label__False_173_impl(this);
                          Label* label__False_173 = &label__False_173_impl;
                          USE(label__False_173);
                          Label label_if_done_label_527_667_impl(this, {loadfn_183, storefn_184});
                          Label* label_if_done_label_527_667 = &label_if_done_label_527_667_impl;
                          USE(label_if_done_label_527_667);
                          TNode<Int32T> t517 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(UINT16_ELEMENTS));
                          TNode<BoolT> t518 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t517));
                          USE(t518);
                          Branch(t518, label__True_172, label__False_173);
                          if (label__True_172->is_used())
                          {
                            BIND(label__True_172);
                            // ../../src/builtins/typed-array.tq:320:53
                            {
                              // ../../src/builtins/typed-array.tq:321:10
                              *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint16Array).code());
                              // ../../src/builtins/typed-array.tq:322:10
                              *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint16Array).code());
                            }
                            Goto(label_if_done_label_527_667);
                          }
                          if (label__False_173->is_used())
                          {
                            BIND(label__False_173);
                            // ../../src/builtins/typed-array.tq:323:15
                            {
                              Label label__True_174_impl(this);
                              Label* label__True_174 = &label__True_174_impl;
                              USE(label__True_174);
                              Label label__False_175_impl(this);
                              Label* label__False_175 = &label__False_175_impl;
                              USE(label__False_175);
                              Label label_if_done_label_528_668_impl(this, {loadfn_183, storefn_184});
                              Label* label_if_done_label_528_668 = &label_if_done_label_528_668_impl;
                              USE(label_if_done_label_528_668);
                              TNode<Int32T> t519 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(INT16_ELEMENTS));
                              TNode<BoolT> t520 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t519));
                              USE(t520);
                              Branch(t520, label__True_174, label__False_175);
                              if (label__True_174->is_used())
                              {
                                BIND(label__True_174);
                                // ../../src/builtins/typed-array.tq:323:52
                                {
                                  // ../../src/builtins/typed-array.tq:324:10
                                  *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement17ATFixedInt16Array).code());
                                  // ../../src/builtins/typed-array.tq:325:10
                                  *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement17ATFixedInt16Array).code());
                                }
                                Goto(label_if_done_label_528_668);
                              }
                              if (label__False_175->is_used())
                              {
                                BIND(label__False_175);
                                // ../../src/builtins/typed-array.tq:326:15
                                {
                                  Label label__True_176_impl(this);
                                  Label* label__True_176 = &label__True_176_impl;
                                  USE(label__True_176);
                                  Label label__False_177_impl(this);
                                  Label* label__False_177 = &label__False_177_impl;
                                  USE(label__False_177);
                                  Label label_if_done_label_529_669_impl(this, {loadfn_183, storefn_184});
                                  Label* label_if_done_label_529_669 = &label_if_done_label_529_669_impl;
                                  USE(label_if_done_label_529_669);
                                  TNode<Int32T> t521 = UncheckedCast<Int32T>(from_constexpr14ATElementsKind(UINT32_ELEMENTS));
                                  TNode<BoolT> t522 = UncheckedCast<BoolT>(ElementsKindEqual((*elements_kind_185).value(), t521));
                                  USE(t522);
                                  Branch(t522, label__True_176, label__False_177);
                                  if (label__True_176->is_used())
                                  {
                                    BIND(label__True_176);
                                    // ../../src/builtins/typed-array.tq:326:53
                                    {
                                      // ../../src/builtins/typed-array.tq:327:10
                                      *loadfn_183 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kLoadFixedElement18ATFixedUint32Array).code());
                                      // ../../src/builtins/typed-array.tq:328:10
                                      *storefn_184 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kStoreFixedElement18ATFixedUint32Array).code());
                                    }
                                    Goto(label_if_done_label_529_669);
                                  }
                                  if (label__False_177->is_used())
                                  {
                                    BIND(label__False_177);
                                    // ../../src/builtins/typed-array.tq:329:15
                                    {
                                      // ../../src/builtins/typed-array.tq:330:10
                                      Unreachable();
                                    }
                                  }
                                  BIND(label_if_done_label_529_669);
                                }
                                Goto(label_if_done_label_528_668);
                              }
                              BIND(label_if_done_label_528_668);
                            }
                            Goto(label_if_done_label_527_667);
                          }
                          BIND(label_if_done_label_527_667);
                        }
                        Goto(label_if_done_label_526_666);
                      }
                      BIND(label_if_done_label_526_666);
                    }
                    Goto(label_if_done_label_525_665);
                  }
                  BIND(label_if_done_label_525_665);
                }
              }
              Goto(label_if_done_label_518_658);
            }
            BIND(label_if_done_label_518_658);
          }
          // ../../src/builtins/typed-array.tq:334:6
          int31_t t523 = 0;
          TNode<Smi> t524 = UncheckedCast<Smi>(from_constexpr5ATSmi(t523));
          TNode<JSTypedArray> t525 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, p_context, (*array_180), t524, (*len_181), (*comparefn_182), (*loadfn_183).value(), (*storefn_184).value()));
          USE(t525);
        }
        Goto(label_try_done_516_656);
      }
      if (label_CastError_153->is_used())
      {
        BIND(label_CastError_153);
        // ../../src/builtins/typed-array.tq:336:20
        {
          // ../../src/builtins/typed-array.tq:337:6
          Unreachable();
        }
      }
      BIND(label_try_done_516_656);
    }
    // ../../src/builtins/typed-array.tq:339:4
    arguments->PopAndReturn((*array_180));
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1904 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1905 = KindForArrayType17ATFixedInt32Array();
    USE(t1905);
    TNode<Object> t1906 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1904, p_index, t1905, SMI_PARAMETERS));
    USE(t1906);
    Return(t1906);
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1907 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1908 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1907));
    USE(t1908);
    TNode<FixedTypedArrayBase> elements_432_impl;
    auto elements_432 = &elements_432_impl;
    USE(elements_432);
    *elements_432 = t1908;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1909 = KindForArrayType17ATFixedInt32Array();
    USE(t1909);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_432), p_index, p_value, t1909, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1910 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1911 = KindForArrayType19ATFixedFloat32Array();
    USE(t1911);
    TNode<Object> t1912 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1910, p_index, t1911, SMI_PARAMETERS));
    USE(t1912);
    Return(t1912);
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1913 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1914 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1913));
    USE(t1914);
    TNode<FixedTypedArrayBase> elements_433_impl;
    auto elements_433 = &elements_433_impl;
    USE(elements_433);
    *elements_433 = t1914;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1915 = KindForArrayType19ATFixedFloat32Array();
    USE(t1915);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_433), p_index, p_value, t1915, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1916 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1917 = KindForArrayType19ATFixedFloat64Array();
    USE(t1917);
    TNode<Object> t1918 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1916, p_index, t1917, SMI_PARAMETERS));
    USE(t1918);
    Return(t1918);
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1919 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1920 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1919));
    USE(t1920);
    TNode<FixedTypedArrayBase> elements_434_impl;
    auto elements_434 = &elements_434_impl;
    USE(elements_434);
    *elements_434 = t1920;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1921 = KindForArrayType19ATFixedFloat64Array();
    USE(t1921);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_434), p_index, p_value, t1921, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement24ATFixedUint8ClampedArray, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1922 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1923 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(t1923);
    TNode<Object> t1924 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1922, p_index, t1923, SMI_PARAMETERS));
    USE(t1924);
    Return(t1924);
  }
}

TF_BUILTIN(StoreFixedElement24ATFixedUint8ClampedArray, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1925 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1926 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1925));
    USE(t1926);
    TNode<FixedTypedArrayBase> elements_435_impl;
    auto elements_435 = &elements_435_impl;
    USE(elements_435);
    *elements_435 = t1926;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1927 = KindForArrayType24ATFixedUint8ClampedArray();
    USE(t1927);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_435), p_index, p_value, t1927, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement21ATFixedBigUint64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1928 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1929 = KindForArrayType21ATFixedBigUint64Array();
    USE(t1929);
    TNode<Object> t1930 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1928, p_index, t1929, SMI_PARAMETERS));
    USE(t1930);
    Return(t1930);
  }
}

TF_BUILTIN(StoreFixedElement21ATFixedBigUint64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1931 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1932 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1931));
    USE(t1932);
    TNode<FixedTypedArrayBase> elements_436_impl;
    auto elements_436 = &elements_436_impl;
    USE(elements_436);
    *elements_436 = t1932;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1933 = KindForArrayType21ATFixedBigUint64Array();
    USE(t1933);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_436), p_index, p_value, t1933, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement20ATFixedBigInt64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1934 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1935 = KindForArrayType20ATFixedBigInt64Array();
    USE(t1935);
    TNode<Object> t1936 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1934, p_index, t1935, SMI_PARAMETERS));
    USE(t1936);
    Return(t1936);
  }
}

TF_BUILTIN(StoreFixedElement20ATFixedBigInt64Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1937 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1938 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1937));
    USE(t1938);
    TNode<FixedTypedArrayBase> elements_437_impl;
    auto elements_437 = &elements_437_impl;
    USE(elements_437);
    *elements_437 = t1938;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1939 = KindForArrayType20ATFixedBigInt64Array();
    USE(t1939);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_437), p_index, p_value, t1939, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedUint8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1940 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1941 = KindForArrayType17ATFixedUint8Array();
    USE(t1941);
    TNode<Object> t1942 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1940, p_index, t1941, SMI_PARAMETERS));
    USE(t1942);
    Return(t1942);
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedUint8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1943 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1944 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1943));
    USE(t1944);
    TNode<FixedTypedArrayBase> elements_438_impl;
    auto elements_438 = &elements_438_impl;
    USE(elements_438);
    *elements_438 = t1944;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1945 = KindForArrayType17ATFixedUint8Array();
    USE(t1945);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_438), p_index, p_value, t1945, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement16ATFixedInt8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1946 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1947 = KindForArrayType16ATFixedInt8Array();
    USE(t1947);
    TNode<Object> t1948 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1946, p_index, t1947, SMI_PARAMETERS));
    USE(t1948);
    Return(t1948);
  }
}

TF_BUILTIN(StoreFixedElement16ATFixedInt8Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1949 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1950 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1949));
    USE(t1950);
    TNode<FixedTypedArrayBase> elements_439_impl;
    auto elements_439 = &elements_439_impl;
    USE(elements_439);
    *elements_439 = t1950;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1951 = KindForArrayType16ATFixedInt8Array();
    USE(t1951);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_439), p_index, p_value, t1951, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1952 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1953 = KindForArrayType18ATFixedUint16Array();
    USE(t1953);
    TNode<Object> t1954 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1952, p_index, t1953, SMI_PARAMETERS));
    USE(t1954);
    Return(t1954);
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1955 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1956 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1955));
    USE(t1956);
    TNode<FixedTypedArrayBase> elements_440_impl;
    auto elements_440 = &elements_440_impl;
    USE(elements_440);
    *elements_440 = t1956;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1957 = KindForArrayType18ATFixedUint16Array();
    USE(t1957);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_440), p_index, p_value, t1957, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1958 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1959 = KindForArrayType17ATFixedInt16Array();
    USE(t1959);
    TNode<Object> t1960 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1958, p_index, t1959, SMI_PARAMETERS));
    USE(t1960);
    Return(t1960);
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt16Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1961 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1962 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1961));
    USE(t1962);
    TNode<FixedTypedArrayBase> elements_441_impl;
    auto elements_441 = &elements_441_impl;
    USE(elements_441);
    *elements_441 = t1962;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1963 = KindForArrayType17ATFixedInt16Array();
    USE(t1963);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_441), p_index, p_value, t1963, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  // ../../src/builtins/typed-array.tq:55:65
  {
    // ../../src/builtins/typed-array.tq:56:4
    TNode<RawPtrT> t1964 = UncheckedCast<RawPtrT>(LoadDataPtr(p_array));
    ElementsKind t1965 = KindForArrayType18ATFixedUint32Array();
    USE(t1965);
    TNode<Object> t1966 = UncheckedCast<Object>(LoadFixedTypedArrayElementAsTagged(t1964, p_index, t1965, SMI_PARAMETERS));
    USE(t1966);
    Return(t1966);
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint32Array, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_index = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(p_index);
  TNode<Object> p_value = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(p_value);
  // ../../src/builtins/typed-array.tq:62:29
  {
    // ../../src/builtins/typed-array.tq:63:4
    TNode<FixedArrayBase> t1967 = UncheckedCast<FixedArrayBase>(LoadElements(p_array));
    TNode<FixedTypedArrayBase> t1968 = UncheckedCast<FixedTypedArrayBase>(unsafe_cast21ATFixedTypedArrayBase(t1967));
    USE(t1968);
    TNode<FixedTypedArrayBase> elements_442_impl;
    auto elements_442 = &elements_442_impl;
    USE(elements_442);
    *elements_442 = t1968;
    // ../../src/builtins/typed-array.tq:65:4
    ElementsKind t1969 = KindForArrayType18ATFixedUint32Array();
    USE(t1969);
    StoreFixedTypedArrayElementFromTagged(p_context, (*elements_442), p_index, p_value, t1969, SMI_PARAMETERS);
    // ../../src/builtins/typed-array.tq:67:4
    Return(Undefined());
  }
}

}  // namepsace internal
}  // namespace v8

