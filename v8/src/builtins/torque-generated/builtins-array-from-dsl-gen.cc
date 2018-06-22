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

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArraySplice(TNode<Context> p_context, CodeStubArguments* p_args, TNode<Object> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, Label* label_Bailout_7) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Object, _return7_impl);
  auto _return7 = &_return7_impl;
  USE(_return7);
  *_return7 = UncheckedCast<Object>(return_default);
  Label label_macro_end_199_impl(this, {_return7});
  Label* label_macro_end_199 = &label_macro_end_199_impl;
  USE(label_macro_end_199);
  {
    TNode<Smi> t10 = UncheckedCast<Smi>(TaggedToSmi(p_originalLengthNumber, label_Bailout_7));
    TVARIABLE(Smi, originalLength8_impl);
    auto originalLength8 = &originalLength8_impl;
    USE(originalLength8);
    *originalLength8 = t10;
    TNode<Smi> t11 = UncheckedCast<Smi>(TaggedToSmi(p_actualStartNumber, label_Bailout_7));
    TVARIABLE(Smi, actualStart9_impl);
    auto actualStart9 = &actualStart9_impl;
    USE(actualStart9);
    *actualStart9 = t11;
    TNode<Smi> t12 = UncheckedCast<Smi>(TaggedToSmi(p_actualDeleteCountNumber, label_Bailout_7));
    TVARIABLE(Smi, actualDeleteCount10_impl);
    auto actualDeleteCount10 = &actualDeleteCount10_impl;
    USE(actualDeleteCount10);
    *actualDeleteCount10 = t12;
    TNode<Smi> t13 = UncheckedCast<Smi>(SmiSub(p_insertCount, actualDeleteCount10->value()));
    TVARIABLE(Smi, lengthDelta11_impl);
    auto lengthDelta11 = &lengthDelta11_impl;
    USE(lengthDelta11);
    *lengthDelta11 = t13;
    TNode<Smi> t14 = UncheckedCast<Smi>(SmiAdd(originalLength8->value(), lengthDelta11->value()));
    TVARIABLE(Smi, newLength12_impl);
    auto newLength12 = &newLength12_impl;
    USE(newLength12);
    *newLength12 = t14;
    TNode<JSArray> t15 = UncheckedCast<JSArray>(TaggedToJSArray(p_o, label_Bailout_7));
    TVARIABLE(JSArray, a13_impl);
    auto a13 = &a13_impl;
    USE(a13);
    *a13 = t15;
    TNode<Map> t16 = UncheckedCast<Map>(LoadMap(a13->value()));
    TVARIABLE(Map, map14_impl);
    auto map14 = &map14_impl;
    USE(map14);
    *map14 = t16;
    {
      Label label__True_8_impl(this);
      Label* label__True_8 = &label__True_8_impl;
      USE(label__True_8);
      Label label__False_9_impl(this, {});
      Label* label__False_9 = &label__False_9_impl;
      USE(label__False_9);
      TNode<BoolT> t17 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(p_context, map14->value()));
      USE(t17);
      TNode<BoolT> t18 = UncheckedCast<BoolT>(Word32BinaryNot(t17));
      Branch(t18, label__True_8, label__False_9);
      if (label__True_8->is_used())
      {
        BIND(label__True_8);
        Goto(label_Bailout_7);
      }
      BIND(label__False_9);
    }
    {
      Label label__True_10_impl(this);
      Label* label__True_10 = &label__True_10_impl;
      USE(label__True_10);
      Label label__False_11_impl(this, {});
      Label* label__False_11 = &label__False_11_impl;
      USE(label__False_11);
      TNode<BoolT> t19 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
      USE(t19);
      Branch(t19, label__True_10, label__False_11);
      if (label__True_10->is_used())
      {
        BIND(label__True_10);
        Goto(label_Bailout_7);
      }
      BIND(label__False_11);
    }
    {
      Label label__True_12_impl(this);
      Label* label__True_12 = &label__True_12_impl;
      USE(label__True_12);
      Label label__False_13_impl(this, {});
      Label* label__False_13 = &label__False_13_impl;
      USE(label__False_13);
      TNode<BoolT> t20 = UncheckedCast<BoolT>(IsArraySpeciesProtectorCellInvalid());
      USE(t20);
      Branch(t20, label__True_12, label__False_13);
      if (label__True_12->is_used())
      {
        BIND(label__True_12);
        Goto(label_Bailout_7);
      }
      BIND(label__False_13);
    }
    TNode<Int32T> t21 = UncheckedCast<Int32T>(EnsureArrayPushable(map14->value(), label_Bailout_7));
    USE(t21);
    TVARIABLE(Int32T, elementsKind15_impl);
    auto elementsKind15 = &elementsKind15_impl;
    USE(elementsKind15);
    *elementsKind15 = t21;
    {
      Label label__True_14_impl(this);
      Label* label__True_14 = &label__True_14_impl;
      USE(label__True_14);
      Label label__False_15_impl(this, {});
      Label* label__False_15 = &label__False_15_impl;
      USE(label__False_15);
      TNode<BoolT> t22 = UncheckedCast<BoolT>(IsFastElementsKind(elementsKind15->value()));
      USE(t22);
      TNode<BoolT> t23 = UncheckedCast<BoolT>(Word32BinaryNot(t22));
      Branch(t23, label__True_14, label__False_15);
      if (label__True_14->is_used())
      {
        BIND(label__True_14);
        Goto(label_Bailout_7);
      }
      BIND(label__False_15);
    }
    {
      Label label__True_16_impl(this);
      Label* label__True_16 = &label__True_16_impl;
      USE(label__True_16);
      Label label__False_17_impl(this, {});
      Label* label__False_17 = &label__False_17_impl;
      USE(label__False_17);
      TNode<BoolT> t24 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind(elementsKind15->value()));
      USE(t24);
      TNode<BoolT> t25 = UncheckedCast<BoolT>(Word32BinaryNot(t24));
      Branch(t25, label__True_16, label__False_17);
      if (label__True_16->is_used())
      {
        BIND(label__True_16);
        Goto(label_Bailout_7);
      }
      BIND(label__False_17);
    }
    {
      Label label__True_18_impl(this);
      Label* label__True_18 = &label__True_18_impl;
      USE(label__True_18);
      Label label__False_19_impl(this, {});
      Label* label__False_19 = &label__False_19_impl;
      USE(label__False_19);
      TNode<BoolT> t26 = UncheckedCast<BoolT>(IsFastSmiElementsKind(elementsKind15->value()));
      USE(t26);
      Branch(t26, label__True_18, label__False_19);
      if (label__True_18->is_used())
      {
        BIND(label__True_18);
        {
          int32_t t27 = 2;
          TNode<IntPtrT> t28 = UncheckedCast<IntPtrT>(GetArgumentsLength(p_args));
          Label label_body_151_200_impl(this);
          Label* label_body_151_200 = &label_body_151_200_impl;
          USE(label_body_151_200);
          Label label_increment_152_201_impl(this);
          Label* label_increment_152_201 = &label_increment_152_201_impl;
          USE(label_increment_152_201);
          Label label_exit_153_202_impl(this);
          Label* label_exit_153_202 = &label_exit_153_202_impl;
          USE(label_exit_153_202);
          TVARIABLE(IntPtrT, _for_index_t29154_impl);
          auto _for_index_t29154 = &_for_index_t29154_impl;
          USE(_for_index_t29154);
          TNode<IntPtrT> t30 = UncheckedCast<IntPtrT>(IntPtrConstant(t27));
          *_for_index_t29154 = t30;
          Label label_header_155_203_impl(this, {_for_index_t29154});
          Label* label_header_155_203 = &label_header_155_203_impl;
          USE(label_header_155_203);
          Goto(label_header_155_203);
          BIND(label_header_155_203);
          TNode<BoolT> t31 = UncheckedCast<BoolT>(IntPtrLessThan(_for_index_t29154->value(), t28));
          Branch(t31, label_body_151_200, label_exit_153_202);
          BIND(label_body_151_200);
          TNode<Object> t32 = UncheckedCast<Object>(GetArgumentValue(p_args, _for_index_t29154->value()));
          TVARIABLE(Object, e16_impl);
          auto e16 = &e16_impl;
          USE(e16);
          *e16 = t32;
          {
            {
              Label label__True_20_impl(this);
              Label* label__True_20 = &label__True_20_impl;
              USE(label__True_20);
              Label label__False_21_impl(this, {});
              Label* label__False_21 = &label__False_21_impl;
              USE(label__False_21);
              TNode<BoolT> t33 = UncheckedCast<BoolT>(TaggedIsNotSmi(e16->value()));
              USE(t33);
              Branch(t33, label__True_20, label__False_21);
              if (label__True_20->is_used())
              {
                BIND(label__True_20);
                Goto(label_Bailout_7);
              }
              BIND(label__False_21);
            }
          }
          Goto(label_increment_152_201);
          BIND(label_increment_152_201);
          TNode<IntPtrT> t34 = UncheckedCast<IntPtrT>(IntPtrConstant(1));
          TNode<IntPtrT> t35 = UncheckedCast<IntPtrT>(IntPtrAdd(_for_index_t29154->value(), t34));
          *_for_index_t29154 = t35;
          Goto(label_header_155_203);
          BIND(label_exit_153_202);
        }
        Goto(label__False_19);
      }
      BIND(label__False_19);
    }
    TNode<Number> t36 = UncheckedCast<Number>(LoadJSArrayLength(a13->value()));
    TNode<Smi> t37 = UncheckedCast<Smi>(TaggedToSmi(t36, label_Bailout_7));
    TVARIABLE(Smi, length17_impl);
    auto length17 = &length17_impl;
    USE(length17);
    *length17 = t37;
    {
      Label label__True_22_impl(this);
      Label* label__True_22 = &label__True_22_impl;
      USE(label__True_22);
      Label label__False_23_impl(this, {});
      Label* label__False_23 = &label__False_23_impl;
      USE(label__False_23);
      TNode<BoolT> t38 = UncheckedCast<BoolT>(SmiNotEqual(originalLength8->value(), length17->value()));
      Branch(t38, label__True_22, label__False_23);
      if (label__True_22->is_used())
      {
        BIND(label__True_22);
        Goto(label_Bailout_7);
      }
      BIND(label__False_23);
    }
    TNode<JSArray> t39 = UncheckedCast<JSArray>(CallBuiltin(Builtins::kExtractFastJSArray, p_context, a13->value(), actualStart9->value(), actualDeleteCount10->value()));
    USE(t39);
    TVARIABLE(JSArray, deletedResult18_impl);
    auto deletedResult18 = &deletedResult18_impl;
    USE(deletedResult18);
    *deletedResult18 = t39;
    {
      Label label__True_24_impl(this);
      Label* label__True_24 = &label__True_24_impl;
      USE(label__True_24);
      Label label__False_25_impl(this, {_return7});
      Label* label__False_25 = &label__False_25_impl;
      USE(label__False_25);
      int32_t t40 = 0;
      TNode<Smi> t41 = UncheckedCast<Smi>(SmiConstant(t40));
      TNode<BoolT> t42 = UncheckedCast<BoolT>(SmiEqual(newLength12->value(), t41));
      Branch(t42, label__True_24, label__False_25);
      if (label__True_24->is_used())
      {
        BIND(label__True_24);
        {
          StoreElements(a13->value(), UncheckedCast<FixedArrayBase>(LoadRoot(Heap::kEmptyFixedArrayRootIndex)));
          int32_t t43 = 0;
          TNode<Smi> t44 = UncheckedCast<Smi>(SmiConstant(t43));
          StoreJSArrayLength(a13->value(), t44);
          *_return7 = deletedResult18->value();
          Goto(label_macro_end_199);
        }
      }
      BIND(label__False_25);
    }
    TNode<FixedArrayBase> t45 = UncheckedCast<FixedArrayBase>(LoadElements(a13->value()));
    TNode<FixedArray> t46 = UncheckedCast<FixedArray>(ConvertFixedArrayBaseToFixedArray(t45, label_Bailout_7));
    TVARIABLE(FixedArray, elements19_impl);
    auto elements19 = &elements19_impl;
    USE(elements19);
    *elements19 = t46;
    TNode<Map> t47 = UncheckedCast<Map>(LoadMap(elements19->value()));
    TVARIABLE(Map, elementsMap20_impl);
    auto elementsMap20 = &elementsMap20_impl;
    USE(elementsMap20);
    *elementsMap20 = t47;
    TVARIABLE(FixedArray, newElements21_impl);
    auto newElements21 = &newElements21_impl;
    USE(newElements21);
    *newElements21 = elements19->value();
    {
      Label label__True_26_impl(this);
      Label* label__True_26 = &label__True_26_impl;
      USE(label__True_26);
      Label label__False_27_impl(this, {newElements21});
      Label* label__False_27 = &label__False_27_impl;
      USE(label__False_27);
      Label label__False_28_impl(this);
      Label* label__False_28 = &label__False_28_impl;
      USE(label__False_28);
      TNode<BoolT> t48 = UncheckedCast<BoolT>(WordEqual(elementsMap20->value(), LoadRoot(Heap::kFixedCOWArrayMapRootIndex)));
      GotoIf(t48, label__True_26);
      int32_t t49 = 0;
      TNode<Smi> t50 = UncheckedCast<Smi>(SmiConstant(t49));
      TNode<BoolT> t51 = UncheckedCast<BoolT>(SmiGreaterThan(lengthDelta11->value(), t50));
      Branch(t51, label__True_26, label__False_27);
      if (label__True_26->is_used())
      {
        BIND(label__True_26);
        {
          int32_t t52 = 0;
          TNode<Smi> t53 = UncheckedCast<Smi>(SmiConstant(t52));
          TNode<FixedArray> t54 = UncheckedCast<FixedArray>(ExtractFixedArray(elements19->value(), t53, actualStart9->value(), newLength12->value(), ExtractFixedArrayFlag::kAllFixedArrays));
          USE(t54);
          *newElements21 = t54;
          StoreMap(newElements21->value(), elementsMap20->value());
          StoreElements(a13->value(), newElements21->value());
        }
        Goto(label__False_27);
      }
      BIND(label__False_27);
    }
    TVARIABLE(Smi, k22_impl);
    auto k22 = &k22_impl;
    USE(k22);
    *k22 = actualStart9->value();
    {
      Label label__True_29_impl(this);
      Label* label__True_29 = &label__True_29_impl;
      USE(label__True_29);
      Label label__False_30_impl(this, {k22});
      Label* label__False_30 = &label__False_30_impl;
      USE(label__False_30);
      int32_t t55 = 0;
      TNode<Smi> t56 = UncheckedCast<Smi>(SmiConstant(t55));
      TNode<BoolT> t57 = UncheckedCast<BoolT>(SmiGreaterThan(p_insertCount, t56));
      Branch(t57, label__True_29, label__False_30);
      if (label__True_29->is_used())
      {
        BIND(label__True_29);
        {
          int32_t t58 = 2;
          TNode<IntPtrT> t59 = UncheckedCast<IntPtrT>(GetArgumentsLength(p_args));
          Label label_body_156_204_impl(this);
          Label* label_body_156_204 = &label_body_156_204_impl;
          USE(label_body_156_204);
          Label label_increment_157_205_impl(this);
          Label* label_increment_157_205 = &label_increment_157_205_impl;
          USE(label_increment_157_205);
          Label label_exit_158_206_impl(this);
          Label* label_exit_158_206 = &label_exit_158_206_impl;
          USE(label_exit_158_206);
          TVARIABLE(IntPtrT, _for_index_t60159_impl);
          auto _for_index_t60159 = &_for_index_t60159_impl;
          USE(_for_index_t60159);
          TNode<IntPtrT> t61 = UncheckedCast<IntPtrT>(IntPtrConstant(t58));
          *_for_index_t60159 = t61;
          Label label_header_160_207_impl(this, {_for_index_t60159, k22});
          Label* label_header_160_207 = &label_header_160_207_impl;
          USE(label_header_160_207);
          Goto(label_header_160_207);
          BIND(label_header_160_207);
          TNode<BoolT> t62 = UncheckedCast<BoolT>(IntPtrLessThan(_for_index_t60159->value(), t59));
          Branch(t62, label_body_156_204, label_exit_158_206);
          BIND(label_body_156_204);
          TNode<Object> t63 = UncheckedCast<Object>(GetArgumentValue(p_args, _for_index_t60159->value()));
          TVARIABLE(Object, e23_impl);
          auto e23 = &e23_impl;
          USE(e23);
          *e23 = t63;
          {
            TNode<Smi> t64 = k22->value();
            USE(t64);
            TNode<Smi> t65 = UncheckedCast<Smi>(SmiConstant(1));
            TNode<Smi> t66 = UncheckedCast<Smi>(SmiAdd(k22->value(), t65));
            *k22 = t66;
            StoreFixedArrayElementSmi(newElements21->value(), t64, e23->value());
          }
          Goto(label_increment_157_205);
          BIND(label_increment_157_205);
          TNode<IntPtrT> t67 = UncheckedCast<IntPtrT>(IntPtrConstant(1));
          TNode<IntPtrT> t68 = UncheckedCast<IntPtrT>(IntPtrAdd(_for_index_t60159->value(), t67));
          *_for_index_t60159 = t68;
          Goto(label_header_160_207);
          BIND(label_exit_158_206);
        }
        Goto(label__False_30);
      }
      BIND(label__False_30);
    }
    TNode<Smi> t69 = UncheckedCast<Smi>(SmiSub(length17->value(), actualStart9->value()));
    TNode<Smi> t70 = UncheckedCast<Smi>(SmiSub(t69, actualDeleteCount10->value()));
    TVARIABLE(Smi, count24_impl);
    auto count24 = &count24_impl;
    USE(count24);
    *count24 = t70;
    {
      Label label__True_31_impl(this);
      Label* label__True_31 = &label__True_31_impl;
      USE(label__True_31);
      Label label__False_32_impl(this);
      Label* label__False_32 = &label__False_32_impl;
      USE(label__False_32);
      Label label_header_161_208_impl(this, {k22, count24});
      Label* label_header_161_208 = &label_header_161_208_impl;
      USE(label_header_161_208);
      Goto(label_header_161_208);
      BIND(label_header_161_208);
      int32_t t71 = 0;
      TNode<Smi> t72 = UncheckedCast<Smi>(SmiConstant(t71));
      TNode<BoolT> t73 = UncheckedCast<BoolT>(SmiGreaterThan(count24->value(), t72));
      Branch(t73, label__True_31, label__False_32);
      if (label__True_31->is_used())
      {
        BIND(label__True_31);
        {
          TNode<Smi> t74 = UncheckedCast<Smi>(SmiSub(k22->value(), lengthDelta11->value()));
          TNode<Object> t75 = UncheckedCast<Object>(LoadFixedArrayElement(elements19->value(), t74));
          TVARIABLE(Object, e25_impl);
          auto e25 = &e25_impl;
          USE(e25);
          *e25 = t75;
          TNode<Smi> t76 = k22->value();
          USE(t76);
          TNode<Smi> t77 = UncheckedCast<Smi>(SmiConstant(1));
          TNode<Smi> t78 = UncheckedCast<Smi>(SmiAdd(k22->value(), t77));
          *k22 = t78;
          StoreFixedArrayElementSmi(newElements21->value(), t76, e25->value());
          TNode<Smi> t79 = count24->value();
          USE(t79);
          TNode<Smi> t80 = UncheckedCast<Smi>(SmiConstant(1));
          TNode<Smi> t81 = UncheckedCast<Smi>(SmiSub(count24->value(), t80));
          *count24 = t81;
        }
        Goto(label_header_161_208);
      }
      BIND(label__False_32);
    }
    {
      Label label__True_33_impl(this);
      Label* label__True_33 = &label__True_33_impl;
      USE(label__True_33);
      Label label__False_34_impl(this, {k22});
      Label* label__False_34 = &label__False_34_impl;
      USE(label__False_34);
      TNode<BoolT> t82 = UncheckedCast<BoolT>(WordEqual(elements19->value(), newElements21->value()));
      Branch(t82, label__True_33, label__False_34);
      if (label__True_33->is_used())
      {
        BIND(label__True_33);
        {
          TNode<Smi> t83 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(elements19->value()));
          TVARIABLE(Smi, limit26_impl);
          auto limit26 = &limit26_impl;
          USE(limit26);
          *limit26 = t83;
          {
            Label label__True_35_impl(this);
            Label* label__True_35 = &label__True_35_impl;
            USE(label__True_35);
            Label label__False_36_impl(this);
            Label* label__False_36 = &label__False_36_impl;
            USE(label__False_36);
            Label label_header_162_209_impl(this, {k22});
            Label* label_header_162_209 = &label_header_162_209_impl;
            USE(label_header_162_209);
            Goto(label_header_162_209);
            BIND(label_header_162_209);
            TNode<BoolT> t84 = UncheckedCast<BoolT>(SmiLessThan(k22->value(), limit26->value()));
            Branch(t84, label__True_35, label__False_36);
            if (label__True_35->is_used())
            {
              BIND(label__True_35);
              {
                TNode<Smi> t85 = k22->value();
                USE(t85);
                TNode<Smi> t86 = UncheckedCast<Smi>(SmiConstant(1));
                TNode<Smi> t87 = UncheckedCast<Smi>(SmiAdd(k22->value(), t86));
                *k22 = t87;
                StoreFixedArrayElementSmi(newElements21->value(), t85, TheHoleConstant());
              }
              Goto(label_header_162_209);
            }
            BIND(label__False_36);
          }
        }
        Goto(label__False_34);
      }
      BIND(label__False_34);
    }
    StoreJSArrayLength(a13->value(), newLength12->value());
    *_return7 = deletedResult18->value();
    Goto(label_macro_end_199);
  }
  BIND(label_macro_end_199);
  return _return7->value();
}

TF_BUILTIN(ArraySpliceTorque, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(BuiltinDescriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(BuiltinDescriptor::kArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  {
    TNode<Object> t88 = UncheckedCast<Object>(CallBuiltin(Builtins::kToObject, p_context, p_receiver));
    USE(t88);
    TVARIABLE(Object, o27_impl);
    auto o27 = &o27_impl;
    USE(o27);
    *o27 = t88;
    TNode<String> t89 = StringConstant("length");
    TNode<Object> t90 = UncheckedCast<Object>(GetProperty(p_context, o27->value(), t89));
    USE(t90);
    TNode<Number> t91 = UncheckedCast<Number>(ToLength_Inline(p_context, t90));
    USE(t91);
    TVARIABLE(Number, len28_impl);
    auto len28 = &len28_impl;
    USE(len28);
    *len28 = t91;
    int32_t t92 = 0;
    TNode<IntPtrT> t93 = UncheckedCast<IntPtrT>(IntPtrConstant(t92));
    TNode<Object> t94 = UncheckedCast<Object>(GetArgumentValue(arguments, t93));
    TVARIABLE(Object, start29_impl);
    auto start29 = &start29_impl;
    USE(start29);
    *start29 = t94;
    TNode<Number> t95 = UncheckedCast<Number>(ToInteger_Inline(p_context, start29->value()));
    USE(t95);
    TVARIABLE(Number, relativeStart30_impl);
    auto relativeStart30 = &relativeStart30_impl;
    USE(relativeStart30);
    *relativeStart30 = t95;
    auto t96 = [=]() {
      TNode<Number> t98 = UncheckedCast<Number>(NumberAdd(len28->value(), relativeStart30->value()));
      int32_t t99 = 0;
      TNode<Smi> t100 = UncheckedCast<Smi>(SmiConstant(t99));
      TNode<Number> t101 = UncheckedCast<Number>(NumberMax(t98, t100));
      return t101;
    };
    auto t97 = [=]() {
      TNode<Number> t102 = UncheckedCast<Number>(NumberMin(relativeStart30->value(), len28->value()));
      return t102;
    };
    TVARIABLE(Number, t103163_impl);
    auto t103163 = &t103163_impl;
    USE(t103163);
    {
      Label label__True_37_impl(this);
      Label* label__True_37 = &label__True_37_impl;
      USE(label__True_37);
      Label label__False_38_impl(this);
      Label* label__False_38 = &label__False_38_impl;
      USE(label__False_38);
      Label label__done_164_210_impl(this, {t103163});
      Label* label__done_164_210 = &label__done_164_210_impl;
      USE(label__done_164_210);
      int32_t t104 = 0;
      TNode<Smi> t105 = UncheckedCast<Smi>(SmiConstant(t104));
      BranchIfNumberLessThan(relativeStart30->value(), t105, label__True_37, label__False_38);
      BIND(label__True_37);
      *t103163 = t96();
      Goto(label__done_164_210);
      BIND(label__False_38);
      *t103163 = t97();
      Goto(label__done_164_210);
      BIND(label__done_164_210);
    }
    TVARIABLE(Number, actualStart31_impl);
    auto actualStart31 = &actualStart31_impl;
    USE(actualStart31);
    *actualStart31 = t103163->value();
    TVARIABLE(Smi, insertCount32_impl);
    auto insertCount32 = &insertCount32_impl;
    USE(insertCount32);
    TVARIABLE(Number, actualDeleteCount33_impl);
    auto actualDeleteCount33 = &actualDeleteCount33_impl;
    USE(actualDeleteCount33);
    {
      Label label__True_39_impl(this);
      Label* label__True_39 = &label__True_39_impl;
      USE(label__True_39);
      Label label__False_40_impl(this);
      Label* label__False_40 = &label__False_40_impl;
      USE(label__False_40);
      Label label_if_done_label_165_211_impl(this, {insertCount32, actualDeleteCount33});
      Label* label_if_done_label_165_211 = &label_if_done_label_165_211_impl;
      USE(label_if_done_label_165_211);
      TNode<IntPtrT> t106 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int32_t t107 = 0;
      TNode<IntPtrT> t108 = UncheckedCast<IntPtrT>(IntPtrConstant(t107));
      TNode<BoolT> t109 = UncheckedCast<BoolT>(WordEqual(t106, t108));
      Branch(t109, label__True_39, label__False_40);
      if (label__True_39->is_used())
      {
        BIND(label__True_39);
        {
          int32_t t110 = 0;
          TNode<Smi> t111 = UncheckedCast<Smi>(SmiConstant(t110));
          *insertCount32 = t111;
          int32_t t112 = 0;
          TNode<Smi> t113 = UncheckedCast<Smi>(SmiConstant(t112));
          *actualDeleteCount33 = t113;
        }
        Goto(label_if_done_label_165_211);
      }
      if (label__False_40->is_used())
      {
        BIND(label__False_40);
        {
          Label label__True_41_impl(this);
          Label* label__True_41 = &label__True_41_impl;
          USE(label__True_41);
          Label label__False_42_impl(this);
          Label* label__False_42 = &label__False_42_impl;
          USE(label__False_42);
          Label label_if_done_label_166_212_impl(this, {insertCount32, actualDeleteCount33});
          Label* label_if_done_label_166_212 = &label_if_done_label_166_212_impl;
          USE(label_if_done_label_166_212);
          TNode<IntPtrT> t114 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
          int32_t t115 = 1;
          TNode<IntPtrT> t116 = UncheckedCast<IntPtrT>(IntPtrConstant(t115));
          TNode<BoolT> t117 = UncheckedCast<BoolT>(WordEqual(t114, t116));
          Branch(t117, label__True_41, label__False_42);
          if (label__True_41->is_used())
          {
            BIND(label__True_41);
            {
              int32_t t118 = 0;
              TNode<Smi> t119 = UncheckedCast<Smi>(SmiConstant(t118));
              *insertCount32 = t119;
              TNode<Number> t120 = UncheckedCast<Number>(NumberSub(len28->value(), actualStart31->value()));
              *actualDeleteCount33 = t120;
            }
            Goto(label_if_done_label_166_212);
          }
          if (label__False_42->is_used())
          {
            BIND(label__False_42);
            {
              TNode<IntPtrT> t121 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
              TNode<Smi> t122 = UncheckedCast<Smi>(SmiTag(t121));
              int32_t t123 = 2;
              TNode<Smi> t124 = UncheckedCast<Smi>(SmiConstant(t123));
              TNode<Smi> t125 = UncheckedCast<Smi>(SmiSub(t122, t124));
              *insertCount32 = t125;
              int32_t t126 = 1;
              TNode<IntPtrT> t127 = UncheckedCast<IntPtrT>(IntPtrConstant(t126));
              TNode<Object> t128 = UncheckedCast<Object>(GetArgumentValue(arguments, t127));
              TVARIABLE(Object, deleteCount34_impl);
              auto deleteCount34 = &deleteCount34_impl;
              USE(deleteCount34);
              *deleteCount34 = t128;
              TNode<Number> t129 = UncheckedCast<Number>(ToInteger_Inline(p_context, deleteCount34->value()));
              USE(t129);
              TVARIABLE(Number, dc35_impl);
              auto dc35 = &dc35_impl;
              USE(dc35);
              *dc35 = t129;
              int32_t t130 = 0;
              TNode<Smi> t131 = UncheckedCast<Smi>(SmiConstant(t130));
              TNode<Number> t132 = UncheckedCast<Number>(NumberMax(dc35->value(), t131));
              TNode<Number> t133 = UncheckedCast<Number>(NumberSub(len28->value(), actualStart31->value()));
              TNode<Number> t134 = UncheckedCast<Number>(NumberMin(t132, t133));
              *actualDeleteCount33 = t134;
            }
            Goto(label_if_done_label_166_212);
          }
          BIND(label_if_done_label_166_212);
        }
        Goto(label_if_done_label_165_211);
      }
      BIND(label_if_done_label_165_211);
    }
    {
      Label label__True_43_impl(this);
      Label* label__True_43 = &label__True_43_impl;
      USE(label__True_43);
      Label label__False_44_impl(this, {});
      Label* label__False_44 = &label__False_44_impl;
      USE(label__False_44);
      TNode<Number> t135 = UncheckedCast<Number>(NumberAdd(len28->value(), insertCount32->value()));
      TNode<Number> t136 = UncheckedCast<Number>(NumberSub(t135, actualDeleteCount33->value()));
      TNode<Number> t137 = UncheckedCast<Number>(AllocateHeapNumberWithValue(kMaxSafeInteger));
      BranchIfNumberGreaterThan(t136, t137, label__True_43, label__False_44);
      if (label__True_43->is_used())
      {
        BIND(label__True_43);
        {
          ThrowRangeError(p_context, MessageTemplate::kInvalidArrayLength);
        }
      }
      BIND(label__False_44);
    }
    {
      Label label_try_done_167_213_impl(this);
      Label* label_try_done_167_213 = &label_try_done_167_213_impl;
      USE(label_try_done_167_213);
      Label label_Bailout_45_impl(this);
      Label* label_Bailout_45 = &label_Bailout_45_impl;
      USE(label_Bailout_45);
      Label label_try_begin_168_214_impl(this);
      Label* label_try_begin_168_214 = &label_try_begin_168_214_impl;
      USE(label_try_begin_168_214);
      Goto(label_try_begin_168_214);
      if (label_try_begin_168_214->is_used())
      {
        BIND(label_try_begin_168_214);
        {
          TNode<Object> t138 = UncheckedCast<Object>(FastArraySplice(p_context, arguments, o27->value(), len28->value(), actualStart31->value(), insertCount32->value(), actualDeleteCount33->value(), label_Bailout_45));
          USE(t138);
          arguments->PopAndReturn(t138);
        }
      }
      if (label_Bailout_45->is_used())
      {
        BIND(label_Bailout_45);
        {
        }
        Goto(label_try_done_167_213);
      }
      BIND(label_try_done_167_213);
    }
    TNode<Object> t139 = UncheckedCast<Object>(ArraySpeciesCreate(p_context, o27->value(), actualDeleteCount33->value()));
    USE(t139);
    TVARIABLE(Object, a36_impl);
    auto a36 = &a36_impl;
    USE(a36);
    *a36 = t139;
    int32_t t140 = 0;
    TVARIABLE(Number, k37_impl);
    auto k37 = &k37_impl;
    USE(k37);
    TNode<Smi> t141 = UncheckedCast<Smi>(SmiConstant(t140));
    *k37 = t141;
    {
      Label label__True_46_impl(this);
      Label* label__True_46 = &label__True_46_impl;
      USE(label__True_46);
      Label label__False_47_impl(this);
      Label* label__False_47 = &label__False_47_impl;
      USE(label__False_47);
      Label label_header_169_215_impl(this, {k37});
      Label* label_header_169_215 = &label_header_169_215_impl;
      USE(label_header_169_215);
      Goto(label_header_169_215);
      BIND(label_header_169_215);
      BranchIfNumberLessThan(k37->value(), actualDeleteCount33->value(), label__True_46, label__False_47);
      if (label__True_46->is_used())
      {
        BIND(label__True_46);
        {
          TNode<Number> t142 = UncheckedCast<Number>(NumberAdd(actualStart31->value(), k37->value()));
          TNode<String> t143 = UncheckedCast<String>(ToString_Inline(p_context, t142));
          USE(t143);
          TVARIABLE(String, from38_impl);
          auto from38 = &from38_impl;
          USE(from38);
          *from38 = t143;
          TNode<Oddball> t144 = UncheckedCast<Oddball>(HasPropertyObject(o27->value(), from38->value(), p_context, kHasProperty));
          USE(t144);
          TVARIABLE(Oddball, fromPresent39_impl);
          auto fromPresent39 = &fromPresent39_impl;
          USE(fromPresent39);
          *fromPresent39 = t144;
          {
            Label label__True_48_impl(this);
            Label* label__True_48 = &label__True_48_impl;
            USE(label__True_48);
            Label label__False_49_impl(this, {});
            Label* label__False_49 = &label__False_49_impl;
            USE(label__False_49);
            TNode<BoolT> t145 = UncheckedCast<BoolT>(WordEqual(fromPresent39->value(), TrueConstant()));
            Branch(t145, label__True_48, label__False_49);
            if (label__True_48->is_used())
            {
              BIND(label__True_48);
              {
                TNode<Object> t146 = UncheckedCast<Object>(GetProperty(p_context, o27->value(), from38->value()));
                USE(t146);
                TVARIABLE(Object, fromValue40_impl);
                auto fromValue40 = &fromValue40_impl;
                USE(fromValue40);
                *fromValue40 = t146;
                TNode<String> t147 = UncheckedCast<String>(ToString_Inline(p_context, k37->value()));
                USE(t147);
                CallRuntime(Runtime::kCreateDataProperty, p_context, a36->value(), t147, fromValue40->value());
              }
              Goto(label__False_49);
            }
            BIND(label__False_49);
          }
          int32_t t148 = 1;
          TNode<Smi> t149 = UncheckedCast<Smi>(SmiConstant(t148));
          TNode<Number> t150 = UncheckedCast<Number>(NumberAdd(k37->value(), t149));
          *k37 = t150;
        }
        Goto(label_header_169_215);
      }
      BIND(label__False_47);
    }
    TNode<String> t151 = StringConstant("length");
    TNode<Smi> t152 = UncheckedCast<Smi>(LanguageModeConstant(LanguageMode::kStrict));
    CallRuntime(Runtime::kSetProperty, p_context, a36->value(), t151, actualDeleteCount33->value(), t152);
    TVARIABLE(Number, itemCount41_impl);
    auto itemCount41 = &itemCount41_impl;
    USE(itemCount41);
    *itemCount41 = insertCount32->value();
    {
      Label label__True_50_impl(this);
      Label* label__True_50 = &label__True_50_impl;
      USE(label__True_50);
      Label label__False_51_impl(this);
      Label* label__False_51 = &label__False_51_impl;
      USE(label__False_51);
      Label label_if_done_label_170_216_impl(this, {});
      Label* label_if_done_label_170_216 = &label_if_done_label_170_216_impl;
      USE(label_if_done_label_170_216);
      BranchIfNumberLessThan(itemCount41->value(), actualDeleteCount33->value(), label__True_50, label__False_51);
      if (label__True_50->is_used())
      {
        BIND(label__True_50);
        {
          TVARIABLE(Number, k42_impl);
          auto k42 = &k42_impl;
          USE(k42);
          *k42 = actualStart31->value();
          {
            Label label__True_52_impl(this);
            Label* label__True_52 = &label__True_52_impl;
            USE(label__True_52);
            Label label__False_53_impl(this);
            Label* label__False_53 = &label__False_53_impl;
            USE(label__False_53);
            Label label_header_171_217_impl(this, {k42});
            Label* label_header_171_217 = &label_header_171_217_impl;
            USE(label_header_171_217);
            Goto(label_header_171_217);
            BIND(label_header_171_217);
            TNode<Number> t153 = UncheckedCast<Number>(NumberSub(len28->value(), actualDeleteCount33->value()));
            BranchIfNumberLessThan(k42->value(), t153, label__True_52, label__False_53);
            if (label__True_52->is_used())
            {
              BIND(label__True_52);
              {
                TNode<Number> t154 = UncheckedCast<Number>(NumberAdd(k42->value(), actualDeleteCount33->value()));
                TNode<String> t155 = UncheckedCast<String>(ToString_Inline(p_context, t154));
                USE(t155);
                TVARIABLE(String, from43_impl);
                auto from43 = &from43_impl;
                USE(from43);
                *from43 = t155;
                TNode<Number> t156 = UncheckedCast<Number>(NumberAdd(k42->value(), itemCount41->value()));
                TNode<String> t157 = UncheckedCast<String>(ToString_Inline(p_context, t156));
                USE(t157);
                TVARIABLE(String, to44_impl);
                auto to44 = &to44_impl;
                USE(to44);
                *to44 = t157;
                TNode<Oddball> t158 = UncheckedCast<Oddball>(HasPropertyObject(o27->value(), from43->value(), p_context, kHasProperty));
                USE(t158);
                TVARIABLE(Oddball, fromPresent45_impl);
                auto fromPresent45 = &fromPresent45_impl;
                USE(fromPresent45);
                *fromPresent45 = t158;
                {
                  Label label__True_54_impl(this);
                  Label* label__True_54 = &label__True_54_impl;
                  USE(label__True_54);
                  Label label__False_55_impl(this);
                  Label* label__False_55 = &label__False_55_impl;
                  USE(label__False_55);
                  Label label_if_done_label_172_218_impl(this, {});
                  Label* label_if_done_label_172_218 = &label_if_done_label_172_218_impl;
                  USE(label_if_done_label_172_218);
                  TNode<BoolT> t159 = UncheckedCast<BoolT>(WordEqual(fromPresent45->value(), TrueConstant()));
                  Branch(t159, label__True_54, label__False_55);
                  if (label__True_54->is_used())
                  {
                    BIND(label__True_54);
                    {
                      TNode<Object> t160 = UncheckedCast<Object>(GetProperty(p_context, o27->value(), from43->value()));
                      USE(t160);
                      TVARIABLE(Object, fromValue46_impl);
                      auto fromValue46 = &fromValue46_impl;
                      USE(fromValue46);
                      *fromValue46 = t160;
                      TNode<Smi> t161 = UncheckedCast<Smi>(LanguageModeConstant(LanguageMode::kStrict));
                      CallRuntime(Runtime::kSetProperty, p_context, o27->value(), to44->value(), fromValue46->value(), t161);
                    }
                    Goto(label_if_done_label_172_218);
                  }
                  if (label__False_55->is_used())
                  {
                    BIND(label__False_55);
                    {
                      TNode<Smi> t162 = UncheckedCast<Smi>(LanguageModeConstant(LanguageMode::kStrict));
                      CallRuntime(Runtime::kDeleteProperty, p_context, o27->value(), to44->value(), t162);
                    }
                    Goto(label_if_done_label_172_218);
                  }
                  BIND(label_if_done_label_172_218);
                }
                int32_t t163 = 1;
                TNode<Smi> t164 = UncheckedCast<Smi>(SmiConstant(t163));
                TNode<Number> t165 = UncheckedCast<Number>(NumberAdd(k42->value(), t164));
                *k42 = t165;
              }
              Goto(label_header_171_217);
            }
            BIND(label__False_53);
          }
          *k42 = len28->value();
          {
            Label label__True_56_impl(this);
            Label* label__True_56 = &label__True_56_impl;
            USE(label__True_56);
            Label label__False_57_impl(this);
            Label* label__False_57 = &label__False_57_impl;
            USE(label__False_57);
            Label label_header_173_219_impl(this, {k42});
            Label* label_header_173_219 = &label_header_173_219_impl;
            USE(label_header_173_219);
            Goto(label_header_173_219);
            BIND(label_header_173_219);
            TNode<Number> t166 = UncheckedCast<Number>(NumberSub(len28->value(), actualDeleteCount33->value()));
            TNode<Number> t167 = UncheckedCast<Number>(NumberAdd(t166, itemCount41->value()));
            BranchIfNumberGreaterThan(k42->value(), t167, label__True_56, label__False_57);
            if (label__True_56->is_used())
            {
              BIND(label__True_56);
              {
                int32_t t168 = 1;
                TNode<Smi> t169 = UncheckedCast<Smi>(SmiConstant(t168));
                TNode<Number> t170 = UncheckedCast<Number>(NumberSub(k42->value(), t169));
                TNode<String> t171 = UncheckedCast<String>(ToString_Inline(p_context, t170));
                USE(t171);
                TNode<Smi> t172 = UncheckedCast<Smi>(LanguageModeConstant(LanguageMode::kStrict));
                CallRuntime(Runtime::kDeleteProperty, p_context, o27->value(), t171, t172);
                int32_t t173 = 1;
                TNode<Smi> t174 = UncheckedCast<Smi>(SmiConstant(t173));
                TNode<Number> t175 = UncheckedCast<Number>(NumberSub(k42->value(), t174));
                *k42 = t175;
              }
              Goto(label_header_173_219);
            }
            BIND(label__False_57);
          }
        }
        Goto(label_if_done_label_170_216);
      }
      if (label__False_51->is_used())
      {
        BIND(label__False_51);
        {
          Label label__True_58_impl(this);
          Label* label__True_58 = &label__True_58_impl;
          USE(label__True_58);
          Label label__False_59_impl(this, {});
          Label* label__False_59 = &label__False_59_impl;
          USE(label__False_59);
          BranchIfNumberGreaterThan(itemCount41->value(), actualDeleteCount33->value(), label__True_58, label__False_59);
          if (label__True_58->is_used())
          {
            BIND(label__True_58);
            {
              TNode<Number> t176 = UncheckedCast<Number>(NumberSub(len28->value(), actualDeleteCount33->value()));
              TVARIABLE(Number, k47_impl);
              auto k47 = &k47_impl;
              USE(k47);
              *k47 = t176;
              {
                Label label__True_60_impl(this);
                Label* label__True_60 = &label__True_60_impl;
                USE(label__True_60);
                Label label__False_61_impl(this);
                Label* label__False_61 = &label__False_61_impl;
                USE(label__False_61);
                Label label_header_174_220_impl(this, {k47});
                Label* label_header_174_220 = &label_header_174_220_impl;
                USE(label_header_174_220);
                Goto(label_header_174_220);
                BIND(label_header_174_220);
                BranchIfNumberGreaterThan(k47->value(), actualStart31->value(), label__True_60, label__False_61);
                if (label__True_60->is_used())
                {
                  BIND(label__True_60);
                  {
                    TNode<Number> t177 = UncheckedCast<Number>(NumberAdd(k47->value(), actualDeleteCount33->value()));
                    int32_t t178 = 1;
                    TNode<Smi> t179 = UncheckedCast<Smi>(SmiConstant(t178));
                    TNode<Number> t180 = UncheckedCast<Number>(NumberSub(t177, t179));
                    TNode<String> t181 = UncheckedCast<String>(ToString_Inline(p_context, t180));
                    USE(t181);
                    TVARIABLE(String, from48_impl);
                    auto from48 = &from48_impl;
                    USE(from48);
                    *from48 = t181;
                    TNode<Number> t182 = UncheckedCast<Number>(NumberAdd(k47->value(), itemCount41->value()));
                    int32_t t183 = 1;
                    TNode<Smi> t184 = UncheckedCast<Smi>(SmiConstant(t183));
                    TNode<Number> t185 = UncheckedCast<Number>(NumberSub(t182, t184));
                    TNode<String> t186 = UncheckedCast<String>(ToString_Inline(p_context, t185));
                    USE(t186);
                    TVARIABLE(String, to49_impl);
                    auto to49 = &to49_impl;
                    USE(to49);
                    *to49 = t186;
                    TNode<Oddball> t187 = UncheckedCast<Oddball>(HasPropertyObject(o27->value(), from48->value(), p_context, kHasProperty));
                    USE(t187);
                    TVARIABLE(Oddball, fromPresent50_impl);
                    auto fromPresent50 = &fromPresent50_impl;
                    USE(fromPresent50);
                    *fromPresent50 = t187;
                    {
                      Label label__True_62_impl(this);
                      Label* label__True_62 = &label__True_62_impl;
                      USE(label__True_62);
                      Label label__False_63_impl(this);
                      Label* label__False_63 = &label__False_63_impl;
                      USE(label__False_63);
                      Label label_if_done_label_175_221_impl(this, {});
                      Label* label_if_done_label_175_221 = &label_if_done_label_175_221_impl;
                      USE(label_if_done_label_175_221);
                      TNode<BoolT> t188 = UncheckedCast<BoolT>(WordEqual(fromPresent50->value(), TrueConstant()));
                      Branch(t188, label__True_62, label__False_63);
                      if (label__True_62->is_used())
                      {
                        BIND(label__True_62);
                        {
                          TNode<Object> t189 = UncheckedCast<Object>(GetProperty(p_context, o27->value(), from48->value()));
                          USE(t189);
                          TVARIABLE(Object, fromValue51_impl);
                          auto fromValue51 = &fromValue51_impl;
                          USE(fromValue51);
                          *fromValue51 = t189;
                          TNode<Smi> t190 = UncheckedCast<Smi>(LanguageModeConstant(LanguageMode::kStrict));
                          CallRuntime(Runtime::kSetProperty, p_context, o27->value(), to49->value(), fromValue51->value(), t190);
                        }
                        Goto(label_if_done_label_175_221);
                      }
                      if (label__False_63->is_used())
                      {
                        BIND(label__False_63);
                        {
                          TNode<Smi> t191 = UncheckedCast<Smi>(LanguageModeConstant(LanguageMode::kStrict));
                          CallRuntime(Runtime::kDeleteProperty, p_context, o27->value(), to49->value(), t191);
                        }
                        Goto(label_if_done_label_175_221);
                      }
                      BIND(label_if_done_label_175_221);
                    }
                    int32_t t192 = 1;
                    TNode<Smi> t193 = UncheckedCast<Smi>(SmiConstant(t192));
                    TNode<Number> t194 = UncheckedCast<Number>(NumberSub(k47->value(), t193));
                    *k47 = t194;
                  }
                  Goto(label_header_174_220);
                }
                BIND(label__False_61);
              }
            }
            Goto(label__False_59);
          }
          BIND(label__False_59);
        }
        Goto(label_if_done_label_170_216);
      }
      BIND(label_if_done_label_170_216);
    }
    *k37 = actualStart31->value();
    {
      Label label__True_64_impl(this);
      Label* label__True_64 = &label__True_64_impl;
      USE(label__True_64);
      Label label__False_65_impl(this, {k37});
      Label* label__False_65 = &label__False_65_impl;
      USE(label__False_65);
      TNode<IntPtrT> t195 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int32_t t196 = 2;
      TNode<IntPtrT> t197 = UncheckedCast<IntPtrT>(IntPtrConstant(t196));
      TNode<BoolT> t198 = UncheckedCast<BoolT>(IntPtrGreaterThan(t195, t197));
      Branch(t198, label__True_64, label__False_65);
      if (label__True_64->is_used())
      {
        BIND(label__True_64);
        {
          int32_t t199 = 2;
          TNode<IntPtrT> t200 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
          Label label_body_176_222_impl(this);
          Label* label_body_176_222 = &label_body_176_222_impl;
          USE(label_body_176_222);
          Label label_increment_177_223_impl(this);
          Label* label_increment_177_223 = &label_increment_177_223_impl;
          USE(label_increment_177_223);
          Label label_exit_178_224_impl(this);
          Label* label_exit_178_224 = &label_exit_178_224_impl;
          USE(label_exit_178_224);
          TVARIABLE(IntPtrT, _for_index_t201179_impl);
          auto _for_index_t201179 = &_for_index_t201179_impl;
          USE(_for_index_t201179);
          TNode<IntPtrT> t202 = UncheckedCast<IntPtrT>(IntPtrConstant(t199));
          *_for_index_t201179 = t202;
          Label label_header_180_225_impl(this, {k37, _for_index_t201179});
          Label* label_header_180_225 = &label_header_180_225_impl;
          USE(label_header_180_225);
          Goto(label_header_180_225);
          BIND(label_header_180_225);
          TNode<BoolT> t203 = UncheckedCast<BoolT>(IntPtrLessThan(_for_index_t201179->value(), t200));
          Branch(t203, label_body_176_222, label_exit_178_224);
          BIND(label_body_176_222);
          TNode<Object> t204 = UncheckedCast<Object>(GetArgumentValue(arguments, _for_index_t201179->value()));
          TVARIABLE(Object, e52_impl);
          auto e52 = &e52_impl;
          USE(e52);
          *e52 = t204;
          {
            TNode<String> t205 = UncheckedCast<String>(ToString_Inline(p_context, k37->value()));
            USE(t205);
            TNode<Smi> t206 = UncheckedCast<Smi>(LanguageModeConstant(LanguageMode::kStrict));
            CallRuntime(Runtime::kSetProperty, p_context, o27->value(), t205, e52->value(), t206);
            int32_t t207 = 1;
            TNode<Smi> t208 = UncheckedCast<Smi>(SmiConstant(t207));
            TNode<Number> t209 = UncheckedCast<Number>(NumberAdd(k37->value(), t208));
            *k37 = t209;
          }
          Goto(label_increment_177_223);
          BIND(label_increment_177_223);
          TNode<IntPtrT> t210 = UncheckedCast<IntPtrT>(IntPtrConstant(1));
          TNode<IntPtrT> t211 = UncheckedCast<IntPtrT>(IntPtrAdd(_for_index_t201179->value(), t210));
          *_for_index_t201179 = t211;
          Goto(label_header_180_225);
          BIND(label_exit_178_224);
        }
        Goto(label__False_65);
      }
      BIND(label__False_65);
    }
    TNode<String> t212 = StringConstant("length");
    TNode<Number> t213 = UncheckedCast<Number>(NumberSub(len28->value(), actualDeleteCount33->value()));
    TNode<Number> t214 = UncheckedCast<Number>(NumberAdd(t213, itemCount41->value()));
    TNode<Smi> t215 = UncheckedCast<Smi>(LanguageModeConstant(LanguageMode::kStrict));
    CallRuntime(Runtime::kSetProperty, p_context, o27->value(), t212, t214, t215);
    arguments->PopAndReturn(a36->value());
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::ArrayForEachTorqueContinuation(TNode<Context> p_context, TNode<Object> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, TNode<Smi> p_initial_k) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Object, _return53_impl);
  auto _return53 = &_return53_impl;
  USE(_return53);
  *_return53 = UncheckedCast<Object>(return_default);
  Label label_macro_end_226_impl(this, {_return53});
  Label* label_macro_end_226 = &label_macro_end_226_impl;
  USE(label_macro_end_226);
  {
    TVARIABLE(Smi, k54_impl);
    auto k54 = &k54_impl;
    USE(k54);
    *k54 = p_initial_k;
    Label label__True_66_impl(this);
    Label* label__True_66 = &label__True_66_impl;
    USE(label__True_66);
    Label label__False_67_impl(this);
    Label* label__False_67 = &label__False_67_impl;
    USE(label__False_67);
    Label label_header_181_227_impl(this, {k54});
    Label* label_header_181_227 = &label_header_181_227_impl;
    USE(label_header_181_227);
    Goto(label_header_181_227);
    BIND(label_header_181_227);
    Label label_assignment_182_228_impl(this);
    Label* label_assignment_182_228 = &label_assignment_182_228_impl;
    USE(label_assignment_182_228);
    BranchIfNumberLessThan(k54->value(), p_len, label__True_66, label__False_67);
    if (label__True_66->is_used())
    {
      BIND(label__True_66);
      {
        TNode<String> t216 = UncheckedCast<String>(ToString_Inline(p_context, k54->value()));
        USE(t216);
        TVARIABLE(String, pK55_impl);
        auto pK55 = &pK55_impl;
        USE(pK55);
        *pK55 = t216;
        TNode<Oddball> t217 = UncheckedCast<Oddball>(HasPropertyObject(p_o, pK55->value(), p_context, kHasProperty));
        USE(t217);
        TVARIABLE(Oddball, kPresent56_impl);
        auto kPresent56 = &kPresent56_impl;
        USE(kPresent56);
        *kPresent56 = t217;
        {
          Label label__True_68_impl(this);
          Label* label__True_68 = &label__True_68_impl;
          USE(label__True_68);
          Label label__False_69_impl(this, {});
          Label* label__False_69 = &label__False_69_impl;
          USE(label__False_69);
          TNode<BoolT> t218 = UncheckedCast<BoolT>(WordEqual(kPresent56->value(), TrueConstant()));
          Branch(t218, label__True_68, label__False_69);
          if (label__True_68->is_used())
          {
            BIND(label__True_68);
            {
              TNode<Object> t219 = UncheckedCast<Object>(GetProperty(p_context, p_o, pK55->value()));
              USE(t219);
              TVARIABLE(Object, kValue57_impl);
              auto kValue57 = &kValue57_impl;
              USE(kValue57);
              *kValue57 = t219;
              TNode<Object> t220 = UncheckedCast<Object>(Call(p_context, p_callbackfn, p_thisArg, kValue57->value(), k54->value(), p_o));
              USE(t220);
            }
            Goto(label__False_69);
          }
          BIND(label__False_69);
        }
      }
      Goto(label_assignment_182_228);
    }
    {
      BIND(label_assignment_182_228);
      int32_t t221 = 1;
      TNode<Smi> t222 = UncheckedCast<Smi>(SmiConstant(t221));
      TNode<Smi> t223 = UncheckedCast<Smi>(SmiAdd(k54->value(), t222));
      *k54 = t223;
      Goto(label_header_181_227);
    }
    BIND(label__False_67);
    *_return53 = UndefinedConstant();
    Goto(label_macro_end_226);
  }
  BIND(label_macro_end_226);
  return _return53->value();
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
  {
    TNode<Object> t224 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, p_context, p_receiver, p_callback, p_thisArg, UndefinedConstant(), p_receiver, p_initialK, p_length, UndefinedConstant()));
    USE(t224);
    Return(t224);
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
  {
    TNode<Object> t225 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, p_context, p_receiver, p_callback, p_thisArg, UndefinedConstant(), p_receiver, p_initialK, p_length, UndefinedConstant()));
    USE(t225);
    Return(t225);
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
  {
    {
      Label label_try_done_183_229_impl(this);
      Label* label_try_done_183_229 = &label_try_done_183_229_impl;
      USE(label_try_done_183_229);
      Label label_Unexpected_70_impl(this);
      Label* label_Unexpected_70 = &label_Unexpected_70_impl;
      USE(label_Unexpected_70);
      Label label_try_begin_184_230_impl(this);
      Label* label_try_begin_184_230 = &label_try_begin_184_230_impl;
      USE(label_try_begin_184_230);
      Goto(label_try_begin_184_230);
      if (label_try_begin_184_230->is_used())
      {
        BIND(label_try_begin_184_230);
        {
          TNode<JSReceiver> t226 = UncheckedCast<JSReceiver>(TaggedToCallable(p_callback, label_Unexpected_70));
          TVARIABLE(JSReceiver, callbackfn58_impl);
          auto callbackfn58 = &callbackfn58_impl;
          USE(callbackfn58);
          *callbackfn58 = t226;
          TNode<Smi> t227 = UncheckedCast<Smi>(TaggedToSmi(p_initialK, label_Unexpected_70));
          TVARIABLE(Smi, k59_impl);
          auto k59 = &k59_impl;
          USE(k59);
          *k59 = t227;
          TNode<Smi> t228 = UncheckedCast<Smi>(TaggedToSmi(p_length, label_Unexpected_70));
          TVARIABLE(Number, number_length60_impl);
          auto number_length60 = &number_length60_impl;
          USE(number_length60);
          *number_length60 = t228;
          TNode<Object> t229 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(p_context, p_object, number_length60->value(), callbackfn58->value(), p_thisArg, k59->value()));
          USE(t229);
          Return(t229);
        }
      }
      if (label_Unexpected_70->is_used())
      {
        BIND(label_Unexpected_70);
        {
          Unreachable();
        }
      }
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArrayForEach(TNode<Context> p_context, TNode<Object> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_71, TVariable<Smi>* Bailout061) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Object, _return62_impl);
  auto _return62 = &_return62_impl;
  USE(_return62);
  *_return62 = UncheckedCast<Object>(return_default);
  Label label_macro_end_231_impl(this, {_return62});
  Label* label_macro_end_231 = &label_macro_end_231_impl;
  USE(label_macro_end_231);
  {
    int32_t t230 = 0;
    TVARIABLE(Smi, k63_impl);
    auto k63 = &k63_impl;
    USE(k63);
    TNode<Smi> t231 = UncheckedCast<Smi>(SmiConstant(t230));
    *k63 = t231;
    {
      Label label_try_done_185_232_impl(this);
      Label* label_try_done_185_232 = &label_try_done_185_232_impl;
      USE(label_try_done_185_232);
      Label label_Slow_72_impl(this);
      Label* label_Slow_72 = &label_Slow_72_impl;
      USE(label_Slow_72);
      Label label_try_begin_186_233_impl(this);
      Label* label_try_begin_186_233 = &label_try_begin_186_233_impl;
      USE(label_try_begin_186_233);
      Goto(label_try_begin_186_233);
      if (label_try_begin_186_233->is_used())
      {
        BIND(label_try_begin_186_233);
        {
          TNode<Smi> t232 = UncheckedCast<Smi>(TaggedToSmi(p_len, label_Slow_72));
          TVARIABLE(Smi, smi_len64_impl);
          auto smi_len64 = &smi_len64_impl;
          USE(smi_len64);
          *smi_len64 = t232;
          TNode<JSArray> t233 = UncheckedCast<JSArray>(TaggedToJSArray(p_o, label_Slow_72));
          TVARIABLE(JSArray, a65_impl);
          auto a65 = &a65_impl;
          USE(a65);
          *a65 = t233;
          TNode<Map> t234 = UncheckedCast<Map>(LoadMap(a65->value()));
          TVARIABLE(Map, map66_impl);
          auto map66 = &map66_impl;
          USE(map66);
          *map66 = t234;
          {
            Label label__True_73_impl(this);
            Label* label__True_73 = &label__True_73_impl;
            USE(label__True_73);
            Label label__False_74_impl(this, {});
            Label* label__False_74 = &label__False_74_impl;
            USE(label__False_74);
            TNode<BoolT> t235 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(p_context, map66->value()));
            USE(t235);
            TNode<BoolT> t236 = UncheckedCast<BoolT>(Word32BinaryNot(t235));
            Branch(t236, label__True_73, label__False_74);
            if (label__True_73->is_used())
            {
              BIND(label__True_73);
              Goto(label_Slow_72);
            }
            BIND(label__False_74);
          }
          TNode<Int32T> t237 = UncheckedCast<Int32T>(LoadMapElementsKind(map66->value()));
          TVARIABLE(Int32T, elementsKind67_impl);
          auto elementsKind67 = &elementsKind67_impl;
          USE(elementsKind67);
          *elementsKind67 = t237;
          {
            Label label__True_75_impl(this);
            Label* label__True_75 = &label__True_75_impl;
            USE(label__True_75);
            Label label__False_76_impl(this, {});
            Label* label__False_76 = &label__False_76_impl;
            USE(label__False_76);
            TNode<BoolT> t238 = UncheckedCast<BoolT>(IsFastElementsKind(elementsKind67->value()));
            USE(t238);
            TNode<BoolT> t239 = UncheckedCast<BoolT>(Word32BinaryNot(t238));
            Branch(t239, label__True_75, label__False_76);
            if (label__True_75->is_used())
            {
              BIND(label__True_75);
              Goto(label_Slow_72);
            }
            BIND(label__False_76);
          }
          {
            Label label__True_77_impl(this);
            Label* label__True_77 = &label__True_77_impl;
            USE(label__True_77);
            Label label__False_78_impl(this);
            Label* label__False_78 = &label__False_78_impl;
            USE(label__False_78);
            Label label_if_done_label_187_234_impl(this, {});
            Label* label_if_done_label_187_234 = &label_if_done_label_187_234_impl;
            USE(label_if_done_label_187_234);
            TNode<BoolT> t240 = UncheckedCast<BoolT>(IsElementsKindGreaterThan(elementsKind67->value(), HOLEY_ELEMENTS));
            USE(t240);
            Branch(t240, label__True_77, label__False_78);
            if (label__True_77->is_used())
            {
              BIND(label__True_77);
              {
                VisitAllElements18ATFixedDoubleArray(p_context, a65->value(), smi_len64->value(), p_callbackfn, p_thisArg, label_Bailout_71, Bailout061);
              }
              Goto(label_if_done_label_187_234);
            }
            if (label__False_78->is_used())
            {
              BIND(label__False_78);
              {
                VisitAllElements12ATFixedArray(p_context, a65->value(), smi_len64->value(), p_callbackfn, p_thisArg, label_Bailout_71, Bailout061);
              }
              Goto(label_if_done_label_187_234);
            }
            BIND(label_if_done_label_187_234);
          }
        }
        Goto(label_try_done_185_232);
      }
      if (label_Slow_72->is_used())
      {
        BIND(label_Slow_72);
        {
          *Bailout061 = k63->value();
          Goto(label_Bailout_71);
        }
      }
      BIND(label_try_done_185_232);
    }
    *_return62 = UndefinedConstant();
    Goto(label_macro_end_231);
  }
  BIND(label_macro_end_231);
  return _return62->value();
}

TF_BUILTIN(ArrayForEach, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(BuiltinDescriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(BuiltinDescriptor::kArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  {
    {
      Label label_try_done_188_235_impl(this);
      Label* label_try_done_188_235 = &label_try_done_188_235_impl;
      USE(label_try_done_188_235);
      Label label_TypeError_79_impl(this);
      Label* label_TypeError_79 = &label_TypeError_79_impl;
      USE(label_TypeError_79);
      Label label_NullOrUndefinedError_80_impl(this);
      Label* label_NullOrUndefinedError_80 = &label_NullOrUndefinedError_80_impl;
      USE(label_NullOrUndefinedError_80);
      Label label_try_begin_189_236_impl(this);
      Label* label_try_begin_189_236 = &label_try_begin_189_236_impl;
      USE(label_try_begin_189_236);
      Goto(label_try_begin_189_236);
      if (label_try_begin_189_236->is_used())
      {
        BIND(label_try_begin_189_236);
        {
          {
            Label label__True_81_impl(this);
            Label* label__True_81 = &label__True_81_impl;
            USE(label__True_81);
            Label label__False_82_impl(this, {});
            Label* label__False_82 = &label__False_82_impl;
            USE(label__False_82);
            TNode<BoolT> t241 = UncheckedCast<BoolT>(IsNullOrUndefined(p_receiver));
            USE(t241);
            Branch(t241, label__True_81, label__False_82);
            if (label__True_81->is_used())
            {
              BIND(label__True_81);
              {
                Goto(label_NullOrUndefinedError_80);
              }
            }
            BIND(label__False_82);
          }
          TNode<Object> t242 = UncheckedCast<Object>(CallBuiltin(Builtins::kToObject, p_context, p_receiver));
          USE(t242);
          TVARIABLE(Object, o68_impl);
          auto o68 = &o68_impl;
          USE(o68);
          *o68 = t242;
          TNode<String> t243 = StringConstant("length");
          TNode<Object> t244 = UncheckedCast<Object>(GetProperty(p_context, o68->value(), t243));
          USE(t244);
          TNode<Number> t245 = UncheckedCast<Number>(ToLength_Inline(p_context, t244));
          USE(t245);
          TVARIABLE(Number, len69_impl);
          auto len69 = &len69_impl;
          USE(len69);
          *len69 = t245;
          {
            Label label__True_83_impl(this);
            Label* label__True_83 = &label__True_83_impl;
            USE(label__True_83);
            Label label__False_84_impl(this, {});
            Label* label__False_84 = &label__False_84_impl;
            USE(label__False_84);
            TNode<IntPtrT> t246 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
            int32_t t247 = 0;
            TNode<IntPtrT> t248 = UncheckedCast<IntPtrT>(IntPtrConstant(t247));
            TNode<BoolT> t249 = UncheckedCast<BoolT>(WordEqual(t246, t248));
            Branch(t249, label__True_83, label__False_84);
            if (label__True_83->is_used())
            {
              BIND(label__True_83);
              {
                Goto(label_TypeError_79);
              }
            }
            BIND(label__False_84);
          }
          int32_t t250 = 0;
          TNode<IntPtrT> t251 = UncheckedCast<IntPtrT>(IntPtrConstant(t250));
          TNode<Object> t252 = UncheckedCast<Object>(GetArgumentValue(arguments, t251));
          TNode<JSReceiver> t253 = UncheckedCast<JSReceiver>(TaggedToCallable(t252, label_TypeError_79));
          TVARIABLE(JSReceiver, callbackfn70_impl);
          auto callbackfn70 = &callbackfn70_impl;
          USE(callbackfn70);
          *callbackfn70 = t253;
          auto t254 = [=]() {
            int32_t t256 = 1;
            TNode<IntPtrT> t257 = UncheckedCast<IntPtrT>(IntPtrConstant(t256));
            TNode<Object> t258 = UncheckedCast<Object>(GetArgumentValue(arguments, t257));
            return t258;
          };
          auto t255 = [=]() {
            return UndefinedConstant();
          };
          TVARIABLE(Object, t259190_impl);
          auto t259190 = &t259190_impl;
          USE(t259190);
          {
            Label label__True_85_impl(this);
            Label* label__True_85 = &label__True_85_impl;
            USE(label__True_85);
            Label label__False_86_impl(this);
            Label* label__False_86 = &label__False_86_impl;
            USE(label__False_86);
            Label label__done_191_237_impl(this, {t259190});
            Label* label__done_191_237 = &label__done_191_237_impl;
            USE(label__done_191_237);
            TNode<IntPtrT> t260 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
            int32_t t261 = 1;
            TNode<IntPtrT> t262 = UncheckedCast<IntPtrT>(IntPtrConstant(t261));
            TNode<BoolT> t263 = UncheckedCast<BoolT>(IntPtrGreaterThan(t260, t262));
            Branch(t263, label__True_85, label__False_86);
            BIND(label__True_85);
            *t259190 = t254();
            Goto(label__done_191_237);
            BIND(label__False_86);
            *t259190 = t255();
            Goto(label__done_191_237);
            BIND(label__done_191_237);
          }
          TVARIABLE(Object, thisArg71_impl);
          auto thisArg71 = &thisArg71_impl;
          USE(thisArg71);
          *thisArg71 = t259190->value();
          int32_t t264 = 0;
          TVARIABLE(Smi, k72_impl);
          auto k72 = &k72_impl;
          USE(k72);
          TNode<Smi> t265 = UncheckedCast<Smi>(SmiConstant(t264));
          *k72 = t265;
          {
            Label label_try_done_192_238_impl(this);
            Label* label_try_done_192_238 = &label_try_done_192_238_impl;
            USE(label_try_done_192_238);
            Label label_Bailout_87_impl(this);
            Label* label_Bailout_87 = &label_Bailout_87_impl;
            USE(label_Bailout_87);
            TVARIABLE(Smi, k_value73_impl);
            auto k_value73 = &k_value73_impl;
            USE(k_value73);
            Label label_try_begin_193_239_impl(this);
            Label* label_try_begin_193_239 = &label_try_begin_193_239_impl;
            USE(label_try_begin_193_239);
            Goto(label_try_begin_193_239);
            if (label_try_begin_193_239->is_used())
            {
              BIND(label_try_begin_193_239);
              {
                TNode<Object> t266 = UncheckedCast<Object>(FastArrayForEach(p_context, o68->value(), len69->value(), callbackfn70->value(), thisArg71->value(), label_Bailout_87, k_value73));
                USE(t266);
                arguments->PopAndReturn(t266);
              }
            }
            if (label_Bailout_87->is_used())
            {
              BIND(label_Bailout_87);
              {
                *k72 = k_value73->value();
              }
              Goto(label_try_done_192_238);
            }
            BIND(label_try_done_192_238);
          }
          TNode<Object> t267 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(p_context, o68->value(), len69->value(), callbackfn70->value(), thisArg71->value(), k72->value()));
          USE(t267);
          arguments->PopAndReturn(t267);
        }
      }
      if (label_TypeError_79->is_used())
      {
        BIND(label_TypeError_79);
        {
          int32_t t268 = 0;
          TNode<IntPtrT> t269 = UncheckedCast<IntPtrT>(IntPtrConstant(t268));
          TNode<Object> t270 = UncheckedCast<Object>(GetArgumentValue(arguments, t269));
          ThrowTypeError(p_context, MessageTemplate::kCalledNonCallable, t270);
        }
      }
      if (label_NullOrUndefinedError_80->is_used())
      {
        BIND(label_NullOrUndefinedError_80);
        {
          TNode<String> t271 = StringConstant("Array.prototype.forEach");
          ThrowTypeError(p_context, MessageTemplate::kCalledOnNullOrUndefined, t271);
        }
      }
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_168, TVariable<Smi>* Bailout0137) {
  Label label_macro_end_240_impl(this, {});
  Label* label_macro_end_240 = &label_macro_end_240_impl;
  USE(label_macro_end_240);
  {
    int32_t t272 = 0;
    TVARIABLE(Smi, k138_impl);
    auto k138 = &k138_impl;
    USE(k138);
    TNode<Smi> t273 = UncheckedCast<Smi>(SmiConstant(t272));
    *k138 = t273;
    TNode<Map> t274 = UncheckedCast<Map>(LoadMap(p_a));
    TVARIABLE(Map, map139_impl);
    auto map139 = &map139_impl;
    USE(map139);
    *map139 = t274;
    {
      Label label_try_done_194_241_impl(this);
      Label* label_try_done_194_241 = &label_try_done_194_241_impl;
      USE(label_try_done_194_241);
      Label label_Slow_169_impl(this);
      Label* label_Slow_169 = &label_Slow_169_impl;
      USE(label_Slow_169);
      Label label_try_begin_195_242_impl(this);
      Label* label_try_begin_195_242 = &label_try_begin_195_242_impl;
      USE(label_try_begin_195_242);
      Goto(label_try_begin_195_242);
      if (label_try_begin_195_242->is_used())
      {
        BIND(label_try_begin_195_242);
        {
          Label label__True_170_impl(this);
          Label* label__True_170 = &label__True_170_impl;
          USE(label__True_170);
          Label label__False_171_impl(this);
          Label* label__False_171 = &label__False_171_impl;
          USE(label__False_171);
          Label label_header_196_243_impl(this, {k138});
          Label* label_header_196_243 = &label_header_196_243_impl;
          USE(label_header_196_243);
          Goto(label_header_196_243);
          BIND(label_header_196_243);
          Label label_assignment_197_244_impl(this);
          Label* label_assignment_197_244 = &label_assignment_197_244_impl;
          USE(label_assignment_197_244);
          TNode<BoolT> t275 = UncheckedCast<BoolT>(SmiLessThan(k138->value(), p_len));
          Branch(t275, label__True_170, label__False_171);
          if (label__True_170->is_used())
          {
            BIND(label__True_170);
            {
              {
                Label label__True_172_impl(this);
                Label* label__True_172 = &label__True_172_impl;
                USE(label__True_172);
                Label label__False_173_impl(this, {});
                Label* label__False_173 = &label__False_173_impl;
                USE(label__False_173);
                TNode<Map> t276 = UncheckedCast<Map>(LoadMap(p_a));
                TNode<BoolT> t277 = UncheckedCast<BoolT>(WordNotEqual(map139->value(), t276));
                Branch(t277, label__True_172, label__False_173);
                if (label__True_172->is_used())
                {
                  BIND(label__True_172);
                  Goto(label_Slow_169);
                }
                BIND(label__False_173);
              }
              {
                Label label__True_174_impl(this);
                Label* label__True_174 = &label__True_174_impl;
                USE(label__True_174);
                Label label__False_175_impl(this, {});
                Label* label__False_175 = &label__False_175_impl;
                USE(label__False_175);
                TNode<Number> t278 = UncheckedCast<Number>(LoadJSArrayLength(p_a));
                BranchIfNumberGreaterThanOrEqual(k138->value(), t278, label__True_174, label__False_175);
                if (label__True_174->is_used())
                {
                  BIND(label__True_174);
                  Goto(label_Slow_169);
                }
                BIND(label__False_175);
              }
              {
                Label label_try_done_198_245_impl(this);
                Label* label_try_done_198_245 = &label_try_done_198_245_impl;
                USE(label_try_done_198_245);
                Label label_FoundHole_176_impl(this);
                Label* label_FoundHole_176 = &label_FoundHole_176_impl;
                USE(label_FoundHole_176);
                Label label_try_begin_199_246_impl(this);
                Label* label_try_begin_199_246 = &label_try_begin_199_246_impl;
                USE(label_try_begin_199_246);
                Goto(label_try_begin_199_246);
                if (label_try_begin_199_246->is_used())
                {
                  BIND(label_try_begin_199_246);
                  {
                    TNode<Object> t279 = UncheckedCast<Object>(LoadElementNoHole18ATFixedDoubleArray(p_a, k138->value(), label_FoundHole_176));
                    USE(t279);
                    TVARIABLE(Object, value140_impl);
                    auto value140 = &value140_impl;
                    USE(value140);
                    *value140 = t279;
                    TNode<Object> t280 = UncheckedCast<Object>(Call(p_context, p_callbackfn, p_thisArg, value140->value(), k138->value(), p_a));
                    USE(t280);
                  }
                  Goto(label_try_done_198_245);
                }
                if (label_FoundHole_176->is_used())
                {
                  BIND(label_FoundHole_176);
                  {
                    {
                      Label label__True_177_impl(this);
                      Label* label__True_177 = &label__True_177_impl;
                      USE(label__True_177);
                      Label label__False_178_impl(this, {});
                      Label* label__False_178 = &label__False_178_impl;
                      USE(label__False_178);
                      TNode<BoolT> t281 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(t281);
                      Branch(t281, label__True_177, label__False_178);
                      if (label__True_177->is_used())
                      {
                        BIND(label__True_177);
                        *Bailout0137 = k138->value();
                        Goto(label_Bailout_168);
                      }
                      BIND(label__False_178);
                    }
                  }
                  Goto(label_try_done_198_245);
                }
                BIND(label_try_done_198_245);
              }
            }
            Goto(label_assignment_197_244);
          }
          {
            BIND(label_assignment_197_244);
            int32_t t282 = 1;
            TNode<Smi> t283 = UncheckedCast<Smi>(SmiConstant(t282));
            TNode<Smi> t284 = UncheckedCast<Smi>(SmiAdd(k138->value(), t283));
            *k138 = t284;
            Goto(label_header_196_243);
          }
          BIND(label__False_171);
        }
        Goto(label_try_done_194_241);
      }
      if (label_Slow_169->is_used())
      {
        BIND(label_Slow_169);
        {
          *Bailout0137 = k138->value();
          Goto(label_Bailout_168);
        }
      }
      BIND(label_try_done_194_241);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_179, TVariable<Smi>* Bailout0141) {
  Label label_macro_end_247_impl(this, {});
  Label* label_macro_end_247 = &label_macro_end_247_impl;
  USE(label_macro_end_247);
  {
    int32_t t285 = 0;
    TVARIABLE(Smi, k142_impl);
    auto k142 = &k142_impl;
    USE(k142);
    TNode<Smi> t286 = UncheckedCast<Smi>(SmiConstant(t285));
    *k142 = t286;
    TNode<Map> t287 = UncheckedCast<Map>(LoadMap(p_a));
    TVARIABLE(Map, map143_impl);
    auto map143 = &map143_impl;
    USE(map143);
    *map143 = t287;
    {
      Label label_try_done_200_248_impl(this);
      Label* label_try_done_200_248 = &label_try_done_200_248_impl;
      USE(label_try_done_200_248);
      Label label_Slow_180_impl(this);
      Label* label_Slow_180 = &label_Slow_180_impl;
      USE(label_Slow_180);
      Label label_try_begin_201_249_impl(this);
      Label* label_try_begin_201_249 = &label_try_begin_201_249_impl;
      USE(label_try_begin_201_249);
      Goto(label_try_begin_201_249);
      if (label_try_begin_201_249->is_used())
      {
        BIND(label_try_begin_201_249);
        {
          Label label__True_181_impl(this);
          Label* label__True_181 = &label__True_181_impl;
          USE(label__True_181);
          Label label__False_182_impl(this);
          Label* label__False_182 = &label__False_182_impl;
          USE(label__False_182);
          Label label_header_202_250_impl(this, {k142});
          Label* label_header_202_250 = &label_header_202_250_impl;
          USE(label_header_202_250);
          Goto(label_header_202_250);
          BIND(label_header_202_250);
          Label label_assignment_203_251_impl(this);
          Label* label_assignment_203_251 = &label_assignment_203_251_impl;
          USE(label_assignment_203_251);
          TNode<BoolT> t288 = UncheckedCast<BoolT>(SmiLessThan(k142->value(), p_len));
          Branch(t288, label__True_181, label__False_182);
          if (label__True_181->is_used())
          {
            BIND(label__True_181);
            {
              {
                Label label__True_183_impl(this);
                Label* label__True_183 = &label__True_183_impl;
                USE(label__True_183);
                Label label__False_184_impl(this, {});
                Label* label__False_184 = &label__False_184_impl;
                USE(label__False_184);
                TNode<Map> t289 = UncheckedCast<Map>(LoadMap(p_a));
                TNode<BoolT> t290 = UncheckedCast<BoolT>(WordNotEqual(map143->value(), t289));
                Branch(t290, label__True_183, label__False_184);
                if (label__True_183->is_used())
                {
                  BIND(label__True_183);
                  Goto(label_Slow_180);
                }
                BIND(label__False_184);
              }
              {
                Label label__True_185_impl(this);
                Label* label__True_185 = &label__True_185_impl;
                USE(label__True_185);
                Label label__False_186_impl(this, {});
                Label* label__False_186 = &label__False_186_impl;
                USE(label__False_186);
                TNode<Number> t291 = UncheckedCast<Number>(LoadJSArrayLength(p_a));
                BranchIfNumberGreaterThanOrEqual(k142->value(), t291, label__True_185, label__False_186);
                if (label__True_185->is_used())
                {
                  BIND(label__True_185);
                  Goto(label_Slow_180);
                }
                BIND(label__False_186);
              }
              {
                Label label_try_done_204_252_impl(this);
                Label* label_try_done_204_252 = &label_try_done_204_252_impl;
                USE(label_try_done_204_252);
                Label label_FoundHole_187_impl(this);
                Label* label_FoundHole_187 = &label_FoundHole_187_impl;
                USE(label_FoundHole_187);
                Label label_try_begin_205_253_impl(this);
                Label* label_try_begin_205_253 = &label_try_begin_205_253_impl;
                USE(label_try_begin_205_253);
                Goto(label_try_begin_205_253);
                if (label_try_begin_205_253->is_used())
                {
                  BIND(label_try_begin_205_253);
                  {
                    TNode<Object> t292 = UncheckedCast<Object>(LoadElementNoHole12ATFixedArray(p_a, k142->value(), label_FoundHole_187));
                    USE(t292);
                    TVARIABLE(Object, value144_impl);
                    auto value144 = &value144_impl;
                    USE(value144);
                    *value144 = t292;
                    TNode<Object> t293 = UncheckedCast<Object>(Call(p_context, p_callbackfn, p_thisArg, value144->value(), k142->value(), p_a));
                    USE(t293);
                  }
                  Goto(label_try_done_204_252);
                }
                if (label_FoundHole_187->is_used())
                {
                  BIND(label_FoundHole_187);
                  {
                    {
                      Label label__True_188_impl(this);
                      Label* label__True_188 = &label__True_188_impl;
                      USE(label__True_188);
                      Label label__False_189_impl(this, {});
                      Label* label__False_189 = &label__False_189_impl;
                      USE(label__False_189);
                      TNode<BoolT> t294 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(t294);
                      Branch(t294, label__True_188, label__False_189);
                      if (label__True_188->is_used())
                      {
                        BIND(label__True_188);
                        *Bailout0141 = k142->value();
                        Goto(label_Bailout_179);
                      }
                      BIND(label__False_189);
                    }
                  }
                  Goto(label_try_done_204_252);
                }
                BIND(label_try_done_204_252);
              }
            }
            Goto(label_assignment_203_251);
          }
          {
            BIND(label_assignment_203_251);
            int32_t t295 = 1;
            TNode<Smi> t296 = UncheckedCast<Smi>(SmiConstant(t295));
            TNode<Smi> t297 = UncheckedCast<Smi>(SmiAdd(k142->value(), t296));
            *k142 = t297;
            Goto(label_header_202_250);
          }
          BIND(label__False_182);
        }
        Goto(label_try_done_200_248);
      }
      if (label_Slow_180->is_used())
      {
        BIND(label_Slow_180);
        {
          *Bailout0141 = k142->value();
          Goto(label_Bailout_179);
        }
      }
      BIND(label_try_done_200_248);
    }
  }
}

}  // namepsace internal
}  // namespace v8

