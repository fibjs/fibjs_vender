#include "src/code-stub-assembler.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-base-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole12ATFixedArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_0) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Object, _return0_impl);
  auto _return0 = &_return0_impl;
  USE(_return0);
  *_return0 = UncheckedCast<Object>(return_default);
  Label label_macro_end_190_impl(this, {_return0});
  Label* label_macro_end_190 = &label_macro_end_190_impl;
  USE(label_macro_end_190);
  {
    {
      Label label_try_done_145_191_impl(this);
      Label* label_try_done_145_191 = &label_try_done_145_191_impl;
      USE(label_try_done_145_191);
      Label label_Unexpected_1_impl(this);
      Label* label_Unexpected_1 = &label_Unexpected_1_impl;
      USE(label_Unexpected_1);
      Label label_try_begin_146_192_impl(this);
      Label* label_try_begin_146_192 = &label_try_begin_146_192_impl;
      USE(label_try_begin_146_192);
      Goto(label_try_begin_146_192);
      if (label_try_begin_146_192->is_used())
      {
        BIND(label_try_begin_146_192);
        {
          TNode<FixedArrayBase> t0 = UncheckedCast<FixedArrayBase>(LoadElements(p_a));
          TNode<FixedArray> t1 = UncheckedCast<FixedArray>(ConvertFixedArrayBaseToFixedArray(t0, label_Unexpected_1));
          TVARIABLE(FixedArray, elements1_impl);
          auto elements1 = &elements1_impl;
          USE(elements1);
          *elements1 = t1;
          TNode<Object> t2 = UncheckedCast<Object>(LoadFixedArrayElement(elements1->value(), p_index));
          TVARIABLE(Object, e2_impl);
          auto e2 = &e2_impl;
          USE(e2);
          *e2 = t2;
          {
            Label label__True_2_impl(this);
            Label* label__True_2 = &label__True_2_impl;
            USE(label__True_2);
            Label label__False_3_impl(this, {});
            Label* label__False_3 = &label__False_3_impl;
            USE(label__False_3);
            TNode<BoolT> t3 = UncheckedCast<BoolT>(WordEqual(e2->value(), TheHoleConstant()));
            Branch(t3, label__True_2, label__False_3);
            if (label__True_2->is_used())
            {
              BIND(label__True_2);
              {
                Goto(label_IfHole_0);
              }
            }
            BIND(label__False_3);
          }
          *_return0 = e2->value();
          Goto(label_macro_end_190);
        }
      }
      if (label_Unexpected_1->is_used())
      {
        BIND(label_Unexpected_1);
        {
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_190);
  return _return0->value();
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole18ATFixedDoubleArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_4) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Object, _return3_impl);
  auto _return3 = &_return3_impl;
  USE(_return3);
  *_return3 = UncheckedCast<Object>(return_default);
  Label label_macro_end_193_impl(this, {_return3});
  Label* label_macro_end_193 = &label_macro_end_193_impl;
  USE(label_macro_end_193);
  {
    {
      Label label_try_done_147_194_impl(this);
      Label* label_try_done_147_194 = &label_try_done_147_194_impl;
      USE(label_try_done_147_194);
      Label label_Unexpected_5_impl(this);
      Label* label_Unexpected_5 = &label_Unexpected_5_impl;
      USE(label_Unexpected_5);
      Label label_try_begin_148_195_impl(this);
      Label* label_try_begin_148_195 = &label_try_begin_148_195_impl;
      USE(label_try_begin_148_195);
      Goto(label_try_begin_148_195);
      if (label_try_begin_148_195->is_used())
      {
        BIND(label_try_begin_148_195);
        {
          TNode<FixedArrayBase> t4 = UncheckedCast<FixedArrayBase>(LoadElements(p_a));
          TNode<FixedDoubleArray> t5 = UncheckedCast<FixedDoubleArray>(ConvertFixedArrayBaseToFixedDoubleArray(t4, label_Unexpected_5));
          TVARIABLE(FixedDoubleArray, elements4_impl);
          auto elements4 = &elements4_impl;
          USE(elements4);
          *elements4 = t5;
          TNode<Float64T> t6 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck(elements4->value(), p_index, label_IfHole_4));
          USE(t6);
          TVARIABLE(Float64T, e5_impl);
          auto e5 = &e5_impl;
          USE(e5);
          *e5 = t6;
          TNode<HeapNumber> t7 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(e5->value()));
          USE(t7);
          *_return3 = t7;
          Goto(label_macro_end_193);
        }
      }
      if (label_Unexpected_5->is_used())
      {
        BIND(label_Unexpected_5);
        {
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_193);
  return _return3->value();
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::HasPropertyObject(TNode<Object> p_o, TNode<Object> p_p, TNode<Context> p_c, HasPropertyLookupMode p_f) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Oddball, _return6_impl);
  auto _return6 = &_return6_impl;
  USE(_return6);
  *_return6 = UncheckedCast<Oddball>(return_default);
  Label label_macro_end_196_impl(this, {_return6});
  Label* label_macro_end_196 = &label_macro_end_196_impl;
  USE(label_macro_end_196);
  {
    {
      Label label_try_done_149_197_impl(this);
      Label* label_try_done_149_197 = &label_try_done_149_197_impl;
      USE(label_try_done_149_197);
      Label label_CastError_6_impl(this);
      Label* label_CastError_6 = &label_CastError_6_impl;
      USE(label_CastError_6);
      Label label_try_begin_150_198_impl(this);
      Label* label_try_begin_150_198 = &label_try_begin_150_198_impl;
      USE(label_try_begin_150_198);
      Goto(label_try_begin_150_198);
      if (label_try_begin_150_198->is_used())
      {
        BIND(label_try_begin_150_198);
        {
          TNode<HeapObject> t8 = UncheckedCast<HeapObject>(TaggedToHeapObject(p_o, label_CastError_6));
          TNode<Oddball> t9 = UncheckedCast<Oddball>(HasProperty(t8, p_p, p_c, p_f));
          USE(t9);
          *_return6 = t9;
          Goto(label_macro_end_196);
        }
      }
      if (label_CastError_6->is_used())
      {
        BIND(label_CastError_6);
        {
          *_return6 = FalseConstant();
          Goto(label_macro_end_196);
        }
      }
    }
  }
  BIND(label_macro_end_196);
  return _return6->value();
}

}  // namepsace internal
}  // namespace v8

