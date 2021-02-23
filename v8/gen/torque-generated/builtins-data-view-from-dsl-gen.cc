#include "src/builtins/builtins-data-view-gen.h"
#include "src/objects/arguments.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-data-view-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewGetterNameString(ElementsKind p_kind) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block17(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block18(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block20(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block21(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block23(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block24(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block26(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block27(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block29(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block30(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    if ((ElementsKindEqual(p_kind, UINT8_ELEMENTS))) {
      Goto(&block2);
    } else {
      Goto(&block3);
    }
  }

  if (block2.is_used()) {
    Bind(&block2);
    TNode<String> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getUint8"));
    Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    Bind(&block3);
    if ((ElementsKindEqual(p_kind, INT8_ELEMENTS))) {
      Goto(&block5);
    } else {
      Goto(&block6);
    }
  }

  if (block5.is_used()) {
    Bind(&block5);
    TNode<String> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getInt8"));
    Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    Bind(&block6);
    if ((ElementsKindEqual(p_kind, UINT16_ELEMENTS))) {
      Goto(&block8);
    } else {
      Goto(&block9);
    }
  }

  if (block8.is_used()) {
    Bind(&block8);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getUint16"));
    Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    Bind(&block9);
    if ((ElementsKindEqual(p_kind, INT16_ELEMENTS))) {
      Goto(&block11);
    } else {
      Goto(&block12);
    }
  }

  if (block11.is_used()) {
    Bind(&block11);
    TNode<String> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getInt16"));
    Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    Bind(&block12);
    if ((ElementsKindEqual(p_kind, UINT32_ELEMENTS))) {
      Goto(&block14);
    } else {
      Goto(&block15);
    }
  }

  if (block14.is_used()) {
    Bind(&block14);
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getUint32"));
    Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    Bind(&block15);
    if ((ElementsKindEqual(p_kind, INT32_ELEMENTS))) {
      Goto(&block17);
    } else {
      Goto(&block18);
    }
  }

  if (block17.is_used()) {
    Bind(&block17);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getInt32"));
    Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    Bind(&block18);
    if ((ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      Goto(&block20);
    } else {
      Goto(&block21);
    }
  }

  if (block20.is_used()) {
    Bind(&block20);
    TNode<String> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getFloat32"));
    Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    Bind(&block21);
    if ((ElementsKindEqual(p_kind, FLOAT64_ELEMENTS))) {
      Goto(&block23);
    } else {
      Goto(&block24);
    }
  }

  if (block23.is_used()) {
    Bind(&block23);
    TNode<String> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getFloat64"));
    Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    Bind(&block24);
    if ((ElementsKindEqual(p_kind, BIGINT64_ELEMENTS))) {
      Goto(&block26);
    } else {
      Goto(&block27);
    }
  }

  if (block26.is_used()) {
    Bind(&block26);
    TNode<String> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getBigInt64"));
    Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    Bind(&block27);
    if ((ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS))) {
      Goto(&block29);
    } else {
      Goto(&block30);
    }
  }

  if (block29.is_used()) {
    Bind(&block29);
    TNode<String> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.getBigUint64"));
    Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    Bind(&block30);
    Unreachable();
  }

    TNode<String> tmp10;
    Bind(&block1, &tmp10);
  return TNode<String>{tmp10};
}

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewSetterNameString(ElementsKind p_kind) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block17(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block18(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block20(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block21(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block23(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block24(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block26(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block27(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block29(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block30(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    if ((ElementsKindEqual(p_kind, UINT8_ELEMENTS))) {
      Goto(&block2);
    } else {
      Goto(&block3);
    }
  }

  if (block2.is_used()) {
    Bind(&block2);
    TNode<String> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setUint8"));
    Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    Bind(&block3);
    if ((ElementsKindEqual(p_kind, INT8_ELEMENTS))) {
      Goto(&block5);
    } else {
      Goto(&block6);
    }
  }

  if (block5.is_used()) {
    Bind(&block5);
    TNode<String> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setInt8"));
    Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    Bind(&block6);
    if ((ElementsKindEqual(p_kind, UINT16_ELEMENTS))) {
      Goto(&block8);
    } else {
      Goto(&block9);
    }
  }

  if (block8.is_used()) {
    Bind(&block8);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setUint16"));
    Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    Bind(&block9);
    if ((ElementsKindEqual(p_kind, INT16_ELEMENTS))) {
      Goto(&block11);
    } else {
      Goto(&block12);
    }
  }

  if (block11.is_used()) {
    Bind(&block11);
    TNode<String> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setInt16"));
    Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    Bind(&block12);
    if ((ElementsKindEqual(p_kind, UINT32_ELEMENTS))) {
      Goto(&block14);
    } else {
      Goto(&block15);
    }
  }

  if (block14.is_used()) {
    Bind(&block14);
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setUint32"));
    Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    Bind(&block15);
    if ((ElementsKindEqual(p_kind, INT32_ELEMENTS))) {
      Goto(&block17);
    } else {
      Goto(&block18);
    }
  }

  if (block17.is_used()) {
    Bind(&block17);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setInt32"));
    Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    Bind(&block18);
    if ((ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      Goto(&block20);
    } else {
      Goto(&block21);
    }
  }

  if (block20.is_used()) {
    Bind(&block20);
    TNode<String> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setFloat32"));
    Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    Bind(&block21);
    if ((ElementsKindEqual(p_kind, FLOAT64_ELEMENTS))) {
      Goto(&block23);
    } else {
      Goto(&block24);
    }
  }

  if (block23.is_used()) {
    Bind(&block23);
    TNode<String> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setFloat64"));
    Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    Bind(&block24);
    if ((ElementsKindEqual(p_kind, BIGINT64_ELEMENTS))) {
      Goto(&block26);
    } else {
      Goto(&block27);
    }
  }

  if (block26.is_used()) {
    Bind(&block26);
    TNode<String> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setBigInt64"));
    Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    Bind(&block27);
    if ((ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS))) {
      Goto(&block29);
    } else {
      Goto(&block30);
    }
  }

  if (block29.is_used()) {
    Bind(&block29);
    TNode<String> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<String>(FromConstexpr8ATString("DataView.prototype.setBigUint64"));
    Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    Bind(&block30);
    Unreachable();
  }

    TNode<String> tmp10;
    Bind(&block1, &tmp10);
  return TNode<String>{tmp10};
}

compiler::TNode<BoolT> DataViewBuiltinsFromDSLAssembler::WasNeutered(TNode<JSArrayBufferView> p_view) {
  PLabel<JSArrayBufferView> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_view);

  if (block0.is_used()) {
    TNode<JSArrayBufferView> tmp0;
    Bind(&block0, &tmp0);
    TNode<JSArrayBuffer> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<JSArrayBuffer>(LoadJSArrayBufferViewBuffer(TNode<JSArrayBufferView>{tmp0}));
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(IsDetachedBuffer(TNode<JSArrayBuffer>{tmp1}));
    Goto(&block1, tmp2);
  }

    TNode<BoolT> tmp3;
    Bind(&block1, &tmp3);
  return TNode<BoolT>{tmp3};
}

compiler::TNode<JSDataView> DataViewBuiltinsFromDSLAssembler::ValidateDataView(TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method) {
  PLabel<Context, Object, String> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, String, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, String, Object, JSDataView> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, String> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSDataView> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context, p_o, p_method);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<String> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    TNode<JSDataView> tmp3;
    USE(tmp3);
    Label label0(this);
    tmp3 = Cast12ATJSDataView(TNode<Object>{tmp1}, &label0);
    Goto(&block4, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block5, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<String> tmp6;
    TNode<Object> tmp7;
    Bind(&block5, &tmp4, &tmp5, &tmp6, &tmp7);
    Goto(&block3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<String> tmp10;
    TNode<Object> tmp11;
    TNode<JSDataView> tmp12;
    Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    Goto(&block1, tmp12);
  }

  if (block3.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<String> tmp15;
    Bind(&block3, &tmp13, &tmp14, &tmp15);
    ThrowTypeError(TNode<Context>{tmp13}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp15});
  }

    TNode<JSDataView> tmp16;
    Bind(&block1, &tmp16);
  return TNode<JSDataView>{tmp16};
}

TF_BUILTIN(DataViewPrototypeGetBuffer, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<String>(FromConstexpr8ATString("get DataView.prototype.buffer"));
    TNode<JSDataView> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<JSDataView>(ValidateDataView(TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp2}));
    TNode<JSArrayBuffer> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<JSArrayBuffer>(LoadJSArrayBufferViewBuffer(TNode<JSArrayBufferView>{tmp3}));
    arguments->PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteLength, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, JSDataView> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, JSDataView> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<String>(FromConstexpr8ATString("get DataView.prototype.byte_length"));
    TNode<JSDataView> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<JSDataView>(ValidateDataView(TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp2}));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(WasNeutered(TNode<JSArrayBufferView>{tmp3}));
    Branch(tmp4, &block1, &block2, tmp0, tmp1, tmp3);
  }

  if (block1.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    TNode<JSDataView> tmp7;
    Bind(&block1, &tmp5, &tmp6, &tmp7);
    TNode<Number> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(0));
    arguments->PopAndReturn(tmp8);
  }

  if (block2.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    TNode<JSDataView> tmp11;
    Bind(&block2, &tmp9, &tmp10, &tmp11);
    TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteLength(TNode<JSArrayBufferView>{tmp11}));
    TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(TNode<UintPtrT>{tmp12}));
    arguments->PopAndReturn(tmp13);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteOffset, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, JSDataView> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, JSDataView> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<String>(FromConstexpr8ATString("get DataView.prototype.byte_offset"));
    TNode<JSDataView> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<JSDataView>(ValidateDataView(TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp2}));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(WasNeutered(TNode<JSArrayBufferView>{tmp3}));
    Branch(tmp4, &block1, &block2, tmp0, tmp1, tmp3);
  }

  if (block1.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    TNode<JSDataView> tmp7;
    Bind(&block1, &tmp5, &tmp6, &tmp7);
    TNode<Number> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(0));
    arguments->PopAndReturn(tmp8);
  }

  if (block2.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    TNode<JSDataView> tmp11;
    Bind(&block2, &tmp9, &tmp10, &tmp11);
    TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteOffset(TNode<JSArrayBufferView>{tmp11}));
    TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(TNode<UintPtrT>{tmp12}));
    arguments->PopAndReturn(tmp13);
  }
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataView8(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, bool p_signed) {
  PLabel<JSArrayBuffer, UintPtrT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    if (p_signed) {
      Goto(&block2, tmp0, tmp1);
    } else {
      Goto(&block3, tmp0, tmp1);
    }
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp2;
    TNode<UintPtrT> tmp3;
    Bind(&block2, &tmp2, &tmp3);
    TNode<RawPtrT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp2}));
    TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<Int32T>(LoadInt8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp3}));
    TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Smi>(Convert5ATSmi(TNode<Int32T>{tmp5}));
    Goto(&block1, tmp6);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp7;
    TNode<UintPtrT> tmp8;
    Bind(&block3, &tmp7, &tmp8);
    TNode<RawPtrT> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp7}));
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp9}, TNode<UintPtrT>{tmp8}));
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Smi>(Convert5ATSmi(TNode<Uint32T>{tmp10}));
    Goto(&block1, tmp11);
  }

    TNode<Smi> tmp12;
    Bind(&block1, &tmp12);
  return TNode<Smi>{tmp12};
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView16(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  PLabel<JSArrayBuffer, UintPtrT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp0}));
    Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp3, Uninitialized<Int32T>(), Uninitialized<Int32T>(), Uninitialized<Int32T>());
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp4;
    TNode<UintPtrT> tmp5;
    TNode<BoolT> tmp6;
    TNode<RawPtrT> tmp7;
    TNode<Int32T> tmp8;
    TNode<Int32T> tmp9;
    TNode<Int32T> tmp10;
    Bind(&block2, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp7}, TNode<UintPtrT>{tmp5}));
    TNode<Int32T> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<Int32T>(Signed(TNode<Uint32T>{tmp11}));
    TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp5}, TNode<UintPtrT>{tmp13}));
    TNode<Int32T> tmp15;
    USE(tmp15);
    tmp15 = UncheckedCast<Int32T>(LoadInt8(TNode<RawPtrT>{tmp7}, TNode<UintPtrT>{tmp14}));
    TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<Int32T>(FromConstexpr7ATint32(8));
    TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<Int32T>(Word32Shl(TNode<Int32T>{tmp15}, TNode<Int32T>{tmp16}));
    TNode<Int32T> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<Int32T>(Int32Add(TNode<Int32T>{tmp17}, TNode<Int32T>{tmp12}));
    Goto(&block4, tmp4, tmp5, tmp6, tmp7, tmp12, tmp15, tmp18);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp19;
    TNode<UintPtrT> tmp20;
    TNode<BoolT> tmp21;
    TNode<RawPtrT> tmp22;
    TNode<Int32T> tmp23;
    TNode<Int32T> tmp24;
    TNode<Int32T> tmp25;
    Bind(&block3, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    TNode<Int32T> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<Int32T>(LoadInt8(TNode<RawPtrT>{tmp22}, TNode<UintPtrT>{tmp20}));
    TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp20}, TNode<UintPtrT>{tmp27}));
    TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp22}, TNode<UintPtrT>{tmp28}));
    TNode<Int32T> tmp30;
    USE(tmp30);
    tmp30 = UncheckedCast<Int32T>(Signed(TNode<Uint32T>{tmp29}));
    TNode<Int32T> tmp31;
    USE(tmp31);
    tmp31 = UncheckedCast<Int32T>(FromConstexpr7ATint32(8));
    TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = UncheckedCast<Int32T>(Word32Shl(TNode<Int32T>{tmp26}, TNode<Int32T>{tmp31}));
    TNode<Int32T> tmp33;
    USE(tmp33);
    tmp33 = UncheckedCast<Int32T>(Int32Add(TNode<Int32T>{tmp32}, TNode<Int32T>{tmp30}));
    Goto(&block4, tmp19, tmp20, tmp21, tmp22, tmp26, tmp30, tmp33);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp34;
    TNode<UintPtrT> tmp35;
    TNode<BoolT> tmp36;
    TNode<RawPtrT> tmp37;
    TNode<Int32T> tmp38;
    TNode<Int32T> tmp39;
    TNode<Int32T> tmp40;
    Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    if (p_signed) {
      Goto(&block5, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
    } else {
      Goto(&block6, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
    }
  }

  if (block5.is_used()) {
    TNode<JSArrayBuffer> tmp41;
    TNode<UintPtrT> tmp42;
    TNode<BoolT> tmp43;
    TNode<RawPtrT> tmp44;
    TNode<Int32T> tmp45;
    TNode<Int32T> tmp46;
    TNode<Int32T> tmp47;
    Bind(&block5, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = UncheckedCast<Smi>(Convert5ATSmi(TNode<Int32T>{tmp47}));
    Goto(&block1, tmp48);
  }

  if (block6.is_used()) {
    TNode<JSArrayBuffer> tmp49;
    TNode<UintPtrT> tmp50;
    TNode<BoolT> tmp51;
    TNode<RawPtrT> tmp52;
    TNode<Int32T> tmp53;
    TNode<Int32T> tmp54;
    TNode<Int32T> tmp55;
    Bind(&block6, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    TNode<Int32T> tmp56;
    USE(tmp56);
    tmp56 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0xFFFF));
    TNode<Int32T> tmp57;
    USE(tmp57);
    tmp57 = UncheckedCast<Int32T>(Word32And(TNode<Int32T>{tmp55}, TNode<Int32T>{tmp56}));
    TNode<Smi> tmp58;
    USE(tmp58);
    tmp58 = UncheckedCast<Smi>(Convert5ATSmi(TNode<Int32T>{tmp57}));
    Goto(&block1, tmp58);
  }

    TNode<Number> tmp59;
    Bind(&block1, &tmp59);
  return TNode<Number>{tmp59};
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView32(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, ElementsKind p_kind) {
  PLabel<JSArrayBuffer, UintPtrT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp0}));
    TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp1}));
    TNode<UintPtrT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp5}));
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp6}));
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(2));
    TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp8}));
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp9}));
    TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(3));
    TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp11}));
    TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp12}));
    Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp7, tmp10, tmp13, Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp14;
    TNode<UintPtrT> tmp15;
    TNode<BoolT> tmp16;
    TNode<RawPtrT> tmp17;
    TNode<Uint32T> tmp18;
    TNode<Uint32T> tmp19;
    TNode<Uint32T> tmp20;
    TNode<Uint32T> tmp21;
    TNode<Uint32T> tmp22;
    Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    TNode<Uint32T> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp21}, TNode<Uint32T>{tmp23}));
    TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp20}, TNode<Uint32T>{tmp25}));
    TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp24}, TNode<Uint32T>{tmp26}));
    TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp19}, TNode<Uint32T>{tmp28}));
    TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp27}, TNode<Uint32T>{tmp29}));
    TNode<Uint32T> tmp31;
    USE(tmp31);
    tmp31 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp30}, TNode<Uint32T>{tmp18}));
    Goto(&block4, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp31);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp32;
    TNode<UintPtrT> tmp33;
    TNode<BoolT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<Uint32T> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    Bind(&block3, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    TNode<Uint32T> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp41}));
    TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp37}, TNode<Uint32T>{tmp43}));
    TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp42}, TNode<Uint32T>{tmp44}));
    TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp38}, TNode<Uint32T>{tmp46}));
    TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp45}, TNode<Uint32T>{tmp47}));
    TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp48}, TNode<Uint32T>{tmp39}));
    Goto(&block4, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp49);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp50;
    TNode<UintPtrT> tmp51;
    TNode<BoolT> tmp52;
    TNode<RawPtrT> tmp53;
    TNode<Uint32T> tmp54;
    TNode<Uint32T> tmp55;
    TNode<Uint32T> tmp56;
    TNode<Uint32T> tmp57;
    TNode<Uint32T> tmp58;
    Bind(&block4, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    if ((ElementsKindEqual(p_kind, INT32_ELEMENTS))) {
      Goto(&block5, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58);
    } else {
      Goto(&block6, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58);
    }
  }

  if (block5.is_used()) {
    TNode<JSArrayBuffer> tmp59;
    TNode<UintPtrT> tmp60;
    TNode<BoolT> tmp61;
    TNode<RawPtrT> tmp62;
    TNode<Uint32T> tmp63;
    TNode<Uint32T> tmp64;
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<Uint32T> tmp67;
    Bind(&block5, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    TNode<Int32T> tmp68;
    USE(tmp68);
    tmp68 = UncheckedCast<Int32T>(Signed(TNode<Uint32T>{tmp67}));
    TNode<Number> tmp69;
    USE(tmp69);
    tmp69 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(TNode<Int32T>{tmp68}));
    Goto(&block1, tmp69);
  }

  if (block6.is_used()) {
    TNode<JSArrayBuffer> tmp70;
    TNode<UintPtrT> tmp71;
    TNode<BoolT> tmp72;
    TNode<RawPtrT> tmp73;
    TNode<Uint32T> tmp74;
    TNode<Uint32T> tmp75;
    TNode<Uint32T> tmp76;
    TNode<Uint32T> tmp77;
    TNode<Uint32T> tmp78;
    Bind(&block6, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    if ((ElementsKindEqual(p_kind, UINT32_ELEMENTS))) {
      Goto(&block8, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78);
    } else {
      Goto(&block9, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78);
    }
  }

  if (block8.is_used()) {
    TNode<JSArrayBuffer> tmp79;
    TNode<UintPtrT> tmp80;
    TNode<BoolT> tmp81;
    TNode<RawPtrT> tmp82;
    TNode<Uint32T> tmp83;
    TNode<Uint32T> tmp84;
    TNode<Uint32T> tmp85;
    TNode<Uint32T> tmp86;
    TNode<Uint32T> tmp87;
    Bind(&block8, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    TNode<Number> tmp88;
    USE(tmp88);
    tmp88 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(TNode<Uint32T>{tmp87}));
    Goto(&block1, tmp88);
  }

  if (block9.is_used()) {
    TNode<JSArrayBuffer> tmp89;
    TNode<UintPtrT> tmp90;
    TNode<BoolT> tmp91;
    TNode<RawPtrT> tmp92;
    TNode<Uint32T> tmp93;
    TNode<Uint32T> tmp94;
    TNode<Uint32T> tmp95;
    TNode<Uint32T> tmp96;
    TNode<Uint32T> tmp97;
    Bind(&block9, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    if ((ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      Goto(&block11, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97);
    } else {
      Goto(&block12, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97);
    }
  }

  if (block11.is_used()) {
    TNode<JSArrayBuffer> tmp98;
    TNode<UintPtrT> tmp99;
    TNode<BoolT> tmp100;
    TNode<RawPtrT> tmp101;
    TNode<Uint32T> tmp102;
    TNode<Uint32T> tmp103;
    TNode<Uint32T> tmp104;
    TNode<Uint32T> tmp105;
    TNode<Uint32T> tmp106;
    Bind(&block11, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    TNode<Float32T> tmp107;
    USE(tmp107);
    tmp107 = UncheckedCast<Float32T>(BitcastInt32ToFloat32(TNode<Uint32T>{tmp106}));
    TNode<Float64T> tmp108;
    USE(tmp108);
    tmp108 = UncheckedCast<Float64T>(Convert9ATfloat64(TNode<Float32T>{tmp107}));
    TNode<Number> tmp109;
    USE(tmp109);
    tmp109 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(TNode<Float64T>{tmp108}));
    Goto(&block1, tmp109);
  }

  if (block12.is_used()) {
    TNode<JSArrayBuffer> tmp110;
    TNode<UintPtrT> tmp111;
    TNode<BoolT> tmp112;
    TNode<RawPtrT> tmp113;
    TNode<Uint32T> tmp114;
    TNode<Uint32T> tmp115;
    TNode<Uint32T> tmp116;
    TNode<Uint32T> tmp117;
    TNode<Uint32T> tmp118;
    Bind(&block12, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    Unreachable();
  }

    TNode<Number> tmp119;
    Bind(&block1, &tmp119);
  return TNode<Number>{tmp119};
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat64(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian) {
  PLabel<JSArrayBuffer, UintPtrT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp0}));
    TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp1}));
    TNode<UintPtrT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp5}));
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp6}));
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(2));
    TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp8}));
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp9}));
    TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(3));
    TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp11}));
    TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp12}));
    TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(4));
    TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp14}));
    TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp15}));
    TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(5));
    TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp17}));
    TNode<Uint32T> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp18}));
    TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(6));
    TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp20}));
    TNode<Uint32T> tmp22;
    USE(tmp22);
    tmp22 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp21}));
    TNode<UintPtrT> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(7));
    TNode<UintPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp23}));
    TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp24}));
    Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp7, tmp10, tmp13, tmp16, tmp19, tmp22, tmp25, Uninitialized<Uint32T>(), Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp26;
    TNode<UintPtrT> tmp27;
    TNode<BoolT> tmp28;
    TNode<RawPtrT> tmp29;
    TNode<Uint32T> tmp30;
    TNode<Uint32T> tmp31;
    TNode<Uint32T> tmp32;
    TNode<Uint32T> tmp33;
    TNode<Uint32T> tmp34;
    TNode<Uint32T> tmp35;
    TNode<Uint32T> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    Bind(&block2, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<Uint32T> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp33}, TNode<Uint32T>{tmp40}));
    TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp32}, TNode<Uint32T>{tmp42}));
    TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp41}, TNode<Uint32T>{tmp43}));
    TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp31}, TNode<Uint32T>{tmp45}));
    TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp44}, TNode<Uint32T>{tmp46}));
    TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp47}, TNode<Uint32T>{tmp30}));
    TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp37}, TNode<Uint32T>{tmp49}));
    TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp51}));
    TNode<Uint32T> tmp53;
    USE(tmp53);
    tmp53 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp50}, TNode<Uint32T>{tmp52}));
    TNode<Uint32T> tmp54;
    USE(tmp54);
    tmp54 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp35}, TNode<Uint32T>{tmp54}));
    TNode<Uint32T> tmp56;
    USE(tmp56);
    tmp56 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp53}, TNode<Uint32T>{tmp55}));
    TNode<Uint32T> tmp57;
    USE(tmp57);
    tmp57 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp34}));
    Goto(&block4, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp48, tmp57);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp58;
    TNode<UintPtrT> tmp59;
    TNode<BoolT> tmp60;
    TNode<RawPtrT> tmp61;
    TNode<Uint32T> tmp62;
    TNode<Uint32T> tmp63;
    TNode<Uint32T> tmp64;
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<Uint32T> tmp67;
    TNode<Uint32T> tmp68;
    TNode<Uint32T> tmp69;
    TNode<Uint32T> tmp70;
    TNode<Uint32T> tmp71;
    Bind(&block3, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<Uint32T> tmp72;
    USE(tmp72);
    tmp72 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp73;
    USE(tmp73);
    tmp73 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp62}, TNode<Uint32T>{tmp72}));
    TNode<Uint32T> tmp74;
    USE(tmp74);
    tmp74 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp75;
    USE(tmp75);
    tmp75 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp63}, TNode<Uint32T>{tmp74}));
    TNode<Uint32T> tmp76;
    USE(tmp76);
    tmp76 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp73}, TNode<Uint32T>{tmp75}));
    TNode<Uint32T> tmp77;
    USE(tmp77);
    tmp77 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp78;
    USE(tmp78);
    tmp78 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp64}, TNode<Uint32T>{tmp77}));
    TNode<Uint32T> tmp79;
    USE(tmp79);
    tmp79 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp76}, TNode<Uint32T>{tmp78}));
    TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp79}, TNode<Uint32T>{tmp65}));
    TNode<Uint32T> tmp81;
    USE(tmp81);
    tmp81 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp82;
    USE(tmp82);
    tmp82 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp66}, TNode<Uint32T>{tmp81}));
    TNode<Uint32T> tmp83;
    USE(tmp83);
    tmp83 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp84;
    USE(tmp84);
    tmp84 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp67}, TNode<Uint32T>{tmp83}));
    TNode<Uint32T> tmp85;
    USE(tmp85);
    tmp85 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp82}, TNode<Uint32T>{tmp84}));
    TNode<Uint32T> tmp86;
    USE(tmp86);
    tmp86 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp87;
    USE(tmp87);
    tmp87 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp68}, TNode<Uint32T>{tmp86}));
    TNode<Uint32T> tmp88;
    USE(tmp88);
    tmp88 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp85}, TNode<Uint32T>{tmp87}));
    TNode<Uint32T> tmp89;
    USE(tmp89);
    tmp89 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp88}, TNode<Uint32T>{tmp69}));
    Goto(&block4, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp89, tmp80);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp90;
    TNode<UintPtrT> tmp91;
    TNode<BoolT> tmp92;
    TNode<RawPtrT> tmp93;
    TNode<Uint32T> tmp94;
    TNode<Uint32T> tmp95;
    TNode<Uint32T> tmp96;
    TNode<Uint32T> tmp97;
    TNode<Uint32T> tmp98;
    TNode<Uint32T> tmp99;
    TNode<Uint32T> tmp100;
    TNode<Uint32T> tmp101;
    TNode<Uint32T> tmp102;
    TNode<Uint32T> tmp103;
    Bind(&block4, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    TNode<Float64T> tmp104;
    USE(tmp104);
    tmp104 = UncheckedCast<Float64T>(FromConstexpr9ATfloat64(0));
    TNode<Float64T> tmp105;
    USE(tmp105);
    tmp105 = UncheckedCast<Float64T>(Float64InsertLowWord32(TNode<Float64T>{tmp104}, TNode<Uint32T>{tmp102}));
    TNode<Float64T> tmp106;
    USE(tmp106);
    tmp106 = UncheckedCast<Float64T>(Float64InsertHighWord32(TNode<Float64T>{tmp105}, TNode<Uint32T>{tmp103}));
    TNode<Number> tmp107;
    USE(tmp107);
    tmp107 = UncheckedCast<Number>(Convert22UT12ATHeapNumber5ATSmi(TNode<Float64T>{tmp106}));
    Goto(&block1, tmp107);
  }

    TNode<Number> tmp108;
    Bind(&block1, &tmp108);
  return TNode<Number>{tmp108};
}

bool DataViewBuiltinsFromDSLAssembler::kPositiveBigInt() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
return false;
}

bool DataViewBuiltinsFromDSLAssembler::kNegativeBigInt() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
return true;
}

int31_t DataViewBuiltinsFromDSLAssembler::kZeroDigitBigInt() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
return 0;
}

int31_t DataViewBuiltinsFromDSLAssembler::kOneDigitBigInt() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
return 1;
}

int31_t DataViewBuiltinsFromDSLAssembler::kTwoDigitBigInt() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
return 2;
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::CreateEmptyBigInt(TNode<BoolT> p_isPositive, int31_t p_length) {
  PLabel<BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BigInt> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BigInt> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BigInt> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BigInt> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_isPositive);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    Bind(&block0, &tmp0);
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(p_length));
    TNode<BigInt> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BigInt>(AllocateBigInt(TNode<IntPtrT>{tmp1}));
    Branch(tmp0, &block2, &block3, tmp0, tmp2);
  }

  if (block2.is_used()) {
    TNode<BoolT> tmp3;
    TNode<BigInt> tmp4;
    Bind(&block2, &tmp3, &tmp4);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(kPositiveBigInt(), p_length));
    StoreBigIntBitfield(TNode<BigInt>{tmp4}, TNode<IntPtrT>{tmp5});
    Goto(&block4, tmp3, tmp4);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp6;
    TNode<BigInt> tmp7;
    Bind(&block3, &tmp6, &tmp7);
    TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(kNegativeBigInt(), p_length));
    StoreBigIntBitfield(TNode<BigInt>{tmp7}, TNode<IntPtrT>{tmp8});
    Goto(&block4, tmp6, tmp7);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp9;
    TNode<BigInt> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    Goto(&block1, tmp10);
  }

    TNode<BigInt> tmp11;
    Bind(&block1, &tmp11);
  return TNode<BigInt>{tmp11};
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn64Bit(TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  PLabel<Uint32T, Uint32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BigInt> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_lowWord, p_highWord);

  if (block0.is_used()) {
    TNode<Uint32T> tmp0;
    TNode<Uint32T> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<Uint32T> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(Word32Equal(TNode<Uint32T>{tmp0}, TNode<Uint32T>{tmp2}));
    Branch(tmp3, &block4, &block3, tmp0, tmp1);
  }

  if (block4.is_used()) {
    TNode<Uint32T> tmp4;
    TNode<Uint32T> tmp5;
    Bind(&block4, &tmp4, &tmp5);
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0));
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<BoolT>(Word32Equal(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6}));
    Branch(tmp7, &block2, &block3, tmp4, tmp5);
  }

  if (block2.is_used()) {
    TNode<Uint32T> tmp8;
    TNode<Uint32T> tmp9;
    Bind(&block2, &tmp8, &tmp9);
    TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(kZeroDigitBigInt()));
    TNode<BigInt> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<BigInt>(AllocateBigInt(TNode<IntPtrT>{tmp10}));
    Goto(&block1, tmp11);
  }

  if (block3.is_used()) {
    TNode<Uint32T> tmp12;
    TNode<Uint32T> tmp13;
    Bind(&block3, &tmp12, &tmp13);
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = UncheckedCast<UintPtrT>(Convert9ATuintptr(TNode<Uint32T>{tmp13}));
    TNode<IntPtrT> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<IntPtrT>(Signed(TNode<UintPtrT>{tmp15}));
    TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<UintPtrT>(Convert9ATuintptr(TNode<Uint32T>{tmp12}));
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(Signed(TNode<UintPtrT>{tmp17}));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(32));
    TNode<IntPtrT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<IntPtrT>(WordShl(TNode<IntPtrT>{tmp16}, TNode<IntPtrT>{tmp19}));
    TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = UncheckedCast<IntPtrT>(IntPtrAdd(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp18}));
    if (p_signed) {
      Goto(&block5, tmp12, tmp13, tmp14, tmp16, tmp18, tmp21);
    } else {
      Goto(&block6, tmp12, tmp13, tmp14, tmp16, tmp18, tmp21);
    }
  }

  if (block5.is_used()) {
    TNode<Uint32T> tmp22;
    TNode<Uint32T> tmp23;
    TNode<BoolT> tmp24;
    TNode<IntPtrT> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<IntPtrT> tmp27;
    Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    TNode<IntPtrT> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = UncheckedCast<BoolT>(IntPtrLessThan(TNode<IntPtrT>{tmp27}, TNode<IntPtrT>{tmp28}));
    Branch(tmp29, &block8, &block9, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block8.is_used()) {
    TNode<Uint32T> tmp30;
    TNode<Uint32T> tmp31;
    TNode<BoolT> tmp32;
    TNode<IntPtrT> tmp33;
    TNode<IntPtrT> tmp34;
    TNode<IntPtrT> tmp35;
    Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<IntPtrT> tmp37;
    USE(tmp37);
    tmp37 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(IntPtrSub(TNode<IntPtrT>{tmp37}, TNode<IntPtrT>{tmp35}));
    Goto(&block9, tmp30, tmp31, tmp36, tmp33, tmp34, tmp38);
  }

  if (block9.is_used()) {
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    TNode<BoolT> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<IntPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    Bind(&block9, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    Goto(&block7, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block6.is_used()) {
    TNode<Uint32T> tmp45;
    TNode<Uint32T> tmp46;
    TNode<BoolT> tmp47;
    TNode<IntPtrT> tmp48;
    TNode<IntPtrT> tmp49;
    TNode<IntPtrT> tmp50;
    Bind(&block6, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    Goto(&block7, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block7.is_used()) {
    TNode<Uint32T> tmp51;
    TNode<Uint32T> tmp52;
    TNode<BoolT> tmp53;
    TNode<IntPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<IntPtrT> tmp56;
    Bind(&block7, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    TNode<BigInt> tmp57;
    USE(tmp57);
    tmp57 = UncheckedCast<BigInt>(CreateEmptyBigInt(TNode<BoolT>{tmp53}, kOneDigitBigInt()));
    TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = UncheckedCast<UintPtrT>(Unsigned(TNode<IntPtrT>{tmp56}));
    StoreBigIntDigit(TNode<BigInt>{tmp57}, 0, TNode<UintPtrT>{tmp58});
    Goto(&block1, tmp57);
  }

    TNode<BigInt> tmp59;
    Bind(&block1, &tmp59);
  return TNode<BigInt>{tmp59};
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn32Bit(TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  PLabel<Uint32T, Uint32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, Int32T> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, Int32T> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, Int32T, Int32T> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, Int32T, Int32T> block16(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block17(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block18(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block19(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block20(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block21(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BigInt> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_lowWord, p_highWord);

  if (block0.is_used()) {
    TNode<Uint32T> tmp0;
    TNode<Uint32T> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<Uint32T> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(Word32Equal(TNode<Uint32T>{tmp0}, TNode<Uint32T>{tmp2}));
    Branch(tmp3, &block4, &block3, tmp0, tmp1);
  }

  if (block4.is_used()) {
    TNode<Uint32T> tmp4;
    TNode<Uint32T> tmp5;
    Bind(&block4, &tmp4, &tmp5);
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0));
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<BoolT>(Word32Equal(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6}));
    Branch(tmp7, &block2, &block3, tmp4, tmp5);
  }

  if (block2.is_used()) {
    TNode<Uint32T> tmp8;
    TNode<Uint32T> tmp9;
    Bind(&block2, &tmp8, &tmp9);
    TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(kZeroDigitBigInt()));
    TNode<BigInt> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<BigInt>(AllocateBigInt(TNode<IntPtrT>{tmp10}));
    Goto(&block1, tmp11);
  }

  if (block3.is_used()) {
    TNode<Uint32T> tmp12;
    TNode<Uint32T> tmp13;
    Bind(&block3, &tmp12, &tmp13);
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<Int32T>(Signed(TNode<Uint32T>{tmp12}));
    TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<Int32T>(Signed(TNode<Uint32T>{tmp13}));
    TNode<Uint32T> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0));
    TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<BoolT>(Word32NotEqual(TNode<Uint32T>{tmp13}, TNode<Uint32T>{tmp18}));
    Branch(tmp19, &block5, &block6, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    TNode<Uint32T> tmp20;
    TNode<Uint32T> tmp21;
    TNode<BoolT> tmp22;
    TNode<BoolT> tmp23;
    TNode<Int32T> tmp24;
    TNode<Int32T> tmp25;
    Bind(&block5, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    if (p_signed) {
      Goto(&block7, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
    } else {
      Goto(&block8, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
    }
  }

  if (block7.is_used()) {
    TNode<Uint32T> tmp26;
    TNode<Uint32T> tmp27;
    TNode<BoolT> tmp28;
    TNode<BoolT> tmp29;
    TNode<Int32T> tmp30;
    TNode<Int32T> tmp31;
    Bind(&block7, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0));
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = UncheckedCast<BoolT>(Int32LessThan(TNode<Int32T>{tmp31}, TNode<Int32T>{tmp32}));
    Branch(tmp33, &block10, &block11, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block10.is_used()) {
    TNode<Uint32T> tmp34;
    TNode<Uint32T> tmp35;
    TNode<BoolT> tmp36;
    TNode<BoolT> tmp37;
    TNode<Int32T> tmp38;
    TNode<Int32T> tmp39;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<Int32T> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0));
    TNode<Int32T> tmp42;
    USE(tmp42);
    tmp42 = UncheckedCast<Int32T>(Int32Sub(TNode<Int32T>{tmp41}, TNode<Int32T>{tmp39}));
    TNode<Int32T> tmp43;
    USE(tmp43);
    tmp43 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0));
    TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = UncheckedCast<BoolT>(Word32NotEqual(TNode<Int32T>{tmp38}, TNode<Int32T>{tmp43}));
    Branch(tmp44, &block13, &block14, tmp34, tmp35, tmp36, tmp40, tmp38, tmp42, tmp42);
  }

  if (block13.is_used()) {
    TNode<Uint32T> tmp45;
    TNode<Uint32T> tmp46;
    TNode<BoolT> tmp47;
    TNode<BoolT> tmp48;
    TNode<Int32T> tmp49;
    TNode<Int32T> tmp50;
    TNode<Int32T> tmp51;
    Bind(&block13, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    TNode<Int32T> tmp52;
    USE(tmp52);
    tmp52 = UncheckedCast<Int32T>(FromConstexpr7ATint32(1));
    TNode<Int32T> tmp53;
    USE(tmp53);
    tmp53 = UncheckedCast<Int32T>(Int32Sub(TNode<Int32T>{tmp50}, TNode<Int32T>{tmp52}));
    Goto(&block14, tmp45, tmp46, tmp47, tmp48, tmp49, tmp53, tmp51);
  }

  if (block14.is_used()) {
    TNode<Uint32T> tmp54;
    TNode<Uint32T> tmp55;
    TNode<BoolT> tmp56;
    TNode<BoolT> tmp57;
    TNode<Int32T> tmp58;
    TNode<Int32T> tmp59;
    TNode<Int32T> tmp60;
    Bind(&block14, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    TNode<Int32T> tmp61;
    USE(tmp61);
    tmp61 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0));
    TNode<Int32T> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Int32T>(Int32Sub(TNode<Int32T>{tmp61}, TNode<Int32T>{tmp58}));
    TNode<Int32T> tmp63;
    USE(tmp63);
    tmp63 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0));
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = UncheckedCast<BoolT>(Word32NotEqual(TNode<Int32T>{tmp59}, TNode<Int32T>{tmp63}));
    Branch(tmp64, &block15, &block16, tmp54, tmp55, tmp56, tmp57, tmp62, tmp59, tmp60, tmp62);
  }

  if (block15.is_used()) {
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<BoolT> tmp67;
    TNode<BoolT> tmp68;
    TNode<Int32T> tmp69;
    TNode<Int32T> tmp70;
    TNode<Int32T> tmp71;
    TNode<Int32T> tmp72;
    Bind(&block15, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    TNode<BoolT> tmp73;
    USE(tmp73);
    tmp73 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block16, tmp65, tmp66, tmp73, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block16.is_used()) {
    TNode<Uint32T> tmp74;
    TNode<Uint32T> tmp75;
    TNode<BoolT> tmp76;
    TNode<BoolT> tmp77;
    TNode<Int32T> tmp78;
    TNode<Int32T> tmp79;
    TNode<Int32T> tmp80;
    TNode<Int32T> tmp81;
    Bind(&block16, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    Goto(&block12, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
  }

  if (block11.is_used()) {
    TNode<Uint32T> tmp82;
    TNode<Uint32T> tmp83;
    TNode<BoolT> tmp84;
    TNode<BoolT> tmp85;
    TNode<Int32T> tmp86;
    TNode<Int32T> tmp87;
    Bind(&block11, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    TNode<BoolT> tmp88;
    USE(tmp88);
    tmp88 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block12, tmp82, tmp83, tmp88, tmp85, tmp86, tmp87);
  }

  if (block12.is_used()) {
    TNode<Uint32T> tmp89;
    TNode<Uint32T> tmp90;
    TNode<BoolT> tmp91;
    TNode<BoolT> tmp92;
    TNode<Int32T> tmp93;
    TNode<Int32T> tmp94;
    Bind(&block12, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    Goto(&block9, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94);
  }

  if (block8.is_used()) {
    TNode<Uint32T> tmp95;
    TNode<Uint32T> tmp96;
    TNode<BoolT> tmp97;
    TNode<BoolT> tmp98;
    TNode<Int32T> tmp99;
    TNode<Int32T> tmp100;
    Bind(&block8, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    TNode<BoolT> tmp101;
    USE(tmp101);
    tmp101 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block9, tmp95, tmp96, tmp101, tmp98, tmp99, tmp100);
  }

  if (block9.is_used()) {
    TNode<Uint32T> tmp102;
    TNode<Uint32T> tmp103;
    TNode<BoolT> tmp104;
    TNode<BoolT> tmp105;
    TNode<Int32T> tmp106;
    TNode<Int32T> tmp107;
    Bind(&block9, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    Goto(&block6, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107);
  }

  if (block6.is_used()) {
    TNode<Uint32T> tmp108;
    TNode<Uint32T> tmp109;
    TNode<BoolT> tmp110;
    TNode<BoolT> tmp111;
    TNode<Int32T> tmp112;
    TNode<Int32T> tmp113;
    Bind(&block6, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    Branch(tmp110, &block17, &block18, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, Uninitialized<BigInt>());
  }

  if (block17.is_used()) {
    TNode<Uint32T> tmp114;
    TNode<Uint32T> tmp115;
    TNode<BoolT> tmp116;
    TNode<BoolT> tmp117;
    TNode<Int32T> tmp118;
    TNode<Int32T> tmp119;
    TNode<BigInt> tmp120;
    Bind(&block17, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    TNode<BigInt> tmp121;
    USE(tmp121);
    tmp121 = UncheckedCast<BigInt>(CreateEmptyBigInt(TNode<BoolT>{tmp117}, kTwoDigitBigInt()));
    Goto(&block19, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp121);
  }

  if (block18.is_used()) {
    TNode<Uint32T> tmp122;
    TNode<Uint32T> tmp123;
    TNode<BoolT> tmp124;
    TNode<BoolT> tmp125;
    TNode<Int32T> tmp126;
    TNode<Int32T> tmp127;
    TNode<BigInt> tmp128;
    Bind(&block18, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    TNode<BigInt> tmp129;
    USE(tmp129);
    tmp129 = UncheckedCast<BigInt>(CreateEmptyBigInt(TNode<BoolT>{tmp125}, kOneDigitBigInt()));
    Goto(&block19, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp129);
  }

  if (block19.is_used()) {
    TNode<Uint32T> tmp130;
    TNode<Uint32T> tmp131;
    TNode<BoolT> tmp132;
    TNode<BoolT> tmp133;
    TNode<Int32T> tmp134;
    TNode<Int32T> tmp135;
    TNode<BigInt> tmp136;
    Bind(&block19, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136);
    TNode<IntPtrT> tmp137;
    USE(tmp137);
    tmp137 = UncheckedCast<IntPtrT>(Convert8ATintptr(TNode<Int32T>{tmp134}));
    TNode<UintPtrT> tmp138;
    USE(tmp138);
    tmp138 = UncheckedCast<UintPtrT>(Unsigned(TNode<IntPtrT>{tmp137}));
    StoreBigIntDigit(TNode<BigInt>{tmp136}, 0, TNode<UintPtrT>{tmp138});
    Branch(tmp132, &block20, &block21, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136);
  }

  if (block20.is_used()) {
    TNode<Uint32T> tmp139;
    TNode<Uint32T> tmp140;
    TNode<BoolT> tmp141;
    TNode<BoolT> tmp142;
    TNode<Int32T> tmp143;
    TNode<Int32T> tmp144;
    TNode<BigInt> tmp145;
    Bind(&block20, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    TNode<IntPtrT> tmp146;
    USE(tmp146);
    tmp146 = UncheckedCast<IntPtrT>(Convert8ATintptr(TNode<Int32T>{tmp144}));
    TNode<UintPtrT> tmp147;
    USE(tmp147);
    tmp147 = UncheckedCast<UintPtrT>(Unsigned(TNode<IntPtrT>{tmp146}));
    StoreBigIntDigit(TNode<BigInt>{tmp145}, 1, TNode<UintPtrT>{tmp147});
    Goto(&block21, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145);
  }

  if (block21.is_used()) {
    TNode<Uint32T> tmp148;
    TNode<Uint32T> tmp149;
    TNode<BoolT> tmp150;
    TNode<BoolT> tmp151;
    TNode<Int32T> tmp152;
    TNode<Int32T> tmp153;
    TNode<BigInt> tmp154;
    Bind(&block21, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154);
    Goto(&block1, tmp154);
  }

    TNode<BigInt> tmp155;
    Bind(&block1, &tmp155);
  return TNode<BigInt>{tmp155};
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigInt(TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  PLabel<Uint32T, Uint32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BigInt> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_lowWord, p_highWord);

  if (block0.is_used()) {
    TNode<Uint32T> tmp0;
    TNode<Uint32T> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    if ((Is64())) {
      Goto(&block2, tmp0, tmp1);
    } else {
      Goto(&block3, tmp0, tmp1);
    }
  }

  if (block2.is_used()) {
    TNode<Uint32T> tmp2;
    TNode<Uint32T> tmp3;
    Bind(&block2, &tmp2, &tmp3);
    TNode<BigInt> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BigInt>(MakeBigIntOn64Bit(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp3}, p_signed));
    Goto(&block1, tmp4);
  }

  if (block3.is_used()) {
    TNode<Uint32T> tmp5;
    TNode<Uint32T> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<BigInt> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<BigInt>(MakeBigIntOn32Bit(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp6}, p_signed));
    Goto(&block1, tmp7);
  }

    TNode<BigInt> tmp8;
    Bind(&block1, &tmp8);
  return TNode<BigInt>{tmp8};
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::LoadDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  PLabel<JSArrayBuffer, UintPtrT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BigInt> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp0}));
    TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp1}));
    TNode<UintPtrT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp5}));
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp6}));
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(2));
    TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp8}));
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp9}));
    TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(3));
    TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp11}));
    TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp12}));
    TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(4));
    TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp14}));
    TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp15}));
    TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(5));
    TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp17}));
    TNode<Uint32T> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp18}));
    TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(6));
    TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp20}));
    TNode<Uint32T> tmp22;
    USE(tmp22);
    tmp22 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp21}));
    TNode<UintPtrT> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(7));
    TNode<UintPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp23}));
    TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Uint32T>(LoadUint8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp24}));
    Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp7, tmp10, tmp13, tmp16, tmp19, tmp22, tmp25, Uninitialized<Uint32T>(), Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp26;
    TNode<UintPtrT> tmp27;
    TNode<BoolT> tmp28;
    TNode<RawPtrT> tmp29;
    TNode<Uint32T> tmp30;
    TNode<Uint32T> tmp31;
    TNode<Uint32T> tmp32;
    TNode<Uint32T> tmp33;
    TNode<Uint32T> tmp34;
    TNode<Uint32T> tmp35;
    TNode<Uint32T> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    Bind(&block2, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<Uint32T> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp33}, TNode<Uint32T>{tmp40}));
    TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp32}, TNode<Uint32T>{tmp42}));
    TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp41}, TNode<Uint32T>{tmp43}));
    TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp31}, TNode<Uint32T>{tmp45}));
    TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp44}, TNode<Uint32T>{tmp46}));
    TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp47}, TNode<Uint32T>{tmp30}));
    TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp37}, TNode<Uint32T>{tmp49}));
    TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp51}));
    TNode<Uint32T> tmp53;
    USE(tmp53);
    tmp53 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp50}, TNode<Uint32T>{tmp52}));
    TNode<Uint32T> tmp54;
    USE(tmp54);
    tmp54 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp35}, TNode<Uint32T>{tmp54}));
    TNode<Uint32T> tmp56;
    USE(tmp56);
    tmp56 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp53}, TNode<Uint32T>{tmp55}));
    TNode<Uint32T> tmp57;
    USE(tmp57);
    tmp57 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp34}));
    Goto(&block4, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp48, tmp57);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp58;
    TNode<UintPtrT> tmp59;
    TNode<BoolT> tmp60;
    TNode<RawPtrT> tmp61;
    TNode<Uint32T> tmp62;
    TNode<Uint32T> tmp63;
    TNode<Uint32T> tmp64;
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<Uint32T> tmp67;
    TNode<Uint32T> tmp68;
    TNode<Uint32T> tmp69;
    TNode<Uint32T> tmp70;
    TNode<Uint32T> tmp71;
    Bind(&block3, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<Uint32T> tmp72;
    USE(tmp72);
    tmp72 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp73;
    USE(tmp73);
    tmp73 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp62}, TNode<Uint32T>{tmp72}));
    TNode<Uint32T> tmp74;
    USE(tmp74);
    tmp74 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp75;
    USE(tmp75);
    tmp75 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp63}, TNode<Uint32T>{tmp74}));
    TNode<Uint32T> tmp76;
    USE(tmp76);
    tmp76 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp73}, TNode<Uint32T>{tmp75}));
    TNode<Uint32T> tmp77;
    USE(tmp77);
    tmp77 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp78;
    USE(tmp78);
    tmp78 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp64}, TNode<Uint32T>{tmp77}));
    TNode<Uint32T> tmp79;
    USE(tmp79);
    tmp79 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp76}, TNode<Uint32T>{tmp78}));
    TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp79}, TNode<Uint32T>{tmp65}));
    TNode<Uint32T> tmp81;
    USE(tmp81);
    tmp81 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp82;
    USE(tmp82);
    tmp82 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp66}, TNode<Uint32T>{tmp81}));
    TNode<Uint32T> tmp83;
    USE(tmp83);
    tmp83 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp84;
    USE(tmp84);
    tmp84 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp67}, TNode<Uint32T>{tmp83}));
    TNode<Uint32T> tmp85;
    USE(tmp85);
    tmp85 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp82}, TNode<Uint32T>{tmp84}));
    TNode<Uint32T> tmp86;
    USE(tmp86);
    tmp86 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp87;
    USE(tmp87);
    tmp87 = UncheckedCast<Uint32T>(Word32Shl(TNode<Uint32T>{tmp68}, TNode<Uint32T>{tmp86}));
    TNode<Uint32T> tmp88;
    USE(tmp88);
    tmp88 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp85}, TNode<Uint32T>{tmp87}));
    TNode<Uint32T> tmp89;
    USE(tmp89);
    tmp89 = UncheckedCast<Uint32T>(Word32Or(TNode<Uint32T>{tmp88}, TNode<Uint32T>{tmp69}));
    Goto(&block4, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp89, tmp80);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp90;
    TNode<UintPtrT> tmp91;
    TNode<BoolT> tmp92;
    TNode<RawPtrT> tmp93;
    TNode<Uint32T> tmp94;
    TNode<Uint32T> tmp95;
    TNode<Uint32T> tmp96;
    TNode<Uint32T> tmp97;
    TNode<Uint32T> tmp98;
    TNode<Uint32T> tmp99;
    TNode<Uint32T> tmp100;
    TNode<Uint32T> tmp101;
    TNode<Uint32T> tmp102;
    TNode<Uint32T> tmp103;
    Bind(&block4, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    TNode<BigInt> tmp104;
    USE(tmp104);
    tmp104 = UncheckedCast<BigInt>(MakeBigInt(TNode<Uint32T>{tmp102}, TNode<Uint32T>{tmp103}, p_signed));
    Goto(&block1, tmp104);
  }

    TNode<BigInt> tmp105;
    Bind(&block1, &tmp105);
  return TNode<BigInt>{tmp105};
}

compiler::TNode<Numeric> DataViewBuiltinsFromDSLAssembler::DataViewGet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  PLabel<Context, Object, Object, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, Object, Context> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, Object, Context, Number> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block16(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block17(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block19(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block20(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block22(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block23(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block25(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block26(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block28(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block29(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block31(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block32(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block34(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block35(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block37(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block38(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Numeric> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context, p_receiver, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<String>(MakeDataViewGetterNameString(p_kind));
    TNode<JSDataView> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<JSDataView>(ValidateDataView(TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp4}));
    TNode<Number> tmp6;
    USE(tmp6);
    Label label0(this);
    tmp6 = ToIndex(TNode<Object>{tmp2}, TNode<Context>{tmp0}, &label0);
    Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp5, Uninitialized<Number>(), tmp2, tmp0, tmp6);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp5, Uninitialized<Number>(), tmp2, tmp0);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<JSDataView> tmp11;
    TNode<Number> tmp12;
    TNode<Object> tmp13;
    TNode<Context> tmp14;
    Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    Goto(&block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block4.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<JSDataView> tmp19;
    TNode<Number> tmp20;
    TNode<Object> tmp21;
    TNode<Context> tmp22;
    TNode<Number> tmp23;
    Bind(&block4, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    Goto(&block2, tmp15, tmp16, tmp17, tmp18, tmp19, tmp23);
  }

  if (block3.is_used()) {
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    TNode<JSDataView> tmp28;
    TNode<Number> tmp29;
    Bind(&block3, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ThrowRangeError(TNode<Context>{tmp24}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block2.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    TNode<JSDataView> tmp34;
    TNode<Number> tmp35;
    Bind(&block2, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = UncheckedCast<BoolT>(ToBoolean(TNode<Object>{tmp33}));
    TNode<JSArrayBuffer> tmp37;
    USE(tmp37);
    tmp37 = UncheckedCast<JSArrayBuffer>(LoadJSArrayBufferViewBuffer(TNode<JSArrayBufferView>{tmp34}));
    TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<BoolT>(IsDetachedBuffer(TNode<JSArrayBuffer>{tmp37}));
    Branch(tmp38, &block6, &block7, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block6.is_used()) {
    TNode<Context> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<Object> tmp42;
    TNode<JSDataView> tmp43;
    TNode<Number> tmp44;
    TNode<BoolT> tmp45;
    TNode<JSArrayBuffer> tmp46;
    Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    TNode<String> tmp47;
    USE(tmp47);
    tmp47 = UncheckedCast<String>(MakeDataViewGetterNameString(p_kind));
    ThrowTypeError(TNode<Context>{tmp39}, MessageTemplate::kDetachedOperation, TNode<Object>{tmp47});
  }

  if (block7.is_used()) {
    TNode<Context> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    TNode<JSDataView> tmp52;
    TNode<Number> tmp53;
    TNode<BoolT> tmp54;
    TNode<JSArrayBuffer> tmp55;
    Bind(&block7, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    TNode<Float64T> tmp56;
    USE(tmp56);
    tmp56 = UncheckedCast<Float64T>(Convert9ATfloat64(TNode<Number>{tmp53}));
    TNode<UintPtrT> tmp57;
    USE(tmp57);
    tmp57 = UncheckedCast<UintPtrT>(Convert9ATuintptr(TNode<Float64T>{tmp56}));
    TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteOffset(TNode<JSArrayBufferView>{tmp52}));
    TNode<UintPtrT> tmp59;
    USE(tmp59);
    tmp59 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteLength(TNode<JSArrayBufferView>{tmp52}));
    TNode<Float64T> tmp60;
    USE(tmp60);
    tmp60 = UncheckedCast<Float64T>(Convert9ATfloat64(TNode<UintPtrT>{tmp59}));
    TNode<Float64T> tmp61;
    USE(tmp61);
    tmp61 = UncheckedCast<Float64T>(Convert9ATfloat64((DataViewElementSize(p_kind))));
    TNode<Float64T> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Float64T>(Float64Add(TNode<Float64T>{tmp56}, TNode<Float64T>{tmp61}));
    TNode<BoolT> tmp63;
    USE(tmp63);
    tmp63 = UncheckedCast<BoolT>(Float64GreaterThan(TNode<Float64T>{tmp62}, TNode<Float64T>{tmp60}));
    Branch(tmp63, &block8, &block9, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp60, tmp61);
  }

  if (block8.is_used()) {
    TNode<Context> tmp64;
    TNode<Object> tmp65;
    TNode<Object> tmp66;
    TNode<Object> tmp67;
    TNode<JSDataView> tmp68;
    TNode<Number> tmp69;
    TNode<BoolT> tmp70;
    TNode<JSArrayBuffer> tmp71;
    TNode<Float64T> tmp72;
    TNode<UintPtrT> tmp73;
    TNode<UintPtrT> tmp74;
    TNode<Float64T> tmp75;
    TNode<Float64T> tmp76;
    Bind(&block8, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ThrowRangeError(TNode<Context>{tmp64}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block9.is_used()) {
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    TNode<JSDataView> tmp81;
    TNode<Number> tmp82;
    TNode<BoolT> tmp83;
    TNode<JSArrayBuffer> tmp84;
    TNode<Float64T> tmp85;
    TNode<UintPtrT> tmp86;
    TNode<UintPtrT> tmp87;
    TNode<Float64T> tmp88;
    TNode<Float64T> tmp89;
    Bind(&block9, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    TNode<UintPtrT> tmp90;
    USE(tmp90);
    tmp90 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp86}, TNode<UintPtrT>{tmp87}));
    if ((ElementsKindEqual(p_kind, UINT8_ELEMENTS))) {
      Goto(&block10, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90);
    } else {
      Goto(&block11, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp91;
    TNode<Object> tmp92;
    TNode<Object> tmp93;
    TNode<Object> tmp94;
    TNode<JSDataView> tmp95;
    TNode<Number> tmp96;
    TNode<BoolT> tmp97;
    TNode<JSArrayBuffer> tmp98;
    TNode<Float64T> tmp99;
    TNode<UintPtrT> tmp100;
    TNode<UintPtrT> tmp101;
    TNode<Float64T> tmp102;
    TNode<Float64T> tmp103;
    TNode<UintPtrT> tmp104;
    Bind(&block10, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    TNode<Smi> tmp105;
    USE(tmp105);
    tmp105 = UncheckedCast<Smi>(LoadDataView8(TNode<JSArrayBuffer>{tmp98}, TNode<UintPtrT>{tmp104}, false));
    Goto(&block1, tmp105);
  }

  if (block11.is_used()) {
    TNode<Context> tmp106;
    TNode<Object> tmp107;
    TNode<Object> tmp108;
    TNode<Object> tmp109;
    TNode<JSDataView> tmp110;
    TNode<Number> tmp111;
    TNode<BoolT> tmp112;
    TNode<JSArrayBuffer> tmp113;
    TNode<Float64T> tmp114;
    TNode<UintPtrT> tmp115;
    TNode<UintPtrT> tmp116;
    TNode<Float64T> tmp117;
    TNode<Float64T> tmp118;
    TNode<UintPtrT> tmp119;
    Bind(&block11, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    if ((ElementsKindEqual(p_kind, INT8_ELEMENTS))) {
      Goto(&block13, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
    } else {
      Goto(&block14, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
    }
  }

  if (block13.is_used()) {
    TNode<Context> tmp120;
    TNode<Object> tmp121;
    TNode<Object> tmp122;
    TNode<Object> tmp123;
    TNode<JSDataView> tmp124;
    TNode<Number> tmp125;
    TNode<BoolT> tmp126;
    TNode<JSArrayBuffer> tmp127;
    TNode<Float64T> tmp128;
    TNode<UintPtrT> tmp129;
    TNode<UintPtrT> tmp130;
    TNode<Float64T> tmp131;
    TNode<Float64T> tmp132;
    TNode<UintPtrT> tmp133;
    Bind(&block13, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    TNode<Smi> tmp134;
    USE(tmp134);
    tmp134 = UncheckedCast<Smi>(LoadDataView8(TNode<JSArrayBuffer>{tmp127}, TNode<UintPtrT>{tmp133}, true));
    Goto(&block1, tmp134);
  }

  if (block14.is_used()) {
    TNode<Context> tmp135;
    TNode<Object> tmp136;
    TNode<Object> tmp137;
    TNode<Object> tmp138;
    TNode<JSDataView> tmp139;
    TNode<Number> tmp140;
    TNode<BoolT> tmp141;
    TNode<JSArrayBuffer> tmp142;
    TNode<Float64T> tmp143;
    TNode<UintPtrT> tmp144;
    TNode<UintPtrT> tmp145;
    TNode<Float64T> tmp146;
    TNode<Float64T> tmp147;
    TNode<UintPtrT> tmp148;
    Bind(&block14, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    if ((ElementsKindEqual(p_kind, UINT16_ELEMENTS))) {
      Goto(&block16, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148);
    } else {
      Goto(&block17, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148);
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp149;
    TNode<Object> tmp150;
    TNode<Object> tmp151;
    TNode<Object> tmp152;
    TNode<JSDataView> tmp153;
    TNode<Number> tmp154;
    TNode<BoolT> tmp155;
    TNode<JSArrayBuffer> tmp156;
    TNode<Float64T> tmp157;
    TNode<UintPtrT> tmp158;
    TNode<UintPtrT> tmp159;
    TNode<Float64T> tmp160;
    TNode<Float64T> tmp161;
    TNode<UintPtrT> tmp162;
    Bind(&block16, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    TNode<Number> tmp163;
    USE(tmp163);
    tmp163 = UncheckedCast<Number>(LoadDataView16(TNode<JSArrayBuffer>{tmp156}, TNode<UintPtrT>{tmp162}, TNode<BoolT>{tmp155}, false));
    Goto(&block1, tmp163);
  }

  if (block17.is_used()) {
    TNode<Context> tmp164;
    TNode<Object> tmp165;
    TNode<Object> tmp166;
    TNode<Object> tmp167;
    TNode<JSDataView> tmp168;
    TNode<Number> tmp169;
    TNode<BoolT> tmp170;
    TNode<JSArrayBuffer> tmp171;
    TNode<Float64T> tmp172;
    TNode<UintPtrT> tmp173;
    TNode<UintPtrT> tmp174;
    TNode<Float64T> tmp175;
    TNode<Float64T> tmp176;
    TNode<UintPtrT> tmp177;
    Bind(&block17, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
    if ((ElementsKindEqual(p_kind, INT16_ELEMENTS))) {
      Goto(&block19, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
    } else {
      Goto(&block20, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
    }
  }

  if (block19.is_used()) {
    TNode<Context> tmp178;
    TNode<Object> tmp179;
    TNode<Object> tmp180;
    TNode<Object> tmp181;
    TNode<JSDataView> tmp182;
    TNode<Number> tmp183;
    TNode<BoolT> tmp184;
    TNode<JSArrayBuffer> tmp185;
    TNode<Float64T> tmp186;
    TNode<UintPtrT> tmp187;
    TNode<UintPtrT> tmp188;
    TNode<Float64T> tmp189;
    TNode<Float64T> tmp190;
    TNode<UintPtrT> tmp191;
    Bind(&block19, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    TNode<Number> tmp192;
    USE(tmp192);
    tmp192 = UncheckedCast<Number>(LoadDataView16(TNode<JSArrayBuffer>{tmp185}, TNode<UintPtrT>{tmp191}, TNode<BoolT>{tmp184}, true));
    Goto(&block1, tmp192);
  }

  if (block20.is_used()) {
    TNode<Context> tmp193;
    TNode<Object> tmp194;
    TNode<Object> tmp195;
    TNode<Object> tmp196;
    TNode<JSDataView> tmp197;
    TNode<Number> tmp198;
    TNode<BoolT> tmp199;
    TNode<JSArrayBuffer> tmp200;
    TNode<Float64T> tmp201;
    TNode<UintPtrT> tmp202;
    TNode<UintPtrT> tmp203;
    TNode<Float64T> tmp204;
    TNode<Float64T> tmp205;
    TNode<UintPtrT> tmp206;
    Bind(&block20, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    if ((ElementsKindEqual(p_kind, UINT32_ELEMENTS))) {
      Goto(&block22, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206);
    } else {
      Goto(&block23, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206);
    }
  }

  if (block22.is_used()) {
    TNode<Context> tmp207;
    TNode<Object> tmp208;
    TNode<Object> tmp209;
    TNode<Object> tmp210;
    TNode<JSDataView> tmp211;
    TNode<Number> tmp212;
    TNode<BoolT> tmp213;
    TNode<JSArrayBuffer> tmp214;
    TNode<Float64T> tmp215;
    TNode<UintPtrT> tmp216;
    TNode<UintPtrT> tmp217;
    TNode<Float64T> tmp218;
    TNode<Float64T> tmp219;
    TNode<UintPtrT> tmp220;
    Bind(&block22, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220);
    TNode<Number> tmp221;
    USE(tmp221);
    tmp221 = UncheckedCast<Number>(LoadDataView32(TNode<JSArrayBuffer>{tmp214}, TNode<UintPtrT>{tmp220}, TNode<BoolT>{tmp213}, p_kind));
    Goto(&block1, tmp221);
  }

  if (block23.is_used()) {
    TNode<Context> tmp222;
    TNode<Object> tmp223;
    TNode<Object> tmp224;
    TNode<Object> tmp225;
    TNode<JSDataView> tmp226;
    TNode<Number> tmp227;
    TNode<BoolT> tmp228;
    TNode<JSArrayBuffer> tmp229;
    TNode<Float64T> tmp230;
    TNode<UintPtrT> tmp231;
    TNode<UintPtrT> tmp232;
    TNode<Float64T> tmp233;
    TNode<Float64T> tmp234;
    TNode<UintPtrT> tmp235;
    Bind(&block23, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235);
    if ((ElementsKindEqual(p_kind, INT32_ELEMENTS))) {
      Goto(&block25, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235);
    } else {
      Goto(&block26, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235);
    }
  }

  if (block25.is_used()) {
    TNode<Context> tmp236;
    TNode<Object> tmp237;
    TNode<Object> tmp238;
    TNode<Object> tmp239;
    TNode<JSDataView> tmp240;
    TNode<Number> tmp241;
    TNode<BoolT> tmp242;
    TNode<JSArrayBuffer> tmp243;
    TNode<Float64T> tmp244;
    TNode<UintPtrT> tmp245;
    TNode<UintPtrT> tmp246;
    TNode<Float64T> tmp247;
    TNode<Float64T> tmp248;
    TNode<UintPtrT> tmp249;
    Bind(&block25, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249);
    TNode<Number> tmp250;
    USE(tmp250);
    tmp250 = UncheckedCast<Number>(LoadDataView32(TNode<JSArrayBuffer>{tmp243}, TNode<UintPtrT>{tmp249}, TNode<BoolT>{tmp242}, p_kind));
    Goto(&block1, tmp250);
  }

  if (block26.is_used()) {
    TNode<Context> tmp251;
    TNode<Object> tmp252;
    TNode<Object> tmp253;
    TNode<Object> tmp254;
    TNode<JSDataView> tmp255;
    TNode<Number> tmp256;
    TNode<BoolT> tmp257;
    TNode<JSArrayBuffer> tmp258;
    TNode<Float64T> tmp259;
    TNode<UintPtrT> tmp260;
    TNode<UintPtrT> tmp261;
    TNode<Float64T> tmp262;
    TNode<Float64T> tmp263;
    TNode<UintPtrT> tmp264;
    Bind(&block26, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264);
    if ((ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      Goto(&block28, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264);
    } else {
      Goto(&block29, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264);
    }
  }

  if (block28.is_used()) {
    TNode<Context> tmp265;
    TNode<Object> tmp266;
    TNode<Object> tmp267;
    TNode<Object> tmp268;
    TNode<JSDataView> tmp269;
    TNode<Number> tmp270;
    TNode<BoolT> tmp271;
    TNode<JSArrayBuffer> tmp272;
    TNode<Float64T> tmp273;
    TNode<UintPtrT> tmp274;
    TNode<UintPtrT> tmp275;
    TNode<Float64T> tmp276;
    TNode<Float64T> tmp277;
    TNode<UintPtrT> tmp278;
    Bind(&block28, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278);
    TNode<Number> tmp279;
    USE(tmp279);
    tmp279 = UncheckedCast<Number>(LoadDataView32(TNode<JSArrayBuffer>{tmp272}, TNode<UintPtrT>{tmp278}, TNode<BoolT>{tmp271}, p_kind));
    Goto(&block1, tmp279);
  }

  if (block29.is_used()) {
    TNode<Context> tmp280;
    TNode<Object> tmp281;
    TNode<Object> tmp282;
    TNode<Object> tmp283;
    TNode<JSDataView> tmp284;
    TNode<Number> tmp285;
    TNode<BoolT> tmp286;
    TNode<JSArrayBuffer> tmp287;
    TNode<Float64T> tmp288;
    TNode<UintPtrT> tmp289;
    TNode<UintPtrT> tmp290;
    TNode<Float64T> tmp291;
    TNode<Float64T> tmp292;
    TNode<UintPtrT> tmp293;
    Bind(&block29, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293);
    if ((ElementsKindEqual(p_kind, FLOAT64_ELEMENTS))) {
      Goto(&block31, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293);
    } else {
      Goto(&block32, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293);
    }
  }

  if (block31.is_used()) {
    TNode<Context> tmp294;
    TNode<Object> tmp295;
    TNode<Object> tmp296;
    TNode<Object> tmp297;
    TNode<JSDataView> tmp298;
    TNode<Number> tmp299;
    TNode<BoolT> tmp300;
    TNode<JSArrayBuffer> tmp301;
    TNode<Float64T> tmp302;
    TNode<UintPtrT> tmp303;
    TNode<UintPtrT> tmp304;
    TNode<Float64T> tmp305;
    TNode<Float64T> tmp306;
    TNode<UintPtrT> tmp307;
    Bind(&block31, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307);
    TNode<Number> tmp308;
    USE(tmp308);
    tmp308 = UncheckedCast<Number>(LoadDataViewFloat64(TNode<JSArrayBuffer>{tmp301}, TNode<UintPtrT>{tmp307}, TNode<BoolT>{tmp300}));
    Goto(&block1, tmp308);
  }

  if (block32.is_used()) {
    TNode<Context> tmp309;
    TNode<Object> tmp310;
    TNode<Object> tmp311;
    TNode<Object> tmp312;
    TNode<JSDataView> tmp313;
    TNode<Number> tmp314;
    TNode<BoolT> tmp315;
    TNode<JSArrayBuffer> tmp316;
    TNode<Float64T> tmp317;
    TNode<UintPtrT> tmp318;
    TNode<UintPtrT> tmp319;
    TNode<Float64T> tmp320;
    TNode<Float64T> tmp321;
    TNode<UintPtrT> tmp322;
    Bind(&block32, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322);
    if ((ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS))) {
      Goto(&block34, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322);
    } else {
      Goto(&block35, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322);
    }
  }

  if (block34.is_used()) {
    TNode<Context> tmp323;
    TNode<Object> tmp324;
    TNode<Object> tmp325;
    TNode<Object> tmp326;
    TNode<JSDataView> tmp327;
    TNode<Number> tmp328;
    TNode<BoolT> tmp329;
    TNode<JSArrayBuffer> tmp330;
    TNode<Float64T> tmp331;
    TNode<UintPtrT> tmp332;
    TNode<UintPtrT> tmp333;
    TNode<Float64T> tmp334;
    TNode<Float64T> tmp335;
    TNode<UintPtrT> tmp336;
    Bind(&block34, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336);
    TNode<BigInt> tmp337;
    USE(tmp337);
    tmp337 = UncheckedCast<BigInt>(LoadDataViewBigInt(TNode<JSArrayBuffer>{tmp330}, TNode<UintPtrT>{tmp336}, TNode<BoolT>{tmp329}, false));
    Goto(&block1, tmp337);
  }

  if (block35.is_used()) {
    TNode<Context> tmp338;
    TNode<Object> tmp339;
    TNode<Object> tmp340;
    TNode<Object> tmp341;
    TNode<JSDataView> tmp342;
    TNode<Number> tmp343;
    TNode<BoolT> tmp344;
    TNode<JSArrayBuffer> tmp345;
    TNode<Float64T> tmp346;
    TNode<UintPtrT> tmp347;
    TNode<UintPtrT> tmp348;
    TNode<Float64T> tmp349;
    TNode<Float64T> tmp350;
    TNode<UintPtrT> tmp351;
    Bind(&block35, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351);
    if ((ElementsKindEqual(p_kind, BIGINT64_ELEMENTS))) {
      Goto(&block37, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351);
    } else {
      Goto(&block38, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351);
    }
  }

  if (block37.is_used()) {
    TNode<Context> tmp352;
    TNode<Object> tmp353;
    TNode<Object> tmp354;
    TNode<Object> tmp355;
    TNode<JSDataView> tmp356;
    TNode<Number> tmp357;
    TNode<BoolT> tmp358;
    TNode<JSArrayBuffer> tmp359;
    TNode<Float64T> tmp360;
    TNode<UintPtrT> tmp361;
    TNode<UintPtrT> tmp362;
    TNode<Float64T> tmp363;
    TNode<Float64T> tmp364;
    TNode<UintPtrT> tmp365;
    Bind(&block37, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365);
    TNode<BigInt> tmp366;
    USE(tmp366);
    tmp366 = UncheckedCast<BigInt>(LoadDataViewBigInt(TNode<JSArrayBuffer>{tmp359}, TNode<UintPtrT>{tmp365}, TNode<BoolT>{tmp358}, true));
    Goto(&block1, tmp366);
  }

  if (block38.is_used()) {
    TNode<Context> tmp367;
    TNode<Object> tmp368;
    TNode<Object> tmp369;
    TNode<Object> tmp370;
    TNode<JSDataView> tmp371;
    TNode<Number> tmp372;
    TNode<BoolT> tmp373;
    TNode<JSArrayBuffer> tmp374;
    TNode<Float64T> tmp375;
    TNode<UintPtrT> tmp376;
    TNode<UintPtrT> tmp377;
    TNode<Float64T> tmp378;
    TNode<Float64T> tmp379;
    TNode<UintPtrT> tmp380;
    Bind(&block38, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380);
    Unreachable();
  }

    TNode<Numeric> tmp381;
    Bind(&block1, &tmp381);
  return TNode<Numeric>{tmp381};
}

TF_BUILTIN(DataViewPrototypeGetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<Oddball> tmp18;
    USE(tmp18);
    tmp18 = Undefined();
    TNode<Numeric> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp15}, TNode<Object>{tmp16}, TNode<Object>{tmp17}, TNode<Object>{tmp18}, UINT8_ELEMENTS));
    arguments->PopAndReturn(tmp19);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<Oddball> tmp18;
    USE(tmp18);
    tmp18 = Undefined();
    TNode<Numeric> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp15}, TNode<Object>{tmp16}, TNode<Object>{tmp17}, TNode<Object>{tmp18}, INT8_ELEMENTS));
    arguments->PopAndReturn(tmp19);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, UINT16_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, INT16_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, UINT32_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, INT32_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, FLOAT32_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, FLOAT64_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, BIGUINT64_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<Numeric>(DataViewGet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, BIGINT64_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView8(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value) {
  PLabel<JSArrayBuffer, UintPtrT, Uint32T> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset, p_value);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<Uint32T> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp0}));
    TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp4}));
    StoreWord8(TNode<RawPtrT>{tmp3}, TNode<UintPtrT>{tmp1}, TNode<Uint32T>{tmp5});
    Goto(&block1);
  }

    Bind(&block1);
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView16(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian) {
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<Uint32T> tmp2;
    TNode<BoolT> tmp3;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    TNode<RawPtrT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp0}));
    TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp5}));
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp7}));
    TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9}));
    Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp10);
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp11;
    TNode<UintPtrT> tmp12;
    TNode<Uint32T> tmp13;
    TNode<BoolT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<Uint32T> tmp16;
    TNode<Uint32T> tmp17;
    Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    StoreWord8(TNode<RawPtrT>{tmp15}, TNode<UintPtrT>{tmp12}, TNode<Uint32T>{tmp16});
    TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp12}, TNode<UintPtrT>{tmp18}));
    StoreWord8(TNode<RawPtrT>{tmp15}, TNode<UintPtrT>{tmp19}, TNode<Uint32T>{tmp17});
    Goto(&block4, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp20;
    TNode<UintPtrT> tmp21;
    TNode<Uint32T> tmp22;
    TNode<BoolT> tmp23;
    TNode<RawPtrT> tmp24;
    TNode<Uint32T> tmp25;
    TNode<Uint32T> tmp26;
    Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    StoreWord8(TNode<RawPtrT>{tmp24}, TNode<UintPtrT>{tmp21}, TNode<Uint32T>{tmp26});
    TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp21}, TNode<UintPtrT>{tmp27}));
    StoreWord8(TNode<RawPtrT>{tmp24}, TNode<UintPtrT>{tmp28}, TNode<Uint32T>{tmp25});
    Goto(&block4, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp29;
    TNode<UintPtrT> tmp30;
    TNode<Uint32T> tmp31;
    TNode<BoolT> tmp32;
    TNode<RawPtrT> tmp33;
    TNode<Uint32T> tmp34;
    TNode<Uint32T> tmp35;
    Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    Goto(&block1);
  }

    Bind(&block1);
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView32(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian) {
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<Uint32T> tmp2;
    TNode<BoolT> tmp3;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    TNode<RawPtrT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp0}));
    TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp5}));
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp7}));
    TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9}));
    TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp11}));
    TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp12}, TNode<Uint32T>{tmp13}));
    TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp15}));
    Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp10, tmp14, tmp16);
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp17;
    TNode<UintPtrT> tmp18;
    TNode<Uint32T> tmp19;
    TNode<BoolT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<Uint32T> tmp22;
    TNode<Uint32T> tmp23;
    TNode<Uint32T> tmp24;
    TNode<Uint32T> tmp25;
    Bind(&block2, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    StoreWord8(TNode<RawPtrT>{tmp21}, TNode<UintPtrT>{tmp18}, TNode<Uint32T>{tmp22});
    TNode<UintPtrT> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp18}, TNode<UintPtrT>{tmp26}));
    StoreWord8(TNode<RawPtrT>{tmp21}, TNode<UintPtrT>{tmp27}, TNode<Uint32T>{tmp23});
    TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(2));
    TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp18}, TNode<UintPtrT>{tmp28}));
    StoreWord8(TNode<RawPtrT>{tmp21}, TNode<UintPtrT>{tmp29}, TNode<Uint32T>{tmp24});
    TNode<UintPtrT> tmp30;
    USE(tmp30);
    tmp30 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(3));
    TNode<UintPtrT> tmp31;
    USE(tmp31);
    tmp31 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp18}, TNode<UintPtrT>{tmp30}));
    StoreWord8(TNode<RawPtrT>{tmp21}, TNode<UintPtrT>{tmp31}, TNode<Uint32T>{tmp25});
    Goto(&block4, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp32;
    TNode<UintPtrT> tmp33;
    TNode<Uint32T> tmp34;
    TNode<BoolT> tmp35;
    TNode<RawPtrT> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    Bind(&block3, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp33}, TNode<Uint32T>{tmp40});
    TNode<UintPtrT> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp42;
    USE(tmp42);
    tmp42 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp33}, TNode<UintPtrT>{tmp41}));
    StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp42}, TNode<Uint32T>{tmp39});
    TNode<UintPtrT> tmp43;
    USE(tmp43);
    tmp43 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(2));
    TNode<UintPtrT> tmp44;
    USE(tmp44);
    tmp44 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp33}, TNode<UintPtrT>{tmp43}));
    StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp44}, TNode<Uint32T>{tmp38});
    TNode<UintPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(3));
    TNode<UintPtrT> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp33}, TNode<UintPtrT>{tmp45}));
    StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp46}, TNode<Uint32T>{tmp37});
    Goto(&block4, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp47;
    TNode<UintPtrT> tmp48;
    TNode<Uint32T> tmp49;
    TNode<BoolT> tmp50;
    TNode<RawPtrT> tmp51;
    TNode<Uint32T> tmp52;
    TNode<Uint32T> tmp53;
    TNode<Uint32T> tmp54;
    TNode<Uint32T> tmp55;
    Bind(&block4, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    Goto(&block1);
  }

    Bind(&block1);
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView64(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, TNode<BoolT> p_requestedLittleEndian) {
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset, p_lowWord, p_highWord, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<Uint32T> tmp2;
    TNode<Uint32T> tmp3;
    TNode<BoolT> tmp4;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    TNode<RawPtrT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<RawPtrT>(LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer>{tmp0}));
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp6}));
    TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp8}));
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp9}, TNode<Uint32T>{tmp10}));
    TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp12}));
    TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp13}, TNode<Uint32T>{tmp14}));
    TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp16}));
    TNode<Uint32T> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp18}));
    TNode<Uint32T> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(8));
    TNode<Uint32T> tmp21;
    USE(tmp21);
    tmp21 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp20}));
    TNode<Uint32T> tmp22;
    USE(tmp22);
    tmp22 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp21}, TNode<Uint32T>{tmp22}));
    TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(16));
    TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp24}));
    TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0xFF));
    TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<Uint32T>(Word32And(TNode<Uint32T>{tmp25}, TNode<Uint32T>{tmp26}));
    TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(24));
    TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = UncheckedCast<Uint32T>(Word32Shr(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp28}));
    Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp7, tmp11, tmp15, tmp17, tmp19, tmp23, tmp27, tmp29);
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp30;
    TNode<UintPtrT> tmp31;
    TNode<Uint32T> tmp32;
    TNode<Uint32T> tmp33;
    TNode<BoolT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<Uint32T> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    TNode<Uint32T> tmp41;
    TNode<Uint32T> tmp42;
    TNode<Uint32T> tmp43;
    Bind(&block2, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    StoreWord8(TNode<RawPtrT>{tmp35}, TNode<UintPtrT>{tmp31}, TNode<Uint32T>{tmp36});
    TNode<UintPtrT> tmp44;
    USE(tmp44);
    tmp44 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp31}, TNode<UintPtrT>{tmp44}));
    StoreWord8(TNode<RawPtrT>{tmp35}, TNode<UintPtrT>{tmp45}, TNode<Uint32T>{tmp37});
    TNode<UintPtrT> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(2));
    TNode<UintPtrT> tmp47;
    USE(tmp47);
    tmp47 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp31}, TNode<UintPtrT>{tmp46}));
    StoreWord8(TNode<RawPtrT>{tmp35}, TNode<UintPtrT>{tmp47}, TNode<Uint32T>{tmp38});
    TNode<UintPtrT> tmp48;
    USE(tmp48);
    tmp48 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(3));
    TNode<UintPtrT> tmp49;
    USE(tmp49);
    tmp49 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp31}, TNode<UintPtrT>{tmp48}));
    StoreWord8(TNode<RawPtrT>{tmp35}, TNode<UintPtrT>{tmp49}, TNode<Uint32T>{tmp39});
    TNode<UintPtrT> tmp50;
    USE(tmp50);
    tmp50 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(4));
    TNode<UintPtrT> tmp51;
    USE(tmp51);
    tmp51 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp31}, TNode<UintPtrT>{tmp50}));
    StoreWord8(TNode<RawPtrT>{tmp35}, TNode<UintPtrT>{tmp51}, TNode<Uint32T>{tmp40});
    TNode<UintPtrT> tmp52;
    USE(tmp52);
    tmp52 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(5));
    TNode<UintPtrT> tmp53;
    USE(tmp53);
    tmp53 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp31}, TNode<UintPtrT>{tmp52}));
    StoreWord8(TNode<RawPtrT>{tmp35}, TNode<UintPtrT>{tmp53}, TNode<Uint32T>{tmp41});
    TNode<UintPtrT> tmp54;
    USE(tmp54);
    tmp54 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(6));
    TNode<UintPtrT> tmp55;
    USE(tmp55);
    tmp55 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp31}, TNode<UintPtrT>{tmp54}));
    StoreWord8(TNode<RawPtrT>{tmp35}, TNode<UintPtrT>{tmp55}, TNode<Uint32T>{tmp42});
    TNode<UintPtrT> tmp56;
    USE(tmp56);
    tmp56 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(7));
    TNode<UintPtrT> tmp57;
    USE(tmp57);
    tmp57 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp31}, TNode<UintPtrT>{tmp56}));
    StoreWord8(TNode<RawPtrT>{tmp35}, TNode<UintPtrT>{tmp57}, TNode<Uint32T>{tmp43});
    Goto(&block4, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp58;
    TNode<UintPtrT> tmp59;
    TNode<Uint32T> tmp60;
    TNode<Uint32T> tmp61;
    TNode<BoolT> tmp62;
    TNode<RawPtrT> tmp63;
    TNode<Uint32T> tmp64;
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<Uint32T> tmp67;
    TNode<Uint32T> tmp68;
    TNode<Uint32T> tmp69;
    TNode<Uint32T> tmp70;
    TNode<Uint32T> tmp71;
    Bind(&block3, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    StoreWord8(TNode<RawPtrT>{tmp63}, TNode<UintPtrT>{tmp59}, TNode<Uint32T>{tmp71});
    TNode<UintPtrT> tmp72;
    USE(tmp72);
    tmp72 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(1));
    TNode<UintPtrT> tmp73;
    USE(tmp73);
    tmp73 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp59}, TNode<UintPtrT>{tmp72}));
    StoreWord8(TNode<RawPtrT>{tmp63}, TNode<UintPtrT>{tmp73}, TNode<Uint32T>{tmp70});
    TNode<UintPtrT> tmp74;
    USE(tmp74);
    tmp74 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(2));
    TNode<UintPtrT> tmp75;
    USE(tmp75);
    tmp75 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp59}, TNode<UintPtrT>{tmp74}));
    StoreWord8(TNode<RawPtrT>{tmp63}, TNode<UintPtrT>{tmp75}, TNode<Uint32T>{tmp69});
    TNode<UintPtrT> tmp76;
    USE(tmp76);
    tmp76 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(3));
    TNode<UintPtrT> tmp77;
    USE(tmp77);
    tmp77 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp59}, TNode<UintPtrT>{tmp76}));
    StoreWord8(TNode<RawPtrT>{tmp63}, TNode<UintPtrT>{tmp77}, TNode<Uint32T>{tmp68});
    TNode<UintPtrT> tmp78;
    USE(tmp78);
    tmp78 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(4));
    TNode<UintPtrT> tmp79;
    USE(tmp79);
    tmp79 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp59}, TNode<UintPtrT>{tmp78}));
    StoreWord8(TNode<RawPtrT>{tmp63}, TNode<UintPtrT>{tmp79}, TNode<Uint32T>{tmp67});
    TNode<UintPtrT> tmp80;
    USE(tmp80);
    tmp80 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(5));
    TNode<UintPtrT> tmp81;
    USE(tmp81);
    tmp81 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp59}, TNode<UintPtrT>{tmp80}));
    StoreWord8(TNode<RawPtrT>{tmp63}, TNode<UintPtrT>{tmp81}, TNode<Uint32T>{tmp66});
    TNode<UintPtrT> tmp82;
    USE(tmp82);
    tmp82 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(6));
    TNode<UintPtrT> tmp83;
    USE(tmp83);
    tmp83 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp59}, TNode<UintPtrT>{tmp82}));
    StoreWord8(TNode<RawPtrT>{tmp63}, TNode<UintPtrT>{tmp83}, TNode<Uint32T>{tmp65});
    TNode<UintPtrT> tmp84;
    USE(tmp84);
    tmp84 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(7));
    TNode<UintPtrT> tmp85;
    USE(tmp85);
    tmp85 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp59}, TNode<UintPtrT>{tmp84}));
    StoreWord8(TNode<RawPtrT>{tmp63}, TNode<UintPtrT>{tmp85}, TNode<Uint32T>{tmp64});
    Goto(&block4, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp86;
    TNode<UintPtrT> tmp87;
    TNode<Uint32T> tmp88;
    TNode<Uint32T> tmp89;
    TNode<BoolT> tmp90;
    TNode<RawPtrT> tmp91;
    TNode<Uint32T> tmp92;
    TNode<Uint32T> tmp93;
    TNode<Uint32T> tmp94;
    TNode<Uint32T> tmp95;
    TNode<Uint32T> tmp96;
    TNode<Uint32T> tmp97;
    TNode<Uint32T> tmp98;
    TNode<Uint32T> tmp99;
    Bind(&block4, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    Goto(&block1);
  }

    Bind(&block1);
}

void DataViewBuiltinsFromDSLAssembler::StoreDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BigInt> p_bigIntValue, TNode<BoolT> p_requestedLittleEndian) {
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T, Uint32T> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T, Uint32T> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T, Uint32T> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T, Uint32T> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, UintPtrT, UintPtrT, Uint32T, Uint32T> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_buffer, p_offset, p_bigIntValue, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<BigInt> tmp2;
    TNode<BoolT> tmp3;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    TNode<UintPtrT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntLength(TNode<BigInt>{tmp2}));
    TNode<UintPtrT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntSign(TNode<BigInt>{tmp2}));
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0));
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0));
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(0));
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<BoolT>(WordNotEqual(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp8}));
    Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp10;
    TNode<UintPtrT> tmp11;
    TNode<BigInt> tmp12;
    TNode<BoolT> tmp13;
    TNode<UintPtrT> tmp14;
    TNode<UintPtrT> tmp15;
    TNode<Uint32T> tmp16;
    TNode<Uint32T> tmp17;
    Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    if ((Is64())) {
      Goto(&block4, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
    } else {
      Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
    }
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp18;
    TNode<UintPtrT> tmp19;
    TNode<BigInt> tmp20;
    TNode<BoolT> tmp21;
    TNode<UintPtrT> tmp22;
    TNode<UintPtrT> tmp23;
    TNode<Uint32T> tmp24;
    TNode<Uint32T> tmp25;
    Bind(&block4, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    TNode<UintPtrT> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<UintPtrT>(LoadBigIntDigit(TNode<BigInt>{tmp20}, 0));
    TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<Uint32T>(Convert8ATuint32(TNode<UintPtrT>{tmp26}));
    TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(32));
    TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = UncheckedCast<UintPtrT>(WordShr(TNode<UintPtrT>{tmp26}, TNode<UintPtrT>{tmp28}));
    TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = UncheckedCast<Uint32T>(Convert8ATuint32(TNode<UintPtrT>{tmp29}));
    Goto(&block6, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp27, tmp30);
  }

  if (block5.is_used()) {
    TNode<JSArrayBuffer> tmp31;
    TNode<UintPtrT> tmp32;
    TNode<BigInt> tmp33;
    TNode<BoolT> tmp34;
    TNode<UintPtrT> tmp35;
    TNode<UintPtrT> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    Bind(&block5, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    TNode<UintPtrT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<UintPtrT>(LoadBigIntDigit(TNode<BigInt>{tmp33}, 0));
    TNode<Uint32T> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<Uint32T>(Convert8ATuint32(TNode<UintPtrT>{tmp39}));
    TNode<UintPtrT> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(2));
    TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = UncheckedCast<BoolT>(UintPtrGreaterThanOrEqual(TNode<UintPtrT>{tmp35}, TNode<UintPtrT>{tmp41}));
    Branch(tmp42, &block7, &block8, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp40, tmp38, tmp40);
  }

  if (block7.is_used()) {
    TNode<JSArrayBuffer> tmp43;
    TNode<UintPtrT> tmp44;
    TNode<BigInt> tmp45;
    TNode<BoolT> tmp46;
    TNode<UintPtrT> tmp47;
    TNode<UintPtrT> tmp48;
    TNode<Uint32T> tmp49;
    TNode<Uint32T> tmp50;
    TNode<Uint32T> tmp51;
    Bind(&block7, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    TNode<UintPtrT> tmp52;
    USE(tmp52);
    tmp52 = UncheckedCast<UintPtrT>(LoadBigIntDigit(TNode<BigInt>{tmp45}, 1));
    TNode<Uint32T> tmp53;
    USE(tmp53);
    tmp53 = UncheckedCast<Uint32T>(Convert8ATuint32(TNode<UintPtrT>{tmp52}));
    Goto(&block8, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp53, tmp51);
  }

  if (block8.is_used()) {
    TNode<JSArrayBuffer> tmp54;
    TNode<UintPtrT> tmp55;
    TNode<BigInt> tmp56;
    TNode<BoolT> tmp57;
    TNode<UintPtrT> tmp58;
    TNode<UintPtrT> tmp59;
    TNode<Uint32T> tmp60;
    TNode<Uint32T> tmp61;
    TNode<Uint32T> tmp62;
    Bind(&block8, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    Goto(&block6, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61);
  }

  if (block6.is_used()) {
    TNode<JSArrayBuffer> tmp63;
    TNode<UintPtrT> tmp64;
    TNode<BigInt> tmp65;
    TNode<BoolT> tmp66;
    TNode<UintPtrT> tmp67;
    TNode<UintPtrT> tmp68;
    TNode<Uint32T> tmp69;
    TNode<Uint32T> tmp70;
    Bind(&block6, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    Goto(&block3, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp71;
    TNode<UintPtrT> tmp72;
    TNode<BigInt> tmp73;
    TNode<BoolT> tmp74;
    TNode<UintPtrT> tmp75;
    TNode<UintPtrT> tmp76;
    TNode<Uint32T> tmp77;
    TNode<Uint32T> tmp78;
    Bind(&block3, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    TNode<UintPtrT> tmp79;
    USE(tmp79);
    tmp79 = UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr(0));
    TNode<BoolT> tmp80;
    USE(tmp80);
    tmp80 = UncheckedCast<BoolT>(WordNotEqual(TNode<UintPtrT>{tmp76}, TNode<UintPtrT>{tmp79}));
    Branch(tmp80, &block9, &block10, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78);
  }

  if (block9.is_used()) {
    TNode<JSArrayBuffer> tmp81;
    TNode<UintPtrT> tmp82;
    TNode<BigInt> tmp83;
    TNode<BoolT> tmp84;
    TNode<UintPtrT> tmp85;
    TNode<UintPtrT> tmp86;
    TNode<Uint32T> tmp87;
    TNode<Uint32T> tmp88;
    Bind(&block9, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88);
    TNode<Int32T> tmp89;
    USE(tmp89);
    tmp89 = UncheckedCast<Int32T>(Signed(TNode<Uint32T>{tmp88}));
    TNode<Int32T> tmp90;
    USE(tmp90);
    tmp90 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0));
    TNode<Int32T> tmp91;
    USE(tmp91);
    tmp91 = UncheckedCast<Int32T>(Int32Sub(TNode<Int32T>{tmp90}, TNode<Int32T>{tmp89}));
    TNode<Uint32T> tmp92;
    USE(tmp92);
    tmp92 = UncheckedCast<Uint32T>(Unsigned(TNode<Int32T>{tmp91}));
    TNode<Uint32T> tmp93;
    USE(tmp93);
    tmp93 = UncheckedCast<Uint32T>(FromConstexpr8ATuint32(0));
    TNode<BoolT> tmp94;
    USE(tmp94);
    tmp94 = UncheckedCast<BoolT>(Word32NotEqual(TNode<Uint32T>{tmp87}, TNode<Uint32T>{tmp93}));
    Branch(tmp94, &block11, &block12, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp92, tmp92);
  }

  if (block11.is_used()) {
    TNode<JSArrayBuffer> tmp95;
    TNode<UintPtrT> tmp96;
    TNode<BigInt> tmp97;
    TNode<BoolT> tmp98;
    TNode<UintPtrT> tmp99;
    TNode<UintPtrT> tmp100;
    TNode<Uint32T> tmp101;
    TNode<Uint32T> tmp102;
    TNode<Uint32T> tmp103;
    Bind(&block11, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    TNode<Int32T> tmp104;
    USE(tmp104);
    tmp104 = UncheckedCast<Int32T>(Signed(TNode<Uint32T>{tmp102}));
    TNode<Int32T> tmp105;
    USE(tmp105);
    tmp105 = UncheckedCast<Int32T>(FromConstexpr7ATint32(1));
    TNode<Int32T> tmp106;
    USE(tmp106);
    tmp106 = UncheckedCast<Int32T>(Int32Sub(TNode<Int32T>{tmp104}, TNode<Int32T>{tmp105}));
    TNode<Uint32T> tmp107;
    USE(tmp107);
    tmp107 = UncheckedCast<Uint32T>(Unsigned(TNode<Int32T>{tmp106}));
    Goto(&block12, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp107, tmp103);
  }

  if (block12.is_used()) {
    TNode<JSArrayBuffer> tmp108;
    TNode<UintPtrT> tmp109;
    TNode<BigInt> tmp110;
    TNode<BoolT> tmp111;
    TNode<UintPtrT> tmp112;
    TNode<UintPtrT> tmp113;
    TNode<Uint32T> tmp114;
    TNode<Uint32T> tmp115;
    TNode<Uint32T> tmp116;
    Bind(&block12, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    TNode<Int32T> tmp117;
    USE(tmp117);
    tmp117 = UncheckedCast<Int32T>(Signed(TNode<Uint32T>{tmp114}));
    TNode<Int32T> tmp118;
    USE(tmp118);
    tmp118 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0));
    TNode<Int32T> tmp119;
    USE(tmp119);
    tmp119 = UncheckedCast<Int32T>(Int32Sub(TNode<Int32T>{tmp118}, TNode<Int32T>{tmp117}));
    TNode<Uint32T> tmp120;
    USE(tmp120);
    tmp120 = UncheckedCast<Uint32T>(Unsigned(TNode<Int32T>{tmp119}));
    Goto(&block10, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp120, tmp115);
  }

  if (block10.is_used()) {
    TNode<JSArrayBuffer> tmp121;
    TNode<UintPtrT> tmp122;
    TNode<BigInt> tmp123;
    TNode<BoolT> tmp124;
    TNode<UintPtrT> tmp125;
    TNode<UintPtrT> tmp126;
    TNode<Uint32T> tmp127;
    TNode<Uint32T> tmp128;
    Bind(&block10, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    StoreDataView64(TNode<JSArrayBuffer>{tmp121}, TNode<UintPtrT>{tmp122}, TNode<Uint32T>{tmp127}, TNode<Uint32T>{tmp128}, TNode<BoolT>{tmp124});
    Goto(&block1);
  }

    Bind(&block1);
}

compiler::TNode<Object> DataViewBuiltinsFromDSLAssembler::DataViewSet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_value, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  PLabel<Context, Object, Object, Object, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, Object, Context> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, Object, Context, Number> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block16(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block19(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block20(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block23(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block24(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block27(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block28(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block30(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block31(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block33(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block34(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block35(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block32(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block29(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block25(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block21(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block17(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context, p_receiver, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<String>(MakeDataViewSetterNameString(p_kind));
    TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<JSDataView>(ValidateDataView(TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp5}));
    TNode<Number> tmp7;
    USE(tmp7);
    Label label0(this);
    tmp7 = ToIndex(TNode<Object>{tmp2}, TNode<Context>{tmp0}, &label0);
    Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, Uninitialized<Number>(), tmp2, tmp0, tmp7);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, Uninitialized<Number>(), tmp2, tmp0);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<Object> tmp12;
    TNode<JSDataView> tmp13;
    TNode<Number> tmp14;
    TNode<Object> tmp15;
    TNode<Context> tmp16;
    Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    Goto(&block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    TNode<Object> tmp21;
    TNode<JSDataView> tmp22;
    TNode<Number> tmp23;
    TNode<Object> tmp24;
    TNode<Context> tmp25;
    TNode<Number> tmp26;
    Bind(&block4, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    Goto(&block2, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp26);
  }

  if (block3.is_used()) {
    TNode<Context> tmp27;
    TNode<Object> tmp28;
    TNode<Object> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<JSDataView> tmp32;
    TNode<Number> tmp33;
    Bind(&block3, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ThrowRangeError(TNode<Context>{tmp27}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block2.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    TNode<JSDataView> tmp39;
    TNode<Number> tmp40;
    Bind(&block2, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<BoolT>(ToBoolean(TNode<Object>{tmp38}));
    TNode<JSArrayBuffer> tmp42;
    USE(tmp42);
    tmp42 = UncheckedCast<JSArrayBuffer>(LoadJSArrayBufferViewBuffer(TNode<JSArrayBufferView>{tmp39}));
    if (((ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)) || (ElementsKindEqual(p_kind, BIGINT64_ELEMENTS)))) {
      Goto(&block7, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, Uninitialized<BigInt>(), Uninitialized<Number>());
    } else {
      Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, Uninitialized<BigInt>(), Uninitialized<Number>());
    }
  }

  if (block7.is_used()) {
    TNode<Context> tmp43;
    TNode<Object> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    TNode<JSDataView> tmp48;
    TNode<Number> tmp49;
    TNode<BoolT> tmp50;
    TNode<JSArrayBuffer> tmp51;
    TNode<BigInt> tmp52;
    TNode<Number> tmp53;
    Bind(&block7, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    TNode<BigInt> tmp54;
    USE(tmp54);
    tmp54 = UncheckedCast<BigInt>(ToBigInt(TNode<Context>{tmp43}, TNode<Object>{tmp46}));
    Goto(&block9, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp54, tmp53);
  }

  if (block8.is_used()) {
    TNode<Context> tmp55;
    TNode<Object> tmp56;
    TNode<Object> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<JSDataView> tmp60;
    TNode<Number> tmp61;
    TNode<BoolT> tmp62;
    TNode<JSArrayBuffer> tmp63;
    TNode<BigInt> tmp64;
    TNode<Number> tmp65;
    Bind(&block8, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    TNode<Number> tmp66;
    USE(tmp66);
    tmp66 = UncheckedCast<Number>(ToNumber(TNode<Context>{tmp55}, TNode<Object>{tmp58}));
    Goto(&block9, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp66);
  }

  if (block9.is_used()) {
    TNode<Context> tmp67;
    TNode<Object> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    TNode<JSDataView> tmp72;
    TNode<Number> tmp73;
    TNode<BoolT> tmp74;
    TNode<JSArrayBuffer> tmp75;
    TNode<BigInt> tmp76;
    TNode<Number> tmp77;
    Bind(&block9, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    TNode<BoolT> tmp78;
    USE(tmp78);
    tmp78 = UncheckedCast<BoolT>(IsDetachedBuffer(TNode<JSArrayBuffer>{tmp75}));
    Branch(tmp78, &block10, &block11, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77);
  }

  if (block10.is_used()) {
    TNode<Context> tmp79;
    TNode<Object> tmp80;
    TNode<Object> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    TNode<JSDataView> tmp84;
    TNode<Number> tmp85;
    TNode<BoolT> tmp86;
    TNode<JSArrayBuffer> tmp87;
    TNode<BigInt> tmp88;
    TNode<Number> tmp89;
    Bind(&block10, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    TNode<String> tmp90;
    USE(tmp90);
    tmp90 = UncheckedCast<String>(MakeDataViewSetterNameString(p_kind));
    ThrowTypeError(TNode<Context>{tmp79}, MessageTemplate::kDetachedOperation, TNode<Object>{tmp90});
  }

  if (block11.is_used()) {
    TNode<Context> tmp91;
    TNode<Object> tmp92;
    TNode<Object> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<JSDataView> tmp96;
    TNode<Number> tmp97;
    TNode<BoolT> tmp98;
    TNode<JSArrayBuffer> tmp99;
    TNode<BigInt> tmp100;
    TNode<Number> tmp101;
    Bind(&block11, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    TNode<Float64T> tmp102;
    USE(tmp102);
    tmp102 = UncheckedCast<Float64T>(Convert9ATfloat64(TNode<Number>{tmp97}));
    TNode<UintPtrT> tmp103;
    USE(tmp103);
    tmp103 = UncheckedCast<UintPtrT>(Convert9ATuintptr(TNode<Float64T>{tmp102}));
    TNode<UintPtrT> tmp104;
    USE(tmp104);
    tmp104 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteOffset(TNode<JSArrayBufferView>{tmp96}));
    TNode<UintPtrT> tmp105;
    USE(tmp105);
    tmp105 = UncheckedCast<UintPtrT>(LoadJSArrayBufferViewByteLength(TNode<JSArrayBufferView>{tmp96}));
    TNode<Float64T> tmp106;
    USE(tmp106);
    tmp106 = UncheckedCast<Float64T>(Convert9ATfloat64(TNode<UintPtrT>{tmp105}));
    TNode<Float64T> tmp107;
    USE(tmp107);
    tmp107 = UncheckedCast<Float64T>(Convert9ATfloat64((DataViewElementSize(p_kind))));
    TNode<Float64T> tmp108;
    USE(tmp108);
    tmp108 = UncheckedCast<Float64T>(Float64Add(TNode<Float64T>{tmp102}, TNode<Float64T>{tmp107}));
    TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = UncheckedCast<BoolT>(Float64GreaterThan(TNode<Float64T>{tmp108}, TNode<Float64T>{tmp106}));
    Branch(tmp109, &block12, &block13, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp106, tmp107);
  }

  if (block12.is_used()) {
    TNode<Context> tmp110;
    TNode<Object> tmp111;
    TNode<Object> tmp112;
    TNode<Object> tmp113;
    TNode<Object> tmp114;
    TNode<JSDataView> tmp115;
    TNode<Number> tmp116;
    TNode<BoolT> tmp117;
    TNode<JSArrayBuffer> tmp118;
    TNode<BigInt> tmp119;
    TNode<Number> tmp120;
    TNode<Float64T> tmp121;
    TNode<UintPtrT> tmp122;
    TNode<UintPtrT> tmp123;
    TNode<Float64T> tmp124;
    TNode<Float64T> tmp125;
    Bind(&block12, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ThrowRangeError(TNode<Context>{tmp110}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block13.is_used()) {
    TNode<Context> tmp126;
    TNode<Object> tmp127;
    TNode<Object> tmp128;
    TNode<Object> tmp129;
    TNode<Object> tmp130;
    TNode<JSDataView> tmp131;
    TNode<Number> tmp132;
    TNode<BoolT> tmp133;
    TNode<JSArrayBuffer> tmp134;
    TNode<BigInt> tmp135;
    TNode<Number> tmp136;
    TNode<Float64T> tmp137;
    TNode<UintPtrT> tmp138;
    TNode<UintPtrT> tmp139;
    TNode<Float64T> tmp140;
    TNode<Float64T> tmp141;
    Bind(&block13, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    TNode<UintPtrT> tmp142;
    USE(tmp142);
    tmp142 = UncheckedCast<UintPtrT>(UintPtrAdd(TNode<UintPtrT>{tmp138}, TNode<UintPtrT>{tmp139}));
    if (((ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)) || (ElementsKindEqual(p_kind, BIGINT64_ELEMENTS)))) {
      Goto(&block15, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142);
    } else {
      Goto(&block16, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142);
    }
  }

  if (block15.is_used()) {
    TNode<Context> tmp143;
    TNode<Object> tmp144;
    TNode<Object> tmp145;
    TNode<Object> tmp146;
    TNode<Object> tmp147;
    TNode<JSDataView> tmp148;
    TNode<Number> tmp149;
    TNode<BoolT> tmp150;
    TNode<JSArrayBuffer> tmp151;
    TNode<BigInt> tmp152;
    TNode<Number> tmp153;
    TNode<Float64T> tmp154;
    TNode<UintPtrT> tmp155;
    TNode<UintPtrT> tmp156;
    TNode<Float64T> tmp157;
    TNode<Float64T> tmp158;
    TNode<UintPtrT> tmp159;
    Bind(&block15, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    StoreDataViewBigInt(TNode<JSArrayBuffer>{tmp151}, TNode<UintPtrT>{tmp159}, TNode<BigInt>{tmp152}, TNode<BoolT>{tmp150});
    Goto(&block17, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block16.is_used()) {
    TNode<Context> tmp160;
    TNode<Object> tmp161;
    TNode<Object> tmp162;
    TNode<Object> tmp163;
    TNode<Object> tmp164;
    TNode<JSDataView> tmp165;
    TNode<Number> tmp166;
    TNode<BoolT> tmp167;
    TNode<JSArrayBuffer> tmp168;
    TNode<BigInt> tmp169;
    TNode<Number> tmp170;
    TNode<Float64T> tmp171;
    TNode<UintPtrT> tmp172;
    TNode<UintPtrT> tmp173;
    TNode<Float64T> tmp174;
    TNode<Float64T> tmp175;
    TNode<UintPtrT> tmp176;
    Bind(&block16, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176);
    TNode<Float64T> tmp177;
    USE(tmp177);
    tmp177 = UncheckedCast<Float64T>(ChangeNumberToFloat64(TNode<Number>{tmp170}));
    if (((ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (ElementsKindEqual(p_kind, INT8_ELEMENTS)))) {
      Goto(&block19, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
    } else {
      Goto(&block20, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
    }
  }

  if (block19.is_used()) {
    TNode<Context> tmp178;
    TNode<Object> tmp179;
    TNode<Object> tmp180;
    TNode<Object> tmp181;
    TNode<Object> tmp182;
    TNode<JSDataView> tmp183;
    TNode<Number> tmp184;
    TNode<BoolT> tmp185;
    TNode<JSArrayBuffer> tmp186;
    TNode<BigInt> tmp187;
    TNode<Number> tmp188;
    TNode<Float64T> tmp189;
    TNode<UintPtrT> tmp190;
    TNode<UintPtrT> tmp191;
    TNode<Float64T> tmp192;
    TNode<Float64T> tmp193;
    TNode<UintPtrT> tmp194;
    TNode<Float64T> tmp195;
    Bind(&block19, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195);
    TNode<Uint32T> tmp196;
    USE(tmp196);
    tmp196 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(TNode<Float64T>{tmp195}));
    StoreDataView8(TNode<JSArrayBuffer>{tmp186}, TNode<UintPtrT>{tmp194}, TNode<Uint32T>{tmp196});
    Goto(&block21, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195);
  }

  if (block20.is_used()) {
    TNode<Context> tmp197;
    TNode<Object> tmp198;
    TNode<Object> tmp199;
    TNode<Object> tmp200;
    TNode<Object> tmp201;
    TNode<JSDataView> tmp202;
    TNode<Number> tmp203;
    TNode<BoolT> tmp204;
    TNode<JSArrayBuffer> tmp205;
    TNode<BigInt> tmp206;
    TNode<Number> tmp207;
    TNode<Float64T> tmp208;
    TNode<UintPtrT> tmp209;
    TNode<UintPtrT> tmp210;
    TNode<Float64T> tmp211;
    TNode<Float64T> tmp212;
    TNode<UintPtrT> tmp213;
    TNode<Float64T> tmp214;
    Bind(&block20, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214);
    if (((ElementsKindEqual(p_kind, UINT16_ELEMENTS)) || (ElementsKindEqual(p_kind, INT16_ELEMENTS)))) {
      Goto(&block23, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214);
    } else {
      Goto(&block24, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214);
    }
  }

  if (block23.is_used()) {
    TNode<Context> tmp215;
    TNode<Object> tmp216;
    TNode<Object> tmp217;
    TNode<Object> tmp218;
    TNode<Object> tmp219;
    TNode<JSDataView> tmp220;
    TNode<Number> tmp221;
    TNode<BoolT> tmp222;
    TNode<JSArrayBuffer> tmp223;
    TNode<BigInt> tmp224;
    TNode<Number> tmp225;
    TNode<Float64T> tmp226;
    TNode<UintPtrT> tmp227;
    TNode<UintPtrT> tmp228;
    TNode<Float64T> tmp229;
    TNode<Float64T> tmp230;
    TNode<UintPtrT> tmp231;
    TNode<Float64T> tmp232;
    Bind(&block23, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    TNode<Uint32T> tmp233;
    USE(tmp233);
    tmp233 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(TNode<Float64T>{tmp232}));
    StoreDataView16(TNode<JSArrayBuffer>{tmp223}, TNode<UintPtrT>{tmp231}, TNode<Uint32T>{tmp233}, TNode<BoolT>{tmp222});
    Goto(&block25, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232);
  }

  if (block24.is_used()) {
    TNode<Context> tmp234;
    TNode<Object> tmp235;
    TNode<Object> tmp236;
    TNode<Object> tmp237;
    TNode<Object> tmp238;
    TNode<JSDataView> tmp239;
    TNode<Number> tmp240;
    TNode<BoolT> tmp241;
    TNode<JSArrayBuffer> tmp242;
    TNode<BigInt> tmp243;
    TNode<Number> tmp244;
    TNode<Float64T> tmp245;
    TNode<UintPtrT> tmp246;
    TNode<UintPtrT> tmp247;
    TNode<Float64T> tmp248;
    TNode<Float64T> tmp249;
    TNode<UintPtrT> tmp250;
    TNode<Float64T> tmp251;
    Bind(&block24, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251);
    if (((ElementsKindEqual(p_kind, UINT32_ELEMENTS)) || (ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      Goto(&block27, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251);
    } else {
      Goto(&block28, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251);
    }
  }

  if (block27.is_used()) {
    TNode<Context> tmp252;
    TNode<Object> tmp253;
    TNode<Object> tmp254;
    TNode<Object> tmp255;
    TNode<Object> tmp256;
    TNode<JSDataView> tmp257;
    TNode<Number> tmp258;
    TNode<BoolT> tmp259;
    TNode<JSArrayBuffer> tmp260;
    TNode<BigInt> tmp261;
    TNode<Number> tmp262;
    TNode<Float64T> tmp263;
    TNode<UintPtrT> tmp264;
    TNode<UintPtrT> tmp265;
    TNode<Float64T> tmp266;
    TNode<Float64T> tmp267;
    TNode<UintPtrT> tmp268;
    TNode<Float64T> tmp269;
    Bind(&block27, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269);
    TNode<Uint32T> tmp270;
    USE(tmp270);
    tmp270 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(TNode<Float64T>{tmp269}));
    StoreDataView32(TNode<JSArrayBuffer>{tmp260}, TNode<UintPtrT>{tmp268}, TNode<Uint32T>{tmp270}, TNode<BoolT>{tmp259});
    Goto(&block29, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269);
  }

  if (block28.is_used()) {
    TNode<Context> tmp271;
    TNode<Object> tmp272;
    TNode<Object> tmp273;
    TNode<Object> tmp274;
    TNode<Object> tmp275;
    TNode<JSDataView> tmp276;
    TNode<Number> tmp277;
    TNode<BoolT> tmp278;
    TNode<JSArrayBuffer> tmp279;
    TNode<BigInt> tmp280;
    TNode<Number> tmp281;
    TNode<Float64T> tmp282;
    TNode<UintPtrT> tmp283;
    TNode<UintPtrT> tmp284;
    TNode<Float64T> tmp285;
    TNode<Float64T> tmp286;
    TNode<UintPtrT> tmp287;
    TNode<Float64T> tmp288;
    Bind(&block28, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288);
    if ((ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      Goto(&block30, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288);
    } else {
      Goto(&block31, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288);
    }
  }

  if (block30.is_used()) {
    TNode<Context> tmp289;
    TNode<Object> tmp290;
    TNode<Object> tmp291;
    TNode<Object> tmp292;
    TNode<Object> tmp293;
    TNode<JSDataView> tmp294;
    TNode<Number> tmp295;
    TNode<BoolT> tmp296;
    TNode<JSArrayBuffer> tmp297;
    TNode<BigInt> tmp298;
    TNode<Number> tmp299;
    TNode<Float64T> tmp300;
    TNode<UintPtrT> tmp301;
    TNode<UintPtrT> tmp302;
    TNode<Float64T> tmp303;
    TNode<Float64T> tmp304;
    TNode<UintPtrT> tmp305;
    TNode<Float64T> tmp306;
    Bind(&block30, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306);
    TNode<Float32T> tmp307;
    USE(tmp307);
    tmp307 = UncheckedCast<Float32T>(TruncateFloat64ToFloat32(TNode<Float64T>{tmp306}));
    TNode<Uint32T> tmp308;
    USE(tmp308);
    tmp308 = UncheckedCast<Uint32T>(BitcastFloat32ToInt32(TNode<Float32T>{tmp307}));
    StoreDataView32(TNode<JSArrayBuffer>{tmp297}, TNode<UintPtrT>{tmp305}, TNode<Uint32T>{tmp308}, TNode<BoolT>{tmp296});
    Goto(&block32, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306);
  }

  if (block31.is_used()) {
    TNode<Context> tmp309;
    TNode<Object> tmp310;
    TNode<Object> tmp311;
    TNode<Object> tmp312;
    TNode<Object> tmp313;
    TNode<JSDataView> tmp314;
    TNode<Number> tmp315;
    TNode<BoolT> tmp316;
    TNode<JSArrayBuffer> tmp317;
    TNode<BigInt> tmp318;
    TNode<Number> tmp319;
    TNode<Float64T> tmp320;
    TNode<UintPtrT> tmp321;
    TNode<UintPtrT> tmp322;
    TNode<Float64T> tmp323;
    TNode<Float64T> tmp324;
    TNode<UintPtrT> tmp325;
    TNode<Float64T> tmp326;
    Bind(&block31, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326);
    if ((ElementsKindEqual(p_kind, FLOAT64_ELEMENTS))) {
      Goto(&block33, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326);
    } else {
      Goto(&block34, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326);
    }
  }

  if (block33.is_used()) {
    TNode<Context> tmp327;
    TNode<Object> tmp328;
    TNode<Object> tmp329;
    TNode<Object> tmp330;
    TNode<Object> tmp331;
    TNode<JSDataView> tmp332;
    TNode<Number> tmp333;
    TNode<BoolT> tmp334;
    TNode<JSArrayBuffer> tmp335;
    TNode<BigInt> tmp336;
    TNode<Number> tmp337;
    TNode<Float64T> tmp338;
    TNode<UintPtrT> tmp339;
    TNode<UintPtrT> tmp340;
    TNode<Float64T> tmp341;
    TNode<Float64T> tmp342;
    TNode<UintPtrT> tmp343;
    TNode<Float64T> tmp344;
    Bind(&block33, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344);
    TNode<Uint32T> tmp345;
    USE(tmp345);
    tmp345 = UncheckedCast<Uint32T>(Float64ExtractLowWord32(TNode<Float64T>{tmp344}));
    TNode<Uint32T> tmp346;
    USE(tmp346);
    tmp346 = UncheckedCast<Uint32T>(Float64ExtractHighWord32(TNode<Float64T>{tmp344}));
    StoreDataView64(TNode<JSArrayBuffer>{tmp335}, TNode<UintPtrT>{tmp343}, TNode<Uint32T>{tmp345}, TNode<Uint32T>{tmp346}, TNode<BoolT>{tmp334});
    Goto(&block35, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344);
  }

  if (block34.is_used()) {
    TNode<Context> tmp347;
    TNode<Object> tmp348;
    TNode<Object> tmp349;
    TNode<Object> tmp350;
    TNode<Object> tmp351;
    TNode<JSDataView> tmp352;
    TNode<Number> tmp353;
    TNode<BoolT> tmp354;
    TNode<JSArrayBuffer> tmp355;
    TNode<BigInt> tmp356;
    TNode<Number> tmp357;
    TNode<Float64T> tmp358;
    TNode<UintPtrT> tmp359;
    TNode<UintPtrT> tmp360;
    TNode<Float64T> tmp361;
    TNode<Float64T> tmp362;
    TNode<UintPtrT> tmp363;
    TNode<Float64T> tmp364;
    Bind(&block34, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364);
    Goto(&block35, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364);
  }

  if (block35.is_used()) {
    TNode<Context> tmp365;
    TNode<Object> tmp366;
    TNode<Object> tmp367;
    TNode<Object> tmp368;
    TNode<Object> tmp369;
    TNode<JSDataView> tmp370;
    TNode<Number> tmp371;
    TNode<BoolT> tmp372;
    TNode<JSArrayBuffer> tmp373;
    TNode<BigInt> tmp374;
    TNode<Number> tmp375;
    TNode<Float64T> tmp376;
    TNode<UintPtrT> tmp377;
    TNode<UintPtrT> tmp378;
    TNode<Float64T> tmp379;
    TNode<Float64T> tmp380;
    TNode<UintPtrT> tmp381;
    TNode<Float64T> tmp382;
    Bind(&block35, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382);
    Goto(&block32, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382);
  }

  if (block32.is_used()) {
    TNode<Context> tmp383;
    TNode<Object> tmp384;
    TNode<Object> tmp385;
    TNode<Object> tmp386;
    TNode<Object> tmp387;
    TNode<JSDataView> tmp388;
    TNode<Number> tmp389;
    TNode<BoolT> tmp390;
    TNode<JSArrayBuffer> tmp391;
    TNode<BigInt> tmp392;
    TNode<Number> tmp393;
    TNode<Float64T> tmp394;
    TNode<UintPtrT> tmp395;
    TNode<UintPtrT> tmp396;
    TNode<Float64T> tmp397;
    TNode<Float64T> tmp398;
    TNode<UintPtrT> tmp399;
    TNode<Float64T> tmp400;
    Bind(&block32, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400);
    Goto(&block29, tmp383, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400);
  }

  if (block29.is_used()) {
    TNode<Context> tmp401;
    TNode<Object> tmp402;
    TNode<Object> tmp403;
    TNode<Object> tmp404;
    TNode<Object> tmp405;
    TNode<JSDataView> tmp406;
    TNode<Number> tmp407;
    TNode<BoolT> tmp408;
    TNode<JSArrayBuffer> tmp409;
    TNode<BigInt> tmp410;
    TNode<Number> tmp411;
    TNode<Float64T> tmp412;
    TNode<UintPtrT> tmp413;
    TNode<UintPtrT> tmp414;
    TNode<Float64T> tmp415;
    TNode<Float64T> tmp416;
    TNode<UintPtrT> tmp417;
    TNode<Float64T> tmp418;
    Bind(&block29, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418);
    Goto(&block25, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418);
  }

  if (block25.is_used()) {
    TNode<Context> tmp419;
    TNode<Object> tmp420;
    TNode<Object> tmp421;
    TNode<Object> tmp422;
    TNode<Object> tmp423;
    TNode<JSDataView> tmp424;
    TNode<Number> tmp425;
    TNode<BoolT> tmp426;
    TNode<JSArrayBuffer> tmp427;
    TNode<BigInt> tmp428;
    TNode<Number> tmp429;
    TNode<Float64T> tmp430;
    TNode<UintPtrT> tmp431;
    TNode<UintPtrT> tmp432;
    TNode<Float64T> tmp433;
    TNode<Float64T> tmp434;
    TNode<UintPtrT> tmp435;
    TNode<Float64T> tmp436;
    Bind(&block25, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436);
    Goto(&block21, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436);
  }

  if (block21.is_used()) {
    TNode<Context> tmp437;
    TNode<Object> tmp438;
    TNode<Object> tmp439;
    TNode<Object> tmp440;
    TNode<Object> tmp441;
    TNode<JSDataView> tmp442;
    TNode<Number> tmp443;
    TNode<BoolT> tmp444;
    TNode<JSArrayBuffer> tmp445;
    TNode<BigInt> tmp446;
    TNode<Number> tmp447;
    TNode<Float64T> tmp448;
    TNode<UintPtrT> tmp449;
    TNode<UintPtrT> tmp450;
    TNode<Float64T> tmp451;
    TNode<Float64T> tmp452;
    TNode<UintPtrT> tmp453;
    TNode<Float64T> tmp454;
    Bind(&block21, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454);
    Goto(&block17, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453);
  }

  if (block17.is_used()) {
    TNode<Context> tmp455;
    TNode<Object> tmp456;
    TNode<Object> tmp457;
    TNode<Object> tmp458;
    TNode<Object> tmp459;
    TNode<JSDataView> tmp460;
    TNode<Number> tmp461;
    TNode<BoolT> tmp462;
    TNode<JSArrayBuffer> tmp463;
    TNode<BigInt> tmp464;
    TNode<Number> tmp465;
    TNode<Float64T> tmp466;
    TNode<UintPtrT> tmp467;
    TNode<UintPtrT> tmp468;
    TNode<Float64T> tmp469;
    TNode<Float64T> tmp470;
    TNode<UintPtrT> tmp471;
    Bind(&block17, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471);
    TNode<Oddball> tmp472;
    USE(tmp472);
    tmp472 = Undefined();
    Goto(&block1, tmp472);
  }

    TNode<Object> tmp473;
    Bind(&block1, &tmp473);
  return TNode<Object>{tmp473};
}

TF_BUILTIN(DataViewPrototypeSetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Oddball> tmp38;
    USE(tmp38);
    tmp38 = Undefined();
    TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, TNode<Object>{tmp38}, UINT8_ELEMENTS));
    arguments->PopAndReturn(tmp39);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<Oddball> tmp38;
    USE(tmp38);
    tmp38 = Undefined();
    TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp34}, TNode<Object>{tmp35}, TNode<Object>{tmp36}, TNode<Object>{tmp37}, TNode<Object>{tmp38}, INT8_ELEMENTS));
    arguments->PopAndReturn(tmp39);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp38}, TNode<IntPtrT>{tmp39}));
    Branch(tmp40, &block13, &block14, tmp34, tmp35, tmp36, tmp37);
  }

  if (block13.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    Bind(&block13, &tmp41, &tmp42, &tmp43, &tmp44);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp45}));
    Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block14.is_used()) {
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    Bind(&block14, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined();
    Goto(&block15, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    Goto(&block15, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block15.is_used()) {
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    Bind(&block15, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp57}, TNode<Object>{tmp58}, TNode<Object>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, UINT16_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp38}, TNode<IntPtrT>{tmp39}));
    Branch(tmp40, &block13, &block14, tmp34, tmp35, tmp36, tmp37);
  }

  if (block13.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    Bind(&block13, &tmp41, &tmp42, &tmp43, &tmp44);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp45}));
    Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block14.is_used()) {
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    Bind(&block14, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined();
    Goto(&block15, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    Goto(&block15, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block15.is_used()) {
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    Bind(&block15, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp57}, TNode<Object>{tmp58}, TNode<Object>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, INT16_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp38}, TNode<IntPtrT>{tmp39}));
    Branch(tmp40, &block13, &block14, tmp34, tmp35, tmp36, tmp37);
  }

  if (block13.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    Bind(&block13, &tmp41, &tmp42, &tmp43, &tmp44);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp45}));
    Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block14.is_used()) {
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    Bind(&block14, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined();
    Goto(&block15, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    Goto(&block15, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block15.is_used()) {
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    Bind(&block15, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp57}, TNode<Object>{tmp58}, TNode<Object>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, UINT32_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp38}, TNode<IntPtrT>{tmp39}));
    Branch(tmp40, &block13, &block14, tmp34, tmp35, tmp36, tmp37);
  }

  if (block13.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    Bind(&block13, &tmp41, &tmp42, &tmp43, &tmp44);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp45}));
    Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block14.is_used()) {
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    Bind(&block14, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined();
    Goto(&block15, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    Goto(&block15, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block15.is_used()) {
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    Bind(&block15, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp57}, TNode<Object>{tmp58}, TNode<Object>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, INT32_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp38}, TNode<IntPtrT>{tmp39}));
    Branch(tmp40, &block13, &block14, tmp34, tmp35, tmp36, tmp37);
  }

  if (block13.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    Bind(&block13, &tmp41, &tmp42, &tmp43, &tmp44);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp45}));
    Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block14.is_used()) {
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    Bind(&block14, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined();
    Goto(&block15, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    Goto(&block15, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block15.is_used()) {
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    Bind(&block15, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp57}, TNode<Object>{tmp58}, TNode<Object>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, FLOAT32_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp38}, TNode<IntPtrT>{tmp39}));
    Branch(tmp40, &block13, &block14, tmp34, tmp35, tmp36, tmp37);
  }

  if (block13.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    Bind(&block13, &tmp41, &tmp42, &tmp43, &tmp44);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp45}));
    Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block14.is_used()) {
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    Bind(&block14, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined();
    Goto(&block15, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    Goto(&block15, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block15.is_used()) {
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    Bind(&block15, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp57}, TNode<Object>{tmp58}, TNode<Object>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, FLOAT64_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp38}, TNode<IntPtrT>{tmp39}));
    Branch(tmp40, &block13, &block14, tmp34, tmp35, tmp36, tmp37);
  }

  if (block13.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    Bind(&block13, &tmp41, &tmp42, &tmp43, &tmp44);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp45}));
    Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block14.is_used()) {
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    Bind(&block14, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined();
    Goto(&block15, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    Goto(&block15, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block15.is_used()) {
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    Bind(&block15, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp57}, TNode<Object>{tmp58}, TNode<Object>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, BIGUINT64_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Object, Object, Object, Object> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp7}));
    Goto(&block2, tmp5, tmp6, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    Bind(&block4, &tmp9, &tmp10);
    TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined();
    Goto(&block5, tmp9, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    Bind(&block2, &tmp12, &tmp13, &tmp14);
    Goto(&block5, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19}));
    Branch(tmp20, &block8, &block9, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    Bind(&block8, &tmp21, &tmp22, &tmp23);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp24}));
    Goto(&block7, tmp21, tmp22, tmp23, tmp25);
  }

  if (block9.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    Bind(&block9, &tmp26, &tmp27, &tmp28);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined();
    Goto(&block10, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33);
    Goto(&block10, tmp30, tmp31, tmp32, tmp33);
  }

  if (block10.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
    TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(IntPtrGreaterThan(TNode<IntPtrT>{tmp38}, TNode<IntPtrT>{tmp39}));
    Branch(tmp40, &block13, &block14, tmp34, tmp35, tmp36, tmp37);
  }

  if (block13.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    Bind(&block13, &tmp41, &tmp42, &tmp43, &tmp44);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(2));
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<Object>(GetArgumentValue(arguments, TNode<IntPtrT>{tmp45}));
    Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block14.is_used()) {
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    Bind(&block14, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined();
    Goto(&block15, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    Goto(&block15, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block15.is_used()) {
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    Bind(&block15, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Object>(DataViewSet(TNode<Context>{tmp57}, TNode<Object>{tmp58}, TNode<Object>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, BIGINT64_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

}  // namespace internal
}  // namespace v8

