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

compiler::TNode<Number> TypedArrayBuiltinsFromDSLAssembler::CallCompareWithDetachedCheck(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b, Label* label_Detached_88) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Number, _return74_impl);
  auto _return74 = &_return74_impl;
  USE(_return74);
  *_return74 = UncheckedCast<Number>(return_default);
  Label label_macro_end_254_impl(this, {_return74});
  Label* label_macro_end_254 = &label_macro_end_254_impl;
  USE(label_macro_end_254);
  {
    TNode<Object> t298 = UncheckedCast<Object>(Call(p_context, p_comparefn, UndefinedConstant(), p_a, p_b));
    USE(t298);
    TNode<Number> t299 = UncheckedCast<Number>(ToNumber_Inline(p_context, t298));
    USE(t299);
    TVARIABLE(Number, v75_impl);
    auto v75 = &v75_impl;
    USE(v75);
    *v75 = t299;
    {
      Label label__True_89_impl(this);
      Label* label__True_89 = &label__True_89_impl;
      USE(label__True_89);
      Label label__False_90_impl(this, {});
      Label* label__False_90 = &label__False_90_impl;
      USE(label__False_90);
      TNode<JSArrayBuffer> t300 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(p_array));
      TNode<BoolT> t301 = UncheckedCast<BoolT>(IsDetachedBuffer(t300));
      USE(t301);
      Branch(t301, label__True_89, label__False_90);
      if (label__True_89->is_used())
      {
        BIND(label__True_89);
        Goto(label_Detached_88);
      }
      BIND(label__False_90);
    }
    {
      Label label__True_91_impl(this);
      Label* label__True_91 = &label__True_91_impl;
      USE(label__True_91);
      Label label__False_92_impl(this, {_return74});
      Label* label__False_92 = &label__False_92_impl;
      USE(label__False_92);
      TNode<BoolT> t302 = UncheckedCast<BoolT>(NumberIsNaN(v75->value()));
      USE(t302);
      Branch(t302, label__True_91, label__False_92);
      if (label__True_91->is_used())
      {
        BIND(label__True_91);
        int32_t t303 = 0;
        TNode<Smi> t304 = UncheckedCast<Smi>(SmiConstant(t303));
        *_return74 = t304;
        Goto(label_macro_end_254);
      }
      BIND(label__False_92);
    }
    *_return74 = v75->value();
    Goto(label_macro_end_254);
  }
  BIND(label_macro_end_254);
  return _return74->value();
}

compiler::TNode<Object> TypedArrayBuiltinsFromDSLAssembler::Load(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_kind, TNode<Smi> p_index) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Object, _return76_impl);
  auto _return76 = &_return76_impl;
  USE(_return76);
  *_return76 = UncheckedCast<Object>(return_default);
  Label label_macro_end_255_impl(this, {_return76});
  Label* label_macro_end_255 = &label_macro_end_255_impl;
  USE(label_macro_end_255);
  {
    TNode<Object> t305 = UncheckedCast<Object>(CallBuiltin(Builtins::kTypedArrayLoadElementAsTagged, p_context, p_array, p_kind, p_index));
    USE(t305);
    *_return76 = t305;
    Goto(label_macro_end_255);
  }
  BIND(label_macro_end_255);
  return _return76->value();
}

void TypedArrayBuiltinsFromDSLAssembler::Store(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_kind, TNode<Smi> p_index, TNode<Object> p_value) {
  Label label_macro_end_256_impl(this, {});
  Label* label_macro_end_256 = &label_macro_end_256_impl;
  USE(label_macro_end_256);
  {
    CallBuiltin(Builtins::kTypedArrayStoreElementFromTagged, p_context, p_array, p_kind, p_index, p_value);
  }
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayInsertionSort(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_kind, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, Label* label_Detached_93) {
  Label label_macro_end_257_impl(this, {});
  Label* label_macro_end_257 = &label_macro_end_257_impl;
  USE(label_macro_end_257);
  {
    TVARIABLE(Smi, from77_impl);
    auto from77 = &from77_impl;
    USE(from77);
    *from77 = p_from_arg;
    TVARIABLE(Smi, to78_impl);
    auto to78 = &to78_impl;
    USE(to78);
    *to78 = p_to_arg;
    {
      Label label__True_94_impl(this);
      Label* label__True_94 = &label__True_94_impl;
      USE(label__True_94);
      Label label__False_95_impl(this, {});
      Label* label__False_95 = &label__False_95_impl;
      USE(label__False_95);
      TNode<JSArrayBuffer> t306 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(p_array));
      TNode<BoolT> t307 = UncheckedCast<BoolT>(IsDetachedBuffer(t306));
      USE(t307);
      Branch(t307, label__True_94, label__False_95);
      if (label__True_94->is_used())
      {
        BIND(label__True_94);
        Goto(label_Detached_93);
      }
      BIND(label__False_95);
    }
    int32_t t308 = 1;
    TNode<Smi> t309 = UncheckedCast<Smi>(SmiConstant(t308));
    TNode<Smi> t310 = UncheckedCast<Smi>(SmiAdd(from77->value(), t309));
    TVARIABLE(Smi, i79_impl);
    auto i79 = &i79_impl;
    USE(i79);
    *i79 = t310;
    Label label__True_96_impl(this);
    Label* label__True_96 = &label__True_96_impl;
    USE(label__True_96);
    Label label__False_97_impl(this);
    Label* label__False_97 = &label__False_97_impl;
    USE(label__False_97);
    Label label_header_206_258_impl(this, {i79});
    Label* label_header_206_258 = &label_header_206_258_impl;
    USE(label_header_206_258);
    Goto(label_header_206_258);
    BIND(label_header_206_258);
    Label label_assignment_207_259_impl(this);
    Label* label_assignment_207_259 = &label_assignment_207_259_impl;
    USE(label_assignment_207_259);
    TNode<BoolT> t311 = UncheckedCast<BoolT>(SmiLessThan(i79->value(), to78->value()));
    Branch(t311, label__True_96, label__False_97);
    if (label__True_96->is_used())
    {
      BIND(label__True_96);
      {
        TNode<Object> t312 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, i79->value()));
        USE(t312);
        TVARIABLE(Object, element80_impl);
        auto element80 = &element80_impl;
        USE(element80);
        *element80 = t312;
        int32_t t313 = 1;
        TNode<Smi> t314 = UncheckedCast<Smi>(SmiConstant(t313));
        TNode<Smi> t315 = UncheckedCast<Smi>(SmiSub(i79->value(), t314));
        TVARIABLE(Smi, j81_impl);
        auto j81 = &j81_impl;
        USE(j81);
        *j81 = t315;
        Label label__True_98_impl(this);
        Label* label__True_98 = &label__True_98_impl;
        USE(label__True_98);
        Label label__False_99_impl(this);
        Label* label__False_99 = &label__False_99_impl;
        USE(label__False_99);
        Label label_header_208_260_impl(this, {j81});
        Label* label_header_208_260 = &label_header_208_260_impl;
        USE(label_header_208_260);
        Goto(label_header_208_260);
        BIND(label_header_208_260);
        Label label_assignment_209_261_impl(this);
        Label* label_assignment_209_261 = &label_assignment_209_261_impl;
        USE(label_assignment_209_261);
        TNode<BoolT> t316 = UncheckedCast<BoolT>(SmiGreaterThanOrEqual(j81->value(), from77->value()));
        Branch(t316, label__True_98, label__False_99);
        if (label__True_98->is_used())
        {
          BIND(label__True_98);
          {
            TNode<Object> t317 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, j81->value()));
            USE(t317);
            TVARIABLE(Object, tmp82_impl);
            auto tmp82 = &tmp82_impl;
            USE(tmp82);
            *tmp82 = t317;
            TNode<Number> t318 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, tmp82->value(), element80->value(), label_Detached_93));
            USE(t318);
            TVARIABLE(Number, order83_impl);
            auto order83 = &order83_impl;
            USE(order83);
            *order83 = t318;
            {
              Label label__True_100_impl(this);
              Label* label__True_100 = &label__True_100_impl;
              USE(label__True_100);
              Label label__False_101_impl(this);
              Label* label__False_101 = &label__False_101_impl;
              USE(label__False_101);
              Label label_if_done_label_210_262_impl(this, {});
              Label* label_if_done_label_210_262 = &label_if_done_label_210_262_impl;
              USE(label_if_done_label_210_262);
              int32_t t319 = 0;
              TNode<Smi> t320 = UncheckedCast<Smi>(SmiConstant(t319));
              BranchIfNumberGreaterThan(order83->value(), t320, label__True_100, label__False_101);
              if (label__True_100->is_used())
              {
                BIND(label__True_100);
                {
                  int32_t t321 = 1;
                  TNode<Smi> t322 = UncheckedCast<Smi>(SmiConstant(t321));
                  TNode<Smi> t323 = UncheckedCast<Smi>(SmiAdd(j81->value(), t322));
                  Store(p_context, p_array, p_kind, t323, tmp82->value());
                }
                Goto(label_if_done_label_210_262);
              }
              if (label__False_101->is_used())
              {
                BIND(label__False_101);
                {
                  Goto(label__False_99);
                }
              }
              BIND(label_if_done_label_210_262);
            }
          }
          Goto(label_assignment_209_261);
        }
        {
          BIND(label_assignment_209_261);
          TNode<Smi> t324 = UncheckedCast<Smi>(SmiConstant(1));
          TNode<Smi> t325 = UncheckedCast<Smi>(SmiSub(j81->value(), t324));
          *j81 = t325;
          Goto(label_header_208_260);
        }
        BIND(label__False_99);
        int32_t t326 = 1;
        TNode<Smi> t327 = UncheckedCast<Smi>(SmiConstant(t326));
        TNode<Smi> t328 = UncheckedCast<Smi>(SmiAdd(j81->value(), t327));
        Store(p_context, p_array, p_kind, t328, element80->value());
      }
      Goto(label_assignment_207_259);
    }
    {
      BIND(label_assignment_207_259);
      TNode<Smi> t329 = UncheckedCast<Smi>(SmiConstant(1));
      TNode<Smi> t330 = UncheckedCast<Smi>(SmiAdd(i79->value(), t329));
      *i79 = t330;
      Goto(label_header_206_258);
    }
    BIND(label__False_97);
  }
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayQuickSortImpl(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_kind, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, Label* label_Detached_102) {
  Label label_macro_end_263_impl(this, {});
  Label* label_macro_end_263 = &label_macro_end_263_impl;
  USE(label_macro_end_263);
  {
    TVARIABLE(Smi, from84_impl);
    auto from84 = &from84_impl;
    USE(from84);
    *from84 = p_from_arg;
    TVARIABLE(Smi, to85_impl);
    auto to85 = &to85_impl;
    USE(to85);
    *to85 = p_to_arg;
    {
      Label label__True_103_impl(this);
      Label* label__True_103 = &label__True_103_impl;
      USE(label__True_103);
      Label label__False_104_impl(this);
      Label* label__False_104 = &label__False_104_impl;
      USE(label__False_104);
      Label label_header_211_264_impl(this, {from84, to85});
      Label* label_header_211_264 = &label_header_211_264_impl;
      USE(label_header_211_264);
      Goto(label_header_211_264);
      BIND(label_header_211_264);
      TNode<Smi> t331 = UncheckedCast<Smi>(SmiSub(to85->value(), from84->value()));
      int32_t t332 = 1;
      TNode<Smi> t333 = UncheckedCast<Smi>(SmiConstant(t332));
      TNode<BoolT> t334 = UncheckedCast<BoolT>(SmiGreaterThan(t331, t333));
      Branch(t334, label__True_103, label__False_104);
      if (label__True_103->is_used())
      {
        BIND(label__True_103);
        {
          {
            Label label__True_105_impl(this);
            Label* label__True_105 = &label__True_105_impl;
            USE(label__True_105);
            Label label__False_106_impl(this, {});
            Label* label__False_106 = &label__False_106_impl;
            USE(label__False_106);
            TNode<Smi> t335 = UncheckedCast<Smi>(SmiSub(to85->value(), from84->value()));
            int32_t t336 = 10;
            TNode<Smi> t337 = UncheckedCast<Smi>(SmiConstant(t336));
            TNode<BoolT> t338 = UncheckedCast<BoolT>(SmiLessThanOrEqual(t335, t337));
            Branch(t338, label__True_105, label__False_106);
            if (label__True_105->is_used())
            {
              BIND(label__True_105);
              {
                TypedArrayInsertionSort(p_context, p_array, p_kind, from84->value(), to85->value(), p_comparefn, label_Detached_102);
                Goto(label__False_104);
              }
            }
            BIND(label__False_106);
          }
          TNode<Smi> t339 = UncheckedCast<Smi>(SmiSub(to85->value(), from84->value()));
          int32_t t340 = 1;
          TNode<Smi> t341 = UncheckedCast<Smi>(SmiShr(t339, t340));
          TNode<Smi> t342 = UncheckedCast<Smi>(SmiAdd(from84->value(), t341));
          TVARIABLE(Smi, third_index86_impl);
          auto third_index86 = &third_index86_impl;
          USE(third_index86);
          *third_index86 = t342;
          {
            Label label__True_107_impl(this);
            Label* label__True_107 = &label__True_107_impl;
            USE(label__True_107);
            Label label__False_108_impl(this, {});
            Label* label__False_108 = &label__False_108_impl;
            USE(label__False_108);
            TNode<JSArrayBuffer> t343 = UncheckedCast<JSArrayBuffer>(LoadTypedArrayBuffer(p_array));
            TNode<BoolT> t344 = UncheckedCast<BoolT>(IsDetachedBuffer(t343));
            USE(t344);
            Branch(t344, label__True_107, label__False_108);
            if (label__True_107->is_used())
            {
              BIND(label__True_107);
              Goto(label_Detached_102);
            }
            BIND(label__False_108);
          }
          TNode<Object> t345 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, from84->value()));
          USE(t345);
          TVARIABLE(Object, v087_impl);
          auto v087 = &v087_impl;
          USE(v087);
          *v087 = t345;
          int32_t t346 = 1;
          TNode<Smi> t347 = UncheckedCast<Smi>(SmiConstant(t346));
          TNode<Smi> t348 = UncheckedCast<Smi>(SmiSub(to85->value(), t347));
          TNode<Object> t349 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, t348));
          USE(t349);
          TVARIABLE(Object, v188_impl);
          auto v188 = &v188_impl;
          USE(v188);
          *v188 = t349;
          TNode<Object> t350 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, third_index86->value()));
          USE(t350);
          TVARIABLE(Object, v289_impl);
          auto v289 = &v289_impl;
          USE(v289);
          *v289 = t350;
          TNode<Number> t351 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, v087->value(), v188->value(), label_Detached_102));
          USE(t351);
          TVARIABLE(Number, c0190_impl);
          auto c0190 = &c0190_impl;
          USE(c0190);
          *c0190 = t351;
          {
            Label label__True_109_impl(this);
            Label* label__True_109 = &label__True_109_impl;
            USE(label__True_109);
            Label label__False_110_impl(this, {v087, v188});
            Label* label__False_110 = &label__False_110_impl;
            USE(label__False_110);
            int32_t t352 = 0;
            TNode<Smi> t353 = UncheckedCast<Smi>(SmiConstant(t352));
            BranchIfNumberGreaterThan(c0190->value(), t353, label__True_109, label__False_110);
            if (label__True_109->is_used())
            {
              BIND(label__True_109);
              {
                TVARIABLE(Object, tmp91_impl);
                auto tmp91 = &tmp91_impl;
                USE(tmp91);
                *tmp91 = v087->value();
                *v087 = v188->value();
                *v188 = tmp91->value();
              }
              Goto(label__False_110);
            }
            BIND(label__False_110);
          }
          TNode<Number> t354 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, v087->value(), v289->value(), label_Detached_102));
          USE(t354);
          TVARIABLE(Number, c0292_impl);
          auto c0292 = &c0292_impl;
          USE(c0292);
          *c0292 = t354;
          {
            Label label__True_111_impl(this);
            Label* label__True_111 = &label__True_111_impl;
            USE(label__True_111);
            Label label__False_112_impl(this);
            Label* label__False_112 = &label__False_112_impl;
            USE(label__False_112);
            Label label_if_done_label_212_265_impl(this, {v087, v188, v289});
            Label* label_if_done_label_212_265 = &label_if_done_label_212_265_impl;
            USE(label_if_done_label_212_265);
            int32_t t355 = 0;
            TNode<Smi> t356 = UncheckedCast<Smi>(SmiConstant(t355));
            BranchIfNumberGreaterThanOrEqual(c0292->value(), t356, label__True_111, label__False_112);
            if (label__True_111->is_used())
            {
              BIND(label__True_111);
              {
                TVARIABLE(Object, tmp93_impl);
                auto tmp93 = &tmp93_impl;
                USE(tmp93);
                *tmp93 = v087->value();
                *v087 = v289->value();
                *v289 = v188->value();
                *v188 = tmp93->value();
              }
              Goto(label_if_done_label_212_265);
            }
            if (label__False_112->is_used())
            {
              BIND(label__False_112);
              {
                TNode<Number> t357 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, v188->value(), v289->value(), label_Detached_102));
                USE(t357);
                TVARIABLE(Number, c1294_impl);
                auto c1294 = &c1294_impl;
                USE(c1294);
                *c1294 = t357;
                {
                  Label label__True_113_impl(this);
                  Label* label__True_113 = &label__True_113_impl;
                  USE(label__True_113);
                  Label label__False_114_impl(this, {v188, v289});
                  Label* label__False_114 = &label__False_114_impl;
                  USE(label__False_114);
                  int32_t t358 = 0;
                  TNode<Smi> t359 = UncheckedCast<Smi>(SmiConstant(t358));
                  BranchIfNumberGreaterThan(c1294->value(), t359, label__True_113, label__False_114);
                  if (label__True_113->is_used())
                  {
                    BIND(label__True_113);
                    {
                      TVARIABLE(Object, tmp95_impl);
                      auto tmp95 = &tmp95_impl;
                      USE(tmp95);
                      *tmp95 = v188->value();
                      *v188 = v289->value();
                      *v289 = tmp95->value();
                    }
                    Goto(label__False_114);
                  }
                  BIND(label__False_114);
                }
              }
              Goto(label_if_done_label_212_265);
            }
            BIND(label_if_done_label_212_265);
          }
          Store(p_context, p_array, p_kind, from84->value(), v087->value());
          int32_t t360 = 1;
          TNode<Smi> t361 = UncheckedCast<Smi>(SmiConstant(t360));
          TNode<Smi> t362 = UncheckedCast<Smi>(SmiSub(to85->value(), t361));
          Store(p_context, p_array, p_kind, t362, v289->value());
          TVARIABLE(Object, pivot96_impl);
          auto pivot96 = &pivot96_impl;
          USE(pivot96);
          *pivot96 = v188->value();
          int32_t t363 = 1;
          TNode<Smi> t364 = UncheckedCast<Smi>(SmiConstant(t363));
          TNode<Smi> t365 = UncheckedCast<Smi>(SmiAdd(from84->value(), t364));
          TVARIABLE(Smi, low_end97_impl);
          auto low_end97 = &low_end97_impl;
          USE(low_end97);
          *low_end97 = t365;
          int32_t t366 = 1;
          TNode<Smi> t367 = UncheckedCast<Smi>(SmiConstant(t366));
          TNode<Smi> t368 = UncheckedCast<Smi>(SmiSub(to85->value(), t367));
          TVARIABLE(Smi, high_start98_impl);
          auto high_start98 = &high_start98_impl;
          USE(high_start98);
          *high_start98 = t368;
          TNode<Object> t369 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, low_end97->value()));
          USE(t369);
          TVARIABLE(Object, low_end_value99_impl);
          auto low_end_value99 = &low_end_value99_impl;
          USE(low_end_value99);
          *low_end_value99 = t369;
          Store(p_context, p_array, p_kind, third_index86->value(), low_end_value99->value());
          Store(p_context, p_array, p_kind, low_end97->value(), pivot96->value());
          int32_t t370 = 1;
          TNode<Smi> t371 = UncheckedCast<Smi>(SmiConstant(t370));
          TNode<Smi> t372 = UncheckedCast<Smi>(SmiAdd(low_end97->value(), t371));
          TVARIABLE(Smi, idx100_impl);
          auto idx100 = &idx100_impl;
          USE(idx100);
          *idx100 = t372;
          Label label__True_115_impl(this);
          Label* label__True_115 = &label__True_115_impl;
          USE(label__True_115);
          Label label__False_116_impl(this);
          Label* label__False_116 = &label__False_116_impl;
          USE(label__False_116);
          Label label_header_213_266_impl(this, {low_end97, high_start98, low_end_value99, idx100});
          Label* label_header_213_266 = &label_header_213_266_impl;
          USE(label_header_213_266);
          Goto(label_header_213_266);
          BIND(label_header_213_266);
          Label label_assignment_214_267_impl(this);
          Label* label_assignment_214_267 = &label_assignment_214_267_impl;
          USE(label_assignment_214_267);
          TNode<BoolT> t373 = UncheckedCast<BoolT>(SmiLessThan(idx100->value(), high_start98->value()));
          Branch(t373, label__True_115, label__False_116);
          if (label__True_115->is_used())
          {
            BIND(label__True_115);
            {
              TNode<Object> t374 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, idx100->value()));
              USE(t374);
              TVARIABLE(Object, element101_impl);
              auto element101 = &element101_impl;
              USE(element101);
              *element101 = t374;
              TNode<Number> t375 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, element101->value(), pivot96->value(), label_Detached_102));
              USE(t375);
              TVARIABLE(Number, order102_impl);
              auto order102 = &order102_impl;
              USE(order102);
              *order102 = t375;
              {
                Label label__True_117_impl(this);
                Label* label__True_117 = &label__True_117_impl;
                USE(label__True_117);
                Label label__False_118_impl(this);
                Label* label__False_118 = &label__False_118_impl;
                USE(label__False_118);
                Label label_if_done_label_215_268_impl(this, {element101, order102, low_end97, high_start98, low_end_value99});
                Label* label_if_done_label_215_268 = &label_if_done_label_215_268_impl;
                USE(label_if_done_label_215_268);
                int32_t t376 = 0;
                TNode<Smi> t377 = UncheckedCast<Smi>(SmiConstant(t376));
                BranchIfNumberLessThan(order102->value(), t377, label__True_117, label__False_118);
                if (label__True_117->is_used())
                {
                  BIND(label__True_117);
                  {
                    TNode<Object> t378 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, low_end97->value()));
                    USE(t378);
                    *low_end_value99 = t378;
                    Store(p_context, p_array, p_kind, idx100->value(), low_end_value99->value());
                    Store(p_context, p_array, p_kind, low_end97->value(), element101->value());
                    TNode<Smi> t379 = low_end97->value();
                    USE(t379);
                    TNode<Smi> t380 = UncheckedCast<Smi>(SmiConstant(1));
                    TNode<Smi> t381 = UncheckedCast<Smi>(SmiAdd(low_end97->value(), t380));
                    *low_end97 = t381;
                  }
                  Goto(label_if_done_label_215_268);
                }
                if (label__False_118->is_used())
                {
                  BIND(label__False_118);
                  {
                    Label label__True_119_impl(this);
                    Label* label__True_119 = &label__True_119_impl;
                    USE(label__True_119);
                    Label label__False_120_impl(this, {element101, order102, low_end97, high_start98, low_end_value99});
                    Label* label__False_120 = &label__False_120_impl;
                    USE(label__False_120);
                    int32_t t382 = 0;
                    TNode<Smi> t383 = UncheckedCast<Smi>(SmiConstant(t382));
                    BranchIfNumberGreaterThan(order102->value(), t383, label__True_119, label__False_120);
                    if (label__True_119->is_used())
                    {
                      BIND(label__True_119);
                      {
                        TVARIABLE(BoolT, break_for103_impl);
                        auto break_for103 = &break_for103_impl;
                        USE(break_for103);
                        TNode<BoolT> t384 = UncheckedCast<BoolT>(BoolConstant(false));
                        *break_for103 = t384;
                        {
                          Label label__True_121_impl(this);
                          Label* label__True_121 = &label__True_121_impl;
                          USE(label__True_121);
                          Label label__False_122_impl(this);
                          Label* label__False_122 = &label__False_122_impl;
                          USE(label__False_122);
                          Label label_header_216_269_impl(this, {break_for103, order102, high_start98});
                          Label* label_header_216_269 = &label_header_216_269_impl;
                          USE(label_header_216_269);
                          Goto(label_header_216_269);
                          BIND(label_header_216_269);
                          int32_t t385 = 0;
                          TNode<Smi> t386 = UncheckedCast<Smi>(SmiConstant(t385));
                          BranchIfNumberGreaterThan(order102->value(), t386, label__True_121, label__False_122);
                          if (label__True_121->is_used())
                          {
                            BIND(label__True_121);
                            {
                              TNode<Smi> t387 = high_start98->value();
                              USE(t387);
                              TNode<Smi> t388 = UncheckedCast<Smi>(SmiConstant(1));
                              TNode<Smi> t389 = UncheckedCast<Smi>(SmiSub(high_start98->value(), t388));
                              *high_start98 = t389;
                              {
                                Label label__True_123_impl(this);
                                Label* label__True_123 = &label__True_123_impl;
                                USE(label__True_123);
                                Label label__False_124_impl(this, {break_for103});
                                Label* label__False_124 = &label__False_124_impl;
                                USE(label__False_124);
                                TNode<BoolT> t390 = UncheckedCast<BoolT>(SmiEqual(high_start98->value(), idx100->value()));
                                Branch(t390, label__True_123, label__False_124);
                                if (label__True_123->is_used())
                                {
                                  BIND(label__True_123);
                                  {
                                    TNode<BoolT> t391 = UncheckedCast<BoolT>(BoolConstant(true));
                                    *break_for103 = t391;
                                    Goto(label__False_122);
                                  }
                                }
                                BIND(label__False_124);
                              }
                              TNode<Object> t392 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, high_start98->value()));
                              USE(t392);
                              TVARIABLE(Object, top_elem104_impl);
                              auto top_elem104 = &top_elem104_impl;
                              USE(top_elem104);
                              *top_elem104 = t392;
                              TNode<Number> t393 = UncheckedCast<Number>(CallCompareWithDetachedCheck(p_context, p_array, p_comparefn, top_elem104->value(), pivot96->value(), label_Detached_102));
                              USE(t393);
                              *order102 = t393;
                            }
                            Goto(label_header_216_269);
                          }
                          BIND(label__False_122);
                        }
                        {
                          Label label__True_125_impl(this);
                          Label* label__True_125 = &label__True_125_impl;
                          USE(label__True_125);
                          Label label__False_126_impl(this, {});
                          Label* label__False_126 = &label__False_126_impl;
                          USE(label__False_126);
                          Branch(break_for103->value(), label__True_125, label__False_126);
                          if (label__True_125->is_used())
                          {
                            BIND(label__True_125);
                            {
                              Goto(label__False_116);
                            }
                          }
                          BIND(label__False_126);
                        }
                        TNode<Object> t394 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, high_start98->value()));
                        USE(t394);
                        TVARIABLE(Object, high_start_value105_impl);
                        auto high_start_value105 = &high_start_value105_impl;
                        USE(high_start_value105);
                        *high_start_value105 = t394;
                        Store(p_context, p_array, p_kind, idx100->value(), high_start_value105->value());
                        Store(p_context, p_array, p_kind, high_start98->value(), element101->value());
                        {
                          Label label__True_127_impl(this);
                          Label* label__True_127 = &label__True_127_impl;
                          USE(label__True_127);
                          Label label__False_128_impl(this, {element101, low_end97, low_end_value99});
                          Label* label__False_128 = &label__False_128_impl;
                          USE(label__False_128);
                          int32_t t395 = 0;
                          TNode<Smi> t396 = UncheckedCast<Smi>(SmiConstant(t395));
                          BranchIfNumberLessThan(order102->value(), t396, label__True_127, label__False_128);
                          if (label__True_127->is_used())
                          {
                            BIND(label__True_127);
                            {
                              TNode<Object> t397 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, idx100->value()));
                              USE(t397);
                              *element101 = t397;
                              TNode<Object> t398 = UncheckedCast<Object>(Load(p_context, p_array, p_kind, low_end97->value()));
                              USE(t398);
                              *low_end_value99 = t398;
                              Store(p_context, p_array, p_kind, idx100->value(), low_end_value99->value());
                              Store(p_context, p_array, p_kind, low_end97->value(), element101->value());
                              TNode<Smi> t399 = low_end97->value();
                              USE(t399);
                              TNode<Smi> t400 = UncheckedCast<Smi>(SmiConstant(1));
                              TNode<Smi> t401 = UncheckedCast<Smi>(SmiAdd(low_end97->value(), t400));
                              *low_end97 = t401;
                            }
                            Goto(label__False_128);
                          }
                          BIND(label__False_128);
                        }
                      }
                      Goto(label__False_120);
                    }
                    BIND(label__False_120);
                  }
                  Goto(label_if_done_label_215_268);
                }
                BIND(label_if_done_label_215_268);
              }
            }
            Goto(label_assignment_214_267);
          }
          {
            BIND(label_assignment_214_267);
            TNode<Smi> t402 = idx100->value();
            USE(t402);
            TNode<Smi> t403 = UncheckedCast<Smi>(SmiConstant(1));
            TNode<Smi> t404 = UncheckedCast<Smi>(SmiAdd(idx100->value(), t403));
            *idx100 = t404;
            Goto(label_header_213_266);
          }
          BIND(label__False_116);
          {
            Label label__True_129_impl(this);
            Label* label__True_129 = &label__True_129_impl;
            USE(label__True_129);
            Label label__False_130_impl(this);
            Label* label__False_130 = &label__False_130_impl;
            USE(label__False_130);
            Label label_if_done_label_217_270_impl(this, {from84, to85});
            Label* label_if_done_label_217_270 = &label_if_done_label_217_270_impl;
            USE(label_if_done_label_217_270);
            TNode<Smi> t405 = UncheckedCast<Smi>(SmiSub(to85->value(), high_start98->value()));
            TNode<Smi> t406 = UncheckedCast<Smi>(SmiSub(low_end97->value(), from84->value()));
            TNode<BoolT> t407 = UncheckedCast<BoolT>(SmiLessThan(t405, t406));
            Branch(t407, label__True_129, label__False_130);
            if (label__True_129->is_used())
            {
              BIND(label__True_129);
              {
                TNode<JSTypedArray> t408 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, p_context, p_array, p_kind, high_start98->value(), to85->value(), p_comparefn));
                USE(t408);
                *to85 = low_end97->value();
              }
              Goto(label_if_done_label_217_270);
            }
            if (label__False_130->is_used())
            {
              BIND(label__False_130);
              {
                TNode<JSTypedArray> t409 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, p_context, p_array, p_kind, from84->value(), low_end97->value(), p_comparefn));
                USE(t409);
                *from84 = high_start98->value();
              }
              Goto(label_if_done_label_217_270);
            }
            BIND(label_if_done_label_217_270);
          }
        }
        Goto(label_header_211_264);
      }
      BIND(label__False_104);
    }
  }
}

TF_BUILTIN(TypedArrayQuickSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<JSTypedArray> p_array = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Smi> p_kind = UncheckedCast<Smi>(Parameter(Descriptor::kKind));
  USE(p_kind);
  TNode<Smi> p_from = UncheckedCast<Smi>(Parameter(Descriptor::kFrom));
  USE(p_from);
  TNode<Smi> p_to = UncheckedCast<Smi>(Parameter(Descriptor::kTo));
  USE(p_to);
  TNode<JSReceiver> p_comparefn = UncheckedCast<JSReceiver>(Parameter(Descriptor::kComparefn));
  USE(p_comparefn);
  {
    {
      Label label_try_done_218_271_impl(this);
      Label* label_try_done_218_271 = &label_try_done_218_271_impl;
      USE(label_try_done_218_271);
      Label label_Detached_131_impl(this);
      Label* label_Detached_131 = &label_Detached_131_impl;
      USE(label_Detached_131);
      Label label_try_begin_219_272_impl(this);
      Label* label_try_begin_219_272 = &label_try_begin_219_272_impl;
      USE(label_try_begin_219_272);
      Goto(label_try_begin_219_272);
      if (label_try_begin_219_272->is_used())
      {
        BIND(label_try_begin_219_272);
        {
          TypedArrayQuickSortImpl(p_context, p_array, p_kind, p_from, p_to, p_comparefn, label_Detached_131);
        }
        Goto(label_try_done_218_271);
      }
      if (label_Detached_131->is_used())
      {
        BIND(label_Detached_131);
        {
          TNode<String> t410 = StringConstant("%TypedArray%.prototype.sort");
          ThrowTypeError(p_context, MessageTemplate::kDetachedOperation, t410);
        }
      }
      BIND(label_try_done_218_271);
    }
    Return(p_array);
  }
}

TF_BUILTIN(TypedArrayPrototypeSort, TypedArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(BuiltinDescriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(BuiltinDescriptor::kArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  {
    auto t411 = [=]() {
      int32_t t413 = 0;
      TNode<IntPtrT> t414 = UncheckedCast<IntPtrT>(IntPtrConstant(t413));
      TNode<Object> t415 = UncheckedCast<Object>(GetArgumentValue(arguments, t414));
      return t415;
    };
    auto t412 = [=]() {
      return UndefinedConstant();
    };
    TVARIABLE(Object, t416220_impl);
    auto t416220 = &t416220_impl;
    USE(t416220);
    {
      Label label__True_132_impl(this);
      Label* label__True_132 = &label__True_132_impl;
      USE(label__True_132);
      Label label__False_133_impl(this);
      Label* label__False_133 = &label__False_133_impl;
      USE(label__False_133);
      Label label__done_221_273_impl(this, {t416220});
      Label* label__done_221_273 = &label__done_221_273_impl;
      USE(label__done_221_273);
      TNode<IntPtrT> t417 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int32_t t418 = 0;
      TNode<IntPtrT> t419 = UncheckedCast<IntPtrT>(IntPtrConstant(t418));
      TNode<BoolT> t420 = UncheckedCast<BoolT>(IntPtrGreaterThan(t417, t419));
      Branch(t420, label__True_132, label__False_133);
      BIND(label__True_132);
      *t416220 = t411();
      Goto(label__done_221_273);
      BIND(label__False_133);
      *t416220 = t412();
      Goto(label__done_221_273);
      BIND(label__done_221_273);
    }
    TVARIABLE(Object, comparefn_obj106_impl);
    auto comparefn_obj106 = &comparefn_obj106_impl;
    USE(comparefn_obj106);
    *comparefn_obj106 = t416220->value();
    {
      Label label__True_134_impl(this);
      Label* label__True_134 = &label__True_134_impl;
      USE(label__True_134);
      Label label__False_135_impl(this, {});
      Label* label__False_135 = &label__False_135_impl;
      USE(label__False_135);
      Label label__True_136_impl(this);
      Label* label__True_136 = &label__True_136_impl;
      USE(label__True_136);
      TNode<BoolT> t421 = UncheckedCast<BoolT>(WordNotEqual(comparefn_obj106->value(), UndefinedConstant()));
      GotoIfNot(t421, label__False_135);
      TNode<BoolT> t422 = UncheckedCast<BoolT>(TaggedIsCallable(comparefn_obj106->value()));
      USE(t422);
      TNode<BoolT> t423 = UncheckedCast<BoolT>(Word32BinaryNot(t422));
      Branch(t423, label__True_134, label__False_135);
      if (label__True_134->is_used())
      {
        BIND(label__True_134);
        {
          ThrowTypeError(p_context, MessageTemplate::kBadSortComparisonFunction, comparefn_obj106->value());
        }
      }
      BIND(label__False_135);
    }
    TVARIABLE(Object, obj107_impl);
    auto obj107 = &obj107_impl;
    USE(obj107);
    *obj107 = p_receiver;
    TNode<JSTypedArray> t424 = UncheckedCast<JSTypedArray>(ValidateTypedArray(p_context, obj107->value(), "%TypedArray%.prototype.sort"));
    USE(t424);
    TVARIABLE(JSTypedArray, array108_impl);
    auto array108 = &array108_impl;
    USE(array108);
    *array108 = t424;
    {
      Label label__True_137_impl(this);
      Label* label__True_137 = &label__True_137_impl;
      USE(label__True_137);
      Label label__False_138_impl(this, {});
      Label* label__False_138 = &label__False_138_impl;
      USE(label__False_138);
      TNode<BoolT> t425 = UncheckedCast<BoolT>(WordEqual(comparefn_obj106->value(), UndefinedConstant()));
      Branch(t425, label__True_137, label__False_138);
      if (label__True_137->is_used())
      {
        BIND(label__True_137);
        {
          TNode<JSTypedArray> t426 = UncheckedCast<JSTypedArray>(CallRuntime(Runtime::kTypedArraySortFast, p_context, obj107->value()));
          USE(t426);
          arguments->PopAndReturn(t426);
        }
      }
      BIND(label__False_138);
    }
    TNode<Smi> t427 = UncheckedCast<Smi>(LoadTypedArrayLength(array108->value()));
    TVARIABLE(Smi, len109_impl);
    auto len109 = &len109_impl;
    USE(len109);
    *len109 = t427;
    {
      Label label_try_done_222_274_impl(this);
      Label* label_try_done_222_274 = &label_try_done_222_274_impl;
      USE(label_try_done_222_274);
      Label label_CastError_139_impl(this);
      Label* label_CastError_139 = &label_CastError_139_impl;
      USE(label_CastError_139);
      Label label_try_begin_223_275_impl(this);
      Label* label_try_begin_223_275 = &label_try_begin_223_275_impl;
      USE(label_try_begin_223_275);
      Goto(label_try_begin_223_275);
      if (label_try_begin_223_275->is_used())
      {
        BIND(label_try_begin_223_275);
        {
          TNode<JSReceiver> t428 = UncheckedCast<JSReceiver>(TaggedToCallable(comparefn_obj106->value(), label_CastError_139));
          TVARIABLE(JSReceiver, comparefn110_impl);
          auto comparefn110 = &comparefn110_impl;
          USE(comparefn110);
          *comparefn110 = t428;
          TNode<Int32T> t429 = UncheckedCast<Int32T>(LoadElementsKind(array108->value()));
          TNode<Smi> t430 = UncheckedCast<Smi>(SmiFromInt32(t429));
          TVARIABLE(Smi, elements_kind111_impl);
          auto elements_kind111 = &elements_kind111_impl;
          USE(elements_kind111);
          *elements_kind111 = t430;
          int32_t t431 = 0;
          TNode<Smi> t432 = UncheckedCast<Smi>(SmiConstant(t431));
          TNode<JSTypedArray> t433 = UncheckedCast<JSTypedArray>(CallBuiltin(Builtins::kTypedArrayQuickSort, p_context, array108->value(), elements_kind111->value(), t432, len109->value(), comparefn110->value()));
          USE(t433);
        }
        Goto(label_try_done_222_274);
      }
      if (label_CastError_139->is_used())
      {
        BIND(label_CastError_139);
        {
          Unreachable();
        }
      }
      BIND(label_try_done_222_274);
    }
    arguments->PopAndReturn(array108->value());
  }
}

}  // namepsace internal
}  // namespace v8

