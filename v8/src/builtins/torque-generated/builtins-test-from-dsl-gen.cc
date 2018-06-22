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
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(BoolT, _return112_impl);
  auto _return112 = &_return112_impl;
  USE(_return112);
  *_return112 = UncheckedCast<BoolT>(return_default);
  Label label_macro_end_276_impl(this, {_return112});
  Label* label_macro_end_276 = &label_macro_end_276_impl;
  USE(label_macro_end_276);
  {
    {
      Label label__False_142_impl(this);
      Label* label__False_142 = &label__False_142_impl;
      USE(label__False_142);
      bool t434 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
      bool t435 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
      if (((t434 || t435))) {
        {
          TNode<BoolT> t436 = UncheckedCast<BoolT>(BoolConstant(true));
          *_return112 = t436;
          Goto(label_macro_end_276);
        }
      } else {
        {
          TNode<BoolT> t437 = UncheckedCast<BoolT>(BoolConstant(false));
          *_return112 = t437;
          Goto(label_macro_end_276);
        }
      }
    }
  }
  BIND(label_macro_end_276);
  return _return112->value();
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper2(ElementsKind p_kind) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(BoolT, _return113_impl);
  auto _return113 = &_return113_impl;
  USE(_return113);
  *_return113 = UncheckedCast<BoolT>(return_default);
  Label label_macro_end_277_impl(this, {_return113});
  Label* label_macro_end_277 = &label_macro_end_277_impl;
  USE(label_macro_end_277);
  {
    Label label__False_143_impl(this);
    Label* label__False_143 = &label__False_143_impl;
    USE(label__False_143);
    bool t438 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
    bool t439 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
    TNode<BoolT> t440 = UncheckedCast<BoolT>(BoolConstant((t438 || t439)));
    *_return113 = t440;
    Goto(label_macro_end_277);
  }
  BIND(label_macro_end_277);
  return _return113->value();
}

bool TestBuiltinsFromDSLAssembler::ElementsKindTestHelper3(ElementsKind p_kind) {
  bool _return114_impl;
  auto _return114 = &_return114_impl;
  USE(_return114);
  *_return114 = bool();
  Label label_macro_end_278_impl(this, {});
  Label* label_macro_end_278 = &label_macro_end_278_impl;
  USE(label_macro_end_278);
  {
    Label label__False_144_impl(this);
    Label* label__False_144 = &label__False_144_impl;
    USE(label__False_144);
    bool t441 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
    bool t442 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
    *_return114 = (t441 || t442);
    Goto(label_macro_end_278);
  }
  BIND(label_macro_end_278);
  return *_return114;
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper1(Label* label_Label1_145) {
  Label label_macro_end_279_impl(this, {});
  Label* label_macro_end_279 = &label_macro_end_279_impl;
  USE(label_macro_end_279);
  {
    Goto(label_Label1_145);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper2(Label* label_Label2_146, TVariable<Smi>* Label20115) {
  Label label_macro_end_280_impl(this, {});
  Label* label_macro_end_280 = &label_macro_end_280_impl;
  USE(label_macro_end_280);
  {
    int32_t t443 = 42;
    TNode<Smi> t444 = UncheckedCast<Smi>(SmiConstant(t443));
    *Label20115 = t444;
    Goto(label_Label2_146);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper3(Label* label_Label3_147, TVariable<String>* Label30116, TVariable<Smi>* Label31117) {
  Label label_macro_end_281_impl(this, {});
  Label* label_macro_end_281 = &label_macro_end_281_impl;
  USE(label_macro_end_281);
  {
    TNode<String> t445 = StringConstant("foo");
    *Label30116 = t445;
    int32_t t446 = 7;
    TNode<Smi> t447 = UncheckedCast<Smi>(SmiConstant(t446));
    *Label31117 = t447;
    Goto(label_Label3_147);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexpr1() {
  Label label_macro_end_282_impl(this, {});
  Label* label_macro_end_282 = &label_macro_end_282_impl;
  USE(label_macro_end_282);
  {
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprIf() {
  Label label_macro_end_283_impl(this, {});
  Label* label_macro_end_283 = &label_macro_end_283_impl;
  USE(label_macro_end_283);
  {
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprReturn() {
  Label label_macro_end_284_impl(this, {});
  Label* label_macro_end_284 = &label_macro_end_284_impl;
  USE(label_macro_end_284);
  {
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabel() {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Oddball, _return118_impl);
  auto _return118 = &_return118_impl;
  USE(_return118);
  *_return118 = UncheckedCast<Oddball>(return_default);
  Label label_macro_end_285_impl(this, {_return118});
  Label* label_macro_end_285 = &label_macro_end_285_impl;
  USE(label_macro_end_285);
  {
    {
      Label label_try_done_224_286_impl(this);
      Label* label_try_done_224_286 = &label_try_done_224_286_impl;
      USE(label_try_done_224_286);
      Label label_Label1_148_impl(this);
      Label* label_Label1_148 = &label_Label1_148_impl;
      USE(label_Label1_148);
      Label label_try_begin_225_287_impl(this);
      Label* label_try_begin_225_287 = &label_try_begin_225_287_impl;
      USE(label_try_begin_225_287);
      Goto(label_try_begin_225_287);
      if (label_try_begin_225_287->is_used())
      {
        BIND(label_try_begin_225_287);
        {
          LabelTestHelper1(label_Label1_148);
        }
      }
      if (label_Label1_148->is_used())
      {
        BIND(label_Label1_148);
        {
          *_return118 = TrueConstant();
          Goto(label_macro_end_285);
        }
      }
    }
  }
  BIND(label_macro_end_285);
  return _return118->value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithOneParameter() {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Oddball, _return119_impl);
  auto _return119 = &_return119_impl;
  USE(_return119);
  *_return119 = UncheckedCast<Oddball>(return_default);
  Label label_macro_end_288_impl(this, {_return119});
  Label* label_macro_end_288 = &label_macro_end_288_impl;
  USE(label_macro_end_288);
  {
    {
      Label label_try_done_226_289_impl(this);
      Label* label_try_done_226_289 = &label_try_done_226_289_impl;
      USE(label_try_done_226_289);
      Label label_Label2_149_impl(this);
      Label* label_Label2_149 = &label_Label2_149_impl;
      USE(label_Label2_149);
      TVARIABLE(Smi, smi120_impl);
      auto smi120 = &smi120_impl;
      USE(smi120);
      Label label_try_begin_227_290_impl(this);
      Label* label_try_begin_227_290 = &label_try_begin_227_290_impl;
      USE(label_try_begin_227_290);
      Goto(label_try_begin_227_290);
      if (label_try_begin_227_290->is_used())
      {
        BIND(label_try_begin_227_290);
        {
          LabelTestHelper2(label_Label2_149, smi120);
        }
      }
      if (label_Label2_149->is_used())
      {
        BIND(label_Label2_149);
        {
          *_return119 = TrueConstant();
          Goto(label_macro_end_288);
        }
      }
    }
  }
  BIND(label_macro_end_288);
  return _return119->value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithTwoParameters() {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Oddball, _return121_impl);
  auto _return121 = &_return121_impl;
  USE(_return121);
  *_return121 = UncheckedCast<Oddball>(return_default);
  Label label_macro_end_291_impl(this, {_return121});
  Label* label_macro_end_291 = &label_macro_end_291_impl;
  USE(label_macro_end_291);
  {
    {
      Label label_try_done_228_292_impl(this);
      Label* label_try_done_228_292 = &label_try_done_228_292_impl;
      USE(label_try_done_228_292);
      Label label_Label3_150_impl(this);
      Label* label_Label3_150 = &label_Label3_150_impl;
      USE(label_Label3_150);
      TVARIABLE(String, str122_impl);
      auto str122 = &str122_impl;
      USE(str122);
      TVARIABLE(Smi, smi123_impl);
      auto smi123 = &smi123_impl;
      USE(smi123);
      Label label_try_begin_229_293_impl(this);
      Label* label_try_begin_229_293 = &label_try_begin_229_293_impl;
      USE(label_try_begin_229_293);
      Goto(label_try_begin_229_293);
      if (label_try_begin_229_293->is_used())
      {
        BIND(label_try_begin_229_293);
        {
          LabelTestHelper3(label_Label3_150, str122, smi123);
        }
      }
      if (label_Label3_150->is_used())
      {
        BIND(label_Label3_150);
        {
          *_return121 = TrueConstant();
          Goto(label_macro_end_291);
        }
      }
    }
  }
  BIND(label_macro_end_291);
  return _return121->value();
}

TF_BUILTIN(GenericBuiltinTest8ATObject, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Object> p_param = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(p_param);
  {
    Return(p_param);
  }
}

void TestBuiltinsFromDSLAssembler::TestBuiltinSpecialization(TNode<Context> p_c) {
  Label label_macro_end_294_impl(this, {});
  Label* label_macro_end_294 = &label_macro_end_294_impl;
  USE(label_macro_end_294);
  {
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper4(bool p_flag, Label* label_Label4_151, Label* label_Label5_152) {
  Label label_macro_end_295_impl(this, {});
  Label* label_macro_end_295 = &label_macro_end_295_impl;
  USE(label_macro_end_295);
  {
    {
      if ((p_flag)) {
        Goto(label_Label4_151);
      } else {
        Goto(label_Label5_152);
      }
    }
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::CallLabelTestHelper4(bool p_flag) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(BoolT, _return124_impl);
  auto _return124 = &_return124_impl;
  USE(_return124);
  *_return124 = UncheckedCast<BoolT>(return_default);
  Label label_macro_end_296_impl(this, {_return124});
  Label* label_macro_end_296 = &label_macro_end_296_impl;
  USE(label_macro_end_296);
  {
    {
      Label label_try_done_230_297_impl(this);
      Label* label_try_done_230_297 = &label_try_done_230_297_impl;
      USE(label_try_done_230_297);
      Label label_Label4_155_impl(this);
      Label* label_Label4_155 = &label_Label4_155_impl;
      USE(label_Label4_155);
      Label label_Label5_156_impl(this);
      Label* label_Label5_156 = &label_Label5_156_impl;
      USE(label_Label5_156);
      Label label_try_begin_231_298_impl(this);
      Label* label_try_begin_231_298 = &label_try_begin_231_298_impl;
      USE(label_try_begin_231_298);
      Goto(label_try_begin_231_298);
      if (label_try_begin_231_298->is_used())
      {
        BIND(label_try_begin_231_298);
        {
          LabelTestHelper4(p_flag, label_Label4_155, label_Label5_156);
        }
      }
      if (label_Label4_155->is_used())
      {
        BIND(label_Label4_155);
        {
          TNode<BoolT> t448 = UncheckedCast<BoolT>(BoolConstant(true));
          *_return124 = t448;
          Goto(label_macro_end_296);
        }
      }
      if (label_Label5_156->is_used())
      {
        BIND(label_Label5_156);
        {
          TNode<BoolT> t449 = UncheckedCast<BoolT>(BoolConstant(false));
          *_return124 = t449;
          Goto(label_macro_end_296);
        }
      }
    }
  }
  BIND(label_macro_end_296);
  return _return124->value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestPartiallyUnusedLabel() {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Oddball, _return125_impl);
  auto _return125 = &_return125_impl;
  USE(_return125);
  *_return125 = UncheckedCast<Oddball>(return_default);
  Label label_macro_end_299_impl(this, {_return125});
  Label* label_macro_end_299 = &label_macro_end_299_impl;
  USE(label_macro_end_299);
  {
    TNode<BoolT> t450 = UncheckedCast<BoolT>(CallLabelTestHelper4(true));
    USE(t450);
    TVARIABLE(BoolT, r1126_impl);
    auto r1126 = &r1126_impl;
    USE(r1126);
    *r1126 = t450;
    TNode<BoolT> t451 = UncheckedCast<BoolT>(CallLabelTestHelper4(false));
    USE(t451);
    TVARIABLE(BoolT, r2127_impl);
    auto r2127 = &r2127_impl;
    USE(r2127);
    *r2127 = t451;
    {
      Label label__True_157_impl(this);
      Label* label__True_157 = &label__True_157_impl;
      USE(label__True_157);
      Label label__False_158_impl(this);
      Label* label__False_158 = &label__False_158_impl;
      USE(label__False_158);
      Label label_if_done_label_232_300_impl(this, {_return125});
      Label* label_if_done_label_232_300 = &label_if_done_label_232_300_impl;
      USE(label_if_done_label_232_300);
      Label label__True_159_impl(this);
      Label* label__True_159 = &label__True_159_impl;
      USE(label__True_159);
      GotoIfNot(r1126->value(), label__False_158);
      TNode<BoolT> t452 = UncheckedCast<BoolT>(Word32BinaryNot(r2127->value()));
      Branch(t452, label__True_157, label__False_158);
      if (label__True_157->is_used())
      {
        BIND(label__True_157);
        *_return125 = TrueConstant();
        Goto(label_macro_end_299);
      }
      if (label__False_158->is_used())
      {
        BIND(label__False_158);
        *_return125 = FalseConstant();
        Goto(label_macro_end_299);
      }
    }
  }
  BIND(label_macro_end_299);
  return _return125->value();
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest8ATObject(TNode<Object> p_param2) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Object, _return128_impl);
  auto _return128 = &_return128_impl;
  USE(_return128);
  *_return128 = UncheckedCast<Object>(return_default);
  Label label_macro_end_301_impl(this, {_return128});
  Label* label_macro_end_301 = &label_macro_end_301_impl;
  USE(label_macro_end_301);
  {
    *_return128 = p_param2;
    Goto(label_macro_end_301);
  }
  BIND(label_macro_end_301);
  return _return128->value();
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels8ATObject(TNode<Object> p_param2, Label* label_Y_160) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Object, _return129_impl);
  auto _return129 = &_return129_impl;
  USE(_return129);
  *_return129 = UncheckedCast<Object>(return_default);
  Label label_macro_end_302_impl(this, {_return129});
  Label* label_macro_end_302 = &label_macro_end_302_impl;
  USE(label_macro_end_302);
  {
    *_return129 = p_param2;
    Goto(label_macro_end_302);
  }
  BIND(label_macro_end_302);
  return _return129->value();
}

void TestBuiltinsFromDSLAssembler::TestMacroSpecialization() {
  Label label_macro_end_303_impl(this, {});
  Label* label_macro_end_303 = &label_macro_end_303_impl;
  USE(label_macro_end_303);
  {
    {
      Label label_try_done_233_304_impl(this);
      Label* label_try_done_233_304 = &label_try_done_233_304_impl;
      USE(label_try_done_233_304);
      Label label_Fail_161_impl(this);
      Label* label_Fail_161 = &label_Fail_161_impl;
      USE(label_Fail_161);
      Label label_try_begin_234_305_impl(this);
      Label* label_try_begin_234_305 = &label_try_begin_234_305_impl;
      USE(label_try_begin_234_305);
      Goto(label_try_begin_234_305);
      if (label_try_begin_234_305->is_used())
      {
        BIND(label_try_begin_234_305);
        {
          {
            Label label__True_162_impl(this);
            Label* label__True_162 = &label__True_162_impl;
            USE(label__True_162);
            Label label__False_163_impl(this, {});
            Label* label__False_163 = &label__False_163_impl;
            USE(label__False_163);
            TNode<BoolT> t453 = UncheckedCast<BoolT>(WordEqual(TrueConstant(), FalseConstant()));
            Branch(t453, label__True_162, label__False_163);
            if (label__True_162->is_used())
            {
              BIND(label__True_162);
              Goto(label_Fail_161);
            }
            BIND(label__False_163);
          }
        }
        Goto(label_try_done_233_304);
      }
      if (label_Fail_161->is_used())
      {
        BIND(label_Fail_161);
        {
          Unreachable();
        }
      }
      BIND(label_try_done_233_304);
    }
  }
}

TF_BUILTIN(TestHelperPlus1, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  {
    int32_t t454 = 1;
    TNode<Smi> t455 = UncheckedCast<Smi>(SmiConstant(t454));
    TNode<Smi> t456 = UncheckedCast<Smi>(SmiAdd(p_x, t455));
    Return(t456);
  }
}

TF_BUILTIN(TestHelperPlus2, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  {
    int32_t t457 = 2;
    TNode<Smi> t458 = UncheckedCast<Smi>(SmiConstant(t457));
    TNode<Smi> t459 = UncheckedCast<Smi>(SmiAdd(p_x, t458));
    Return(t459);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestFunctionPointers(TNode<Context> p_context) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Oddball, _return130_impl);
  auto _return130 = &_return130_impl;
  USE(_return130);
  *_return130 = UncheckedCast<Oddball>(return_default);
  Label label_macro_end_306_impl(this, {_return130});
  Label* label_macro_end_306 = &label_macro_end_306_impl;
  USE(label_macro_end_306);
  {
    TVARIABLE(Code, fptr131_impl);
    auto fptr131 = &fptr131_impl;
    USE(fptr131);
    *fptr131 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).code());
    *fptr131 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code());
    *_return130 = TrueConstant();
    Goto(label_macro_end_306);
  }
  BIND(label_macro_end_306);
  return _return130->value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
  Node* return_default = &*SmiConstant(0);
  TVARIABLE(Oddball, _return132_impl);
  auto _return132 = &_return132_impl;
  USE(_return132);
  *_return132 = UncheckedCast<Oddball>(return_default);
  Label label_macro_end_307_impl(this, {_return132});
  Label* label_macro_end_307 = &label_macro_end_307_impl;
  USE(label_macro_end_307);
  {
    auto t460 = [=]() {
      int32_t t462 = 0;
      return t462;
    };
    auto t461 = [=]() {
      int32_t t463 = 1;
      return t463;
    };
    int32_t t464235_impl;
    auto t464235 = &t464235_impl;
    USE(t464235);
    {
      Label label__True_164_impl(this);
      Label* label__True_164 = &label__True_164_impl;
      USE(label__True_164);
      Label label__False_165_impl(this);
      Label* label__False_165 = &label__False_165_impl;
      USE(label__False_165);
      Label label__done_236_308_impl(this, {});
      Label* label__done_236_308 = &label__done_236_308_impl;
      USE(label__done_236_308);
      int32_t t465 = 42;
      int32_t t466 = 0;
      TNode<Int32T> t467 = UncheckedCast<Int32T>(Int32Constant(t465));
      TNode<Int32T> t468 = UncheckedCast<Int32T>(Int32Constant(t466));
      TNode<BoolT> t469 = UncheckedCast<BoolT>(Word32Equal(t467, t468));
      Branch(t469, label__True_164, label__False_165);
      BIND(label__True_164);
      *t464235 = t460();
      Goto(label__done_236_308);
      BIND(label__False_165);
      *t464235 = t461();
      Goto(label__done_236_308);
      BIND(label__done_236_308);
    }
    TVARIABLE(Number, var1133_impl);
    auto var1133 = &var1133_impl;
    USE(var1133);
    TNode<Smi> t470 = UncheckedCast<Smi>(SmiConstant(*t464235));
    *var1133 = t470;
    auto t471 = [=]() {
      int32_t t473 = 1;
      return t473;
    };
    auto t472 = [=]() {
      int32_t t474 = 0;
      return t474;
    };
    int32_t t475237_impl;
    auto t475237 = &t475237_impl;
    USE(t475237);
    {
      Label label__True_166_impl(this);
      Label* label__True_166 = &label__True_166_impl;
      USE(label__True_166);
      Label label__False_167_impl(this);
      Label* label__False_167 = &label__False_167_impl;
      USE(label__False_167);
      Label label__done_238_309_impl(this, {});
      Label* label__done_238_309 = &label__done_238_309_impl;
      USE(label__done_238_309);
      int32_t t476 = 42;
      int32_t t477 = 0;
      TNode<Int32T> t478 = UncheckedCast<Int32T>(Int32Constant(t476));
      TNode<Int32T> t479 = UncheckedCast<Int32T>(Int32Constant(t477));
      TNode<BoolT> t480 = UncheckedCast<BoolT>(Word32Equal(t478, t479));
      Branch(t480, label__True_166, label__False_167);
      BIND(label__True_166);
      *t475237 = t471();
      Goto(label__done_238_309);
      BIND(label__False_167);
      *t475237 = t472();
      Goto(label__done_238_309);
      BIND(label__done_238_309);
    }
    TVARIABLE(Number, var2134_impl);
    auto var2134 = &var2134_impl;
    USE(var2134);
    TNode<Smi> t481 = UncheckedCast<Smi>(SmiConstant(*t475237));
    *var2134 = t481;
    *_return132 = TrueConstant();
    Goto(label_macro_end_307);
  }
  BIND(label_macro_end_307);
  return _return132->value();
}

void TestBuiltinsFromDSLAssembler::TestFunctionPointerToGeneric(TNode<Context> p_c) {
  Label label_macro_end_310_impl(this, {});
  Label* label_macro_end_310 = &label_macro_end_310_impl;
  USE(label_macro_end_310);
  {
    TVARIABLE(Code, fptr1135_impl);
    auto fptr1135 = &fptr1135_impl;
    USE(fptr1135);
    *fptr1135 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).code());
    TVARIABLE(Code, fptr2136_impl);
    auto fptr2136 = &fptr2136_impl;
    USE(fptr2136);
    *fptr2136 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest8ATObject).code());
  }
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Smi> p_param = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(p_param);
  {
    Return(NullConstant());
  }
}

}  // namepsace internal
}  // namespace v8

