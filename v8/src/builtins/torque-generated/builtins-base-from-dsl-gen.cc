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

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Hole() {
  TNode<Oddball> t0 = UncheckedCast<Oddball>(TheHoleConstant());
  USE(t0);
  return t0;
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Null() {
  TNode<Oddball> t1 = UncheckedCast<Oddball>(NullConstant());
  USE(t1);
  return t1;
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Undefined() {
  TNode<Oddball> t2 = UncheckedCast<Oddball>(UndefinedConstant());
  USE(t2);
  return t2;
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::True() {
  TNode<Oddball> t3 = UncheckedCast<Oddball>(TrueConstant());
  USE(t3);
  return t3;
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::False() {
  TNode<Oddball> t4 = UncheckedCast<Oddball>(FalseConstant());
  USE(t4);
  return t4;
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o, Label* label_CastError_0) {
  TVARIABLE(Number, _return_0_impl);
  auto _return_0 = &_return_0_impl;
  USE(_return_0);
  Label label_macro_end_514_impl(this, {_return_0});
  Label* label_macro_end_514 = &label_macro_end_514_impl;
  USE(label_macro_end_514);
  // ../../src/builtins/base.tq:316:49
  {
    // ../../src/builtins/base.tq:317:2
    TNode<Number> t5 = UncheckedCast<Number>(TaggedToNumber(p_o, label_CastError_0));
    USE(t5);
    *_return_0 = t5;
    Goto(label_macro_end_514);
  }
  BIND(label_macro_end_514);
  return (*_return_0).value();
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::cast12ATHeapObject(TNode<Object> p_o, Label* label_CastError_1) {
  TVARIABLE(HeapObject, _return_1_impl);
  auto _return_1 = &_return_1_impl;
  USE(_return_1);
  Label label_macro_end_515_impl(this, {_return_1});
  Label* label_macro_end_515 = &label_macro_end_515_impl;
  USE(label_macro_end_515);
  // ../../src/builtins/base.tq:319:57
  {
    // ../../src/builtins/base.tq:320:2
    TNode<HeapObject> t6 = UncheckedCast<HeapObject>(TaggedToHeapObject(p_o, label_CastError_1));
    USE(t6);
    *_return_1 = t6;
    Goto(label_macro_end_515);
  }
  BIND(label_macro_end_515);
  return (*_return_1).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::cast5ATSmi(TNode<Object> p_o, Label* label_CastError_2) {
  TVARIABLE(Smi, _return_2_impl);
  auto _return_2 = &_return_2_impl;
  USE(_return_2);
  Label label_macro_end_516_impl(this, {_return_2});
  Label* label_macro_end_516 = &label_macro_end_516_impl;
  USE(label_macro_end_516);
  // ../../src/builtins/base.tq:322:43
  {
    // ../../src/builtins/base.tq:323:2
    TNode<Smi> t7 = UncheckedCast<Smi>(TaggedToSmi(p_o, label_CastError_2));
    USE(t7);
    *_return_2 = t7;
    Goto(label_macro_end_516);
  }
  BIND(label_macro_end_516);
  return (*_return_2).value();
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::cast12ATJSDataView(TNode<Object> p_o, Label* label_CastError_3) {
  TVARIABLE(JSDataView, _return_3_impl);
  auto _return_3 = &_return_3_impl;
  USE(_return_3);
  Label label_macro_end_517_impl(this, {_return_3});
  Label* label_macro_end_517 = &label_macro_end_517_impl;
  USE(label_macro_end_517);
  // ../../src/builtins/base.tq:325:57
  {
    // ../../src/builtins/base.tq:326:2
    TNode<JSDataView> t8 = UncheckedCast<JSDataView>(TaggedToJSDataView(p_o, label_CastError_3));
    USE(t8);
    *_return_3 = t8;
    Goto(label_macro_end_517);
  }
  BIND(label_macro_end_517);
  return (*_return_3).value();
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o, Label* label_CastError_4) {
  TVARIABLE(JSReceiver, _return_4_impl);
  auto _return_4 = &_return_4_impl;
  USE(_return_4);
  Label label_macro_end_518_impl(this, {_return_4});
  Label* label_macro_end_518 = &label_macro_end_518_impl;
  USE(label_macro_end_518);
  // ../../src/builtins/base.tq:328:53
  {
    // ../../src/builtins/base.tq:329:2
    TNode<JSReceiver> t9 = UncheckedCast<JSReceiver>(TaggedToCallable(p_o, label_CastError_4));
    USE(t9);
    *_return_4 = t9;
    Goto(label_macro_end_518);
  }
  BIND(label_macro_end_518);
  return (*_return_4).value();
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::cast9ATJSArray(TNode<Object> p_o, Label* label_CastError_5) {
  TVARIABLE(JSArray, _return_5_impl);
  auto _return_5 = &_return_5_impl;
  USE(_return_5);
  Label label_macro_end_519_impl(this, {_return_5});
  Label* label_macro_end_519 = &label_macro_end_519_impl;
  USE(label_macro_end_519);
  // ../../src/builtins/base.tq:331:51
  {
    // ../../src/builtins/base.tq:332:2
    TNode<JSArray> t10 = UncheckedCast<JSArray>(TaggedToJSArray(p_o, label_CastError_5));
    USE(t10);
    *_return_5 = t10;
    Goto(label_macro_end_519);
  }
  BIND(label_macro_end_519);
  return (*_return_5).value();
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::cast12ATFixedArray(TNode<FixedArrayBase> p_o, Label* label_CastError_6) {
  TVARIABLE(FixedArray, _return_6_impl);
  auto _return_6 = &_return_6_impl;
  USE(_return_6);
  Label label_macro_end_520_impl(this, {_return_6});
  Label* label_macro_end_520 = &label_macro_end_520_impl;
  USE(label_macro_end_520);
  // ../../src/builtins/base.tq:335:65
  {
    // ../../src/builtins/base.tq:336:2
    TNode<FixedArray> t11 = UncheckedCast<FixedArray>(ConvertFixedArrayBaseToFixedArray(p_o, label_CastError_6));
    USE(t11);
    *_return_6 = t11;
    Goto(label_macro_end_520);
  }
  BIND(label_macro_end_520);
  return (*_return_6).value();
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::cast18ATFixedDoubleArray(TNode<FixedArrayBase> p_o, Label* label_CastError_7) {
  TVARIABLE(FixedDoubleArray, _return_7_impl);
  auto _return_7 = &_return_7_impl;
  USE(_return_7);
  Label label_macro_end_521_impl(this, {_return_7});
  Label* label_macro_end_521 = &label_macro_end_521_impl;
  USE(label_macro_end_521);
  // ../../src/builtins/base.tq:338:77
  {
    // ../../src/builtins/base.tq:339:2
    TNode<FixedDoubleArray> t12 = UncheckedCast<FixedDoubleArray>(ConvertFixedArrayBaseToFixedDoubleArray(p_o, label_CastError_7));
    USE(t12);
    *_return_7 = t12;
    Goto(label_macro_end_521);
  }
  BIND(label_macro_end_521);
  return (*_return_7).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_8_impl);
  auto _return_8 = &_return_8_impl;
  USE(_return_8);
  Label label_macro_end_522_impl(this, {_return_8});
  Label* label_macro_end_522 = &label_macro_end_522_impl;
  USE(label_macro_end_522);
  // ../../src/builtins/base.tq:376:51
  {
    // ../../src/builtins/base.tq:377:2
    TNode<IntPtrT> t13 = UncheckedCast<IntPtrT>(IntPtrConstant(p_i));
    USE(t13);
    *_return_8 = t13;
    Goto(label_macro_end_522);
  }
  BIND(label_macro_end_522);
  return (*_return_8).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint31(int31_t p_i) {
  TVARIABLE(Int32T, _return_9_impl);
  auto _return_9 = &_return_9_impl;
  USE(_return_9);
  Label label_macro_end_523_impl(this, {_return_9});
  Label* label_macro_end_523 = &label_macro_end_523_impl;
  USE(label_macro_end_523);
  // ../../src/builtins/base.tq:379:49
  {
    // ../../src/builtins/base.tq:380:2
    TNode<Int32T> t14 = UncheckedCast<Int32T>(Int32Constant(p_i));
    USE(t14);
    *_return_9 = t14;
    Goto(label_macro_end_523);
  }
  BIND(label_macro_end_523);
  return (*_return_9).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint32(int31_t p_i) {
  TVARIABLE(Int32T, _return_10_impl);
  auto _return_10 = &_return_10_impl;
  USE(_return_10);
  Label label_macro_end_524_impl(this, {_return_10});
  Label* label_macro_end_524 = &label_macro_end_524_impl;
  USE(label_macro_end_524);
  // ../../src/builtins/base.tq:382:49
  {
    // ../../src/builtins/base.tq:383:2
    TNode<Int32T> t15 = UncheckedCast<Int32T>(Int32Constant(p_i));
    USE(t15);
    *_return_10 = t15;
    Goto(label_macro_end_524);
  }
  BIND(label_macro_end_524);
  return (*_return_10).value();
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::from_constexpr8ATuint32(int31_t p_i) {
  TVARIABLE(Uint32T, _return_11_impl);
  auto _return_11 = &_return_11_impl;
  USE(_return_11);
  Label label_macro_end_525_impl(this, {_return_11});
  Label* label_macro_end_525 = &label_macro_end_525_impl;
  USE(label_macro_end_525);
  // ../../src/builtins/base.tq:385:51
  {
    // ../../src/builtins/base.tq:386:2
    TNode<Int32T> t16 = UncheckedCast<Int32T>(Int32Constant(p_i));
    USE(t16);
    TNode<Uint32T> t17 = UncheckedCast<Uint32T>(Unsigned(t16));
    USE(t17);
    *_return_11 = t17;
    Goto(label_macro_end_525);
  }
  BIND(label_macro_end_525);
  return (*_return_11).value();
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr9ATuintptr(int31_t p_i) {
  TVARIABLE(UintPtrT, _return_12_impl);
  auto _return_12 = &_return_12_impl;
  USE(_return_12);
  Label label_macro_end_526_impl(this, {_return_12});
  Label* label_macro_end_526 = &label_macro_end_526_impl;
  USE(label_macro_end_526);
  // ../../src/builtins/base.tq:388:53
  {
    // ../../src/builtins/base.tq:389:2
    TNode<Uint32T> t18 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(p_i));
    TNode<UintPtrT> t19 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(t18));
    USE(t19);
    *_return_12 = t19;
    Goto(label_macro_end_526);
  }
  BIND(label_macro_end_526);
  return (*_return_12).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::from_constexpr5ATSmi(int31_t p_i) {
  TVARIABLE(Smi, _return_13_impl);
  auto _return_13 = &_return_13_impl;
  USE(_return_13);
  Label label_macro_end_527_impl(this, {_return_13});
  Label* label_macro_end_527 = &label_macro_end_527_impl;
  USE(label_macro_end_527);
  // ../../src/builtins/base.tq:391:45
  {
    // ../../src/builtins/base.tq:392:2
    TNode<Smi> t20 = UncheckedCast<Smi>(SmiConstant(p_i));
    USE(t20);
    *_return_13 = t20;
    Goto(label_macro_end_527);
  }
  BIND(label_macro_end_527);
  return (*_return_13).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(int31_t p_i) {
  TVARIABLE(Number, _return_14_impl);
  auto _return_14 = &_return_14_impl;
  USE(_return_14);
  Label label_macro_end_528_impl(this, {_return_14});
  Label* label_macro_end_528 = &label_macro_end_528_impl;
  USE(label_macro_end_528);
  // ../../src/builtins/base.tq:394:51
  {
    // ../../src/builtins/base.tq:395:2
    TNode<Smi> t21 = UncheckedCast<Smi>(SmiConstant(p_i));
    USE(t21);
    *_return_14 = t21;
    Goto(label_macro_end_528);
  }
  BIND(label_macro_end_528);
  return (*_return_14).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::from_constexpr9ATfloat64(int31_t p_i) {
  TVARIABLE(Float64T, _return_15_impl);
  auto _return_15 = &_return_15_impl;
  USE(_return_15);
  Label label_macro_end_529_impl(this, {_return_15});
  Label* label_macro_end_529 = &label_macro_end_529_impl;
  USE(label_macro_end_529);
  // ../../src/builtins/base.tq:397:53
  {
    // ../../src/builtins/base.tq:398:2
    TNode<Float64T> t22 = UncheckedCast<Float64T>(Float64Constant(p_i));
    USE(t22);
    *_return_15 = t22;
    Goto(label_macro_end_529);
  }
  BIND(label_macro_end_529);
  return (*_return_15).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::from_constexpr8ATintptr(int32_t p_i) {
  TVARIABLE(IntPtrT, _return_16_impl);
  auto _return_16 = &_return_16_impl;
  USE(_return_16);
  Label label_macro_end_530_impl(this, {_return_16});
  Label* label_macro_end_530 = &label_macro_end_530_impl;
  USE(label_macro_end_530);
  // ../../src/builtins/base.tq:401:51
  {
    // ../../src/builtins/base.tq:402:2
    TNode<IntPtrT> t23 = UncheckedCast<IntPtrT>(IntPtrConstant(p_i));
    USE(t23);
    *_return_16 = t23;
    Goto(label_macro_end_530);
  }
  BIND(label_macro_end_530);
  return (*_return_16).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr7ATint32(int32_t p_i) {
  TVARIABLE(Int32T, _return_17_impl);
  auto _return_17 = &_return_17_impl;
  USE(_return_17);
  Label label_macro_end_531_impl(this, {_return_17});
  Label* label_macro_end_531 = &label_macro_end_531_impl;
  USE(label_macro_end_531);
  // ../../src/builtins/base.tq:404:49
  {
    // ../../src/builtins/base.tq:405:2
    TNode<Int32T> t24 = UncheckedCast<Int32T>(Int32Constant(p_i));
    USE(t24);
    *_return_17 = t24;
    Goto(label_macro_end_531);
  }
  BIND(label_macro_end_531);
  return (*_return_17).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(int32_t p_i) {
  TVARIABLE(Number, _return_18_impl);
  auto _return_18 = &_return_18_impl;
  USE(_return_18);
  Label label_macro_end_532_impl(this, {_return_18});
  Label* label_macro_end_532 = &label_macro_end_532_impl;
  USE(label_macro_end_532);
  // ../../src/builtins/base.tq:407:51
  {
    // ../../src/builtins/base.tq:408:2
    TNode<Number> t25 = UncheckedCast<Number>(NumberConstant(p_i));
    USE(t25);
    *_return_18 = t25;
    Goto(label_macro_end_532);
  }
  BIND(label_macro_end_532);
  return (*_return_18).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapNumber5ATSmi(double p_f) {
  TVARIABLE(Number, _return_19_impl);
  auto _return_19 = &_return_19_impl;
  USE(_return_19);
  Label label_macro_end_533_impl(this, {_return_19});
  Label* label_macro_end_533 = &label_macro_end_533_impl;
  USE(label_macro_end_533);
  // ../../src/builtins/base.tq:411:53
  {
    // ../../src/builtins/base.tq:412:2
    TNode<Number> t26 = UncheckedCast<Number>(NumberConstant(p_f));
    USE(t26);
    *_return_19 = t26;
    Goto(label_macro_end_533);
  }
  BIND(label_macro_end_533);
  return (*_return_19).value();
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::from_constexpr6ATbool(bool p_b) {
  TVARIABLE(BoolT, _return_20_impl);
  auto _return_20 = &_return_20_impl;
  USE(_return_20);
  Label label_macro_end_534_impl(this, {_return_20});
  Label* label_macro_end_534 = &label_macro_end_534_impl;
  USE(label_macro_end_534);
  // ../../src/builtins/base.tq:415:46
  {
    // ../../src/builtins/base.tq:416:2
    TNode<BoolT> t27 = UncheckedCast<BoolT>(BoolConstant(p_b));
    USE(t27);
    *_return_20 = t27;
    Goto(label_macro_end_534);
  }
  BIND(label_macro_end_534);
  return (*_return_20).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::from_constexpr14ATLanguageMode(LanguageMode p_b) {
  TVARIABLE(Smi, _return_21_impl);
  auto _return_21 = &_return_21_impl;
  USE(_return_21);
  Label label_macro_end_535_impl(this, {_return_21});
  Label* label_macro_end_535 = &label_macro_end_535_impl;
  USE(label_macro_end_535);
  // ../../src/builtins/base.tq:419:70
  {
    // ../../src/builtins/base.tq:420:2
    TNode<Smi> t28 = UncheckedCast<Smi>(LanguageModeConstant(p_b));
    USE(t28);
    *_return_21 = t28;
    Goto(label_macro_end_535);
  }
  BIND(label_macro_end_535);
  return (*_return_21).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::from_constexpr14ATElementsKind(ElementsKind p_e) {
  TVARIABLE(Int32T, _return_22_impl);
  auto _return_22 = &_return_22_impl;
  USE(_return_22);
  Label label_macro_end_536_impl(this, {_return_22});
  Label* label_macro_end_536 = &label_macro_end_536_impl;
  USE(label_macro_end_536);
  // ../../src/builtins/base.tq:423:70
  {
    // ../../src/builtins/base.tq:424:2
    TNode<Int32T> t29 = UncheckedCast<Int32T>(Int32Constant(p_e));
    USE(t29);
    *_return_22 = t29;
    Goto(label_macro_end_536);
  }
  BIND(label_macro_end_536);
  return (*_return_22).value();
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::from_constexpr8ATString(const char* p_s) {
  TVARIABLE(String, _return_23_impl);
  auto _return_23 = &_return_23_impl;
  USE(_return_23);
  Label label_macro_end_537_impl(this, {_return_23});
  Label* label_macro_end_537 = &label_macro_end_537_impl;
  USE(label_macro_end_537);
  // ../../src/builtins/base.tq:427:52
  {
    // ../../src/builtins/base.tq:428:2
    TNode<String> t30 = UncheckedCast<String>(StringConstant(p_s));
    USE(t30);
    *_return_23 = t30;
    Goto(label_macro_end_537);
  }
  BIND(label_macro_end_537);
  return (*_return_23).value();
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::from_constexpr22UT12ATHeapObject5ATSmi(const char* p_s) {
  TVARIABLE(Object, _return_24_impl);
  auto _return_24 = &_return_24_impl;
  USE(_return_24);
  Label label_macro_end_538_impl(this, {_return_24});
  Label* label_macro_end_538 = &label_macro_end_538_impl;
  USE(label_macro_end_538);
  // ../../src/builtins/base.tq:430:52
  {
    // ../../src/builtins/base.tq:431:2
    TNode<String> t31 = UncheckedCast<String>(StringConstant(p_s));
    USE(t31);
    *_return_24 = t31;
    Goto(label_macro_end_538);
  }
  BIND(label_macro_end_538);
  return (*_return_24).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Number, _return_25_impl);
  auto _return_25 = &_return_25_impl;
  USE(_return_25);
  Label label_macro_end_539_impl(this, {_return_25});
  Label* label_macro_end_539 = &label_macro_end_539_impl;
  USE(label_macro_end_539);
  // ../../src/builtins/base.tq:438:34
  {
    // ../../src/builtins/base.tq:439:2
    TNode<Number> t32 = UncheckedCast<Number>(ChangeInt32ToTagged(p_i));
    USE(t32);
    *_return_25 = t32;
    Goto(label_macro_end_539);
  }
  BIND(label_macro_end_539);
  return (*_return_25).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<Int32T> p_i) {
  TVARIABLE(IntPtrT, _return_26_impl);
  auto _return_26 = &_return_26_impl;
  USE(_return_26);
  Label label_macro_end_540_impl(this, {_return_26});
  Label* label_macro_end_540 = &label_macro_end_540_impl;
  USE(label_macro_end_540);
  // ../../src/builtins/base.tq:441:34
  {
    // ../../src/builtins/base.tq:442:2
    TNode<IntPtrT> t33 = UncheckedCast<IntPtrT>(ChangeInt32ToIntPtr(p_i));
    USE(t33);
    *_return_26 = t33;
    Goto(label_macro_end_540);
  }
  BIND(label_macro_end_540);
  return (*_return_26).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<Int32T> p_i) {
  TVARIABLE(Smi, _return_27_impl);
  auto _return_27 = &_return_27_impl;
  USE(_return_27);
  Label label_macro_end_541_impl(this, {_return_27});
  Label* label_macro_end_541 = &label_macro_end_541_impl;
  USE(label_macro_end_541);
  // ../../src/builtins/base.tq:444:28
  {
    // ../../src/builtins/base.tq:445:2
    TNode<Smi> t34 = UncheckedCast<Smi>(SmiFromInt32(p_i));
    USE(t34);
    *_return_27 = t34;
    Goto(label_macro_end_541);
  }
  BIND(label_macro_end_541);
  return (*_return_27).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Number, _return_28_impl);
  auto _return_28 = &_return_28_impl;
  USE(_return_28);
  Label label_macro_end_542_impl(this, {_return_28});
  Label* label_macro_end_542 = &label_macro_end_542_impl;
  USE(label_macro_end_542);
  // ../../src/builtins/base.tq:448:36
  {
    // ../../src/builtins/base.tq:449:2
    TNode<Number> t35 = UncheckedCast<Number>(ChangeUint32ToTagged(p_ui));
    USE(t35);
    *_return_28 = t35;
    Goto(label_macro_end_542);
  }
  BIND(label_macro_end_542);
  return (*_return_28).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<Uint32T> p_ui) {
  TVARIABLE(Smi, _return_29_impl);
  auto _return_29 = &_return_29_impl;
  USE(_return_29);
  Label label_macro_end_543_impl(this, {_return_29});
  Label* label_macro_end_543 = &label_macro_end_543_impl;
  USE(label_macro_end_543);
  // ../../src/builtins/base.tq:451:30
  {
    // ../../src/builtins/base.tq:452:2
    TNode<Int32T> t36 = UncheckedCast<Int32T>(Signed(p_ui));
    USE(t36);
    TNode<Smi> t37 = UncheckedCast<Smi>(SmiFromInt32(t36));
    USE(t37);
    *_return_29 = t37;
    Goto(label_macro_end_543);
  }
  BIND(label_macro_end_543);
  return (*_return_29).value();
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<Uint32T> p_ui) {
  TVARIABLE(UintPtrT, _return_30_impl);
  auto _return_30 = &_return_30_impl;
  USE(_return_30);
  Label label_macro_end_544_impl(this, {_return_30});
  Label* label_macro_end_544 = &label_macro_end_544_impl;
  USE(label_macro_end_544);
  // ../../src/builtins/base.tq:454:38
  {
    // ../../src/builtins/base.tq:455:2
    TNode<UintPtrT> t38 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(p_ui));
    USE(t38);
    *_return_30 = t38;
    Goto(label_macro_end_544);
  }
  BIND(label_macro_end_544);
  return (*_return_30).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::convert7ATint32(TNode<IntPtrT> p_i) {
  TVARIABLE(Int32T, _return_31_impl);
  auto _return_31 = &_return_31_impl;
  USE(_return_31);
  Label label_macro_end_545_impl(this, {_return_31});
  Label* label_macro_end_545 = &label_macro_end_545_impl;
  USE(label_macro_end_545);
  // ../../src/builtins/base.tq:458:33
  {
    // ../../src/builtins/base.tq:459:2
    TNode<Int32T> t39 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(p_i));
    USE(t39);
    *_return_31 = t39;
    Goto(label_macro_end_545);
  }
  BIND(label_macro_end_545);
  return (*_return_31).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(TNode<IntPtrT> p_i) {
  TVARIABLE(Smi, _return_32_impl);
  auto _return_32 = &_return_32_impl;
  USE(_return_32);
  Label label_macro_end_546_impl(this, {_return_32});
  Label* label_macro_end_546 = &label_macro_end_546_impl;
  USE(label_macro_end_546);
  // ../../src/builtins/base.tq:461:29
  {
    // ../../src/builtins/base.tq:462:2
    TNode<Smi> t40 = UncheckedCast<Smi>(SmiTag(p_i));
    USE(t40);
    *_return_32 = t40;
    Goto(label_macro_end_546);
  }
  BIND(label_macro_end_546);
  return (*_return_32).value();
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::convert8ATuint32(TNode<UintPtrT> p_ui) {
  TVARIABLE(Uint32T, _return_33_impl);
  auto _return_33 = &_return_33_impl;
  USE(_return_33);
  Label label_macro_end_547_impl(this, {_return_33});
  Label* label_macro_end_547 = &label_macro_end_547_impl;
  USE(label_macro_end_547);
  // ../../src/builtins/base.tq:465:37
  {
    // ../../src/builtins/base.tq:466:2
    TNode<IntPtrT> t41 = UncheckedCast<IntPtrT>(Signed(p_ui));
    USE(t41);
    TNode<Int32T> t42 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(t41));
    USE(t42);
    TNode<Uint32T> t43 = UncheckedCast<Uint32T>(Unsigned(t42));
    USE(t43);
    *_return_33 = t43;
    Goto(label_macro_end_547);
  }
  BIND(label_macro_end_547);
  return (*_return_33).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<Smi> p_s) {
  TVARIABLE(IntPtrT, _return_34_impl);
  auto _return_34 = &_return_34_impl;
  USE(_return_34);
  Label label_macro_end_548_impl(this, {_return_34});
  Label* label_macro_end_548 = &label_macro_end_548_impl;
  USE(label_macro_end_548);
  // ../../src/builtins/base.tq:469:32
  {
    // ../../src/builtins/base.tq:470:2
    TNode<IntPtrT> t44 = UncheckedCast<IntPtrT>(SmiUntag(p_s));
    USE(t44);
    *_return_34 = t44;
    Goto(label_macro_end_548);
  }
  BIND(label_macro_end_548);
  return (*_return_34).value();
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::convert7ATint32(TNode<Smi> p_s) {
  TVARIABLE(Int32T, _return_35_impl);
  auto _return_35 = &_return_35_impl;
  USE(_return_35);
  Label label_macro_end_549_impl(this, {_return_35});
  Label* label_macro_end_549 = &label_macro_end_549_impl;
  USE(label_macro_end_549);
  // ../../src/builtins/base.tq:472:30
  {
    // ../../src/builtins/base.tq:473:2
    TNode<Int32T> t45 = UncheckedCast<Int32T>(SmiToInt32(p_s));
    USE(t45);
    *_return_35 = t45;
    Goto(label_macro_end_549);
  }
  BIND(label_macro_end_549);
  return (*_return_35).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<HeapNumber> p_h) {
  TVARIABLE(Float64T, _return_36_impl);
  auto _return_36 = &_return_36_impl;
  USE(_return_36);
  Label label_macro_end_550_impl(this, {_return_36});
  Label* label_macro_end_550 = &label_macro_end_550_impl;
  USE(label_macro_end_550);
  // ../../src/builtins/base.tq:476:41
  {
    // ../../src/builtins/base.tq:477:2
    TNode<Float64T> t46 = UncheckedCast<Float64T>(LoadHeapNumberValue(p_h));
    USE(t46);
    *_return_36 = t46;
    Goto(label_macro_end_550);
  }
  BIND(label_macro_end_550);
  return (*_return_36).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<Number> p_n) {
  TVARIABLE(Float64T, _return_37_impl);
  auto _return_37 = &_return_37_impl;
  USE(_return_37);
  Label label_macro_end_551_impl(this, {_return_37});
  Label* label_macro_end_551 = &label_macro_end_551_impl;
  USE(label_macro_end_551);
  // ../../src/builtins/base.tq:480:37
  {
    // ../../src/builtins/base.tq:481:2
    TNode<Float64T> t47 = UncheckedCast<Float64T>(ChangeNumberToFloat64(p_n));
    USE(t47);
    *_return_37 = t47;
    Goto(label_macro_end_551);
  }
  BIND(label_macro_end_551);
  return (*_return_37).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(TNode<Float32T> p_f) {
  TVARIABLE(Float64T, _return_38_impl);
  auto _return_38 = &_return_38_impl;
  USE(_return_38);
  Label label_macro_end_552_impl(this, {_return_38});
  Label* label_macro_end_552 = &label_macro_end_552_impl;
  USE(label_macro_end_552);
  // ../../src/builtins/base.tq:484:38
  {
    // ../../src/builtins/base.tq:485:2
    TNode<Float64T> t48 = UncheckedCast<Float64T>(ChangeFloat32ToFloat64(p_f));
    USE(t48);
    *_return_38 = t48;
    Goto(label_macro_end_552);
  }
  BIND(label_macro_end_552);
  return (*_return_38).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(TNode<Float64T> p_d) {
  TVARIABLE(Number, _return_39_impl);
  auto _return_39 = &_return_39_impl;
  USE(_return_39);
  Label label_macro_end_553_impl(this, {_return_39});
  Label* label_macro_end_553 = &label_macro_end_553_impl;
  USE(label_macro_end_553);
  // ../../src/builtins/base.tq:488:36
  {
    // ../../src/builtins/base.tq:489:2
    TNode<HeapNumber> t49 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(p_d));
    USE(t49);
    *_return_39 = t49;
    Goto(label_macro_end_553);
  }
  BIND(label_macro_end_553);
  return (*_return_39).value();
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(UintPtrT, _return_40_impl);
  auto _return_40 = &_return_40_impl;
  USE(_return_40);
  Label label_macro_end_554_impl(this, {_return_40});
  Label* label_macro_end_554 = &label_macro_end_554_impl;
  USE(label_macro_end_554);
  // ../../src/builtins/base.tq:492:37
  {
    // ../../src/builtins/base.tq:493:2
    TNode<UintPtrT> t50 = UncheckedCast<UintPtrT>(Unsigned(p_r));
    USE(t50);
    *_return_40 = t50;
    Goto(label_macro_end_554);
  }
  BIND(label_macro_end_554);
  return (*_return_40).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(TNode<RawPtrT> p_r) {
  TVARIABLE(IntPtrT, _return_41_impl);
  auto _return_41 = &_return_41_impl;
  USE(_return_41);
  Label label_macro_end_555_impl(this, {_return_41});
  Label* label_macro_end_555 = &label_macro_end_555_impl;
  USE(label_macro_end_555);
  // ../../src/builtins/base.tq:495:35
  {
    // ../../src/builtins/base.tq:496:2
    TNode<IntPtrT> t51 = UncheckedCast<IntPtrT>(Signed(p_r));
    USE(t51);
    *_return_41 = t51;
    Goto(label_macro_end_555);
  }
  BIND(label_macro_end_555);
  return (*_return_41).value();
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapNumber(TNode<Number> p_n) {
  TVARIABLE(HeapNumber, _return_42_impl);
  auto _return_42 = &_return_42_impl;
  USE(_return_42);
  Label label_macro_end_556_impl(this, {_return_42});
  Label* label_macro_end_556 = &label_macro_end_556_impl;
  USE(label_macro_end_556);
  // ../../src/builtins/base.tq:516:47
  {
    // ../../src/builtins/base.tq:517:2
    TNode<HeapNumber> t52 = UncheckedCast<HeapNumber>(UnsafeCastNumberToHeapNumber(p_n));
    USE(t52);
    *_return_42 = t52;
    Goto(label_macro_end_556);
  }
  BIND(label_macro_end_556);
  return (*_return_42).value();
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATFixedArray(TNode<Object> p_o) {
  TVARIABLE(FixedArray, _return_43_impl);
  auto _return_43 = &_return_43_impl;
  USE(_return_43);
  Label label_macro_end_557_impl(this, {_return_43});
  Label* label_macro_end_557 = &label_macro_end_557_impl;
  USE(label_macro_end_557);
  // ../../src/builtins/base.tq:520:47
  {
    // ../../src/builtins/base.tq:521:2
    TNode<FixedArray> t53 = UncheckedCast<FixedArray>(UnsafeCastObjectToFixedArray(p_o));
    USE(t53);
    *_return_43 = t53;
    Goto(label_macro_end_557);
  }
  BIND(label_macro_end_557);
  return (*_return_43).value();
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::unsafe_cast18ATFixedDoubleArray(TNode<Object> p_o) {
  TVARIABLE(FixedDoubleArray, _return_44_impl);
  auto _return_44 = &_return_44_impl;
  USE(_return_44);
  Label label_macro_end_558_impl(this, {_return_44});
  Label* label_macro_end_558 = &label_macro_end_558_impl;
  USE(label_macro_end_558);
  // ../../src/builtins/base.tq:523:59
  {
    // ../../src/builtins/base.tq:524:2
    TNode<FixedDoubleArray> t54 = UncheckedCast<FixedDoubleArray>(UnsafeCastObjectToFixedDoubleArray(p_o));
    USE(t54);
    *_return_44 = t54;
    Goto(label_macro_end_558);
  }
  BIND(label_macro_end_558);
  return (*_return_44).value();
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapNumber(TNode<Object> p_o) {
  TVARIABLE(HeapNumber, _return_45_impl);
  auto _return_45 = &_return_45_impl;
  USE(_return_45);
  Label label_macro_end_559_impl(this, {_return_45});
  Label* label_macro_end_559 = &label_macro_end_559_impl;
  USE(label_macro_end_559);
  // ../../src/builtins/base.tq:526:47
  {
    // ../../src/builtins/base.tq:527:2
    TNode<HeapNumber> t55 = UncheckedCast<HeapNumber>(UnsafeCastObjectToHeapNumber(p_o));
    USE(t55);
    *_return_45 = t55;
    Goto(label_macro_end_559);
  }
  BIND(label_macro_end_559);
  return (*_return_45).value();
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::unsafe_cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_46_impl);
  auto _return_46 = &_return_46_impl;
  USE(_return_46);
  Label label_macro_end_560_impl(this, {_return_46});
  Label* label_macro_end_560 = &label_macro_end_560_impl;
  USE(label_macro_end_560);
  // ../../src/builtins/base.tq:529:43
  {
    // ../../src/builtins/base.tq:530:2
    TNode<JSReceiver> t56 = UncheckedCast<JSReceiver>(UnsafeCastObjectToCallable(p_o));
    USE(t56);
    *_return_46 = t56;
    Goto(label_macro_end_560);
  }
  BIND(label_macro_end_560);
  return (*_return_46).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::unsafe_cast5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Smi, _return_47_impl);
  auto _return_47 = &_return_47_impl;
  USE(_return_47);
  Label label_macro_end_561_impl(this, {_return_47});
  Label* label_macro_end_561 = &label_macro_end_561_impl;
  USE(label_macro_end_561);
  // ../../src/builtins/base.tq:532:33
  {
    // ../../src/builtins/base.tq:533:2
    TNode<Smi> t57 = UncheckedCast<Smi>(UnsafeCastObjectToSmi(p_o));
    USE(t57);
    *_return_47 = t57;
    Goto(label_macro_end_561);
  }
  BIND(label_macro_end_561);
  return (*_return_47).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::unsafe_cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Number, _return_48_impl);
  auto _return_48 = &_return_48_impl;
  USE(_return_48);
  Label label_macro_end_562_impl(this, {_return_48});
  Label* label_macro_end_562 = &label_macro_end_562_impl;
  USE(label_macro_end_562);
  // ../../src/builtins/base.tq:535:39
  {
    // ../../src/builtins/base.tq:536:2
    TNode<Number> t58 = UncheckedCast<Number>(UnsafeCastObjectToNumber(p_o));
    USE(t58);
    *_return_48 = t58;
    Goto(label_macro_end_562);
  }
  BIND(label_macro_end_562);
  return (*_return_48).value();
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATHeapObject(TNode<Object> p_o) {
  TVARIABLE(HeapObject, _return_49_impl);
  auto _return_49 = &_return_49_impl;
  USE(_return_49);
  Label label_macro_end_563_impl(this, {_return_49});
  Label* label_macro_end_563 = &label_macro_end_563_impl;
  USE(label_macro_end_563);
  // ../../src/builtins/base.tq:538:47
  {
    // ../../src/builtins/base.tq:539:2
    TNode<HeapObject> t59 = UncheckedCast<HeapObject>(UnsafeCastObjectToHeapObject(p_o));
    USE(t59);
    *_return_49 = t59;
    Goto(label_macro_end_563);
  }
  BIND(label_macro_end_563);
  return (*_return_49).value();
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::unsafe_cast9ATJSArray(TNode<Object> p_o) {
  TVARIABLE(JSArray, _return_50_impl);
  auto _return_50 = &_return_50_impl;
  USE(_return_50);
  Label label_macro_end_564_impl(this, {_return_50});
  Label* label_macro_end_564 = &label_macro_end_564_impl;
  USE(label_macro_end_564);
  // ../../src/builtins/base.tq:541:41
  {
    // ../../src/builtins/base.tq:542:2
    TNode<JSArray> t60 = UncheckedCast<JSArray>(UnsafeCastObjectToJSArray(p_o));
    USE(t60);
    *_return_50 = t60;
    Goto(label_macro_end_564);
  }
  BIND(label_macro_end_564);
  return (*_return_50).value();
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::unsafe_cast21ATFixedTypedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedTypedArrayBase, _return_51_impl);
  auto _return_51 = &_return_51_impl;
  USE(_return_51);
  Label label_macro_end_565_impl(this, {_return_51});
  Label* label_macro_end_565 = &label_macro_end_565_impl;
  USE(label_macro_end_565);
  // ../../src/builtins/base.tq:544:65
  {
    // ../../src/builtins/base.tq:545:2
    TNode<FixedTypedArrayBase> t61 = UncheckedCast<FixedTypedArrayBase>(UnsafeCastObjectToFixedTypedArrayBase(p_o));
    USE(t61);
    *_return_51 = t61;
    Goto(label_macro_end_565);
  }
  BIND(label_macro_end_565);
  return (*_return_51).value();
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::unsafe_cast18ATNumberDictionary(TNode<Object> p_o) {
  TVARIABLE(NumberDictionary, _return_52_impl);
  auto _return_52 = &_return_52_impl;
  USE(_return_52);
  Label label_macro_end_566_impl(this, {_return_52});
  Label* label_macro_end_566 = &label_macro_end_566_impl;
  USE(label_macro_end_566);
  // ../../src/builtins/base.tq:547:59
  {
    // ../../src/builtins/base.tq:548:2
    TNode<NumberDictionary> t62 = UncheckedCast<NumberDictionary>(UnsafeCastObjectToNumberDictionary(p_o));
    USE(t62);
    *_return_52 = t62;
    Goto(label_macro_end_566);
  }
  BIND(label_macro_end_566);
  return (*_return_52).value();
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::unsafe_cast12ATJSReceiver(TNode<Object> p_o) {
  TVARIABLE(JSReceiver, _return_53_impl);
  auto _return_53 = &_return_53_impl;
  USE(_return_53);
  Label label_macro_end_567_impl(this, {_return_53});
  Label* label_macro_end_567 = &label_macro_end_567_impl;
  USE(label_macro_end_567);
  // ../../src/builtins/base.tq:550:47
  {
    // ../../src/builtins/base.tq:551:2
    TNode<JSReceiver> t63 = UncheckedCast<JSReceiver>(UnsafeCastObjectToJSReceiver(p_o));
    USE(t63);
    *_return_53 = t63;
    Goto(label_macro_end_567);
  }
  BIND(label_macro_end_567);
  return (*_return_53).value();
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::unsafe_cast10ATJSObject(TNode<Object> p_o) {
  TVARIABLE(JSObject, _return_54_impl);
  auto _return_54 = &_return_54_impl;
  USE(_return_54);
  Label label_macro_end_568_impl(this, {_return_54});
  Label* label_macro_end_568 = &label_macro_end_568_impl;
  USE(label_macro_end_568);
  // ../../src/builtins/base.tq:553:43
  {
    // ../../src/builtins/base.tq:554:2
    TNode<JSObject> t64 = UncheckedCast<JSObject>(UnsafeCastObjectToJSObject(p_o));
    USE(t64);
    *_return_54 = t64;
    Goto(label_macro_end_568);
  }
  BIND(label_macro_end_568);
  return (*_return_54).value();
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::unsafe_cast5ATMap(TNode<Object> p_o) {
  TVARIABLE(Map, _return_55_impl);
  auto _return_55 = &_return_55_impl;
  USE(_return_55);
  Label label_macro_end_569_impl(this, {_return_55});
  Label* label_macro_end_569 = &label_macro_end_569_impl;
  USE(label_macro_end_569);
  // ../../src/builtins/base.tq:556:33
  {
    // ../../src/builtins/base.tq:557:2
    TNode<Map> t65 = UncheckedCast<Map>(UnsafeCastObjectToMap(p_o));
    USE(t65);
    *_return_55 = t65;
    Goto(label_macro_end_569);
  }
  BIND(label_macro_end_569);
  return (*_return_55).value();
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::unsafe_cast16ATFixedArrayBase(TNode<Object> p_o) {
  TVARIABLE(FixedArrayBase, _return_56_impl);
  auto _return_56 = &_return_56_impl;
  USE(_return_56);
  Label label_macro_end_570_impl(this, {_return_56});
  Label* label_macro_end_570 = &label_macro_end_570_impl;
  USE(label_macro_end_570);
  // ../../src/builtins/base.tq:559:55
  {
    // ../../src/builtins/base.tq:560:2
    TNode<FixedArrayBase> t66 = UncheckedCast<FixedArrayBase>(UnsafeCastObjectToFixedArrayBase(p_o));
    USE(t66);
    *_return_56 = t66;
    Goto(label_macro_end_570);
  }
  BIND(label_macro_end_570);
  return (*_return_56).value();
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::kCOWMap() {
  TNode<Object> t67 = UncheckedCast<Object>(LoadRoot(Heap::kFixedCOWArrayMapRootIndex));
  USE(t67);
  TNode<Map> t68 = UncheckedCast<Map>(unsafe_cast5ATMap(t67));
  USE(t68);
  return t68;
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::kEmptyFixedArray() {
  TNode<Object> t69 = UncheckedCast<Object>(LoadRoot(Heap::kEmptyFixedArrayRootIndex));
  USE(t69);
  TNode<FixedArrayBase> t70 = UncheckedCast<FixedArrayBase>(unsafe_cast16ATFixedArrayBase(t69));
  USE(t70);
  return t70;
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayElementWithSmiIndex(TNode<FixedDoubleArray> p_array, TNode<Smi> p_index, TNode<Float64T> p_value) {
  Label label_macro_end_571_impl(this, {});
  Label* label_macro_end_571 = &label_macro_end_571_impl;
  USE(label_macro_end_571);
  // ../../src/builtins/base.tq:615:57
  {
    // ../../src/builtins/base.tq:616:2
    StoreFixedDoubleArrayElement(p_array, p_index, p_value, SMI_PARAMETERS);
  }
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole12ATFixedArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_8) {
  TVARIABLE(Object, _return_57_impl);
  auto _return_57 = &_return_57_impl;
  USE(_return_57);
  Label label_macro_end_572_impl(this, {_return_57});
  Label* label_macro_end_572 = &label_macro_end_572_impl;
  USE(label_macro_end_572);
  // ../../src/builtins/base.tq:657:14
  {
    // ../../src/builtins/base.tq:658:2
    {
      Label label_try_done_449_573_impl(this);
      Label* label_try_done_449_573 = &label_try_done_449_573_impl;
      USE(label_try_done_449_573);
      Label label_Unexpected_9_impl(this);
      Label* label_Unexpected_9 = &label_Unexpected_9_impl;
      USE(label_Unexpected_9);
      Label label_try_begin_450_574_impl(this);
      Label* label_try_begin_450_574 = &label_try_begin_450_574_impl;
      USE(label_try_begin_450_574);
      Goto(label_try_begin_450_574);
      if (label_try_begin_450_574->is_used())
      {
        BIND(label_try_begin_450_574);
        // ../../src/builtins/base.tq:658:6
        {
          // ../../src/builtins/base.tq:659:4
          TNode<FixedArrayBase> t71 = UncheckedCast<FixedArrayBase>(LoadElements(p_a));
          TNode<FixedArray> t72 = UncheckedCast<FixedArray>(cast12ATFixedArray(t71, label_Unexpected_9));
          USE(t72);
          TVARIABLE(FixedArray, elements_58_impl);
          auto elements_58 = &elements_58_impl;
          USE(elements_58);
          *elements_58 = t72;
          // ../../src/builtins/base.tq:661:4
          TNode<Object> t73 = UncheckedCast<Object>(LoadFixedArrayElement((*elements_58).value(), p_index));
          TVARIABLE(Object, e_59_impl);
          auto e_59 = &e_59_impl;
          USE(e_59);
          *e_59 = t73;
          // ../../src/builtins/base.tq:662:4
          {
            Label label__True_10_impl(this);
            Label* label__True_10 = &label__True_10_impl;
            USE(label__True_10);
            Label label__False_11_impl(this, {});
            Label* label__False_11 = &label__False_11_impl;
            USE(label__False_11);
            TNode<BoolT> t74 = UncheckedCast<BoolT>(WordEqual((*e_59).value(), Hole()));
            USE(t74);
            Branch(t74, label__True_10, label__False_11);
            if (label__True_10->is_used())
            {
              BIND(label__True_10);
              // ../../src/builtins/base.tq:662:19
              {
                // ../../src/builtins/base.tq:663:6
                Goto(label_IfHole_8);
              }
            }
            BIND(label__False_11);
          }
          // ../../src/builtins/base.tq:665:4
          *_return_57 = (*e_59).value();
          Goto(label_macro_end_572);
        }
      }
      if (label_Unexpected_9->is_used())
      {
        BIND(label_Unexpected_9);
        // ../../src/builtins/base.tq:667:19
        {
          // ../../src/builtins/base.tq:668:4
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_572);
  return (*_return_57).value();
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole18ATFixedDoubleArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_12) {
  TVARIABLE(Object, _return_60_impl);
  auto _return_60 = &_return_60_impl;
  USE(_return_60);
  Label label_macro_end_575_impl(this, {_return_60});
  Label* label_macro_end_575 = &label_macro_end_575_impl;
  USE(label_macro_end_575);
  // ../../src/builtins/base.tq:673:14
  {
    // ../../src/builtins/base.tq:674:2
    {
      Label label_try_done_451_576_impl(this);
      Label* label_try_done_451_576 = &label_try_done_451_576_impl;
      USE(label_try_done_451_576);
      Label label_Unexpected_13_impl(this);
      Label* label_Unexpected_13 = &label_Unexpected_13_impl;
      USE(label_Unexpected_13);
      Label label_try_begin_452_577_impl(this);
      Label* label_try_begin_452_577 = &label_try_begin_452_577_impl;
      USE(label_try_begin_452_577);
      Goto(label_try_begin_452_577);
      if (label_try_begin_452_577->is_used())
      {
        BIND(label_try_begin_452_577);
        // ../../src/builtins/base.tq:674:6
        {
          // ../../src/builtins/base.tq:675:4
          TNode<FixedArrayBase> t75 = UncheckedCast<FixedArrayBase>(LoadElements(p_a));
          TNode<FixedDoubleArray> t76 = UncheckedCast<FixedDoubleArray>(cast18ATFixedDoubleArray(t75, label_Unexpected_13));
          USE(t76);
          TVARIABLE(FixedDoubleArray, elements_61_impl);
          auto elements_61 = &elements_61_impl;
          USE(elements_61);
          *elements_61 = t76;
          // ../../src/builtins/base.tq:677:4
          TNode<Float64T> t77 = UncheckedCast<Float64T>(LoadDoubleWithHoleCheck((*elements_61).value(), p_index, label_IfHole_12));
          USE(t77);
          TVARIABLE(Float64T, e_62_impl);
          auto e_62 = &e_62_impl;
          USE(e_62);
          *e_62 = t77;
          // ../../src/builtins/base.tq:678:4
          TNode<HeapNumber> t78 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue((*e_62).value()));
          USE(t78);
          *_return_60 = t78;
          Goto(label_macro_end_575);
        }
      }
      if (label_Unexpected_13->is_used())
      {
        BIND(label_Unexpected_13);
        // ../../src/builtins/base.tq:680:19
        {
          // ../../src/builtins/base.tq:681:4
          Unreachable();
        }
      }
    }
  }
  BIND(label_macro_end_575);
  return (*_return_60).value();
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::HasPropertyObject(TNode<Object> p_o, TNode<Object> p_p, TNode<Context> p_c, HasPropertyLookupMode p_f) {
  TVARIABLE(Oddball, _return_63_impl);
  auto _return_63 = &_return_63_impl;
  USE(_return_63);
  Label label_macro_end_578_impl(this, {_return_63});
  Label* label_macro_end_578 = &label_macro_end_578_impl;
  USE(label_macro_end_578);
  // ../../src/builtins/base.tq:687:49
  {
    // ../../src/builtins/base.tq:688:2
    {
      Label label_try_done_453_579_impl(this);
      Label* label_try_done_453_579 = &label_try_done_453_579_impl;
      USE(label_try_done_453_579);
      Label label_CastError_14_impl(this);
      Label* label_CastError_14 = &label_CastError_14_impl;
      USE(label_CastError_14);
      Label label_try_begin_454_580_impl(this);
      Label* label_try_begin_454_580 = &label_try_begin_454_580_impl;
      USE(label_try_begin_454_580);
      Goto(label_try_begin_454_580);
      if (label_try_begin_454_580->is_used())
      {
        BIND(label_try_begin_454_580);
        // ../../src/builtins/base.tq:688:6
        {
          // ../../src/builtins/base.tq:689:4
          TNode<HeapObject> t79 = UncheckedCast<HeapObject>(cast12ATHeapObject(p_o, label_CastError_14));
          USE(t79);
          TNode<Oddball> t80 = UncheckedCast<Oddball>(HasProperty(t79, p_p, p_c, p_f));
          USE(t80);
          *_return_63 = t80;
          Goto(label_macro_end_578);
        }
      }
      if (label_CastError_14->is_used())
      {
        BIND(label_CastError_14);
        // ../../src/builtins/base.tq:691:18
        {
          // ../../src/builtins/base.tq:692:4
          *_return_63 = False();
          Goto(label_macro_end_578);
        }
      }
    }
  }
  BIND(label_macro_end_578);
  return (*_return_63).value();
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::NumberIsNaN(TNode<Number> p_number) {
  TVARIABLE(BoolT, _return_64_impl);
  auto _return_64 = &_return_64_impl;
  USE(_return_64);
  Label label_macro_end_581_impl(this, {_return_64});
  Label* label_macro_end_581 = &label_macro_end_581_impl;
  USE(label_macro_end_581);
  // ../../src/builtins/base.tq:706:40
  {
    // ../../src/builtins/base.tq:707:2
    {
      Label label__True_15_impl(this);
      Label* label__True_15 = &label__True_15_impl;
      USE(label__True_15);
      Label label__False_16_impl(this, {});
      Label* label__False_16 = &label__False_16_impl;
      USE(label__False_16);
      TNode<BoolT> t81 = UncheckedCast<BoolT>(TaggedIsSmi(p_number));
      USE(t81);
      Branch(t81, label__True_15, label__False_16);
      if (label__True_15->is_used())
      {
        BIND(label__True_15);
        // ../../src/builtins/base.tq:707:27
        TNode<BoolT> t82 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
        *_return_64 = t82;
        Goto(label_macro_end_581);
      }
      BIND(label__False_16);
    }
    // ../../src/builtins/base.tq:709:2
    TNode<HeapNumber> t83 = UncheckedCast<HeapNumber>(unsafe_cast12ATHeapNumber(p_number));
    USE(t83);
    TNode<Float64T> t84 = UncheckedCast<Float64T>(convert9ATfloat64(t83));
    USE(t84);
    TVARIABLE(Float64T, value_65_impl);
    auto value_65 = &value_65_impl;
    USE(value_65);
    *value_65 = t84;
    // ../../src/builtins/base.tq:710:2
    TNode<BoolT> t85 = UncheckedCast<BoolT>(Float64NotEqual((*value_65).value(), (*value_65).value()));
    USE(t85);
    *_return_64 = t85;
    Goto(label_macro_end_581);
  }
  BIND(label_macro_end_581);
  return (*_return_64).value();
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ToBoolean(TNode<Object> p_obj) {
  TVARIABLE(BoolT, _return_66_impl);
  auto _return_66 = &_return_66_impl;
  USE(_return_66);
  Label label_macro_end_582_impl(this, {_return_66});
  Label* label_macro_end_582 = &label_macro_end_582_impl;
  USE(label_macro_end_582);
  // ../../src/builtins/base.tq:715:35
  {
    // ../../src/builtins/base.tq:716:2
    {
      Label label__True_17_impl(this);
      Label* label__True_17 = &label__True_17_impl;
      USE(label__True_17);
      Label label__False_18_impl(this);
      Label* label__False_18 = &label__False_18_impl;
      USE(label__False_18);
      Label label_if_done_label_455_583_impl(this, {});
      Label* label_if_done_label_455_583 = &label_if_done_label_455_583_impl;
      USE(label_if_done_label_455_583);
      BranchIfToBooleanIsTrue(p_obj, label__True_17, label__False_18);
      if (label__True_17->is_used())
      {
        BIND(label__True_17);
        // ../../src/builtins/base.tq:716:36
        {
          // ../../src/builtins/base.tq:717:4
          TNode<BoolT> t86 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
          *_return_66 = t86;
          Goto(label_macro_end_582);
        }
      }
      if (label__False_18->is_used())
      {
        BIND(label__False_18);
        // ../../src/builtins/base.tq:718:9
        {
          // ../../src/builtins/base.tq:719:4
          TNode<BoolT> t87 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
          *_return_66 = t87;
          Goto(label_macro_end_582);
        }
      }
    }
  }
  BIND(label_macro_end_582);
  return (*_return_66).value();
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::convert9ATfloat64(int31_t p_i) {
  TVARIABLE(Float64T, _return_422_impl);
  auto _return_422 = &_return_422_impl;
  USE(_return_422);
  Label label_macro_end_803_impl(this, {_return_422});
  Label* label_macro_end_803 = &label_macro_end_803_impl;
  USE(label_macro_end_803);
  // ../../src/builtins/base.tq:434:47
  {
    // ../../src/builtins/base.tq:435:2
    TNode<Float64T> t1876 = UncheckedCast<Float64T>(from_constexpr9ATfloat64(p_i));
    *_return_422 = t1876;
    Goto(label_macro_end_803);
  }
  BIND(label_macro_end_803);
  return (*_return_422).value();
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::convert5ATSmi(int31_t p_i) {
  TVARIABLE(Smi, _return_423_impl);
  auto _return_423 = &_return_423_impl;
  USE(_return_423);
  Label label_macro_end_804_impl(this, {_return_423});
  Label* label_macro_end_804 = &label_macro_end_804_impl;
  USE(label_macro_end_804);
  // ../../src/builtins/base.tq:434:47
  {
    // ../../src/builtins/base.tq:435:2
    TNode<Smi> t1877 = UncheckedCast<Smi>(from_constexpr5ATSmi(p_i));
    *_return_423 = t1877;
    Goto(label_macro_end_804);
  }
  BIND(label_macro_end_804);
  return (*_return_423).value();
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::convert22UT12ATHeapNumber5ATSmi(int31_t p_i) {
  TVARIABLE(Number, _return_443_impl);
  auto _return_443 = &_return_443_impl;
  USE(_return_443);
  Label label_macro_end_819_impl(this, {_return_443});
  Label* label_macro_end_819 = &label_macro_end_819_impl;
  USE(label_macro_end_819);
  // ../../src/builtins/base.tq:434:47
  {
    // ../../src/builtins/base.tq:435:2
    TNode<Number> t1970 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(p_i));
    *_return_443 = t1970;
    Goto(label_macro_end_819);
  }
  BIND(label_macro_end_819);
  return (*_return_443).value();
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::convert9ATuintptr(int31_t p_i) {
  TVARIABLE(UintPtrT, _return_444_impl);
  auto _return_444 = &_return_444_impl;
  USE(_return_444);
  Label label_macro_end_820_impl(this, {_return_444});
  Label* label_macro_end_820 = &label_macro_end_820_impl;
  USE(label_macro_end_820);
  // ../../src/builtins/base.tq:434:47
  {
    // ../../src/builtins/base.tq:435:2
    TNode<UintPtrT> t1971 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(p_i));
    *_return_444 = t1971;
    Goto(label_macro_end_820);
  }
  BIND(label_macro_end_820);
  return (*_return_444).value();
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::convert8ATintptr(int31_t p_i) {
  TVARIABLE(IntPtrT, _return_445_impl);
  auto _return_445 = &_return_445_impl;
  USE(_return_445);
  Label label_macro_end_821_impl(this, {_return_445});
  Label* label_macro_end_821 = &label_macro_end_821_impl;
  USE(label_macro_end_821);
  // ../../src/builtins/base.tq:434:47
  {
    // ../../src/builtins/base.tq:435:2
    TNode<IntPtrT> t1972 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(p_i));
    *_return_445 = t1972;
    Goto(label_macro_end_821);
  }
  BIND(label_macro_end_821);
  return (*_return_445).value();
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::convert8ATuint32(int31_t p_i) {
  TVARIABLE(Uint32T, _return_446_impl);
  auto _return_446 = &_return_446_impl;
  USE(_return_446);
  Label label_macro_end_822_impl(this, {_return_446});
  Label* label_macro_end_822 = &label_macro_end_822_impl;
  USE(label_macro_end_822);
  // ../../src/builtins/base.tq:434:47
  {
    // ../../src/builtins/base.tq:435:2
    TNode<Uint32T> t1973 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(p_i));
    *_return_446 = t1973;
    Goto(label_macro_end_822);
  }
  BIND(label_macro_end_822);
  return (*_return_446).value();
}

}  // namepsace internal
}  // namespace v8

