#include "src/torque-assembler.h"
#include "src/objects/arguments.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-base-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Hole() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Oddball>(TheHoleConstant());
return TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Null() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Oddball>(NullConstant());
return TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Undefined() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Oddball>(UndefinedConstant());
return TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::True() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Oddball>(TrueConstant());
return TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::False() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Oddball>(FalseConstant());
return TNode<Oddball>{tmp0};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::kLengthString() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<String> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<String>(LengthStringConstant());
return TNode<String>{tmp0};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ElementsKindNotEqual(TNode<Int32T> p_k1, TNode<Int32T> p_k2) {
  PLabel<Int32T, Int32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_k1, p_k2);

  if (block0.is_used()) {
    TNode<Int32T> tmp0;
    TNode<Int32T> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(ElementsKindEqual(TNode<Int32T>{tmp0}, TNode<Int32T>{tmp1}));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp2}));
    Goto(&block1, tmp3);
  }

    TNode<BoolT> tmp4;
    Bind(&block1, &tmp4);
  return TNode<BoolT>{tmp4};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Min(TNode<Number> p_x, TNode<Number> p_y) {
  PLabel<Number, Number> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x, p_y);

  if (block0.is_used()) {
    TNode<Number> tmp0;
    TNode<Number> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Number>(NumberMin(TNode<Number>{tmp0}, TNode<Number>{tmp1}));
    Goto(&block1, tmp2);
  }

    TNode<Number> tmp3;
    Bind(&block1, &tmp3);
  return TNode<Number>{tmp3};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Max(TNode<Number> p_x, TNode<Number> p_y) {
  PLabel<Number, Number> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x, p_y);

  if (block0.is_used()) {
    TNode<Number> tmp0;
    TNode<Number> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Number>(NumberMax(TNode<Number>{tmp0}, TNode<Number>{tmp1}));
    Goto(&block1, tmp2);
  }

    TNode<Number> tmp3;
    Bind(&block1, &tmp3);
  return TNode<Number>{tmp3};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATHeapObject(TNode<HeapObject> p_o, Label* label_CastError) {
  PLabel<HeapObject> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    Bind(&block0, &tmp0);
    Goto(&block2, tmp0);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<HeapObject> tmp1;
    Bind(&block2, &tmp1);
  return TNode<HeapObject>{tmp1};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATFixedArray(TNode<HeapObject> p_o, Label* label_CastError) {
  PLabel<HeapObject> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject, FixedArray> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    Bind(&block0, &tmp0);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = HeapObjectToFixedArray(TNode<HeapObject>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<HeapObject> tmp2;
    TNode<HeapObject> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<HeapObject> tmp4;
    TNode<HeapObject> tmp5;
    TNode<FixedArray> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<FixedArray> tmp7;
    Bind(&block2, &tmp7);
  return TNode<FixedArray>{tmp7};
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::CastHeapObject18ATFixedDoubleArray(TNode<HeapObject> p_o, Label* label_CastError) {
  PLabel<HeapObject> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject, FixedDoubleArray> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedDoubleArray> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    Bind(&block0, &tmp0);
    TNode<FixedDoubleArray> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = HeapObjectToFixedDoubleArray(TNode<HeapObject>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<HeapObject> tmp2;
    TNode<HeapObject> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<HeapObject> tmp4;
    TNode<HeapObject> tmp5;
    TNode<FixedDoubleArray> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<FixedDoubleArray> tmp7;
    Bind(&block2, &tmp7);
  return TNode<FixedDoubleArray>{tmp7};
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATJSDataView(TNode<HeapObject> p_o, Label* label_CastError) {
  PLabel<HeapObject> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject, JSDataView> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSDataView> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    Bind(&block0, &tmp0);
    TNode<JSDataView> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = HeapObjectToJSDataView(TNode<HeapObject>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<HeapObject> tmp2;
    TNode<HeapObject> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<HeapObject> tmp4;
    TNode<HeapObject> tmp5;
    TNode<JSDataView> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<JSDataView> tmp7;
    Bind(&block2, &tmp7);
  return TNode<JSDataView>{tmp7};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::CastHeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<HeapObject> p_o, Label* label_CastError) {
  PLabel<HeapObject> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject, JSReceiver> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSReceiver> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    Bind(&block0, &tmp0);
    TNode<JSReceiver> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = HeapObjectToCallable(TNode<HeapObject>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<HeapObject> tmp2;
    TNode<HeapObject> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<HeapObject> tmp4;
    TNode<HeapObject> tmp5;
    TNode<JSReceiver> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<JSReceiver> tmp7;
    Bind(&block2, &tmp7);
  return TNode<JSReceiver>{tmp7};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::CastHeapObject9ATJSArray(TNode<HeapObject> p_o, Label* label_CastError) {
  PLabel<HeapObject> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject, JSArray> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    Bind(&block0, &tmp0);
    TNode<JSArray> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = HeapObjectToJSArray(TNode<HeapObject>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<HeapObject> tmp2;
    TNode<HeapObject> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<HeapObject> tmp4;
    TNode<HeapObject> tmp5;
    TNode<JSArray> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<JSArray> tmp7;
    Bind(&block2, &tmp7);
  return TNode<JSArray>{tmp7};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Cast5ATSmi(TNode<Object> p_o, Label* label_CastError) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = TaggedToSmi(TNode<Object>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Smi> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<Smi> tmp7;
    Bind(&block2, &tmp7);
  return TNode<Smi>{tmp7};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o, Label* label_CastError) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, Number> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Number> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = TaggedToNumber(TNode<Object>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Number> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<Number> tmp7;
    Bind(&block2, &tmp7);
  return TNode<Number>{tmp7};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<IntPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<IntPtrT>(IntPtrConstant(p_i));
    Goto(&block1, tmp0);
  }

    TNode<IntPtrT> tmp1;
    Bind(&block1, &tmp1);
  return TNode<IntPtrT>{tmp1};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint31(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Int32T>(Int32Constant(p_i));
    Goto(&block1, tmp0);
  }

    TNode<Int32T> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Int32T>{tmp1};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint32(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Int32T>(Int32Constant(p_i));
    Goto(&block1, tmp0);
  }

    TNode<Int32T> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Int32T>{tmp1};
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATuint32(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Int32T>(Int32Constant(p_i));
    TNode<Uint32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Uint32T>(Unsigned(TNode<Int32T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Uint32T> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Uint32T>{tmp2};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATuintptr(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<UintPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Uint32T> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(p_i));
    TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(TNode<Uint32T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<UintPtrT> tmp2;
    Bind(&block1, &tmp2);
  return TNode<UintPtrT>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr5ATSmi(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(SmiConstant(p_i));
    Goto(&block1, tmp0);
  }

    TNode<Smi> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Smi>{tmp1};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(SmiConstant(p_i));
    Goto(&block1, tmp0);
  }

    TNode<Number> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Number>{tmp1};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATfloat64(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Float64T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Float64T> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Float64T>(Float64Constant(p_i));
    Goto(&block1, tmp0);
  }

    TNode<Float64T> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Float64T>{tmp1};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr(int32_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<IntPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<IntPtrT>(IntPtrConstant(p_i));
    Goto(&block1, tmp0);
  }

    TNode<IntPtrT> tmp1;
    Bind(&block1, &tmp1);
  return TNode<IntPtrT>{tmp1};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint32(int32_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Int32T>(Int32Constant(p_i));
    Goto(&block1, tmp0);
  }

    TNode<Int32T> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Int32T>{tmp1};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi(int32_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Number>(NumberConstant(p_i));
    Goto(&block1, tmp0);
  }

    TNode<Number> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Number>{tmp1};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi(double p_f) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Number>(NumberConstant(p_f));
    Goto(&block1, tmp0);
  }

    TNode<Number> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Number>{tmp1};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::FromConstexpr6ATbool(bool p_b) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<BoolT>(BoolConstant(p_b));
    Goto(&block1, tmp0);
  }

    TNode<BoolT> tmp1;
    Bind(&block1, &tmp1);
  return TNode<BoolT>{tmp1};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr14ATLanguageMode(LanguageMode p_b) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(LanguageModeConstant(p_b));
    Goto(&block1, tmp0);
  }

    TNode<Smi> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Smi>{tmp1};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr14ATElementsKind(ElementsKind p_e) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Int32T>(Int32Constant(p_e));
    Goto(&block1, tmp0);
  }

    TNode<Int32T> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Int32T>{tmp1};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATString(const char* p_s) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<String> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<String>(StringConstant(p_s));
    Goto(&block1, tmp0);
  }

    TNode<String> tmp1;
    Bind(&block1, &tmp1);
  return TNode<String>{tmp1};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapObject5ATSmi(const char* p_s) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<String> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<String>(StringConstant(p_s));
    Goto(&block1, tmp0);
  }

    TNode<Object> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Object>{tmp1};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr19ATNativeContextSlot(int32_t p_c) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<IntPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<IntPtrT>(IntPtrConstant(p_c));
    Goto(&block1, tmp0);
  }

    TNode<IntPtrT> tmp1;
    Bind(&block1, &tmp1);
  return TNode<IntPtrT>{tmp1};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint32(TNode<Int32T> p_elementsKind) {
  PLabel<Int32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_elementsKind);

  if (block0.is_used()) {
    TNode<Int32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(ConvertElementsKindToInt(TNode<Int32T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Int32T> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Int32T>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi(TNode<Int32T> p_i) {
  PLabel<Int32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_i);

  if (block0.is_used()) {
    TNode<Int32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Number>(ChangeInt32ToTagged(TNode<Int32T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Number> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Number>{tmp2};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr(TNode<Int32T> p_i) {
  PLabel<Int32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<IntPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_i);

  if (block0.is_used()) {
    TNode<Int32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<IntPtrT>(ChangeInt32ToIntPtr(TNode<Int32T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<IntPtrT> tmp2;
    Bind(&block1, &tmp2);
  return TNode<IntPtrT>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi(TNode<Int32T> p_i) {
  PLabel<Int32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_i);

  if (block0.is_used()) {
    TNode<Int32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(SmiFromInt32(TNode<Int32T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Smi> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Smi>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi(TNode<Uint32T> p_ui) {
  PLabel<Uint32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_ui);

  if (block0.is_used()) {
    TNode<Uint32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Number>(ChangeUint32ToTagged(TNode<Uint32T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Number> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Number>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi(TNode<Uint32T> p_ui) {
  PLabel<Uint32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_ui);

  if (block0.is_used()) {
    TNode<Uint32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(Signed(TNode<Uint32T>{tmp0}));
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(SmiFromInt32(TNode<Int32T>{tmp1}));
    Goto(&block1, tmp2);
  }

    TNode<Smi> tmp3;
    Bind(&block1, &tmp3);
  return TNode<Smi>{tmp3};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr(TNode<Uint32T> p_ui) {
  PLabel<Uint32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<UintPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_ui);

  if (block0.is_used()) {
    TNode<Uint32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<UintPtrT>(ChangeUint32ToWord(TNode<Uint32T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<UintPtrT> tmp2;
    Bind(&block1, &tmp2);
  return TNode<UintPtrT>{tmp2};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint32(TNode<IntPtrT> p_i) {
  PLabel<IntPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_i);

  if (block0.is_used()) {
    TNode<IntPtrT> tmp0;
    Bind(&block0, &tmp0);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(TNode<IntPtrT>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Int32T> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Int32T>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi(TNode<IntPtrT> p_i) {
  PLabel<IntPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_i);

  if (block0.is_used()) {
    TNode<IntPtrT> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(SmiTag(TNode<IntPtrT>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Smi> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Smi>{tmp2};
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::Convert8ATuint32(TNode<UintPtrT> p_ui) {
  PLabel<UintPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_ui);

  if (block0.is_used()) {
    TNode<UintPtrT> tmp0;
    Bind(&block0, &tmp0);
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<IntPtrT>(Signed(TNode<UintPtrT>{tmp0}));
    TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Int32T>(TruncateIntPtrToInt32(TNode<IntPtrT>{tmp1}));
    TNode<Uint32T> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<Uint32T>(Unsigned(TNode<Int32T>{tmp2}));
    Goto(&block1, tmp3);
  }

    TNode<Uint32T> tmp4;
    Bind(&block1, &tmp4);
  return TNode<Uint32T>{tmp4};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr(TNode<Smi> p_s) {
  PLabel<Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<IntPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_s);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    Bind(&block0, &tmp0);
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<IntPtrT>(SmiUntag(TNode<Smi>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<IntPtrT> tmp2;
    Bind(&block1, &tmp2);
  return TNode<IntPtrT>{tmp2};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint32(TNode<Smi> p_s) {
  PLabel<Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_s);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    Bind(&block0, &tmp0);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(SmiToInt32(TNode<Smi>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Int32T> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Int32T>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(TNode<HeapNumber> p_h) {
  PLabel<HeapNumber> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Float64T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_h);

  if (block0.is_used()) {
    TNode<HeapNumber> tmp0;
    Bind(&block0, &tmp0);
    TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Float64T>(LoadHeapNumberValue(TNode<HeapNumber>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Float64T> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Float64T>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(TNode<Number> p_n) {
  PLabel<Number> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Float64T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_n);

  if (block0.is_used()) {
    TNode<Number> tmp0;
    Bind(&block0, &tmp0);
    TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Float64T>(ChangeNumberToFloat64(TNode<Number>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Float64T> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Float64T>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(TNode<Float32T> p_f) {
  PLabel<Float32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Float64T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_f);

  if (block0.is_used()) {
    TNode<Float32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Float64T>(ChangeFloat32ToFloat64(TNode<Float32T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Float64T> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Float64T>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi(TNode<Float64T> p_d) {
  PLabel<Float64T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_d);

  if (block0.is_used()) {
    TNode<Float64T> tmp0;
    Bind(&block0, &tmp0);
    TNode<HeapNumber> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(TNode<Float64T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Number> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Number>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(TNode<UintPtrT> p_ui) {
  PLabel<UintPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Float64T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_ui);

  if (block0.is_used()) {
    TNode<UintPtrT> tmp0;
    Bind(&block0, &tmp0);
    TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Float64T>(ChangeUintPtrToFloat64(TNode<UintPtrT>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Float64T> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Float64T>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi(TNode<UintPtrT> p_ui) {
  PLabel<UintPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_ui);

  if (block0.is_used()) {
    TNode<UintPtrT> tmp0;
    Bind(&block0, &tmp0);
    TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Number>(ChangeUintPtrToTagged(TNode<UintPtrT>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Number> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Number>{tmp2};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr(TNode<Float64T> p_d) {
  PLabel<Float64T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<UintPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_d);

  if (block0.is_used()) {
    TNode<Float64T> tmp0;
    Bind(&block0, &tmp0);
    TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<UintPtrT>(ChangeFloat64ToUintPtr(TNode<Float64T>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<UintPtrT> tmp2;
    Bind(&block1, &tmp2);
  return TNode<UintPtrT>{tmp2};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr(TNode<RawPtrT> p_r) {
  PLabel<RawPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<UintPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_r);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    Bind(&block0, &tmp0);
    TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<UintPtrT>(Unsigned(TNode<RawPtrT>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<UintPtrT> tmp2;
    Bind(&block1, &tmp2);
  return TNode<UintPtrT>{tmp2};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr(TNode<RawPtrT> p_r) {
  PLabel<RawPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<IntPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_r);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    Bind(&block0, &tmp0);
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<IntPtrT>(Signed(TNode<RawPtrT>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<IntPtrT> tmp2;
    Bind(&block1, &tmp2);
  return TNode<IntPtrT>{tmp2};
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATHeapNumber(TNode<Number> p_n) {
  PLabel<Number> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapNumber> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_n);

  if (block0.is_used()) {
    TNode<Number> tmp0;
    Bind(&block0, &tmp0);
    TNode<HeapNumber> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<HeapNumber>(UnsafeCastNumberToHeapNumber(TNode<Number>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<HeapNumber> tmp2;
    Bind(&block1, &tmp2);
  return TNode<HeapNumber>{tmp2};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::UnsafeCast22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    Goto(&block1, tmp0);
  }

    TNode<Object> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Object>{tmp1};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATFixedArray(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<FixedArray>(UnsafeCastObjectToFixedArray(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<FixedArray> tmp2;
    Bind(&block1, &tmp2);
  return TNode<FixedArray>{tmp2};
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::UnsafeCast18ATFixedDoubleArray(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedDoubleArray> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<FixedDoubleArray> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<FixedDoubleArray>(UnsafeCastObjectToFixedDoubleArray(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<FixedDoubleArray> tmp2;
    Bind(&block1, &tmp2);
  return TNode<FixedDoubleArray>{tmp2};
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATHeapNumber(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapNumber> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<HeapNumber> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<HeapNumber>(UnsafeCastObjectToHeapNumber(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<HeapNumber> tmp2;
    Bind(&block1, &tmp2);
  return TNode<HeapNumber>{tmp2};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::UnsafeCast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSReceiver> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<JSReceiver> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<JSReceiver>(UnsafeCastObjectToCallable(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<JSReceiver> tmp2;
    Bind(&block1, &tmp2);
  return TNode<JSReceiver>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::UnsafeCast5ATSmi(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(UnsafeCastObjectToSmi(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Smi> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Smi>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::UnsafeCast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Number>(UnsafeCastObjectToNumber(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Number> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Number>{tmp2};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATHeapObject(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<HeapObject> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<HeapObject>(UnsafeCastObjectToHeapObject(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<HeapObject> tmp2;
    Bind(&block1, &tmp2);
  return TNode<HeapObject>{tmp2};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::UnsafeCast9ATJSArray(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<JSArray> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<JSArray>(UnsafeCastObjectToJSArray(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<JSArray> tmp2;
    Bind(&block1, &tmp2);
  return TNode<JSArray>{tmp2};
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::UnsafeCast21ATFixedTypedArrayBase(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedTypedArrayBase> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<FixedTypedArrayBase> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<FixedTypedArrayBase>(UnsafeCastObjectToFixedTypedArrayBase(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<FixedTypedArrayBase> tmp2;
    Bind(&block1, &tmp2);
  return TNode<FixedTypedArrayBase>{tmp2};
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::UnsafeCast18ATNumberDictionary(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<NumberDictionary> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<NumberDictionary> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<NumberDictionary>(UnsafeCastObjectToNumberDictionary(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<NumberDictionary> tmp2;
    Bind(&block1, &tmp2);
  return TNode<NumberDictionary>{tmp2};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATJSReceiver(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSReceiver> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<JSReceiver> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<JSReceiver>(UnsafeCastObjectToJSReceiver(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<JSReceiver> tmp2;
    Bind(&block1, &tmp2);
  return TNode<JSReceiver>{tmp2};
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::UnsafeCast10ATJSObject(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSObject> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<JSObject> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<JSObject>(UnsafeCastObjectToJSObject(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<JSObject> tmp2;
    Bind(&block1, &tmp2);
  return TNode<JSObject>{tmp2};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::UnsafeCast5ATMap(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Map> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Map> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Map>(UnsafeCastObjectToMap(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Map> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Map>{tmp2};
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::UnsafeCast16ATFixedArrayBase(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArrayBase> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<FixedArrayBase> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<FixedArrayBase>(UnsafeCastObjectToFixedArrayBase(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<FixedArrayBase> tmp2;
    Bind(&block1, &tmp2);
  return TNode<FixedArrayBase>{tmp2};
}

compiler::TNode<Context> BaseBuiltinsFromDSLAssembler::UnsafeCast9ATContext(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Context> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Context>(UnsafeCastObjectToContext(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Context> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Context>{tmp2};
}

void BaseBuiltinsFromDSLAssembler::BranchIfJSArgumentsObjectWithLength(TNode<Context> p_context, TNode<Object> p_o, Label* label_True, Label* label_False) {
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, HeapObject> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, HeapObject, Map, Context> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, HeapObject, Map, Context> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, HeapObject, Map, Context> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, HeapObject, Map, Context> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, HeapObject, Map, Context> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, HeapObject, Map, Context> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, HeapObject, Map, Context> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, HeapObject, Map, Context> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<HeapObject> tmp2;
    USE(tmp2);
    Label label0(this);
    tmp2 = Cast12ATHeapObject(TNode<Object>{tmp1}, &label0);
    Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    Bind(&block4, &tmp3, &tmp4, &tmp5);
    Goto(&block2);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    TNode<Map> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Map>(LoadMap(TNode<HeapObject>{tmp9}));
    TNode<Context> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Context>(LoadNativeContext(TNode<Context>{tmp6}));
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<IntPtrT>(FromConstexpr19ATNativeContextSlot(Context::FAST_ALIASED_ARGUMENTS_MAP_INDEX));
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Object>(LoadContextElement(TNode<Context>{tmp11}, TNode<IntPtrT>{tmp12}));
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp10}, TNode<Object>{tmp13}));
    Branch(tmp14, &block5, &block6, tmp6, tmp7, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<HeapObject> tmp17;
    TNode<Map> tmp18;
    TNode<Context> tmp19;
    Bind(&block5, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    Goto(&block1);
  }

  if (block6.is_used()) {
    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<HeapObject> tmp22;
    TNode<Map> tmp23;
    TNode<Context> tmp24;
    Bind(&block6, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<IntPtrT>(FromConstexpr19ATNativeContextSlot(Context::SLOW_ALIASED_ARGUMENTS_MAP_INDEX));
    TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<Object>(LoadContextElement(TNode<Context>{tmp24}, TNode<IntPtrT>{tmp25}));
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp23}, TNode<Object>{tmp26}));
    Branch(tmp27, &block7, &block8, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block7.is_used()) {
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    TNode<HeapObject> tmp30;
    TNode<Map> tmp31;
    TNode<Context> tmp32;
    Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    Goto(&block1);
  }

  if (block8.is_used()) {
    TNode<Context> tmp33;
    TNode<Object> tmp34;
    TNode<HeapObject> tmp35;
    TNode<Map> tmp36;
    TNode<Context> tmp37;
    Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(FromConstexpr19ATNativeContextSlot(Context::STRICT_ARGUMENTS_MAP_INDEX));
    TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<Object>(LoadContextElement(TNode<Context>{tmp37}, TNode<IntPtrT>{tmp38}));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp36}, TNode<Object>{tmp39}));
    Branch(tmp40, &block9, &block10, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<HeapObject> tmp43;
    TNode<Map> tmp44;
    TNode<Context> tmp45;
    Bind(&block9, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    Goto(&block1);
  }

  if (block10.is_used()) {
    TNode<Context> tmp46;
    TNode<Object> tmp47;
    TNode<HeapObject> tmp48;
    TNode<Map> tmp49;
    TNode<Context> tmp50;
    Bind(&block10, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<IntPtrT> tmp51;
    USE(tmp51);
    tmp51 = UncheckedCast<IntPtrT>(FromConstexpr19ATNativeContextSlot(Context::SLOPPY_ARGUMENTS_MAP_INDEX));
    TNode<Object> tmp52;
    USE(tmp52);
    tmp52 = UncheckedCast<Object>(LoadContextElement(TNode<Context>{tmp50}, TNode<IntPtrT>{tmp51}));
    TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = UncheckedCast<BoolT>(WordNotEqual(TNode<Object>{tmp49}, TNode<Object>{tmp52}));
    Branch(tmp53, &block11, &block12, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block11.is_used()) {
    TNode<Context> tmp54;
    TNode<Object> tmp55;
    TNode<HeapObject> tmp56;
    TNode<Map> tmp57;
    TNode<Context> tmp58;
    Bind(&block11, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    Goto(&block2);
  }

  if (block12.is_used()) {
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<HeapObject> tmp61;
    TNode<Map> tmp62;
    TNode<Context> tmp63;
    Bind(&block12, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    Goto(&block1);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_True);
  }

  if (block2.is_used()) {
    Bind(&block2);
    Goto(label_False);
  }
}

compiler::TNode<JSArgumentsObjectWithLength> BaseBuiltinsFromDSLAssembler::UnsafeCast29ATJSArgumentsObjectWithLength(TNode<Context> p_context, TNode<Object> p_o) {
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArgumentsObjectWithLength> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<JSArgumentsObjectWithLength> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<JSArgumentsObjectWithLength>(RawCastObjectToJSArgumentsObjectWithLength(TNode<Object>{tmp1}));
    Goto(&block1, tmp2);
  }

    TNode<JSArgumentsObjectWithLength> tmp3;
    Bind(&block1, &tmp3);
  return TNode<JSArgumentsObjectWithLength>{tmp3};
}

compiler::TNode<JSArgumentsObjectWithLength> BaseBuiltinsFromDSLAssembler::Cast29ATJSArgumentsObjectWithLength(TNode<Context> p_context, TNode<Object> p_o, Label* label_CastError) {
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Context, Object> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Context, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArgumentsObjectWithLength> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    Label label0(this);
    Label label1(this);
    BranchIfJSArgumentsObjectWithLength(TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block6, tmp0, tmp1, tmp0, tmp1);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block7, tmp0, tmp1, tmp0, tmp1);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp2;
    TNode<Object> tmp3;
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    Bind(&block6, &tmp2, &tmp3, &tmp4, &tmp5);
    Goto(&block3, tmp2, tmp3);
  }

  if (block7.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    Bind(&block7, &tmp6, &tmp7, &tmp8, &tmp9);
    Goto(&block4, tmp6, tmp7);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    Bind(&block3, &tmp10, &tmp11);
    TNode<JSArgumentsObjectWithLength> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<JSArgumentsObjectWithLength>(UnsafeCast29ATJSArgumentsObjectWithLength(TNode<Context>{tmp10}, TNode<Object>{tmp11}));
    Goto(&block2, tmp12);
  }

  if (block4.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    Bind(&block4, &tmp13, &tmp14);
    Goto(&block1);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<JSArgumentsObjectWithLength> tmp15;
    Bind(&block2, &tmp15);
  return TNode<JSArgumentsObjectWithLength>{tmp15};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::kCOWMap() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<Object> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Object>(LoadRoot(RootIndex::kFixedCOWArrayMap));
    TNode<Map> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Map>(UnsafeCast5ATMap(TNode<Object>{tmp0}));
return TNode<Map>{tmp1};
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::kEmptyFixedArray() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<Object> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Object>(LoadRoot(RootIndex::kEmptyFixedArray));
    TNode<FixedArrayBase> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<FixedArrayBase>(UnsafeCast16ATFixedArrayBase(TNode<Object>{tmp0}));
return TNode<FixedArrayBase>{tmp1};
}

void BaseBuiltinsFromDSLAssembler::EnsureFastJSArray(TNode<Context> p_context, TNode<Object> p_object, Label* label_Bailout) {
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Context> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Context> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context, p_object);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    Label label0(this);
    Label label1(this);
    BranchIfNotFastJSArray(TNode<Object>{tmp1}, TNode<Context>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block5, tmp0, tmp1, tmp1, tmp0);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block6, tmp0, tmp1, tmp1, tmp0);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    TNode<Context> tmp5;
    Bind(&block5, &tmp2, &tmp3, &tmp4, &tmp5);
    Goto(&block3, tmp2, tmp3);
  }

  if (block6.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<Context> tmp9;
    Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9);
    Goto(&block4, tmp6, tmp7);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    Bind(&block3, &tmp10, &tmp11);
    Goto(&block1);
  }

  if (block4.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    Bind(&block4, &tmp12, &tmp13);
    Goto(&block2);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_Bailout);
  }

    Bind(&block2);
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayNumber(TNode<FixedDoubleArray> p_a, TNode<Smi> p_index, TNode<Number> p_value) {
  PLabel<FixedDoubleArray, Smi, Number> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_a, p_index, p_value);

  if (block0.is_used()) {
    TNode<FixedDoubleArray> tmp0;
    TNode<Smi> tmp1;
    TNode<Number> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<Float64T>(Convert9ATfloat64(TNode<Number>{tmp2}));
    StoreFixedDoubleArrayElementSmi(TNode<FixedDoubleArray>{tmp0}, TNode<Smi>{tmp1}, TNode<Float64T>{tmp3});
    Goto(&block1);
  }

    Bind(&block1);
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayElementWithSmiIndex(TNode<FixedDoubleArray> p_array, TNode<Smi> p_index, TNode<Float64T> p_value) {
  PLabel<FixedDoubleArray, Smi, Float64T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_array, p_index, p_value);

  if (block0.is_used()) {
    TNode<FixedDoubleArray> tmp0;
    TNode<Smi> tmp1;
    TNode<Float64T> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    StoreFixedDoubleArrayElement(TNode<FixedDoubleArray>{tmp0}, TNode<Object>{tmp1}, TNode<Float64T>{tmp2}, SMI_PARAMETERS);
    Goto(&block1);
  }

    Bind(&block1);
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::AllowDoubleElements(TNode<Int32T> p_kind) {
  PLabel<Int32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_kind);

  if (block0.is_used()) {
    TNode<Int32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(PACKED_SMI_ELEMENTS));
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(ElementsKindEqual(TNode<Int32T>{tmp0}, TNode<Int32T>{tmp1}));
    Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    TNode<Int32T> tmp3;
    Bind(&block2, &tmp3);
    TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(PACKED_DOUBLE_ELEMENTS));
    Goto(&block1, tmp4);
  }

  if (block3.is_used()) {
    TNode<Int32T> tmp5;
    Bind(&block3, &tmp5);
    TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(HOLEY_SMI_ELEMENTS));
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<BoolT>(ElementsKindEqual(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp6}));
    Branch(tmp7, &block5, &block6, tmp5);
  }

  if (block5.is_used()) {
    TNode<Int32T> tmp8;
    Bind(&block5, &tmp8);
    TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(HOLEY_DOUBLE_ELEMENTS));
    Goto(&block1, tmp9);
  }

  if (block6.is_used()) {
    TNode<Int32T> tmp10;
    Bind(&block6, &tmp10);
    Goto(&block4, tmp10);
  }

  if (block4.is_used()) {
    TNode<Int32T> tmp11;
    Bind(&block4, &tmp11);
    Goto(&block1, tmp11);
  }

    TNode<Int32T> tmp12;
    Bind(&block1, &tmp12);
  return TNode<Int32T>{tmp12};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::AllowNonNumberElements(TNode<Int32T> p_kind) {
  PLabel<Int32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_kind);

  if (block0.is_used()) {
    TNode<Int32T> tmp0;
    Bind(&block0, &tmp0);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(PACKED_SMI_ELEMENTS));
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(ElementsKindEqual(TNode<Int32T>{tmp0}, TNode<Int32T>{tmp1}));
    Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    TNode<Int32T> tmp3;
    Bind(&block2, &tmp3);
    TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(PACKED_ELEMENTS));
    Goto(&block1, tmp4);
  }

  if (block3.is_used()) {
    TNode<Int32T> tmp5;
    Bind(&block3, &tmp5);
    TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(HOLEY_SMI_ELEMENTS));
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<BoolT>(ElementsKindEqual(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp6}));
    Branch(tmp7, &block5, &block6, tmp5);
  }

  if (block5.is_used()) {
    TNode<Int32T> tmp8;
    Bind(&block5, &tmp8);
    TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(HOLEY_ELEMENTS));
    Goto(&block1, tmp9);
  }

  if (block6.is_used()) {
    TNode<Int32T> tmp10;
    Bind(&block6, &tmp10);
    TNode<Int32T> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(PACKED_DOUBLE_ELEMENTS));
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<BoolT>(ElementsKindEqual(TNode<Int32T>{tmp10}, TNode<Int32T>{tmp11}));
    Branch(tmp12, &block8, &block9, tmp10);
  }

  if (block8.is_used()) {
    TNode<Int32T> tmp13;
    Bind(&block8, &tmp13);
    TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(PACKED_ELEMENTS));
    Goto(&block1, tmp14);
  }

  if (block9.is_used()) {
    TNode<Int32T> tmp15;
    Bind(&block9, &tmp15);
    TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(HOLEY_DOUBLE_ELEMENTS));
    TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<BoolT>(ElementsKindEqual(TNode<Int32T>{tmp15}, TNode<Int32T>{tmp16}));
    Branch(tmp17, &block11, &block12, tmp15);
  }

  if (block11.is_used()) {
    TNode<Int32T> tmp18;
    Bind(&block11, &tmp18);
    TNode<Int32T> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<Int32T>(FromConstexpr14ATElementsKind(HOLEY_ELEMENTS));
    Goto(&block1, tmp19);
  }

  if (block12.is_used()) {
    TNode<Int32T> tmp20;
    Bind(&block12, &tmp20);
    Goto(&block10, tmp20);
  }

  if (block10.is_used()) {
    TNode<Int32T> tmp21;
    Bind(&block10, &tmp21);
    Goto(&block7, tmp21);
  }

  if (block7.is_used()) {
    TNode<Int32T> tmp22;
    Bind(&block7, &tmp22);
    Goto(&block4, tmp22);
  }

  if (block4.is_used()) {
    TNode<Int32T> tmp23;
    Bind(&block4, &tmp23);
    Goto(&block1, tmp23);
  }

    TNode<Int32T> tmp24;
    Bind(&block1, &tmp24);
  return TNode<Int32T>{tmp24};
}

void BaseBuiltinsFromDSLAssembler::TorqueMoveElements(TNode<FixedArray> p_elements, TNode<IntPtrT> p_dstIndex, TNode<IntPtrT> p_srcIndex, TNode<IntPtrT> p_count) {
  PLabel<FixedArray, IntPtrT, IntPtrT, IntPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    TNode<FixedArray> tmp0;
    TNode<IntPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<IntPtrT> tmp3;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    MoveElements(HOLEY_ELEMENTS, TNode<FixedArrayBase>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    Goto(&block1);
  }

    Bind(&block1);
}

void BaseBuiltinsFromDSLAssembler::TorqueMoveElements(TNode<FixedDoubleArray> p_elements, TNode<IntPtrT> p_dstIndex, TNode<IntPtrT> p_srcIndex, TNode<IntPtrT> p_count) {
  PLabel<FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    TNode<FixedDoubleArray> tmp0;
    TNode<IntPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<IntPtrT> tmp3;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    MoveElements(HOLEY_DOUBLE_ELEMENTS, TNode<FixedArrayBase>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    Goto(&block1);
  }

    Bind(&block1);
}

void BaseBuiltinsFromDSLAssembler::TorqueCopyElements(TNode<FixedArray> p_dstElements, TNode<IntPtrT> p_dstIndex, TNode<FixedArray> p_srcElements, TNode<IntPtrT> p_srcIndex, TNode<IntPtrT> p_count) {
  PLabel<FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    TNode<FixedArray> tmp0;
    TNode<IntPtrT> tmp1;
    TNode<FixedArray> tmp2;
    TNode<IntPtrT> tmp3;
    TNode<IntPtrT> tmp4;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    CopyElements(HOLEY_ELEMENTS, TNode<FixedArrayBase>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<FixedArrayBase>{tmp2}, TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    Goto(&block1);
  }

    Bind(&block1);
}

void BaseBuiltinsFromDSLAssembler::TorqueCopyElements(TNode<FixedDoubleArray> p_dstElements, TNode<IntPtrT> p_dstIndex, TNode<FixedDoubleArray> p_srcElements, TNode<IntPtrT> p_srcIndex, TNode<IntPtrT> p_count) {
  PLabel<FixedDoubleArray, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    TNode<FixedDoubleArray> tmp0;
    TNode<IntPtrT> tmp1;
    TNode<FixedDoubleArray> tmp2;
    TNode<IntPtrT> tmp3;
    TNode<IntPtrT> tmp4;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    CopyElements(HOLEY_DOUBLE_ELEMENTS, TNode<FixedArrayBase>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<FixedArrayBase>{tmp2}, TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    Goto(&block1);
  }

    Bind(&block1);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole12ATFixedArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole) {
  PLabel<JSArray, Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi, FixedArrayBase> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi, FixedArrayBase, FixedArray> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi, FixedArray, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi, FixedArray, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_a, p_index);

  if (block0.is_used()) {
    TNode<JSArray> tmp0;
    TNode<Smi> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<FixedArrayBase> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<FixedArrayBase>(LoadElements(TNode<JSObject>{tmp0}));
    TNode<FixedArray> tmp3;
    USE(tmp3);
    Label label0(this);
    tmp3 = Cast12ATFixedArray(TNode<HeapObject>{tmp2}, &label0);
    Goto(&block5, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block6, tmp0, tmp1, tmp2);
    }
  }

  if (block6.is_used()) {
    TNode<JSArray> tmp4;
    TNode<Smi> tmp5;
    TNode<FixedArrayBase> tmp6;
    Bind(&block6, &tmp4, &tmp5, &tmp6);
    Goto(&block4, tmp4, tmp5);
  }

  if (block5.is_used()) {
    TNode<JSArray> tmp7;
    TNode<Smi> tmp8;
    TNode<FixedArrayBase> tmp9;
    TNode<FixedArray> tmp10;
    Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10);
    TNode<Object> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Object>(LoadFixedArrayElement(TNode<FixedArray>{tmp10}, TNode<Smi>{tmp8}));
    TNode<Oddball> tmp12;
    USE(tmp12);
    tmp12 = Hole();
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp11}, TNode<Object>{tmp12}));
    Branch(tmp13, &block7, &block8, tmp7, tmp8, tmp10, tmp11);
  }

  if (block7.is_used()) {
    TNode<JSArray> tmp14;
    TNode<Smi> tmp15;
    TNode<FixedArray> tmp16;
    TNode<Object> tmp17;
    Bind(&block7, &tmp14, &tmp15, &tmp16, &tmp17);
    Goto(&block1);
  }

  if (block8.is_used()) {
    TNode<JSArray> tmp18;
    TNode<Smi> tmp19;
    TNode<FixedArray> tmp20;
    TNode<Object> tmp21;
    Bind(&block8, &tmp18, &tmp19, &tmp20, &tmp21);
    Goto(&block2, tmp21);
  }

  if (block4.is_used()) {
    TNode<JSArray> tmp22;
    TNode<Smi> tmp23;
    Bind(&block4, &tmp22, &tmp23);
    Unreachable();
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_IfHole);
  }

    TNode<Object> tmp24;
    Bind(&block2, &tmp24);
  return TNode<Object>{tmp24};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole18ATFixedDoubleArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole) {
  PLabel<JSArray, Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi, FixedArrayBase> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi, FixedArrayBase, FixedDoubleArray> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi, FixedDoubleArray, FixedDoubleArray, Smi> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi, FixedDoubleArray, FixedDoubleArray, Smi, Float64T> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_a, p_index);

  if (block0.is_used()) {
    TNode<JSArray> tmp0;
    TNode<Smi> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<FixedArrayBase> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<FixedArrayBase>(LoadElements(TNode<JSObject>{tmp0}));
    TNode<FixedDoubleArray> tmp3;
    USE(tmp3);
    Label label0(this);
    tmp3 = Cast18ATFixedDoubleArray(TNode<HeapObject>{tmp2}, &label0);
    Goto(&block5, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block6, tmp0, tmp1, tmp2);
    }
  }

  if (block6.is_used()) {
    TNode<JSArray> tmp4;
    TNode<Smi> tmp5;
    TNode<FixedArrayBase> tmp6;
    Bind(&block6, &tmp4, &tmp5, &tmp6);
    Goto(&block4, tmp4, tmp5);
  }

  if (block5.is_used()) {
    TNode<JSArray> tmp7;
    TNode<Smi> tmp8;
    TNode<FixedArrayBase> tmp9;
    TNode<FixedDoubleArray> tmp10;
    Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10);
    TNode<Float64T> tmp11;
    USE(tmp11);
    Label label0(this);
    tmp11 = LoadDoubleWithHoleCheck(TNode<FixedDoubleArray>{tmp10}, TNode<Smi>{tmp8}, &label0);
    Goto(&block7, tmp7, tmp8, tmp10, tmp10, tmp8, tmp11);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block8, tmp7, tmp8, tmp10, tmp10, tmp8);
    }
  }

  if (block8.is_used()) {
    TNode<JSArray> tmp12;
    TNode<Smi> tmp13;
    TNode<FixedDoubleArray> tmp14;
    TNode<FixedDoubleArray> tmp15;
    TNode<Smi> tmp16;
    Bind(&block8, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    Goto(&block1);
  }

  if (block7.is_used()) {
    TNode<JSArray> tmp17;
    TNode<Smi> tmp18;
    TNode<FixedDoubleArray> tmp19;
    TNode<FixedDoubleArray> tmp20;
    TNode<Smi> tmp21;
    TNode<Float64T> tmp22;
    Bind(&block7, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    TNode<HeapNumber> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<HeapNumber>(AllocateHeapNumberWithValue(TNode<Float64T>{tmp22}));
    Goto(&block2, tmp23);
  }

  if (block4.is_used()) {
    TNode<JSArray> tmp24;
    TNode<Smi> tmp25;
    Bind(&block4, &tmp24, &tmp25);
    Unreachable();
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_IfHole);
  }

    TNode<Object> tmp26;
    Bind(&block2, &tmp26);
  return TNode<Object>{tmp26};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::NumberIsNaN(TNode<Number> p_number) {
  PLabel<Number> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number, Number, Number> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number, Number, Number, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number, Number> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_number);

  if (block0.is_used()) {
    TNode<Number> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = Cast5ATSmi(TNode<Object>{tmp0}, &label0);
    Goto(&block4, tmp0, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block5, tmp0, tmp0, tmp0);
    }
  }

  if (block5.is_used()) {
    TNode<Number> tmp2;
    TNode<Number> tmp3;
    TNode<Number> tmp4;
    Bind(&block5, &tmp2, &tmp3, &tmp4);
    Goto(&block3, tmp2, tmp3);
  }

  if (block4.is_used()) {
    TNode<Number> tmp5;
    TNode<Number> tmp6;
    TNode<Number> tmp7;
    TNode<Smi> tmp8;
    Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block1, tmp9);
  }

  if (block3.is_used()) {
    TNode<Number> tmp10;
    TNode<Number> tmp11;
    Bind(&block3, &tmp10, &tmp11);
    TNode<Float64T> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<Float64T>(Convert9ATfloat64(TNode<HeapNumber>{UncheckedCast<HeapNumber>(tmp11)}));
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<BoolT>(Float64NotEqual(TNode<Float64T>{tmp12}, TNode<Float64T>{tmp12}));
    Goto(&block1, tmp13);
  }

    TNode<BoolT> tmp14;
    Bind(&block1, &tmp14);
  return TNode<BoolT>{tmp14};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ToBoolean(TNode<Object> p_obj) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_obj);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    Label label0(this);
    Label label1(this);
    BranchIfToBooleanIsTrue(TNode<Object>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block5, tmp0, tmp0);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block6, tmp0, tmp0);
    }
  }

  if (block5.is_used()) {
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    Bind(&block5, &tmp1, &tmp2);
    Goto(&block2, tmp1);
  }

  if (block6.is_used()) {
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    Bind(&block6, &tmp3, &tmp4);
    Goto(&block3, tmp3);
  }

  if (block2.is_used()) {
    TNode<Object> tmp5;
    Bind(&block2, &tmp5);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block1, tmp6);
  }

  if (block3.is_used()) {
    TNode<Object> tmp7;
    Bind(&block3, &tmp7);
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block1, tmp8);
  }

    TNode<BoolT> tmp9;
    Bind(&block1, &tmp9);
  return TNode<BoolT>{tmp9};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::ToIndex(TNode<Object> p_input, TNode<Context> p_context, Label* label_RangeError) {
  PLabel<Object, Context> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Context> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Context> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Context, Number, Number> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Context, Number, Number> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Context, Number> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Context, Number, Number> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Context, Number, Number> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Context, Number> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Context, Number> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_input, p_context);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    TNode<Context> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Undefined();
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp0}, TNode<Object>{tmp2}));
    Branch(tmp3, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Context> tmp5;
    Bind(&block3, &tmp4, &tmp5);
    TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(0));
    Goto(&block2, tmp6);
  }

  if (block4.is_used()) {
    TNode<Object> tmp7;
    TNode<Context> tmp8;
    Bind(&block4, &tmp7, &tmp8);
    TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<Number>(ToInteger_Inline(TNode<Context>{tmp8}, TNode<Object>{tmp7}, ToIntegerTruncationMode::kTruncateMinusZero));
    TNode<Number> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(0));
    Label label0(this);
    Label label1(this);
    BranchIfNumberLessThan(TNode<Number>{tmp9}, TNode<Number>{tmp10}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block8, tmp7, tmp8, tmp9, tmp9);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block9, tmp7, tmp8, tmp9, tmp9);
    }
  }

  if (block8.is_used()) {
    TNode<Object> tmp11;
    TNode<Context> tmp12;
    TNode<Number> tmp13;
    TNode<Number> tmp14;
    Bind(&block8, &tmp11, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp11, tmp12, tmp13);
  }

  if (block9.is_used()) {
    TNode<Object> tmp15;
    TNode<Context> tmp16;
    TNode<Number> tmp17;
    TNode<Number> tmp18;
    Bind(&block9, &tmp15, &tmp16, &tmp17, &tmp18);
    Goto(&block7, tmp15, tmp16, tmp17);
  }

  if (block7.is_used()) {
    TNode<Object> tmp19;
    TNode<Context> tmp20;
    TNode<Number> tmp21;
    Bind(&block7, &tmp19, &tmp20, &tmp21);
    TNode<Number> tmp22;
    USE(tmp22);
    tmp22 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(kMaxSafeInteger));
    Label label0(this);
    Label label1(this);
    BranchIfNumberGreaterThan(TNode<Number>{tmp21}, TNode<Number>{tmp22}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block10, tmp19, tmp20, tmp21, tmp21);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block11, tmp19, tmp20, tmp21, tmp21);
    }
  }

  if (block10.is_used()) {
    TNode<Object> tmp23;
    TNode<Context> tmp24;
    TNode<Number> tmp25;
    TNode<Number> tmp26;
    Bind(&block10, &tmp23, &tmp24, &tmp25, &tmp26);
    Goto(&block5, tmp23, tmp24, tmp25);
  }

  if (block11.is_used()) {
    TNode<Object> tmp27;
    TNode<Context> tmp28;
    TNode<Number> tmp29;
    TNode<Number> tmp30;
    Bind(&block11, &tmp27, &tmp28, &tmp29, &tmp30);
    Goto(&block6, tmp27, tmp28, tmp29);
  }

  if (block5.is_used()) {
    TNode<Object> tmp31;
    TNode<Context> tmp32;
    TNode<Number> tmp33;
    Bind(&block5, &tmp31, &tmp32, &tmp33);
    Goto(&block1);
  }

  if (block6.is_used()) {
    TNode<Object> tmp34;
    TNode<Context> tmp35;
    TNode<Number> tmp36;
    Bind(&block6, &tmp34, &tmp35, &tmp36);
    Goto(&block2, tmp36);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_RangeError);
  }

    TNode<Number> tmp37;
    Bind(&block2, &tmp37);
  return TNode<Number>{tmp37};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::GetLengthProperty(TNode<Context> p_context, TNode<Object> p_o) {
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, JSArray> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Context, Object> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Context, Object, JSArgumentsObjectWithLength> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, JSArgumentsObjectWithLength, Object, Object> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, JSArgumentsObjectWithLength, Object, Object, Smi> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, JSArgumentsObjectWithLength, Object> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, JSArgumentsObjectWithLength, Object, Smi> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block5(this, compiler::CodeAssemblerLabel::kDeferred);
  PLabel<Context, Object, Object> block3(this, compiler::CodeAssemblerLabel::kDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<JSArray> tmp2;
    USE(tmp2);
    Label label0(this);
    tmp2 = Cast9ATJSArray(TNode<Object>{tmp1}, &label0);
    Goto(&block8, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block9, tmp0, tmp1, tmp1);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    Bind(&block9, &tmp3, &tmp4, &tmp5);
    Goto(&block7, tmp3, tmp4);
  }

  if (block8.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<JSArray> tmp9;
    Bind(&block8, &tmp6, &tmp7, &tmp8, &tmp9);
    TNode<Number> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Number>(LoadJSArrayLength(TNode<JSArray>{tmp9}));
    Goto(&block1, tmp10);
  }

  if (block7.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    Bind(&block7, &tmp11, &tmp12);
    TNode<JSArgumentsObjectWithLength> tmp13;
    USE(tmp13);
    Label label0(this);
    tmp13 = Cast29ATJSArgumentsObjectWithLength(TNode<Context>{tmp11}, TNode<Object>{tmp12}, &label0);
    Goto(&block10, tmp11, tmp12, tmp11, tmp12, tmp13);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block11, tmp11, tmp12, tmp11, tmp12);
    }
  }

  if (block11.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    Bind(&block11, &tmp14, &tmp15, &tmp16, &tmp17);
    Goto(&block5, tmp14, tmp15);
  }

  if (block10.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<JSArgumentsObjectWithLength> tmp22;
    Bind(&block10, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    TNode<Object> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<Object>(LoadJSArgumentsObjectWithLength(TNode<JSArgumentsObjectWithLength>{tmp22}));
    TNode<Smi> tmp24;
    USE(tmp24);
    Label label0(this);
    tmp24 = Cast5ATSmi(TNode<Object>{tmp23}, &label0);
    Goto(&block14, tmp18, tmp19, tmp22, tmp23, tmp23, tmp24);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block15, tmp18, tmp19, tmp22, tmp23, tmp23);
    }
  }

  if (block15.is_used()) {
    TNode<Context> tmp25;
    TNode<Object> tmp26;
    TNode<JSArgumentsObjectWithLength> tmp27;
    TNode<Object> tmp28;
    TNode<Object> tmp29;
    Bind(&block15, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    Goto(&block13, tmp25, tmp26, tmp27, tmp28);
  }

  if (block14.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<JSArgumentsObjectWithLength> tmp32;
    TNode<Object> tmp33;
    TNode<Object> tmp34;
    TNode<Smi> tmp35;
    Bind(&block14, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    Goto(&block12, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block13.is_used()) {
    TNode<Context> tmp36;
    TNode<Object> tmp37;
    TNode<JSArgumentsObjectWithLength> tmp38;
    TNode<Object> tmp39;
    Bind(&block13, &tmp36, &tmp37, &tmp38, &tmp39);
    Goto(&block3, tmp36, tmp37, tmp39);
  }

  if (block12.is_used()) {
    TNode<Context> tmp40;
    TNode<Object> tmp41;
    TNode<JSArgumentsObjectWithLength> tmp42;
    TNode<Object> tmp43;
    TNode<Smi> tmp44;
    Bind(&block12, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    Goto(&block1, tmp44);
  }

  if (block5.is_used()) {
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    Bind(&block5, &tmp45, &tmp46);
    TNode<String> tmp47;
    USE(tmp47);
    tmp47 = kLengthString();
    TNode<Object> tmp48;
    USE(tmp48);
    tmp48 = UncheckedCast<Object>(GetProperty(TNode<Context>{tmp45}, TNode<Object>{tmp46}, TNode<Object>{tmp47}));
    Goto(&block3, tmp45, tmp46, tmp48);
  }

  if (block3.is_used()) {
    TNode<Context> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    Bind(&block3, &tmp49, &tmp50, &tmp51);
    TNode<Number> tmp52;
    USE(tmp52);
    tmp52 = UncheckedCast<Number>(ToLength_Inline(TNode<Context>{tmp49}, TNode<Object>{tmp51}));
    Goto(&block1, tmp52);
  }

    TNode<Number> tmp53;
    Bind(&block1, &tmp53);
  return TNode<Number>{tmp53};
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::UnsafeCast108FT9ATContext22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Code> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Code> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Code>(UnsafeCastObjectToCompareBuiltinFn(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Code> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Code>{tmp2};
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::UnsafeCast70FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Code> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Code> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Code>(UnsafeCastObjectToLoadFn(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Code> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Code>{tmp2};
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::UnsafeCast76FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi5ATSmi(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Code> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Code> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Code>(UnsafeCastObjectToStoreFn(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Code> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Code>{tmp2};
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::UnsafeCast84FT9ATContext12ATJSReceiver22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi9ATBoolean(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Code> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Code> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Code>(UnsafeCastObjectToCanUseSameAccessorFn(TNode<Object>{tmp0}));
    Goto(&block1, tmp1);
  }

    TNode<Code> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Code>{tmp2};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::Cast12ATHeapObject(TNode<Object> p_o, Label* label_CastError) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, HeapObject> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject, HeapObject> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<HeapObject> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = TaggedToHeapObject(TNode<Object>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<HeapObject> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    TNode<HeapObject> tmp7;
    USE(tmp7);
    Label label0(this);
    tmp7 = CastHeapObject12ATHeapObject(TNode<HeapObject>{tmp6}, &label0);
    Goto(&block5, tmp4, tmp6, tmp7);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block6, tmp4, tmp6);
    }
  }

  if (block6.is_used()) {
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    Bind(&block6, &tmp8, &tmp9);
    Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Object> tmp10;
    TNode<HeapObject> tmp11;
    TNode<HeapObject> tmp12;
    Bind(&block5, &tmp10, &tmp11, &tmp12);
    Goto(&block2, tmp12);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<HeapObject> tmp13;
    Bind(&block2, &tmp13);
  return TNode<HeapObject>{tmp13};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::Cast12ATFixedArray(TNode<HeapObject> p_o, Label* label_CastError) {
  PLabel<HeapObject> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject, FixedArray> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    Bind(&block0, &tmp0);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = CastHeapObject12ATFixedArray(TNode<HeapObject>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<HeapObject> tmp2;
    TNode<HeapObject> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<HeapObject> tmp4;
    TNode<HeapObject> tmp5;
    TNode<FixedArray> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<FixedArray> tmp7;
    Bind(&block2, &tmp7);
  return TNode<FixedArray>{tmp7};
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::Cast18ATFixedDoubleArray(TNode<HeapObject> p_o, Label* label_CastError) {
  PLabel<HeapObject> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject, FixedDoubleArray> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedDoubleArray> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    Bind(&block0, &tmp0);
    TNode<FixedDoubleArray> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = CastHeapObject18ATFixedDoubleArray(TNode<HeapObject>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<HeapObject> tmp2;
    TNode<HeapObject> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<HeapObject> tmp4;
    TNode<HeapObject> tmp5;
    TNode<FixedDoubleArray> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<FixedDoubleArray> tmp7;
    Bind(&block2, &tmp7);
  return TNode<FixedDoubleArray>{tmp7};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast9ATJSArray(TNode<Object> p_o, Label* label_CastError) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, HeapObject> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject, JSArray> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<HeapObject> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = TaggedToHeapObject(TNode<Object>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<HeapObject> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    TNode<JSArray> tmp7;
    USE(tmp7);
    Label label0(this);
    tmp7 = CastHeapObject9ATJSArray(TNode<HeapObject>{tmp6}, &label0);
    Goto(&block5, tmp4, tmp6, tmp7);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block6, tmp4, tmp6);
    }
  }

  if (block6.is_used()) {
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    Bind(&block6, &tmp8, &tmp9);
    Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Object> tmp10;
    TNode<HeapObject> tmp11;
    TNode<JSArray> tmp12;
    Bind(&block5, &tmp10, &tmp11, &tmp12);
    Goto(&block2, tmp12);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<JSArray> tmp13;
    Bind(&block2, &tmp13);
  return TNode<JSArray>{tmp13};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o, Label* label_CastError) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, HeapObject> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject, JSReceiver> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSReceiver> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<HeapObject> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = TaggedToHeapObject(TNode<Object>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<HeapObject> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    TNode<JSReceiver> tmp7;
    USE(tmp7);
    Label label0(this);
    tmp7 = CastHeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<HeapObject>{tmp6}, &label0);
    Goto(&block5, tmp4, tmp6, tmp7);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block6, tmp4, tmp6);
    }
  }

  if (block6.is_used()) {
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    Bind(&block6, &tmp8, &tmp9);
    Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Object> tmp10;
    TNode<HeapObject> tmp11;
    TNode<JSReceiver> tmp12;
    Bind(&block5, &tmp10, &tmp11, &tmp12);
    Goto(&block2, tmp12);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<JSReceiver> tmp13;
    Bind(&block2, &tmp13);
  return TNode<JSReceiver>{tmp13};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast9ATJSArray(TNode<HeapObject> p_o, Label* label_CastError) {
  PLabel<HeapObject> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<HeapObject, HeapObject, JSArray> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArray> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    Bind(&block0, &tmp0);
    TNode<JSArray> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = CastHeapObject9ATJSArray(TNode<HeapObject>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<HeapObject> tmp2;
    TNode<HeapObject> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<HeapObject> tmp4;
    TNode<HeapObject> tmp5;
    TNode<JSArray> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<JSArray> tmp7;
    Bind(&block2, &tmp7);
  return TNode<JSArray>{tmp7};
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::Cast12ATJSDataView(TNode<Object> p_o, Label* label_CastError) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, HeapObject> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject, JSDataView> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSDataView> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<HeapObject> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = TaggedToHeapObject(TNode<Object>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<HeapObject> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    TNode<JSDataView> tmp7;
    USE(tmp7);
    Label label0(this);
    tmp7 = CastHeapObject12ATJSDataView(TNode<HeapObject>{tmp6}, &label0);
    Goto(&block5, tmp4, tmp6, tmp7);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block6, tmp4, tmp6);
    }
  }

  if (block6.is_used()) {
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    Bind(&block6, &tmp8, &tmp9);
    Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Object> tmp10;
    TNode<HeapObject> tmp11;
    TNode<JSDataView> tmp12;
    Bind(&block5, &tmp10, &tmp11, &tmp12);
    Goto(&block2, tmp12);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<JSDataView> tmp13;
    Bind(&block2, &tmp13);
  return TNode<JSDataView>{tmp13};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat64(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Float64T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Float64T> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Float64T>(FromConstexpr9ATfloat64(p_i));
    Goto(&block1, tmp0);
  }

    TNode<Float64T> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Float64T>{tmp1};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr(int31_t p_i) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<IntPtrT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(p_i));
    Goto(&block1, tmp0);
  }

    TNode<IntPtrT> tmp1;
    Bind(&block1, &tmp1);
  return TNode<IntPtrT>{tmp1};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::Cast12ATFixedArray(TNode<Object> p_o, Label* label_CastError) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, HeapObject> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, HeapObject, FixedArray> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<HeapObject> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = TaggedToHeapObject(TNode<Object>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<HeapObject> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    TNode<FixedArray> tmp7;
    USE(tmp7);
    Label label0(this);
    tmp7 = CastHeapObject12ATFixedArray(TNode<HeapObject>{tmp6}, &label0);
    Goto(&block5, tmp4, tmp6, tmp7);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block6, tmp4, tmp6);
    }
  }

  if (block6.is_used()) {
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    Bind(&block6, &tmp8, &tmp9);
    Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Object> tmp10;
    TNode<HeapObject> tmp11;
    TNode<FixedArray> tmp12;
    Bind(&block5, &tmp10, &tmp11, &tmp12);
    Goto(&block2, tmp12);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_CastError);
  }

    TNode<FixedArray> tmp13;
    Bind(&block2, &tmp13);
  return TNode<FixedArray>{tmp13};
}

}  // namespace internal
}  // namespace v8

