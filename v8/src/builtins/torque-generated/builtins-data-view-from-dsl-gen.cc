#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-data-view-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<BoolT> DataViewBuiltinsFromDSLAssembler::WasNeutered(TNode<JSArrayBufferView> p_view) {
  TVARIABLE(BoolT, _return_186_impl);
  auto _return_186 = &_return_186_impl;
  USE(_return_186);
  Label label_macro_end_670_impl(this, {_return_186});
  Label* label_macro_end_670 = &label_macro_end_670_impl;
  USE(label_macro_end_670);
  // ../../src/builtins/data-view.tq:14:51
  {
    // ../../src/builtins/data-view.tq:15:4
    TNode<JSArrayBuffer> t526 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(p_view));
    TNode<BoolT> t527 = UncheckedCast<BoolT>(IsDetachedBuffer(t526));
    USE(t527);
    *_return_186 = t527;
    Goto(label_macro_end_670);
  }
  BIND(label_macro_end_670);
  return (*_return_186).value();
}

compiler::TNode<JSDataView> DataViewBuiltinsFromDSLAssembler::ValidateDataView(TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method) {
  TVARIABLE(JSDataView, _return_187_impl);
  auto _return_187 = &_return_187_impl;
  USE(_return_187);
  Label label_macro_end_671_impl(this, {_return_187});
  Label* label_macro_end_671 = &label_macro_end_671_impl;
  USE(label_macro_end_671);
  // ../../src/builtins/data-view.tq:19:45
  {
    // ../../src/builtins/data-view.tq:20:4
    {
      Label label_try_done_530_672_impl(this);
      Label* label_try_done_530_672 = &label_try_done_530_672_impl;
      USE(label_try_done_530_672);
      Label label_CastError_178_impl(this);
      Label* label_CastError_178 = &label_CastError_178_impl;
      USE(label_CastError_178);
      Label label_try_begin_531_673_impl(this);
      Label* label_try_begin_531_673 = &label_try_begin_531_673_impl;
      USE(label_try_begin_531_673);
      Goto(label_try_begin_531_673);
      if (label_try_begin_531_673->is_used())
      {
        BIND(label_try_begin_531_673);
        // ../../src/builtins/data-view.tq:20:8
        {
          // ../../src/builtins/data-view.tq:21:6
          TNode<JSDataView> t528 = UncheckedCast<JSDataView>(cast12ATJSDataView(p_o, label_CastError_178));
          USE(t528);
          *_return_187 = t528;
          Goto(label_macro_end_671);
        }
      }
      if (label_CastError_178->is_used())
      {
        BIND(label_CastError_178);
        // ../../src/builtins/data-view.tq:23:20
        {
          // ../../src/builtins/data-view.tq:24:6
          ThrowTypeError(p_context, MessageTemplate::kIncompatibleMethodReceiver, p_method);
        }
      }
    }
  }
  BIND(label_macro_end_671);
  return (*_return_187).value();
}

TF_BUILTIN(DataViewPrototypeGetBuffer, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:30:71
  {
    // ../../src/builtins/data-view.tq:31:4
    const char* t529 = "get DataView.prototype.buffer";
    TNode<String> t530 = UncheckedCast<String>(from_constexpr8ATString(t529));
    TNode<JSDataView> t531 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t530));
    USE(t531);
    TVARIABLE(JSDataView, data_view_188_impl);
    auto data_view_188 = &data_view_188_impl;
    USE(data_view_188);
    *data_view_188 = t531;
    // ../../src/builtins/data-view.tq:33:4
    TNode<JSArrayBuffer> t532 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer((*data_view_188).value()));
    arguments->PopAndReturn(t532);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteLength, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:38:61
  {
    // ../../src/builtins/data-view.tq:39:4
    const char* t533 = "get DataView.prototype.byte_length";
    TNode<String> t534 = UncheckedCast<String>(from_constexpr8ATString(t533));
    TNode<JSDataView> t535 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t534));
    USE(t535);
    TVARIABLE(JSDataView, data_view_189_impl);
    auto data_view_189 = &data_view_189_impl;
    USE(data_view_189);
    *data_view_189 = t535;
    // ../../src/builtins/data-view.tq:41:4
    {
      Label label__True_179_impl(this);
      Label* label__True_179 = &label__True_179_impl;
      USE(label__True_179);
      Label label__False_180_impl(this, {});
      Label* label__False_180 = &label__False_180_impl;
      USE(label__False_180);
      TNode<BoolT> t536 = UncheckedCast<BoolT>(WasNeutered((*data_view_189).value()));
      USE(t536);
      Branch(t536, label__True_179, label__False_180);
      if (label__True_179->is_used())
      {
        BIND(label__True_179);
        // ../../src/builtins/data-view.tq:41:32
        {
          // ../../src/builtins/data-view.tq:44:6
          int31_t t537 = 0;
          TNode<Smi> t538 = UncheckedCast<Smi>(from_constexpr5ATSmi(t537));
          arguments->PopAndReturn(t538);
        }
      }
      BIND(label__False_180);
    }
    // ../../src/builtins/data-view.tq:46:4
    TNode<Smi> t539 = UncheckedCast<Smi>(LoadDataViewByteLength((*data_view_189).value()));
    arguments->PopAndReturn(t539);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteOffset, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:51:61
  {
    // ../../src/builtins/data-view.tq:52:4
    const char* t540 = "get DataView.prototype.byte_offset";
    TNode<String> t541 = UncheckedCast<String>(from_constexpr8ATString(t540));
    TNode<JSDataView> t542 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t541));
    USE(t542);
    TVARIABLE(JSDataView, data_view_190_impl);
    auto data_view_190 = &data_view_190_impl;
    USE(data_view_190);
    *data_view_190 = t542;
    // ../../src/builtins/data-view.tq:54:4
    {
      Label label__True_181_impl(this);
      Label* label__True_181 = &label__True_181_impl;
      USE(label__True_181);
      Label label__False_182_impl(this, {});
      Label* label__False_182 = &label__False_182_impl;
      USE(label__False_182);
      TNode<BoolT> t543 = UncheckedCast<BoolT>(WasNeutered((*data_view_190).value()));
      USE(t543);
      Branch(t543, label__True_181, label__False_182);
      if (label__True_181->is_used())
      {
        BIND(label__True_181);
        // ../../src/builtins/data-view.tq:54:32
        {
          // ../../src/builtins/data-view.tq:57:6
          int31_t t544 = 0;
          TNode<Smi> t545 = UncheckedCast<Smi>(from_constexpr5ATSmi(t544));
          arguments->PopAndReturn(t545);
        }
      }
      BIND(label__False_182);
    }
    // ../../src/builtins/data-view.tq:59:4
    TNode<Smi> t546 = UncheckedCast<Smi>(LoadDataViewByteOffset((*data_view_190).value()));
    arguments->PopAndReturn(t546);
  }
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataViewUint8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset) {
  TVARIABLE(Smi, _return_191_impl);
  auto _return_191 = &_return_191_impl;
  USE(_return_191);
  Label label_macro_end_674_impl(this, {_return_191});
  Label* label_macro_end_674 = &label_macro_end_674_impl;
  USE(label_macro_end_674);
  // ../../src/builtins/data-view.tq:72:70
  {
    // ../../src/builtins/data-view.tq:73:4
    TNode<RawPtrT> t547 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TNode<Uint32T> t548 = UncheckedCast<Uint32T>(LoadUint8(t547, p_offset));
    USE(t548);
    TNode<Smi> t549 = UncheckedCast<Smi>(convert5ATSmi(t548));
    USE(t549);
    *_return_191 = t549;
    Goto(label_macro_end_674);
  }
  BIND(label_macro_end_674);
  return (*_return_191).value();
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataViewInt8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset) {
  TVARIABLE(Smi, _return_192_impl);
  auto _return_192 = &_return_192_impl;
  USE(_return_192);
  Label label_macro_end_675_impl(this, {_return_192});
  Label* label_macro_end_675 = &label_macro_end_675_impl;
  USE(label_macro_end_675);
  // ../../src/builtins/data-view.tq:76:69
  {
    // ../../src/builtins/data-view.tq:77:4
    TNode<RawPtrT> t550 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TNode<Int32T> t551 = UncheckedCast<Int32T>(LoadInt8(t550, p_offset));
    USE(t551);
    TNode<Smi> t552 = UncheckedCast<Smi>(convert5ATSmi(t551));
    USE(t552);
    *_return_192 = t552;
    Goto(label_macro_end_675);
  }
  BIND(label_macro_end_675);
  return (*_return_192).value();
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(Number, _return_193_impl);
  auto _return_193 = &_return_193_impl;
  USE(_return_193);
  Label label_macro_end_676_impl(this, {_return_193});
  Label* label_macro_end_676 = &label_macro_end_676_impl;
  USE(label_macro_end_676);
  // ../../src/builtins/data-view.tq:82:55
  {
    // ../../src/builtins/data-view.tq:83:4
    TNode<RawPtrT> t553 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_194_impl);
    auto data_pointer_194 = &data_pointer_194_impl;
    USE(data_pointer_194);
    *data_pointer_194 = t553;
    // ../../src/builtins/data-view.tq:85:4
    TVARIABLE(Int32T, b0_195_impl);
    auto b0_195 = &b0_195_impl;
    USE(b0_195);
    // ../../src/builtins/data-view.tq:86:4
    TVARIABLE(Int32T, b1_196_impl);
    auto b1_196 = &b1_196_impl;
    USE(b1_196);
    // ../../src/builtins/data-view.tq:87:4
    TVARIABLE(Int32T, result_197_impl);
    auto result_197 = &result_197_impl;
    USE(result_197);
    // ../../src/builtins/data-view.tq:90:4
    {
      Label label__True_183_impl(this);
      Label* label__True_183 = &label__True_183_impl;
      USE(label__True_183);
      Label label__False_184_impl(this);
      Label* label__False_184 = &label__False_184_impl;
      USE(label__False_184);
      Label label_if_done_label_532_677_impl(this, {b0_195, b1_196, result_197});
      Label* label_if_done_label_532_677 = &label_if_done_label_532_677_impl;
      USE(label_if_done_label_532_677);
      Branch(p_requested_little_endian, label__True_183, label__False_184);
      if (label__True_183->is_used())
      {
        BIND(label__True_183);
        // ../../src/builtins/data-view.tq:90:33
        {
          // ../../src/builtins/data-view.tq:91:6
          TNode<Uint32T> t554 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_194).value(), p_offset));
          USE(t554);
          TNode<Int32T> t555 = UncheckedCast<Int32T>(Signed(t554));
          USE(t555);
          *b0_195 = t555;
          // ../../src/builtins/data-view.tq:92:6
          int31_t t556 = 1;
          TNode<IntPtrT> t557 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t556));
          TNode<IntPtrT> t558 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t557));
          USE(t558);
          TNode<Int32T> t559 = UncheckedCast<Int32T>(LoadInt8((*data_pointer_194).value(), t558));
          USE(t559);
          *b1_196 = t559;
          // ../../src/builtins/data-view.tq:93:6
          int31_t t560 = 8;
          TNode<Int32T> t561 = UncheckedCast<Int32T>(from_constexpr7ATint32(t560));
          TNode<Int32T> t562 = UncheckedCast<Int32T>(Word32Shl((*b1_196).value(), t561));
          USE(t562);
          TNode<Int32T> t563 = UncheckedCast<Int32T>(Int32Add(t562, (*b0_195).value()));
          USE(t563);
          *result_197 = t563;
        }
        Goto(label_if_done_label_532_677);
      }
      if (label__False_184->is_used())
      {
        BIND(label__False_184);
        // ../../src/builtins/data-view.tq:94:11
        {
          // ../../src/builtins/data-view.tq:95:6
          TNode<Int32T> t564 = UncheckedCast<Int32T>(LoadInt8((*data_pointer_194).value(), p_offset));
          USE(t564);
          *b0_195 = t564;
          // ../../src/builtins/data-view.tq:96:6
          int31_t t565 = 1;
          TNode<IntPtrT> t566 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t565));
          TNode<IntPtrT> t567 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t566));
          USE(t567);
          TNode<Uint32T> t568 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_194).value(), t567));
          USE(t568);
          TNode<Int32T> t569 = UncheckedCast<Int32T>(Signed(t568));
          USE(t569);
          *b1_196 = t569;
          // ../../src/builtins/data-view.tq:97:6
          int31_t t570 = 8;
          TNode<Int32T> t571 = UncheckedCast<Int32T>(from_constexpr7ATint32(t570));
          TNode<Int32T> t572 = UncheckedCast<Int32T>(Word32Shl((*b0_195).value(), t571));
          USE(t572);
          TNode<Int32T> t573 = UncheckedCast<Int32T>(Int32Add(t572, (*b1_196).value()));
          USE(t573);
          *result_197 = t573;
        }
        Goto(label_if_done_label_532_677);
      }
      BIND(label_if_done_label_532_677);
    }
    // ../../src/builtins/data-view.tq:99:4
    {
      if ((p_signed)) {
        // ../../src/builtins/data-view.tq:99:26
        {
          // ../../src/builtins/data-view.tq:100:6
          TNode<Smi> t574 = UncheckedCast<Smi>(convert5ATSmi((*result_197).value()));
          USE(t574);
          *_return_193 = t574;
          Goto(label_macro_end_676);
        }
      } else {
        // ../../src/builtins/data-view.tq:101:11
        {
          // ../../src/builtins/data-view.tq:103:6
          int31_t t575 = 0xFFFF;
          TNode<Int32T> t576 = UncheckedCast<Int32T>(from_constexpr7ATint32(t575));
          TNode<Int32T> t577 = UncheckedCast<Int32T>(Word32And((*result_197).value(), t576));
          USE(t577);
          TNode<Smi> t578 = UncheckedCast<Smi>(convert5ATSmi(t577));
          USE(t578);
          *_return_193 = t578;
          Goto(label_macro_end_676);
        }
      }
    }
  }
  BIND(label_macro_end_676);
  return (*_return_193).value();
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(Number, _return_198_impl);
  auto _return_198 = &_return_198_impl;
  USE(_return_198);
  Label label_macro_end_678_impl(this, {_return_198});
  Label* label_macro_end_678 = &label_macro_end_678_impl;
  USE(label_macro_end_678);
  // ../../src/builtins/data-view.tq:109:55
  {
    // ../../src/builtins/data-view.tq:110:4
    TNode<RawPtrT> t579 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_199_impl);
    auto data_pointer_199 = &data_pointer_199_impl;
    USE(data_pointer_199);
    *data_pointer_199 = t579;
    // ../../src/builtins/data-view.tq:112:4
    TNode<Uint32T> t580 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_199).value(), p_offset));
    USE(t580);
    TVARIABLE(Uint32T, b0_200_impl);
    auto b0_200 = &b0_200_impl;
    USE(b0_200);
    *b0_200 = t580;
    // ../../src/builtins/data-view.tq:113:4
    int31_t t581 = 1;
    TNode<IntPtrT> t582 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t581));
    TNode<IntPtrT> t583 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t582));
    USE(t583);
    TNode<Uint32T> t584 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_199).value(), t583));
    USE(t584);
    TVARIABLE(Uint32T, b1_201_impl);
    auto b1_201 = &b1_201_impl;
    USE(b1_201);
    *b1_201 = t584;
    // ../../src/builtins/data-view.tq:114:4
    int31_t t585 = 2;
    TNode<IntPtrT> t586 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t585));
    TNode<IntPtrT> t587 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t586));
    USE(t587);
    TNode<Uint32T> t588 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_199).value(), t587));
    USE(t588);
    TVARIABLE(Uint32T, b2_202_impl);
    auto b2_202 = &b2_202_impl;
    USE(b2_202);
    *b2_202 = t588;
    // ../../src/builtins/data-view.tq:115:4
    int31_t t589 = 3;
    TNode<IntPtrT> t590 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t589));
    TNode<IntPtrT> t591 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t590));
    USE(t591);
    TNode<Uint32T> t592 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_199).value(), t591));
    USE(t592);
    TVARIABLE(Uint32T, b3_203_impl);
    auto b3_203 = &b3_203_impl;
    USE(b3_203);
    *b3_203 = t592;
    // ../../src/builtins/data-view.tq:116:4
    TVARIABLE(Uint32T, result_204_impl);
    auto result_204 = &result_204_impl;
    USE(result_204);
    // ../../src/builtins/data-view.tq:118:4
    {
      Label label__True_187_impl(this);
      Label* label__True_187 = &label__True_187_impl;
      USE(label__True_187);
      Label label__False_188_impl(this);
      Label* label__False_188 = &label__False_188_impl;
      USE(label__False_188);
      Label label_if_done_label_533_679_impl(this, {result_204});
      Label* label_if_done_label_533_679 = &label_if_done_label_533_679_impl;
      USE(label_if_done_label_533_679);
      Branch(p_requested_little_endian, label__True_187, label__False_188);
      if (label__True_187->is_used())
      {
        BIND(label__True_187);
        // ../../src/builtins/data-view.tq:118:33
        {
          // ../../src/builtins/data-view.tq:119:6
          int31_t t593 = 24;
          TNode<Uint32T> t594 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t593));
          TNode<Uint32T> t595 = UncheckedCast<Uint32T>(Word32Shl((*b3_203).value(), t594));
          USE(t595);
          int31_t t596 = 16;
          TNode<Uint32T> t597 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t596));
          TNode<Uint32T> t598 = UncheckedCast<Uint32T>(Word32Shl((*b2_202).value(), t597));
          USE(t598);
          TNode<Uint32T> t599 = UncheckedCast<Uint32T>(Word32Or(t595, t598));
          USE(t599);
          int31_t t600 = 8;
          TNode<Uint32T> t601 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t600));
          TNode<Uint32T> t602 = UncheckedCast<Uint32T>(Word32Shl((*b1_201).value(), t601));
          USE(t602);
          TNode<Uint32T> t603 = UncheckedCast<Uint32T>(Word32Or(t599, t602));
          USE(t603);
          TNode<Uint32T> t604 = UncheckedCast<Uint32T>(Word32Or(t603, (*b0_200).value()));
          USE(t604);
          *result_204 = t604;
        }
        Goto(label_if_done_label_533_679);
      }
      if (label__False_188->is_used())
      {
        BIND(label__False_188);
        // ../../src/builtins/data-view.tq:120:11
        {
          // ../../src/builtins/data-view.tq:121:6
          int31_t t605 = 24;
          TNode<Uint32T> t606 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t605));
          TNode<Uint32T> t607 = UncheckedCast<Uint32T>(Word32Shl((*b0_200).value(), t606));
          USE(t607);
          int31_t t608 = 16;
          TNode<Uint32T> t609 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t608));
          TNode<Uint32T> t610 = UncheckedCast<Uint32T>(Word32Shl((*b1_201).value(), t609));
          USE(t610);
          TNode<Uint32T> t611 = UncheckedCast<Uint32T>(Word32Or(t607, t610));
          USE(t611);
          int31_t t612 = 8;
          TNode<Uint32T> t613 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t612));
          TNode<Uint32T> t614 = UncheckedCast<Uint32T>(Word32Shl((*b2_202).value(), t613));
          USE(t614);
          TNode<Uint32T> t615 = UncheckedCast<Uint32T>(Word32Or(t611, t614));
          USE(t615);
          TNode<Uint32T> t616 = UncheckedCast<Uint32T>(Word32Or(t615, (*b3_203).value()));
          USE(t616);
          *result_204 = t616;
        }
        Goto(label_if_done_label_533_679);
      }
      BIND(label_if_done_label_533_679);
    }
    // ../../src/builtins/data-view.tq:124:4
    {
      if ((p_signed)) {
        // ../../src/builtins/data-view.tq:124:26
        {
          // ../../src/builtins/data-view.tq:125:6
          TNode<Int32T> t617 = UncheckedCast<Int32T>(Signed((*result_204).value()));
          USE(t617);
          TNode<Number> t618 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(t617));
          USE(t618);
          *_return_198 = t618;
          Goto(label_macro_end_678);
        }
      } else {
        // ../../src/builtins/data-view.tq:126:11
        {
          // ../../src/builtins/data-view.tq:127:6
          TNode<Number> t619 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi((*result_204).value()));
          USE(t619);
          *_return_198 = t619;
          Goto(label_macro_end_678);
        }
      }
    }
  }
  BIND(label_macro_end_678);
  return (*_return_198).value();
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian) {
  TVARIABLE(Number, _return_205_impl);
  auto _return_205 = &_return_205_impl;
  USE(_return_205);
  Label label_macro_end_680_impl(this, {_return_205});
  Label* label_macro_end_680 = &label_macro_end_680_impl;
  USE(label_macro_end_680);
  // ../../src/builtins/data-view.tq:132:67
  {
    // ../../src/builtins/data-view.tq:133:4
    TNode<RawPtrT> t620 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_206_impl);
    auto data_pointer_206 = &data_pointer_206_impl;
    USE(data_pointer_206);
    *data_pointer_206 = t620;
    // ../../src/builtins/data-view.tq:135:4
    TNode<Uint32T> t621 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_206).value(), p_offset));
    USE(t621);
    TVARIABLE(Uint32T, b0_207_impl);
    auto b0_207 = &b0_207_impl;
    USE(b0_207);
    *b0_207 = t621;
    // ../../src/builtins/data-view.tq:136:4
    int31_t t622 = 1;
    TNode<IntPtrT> t623 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t622));
    TNode<IntPtrT> t624 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t623));
    USE(t624);
    TNode<Uint32T> t625 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_206).value(), t624));
    USE(t625);
    TVARIABLE(Uint32T, b1_208_impl);
    auto b1_208 = &b1_208_impl;
    USE(b1_208);
    *b1_208 = t625;
    // ../../src/builtins/data-view.tq:137:4
    int31_t t626 = 2;
    TNode<IntPtrT> t627 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t626));
    TNode<IntPtrT> t628 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t627));
    USE(t628);
    TNode<Uint32T> t629 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_206).value(), t628));
    USE(t629);
    TVARIABLE(Uint32T, b2_209_impl);
    auto b2_209 = &b2_209_impl;
    USE(b2_209);
    *b2_209 = t629;
    // ../../src/builtins/data-view.tq:138:4
    int31_t t630 = 3;
    TNode<IntPtrT> t631 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t630));
    TNode<IntPtrT> t632 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t631));
    USE(t632);
    TNode<Uint32T> t633 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_206).value(), t632));
    USE(t633);
    TVARIABLE(Uint32T, b3_210_impl);
    auto b3_210 = &b3_210_impl;
    USE(b3_210);
    *b3_210 = t633;
    // ../../src/builtins/data-view.tq:139:4
    TVARIABLE(Uint32T, result_211_impl);
    auto result_211 = &result_211_impl;
    USE(result_211);
    // ../../src/builtins/data-view.tq:141:4
    {
      Label label__True_191_impl(this);
      Label* label__True_191 = &label__True_191_impl;
      USE(label__True_191);
      Label label__False_192_impl(this);
      Label* label__False_192 = &label__False_192_impl;
      USE(label__False_192);
      Label label_if_done_label_534_681_impl(this, {result_211});
      Label* label_if_done_label_534_681 = &label_if_done_label_534_681_impl;
      USE(label_if_done_label_534_681);
      Branch(p_requested_little_endian, label__True_191, label__False_192);
      if (label__True_191->is_used())
      {
        BIND(label__True_191);
        // ../../src/builtins/data-view.tq:141:33
        {
          // ../../src/builtins/data-view.tq:142:6
          int31_t t634 = 24;
          TNode<Uint32T> t635 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t634));
          TNode<Uint32T> t636 = UncheckedCast<Uint32T>(Word32Shl((*b3_210).value(), t635));
          USE(t636);
          int31_t t637 = 16;
          TNode<Uint32T> t638 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t637));
          TNode<Uint32T> t639 = UncheckedCast<Uint32T>(Word32Shl((*b2_209).value(), t638));
          USE(t639);
          TNode<Uint32T> t640 = UncheckedCast<Uint32T>(Word32Or(t636, t639));
          USE(t640);
          int31_t t641 = 8;
          TNode<Uint32T> t642 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t641));
          TNode<Uint32T> t643 = UncheckedCast<Uint32T>(Word32Shl((*b1_208).value(), t642));
          USE(t643);
          TNode<Uint32T> t644 = UncheckedCast<Uint32T>(Word32Or(t640, t643));
          USE(t644);
          TNode<Uint32T> t645 = UncheckedCast<Uint32T>(Word32Or(t644, (*b0_207).value()));
          USE(t645);
          *result_211 = t645;
        }
        Goto(label_if_done_label_534_681);
      }
      if (label__False_192->is_used())
      {
        BIND(label__False_192);
        // ../../src/builtins/data-view.tq:143:11
        {
          // ../../src/builtins/data-view.tq:144:6
          int31_t t646 = 24;
          TNode<Uint32T> t647 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t646));
          TNode<Uint32T> t648 = UncheckedCast<Uint32T>(Word32Shl((*b0_207).value(), t647));
          USE(t648);
          int31_t t649 = 16;
          TNode<Uint32T> t650 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t649));
          TNode<Uint32T> t651 = UncheckedCast<Uint32T>(Word32Shl((*b1_208).value(), t650));
          USE(t651);
          TNode<Uint32T> t652 = UncheckedCast<Uint32T>(Word32Or(t648, t651));
          USE(t652);
          int31_t t653 = 8;
          TNode<Uint32T> t654 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t653));
          TNode<Uint32T> t655 = UncheckedCast<Uint32T>(Word32Shl((*b2_209).value(), t654));
          USE(t655);
          TNode<Uint32T> t656 = UncheckedCast<Uint32T>(Word32Or(t652, t655));
          USE(t656);
          TNode<Uint32T> t657 = UncheckedCast<Uint32T>(Word32Or(t656, (*b3_210).value()));
          USE(t657);
          *result_211 = t657;
        }
        Goto(label_if_done_label_534_681);
      }
      BIND(label_if_done_label_534_681);
    }
    // ../../src/builtins/data-view.tq:147:4
    TNode<Float32T> t658 = UncheckedCast<Float32T>(BitcastInt32ToFloat32((*result_211).value()));
    USE(t658);
    TNode<Float64T> t659 = UncheckedCast<Float64T>(convert9ATfloat64(t658));
    USE(t659);
    TVARIABLE(Float64T, float_res_212_impl);
    auto float_res_212 = &float_res_212_impl;
    USE(float_res_212);
    *float_res_212 = t659;
    // ../../src/builtins/data-view.tq:148:4
    TNode<Number> t660 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi((*float_res_212).value()));
    USE(t660);
    *_return_205 = t660;
    Goto(label_macro_end_680);
  }
  BIND(label_macro_end_680);
  return (*_return_205).value();
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian) {
  TVARIABLE(Number, _return_213_impl);
  auto _return_213 = &_return_213_impl;
  USE(_return_213);
  Label label_macro_end_682_impl(this, {_return_213});
  Label* label_macro_end_682 = &label_macro_end_682_impl;
  USE(label_macro_end_682);
  // ../../src/builtins/data-view.tq:152:67
  {
    // ../../src/builtins/data-view.tq:153:4
    TNode<RawPtrT> t661 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_214_impl);
    auto data_pointer_214 = &data_pointer_214_impl;
    USE(data_pointer_214);
    *data_pointer_214 = t661;
    // ../../src/builtins/data-view.tq:155:4
    TNode<Uint32T> t662 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_214).value(), p_offset));
    USE(t662);
    TVARIABLE(Uint32T, b0_215_impl);
    auto b0_215 = &b0_215_impl;
    USE(b0_215);
    *b0_215 = t662;
    // ../../src/builtins/data-view.tq:156:4
    int31_t t663 = 1;
    TNode<IntPtrT> t664 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t663));
    TNode<IntPtrT> t665 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t664));
    USE(t665);
    TNode<Uint32T> t666 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_214).value(), t665));
    USE(t666);
    TVARIABLE(Uint32T, b1_216_impl);
    auto b1_216 = &b1_216_impl;
    USE(b1_216);
    *b1_216 = t666;
    // ../../src/builtins/data-view.tq:157:4
    int31_t t667 = 2;
    TNode<IntPtrT> t668 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t667));
    TNode<IntPtrT> t669 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t668));
    USE(t669);
    TNode<Uint32T> t670 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_214).value(), t669));
    USE(t670);
    TVARIABLE(Uint32T, b2_217_impl);
    auto b2_217 = &b2_217_impl;
    USE(b2_217);
    *b2_217 = t670;
    // ../../src/builtins/data-view.tq:158:4
    int31_t t671 = 3;
    TNode<IntPtrT> t672 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t671));
    TNode<IntPtrT> t673 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t672));
    USE(t673);
    TNode<Uint32T> t674 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_214).value(), t673));
    USE(t674);
    TVARIABLE(Uint32T, b3_218_impl);
    auto b3_218 = &b3_218_impl;
    USE(b3_218);
    *b3_218 = t674;
    // ../../src/builtins/data-view.tq:159:4
    int31_t t675 = 4;
    TNode<IntPtrT> t676 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t675));
    TNode<IntPtrT> t677 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t676));
    USE(t677);
    TNode<Uint32T> t678 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_214).value(), t677));
    USE(t678);
    TVARIABLE(Uint32T, b4_219_impl);
    auto b4_219 = &b4_219_impl;
    USE(b4_219);
    *b4_219 = t678;
    // ../../src/builtins/data-view.tq:160:4
    int31_t t679 = 5;
    TNode<IntPtrT> t680 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t679));
    TNode<IntPtrT> t681 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t680));
    USE(t681);
    TNode<Uint32T> t682 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_214).value(), t681));
    USE(t682);
    TVARIABLE(Uint32T, b5_220_impl);
    auto b5_220 = &b5_220_impl;
    USE(b5_220);
    *b5_220 = t682;
    // ../../src/builtins/data-view.tq:161:4
    int31_t t683 = 6;
    TNode<IntPtrT> t684 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t683));
    TNode<IntPtrT> t685 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t684));
    USE(t685);
    TNode<Uint32T> t686 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_214).value(), t685));
    USE(t686);
    TVARIABLE(Uint32T, b6_221_impl);
    auto b6_221 = &b6_221_impl;
    USE(b6_221);
    *b6_221 = t686;
    // ../../src/builtins/data-view.tq:162:4
    int31_t t687 = 7;
    TNode<IntPtrT> t688 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t687));
    TNode<IntPtrT> t689 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t688));
    USE(t689);
    TNode<Uint32T> t690 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_214).value(), t689));
    USE(t690);
    TVARIABLE(Uint32T, b7_222_impl);
    auto b7_222 = &b7_222_impl;
    USE(b7_222);
    *b7_222 = t690;
    // ../../src/builtins/data-view.tq:163:4
    TVARIABLE(Uint32T, low_word_223_impl);
    auto low_word_223 = &low_word_223_impl;
    USE(low_word_223);
    // ../../src/builtins/data-view.tq:164:4
    TVARIABLE(Uint32T, high_word_224_impl);
    auto high_word_224 = &high_word_224_impl;
    USE(high_word_224);
    // ../../src/builtins/data-view.tq:166:4
    {
      Label label__True_193_impl(this);
      Label* label__True_193 = &label__True_193_impl;
      USE(label__True_193);
      Label label__False_194_impl(this);
      Label* label__False_194 = &label__False_194_impl;
      USE(label__False_194);
      Label label_if_done_label_535_683_impl(this, {low_word_223, high_word_224});
      Label* label_if_done_label_535_683 = &label_if_done_label_535_683_impl;
      USE(label_if_done_label_535_683);
      Branch(p_requested_little_endian, label__True_193, label__False_194);
      if (label__True_193->is_used())
      {
        BIND(label__True_193);
        // ../../src/builtins/data-view.tq:166:33
        {
          // ../../src/builtins/data-view.tq:167:6
          int31_t t691 = 24;
          TNode<Uint32T> t692 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t691));
          TNode<Uint32T> t693 = UncheckedCast<Uint32T>(Word32Shl((*b3_218).value(), t692));
          USE(t693);
          int31_t t694 = 16;
          TNode<Uint32T> t695 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t694));
          TNode<Uint32T> t696 = UncheckedCast<Uint32T>(Word32Shl((*b2_217).value(), t695));
          USE(t696);
          TNode<Uint32T> t697 = UncheckedCast<Uint32T>(Word32Or(t693, t696));
          USE(t697);
          int31_t t698 = 8;
          TNode<Uint32T> t699 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t698));
          TNode<Uint32T> t700 = UncheckedCast<Uint32T>(Word32Shl((*b1_216).value(), t699));
          USE(t700);
          TNode<Uint32T> t701 = UncheckedCast<Uint32T>(Word32Or(t697, t700));
          USE(t701);
          TNode<Uint32T> t702 = UncheckedCast<Uint32T>(Word32Or(t701, (*b0_215).value()));
          USE(t702);
          *low_word_223 = t702;
          // ../../src/builtins/data-view.tq:168:6
          int31_t t703 = 24;
          TNode<Uint32T> t704 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t703));
          TNode<Uint32T> t705 = UncheckedCast<Uint32T>(Word32Shl((*b7_222).value(), t704));
          USE(t705);
          int31_t t706 = 16;
          TNode<Uint32T> t707 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t706));
          TNode<Uint32T> t708 = UncheckedCast<Uint32T>(Word32Shl((*b6_221).value(), t707));
          USE(t708);
          TNode<Uint32T> t709 = UncheckedCast<Uint32T>(Word32Or(t705, t708));
          USE(t709);
          int31_t t710 = 8;
          TNode<Uint32T> t711 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t710));
          TNode<Uint32T> t712 = UncheckedCast<Uint32T>(Word32Shl((*b5_220).value(), t711));
          USE(t712);
          TNode<Uint32T> t713 = UncheckedCast<Uint32T>(Word32Or(t709, t712));
          USE(t713);
          TNode<Uint32T> t714 = UncheckedCast<Uint32T>(Word32Or(t713, (*b4_219).value()));
          USE(t714);
          *high_word_224 = t714;
        }
        Goto(label_if_done_label_535_683);
      }
      if (label__False_194->is_used())
      {
        BIND(label__False_194);
        // ../../src/builtins/data-view.tq:169:11
        {
          // ../../src/builtins/data-view.tq:170:6
          int31_t t715 = 24;
          TNode<Uint32T> t716 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t715));
          TNode<Uint32T> t717 = UncheckedCast<Uint32T>(Word32Shl((*b0_215).value(), t716));
          USE(t717);
          int31_t t718 = 16;
          TNode<Uint32T> t719 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t718));
          TNode<Uint32T> t720 = UncheckedCast<Uint32T>(Word32Shl((*b1_216).value(), t719));
          USE(t720);
          TNode<Uint32T> t721 = UncheckedCast<Uint32T>(Word32Or(t717, t720));
          USE(t721);
          int31_t t722 = 8;
          TNode<Uint32T> t723 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t722));
          TNode<Uint32T> t724 = UncheckedCast<Uint32T>(Word32Shl((*b2_217).value(), t723));
          USE(t724);
          TNode<Uint32T> t725 = UncheckedCast<Uint32T>(Word32Or(t721, t724));
          USE(t725);
          TNode<Uint32T> t726 = UncheckedCast<Uint32T>(Word32Or(t725, (*b3_218).value()));
          USE(t726);
          *high_word_224 = t726;
          // ../../src/builtins/data-view.tq:171:6
          int31_t t727 = 24;
          TNode<Uint32T> t728 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t727));
          TNode<Uint32T> t729 = UncheckedCast<Uint32T>(Word32Shl((*b4_219).value(), t728));
          USE(t729);
          int31_t t730 = 16;
          TNode<Uint32T> t731 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t730));
          TNode<Uint32T> t732 = UncheckedCast<Uint32T>(Word32Shl((*b5_220).value(), t731));
          USE(t732);
          TNode<Uint32T> t733 = UncheckedCast<Uint32T>(Word32Or(t729, t732));
          USE(t733);
          int31_t t734 = 8;
          TNode<Uint32T> t735 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t734));
          TNode<Uint32T> t736 = UncheckedCast<Uint32T>(Word32Shl((*b6_221).value(), t735));
          USE(t736);
          TNode<Uint32T> t737 = UncheckedCast<Uint32T>(Word32Or(t733, t736));
          USE(t737);
          TNode<Uint32T> t738 = UncheckedCast<Uint32T>(Word32Or(t737, (*b7_222).value()));
          USE(t738);
          *low_word_223 = t738;
        }
        Goto(label_if_done_label_535_683);
      }
      BIND(label_if_done_label_535_683);
    }
    // ../../src/builtins/data-view.tq:174:4
    int31_t t739 = 0;
    TVARIABLE(Float64T, result_225_impl);
    auto result_225 = &result_225_impl;
    USE(result_225);
    TNode<Float64T> t740 = UncheckedCast<Float64T>(from_constexpr9ATfloat64(t739));
    *result_225 = t740;
    // ../../src/builtins/data-view.tq:175:4
    TNode<Float64T> t741 = UncheckedCast<Float64T>(Float64InsertLowWord32((*result_225).value(), (*low_word_223).value()));
    USE(t741);
    *result_225 = t741;
    // ../../src/builtins/data-view.tq:176:4
    TNode<Float64T> t742 = UncheckedCast<Float64T>(Float64InsertHighWord32((*result_225).value(), (*high_word_224).value()));
    USE(t742);
    *result_225 = t742;
    // ../../src/builtins/data-view.tq:178:4
    TNode<Number> t743 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi((*result_225).value()));
    USE(t743);
    *_return_213 = t743;
    Goto(label_macro_end_682);
  }
  BIND(label_macro_end_682);
  return (*_return_213).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::CreateEmptyBigInt(TNode<BoolT> p_is_positive, int31_t p_length) {
  TVARIABLE(BigInt, _return_226_impl);
  auto _return_226 = &_return_226_impl;
  USE(_return_226);
  Label label_macro_end_684_impl(this, {_return_226});
  Label* label_macro_end_684 = &label_macro_end_684_impl;
  USE(label_macro_end_684);
  // ../../src/builtins/data-view.tq:193:78
  {
    // ../../src/builtins/data-view.tq:195:4
    TNode<IntPtrT> t744 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(p_length));
    TNode<BigInt> t745 = UncheckedCast<BigInt>(AllocateBigInt(t744));
    USE(t745);
    TVARIABLE(BigInt, result_227_impl);
    auto result_227 = &result_227_impl;
    USE(result_227);
    *result_227 = t745;
    // ../../src/builtins/data-view.tq:198:4
    {
      Label label__True_195_impl(this);
      Label* label__True_195 = &label__True_195_impl;
      USE(label__True_195);
      Label label__False_196_impl(this);
      Label* label__False_196 = &label__False_196_impl;
      USE(label__False_196);
      Label label_if_done_label_536_685_impl(this, {});
      Label* label_if_done_label_536_685 = &label_if_done_label_536_685_impl;
      USE(label_if_done_label_536_685);
      Branch(p_is_positive, label__True_195, label__False_196);
      if (label__True_195->is_used())
      {
        BIND(label__True_195);
        // ../../src/builtins/data-view.tq:198:21
        {
          // ../../src/builtins/data-view.tq:199:6
          TNode<IntPtrT> t746 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(false, p_length));
          USE(t746);
          StoreBigIntBitfield((*result_227).value(), t746);
        }
        Goto(label_if_done_label_536_685);
      }
      if (label__False_196->is_used())
      {
        BIND(label__False_196);
        // ../../src/builtins/data-view.tq:201:11
        {
          // ../../src/builtins/data-view.tq:202:6
          TNode<IntPtrT> t747 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(true, p_length));
          USE(t747);
          StoreBigIntBitfield((*result_227).value(), t747);
        }
        Goto(label_if_done_label_536_685);
      }
      BIND(label_if_done_label_536_685);
    }
    // ../../src/builtins/data-view.tq:206:4
    *_return_226 = (*result_227).value();
    Goto(label_macro_end_684);
  }
  BIND(label_macro_end_684);
  return (*_return_226).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn64Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_228_impl);
  auto _return_228 = &_return_228_impl;
  USE(_return_228);
  Label label_macro_end_686_impl(this, {_return_228});
  Label* label_macro_end_686 = &label_macro_end_686_impl;
  USE(label_macro_end_686);
  // ../../src/builtins/data-view.tq:211:58
  {
    // ../../src/builtins/data-view.tq:214:4
    {
      Label label__True_197_impl(this);
      Label* label__True_197 = &label__True_197_impl;
      USE(label__True_197);
      Label label__False_198_impl(this, {});
      Label* label__False_198 = &label__False_198_impl;
      USE(label__False_198);
      Label label__True_199_impl(this);
      Label* label__True_199 = &label__True_199_impl;
      USE(label__True_199);
      int31_t t748 = 0;
      TNode<Uint32T> t749 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t748));
      TNode<BoolT> t750 = UncheckedCast<BoolT>(Word32Equal(p_low_word, t749));
      USE(t750);
      GotoIfNot(t750, label__False_198);
      int31_t t751 = 0;
      TNode<Uint32T> t752 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t751));
      TNode<BoolT> t753 = UncheckedCast<BoolT>(Word32Equal(p_high_word, t752));
      USE(t753);
      Branch(t753, label__True_197, label__False_198);
      if (label__True_197->is_used())
      {
        BIND(label__True_197);
        // ../../src/builtins/data-view.tq:214:41
        {
          // ../../src/builtins/data-view.tq:215:6
          TNode<IntPtrT> t754 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(0));
          TNode<BigInt> t755 = UncheckedCast<BigInt>(AllocateBigInt(t754));
          USE(t755);
          *_return_228 = t755;
          Goto(label_macro_end_686);
        }
      }
      BIND(label__False_198);
    }
    // ../../src/builtins/data-view.tq:218:4
    TVARIABLE(BoolT, is_positive_229_impl);
    auto is_positive_229 = &is_positive_229_impl;
    USE(is_positive_229);
    TNode<BoolT> t756 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
    *is_positive_229 = t756;
    // ../../src/builtins/data-view.tq:219:4
    TNode<UintPtrT> t757 = UncheckedCast<UintPtrT>(convert9ATuintptr(p_high_word));
    USE(t757);
    TNode<IntPtrT> t758 = UncheckedCast<IntPtrT>(Signed(t757));
    USE(t758);
    TVARIABLE(IntPtrT, high_part_230_impl);
    auto high_part_230 = &high_part_230_impl;
    USE(high_part_230);
    *high_part_230 = t758;
    // ../../src/builtins/data-view.tq:220:4
    TNode<UintPtrT> t759 = UncheckedCast<UintPtrT>(convert9ATuintptr(p_low_word));
    USE(t759);
    TNode<IntPtrT> t760 = UncheckedCast<IntPtrT>(Signed(t759));
    USE(t760);
    TVARIABLE(IntPtrT, low_part_231_impl);
    auto low_part_231 = &low_part_231_impl;
    USE(low_part_231);
    *low_part_231 = t760;
    // ../../src/builtins/data-view.tq:221:4
    int31_t t761 = 32;
    TNode<IntPtrT> t762 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t761));
    TNode<IntPtrT> t763 = UncheckedCast<IntPtrT>(WordShl((*high_part_230).value(), t762));
    USE(t763);
    TNode<IntPtrT> t764 = UncheckedCast<IntPtrT>(IntPtrAdd(t763, (*low_part_231).value()));
    USE(t764);
    TVARIABLE(IntPtrT, raw_value_232_impl);
    auto raw_value_232 = &raw_value_232_impl;
    USE(raw_value_232);
    *raw_value_232 = t764;
    // ../../src/builtins/data-view.tq:223:4
    {
      if ((p_signed)) {
        // ../../src/builtins/data-view.tq:223:26
        {
          // ../../src/builtins/data-view.tq:224:6
          {
            Label label__True_202_impl(this);
            Label* label__True_202 = &label__True_202_impl;
            USE(label__True_202);
            Label label__False_203_impl(this, {is_positive_229, raw_value_232});
            Label* label__False_203 = &label__False_203_impl;
            USE(label__False_203);
            int31_t t765 = 0;
            TNode<IntPtrT> t766 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t765));
            TNode<BoolT> t767 = UncheckedCast<BoolT>(IntPtrLessThan((*raw_value_232).value(), t766));
            USE(t767);
            Branch(t767, label__True_202, label__False_203);
            if (label__True_202->is_used())
            {
              BIND(label__True_202);
              // ../../src/builtins/data-view.tq:224:25
              {
                // ../../src/builtins/data-view.tq:225:8
                TNode<BoolT> t768 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
                *is_positive_229 = t768;
                // ../../src/builtins/data-view.tq:227:8
                int31_t t769 = 0;
                TNode<IntPtrT> t770 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t769));
                TNode<IntPtrT> t771 = UncheckedCast<IntPtrT>(IntPtrSub(t770, (*raw_value_232).value()));
                USE(t771);
                *raw_value_232 = t771;
              }
              Goto(label__False_203);
            }
            BIND(label__False_203);
          }
        }
      }
    }
    // ../../src/builtins/data-view.tq:232:4
    TNode<BigInt> t772 = UncheckedCast<BigInt>(CreateEmptyBigInt((*is_positive_229).value(), 1));
    USE(t772);
    TVARIABLE(BigInt, result_233_impl);
    auto result_233 = &result_233_impl;
    USE(result_233);
    *result_233 = t772;
    // ../../src/builtins/data-view.tq:234:4
    int31_t t773 = 0;
    TNode<UintPtrT> t774 = UncheckedCast<UintPtrT>(Unsigned((*raw_value_232).value()));
    USE(t774);
    StoreBigIntDigit((*result_233).value(), t773, t774);
    // ../../src/builtins/data-view.tq:236:4
    *_return_228 = (*result_233).value();
    Goto(label_macro_end_686);
  }
  BIND(label_macro_end_686);
  return (*_return_228).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn32Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_234_impl);
  auto _return_234 = &_return_234_impl;
  USE(_return_234);
  Label label_macro_end_687_impl(this, {_return_234});
  Label* label_macro_end_687 = &label_macro_end_687_impl;
  USE(label_macro_end_687);
  // ../../src/builtins/data-view.tq:241:58
  {
    // ../../src/builtins/data-view.tq:244:4
    {
      Label label__True_204_impl(this);
      Label* label__True_204 = &label__True_204_impl;
      USE(label__True_204);
      Label label__False_205_impl(this, {});
      Label* label__False_205 = &label__False_205_impl;
      USE(label__False_205);
      Label label__True_206_impl(this);
      Label* label__True_206 = &label__True_206_impl;
      USE(label__True_206);
      int31_t t775 = 0;
      TNode<Uint32T> t776 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t775));
      TNode<BoolT> t777 = UncheckedCast<BoolT>(Word32Equal(p_low_word, t776));
      USE(t777);
      GotoIfNot(t777, label__False_205);
      int31_t t778 = 0;
      TNode<Uint32T> t779 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t778));
      TNode<BoolT> t780 = UncheckedCast<BoolT>(Word32Equal(p_high_word, t779));
      USE(t780);
      Branch(t780, label__True_204, label__False_205);
      if (label__True_204->is_used())
      {
        BIND(label__True_204);
        // ../../src/builtins/data-view.tq:244:41
        {
          // ../../src/builtins/data-view.tq:245:6
          TNode<IntPtrT> t781 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(0));
          TNode<BigInt> t782 = UncheckedCast<BigInt>(AllocateBigInt(t781));
          USE(t782);
          *_return_234 = t782;
          Goto(label_macro_end_687);
        }
      }
      BIND(label__False_205);
    }
    // ../../src/builtins/data-view.tq:249:4
    TVARIABLE(BoolT, need_two_digits_235_impl);
    auto need_two_digits_235 = &need_two_digits_235_impl;
    USE(need_two_digits_235);
    TNode<BoolT> t783 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
    *need_two_digits_235 = t783;
    // ../../src/builtins/data-view.tq:250:4
    TVARIABLE(BoolT, is_positive_236_impl);
    auto is_positive_236 = &is_positive_236_impl;
    USE(is_positive_236);
    TNode<BoolT> t784 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
    *is_positive_236 = t784;
    // ../../src/builtins/data-view.tq:254:4
    TNode<Int32T> t785 = UncheckedCast<Int32T>(Signed(p_low_word));
    USE(t785);
    TVARIABLE(Int32T, low_part_237_impl);
    auto low_part_237 = &low_part_237_impl;
    USE(low_part_237);
    *low_part_237 = t785;
    // ../../src/builtins/data-view.tq:255:4
    TNode<Int32T> t786 = UncheckedCast<Int32T>(Signed(p_high_word));
    USE(t786);
    TVARIABLE(Int32T, high_part_238_impl);
    auto high_part_238 = &high_part_238_impl;
    USE(high_part_238);
    *high_part_238 = t786;
    // ../../src/builtins/data-view.tq:260:4
    {
      Label label__True_207_impl(this);
      Label* label__True_207 = &label__True_207_impl;
      USE(label__True_207);
      Label label__False_208_impl(this, {need_two_digits_235, is_positive_236, low_part_237, high_part_238});
      Label* label__False_208 = &label__False_208_impl;
      USE(label__False_208);
      int31_t t787 = 0;
      TNode<Uint32T> t788 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t787));
      TNode<BoolT> t789 = UncheckedCast<BoolT>(Word32NotEqual(p_high_word, t788));
      USE(t789);
      Branch(t789, label__True_207, label__False_208);
      if (label__True_207->is_used())
      {
        BIND(label__True_207);
        // ../../src/builtins/data-view.tq:260:24
        {
          // ../../src/builtins/data-view.tq:261:6
          {
            if ((p_signed)) {
              // ../../src/builtins/data-view.tq:261:28
              {
                // ../../src/builtins/data-view.tq:264:8
                {
                  Label label__True_211_impl(this);
                  Label* label__True_211 = &label__True_211_impl;
                  USE(label__True_211);
                  Label label__False_212_impl(this);
                  Label* label__False_212 = &label__False_212_impl;
                  USE(label__False_212);
                  Label label_if_done_label_537_688_impl(this, {need_two_digits_235, is_positive_236, low_part_237, high_part_238});
                  Label* label_if_done_label_537_688 = &label_if_done_label_537_688_impl;
                  USE(label_if_done_label_537_688);
                  int31_t t790 = 0;
                  TNode<Int32T> t791 = UncheckedCast<Int32T>(from_constexpr7ATint32(t790));
                  TNode<BoolT> t792 = UncheckedCast<BoolT>(Int32LessThan((*high_part_238).value(), t791));
                  USE(t792);
                  Branch(t792, label__True_211, label__False_212);
                  if (label__True_211->is_used())
                  {
                    BIND(label__True_211);
                    // ../../src/builtins/data-view.tq:264:27
                    {
                      // ../../src/builtins/data-view.tq:265:10
                      TNode<BoolT> t793 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
                      *is_positive_236 = t793;
                      // ../../src/builtins/data-view.tq:270:10
                      int31_t t794 = 0;
                      TNode<Int32T> t795 = UncheckedCast<Int32T>(from_constexpr7ATint32(t794));
                      TNode<Int32T> t796 = UncheckedCast<Int32T>(Int32Sub(t795, (*high_part_238).value()));
                      USE(t796);
                      *high_part_238 = t796;
                      // ../../src/builtins/data-view.tq:271:10
                      {
                        Label label__True_213_impl(this);
                        Label* label__True_213 = &label__True_213_impl;
                        USE(label__True_213);
                        Label label__False_214_impl(this, {high_part_238});
                        Label* label__False_214 = &label__False_214_impl;
                        USE(label__False_214);
                        int31_t t797 = 0;
                        TNode<Int32T> t798 = UncheckedCast<Int32T>(from_constexpr7ATint32(t797));
                        TNode<BoolT> t799 = UncheckedCast<BoolT>(Word32NotEqual((*low_part_237).value(), t798));
                        USE(t799);
                        Branch(t799, label__True_213, label__False_214);
                        if (label__True_213->is_used())
                        {
                          BIND(label__True_213);
                          // ../../src/builtins/data-view.tq:271:29
                          {
                            // ../../src/builtins/data-view.tq:272:12
                            int31_t t800 = 1;
                            TNode<Int32T> t801 = UncheckedCast<Int32T>(from_constexpr7ATint32(t800));
                            TNode<Int32T> t802 = UncheckedCast<Int32T>(Int32Sub((*high_part_238).value(), t801));
                            USE(t802);
                            *high_part_238 = t802;
                          }
                          Goto(label__False_214);
                        }
                        BIND(label__False_214);
                      }
                      // ../../src/builtins/data-view.tq:274:10
                      int31_t t803 = 0;
                      TNode<Int32T> t804 = UncheckedCast<Int32T>(from_constexpr7ATint32(t803));
                      TNode<Int32T> t805 = UncheckedCast<Int32T>(Int32Sub(t804, (*low_part_237).value()));
                      USE(t805);
                      *low_part_237 = t805;
                      // ../../src/builtins/data-view.tq:277:10
                      {
                        Label label__True_215_impl(this);
                        Label* label__True_215 = &label__True_215_impl;
                        USE(label__True_215);
                        Label label__False_216_impl(this, {need_two_digits_235});
                        Label* label__False_216 = &label__False_216_impl;
                        USE(label__False_216);
                        int31_t t806 = 0;
                        TNode<Int32T> t807 = UncheckedCast<Int32T>(from_constexpr7ATint32(t806));
                        TNode<BoolT> t808 = UncheckedCast<BoolT>(Word32NotEqual((*high_part_238).value(), t807));
                        USE(t808);
                        Branch(t808, label__True_215, label__False_216);
                        if (label__True_215->is_used())
                        {
                          BIND(label__True_215);
                          // ../../src/builtins/data-view.tq:277:30
                          {
                            // ../../src/builtins/data-view.tq:278:12
                            TNode<BoolT> t809 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
                            *need_two_digits_235 = t809;
                          }
                          Goto(label__False_216);
                        }
                        BIND(label__False_216);
                      }
                    }
                    Goto(label_if_done_label_537_688);
                  }
                  if (label__False_212->is_used())
                  {
                    BIND(label__False_212);
                    // ../../src/builtins/data-view.tq:281:15
                    {
                      // ../../src/builtins/data-view.tq:283:10
                      TNode<BoolT> t810 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
                      *need_two_digits_235 = t810;
                    }
                    Goto(label_if_done_label_537_688);
                  }
                  BIND(label_if_done_label_537_688);
                }
              }
            } else {
              // ../../src/builtins/data-view.tq:286:13
              {
                // ../../src/builtins/data-view.tq:289:8
                TNode<BoolT> t811 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
                *need_two_digits_235 = t811;
              }
            }
          }
        }
        Goto(label__False_208);
      }
      BIND(label__False_208);
    }
    // ../../src/builtins/data-view.tq:294:4
    TVARIABLE(BigInt, result_239_impl);
    auto result_239 = &result_239_impl;
    USE(result_239);
    // ../../src/builtins/data-view.tq:295:4
    {
      Label label__True_217_impl(this);
      Label* label__True_217 = &label__True_217_impl;
      USE(label__True_217);
      Label label__False_218_impl(this);
      Label* label__False_218 = &label__False_218_impl;
      USE(label__False_218);
      Label label_if_done_label_538_689_impl(this, {result_239});
      Label* label_if_done_label_538_689 = &label_if_done_label_538_689_impl;
      USE(label_if_done_label_538_689);
      Branch((*need_two_digits_235).value(), label__True_217, label__False_218);
      if (label__True_217->is_used())
      {
        BIND(label__True_217);
        // ../../src/builtins/data-view.tq:295:25
        {
          // ../../src/builtins/data-view.tq:296:6
          TNode<BigInt> t812 = UncheckedCast<BigInt>(CreateEmptyBigInt((*is_positive_236).value(), 2));
          USE(t812);
          *result_239 = t812;
        }
        Goto(label_if_done_label_538_689);
      }
      if (label__False_218->is_used())
      {
        BIND(label__False_218);
        // ../../src/builtins/data-view.tq:297:11
        {
          // ../../src/builtins/data-view.tq:298:6
          TNode<BigInt> t813 = UncheckedCast<BigInt>(CreateEmptyBigInt((*is_positive_236).value(), 1));
          USE(t813);
          *result_239 = t813;
        }
        Goto(label_if_done_label_538_689);
      }
      BIND(label_if_done_label_538_689);
    }
    // ../../src/builtins/data-view.tq:302:4
    int31_t t814 = 0;
    TNode<IntPtrT> t815 = UncheckedCast<IntPtrT>(convert8ATintptr((*low_part_237).value()));
    USE(t815);
    TNode<UintPtrT> t816 = UncheckedCast<UintPtrT>(Unsigned(t815));
    USE(t816);
    StoreBigIntDigit((*result_239).value(), t814, t816);
    // ../../src/builtins/data-view.tq:304:4
    {
      Label label__True_219_impl(this);
      Label* label__True_219 = &label__True_219_impl;
      USE(label__True_219);
      Label label__False_220_impl(this, {});
      Label* label__False_220 = &label__False_220_impl;
      USE(label__False_220);
      Branch((*need_two_digits_235).value(), label__True_219, label__False_220);
      if (label__True_219->is_used())
      {
        BIND(label__True_219);
        // ../../src/builtins/data-view.tq:304:25
        {
          // ../../src/builtins/data-view.tq:305:6
          int31_t t817 = 1;
          TNode<IntPtrT> t818 = UncheckedCast<IntPtrT>(convert8ATintptr((*high_part_238).value()));
          USE(t818);
          TNode<UintPtrT> t819 = UncheckedCast<UintPtrT>(Unsigned(t818));
          USE(t819);
          StoreBigIntDigit((*result_239).value(), t817, t819);
        }
        Goto(label__False_220);
      }
      BIND(label__False_220);
    }
    // ../../src/builtins/data-view.tq:308:4
    *_return_234 = (*result_239).value();
    Goto(label_macro_end_687);
  }
  BIND(label_macro_end_687);
  return (*_return_234).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigInt(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_240_impl);
  auto _return_240 = &_return_240_impl;
  USE(_return_240);
  Label label_macro_end_690_impl(this, {_return_240});
  Label* label_macro_end_690 = &label_macro_end_690_impl;
  USE(label_macro_end_690);
  // ../../src/builtins/data-view.tq:312:51
  {
    // ../../src/builtins/data-view.tq:315:4
    {
      bool t820 = Is64();
      USE(t820);
      if ((t820)) {
        // ../../src/builtins/data-view.tq:315:26
        {
          // ../../src/builtins/data-view.tq:316:6
          TNode<BigInt> t821 = UncheckedCast<BigInt>(MakeBigIntOn64Bit(p_low_word, p_high_word, p_signed));
          USE(t821);
          *_return_240 = t821;
          Goto(label_macro_end_690);
        }
      } else {
        // ../../src/builtins/data-view.tq:317:11
        {
          // ../../src/builtins/data-view.tq:318:6
          TNode<BigInt> t822 = UncheckedCast<BigInt>(MakeBigIntOn32Bit(p_low_word, p_high_word, p_signed));
          USE(t822);
          *_return_240 = t822;
          Goto(label_macro_end_690);
        }
      }
    }
  }
  BIND(label_macro_end_690);
  return (*_return_240).value();
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::LoadDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(BigInt, _return_241_impl);
  auto _return_241 = &_return_241_impl;
  USE(_return_241);
  Label label_macro_end_691_impl(this, {_return_241});
  Label* label_macro_end_691 = &label_macro_end_691_impl;
  USE(label_macro_end_691);
  // ../../src/builtins/data-view.tq:324:59
  {
    // ../../src/builtins/data-view.tq:325:4
    TNode<RawPtrT> t823 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_242_impl);
    auto data_pointer_242 = &data_pointer_242_impl;
    USE(data_pointer_242);
    *data_pointer_242 = t823;
    // ../../src/builtins/data-view.tq:327:4
    TNode<Uint32T> t824 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_242).value(), p_offset));
    USE(t824);
    TVARIABLE(Uint32T, b0_243_impl);
    auto b0_243 = &b0_243_impl;
    USE(b0_243);
    *b0_243 = t824;
    // ../../src/builtins/data-view.tq:328:4
    int31_t t825 = 1;
    TNode<IntPtrT> t826 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t825));
    TNode<IntPtrT> t827 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t826));
    USE(t827);
    TNode<Uint32T> t828 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_242).value(), t827));
    USE(t828);
    TVARIABLE(Uint32T, b1_244_impl);
    auto b1_244 = &b1_244_impl;
    USE(b1_244);
    *b1_244 = t828;
    // ../../src/builtins/data-view.tq:329:4
    int31_t t829 = 2;
    TNode<IntPtrT> t830 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t829));
    TNode<IntPtrT> t831 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t830));
    USE(t831);
    TNode<Uint32T> t832 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_242).value(), t831));
    USE(t832);
    TVARIABLE(Uint32T, b2_245_impl);
    auto b2_245 = &b2_245_impl;
    USE(b2_245);
    *b2_245 = t832;
    // ../../src/builtins/data-view.tq:330:4
    int31_t t833 = 3;
    TNode<IntPtrT> t834 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t833));
    TNode<IntPtrT> t835 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t834));
    USE(t835);
    TNode<Uint32T> t836 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_242).value(), t835));
    USE(t836);
    TVARIABLE(Uint32T, b3_246_impl);
    auto b3_246 = &b3_246_impl;
    USE(b3_246);
    *b3_246 = t836;
    // ../../src/builtins/data-view.tq:331:4
    int31_t t837 = 4;
    TNode<IntPtrT> t838 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t837));
    TNode<IntPtrT> t839 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t838));
    USE(t839);
    TNode<Uint32T> t840 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_242).value(), t839));
    USE(t840);
    TVARIABLE(Uint32T, b4_247_impl);
    auto b4_247 = &b4_247_impl;
    USE(b4_247);
    *b4_247 = t840;
    // ../../src/builtins/data-view.tq:332:4
    int31_t t841 = 5;
    TNode<IntPtrT> t842 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t841));
    TNode<IntPtrT> t843 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t842));
    USE(t843);
    TNode<Uint32T> t844 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_242).value(), t843));
    USE(t844);
    TVARIABLE(Uint32T, b5_248_impl);
    auto b5_248 = &b5_248_impl;
    USE(b5_248);
    *b5_248 = t844;
    // ../../src/builtins/data-view.tq:333:4
    int31_t t845 = 6;
    TNode<IntPtrT> t846 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t845));
    TNode<IntPtrT> t847 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t846));
    USE(t847);
    TNode<Uint32T> t848 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_242).value(), t847));
    USE(t848);
    TVARIABLE(Uint32T, b6_249_impl);
    auto b6_249 = &b6_249_impl;
    USE(b6_249);
    *b6_249 = t848;
    // ../../src/builtins/data-view.tq:334:4
    int31_t t849 = 7;
    TNode<IntPtrT> t850 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t849));
    TNode<IntPtrT> t851 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t850));
    USE(t851);
    TNode<Uint32T> t852 = UncheckedCast<Uint32T>(LoadUint8((*data_pointer_242).value(), t851));
    USE(t852);
    TVARIABLE(Uint32T, b7_250_impl);
    auto b7_250 = &b7_250_impl;
    USE(b7_250);
    *b7_250 = t852;
    // ../../src/builtins/data-view.tq:335:4
    TVARIABLE(Uint32T, low_word_251_impl);
    auto low_word_251 = &low_word_251_impl;
    USE(low_word_251);
    // ../../src/builtins/data-view.tq:336:4
    TVARIABLE(Uint32T, high_word_252_impl);
    auto high_word_252 = &high_word_252_impl;
    USE(high_word_252);
    // ../../src/builtins/data-view.tq:338:4
    {
      Label label__True_223_impl(this);
      Label* label__True_223 = &label__True_223_impl;
      USE(label__True_223);
      Label label__False_224_impl(this);
      Label* label__False_224 = &label__False_224_impl;
      USE(label__False_224);
      Label label_if_done_label_539_692_impl(this, {low_word_251, high_word_252});
      Label* label_if_done_label_539_692 = &label_if_done_label_539_692_impl;
      USE(label_if_done_label_539_692);
      Branch(p_requested_little_endian, label__True_223, label__False_224);
      if (label__True_223->is_used())
      {
        BIND(label__True_223);
        // ../../src/builtins/data-view.tq:338:33
        {
          // ../../src/builtins/data-view.tq:339:6
          int31_t t853 = 24;
          TNode<Uint32T> t854 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t853));
          TNode<Uint32T> t855 = UncheckedCast<Uint32T>(Word32Shl((*b3_246).value(), t854));
          USE(t855);
          int31_t t856 = 16;
          TNode<Uint32T> t857 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t856));
          TNode<Uint32T> t858 = UncheckedCast<Uint32T>(Word32Shl((*b2_245).value(), t857));
          USE(t858);
          TNode<Uint32T> t859 = UncheckedCast<Uint32T>(Word32Or(t855, t858));
          USE(t859);
          int31_t t860 = 8;
          TNode<Uint32T> t861 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t860));
          TNode<Uint32T> t862 = UncheckedCast<Uint32T>(Word32Shl((*b1_244).value(), t861));
          USE(t862);
          TNode<Uint32T> t863 = UncheckedCast<Uint32T>(Word32Or(t859, t862));
          USE(t863);
          TNode<Uint32T> t864 = UncheckedCast<Uint32T>(Word32Or(t863, (*b0_243).value()));
          USE(t864);
          *low_word_251 = t864;
          // ../../src/builtins/data-view.tq:340:6
          int31_t t865 = 24;
          TNode<Uint32T> t866 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t865));
          TNode<Uint32T> t867 = UncheckedCast<Uint32T>(Word32Shl((*b7_250).value(), t866));
          USE(t867);
          int31_t t868 = 16;
          TNode<Uint32T> t869 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t868));
          TNode<Uint32T> t870 = UncheckedCast<Uint32T>(Word32Shl((*b6_249).value(), t869));
          USE(t870);
          TNode<Uint32T> t871 = UncheckedCast<Uint32T>(Word32Or(t867, t870));
          USE(t871);
          int31_t t872 = 8;
          TNode<Uint32T> t873 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t872));
          TNode<Uint32T> t874 = UncheckedCast<Uint32T>(Word32Shl((*b5_248).value(), t873));
          USE(t874);
          TNode<Uint32T> t875 = UncheckedCast<Uint32T>(Word32Or(t871, t874));
          USE(t875);
          TNode<Uint32T> t876 = UncheckedCast<Uint32T>(Word32Or(t875, (*b4_247).value()));
          USE(t876);
          *high_word_252 = t876;
        }
        Goto(label_if_done_label_539_692);
      }
      if (label__False_224->is_used())
      {
        BIND(label__False_224);
        // ../../src/builtins/data-view.tq:341:11
        {
          // ../../src/builtins/data-view.tq:342:6
          int31_t t877 = 24;
          TNode<Uint32T> t878 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t877));
          TNode<Uint32T> t879 = UncheckedCast<Uint32T>(Word32Shl((*b0_243).value(), t878));
          USE(t879);
          int31_t t880 = 16;
          TNode<Uint32T> t881 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t880));
          TNode<Uint32T> t882 = UncheckedCast<Uint32T>(Word32Shl((*b1_244).value(), t881));
          USE(t882);
          TNode<Uint32T> t883 = UncheckedCast<Uint32T>(Word32Or(t879, t882));
          USE(t883);
          int31_t t884 = 8;
          TNode<Uint32T> t885 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t884));
          TNode<Uint32T> t886 = UncheckedCast<Uint32T>(Word32Shl((*b2_245).value(), t885));
          USE(t886);
          TNode<Uint32T> t887 = UncheckedCast<Uint32T>(Word32Or(t883, t886));
          USE(t887);
          TNode<Uint32T> t888 = UncheckedCast<Uint32T>(Word32Or(t887, (*b3_246).value()));
          USE(t888);
          *high_word_252 = t888;
          // ../../src/builtins/data-view.tq:343:6
          int31_t t889 = 24;
          TNode<Uint32T> t890 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t889));
          TNode<Uint32T> t891 = UncheckedCast<Uint32T>(Word32Shl((*b4_247).value(), t890));
          USE(t891);
          int31_t t892 = 16;
          TNode<Uint32T> t893 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t892));
          TNode<Uint32T> t894 = UncheckedCast<Uint32T>(Word32Shl((*b5_248).value(), t893));
          USE(t894);
          TNode<Uint32T> t895 = UncheckedCast<Uint32T>(Word32Or(t891, t894));
          USE(t895);
          int31_t t896 = 8;
          TNode<Uint32T> t897 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t896));
          TNode<Uint32T> t898 = UncheckedCast<Uint32T>(Word32Shl((*b6_249).value(), t897));
          USE(t898);
          TNode<Uint32T> t899 = UncheckedCast<Uint32T>(Word32Or(t895, t898));
          USE(t899);
          TNode<Uint32T> t900 = UncheckedCast<Uint32T>(Word32Or(t899, (*b7_250).value()));
          USE(t900);
          *low_word_251 = t900;
        }
        Goto(label_if_done_label_539_692);
      }
      BIND(label_if_done_label_539_692);
    }
    // ../../src/builtins/data-view.tq:346:4
    TNode<BigInt> t901 = UncheckedCast<BigInt>(MakeBigInt((*low_word_251).value(), (*high_word_252).value(), p_signed));
    USE(t901);
    *_return_241 = t901;
    Goto(label_macro_end_691);
  }
  BIND(label_macro_end_691);
  return (*_return_241).value();
}

compiler::TNode<Numeric> DataViewBuiltinsFromDSLAssembler::DataViewGet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Numeric, _return_253_impl);
  auto _return_253 = &_return_253_impl;
  USE(_return_253);
  Label label_macro_end_693_impl(this, {_return_253});
  Label* label_macro_end_693 = &label_macro_end_693_impl;
  USE(label_macro_end_693);
  // ../../src/builtins/data-view.tq:356:59
  {
    // ../../src/builtins/data-view.tq:360:4
    const char* t902 = "get DataView.prototype.get";
    TNode<String> t903 = UncheckedCast<String>(from_constexpr8ATString(t902));
    TNode<JSDataView> t904 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t903));
    USE(t904);
    TVARIABLE(JSDataView, data_view_254_impl);
    auto data_view_254 = &data_view_254_impl;
    USE(data_view_254);
    *data_view_254 = t904;
    // ../../src/builtins/data-view.tq:363:4
    TVARIABLE(Smi, getIndexSmi_255_impl);
    auto getIndexSmi_255 = &getIndexSmi_255_impl;
    USE(getIndexSmi_255);
    // ../../src/builtins/data-view.tq:364:4
    {
      Label label_try_done_540_694_impl(this);
      Label* label_try_done_540_694 = &label_try_done_540_694_impl;
      USE(label_try_done_540_694);
      Label label_RangeError_225_impl(this);
      Label* label_RangeError_225 = &label_RangeError_225_impl;
      USE(label_RangeError_225);
      Label label_try_begin_541_695_impl(this);
      Label* label_try_begin_541_695 = &label_try_begin_541_695_impl;
      USE(label_try_begin_541_695);
      Goto(label_try_begin_541_695);
      if (label_try_begin_541_695->is_used())
      {
        BIND(label_try_begin_541_695);
        // ../../src/builtins/data-view.tq:364:8
        {
          // ../../src/builtins/data-view.tq:365:6
          TNode<Smi> t905 = UncheckedCast<Smi>(ToSmiIndex(p_offset, p_context, label_RangeError_225));
          USE(t905);
          *getIndexSmi_255 = t905;
        }
        Goto(label_try_done_540_694);
      }
      if (label_RangeError_225->is_used())
      {
        BIND(label_RangeError_225);
        // ../../src/builtins/data-view.tq:367:21
        {
          // ../../src/builtins/data-view.tq:368:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidDataViewAccessorOffset);
        }
      }
      BIND(label_try_done_540_694);
    }
    // ../../src/builtins/data-view.tq:370:4
    TNode<IntPtrT> t906 = UncheckedCast<IntPtrT>(convert8ATintptr((*getIndexSmi_255).value()));
    USE(t906);
    TVARIABLE(IntPtrT, getIndex_256_impl);
    auto getIndex_256 = &getIndex_256_impl;
    USE(getIndex_256);
    *getIndex_256 = t906;
    // ../../src/builtins/data-view.tq:372:4
    TNode<BoolT> t907 = UncheckedCast<BoolT>(ToBoolean(p_requested_little_endian));
    USE(t907);
    TVARIABLE(BoolT, littleEndian_257_impl);
    auto littleEndian_257 = &littleEndian_257_impl;
    USE(littleEndian_257);
    *littleEndian_257 = t907;
    // ../../src/builtins/data-view.tq:373:4
    TNode<JSArrayBuffer> t908 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer((*data_view_254).value()));
    TVARIABLE(JSArrayBuffer, buffer_258_impl);
    auto buffer_258 = &buffer_258_impl;
    USE(buffer_258);
    *buffer_258 = t908;
    // ../../src/builtins/data-view.tq:375:4
    {
      Label label__True_226_impl(this);
      Label* label__True_226 = &label__True_226_impl;
      USE(label__True_226);
      Label label__False_227_impl(this, {});
      Label* label__False_227 = &label__False_227_impl;
      USE(label__False_227);
      TNode<BoolT> t909 = UncheckedCast<BoolT>(IsDetachedBuffer((*buffer_258).value()));
      USE(t909);
      Branch(t909, label__True_226, label__False_227);
      if (label__True_226->is_used())
      {
        BIND(label__True_226);
        // ../../src/builtins/data-view.tq:375:34
        {
          // ../../src/builtins/data-view.tq:376:6
          const char* t910 = "DataView.prototype.get";
          TNode<Object> t911 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t910));
          ThrowTypeError(p_context, MessageTemplate::kDetachedOperation, t911);
        }
      }
      BIND(label__False_227);
    }
    // ../../src/builtins/data-view.tq:379:4
    TNode<Smi> t912 = UncheckedCast<Smi>(LoadDataViewByteOffset((*data_view_254).value()));
    TNode<IntPtrT> t913 = UncheckedCast<IntPtrT>(convert8ATintptr(t912));
    USE(t913);
    TVARIABLE(IntPtrT, viewOffset_259_impl);
    auto viewOffset_259 = &viewOffset_259_impl;
    USE(viewOffset_259);
    *viewOffset_259 = t913;
    // ../../src/builtins/data-view.tq:380:4
    TNode<Smi> t914 = UncheckedCast<Smi>(LoadDataViewByteLength((*data_view_254).value()));
    TNode<IntPtrT> t915 = UncheckedCast<IntPtrT>(convert8ATintptr(t914));
    USE(t915);
    TVARIABLE(IntPtrT, viewSize_260_impl);
    auto viewSize_260 = &viewSize_260_impl;
    USE(viewSize_260);
    *viewSize_260 = t915;
    // ../../src/builtins/data-view.tq:381:4
    int31_t t916 = DataViewElementSize(p_kind);
    USE(t916);
    TVARIABLE(IntPtrT, elementSize_261_impl);
    auto elementSize_261 = &elementSize_261_impl;
    USE(elementSize_261);
    TNode<IntPtrT> t917 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t916));
    *elementSize_261 = t917;
    // ../../src/builtins/data-view.tq:383:4
    {
      Label label__True_228_impl(this);
      Label* label__True_228 = &label__True_228_impl;
      USE(label__True_228);
      Label label__False_229_impl(this, {});
      Label* label__False_229 = &label__False_229_impl;
      USE(label__False_229);
      TNode<IntPtrT> t918 = UncheckedCast<IntPtrT>(IntPtrAdd((*getIndex_256).value(), (*elementSize_261).value()));
      USE(t918);
      TNode<BoolT> t919 = UncheckedCast<BoolT>(IntPtrGreaterThan(t918, (*viewSize_260).value()));
      USE(t919);
      Branch(t919, label__True_228, label__False_229);
      if (label__True_228->is_used())
      {
        BIND(label__True_228);
        // ../../src/builtins/data-view.tq:383:43
        {
          // ../../src/builtins/data-view.tq:384:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidDataViewAccessorOffset);
        }
      }
      BIND(label__False_229);
    }
    // ../../src/builtins/data-view.tq:387:4
    TNode<IntPtrT> t920 = UncheckedCast<IntPtrT>(IntPtrAdd((*getIndex_256).value(), (*viewOffset_259).value()));
    USE(t920);
    TVARIABLE(IntPtrT, bufferIndex_262_impl);
    auto bufferIndex_262 = &bufferIndex_262_impl;
    USE(bufferIndex_262);
    *bufferIndex_262 = t920;
    // ../../src/builtins/data-view.tq:389:4
    {
      bool t921 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
      USE(t921);
      if ((t921)) {
        // ../../src/builtins/data-view.tq:389:42
        {
          // ../../src/builtins/data-view.tq:390:6
          TNode<Smi> t922 = UncheckedCast<Smi>(LoadDataViewUint8((*buffer_258).value(), (*bufferIndex_262).value()));
          USE(t922);
          *_return_253 = t922;
          Goto(label_macro_end_693);
        }
      } else {
        // ../../src/builtins/data-view.tq:391:11
        {
          bool t923 = ElementsKindEqual(p_kind, INT8_ELEMENTS);
          USE(t923);
          if ((t923)) {
            // ../../src/builtins/data-view.tq:391:48
            {
              // ../../src/builtins/data-view.tq:392:6
              TNode<Smi> t924 = UncheckedCast<Smi>(LoadDataViewInt8((*buffer_258).value(), (*bufferIndex_262).value()));
              USE(t924);
              *_return_253 = t924;
              Goto(label_macro_end_693);
            }
          } else {
            // ../../src/builtins/data-view.tq:393:11
            {
              bool t925 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
              USE(t925);
              if ((t925)) {
                // ../../src/builtins/data-view.tq:393:50
                {
                  // ../../src/builtins/data-view.tq:394:6
                  TNode<Number> t926 = UncheckedCast<Number>(LoadDataView16((*buffer_258).value(), (*bufferIndex_262).value(), (*littleEndian_257).value(), false));
                  USE(t926);
                  *_return_253 = t926;
                  Goto(label_macro_end_693);
                }
              } else {
                // ../../src/builtins/data-view.tq:395:11
                {
                  bool t927 = ElementsKindEqual(p_kind, INT16_ELEMENTS);
                  USE(t927);
                  if ((t927)) {
                    // ../../src/builtins/data-view.tq:395:49
                    {
                      // ../../src/builtins/data-view.tq:396:6
                      TNode<Number> t928 = UncheckedCast<Number>(LoadDataView16((*buffer_258).value(), (*bufferIndex_262).value(), (*littleEndian_257).value(), true));
                      USE(t928);
                      *_return_253 = t928;
                      Goto(label_macro_end_693);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:397:11
                    {
                      bool t929 = ElementsKindEqual(p_kind, UINT32_ELEMENTS);
                      USE(t929);
                      if ((t929)) {
                        // ../../src/builtins/data-view.tq:397:50
                        {
                          // ../../src/builtins/data-view.tq:398:6
                          TNode<Number> t930 = UncheckedCast<Number>(LoadDataView32((*buffer_258).value(), (*bufferIndex_262).value(), (*littleEndian_257).value(), false));
                          USE(t930);
                          *_return_253 = t930;
                          Goto(label_macro_end_693);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:399:11
                        {
                          bool t931 = ElementsKindEqual(p_kind, INT32_ELEMENTS);
                          USE(t931);
                          if ((t931)) {
                            // ../../src/builtins/data-view.tq:399:49
                            {
                              // ../../src/builtins/data-view.tq:400:6
                              TNode<Number> t932 = UncheckedCast<Number>(LoadDataView32((*buffer_258).value(), (*bufferIndex_262).value(), (*littleEndian_257).value(), true));
                              USE(t932);
                              *_return_253 = t932;
                              Goto(label_macro_end_693);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:401:11
                            {
                              bool t933 = ElementsKindEqual(p_kind, FLOAT32_ELEMENTS);
                              USE(t933);
                              if ((t933)) {
                                // ../../src/builtins/data-view.tq:401:51
                                {
                                  // ../../src/builtins/data-view.tq:402:6
                                  TNode<Number> t934 = UncheckedCast<Number>(LoadDataViewFloat32((*buffer_258).value(), (*bufferIndex_262).value(), (*littleEndian_257).value()));
                                  USE(t934);
                                  *_return_253 = t934;
                                  Goto(label_macro_end_693);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:403:11
                                {
                                  bool t935 = ElementsKindEqual(p_kind, FLOAT64_ELEMENTS);
                                  USE(t935);
                                  if ((t935)) {
                                    // ../../src/builtins/data-view.tq:403:51
                                    {
                                      // ../../src/builtins/data-view.tq:404:6
                                      TNode<Number> t936 = UncheckedCast<Number>(LoadDataViewFloat64((*buffer_258).value(), (*bufferIndex_262).value(), (*littleEndian_257).value()));
                                      USE(t936);
                                      *_return_253 = t936;
                                      Goto(label_macro_end_693);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:405:11
                                    {
                                      bool t937 = ElementsKindEqual(p_kind, BIGINT64_ELEMENTS);
                                      USE(t937);
                                      if ((t937)) {
                                        // ../../src/builtins/data-view.tq:405:52
                                        {
                                          // ../../src/builtins/data-view.tq:406:6
                                          TNode<BigInt> t938 = UncheckedCast<BigInt>(LoadDataViewBigInt((*buffer_258).value(), (*bufferIndex_262).value(), (*littleEndian_257).value(), true));
                                          USE(t938);
                                          *_return_253 = t938;
                                          Goto(label_macro_end_693);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:407:11
                                        {
                                          bool t939 = ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS);
                                          USE(t939);
                                          if ((t939)) {
                                            // ../../src/builtins/data-view.tq:407:53
                                            {
                                              // ../../src/builtins/data-view.tq:408:6
                                              TNode<BigInt> t940 = UncheckedCast<BigInt>(LoadDataViewBigInt((*buffer_258).value(), (*bufferIndex_262).value(), (*littleEndian_257).value(), false));
                                              USE(t940);
                                              *_return_253 = t940;
                                              Goto(label_macro_end_693);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:409:11
                                            {
                                              // ../../src/builtins/data-view.tq:410:6
                                              Unreachable();
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_693);
  return (*_return_253).value();
}

TF_BUILTIN(DataViewPrototypeGetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:415:64
  {
    // ../../src/builtins/data-view.tq:416:4
    auto t941 = [=]() {
      int31_t t943 = 0;
      TNode<IntPtrT> t944 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t943));
      TNode<Object> t945 = UncheckedCast<Object>(GetArgumentValue(arguments, t944));
      return t945;
    };
    auto t942 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t946_542_impl);
    auto t946_542 = &t946_542_impl;
    USE(t946_542);
    {
      Label label__True_250_impl(this);
      Label* label__True_250 = &label__True_250_impl;
      USE(label__True_250);
      Label label__False_251_impl(this);
      Label* label__False_251 = &label__False_251_impl;
      USE(label__False_251);
      Label label__done_543_696_impl(this, {t946_542});
      Label* label__done_543_696 = &label__done_543_696_impl;
      USE(label__done_543_696);
      TNode<IntPtrT> t947 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t948 = 0;
      TNode<IntPtrT> t949 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t948));
      TNode<BoolT> t950 = UncheckedCast<BoolT>(IntPtrGreaterThan(t947, t949));
      USE(t950);
      Branch(t950, label__True_250, label__False_251);
      BIND(label__True_250);
            *t946_542 = t941();
      Goto(label__done_543_696);
      BIND(label__False_251);
            *t946_542 = t942();
      Goto(label__done_543_696);
      BIND(label__done_543_696);
    }
    TVARIABLE(Object, offset_263_impl);
    auto offset_263 = &offset_263_impl;
    USE(offset_263);
    *offset_263 = (*t946_542).value();
    // ../../src/builtins/data-view.tq:419:4
    TNode<Numeric> t951 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_263).value(), Undefined(), INT8_ELEMENTS));
    USE(t951);
    arguments->PopAndReturn(t951);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:423:62
  {
    // ../../src/builtins/data-view.tq:424:6
    auto t952 = [=]() {
      int31_t t954 = 0;
      TNode<IntPtrT> t955 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t954));
      TNode<Object> t956 = UncheckedCast<Object>(GetArgumentValue(arguments, t955));
      return t956;
    };
    auto t953 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t957_544_impl);
    auto t957_544 = &t957_544_impl;
    USE(t957_544);
    {
      Label label__True_252_impl(this);
      Label* label__True_252 = &label__True_252_impl;
      USE(label__True_252);
      Label label__False_253_impl(this);
      Label* label__False_253 = &label__False_253_impl;
      USE(label__False_253);
      Label label__done_545_697_impl(this, {t957_544});
      Label* label__done_545_697 = &label__done_545_697_impl;
      USE(label__done_545_697);
      TNode<IntPtrT> t958 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t959 = 0;
      TNode<IntPtrT> t960 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t959));
      TNode<BoolT> t961 = UncheckedCast<BoolT>(IntPtrGreaterThan(t958, t960));
      USE(t961);
      Branch(t961, label__True_252, label__False_253);
      BIND(label__True_252);
            *t957_544 = t952();
      Goto(label__done_545_697);
      BIND(label__False_253);
            *t957_544 = t953();
      Goto(label__done_545_697);
      BIND(label__done_545_697);
    }
    TVARIABLE(Object, offset_264_impl);
    auto offset_264 = &offset_264_impl;
    USE(offset_264);
    *offset_264 = (*t957_544).value();
    // ../../src/builtins/data-view.tq:427:6
    TNode<Numeric> t962 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_264).value(), Undefined(), UINT8_ELEMENTS));
    USE(t962);
    arguments->PopAndReturn(t962);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:431:62
  {
    // ../../src/builtins/data-view.tq:432:6
    auto t963 = [=]() {
      int31_t t965 = 0;
      TNode<IntPtrT> t966 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t965));
      TNode<Object> t967 = UncheckedCast<Object>(GetArgumentValue(arguments, t966));
      return t967;
    };
    auto t964 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t968_546_impl);
    auto t968_546 = &t968_546_impl;
    USE(t968_546);
    {
      Label label__True_254_impl(this);
      Label* label__True_254 = &label__True_254_impl;
      USE(label__True_254);
      Label label__False_255_impl(this);
      Label* label__False_255 = &label__False_255_impl;
      USE(label__False_255);
      Label label__done_547_698_impl(this, {t968_546});
      Label* label__done_547_698 = &label__done_547_698_impl;
      USE(label__done_547_698);
      TNode<IntPtrT> t969 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t970 = 0;
      TNode<IntPtrT> t971 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t970));
      TNode<BoolT> t972 = UncheckedCast<BoolT>(IntPtrGreaterThan(t969, t971));
      USE(t972);
      Branch(t972, label__True_254, label__False_255);
      BIND(label__True_254);
            *t968_546 = t963();
      Goto(label__done_547_698);
      BIND(label__False_255);
            *t968_546 = t964();
      Goto(label__done_547_698);
      BIND(label__done_547_698);
    }
    TVARIABLE(Object, offset_265_impl);
    auto offset_265 = &offset_265_impl;
    USE(offset_265);
    *offset_265 = (*t968_546).value();
    // ../../src/builtins/data-view.tq:435:6
    auto t973 = [=]() {
      int31_t t975 = 1;
      TNode<IntPtrT> t976 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t975));
      TNode<Object> t977 = UncheckedCast<Object>(GetArgumentValue(arguments, t976));
      return t977;
    };
    auto t974 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t978_548_impl);
    auto t978_548 = &t978_548_impl;
    USE(t978_548);
    {
      Label label__True_256_impl(this);
      Label* label__True_256 = &label__True_256_impl;
      USE(label__True_256);
      Label label__False_257_impl(this);
      Label* label__False_257 = &label__False_257_impl;
      USE(label__False_257);
      Label label__done_549_699_impl(this, {t978_548});
      Label* label__done_549_699 = &label__done_549_699_impl;
      USE(label__done_549_699);
      TNode<IntPtrT> t979 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t980 = 1;
      TNode<IntPtrT> t981 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t980));
      TNode<BoolT> t982 = UncheckedCast<BoolT>(IntPtrGreaterThan(t979, t981));
      USE(t982);
      Branch(t982, label__True_256, label__False_257);
      BIND(label__True_256);
            *t978_548 = t973();
      Goto(label__done_549_699);
      BIND(label__False_257);
            *t978_548 = t974();
      Goto(label__done_549_699);
      BIND(label__done_549_699);
    }
    TVARIABLE(Object, is_little_endian_266_impl);
    auto is_little_endian_266 = &is_little_endian_266_impl;
    USE(is_little_endian_266);
    *is_little_endian_266 = (*t978_548).value();
    // ../../src/builtins/data-view.tq:438:6
    TNode<Numeric> t983 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_265).value(), (*is_little_endian_266).value(), INT16_ELEMENTS));
    USE(t983);
    arguments->PopAndReturn(t983);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:443:62
  {
    // ../../src/builtins/data-view.tq:444:6
    auto t984 = [=]() {
      int31_t t986 = 0;
      TNode<IntPtrT> t987 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t986));
      TNode<Object> t988 = UncheckedCast<Object>(GetArgumentValue(arguments, t987));
      return t988;
    };
    auto t985 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t989_550_impl);
    auto t989_550 = &t989_550_impl;
    USE(t989_550);
    {
      Label label__True_258_impl(this);
      Label* label__True_258 = &label__True_258_impl;
      USE(label__True_258);
      Label label__False_259_impl(this);
      Label* label__False_259 = &label__False_259_impl;
      USE(label__False_259);
      Label label__done_551_700_impl(this, {t989_550});
      Label* label__done_551_700 = &label__done_551_700_impl;
      USE(label__done_551_700);
      TNode<IntPtrT> t990 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t991 = 0;
      TNode<IntPtrT> t992 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t991));
      TNode<BoolT> t993 = UncheckedCast<BoolT>(IntPtrGreaterThan(t990, t992));
      USE(t993);
      Branch(t993, label__True_258, label__False_259);
      BIND(label__True_258);
            *t989_550 = t984();
      Goto(label__done_551_700);
      BIND(label__False_259);
            *t989_550 = t985();
      Goto(label__done_551_700);
      BIND(label__done_551_700);
    }
    TVARIABLE(Object, offset_267_impl);
    auto offset_267 = &offset_267_impl;
    USE(offset_267);
    *offset_267 = (*t989_550).value();
    // ../../src/builtins/data-view.tq:447:6
    auto t994 = [=]() {
      int31_t t996 = 1;
      TNode<IntPtrT> t997 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t996));
      TNode<Object> t998 = UncheckedCast<Object>(GetArgumentValue(arguments, t997));
      return t998;
    };
    auto t995 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t999_552_impl);
    auto t999_552 = &t999_552_impl;
    USE(t999_552);
    {
      Label label__True_260_impl(this);
      Label* label__True_260 = &label__True_260_impl;
      USE(label__True_260);
      Label label__False_261_impl(this);
      Label* label__False_261 = &label__False_261_impl;
      USE(label__False_261);
      Label label__done_553_701_impl(this, {t999_552});
      Label* label__done_553_701 = &label__done_553_701_impl;
      USE(label__done_553_701);
      TNode<IntPtrT> t1000 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1001 = 1;
      TNode<IntPtrT> t1002 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1001));
      TNode<BoolT> t1003 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1000, t1002));
      USE(t1003);
      Branch(t1003, label__True_260, label__False_261);
      BIND(label__True_260);
            *t999_552 = t994();
      Goto(label__done_553_701);
      BIND(label__False_261);
            *t999_552 = t995();
      Goto(label__done_553_701);
      BIND(label__done_553_701);
    }
    TVARIABLE(Object, is_little_endian_268_impl);
    auto is_little_endian_268 = &is_little_endian_268_impl;
    USE(is_little_endian_268);
    *is_little_endian_268 = (*t999_552).value();
    // ../../src/builtins/data-view.tq:450:6
    TNode<Numeric> t1004 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_267).value(), (*is_little_endian_268).value(), UINT16_ELEMENTS));
    USE(t1004);
    arguments->PopAndReturn(t1004);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:455:62
  {
    // ../../src/builtins/data-view.tq:456:6
    auto t1005 = [=]() {
      int31_t t1007 = 0;
      TNode<IntPtrT> t1008 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1007));
      TNode<Object> t1009 = UncheckedCast<Object>(GetArgumentValue(arguments, t1008));
      return t1009;
    };
    auto t1006 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1010_554_impl);
    auto t1010_554 = &t1010_554_impl;
    USE(t1010_554);
    {
      Label label__True_262_impl(this);
      Label* label__True_262 = &label__True_262_impl;
      USE(label__True_262);
      Label label__False_263_impl(this);
      Label* label__False_263 = &label__False_263_impl;
      USE(label__False_263);
      Label label__done_555_702_impl(this, {t1010_554});
      Label* label__done_555_702 = &label__done_555_702_impl;
      USE(label__done_555_702);
      TNode<IntPtrT> t1011 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1012 = 0;
      TNode<IntPtrT> t1013 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1012));
      TNode<BoolT> t1014 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1011, t1013));
      USE(t1014);
      Branch(t1014, label__True_262, label__False_263);
      BIND(label__True_262);
            *t1010_554 = t1005();
      Goto(label__done_555_702);
      BIND(label__False_263);
            *t1010_554 = t1006();
      Goto(label__done_555_702);
      BIND(label__done_555_702);
    }
    TVARIABLE(Object, offset_269_impl);
    auto offset_269 = &offset_269_impl;
    USE(offset_269);
    *offset_269 = (*t1010_554).value();
    // ../../src/builtins/data-view.tq:459:6
    auto t1015 = [=]() {
      int31_t t1017 = 1;
      TNode<IntPtrT> t1018 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1017));
      TNode<Object> t1019 = UncheckedCast<Object>(GetArgumentValue(arguments, t1018));
      return t1019;
    };
    auto t1016 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1020_556_impl);
    auto t1020_556 = &t1020_556_impl;
    USE(t1020_556);
    {
      Label label__True_264_impl(this);
      Label* label__True_264 = &label__True_264_impl;
      USE(label__True_264);
      Label label__False_265_impl(this);
      Label* label__False_265 = &label__False_265_impl;
      USE(label__False_265);
      Label label__done_557_703_impl(this, {t1020_556});
      Label* label__done_557_703 = &label__done_557_703_impl;
      USE(label__done_557_703);
      TNode<IntPtrT> t1021 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1022 = 1;
      TNode<IntPtrT> t1023 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1022));
      TNode<BoolT> t1024 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1021, t1023));
      USE(t1024);
      Branch(t1024, label__True_264, label__False_265);
      BIND(label__True_264);
            *t1020_556 = t1015();
      Goto(label__done_557_703);
      BIND(label__False_265);
            *t1020_556 = t1016();
      Goto(label__done_557_703);
      BIND(label__done_557_703);
    }
    TVARIABLE(Object, is_little_endian_270_impl);
    auto is_little_endian_270 = &is_little_endian_270_impl;
    USE(is_little_endian_270);
    *is_little_endian_270 = (*t1020_556).value();
    // ../../src/builtins/data-view.tq:462:6
    TNode<Numeric> t1025 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_269).value(), (*is_little_endian_270).value(), INT32_ELEMENTS));
    USE(t1025);
    arguments->PopAndReturn(t1025);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:467:62
  {
    // ../../src/builtins/data-view.tq:468:6
    auto t1026 = [=]() {
      int31_t t1028 = 0;
      TNode<IntPtrT> t1029 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1028));
      TNode<Object> t1030 = UncheckedCast<Object>(GetArgumentValue(arguments, t1029));
      return t1030;
    };
    auto t1027 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1031_558_impl);
    auto t1031_558 = &t1031_558_impl;
    USE(t1031_558);
    {
      Label label__True_266_impl(this);
      Label* label__True_266 = &label__True_266_impl;
      USE(label__True_266);
      Label label__False_267_impl(this);
      Label* label__False_267 = &label__False_267_impl;
      USE(label__False_267);
      Label label__done_559_704_impl(this, {t1031_558});
      Label* label__done_559_704 = &label__done_559_704_impl;
      USE(label__done_559_704);
      TNode<IntPtrT> t1032 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1033 = 0;
      TNode<IntPtrT> t1034 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1033));
      TNode<BoolT> t1035 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1032, t1034));
      USE(t1035);
      Branch(t1035, label__True_266, label__False_267);
      BIND(label__True_266);
            *t1031_558 = t1026();
      Goto(label__done_559_704);
      BIND(label__False_267);
            *t1031_558 = t1027();
      Goto(label__done_559_704);
      BIND(label__done_559_704);
    }
    TVARIABLE(Object, offset_271_impl);
    auto offset_271 = &offset_271_impl;
    USE(offset_271);
    *offset_271 = (*t1031_558).value();
    // ../../src/builtins/data-view.tq:471:6
    auto t1036 = [=]() {
      int31_t t1038 = 1;
      TNode<IntPtrT> t1039 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1038));
      TNode<Object> t1040 = UncheckedCast<Object>(GetArgumentValue(arguments, t1039));
      return t1040;
    };
    auto t1037 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1041_560_impl);
    auto t1041_560 = &t1041_560_impl;
    USE(t1041_560);
    {
      Label label__True_268_impl(this);
      Label* label__True_268 = &label__True_268_impl;
      USE(label__True_268);
      Label label__False_269_impl(this);
      Label* label__False_269 = &label__False_269_impl;
      USE(label__False_269);
      Label label__done_561_705_impl(this, {t1041_560});
      Label* label__done_561_705 = &label__done_561_705_impl;
      USE(label__done_561_705);
      TNode<IntPtrT> t1042 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1043 = 1;
      TNode<IntPtrT> t1044 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1043));
      TNode<BoolT> t1045 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1042, t1044));
      USE(t1045);
      Branch(t1045, label__True_268, label__False_269);
      BIND(label__True_268);
            *t1041_560 = t1036();
      Goto(label__done_561_705);
      BIND(label__False_269);
            *t1041_560 = t1037();
      Goto(label__done_561_705);
      BIND(label__done_561_705);
    }
    TVARIABLE(Object, is_little_endian_272_impl);
    auto is_little_endian_272 = &is_little_endian_272_impl;
    USE(is_little_endian_272);
    *is_little_endian_272 = (*t1041_560).value();
    // ../../src/builtins/data-view.tq:474:6
    TNode<Numeric> t1046 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_271).value(), (*is_little_endian_272).value(), UINT32_ELEMENTS));
    USE(t1046);
    arguments->PopAndReturn(t1046);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:479:62
  {
    // ../../src/builtins/data-view.tq:480:6
    auto t1047 = [=]() {
      int31_t t1049 = 0;
      TNode<IntPtrT> t1050 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1049));
      TNode<Object> t1051 = UncheckedCast<Object>(GetArgumentValue(arguments, t1050));
      return t1051;
    };
    auto t1048 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1052_562_impl);
    auto t1052_562 = &t1052_562_impl;
    USE(t1052_562);
    {
      Label label__True_270_impl(this);
      Label* label__True_270 = &label__True_270_impl;
      USE(label__True_270);
      Label label__False_271_impl(this);
      Label* label__False_271 = &label__False_271_impl;
      USE(label__False_271);
      Label label__done_563_706_impl(this, {t1052_562});
      Label* label__done_563_706 = &label__done_563_706_impl;
      USE(label__done_563_706);
      TNode<IntPtrT> t1053 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1054 = 0;
      TNode<IntPtrT> t1055 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1054));
      TNode<BoolT> t1056 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1053, t1055));
      USE(t1056);
      Branch(t1056, label__True_270, label__False_271);
      BIND(label__True_270);
            *t1052_562 = t1047();
      Goto(label__done_563_706);
      BIND(label__False_271);
            *t1052_562 = t1048();
      Goto(label__done_563_706);
      BIND(label__done_563_706);
    }
    TVARIABLE(Object, offset_273_impl);
    auto offset_273 = &offset_273_impl;
    USE(offset_273);
    *offset_273 = (*t1052_562).value();
    // ../../src/builtins/data-view.tq:483:6
    auto t1057 = [=]() {
      int31_t t1059 = 1;
      TNode<IntPtrT> t1060 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1059));
      TNode<Object> t1061 = UncheckedCast<Object>(GetArgumentValue(arguments, t1060));
      return t1061;
    };
    auto t1058 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1062_564_impl);
    auto t1062_564 = &t1062_564_impl;
    USE(t1062_564);
    {
      Label label__True_272_impl(this);
      Label* label__True_272 = &label__True_272_impl;
      USE(label__True_272);
      Label label__False_273_impl(this);
      Label* label__False_273 = &label__False_273_impl;
      USE(label__False_273);
      Label label__done_565_707_impl(this, {t1062_564});
      Label* label__done_565_707 = &label__done_565_707_impl;
      USE(label__done_565_707);
      TNode<IntPtrT> t1063 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1064 = 1;
      TNode<IntPtrT> t1065 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1064));
      TNode<BoolT> t1066 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1063, t1065));
      USE(t1066);
      Branch(t1066, label__True_272, label__False_273);
      BIND(label__True_272);
            *t1062_564 = t1057();
      Goto(label__done_565_707);
      BIND(label__False_273);
            *t1062_564 = t1058();
      Goto(label__done_565_707);
      BIND(label__done_565_707);
    }
    TVARIABLE(Object, is_little_endian_274_impl);
    auto is_little_endian_274 = &is_little_endian_274_impl;
    USE(is_little_endian_274);
    *is_little_endian_274 = (*t1062_564).value();
    // ../../src/builtins/data-view.tq:486:6
    TNode<Numeric> t1067 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_273).value(), (*is_little_endian_274).value(), FLOAT32_ELEMENTS));
    USE(t1067);
    arguments->PopAndReturn(t1067);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:491:62
  {
    // ../../src/builtins/data-view.tq:492:6
    auto t1068 = [=]() {
      int31_t t1070 = 0;
      TNode<IntPtrT> t1071 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1070));
      TNode<Object> t1072 = UncheckedCast<Object>(GetArgumentValue(arguments, t1071));
      return t1072;
    };
    auto t1069 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1073_566_impl);
    auto t1073_566 = &t1073_566_impl;
    USE(t1073_566);
    {
      Label label__True_274_impl(this);
      Label* label__True_274 = &label__True_274_impl;
      USE(label__True_274);
      Label label__False_275_impl(this);
      Label* label__False_275 = &label__False_275_impl;
      USE(label__False_275);
      Label label__done_567_708_impl(this, {t1073_566});
      Label* label__done_567_708 = &label__done_567_708_impl;
      USE(label__done_567_708);
      TNode<IntPtrT> t1074 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1075 = 0;
      TNode<IntPtrT> t1076 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1075));
      TNode<BoolT> t1077 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1074, t1076));
      USE(t1077);
      Branch(t1077, label__True_274, label__False_275);
      BIND(label__True_274);
            *t1073_566 = t1068();
      Goto(label__done_567_708);
      BIND(label__False_275);
            *t1073_566 = t1069();
      Goto(label__done_567_708);
      BIND(label__done_567_708);
    }
    TVARIABLE(Object, offset_275_impl);
    auto offset_275 = &offset_275_impl;
    USE(offset_275);
    *offset_275 = (*t1073_566).value();
    // ../../src/builtins/data-view.tq:495:6
    auto t1078 = [=]() {
      int31_t t1080 = 1;
      TNode<IntPtrT> t1081 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1080));
      TNode<Object> t1082 = UncheckedCast<Object>(GetArgumentValue(arguments, t1081));
      return t1082;
    };
    auto t1079 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1083_568_impl);
    auto t1083_568 = &t1083_568_impl;
    USE(t1083_568);
    {
      Label label__True_276_impl(this);
      Label* label__True_276 = &label__True_276_impl;
      USE(label__True_276);
      Label label__False_277_impl(this);
      Label* label__False_277 = &label__False_277_impl;
      USE(label__False_277);
      Label label__done_569_709_impl(this, {t1083_568});
      Label* label__done_569_709 = &label__done_569_709_impl;
      USE(label__done_569_709);
      TNode<IntPtrT> t1084 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1085 = 1;
      TNode<IntPtrT> t1086 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1085));
      TNode<BoolT> t1087 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1084, t1086));
      USE(t1087);
      Branch(t1087, label__True_276, label__False_277);
      BIND(label__True_276);
            *t1083_568 = t1078();
      Goto(label__done_569_709);
      BIND(label__False_277);
            *t1083_568 = t1079();
      Goto(label__done_569_709);
      BIND(label__done_569_709);
    }
    TVARIABLE(Object, is_little_endian_276_impl);
    auto is_little_endian_276 = &is_little_endian_276_impl;
    USE(is_little_endian_276);
    *is_little_endian_276 = (*t1083_568).value();
    // ../../src/builtins/data-view.tq:498:6
    TNode<Numeric> t1088 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_275).value(), (*is_little_endian_276).value(), FLOAT64_ELEMENTS));
    USE(t1088);
    arguments->PopAndReturn(t1088);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:503:62
  {
    // ../../src/builtins/data-view.tq:504:6
    auto t1089 = [=]() {
      int31_t t1091 = 0;
      TNode<IntPtrT> t1092 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1091));
      TNode<Object> t1093 = UncheckedCast<Object>(GetArgumentValue(arguments, t1092));
      return t1093;
    };
    auto t1090 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1094_570_impl);
    auto t1094_570 = &t1094_570_impl;
    USE(t1094_570);
    {
      Label label__True_278_impl(this);
      Label* label__True_278 = &label__True_278_impl;
      USE(label__True_278);
      Label label__False_279_impl(this);
      Label* label__False_279 = &label__False_279_impl;
      USE(label__False_279);
      Label label__done_571_710_impl(this, {t1094_570});
      Label* label__done_571_710 = &label__done_571_710_impl;
      USE(label__done_571_710);
      TNode<IntPtrT> t1095 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1096 = 0;
      TNode<IntPtrT> t1097 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1096));
      TNode<BoolT> t1098 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1095, t1097));
      USE(t1098);
      Branch(t1098, label__True_278, label__False_279);
      BIND(label__True_278);
            *t1094_570 = t1089();
      Goto(label__done_571_710);
      BIND(label__False_279);
            *t1094_570 = t1090();
      Goto(label__done_571_710);
      BIND(label__done_571_710);
    }
    TVARIABLE(Object, offset_277_impl);
    auto offset_277 = &offset_277_impl;
    USE(offset_277);
    *offset_277 = (*t1094_570).value();
    // ../../src/builtins/data-view.tq:507:6
    auto t1099 = [=]() {
      int31_t t1101 = 1;
      TNode<IntPtrT> t1102 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1101));
      TNode<Object> t1103 = UncheckedCast<Object>(GetArgumentValue(arguments, t1102));
      return t1103;
    };
    auto t1100 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1104_572_impl);
    auto t1104_572 = &t1104_572_impl;
    USE(t1104_572);
    {
      Label label__True_280_impl(this);
      Label* label__True_280 = &label__True_280_impl;
      USE(label__True_280);
      Label label__False_281_impl(this);
      Label* label__False_281 = &label__False_281_impl;
      USE(label__False_281);
      Label label__done_573_711_impl(this, {t1104_572});
      Label* label__done_573_711 = &label__done_573_711_impl;
      USE(label__done_573_711);
      TNode<IntPtrT> t1105 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1106 = 1;
      TNode<IntPtrT> t1107 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1106));
      TNode<BoolT> t1108 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1105, t1107));
      USE(t1108);
      Branch(t1108, label__True_280, label__False_281);
      BIND(label__True_280);
            *t1104_572 = t1099();
      Goto(label__done_573_711);
      BIND(label__False_281);
            *t1104_572 = t1100();
      Goto(label__done_573_711);
      BIND(label__done_573_711);
    }
    TVARIABLE(Object, is_little_endian_278_impl);
    auto is_little_endian_278 = &is_little_endian_278_impl;
    USE(is_little_endian_278);
    *is_little_endian_278 = (*t1104_572).value();
    // ../../src/builtins/data-view.tq:510:6
    TNode<Numeric> t1109 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_277).value(), (*is_little_endian_278).value(), BIGINT64_ELEMENTS));
    USE(t1109);
    arguments->PopAndReturn(t1109);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:515:62
  {
    // ../../src/builtins/data-view.tq:516:6
    auto t1110 = [=]() {
      int31_t t1112 = 0;
      TNode<IntPtrT> t1113 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1112));
      TNode<Object> t1114 = UncheckedCast<Object>(GetArgumentValue(arguments, t1113));
      return t1114;
    };
    auto t1111 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1115_574_impl);
    auto t1115_574 = &t1115_574_impl;
    USE(t1115_574);
    {
      Label label__True_282_impl(this);
      Label* label__True_282 = &label__True_282_impl;
      USE(label__True_282);
      Label label__False_283_impl(this);
      Label* label__False_283 = &label__False_283_impl;
      USE(label__False_283);
      Label label__done_575_712_impl(this, {t1115_574});
      Label* label__done_575_712 = &label__done_575_712_impl;
      USE(label__done_575_712);
      TNode<IntPtrT> t1116 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1117 = 0;
      TNode<IntPtrT> t1118 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1117));
      TNode<BoolT> t1119 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1116, t1118));
      USE(t1119);
      Branch(t1119, label__True_282, label__False_283);
      BIND(label__True_282);
            *t1115_574 = t1110();
      Goto(label__done_575_712);
      BIND(label__False_283);
            *t1115_574 = t1111();
      Goto(label__done_575_712);
      BIND(label__done_575_712);
    }
    TVARIABLE(Object, offset_279_impl);
    auto offset_279 = &offset_279_impl;
    USE(offset_279);
    *offset_279 = (*t1115_574).value();
    // ../../src/builtins/data-view.tq:519:6
    auto t1120 = [=]() {
      int31_t t1122 = 1;
      TNode<IntPtrT> t1123 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1122));
      TNode<Object> t1124 = UncheckedCast<Object>(GetArgumentValue(arguments, t1123));
      return t1124;
    };
    auto t1121 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1125_576_impl);
    auto t1125_576 = &t1125_576_impl;
    USE(t1125_576);
    {
      Label label__True_284_impl(this);
      Label* label__True_284 = &label__True_284_impl;
      USE(label__True_284);
      Label label__False_285_impl(this);
      Label* label__False_285 = &label__False_285_impl;
      USE(label__False_285);
      Label label__done_577_713_impl(this, {t1125_576});
      Label* label__done_577_713 = &label__done_577_713_impl;
      USE(label__done_577_713);
      TNode<IntPtrT> t1126 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1127 = 1;
      TNode<IntPtrT> t1128 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1127));
      TNode<BoolT> t1129 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1126, t1128));
      USE(t1129);
      Branch(t1129, label__True_284, label__False_285);
      BIND(label__True_284);
            *t1125_576 = t1120();
      Goto(label__done_577_713);
      BIND(label__False_285);
            *t1125_576 = t1121();
      Goto(label__done_577_713);
      BIND(label__done_577_713);
    }
    TVARIABLE(Object, is_little_endian_280_impl);
    auto is_little_endian_280 = &is_little_endian_280_impl;
    USE(is_little_endian_280);
    *is_little_endian_280 = (*t1125_576).value();
    // ../../src/builtins/data-view.tq:522:6
    TNode<Numeric> t1130 = UncheckedCast<Numeric>(DataViewGet(p_context, p_receiver, (*offset_279).value(), (*is_little_endian_280).value(), BIGUINT64_ELEMENTS));
    USE(t1130);
    arguments->PopAndReturn(t1130);
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value) {
  Label label_macro_end_714_impl(this, {});
  Label* label_macro_end_714 = &label_macro_end_714_impl;
  USE(label_macro_end_714);
  // ../../src/builtins/data-view.tq:534:38
  {
    // ../../src/builtins/data-view.tq:535:4
    TNode<RawPtrT> t1131 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    int31_t t1132 = 0xFF;
    TNode<Uint32T> t1133 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1132));
    TNode<Uint32T> t1134 = UncheckedCast<Uint32T>(Word32And(p_value, t1133));
    USE(t1134);
    StoreWord8(t1131, p_offset, t1134);
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_715_impl(this, {});
  Label* label_macro_end_715 = &label_macro_end_715_impl;
  USE(label_macro_end_715);
  // ../../src/builtins/data-view.tq:539:55
  {
    // ../../src/builtins/data-view.tq:540:4
    TNode<RawPtrT> t1135 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_281_impl);
    auto data_pointer_281 = &data_pointer_281_impl;
    USE(data_pointer_281);
    *data_pointer_281 = t1135;
    // ../../src/builtins/data-view.tq:542:4
    int31_t t1136 = 0xFF;
    TNode<Uint32T> t1137 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1136));
    TNode<Uint32T> t1138 = UncheckedCast<Uint32T>(Word32And(p_value, t1137));
    USE(t1138);
    TVARIABLE(Uint32T, b0_282_impl);
    auto b0_282 = &b0_282_impl;
    USE(b0_282);
    *b0_282 = t1138;
    // ../../src/builtins/data-view.tq:543:4
    int31_t t1139 = 8;
    TNode<Uint32T> t1140 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1139));
    TNode<Uint32T> t1141 = UncheckedCast<Uint32T>(Word32Shr(p_value, t1140));
    USE(t1141);
    int31_t t1142 = 0xFF;
    TNode<Uint32T> t1143 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1142));
    TNode<Uint32T> t1144 = UncheckedCast<Uint32T>(Word32And(t1141, t1143));
    USE(t1144);
    TVARIABLE(Uint32T, b1_283_impl);
    auto b1_283 = &b1_283_impl;
    USE(b1_283);
    *b1_283 = t1144;
    // ../../src/builtins/data-view.tq:545:4
    {
      Label label__True_286_impl(this);
      Label* label__True_286 = &label__True_286_impl;
      USE(label__True_286);
      Label label__False_287_impl(this);
      Label* label__False_287 = &label__False_287_impl;
      USE(label__False_287);
      Label label_if_done_label_578_716_impl(this, {});
      Label* label_if_done_label_578_716 = &label_if_done_label_578_716_impl;
      USE(label_if_done_label_578_716);
      Branch(p_requested_little_endian, label__True_286, label__False_287);
      if (label__True_286->is_used())
      {
        BIND(label__True_286);
        // ../../src/builtins/data-view.tq:545:33
        {
          // ../../src/builtins/data-view.tq:546:6
          StoreWord8((*data_pointer_281).value(), p_offset, (*b0_282).value());
          // ../../src/builtins/data-view.tq:547:6
          int31_t t1145 = 1;
          TNode<IntPtrT> t1146 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1145));
          TNode<IntPtrT> t1147 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1146));
          USE(t1147);
          StoreWord8((*data_pointer_281).value(), t1147, (*b1_283).value());
        }
        Goto(label_if_done_label_578_716);
      }
      if (label__False_287->is_used())
      {
        BIND(label__False_287);
        // ../../src/builtins/data-view.tq:548:11
        {
          // ../../src/builtins/data-view.tq:549:6
          StoreWord8((*data_pointer_281).value(), p_offset, (*b1_283).value());
          // ../../src/builtins/data-view.tq:550:6
          int31_t t1148 = 1;
          TNode<IntPtrT> t1149 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1148));
          TNode<IntPtrT> t1150 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1149));
          USE(t1150);
          StoreWord8((*data_pointer_281).value(), t1150, (*b0_282).value());
        }
        Goto(label_if_done_label_578_716);
      }
      BIND(label_if_done_label_578_716);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_717_impl(this, {});
  Label* label_macro_end_717 = &label_macro_end_717_impl;
  USE(label_macro_end_717);
  // ../../src/builtins/data-view.tq:555:55
  {
    // ../../src/builtins/data-view.tq:556:4
    TNode<RawPtrT> t1151 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_284_impl);
    auto data_pointer_284 = &data_pointer_284_impl;
    USE(data_pointer_284);
    *data_pointer_284 = t1151;
    // ../../src/builtins/data-view.tq:558:4
    int31_t t1152 = 0xFF;
    TNode<Uint32T> t1153 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1152));
    TNode<Uint32T> t1154 = UncheckedCast<Uint32T>(Word32And(p_value, t1153));
    USE(t1154);
    TVARIABLE(Uint32T, b0_285_impl);
    auto b0_285 = &b0_285_impl;
    USE(b0_285);
    *b0_285 = t1154;
    // ../../src/builtins/data-view.tq:559:4
    int31_t t1155 = 8;
    TNode<Uint32T> t1156 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1155));
    TNode<Uint32T> t1157 = UncheckedCast<Uint32T>(Word32Shr(p_value, t1156));
    USE(t1157);
    int31_t t1158 = 0xFF;
    TNode<Uint32T> t1159 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1158));
    TNode<Uint32T> t1160 = UncheckedCast<Uint32T>(Word32And(t1157, t1159));
    USE(t1160);
    TVARIABLE(Uint32T, b1_286_impl);
    auto b1_286 = &b1_286_impl;
    USE(b1_286);
    *b1_286 = t1160;
    // ../../src/builtins/data-view.tq:560:4
    int31_t t1161 = 16;
    TNode<Uint32T> t1162 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1161));
    TNode<Uint32T> t1163 = UncheckedCast<Uint32T>(Word32Shr(p_value, t1162));
    USE(t1163);
    int31_t t1164 = 0xFF;
    TNode<Uint32T> t1165 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1164));
    TNode<Uint32T> t1166 = UncheckedCast<Uint32T>(Word32And(t1163, t1165));
    USE(t1166);
    TVARIABLE(Uint32T, b2_287_impl);
    auto b2_287 = &b2_287_impl;
    USE(b2_287);
    *b2_287 = t1166;
    // ../../src/builtins/data-view.tq:561:4
    int31_t t1167 = 24;
    TNode<Uint32T> t1168 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1167));
    TNode<Uint32T> t1169 = UncheckedCast<Uint32T>(Word32Shr(p_value, t1168));
    USE(t1169);
    TVARIABLE(Uint32T, b3_288_impl);
    auto b3_288 = &b3_288_impl;
    USE(b3_288);
    *b3_288 = t1169;
    // ../../src/builtins/data-view.tq:563:4
    {
      Label label__True_288_impl(this);
      Label* label__True_288 = &label__True_288_impl;
      USE(label__True_288);
      Label label__False_289_impl(this);
      Label* label__False_289 = &label__False_289_impl;
      USE(label__False_289);
      Label label_if_done_label_579_718_impl(this, {});
      Label* label_if_done_label_579_718 = &label_if_done_label_579_718_impl;
      USE(label_if_done_label_579_718);
      Branch(p_requested_little_endian, label__True_288, label__False_289);
      if (label__True_288->is_used())
      {
        BIND(label__True_288);
        // ../../src/builtins/data-view.tq:563:33
        {
          // ../../src/builtins/data-view.tq:564:6
          StoreWord8((*data_pointer_284).value(), p_offset, (*b0_285).value());
          // ../../src/builtins/data-view.tq:565:6
          int31_t t1170 = 1;
          TNode<IntPtrT> t1171 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1170));
          TNode<IntPtrT> t1172 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1171));
          USE(t1172);
          StoreWord8((*data_pointer_284).value(), t1172, (*b1_286).value());
          // ../../src/builtins/data-view.tq:566:6
          int31_t t1173 = 2;
          TNode<IntPtrT> t1174 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1173));
          TNode<IntPtrT> t1175 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1174));
          USE(t1175);
          StoreWord8((*data_pointer_284).value(), t1175, (*b2_287).value());
          // ../../src/builtins/data-view.tq:567:6
          int31_t t1176 = 3;
          TNode<IntPtrT> t1177 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1176));
          TNode<IntPtrT> t1178 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1177));
          USE(t1178);
          StoreWord8((*data_pointer_284).value(), t1178, (*b3_288).value());
        }
        Goto(label_if_done_label_579_718);
      }
      if (label__False_289->is_used())
      {
        BIND(label__False_289);
        // ../../src/builtins/data-view.tq:568:11
        {
          // ../../src/builtins/data-view.tq:569:6
          StoreWord8((*data_pointer_284).value(), p_offset, (*b3_288).value());
          // ../../src/builtins/data-view.tq:570:6
          int31_t t1179 = 1;
          TNode<IntPtrT> t1180 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1179));
          TNode<IntPtrT> t1181 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1180));
          USE(t1181);
          StoreWord8((*data_pointer_284).value(), t1181, (*b2_287).value());
          // ../../src/builtins/data-view.tq:571:6
          int31_t t1182 = 2;
          TNode<IntPtrT> t1183 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1182));
          TNode<IntPtrT> t1184 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1183));
          USE(t1184);
          StoreWord8((*data_pointer_284).value(), t1184, (*b1_286).value());
          // ../../src/builtins/data-view.tq:572:6
          int31_t t1185 = 3;
          TNode<IntPtrT> t1186 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1185));
          TNode<IntPtrT> t1187 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1186));
          USE(t1187);
          StoreWord8((*data_pointer_284).value(), t1187, (*b0_285).value());
        }
        Goto(label_if_done_label_579_718);
      }
      BIND(label_if_done_label_579_718);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_719_impl(this, {});
  Label* label_macro_end_719 = &label_macro_end_719_impl;
  USE(label_macro_end_719);
  // ../../src/builtins/data-view.tq:578:55
  {
    // ../../src/builtins/data-view.tq:579:4
    TNode<RawPtrT> t1188 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(p_buffer));
    TVARIABLE(RawPtrT, data_pointer_289_impl);
    auto data_pointer_289 = &data_pointer_289_impl;
    USE(data_pointer_289);
    *data_pointer_289 = t1188;
    // ../../src/builtins/data-view.tq:581:4
    int31_t t1189 = 0xFF;
    TNode<Uint32T> t1190 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1189));
    TNode<Uint32T> t1191 = UncheckedCast<Uint32T>(Word32And(p_low_word, t1190));
    USE(t1191);
    TVARIABLE(Uint32T, b0_290_impl);
    auto b0_290 = &b0_290_impl;
    USE(b0_290);
    *b0_290 = t1191;
    // ../../src/builtins/data-view.tq:582:4
    int31_t t1192 = 8;
    TNode<Uint32T> t1193 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1192));
    TNode<Uint32T> t1194 = UncheckedCast<Uint32T>(Word32Shr(p_low_word, t1193));
    USE(t1194);
    int31_t t1195 = 0xFF;
    TNode<Uint32T> t1196 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1195));
    TNode<Uint32T> t1197 = UncheckedCast<Uint32T>(Word32And(t1194, t1196));
    USE(t1197);
    TVARIABLE(Uint32T, b1_291_impl);
    auto b1_291 = &b1_291_impl;
    USE(b1_291);
    *b1_291 = t1197;
    // ../../src/builtins/data-view.tq:583:4
    int31_t t1198 = 16;
    TNode<Uint32T> t1199 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1198));
    TNode<Uint32T> t1200 = UncheckedCast<Uint32T>(Word32Shr(p_low_word, t1199));
    USE(t1200);
    int31_t t1201 = 0xFF;
    TNode<Uint32T> t1202 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1201));
    TNode<Uint32T> t1203 = UncheckedCast<Uint32T>(Word32And(t1200, t1202));
    USE(t1203);
    TVARIABLE(Uint32T, b2_292_impl);
    auto b2_292 = &b2_292_impl;
    USE(b2_292);
    *b2_292 = t1203;
    // ../../src/builtins/data-view.tq:584:4
    int31_t t1204 = 24;
    TNode<Uint32T> t1205 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1204));
    TNode<Uint32T> t1206 = UncheckedCast<Uint32T>(Word32Shr(p_low_word, t1205));
    USE(t1206);
    TVARIABLE(Uint32T, b3_293_impl);
    auto b3_293 = &b3_293_impl;
    USE(b3_293);
    *b3_293 = t1206;
    // ../../src/builtins/data-view.tq:586:4
    int31_t t1207 = 0xFF;
    TNode<Uint32T> t1208 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1207));
    TNode<Uint32T> t1209 = UncheckedCast<Uint32T>(Word32And(p_high_word, t1208));
    USE(t1209);
    TVARIABLE(Uint32T, b4_294_impl);
    auto b4_294 = &b4_294_impl;
    USE(b4_294);
    *b4_294 = t1209;
    // ../../src/builtins/data-view.tq:587:4
    int31_t t1210 = 8;
    TNode<Uint32T> t1211 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1210));
    TNode<Uint32T> t1212 = UncheckedCast<Uint32T>(Word32Shr(p_high_word, t1211));
    USE(t1212);
    int31_t t1213 = 0xFF;
    TNode<Uint32T> t1214 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1213));
    TNode<Uint32T> t1215 = UncheckedCast<Uint32T>(Word32And(t1212, t1214));
    USE(t1215);
    TVARIABLE(Uint32T, b5_295_impl);
    auto b5_295 = &b5_295_impl;
    USE(b5_295);
    *b5_295 = t1215;
    // ../../src/builtins/data-view.tq:588:4
    int31_t t1216 = 16;
    TNode<Uint32T> t1217 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1216));
    TNode<Uint32T> t1218 = UncheckedCast<Uint32T>(Word32Shr(p_high_word, t1217));
    USE(t1218);
    int31_t t1219 = 0xFF;
    TNode<Uint32T> t1220 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1219));
    TNode<Uint32T> t1221 = UncheckedCast<Uint32T>(Word32And(t1218, t1220));
    USE(t1221);
    TVARIABLE(Uint32T, b6_296_impl);
    auto b6_296 = &b6_296_impl;
    USE(b6_296);
    *b6_296 = t1221;
    // ../../src/builtins/data-view.tq:589:4
    int31_t t1222 = 24;
    TNode<Uint32T> t1223 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1222));
    TNode<Uint32T> t1224 = UncheckedCast<Uint32T>(Word32Shr(p_high_word, t1223));
    USE(t1224);
    TVARIABLE(Uint32T, b7_297_impl);
    auto b7_297 = &b7_297_impl;
    USE(b7_297);
    *b7_297 = t1224;
    // ../../src/builtins/data-view.tq:592:4
    {
      Label label__True_290_impl(this);
      Label* label__True_290 = &label__True_290_impl;
      USE(label__True_290);
      Label label__False_291_impl(this);
      Label* label__False_291 = &label__False_291_impl;
      USE(label__False_291);
      Label label_if_done_label_580_720_impl(this, {});
      Label* label_if_done_label_580_720 = &label_if_done_label_580_720_impl;
      USE(label_if_done_label_580_720);
      Branch(p_requested_little_endian, label__True_290, label__False_291);
      if (label__True_290->is_used())
      {
        BIND(label__True_290);
        // ../../src/builtins/data-view.tq:592:33
        {
          // ../../src/builtins/data-view.tq:593:6
          StoreWord8((*data_pointer_289).value(), p_offset, (*b0_290).value());
          // ../../src/builtins/data-view.tq:594:6
          int31_t t1225 = 1;
          TNode<IntPtrT> t1226 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1225));
          TNode<IntPtrT> t1227 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1226));
          USE(t1227);
          StoreWord8((*data_pointer_289).value(), t1227, (*b1_291).value());
          // ../../src/builtins/data-view.tq:595:6
          int31_t t1228 = 2;
          TNode<IntPtrT> t1229 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1228));
          TNode<IntPtrT> t1230 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1229));
          USE(t1230);
          StoreWord8((*data_pointer_289).value(), t1230, (*b2_292).value());
          // ../../src/builtins/data-view.tq:596:6
          int31_t t1231 = 3;
          TNode<IntPtrT> t1232 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1231));
          TNode<IntPtrT> t1233 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1232));
          USE(t1233);
          StoreWord8((*data_pointer_289).value(), t1233, (*b3_293).value());
          // ../../src/builtins/data-view.tq:597:6
          int31_t t1234 = 4;
          TNode<IntPtrT> t1235 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1234));
          TNode<IntPtrT> t1236 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1235));
          USE(t1236);
          StoreWord8((*data_pointer_289).value(), t1236, (*b4_294).value());
          // ../../src/builtins/data-view.tq:598:6
          int31_t t1237 = 5;
          TNode<IntPtrT> t1238 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1237));
          TNode<IntPtrT> t1239 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1238));
          USE(t1239);
          StoreWord8((*data_pointer_289).value(), t1239, (*b5_295).value());
          // ../../src/builtins/data-view.tq:599:6
          int31_t t1240 = 6;
          TNode<IntPtrT> t1241 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1240));
          TNode<IntPtrT> t1242 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1241));
          USE(t1242);
          StoreWord8((*data_pointer_289).value(), t1242, (*b6_296).value());
          // ../../src/builtins/data-view.tq:600:6
          int31_t t1243 = 7;
          TNode<IntPtrT> t1244 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1243));
          TNode<IntPtrT> t1245 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1244));
          USE(t1245);
          StoreWord8((*data_pointer_289).value(), t1245, (*b7_297).value());
        }
        Goto(label_if_done_label_580_720);
      }
      if (label__False_291->is_used())
      {
        BIND(label__False_291);
        // ../../src/builtins/data-view.tq:601:11
        {
          // ../../src/builtins/data-view.tq:602:6
          StoreWord8((*data_pointer_289).value(), p_offset, (*b7_297).value());
          // ../../src/builtins/data-view.tq:603:6
          int31_t t1246 = 1;
          TNode<IntPtrT> t1247 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1246));
          TNode<IntPtrT> t1248 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1247));
          USE(t1248);
          StoreWord8((*data_pointer_289).value(), t1248, (*b6_296).value());
          // ../../src/builtins/data-view.tq:604:6
          int31_t t1249 = 2;
          TNode<IntPtrT> t1250 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1249));
          TNode<IntPtrT> t1251 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1250));
          USE(t1251);
          StoreWord8((*data_pointer_289).value(), t1251, (*b5_295).value());
          // ../../src/builtins/data-view.tq:605:6
          int31_t t1252 = 3;
          TNode<IntPtrT> t1253 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1252));
          TNode<IntPtrT> t1254 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1253));
          USE(t1254);
          StoreWord8((*data_pointer_289).value(), t1254, (*b4_294).value());
          // ../../src/builtins/data-view.tq:606:6
          int31_t t1255 = 4;
          TNode<IntPtrT> t1256 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1255));
          TNode<IntPtrT> t1257 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1256));
          USE(t1257);
          StoreWord8((*data_pointer_289).value(), t1257, (*b3_293).value());
          // ../../src/builtins/data-view.tq:607:6
          int31_t t1258 = 5;
          TNode<IntPtrT> t1259 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1258));
          TNode<IntPtrT> t1260 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1259));
          USE(t1260);
          StoreWord8((*data_pointer_289).value(), t1260, (*b2_292).value());
          // ../../src/builtins/data-view.tq:608:6
          int31_t t1261 = 6;
          TNode<IntPtrT> t1262 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1261));
          TNode<IntPtrT> t1263 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1262));
          USE(t1263);
          StoreWord8((*data_pointer_289).value(), t1263, (*b1_291).value());
          // ../../src/builtins/data-view.tq:609:6
          int31_t t1264 = 7;
          TNode<IntPtrT> t1265 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1264));
          TNode<IntPtrT> t1266 = UncheckedCast<IntPtrT>(IntPtrAdd(p_offset, t1265));
          USE(t1266);
          StoreWord8((*data_pointer_289).value(), t1266, (*b0_290).value());
        }
        Goto(label_if_done_label_580_720);
      }
      BIND(label_if_done_label_580_720);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BigInt> p_bigint_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_721_impl(this, {});
  Label* label_macro_end_721 = &label_macro_end_721_impl;
  USE(label_macro_end_721);
  // ../../src/builtins/data-view.tq:622:59
  {
    // ../../src/builtins/data-view.tq:624:4
    TNode<UintPtrT> t1267 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntLength(p_bigint_value));
    USE(t1267);
    TVARIABLE(UintPtrT, length_298_impl);
    auto length_298 = &length_298_impl;
    USE(length_298);
    *length_298 = t1267;
    // ../../src/builtins/data-view.tq:625:4
    TNode<UintPtrT> t1268 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntSign(p_bigint_value));
    USE(t1268);
    TVARIABLE(UintPtrT, sign_299_impl);
    auto sign_299 = &sign_299_impl;
    USE(sign_299);
    *sign_299 = t1268;
    // ../../src/builtins/data-view.tq:629:4
    int31_t t1269 = 0;
    TVARIABLE(Uint32T, low_word_300_impl);
    auto low_word_300 = &low_word_300_impl;
    USE(low_word_300);
    TNode<Uint32T> t1270 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1269));
    *low_word_300 = t1270;
    // ../../src/builtins/data-view.tq:630:4
    int31_t t1271 = 0;
    TVARIABLE(Uint32T, high_word_301_impl);
    auto high_word_301 = &high_word_301_impl;
    USE(high_word_301);
    TNode<Uint32T> t1272 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1271));
    *high_word_301 = t1272;
    // ../../src/builtins/data-view.tq:633:4
    {
      Label label__True_292_impl(this);
      Label* label__True_292 = &label__True_292_impl;
      USE(label__True_292);
      Label label__False_293_impl(this, {low_word_300, high_word_301});
      Label* label__False_293 = &label__False_293_impl;
      USE(label__False_293);
      int31_t t1273 = 0;
      TNode<UintPtrT> t1274 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(t1273));
      TNode<BoolT> t1275 = UncheckedCast<BoolT>(WordNotEqual((*length_298).value(), t1274));
      USE(t1275);
      Branch(t1275, label__True_292, label__False_293);
      if (label__True_292->is_used())
      {
        BIND(label__True_292);
        // ../../src/builtins/data-view.tq:633:21
        {
          // ../../src/builtins/data-view.tq:634:6
          {
            bool t1276 = Is64();
            USE(t1276);
            if ((t1276)) {
              // ../../src/builtins/data-view.tq:634:28
              {
                // ../../src/builtins/data-view.tq:636:8
                int31_t t1277 = 0;
                TNode<UintPtrT> t1278 = UncheckedCast<UintPtrT>(LoadBigIntDigit(p_bigint_value, t1277));
                USE(t1278);
                TVARIABLE(UintPtrT, value_302_impl);
                auto value_302 = &value_302_impl;
                USE(value_302);
                *value_302 = t1278;
                // ../../src/builtins/data-view.tq:637:8
                TNode<Uint32T> t1279 = UncheckedCast<Uint32T>(convert8ATuint32((*value_302).value()));
                USE(t1279);
                *low_word_300 = t1279;
                // ../../src/builtins/data-view.tq:638:8
                int31_t t1280 = 32;
                TNode<UintPtrT> t1281 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(t1280));
                TNode<UintPtrT> t1282 = UncheckedCast<UintPtrT>(WordShr((*value_302).value(), t1281));
                USE(t1282);
                TNode<Uint32T> t1283 = UncheckedCast<Uint32T>(convert8ATuint32(t1282));
                USE(t1283);
                *high_word_301 = t1283;
              }
            } else {
              // ../../src/builtins/data-view.tq:640:11
              {
                // ../../src/builtins/data-view.tq:641:8
                int31_t t1284 = 0;
                TNode<UintPtrT> t1285 = UncheckedCast<UintPtrT>(LoadBigIntDigit(p_bigint_value, t1284));
                USE(t1285);
                TNode<Uint32T> t1286 = UncheckedCast<Uint32T>(convert8ATuint32(t1285));
                USE(t1286);
                *low_word_300 = t1286;
                // ../../src/builtins/data-view.tq:642:8
                {
                  Label label__True_296_impl(this);
                  Label* label__True_296 = &label__True_296_impl;
                  USE(label__True_296);
                  Label label__False_297_impl(this, {high_word_301});
                  Label* label__False_297 = &label__False_297_impl;
                  USE(label__False_297);
                  int31_t t1287 = 2;
                  TNode<UintPtrT> t1288 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(t1287));
                  TNode<BoolT> t1289 = UncheckedCast<BoolT>(UintPtrGreaterThanOrEqual((*length_298).value(), t1288));
                  USE(t1289);
                  Branch(t1289, label__True_296, label__False_297);
                  if (label__True_296->is_used())
                  {
                    BIND(label__True_296);
                    // ../../src/builtins/data-view.tq:642:25
                    {
                      // ../../src/builtins/data-view.tq:643:10
                      int31_t t1290 = 1;
                      TNode<UintPtrT> t1291 = UncheckedCast<UintPtrT>(LoadBigIntDigit(p_bigint_value, t1290));
                      USE(t1291);
                      TNode<Uint32T> t1292 = UncheckedCast<Uint32T>(convert8ATuint32(t1291));
                      USE(t1292);
                      *high_word_301 = t1292;
                    }
                    Goto(label__False_297);
                  }
                  BIND(label__False_297);
                }
              }
            }
          }
        }
        Goto(label__False_293);
      }
      BIND(label__False_293);
    }
    // ../../src/builtins/data-view.tq:648:4
    {
      Label label__True_298_impl(this);
      Label* label__True_298 = &label__True_298_impl;
      USE(label__True_298);
      Label label__False_299_impl(this, {low_word_300, high_word_301});
      Label* label__False_299 = &label__False_299_impl;
      USE(label__False_299);
      int31_t t1293 = 0;
      TNode<UintPtrT> t1294 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(t1293));
      TNode<BoolT> t1295 = UncheckedCast<BoolT>(WordNotEqual((*sign_299).value(), t1294));
      USE(t1295);
      Branch(t1295, label__True_298, label__False_299);
      if (label__True_298->is_used())
      {
        BIND(label__True_298);
        // ../../src/builtins/data-view.tq:648:19
        {
          // ../../src/builtins/data-view.tq:649:6
          int31_t t1296 = 0;
          TNode<Int32T> t1297 = UncheckedCast<Int32T>(Signed((*high_word_301).value()));
          USE(t1297);
          TNode<Int32T> t1298 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1296));
          TNode<Int32T> t1299 = UncheckedCast<Int32T>(Int32Sub(t1298, t1297));
          USE(t1299);
          TNode<Uint32T> t1300 = UncheckedCast<Uint32T>(Unsigned(t1299));
          USE(t1300);
          *high_word_301 = t1300;
          // ../../src/builtins/data-view.tq:650:6
          {
            Label label__True_300_impl(this);
            Label* label__True_300 = &label__True_300_impl;
            USE(label__True_300);
            Label label__False_301_impl(this, {high_word_301});
            Label* label__False_301 = &label__False_301_impl;
            USE(label__False_301);
            int31_t t1301 = 0;
            TNode<Uint32T> t1302 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(t1301));
            TNode<BoolT> t1303 = UncheckedCast<BoolT>(Word32NotEqual((*low_word_300).value(), t1302));
            USE(t1303);
            Branch(t1303, label__True_300, label__False_301);
            if (label__True_300->is_used())
            {
              BIND(label__True_300);
              // ../../src/builtins/data-view.tq:650:25
              {
                // ../../src/builtins/data-view.tq:651:8
                TNode<Int32T> t1304 = UncheckedCast<Int32T>(Signed((*high_word_301).value()));
                USE(t1304);
                int31_t t1305 = 1;
                TNode<Int32T> t1306 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1305));
                TNode<Int32T> t1307 = UncheckedCast<Int32T>(Int32Sub(t1304, t1306));
                USE(t1307);
                TNode<Uint32T> t1308 = UncheckedCast<Uint32T>(Unsigned(t1307));
                USE(t1308);
                *high_word_301 = t1308;
              }
              Goto(label__False_301);
            }
            BIND(label__False_301);
          }
          // ../../src/builtins/data-view.tq:653:6
          int31_t t1309 = 0;
          TNode<Int32T> t1310 = UncheckedCast<Int32T>(Signed((*low_word_300).value()));
          USE(t1310);
          TNode<Int32T> t1311 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1309));
          TNode<Int32T> t1312 = UncheckedCast<Int32T>(Int32Sub(t1311, t1310));
          USE(t1312);
          TNode<Uint32T> t1313 = UncheckedCast<Uint32T>(Unsigned(t1312));
          USE(t1313);
          *low_word_300 = t1313;
        }
        Goto(label__False_299);
      }
      BIND(label__False_299);
    }
    // ../../src/builtins/data-view.tq:656:4
    StoreDataView64(p_buffer, p_offset, (*low_word_300).value(), (*high_word_301).value(), p_requested_little_endian);
  }
}

compiler::TNode<Object> DataViewBuiltinsFromDSLAssembler::DataViewSet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_value, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Object, _return_303_impl);
  auto _return_303 = &_return_303_impl;
  USE(_return_303);
  Label label_macro_end_722_impl(this, {_return_303});
  Label* label_macro_end_722 = &label_macro_end_722_impl;
  USE(label_macro_end_722);
  // ../../src/builtins/data-view.tq:665:58
  {
    // ../../src/builtins/data-view.tq:669:4
    const char* t1314 = "get DataView.prototype.get";
    TNode<String> t1315 = UncheckedCast<String>(from_constexpr8ATString(t1314));
    TNode<JSDataView> t1316 = UncheckedCast<JSDataView>(ValidateDataView(p_context, p_receiver, t1315));
    USE(t1316);
    TVARIABLE(JSDataView, data_view_304_impl);
    auto data_view_304 = &data_view_304_impl;
    USE(data_view_304);
    *data_view_304 = t1316;
    // ../../src/builtins/data-view.tq:672:4
    TVARIABLE(Smi, getIndexSmi_305_impl);
    auto getIndexSmi_305 = &getIndexSmi_305_impl;
    USE(getIndexSmi_305);
    // ../../src/builtins/data-view.tq:673:4
    {
      Label label_try_done_581_723_impl(this);
      Label* label_try_done_581_723 = &label_try_done_581_723_impl;
      USE(label_try_done_581_723);
      Label label_RangeError_302_impl(this);
      Label* label_RangeError_302 = &label_RangeError_302_impl;
      USE(label_RangeError_302);
      Label label_try_begin_582_724_impl(this);
      Label* label_try_begin_582_724 = &label_try_begin_582_724_impl;
      USE(label_try_begin_582_724);
      Goto(label_try_begin_582_724);
      if (label_try_begin_582_724->is_used())
      {
        BIND(label_try_begin_582_724);
        // ../../src/builtins/data-view.tq:673:8
        {
          // ../../src/builtins/data-view.tq:674:6
          TNode<Smi> t1317 = UncheckedCast<Smi>(ToSmiIndex(p_offset, p_context, label_RangeError_302));
          USE(t1317);
          *getIndexSmi_305 = t1317;
        }
        Goto(label_try_done_581_723);
      }
      if (label_RangeError_302->is_used())
      {
        BIND(label_RangeError_302);
        // ../../src/builtins/data-view.tq:676:21
        {
          // ../../src/builtins/data-view.tq:677:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidDataViewAccessorOffset);
        }
      }
      BIND(label_try_done_581_723);
    }
    // ../../src/builtins/data-view.tq:679:4
    TNode<IntPtrT> t1318 = UncheckedCast<IntPtrT>(convert8ATintptr((*getIndexSmi_305).value()));
    USE(t1318);
    TVARIABLE(IntPtrT, getIndex_306_impl);
    auto getIndex_306 = &getIndex_306_impl;
    USE(getIndex_306);
    *getIndex_306 = t1318;
    // ../../src/builtins/data-view.tq:681:4
    TNode<BoolT> t1319 = UncheckedCast<BoolT>(ToBoolean(p_requested_little_endian));
    USE(t1319);
    TVARIABLE(BoolT, littleEndian_307_impl);
    auto littleEndian_307 = &littleEndian_307_impl;
    USE(littleEndian_307);
    *littleEndian_307 = t1319;
    // ../../src/builtins/data-view.tq:682:4
    TNode<JSArrayBuffer> t1320 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer((*data_view_304).value()));
    TVARIABLE(JSArrayBuffer, buffer_308_impl);
    auto buffer_308 = &buffer_308_impl;
    USE(buffer_308);
    *buffer_308 = t1320;
    // ../../src/builtins/data-view.tq:684:4
    TVARIABLE(BigInt, bigint_value_309_impl);
    auto bigint_value_309 = &bigint_value_309_impl;
    USE(bigint_value_309);
    // ../../src/builtins/data-view.tq:685:4
    TVARIABLE(Number, num_value_310_impl);
    auto num_value_310 = &num_value_310_impl;
    USE(num_value_310);
    // ../../src/builtins/data-view.tq:688:4
    {
      Label label__False_305_impl(this);
      Label* label__False_305 = &label__False_305_impl;
      USE(label__False_305);
      bool t1321 = ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS);
      USE(t1321);
      bool t1322 = ElementsKindEqual(p_kind, BIGINT64_ELEMENTS);
      USE(t1322);
      if (((t1321 || t1322))) {
        // ../../src/builtins/data-view.tq:688:75
        {
          // ../../src/builtins/data-view.tq:689:6
          TNode<BigInt> t1323 = UncheckedCast<BigInt>(ToBigInt(p_context, p_value));
          USE(t1323);
          *bigint_value_309 = t1323;
        }
      } else {
        // ../../src/builtins/data-view.tq:690:11
        {
          // ../../src/builtins/data-view.tq:691:6
          TNode<Number> t1324 = UncheckedCast<Number>(ToNumber(p_context, p_value));
          USE(t1324);
          *num_value_310 = t1324;
        }
      }
    }
    // ../../src/builtins/data-view.tq:694:4
    {
      Label label__True_306_impl(this);
      Label* label__True_306 = &label__True_306_impl;
      USE(label__True_306);
      Label label__False_307_impl(this, {});
      Label* label__False_307 = &label__False_307_impl;
      USE(label__False_307);
      TNode<BoolT> t1325 = UncheckedCast<BoolT>(IsDetachedBuffer((*buffer_308).value()));
      USE(t1325);
      Branch(t1325, label__True_306, label__False_307);
      if (label__True_306->is_used())
      {
        BIND(label__True_306);
        // ../../src/builtins/data-view.tq:694:34
        {
          // ../../src/builtins/data-view.tq:695:6
          const char* t1326 = "DataView.prototype.get";
          TNode<Object> t1327 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t1326));
          ThrowTypeError(p_context, MessageTemplate::kDetachedOperation, t1327);
        }
      }
      BIND(label__False_307);
    }
    // ../../src/builtins/data-view.tq:698:4
    TNode<Smi> t1328 = UncheckedCast<Smi>(LoadDataViewByteOffset((*data_view_304).value()));
    TNode<IntPtrT> t1329 = UncheckedCast<IntPtrT>(convert8ATintptr(t1328));
    USE(t1329);
    TVARIABLE(IntPtrT, viewOffset_311_impl);
    auto viewOffset_311 = &viewOffset_311_impl;
    USE(viewOffset_311);
    *viewOffset_311 = t1329;
    // ../../src/builtins/data-view.tq:699:4
    TNode<Smi> t1330 = UncheckedCast<Smi>(LoadDataViewByteLength((*data_view_304).value()));
    TNode<IntPtrT> t1331 = UncheckedCast<IntPtrT>(convert8ATintptr(t1330));
    USE(t1331);
    TVARIABLE(IntPtrT, viewSize_312_impl);
    auto viewSize_312 = &viewSize_312_impl;
    USE(viewSize_312);
    *viewSize_312 = t1331;
    // ../../src/builtins/data-view.tq:700:4
    int31_t t1332 = DataViewElementSize(p_kind);
    USE(t1332);
    TVARIABLE(IntPtrT, elementSize_313_impl);
    auto elementSize_313 = &elementSize_313_impl;
    USE(elementSize_313);
    TNode<IntPtrT> t1333 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1332));
    *elementSize_313 = t1333;
    // ../../src/builtins/data-view.tq:702:4
    {
      Label label__True_308_impl(this);
      Label* label__True_308 = &label__True_308_impl;
      USE(label__True_308);
      Label label__False_309_impl(this, {});
      Label* label__False_309 = &label__False_309_impl;
      USE(label__False_309);
      TNode<IntPtrT> t1334 = UncheckedCast<IntPtrT>(IntPtrAdd((*getIndex_306).value(), (*elementSize_313).value()));
      USE(t1334);
      TNode<BoolT> t1335 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1334, (*viewSize_312).value()));
      USE(t1335);
      Branch(t1335, label__True_308, label__False_309);
      if (label__True_308->is_used())
      {
        BIND(label__True_308);
        // ../../src/builtins/data-view.tq:702:43
        {
          // ../../src/builtins/data-view.tq:703:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidDataViewAccessorOffset);
        }
      }
      BIND(label__False_309);
    }
    // ../../src/builtins/data-view.tq:706:4
    TNode<IntPtrT> t1336 = UncheckedCast<IntPtrT>(IntPtrAdd((*getIndex_306).value(), (*viewOffset_311).value()));
    USE(t1336);
    TVARIABLE(IntPtrT, bufferIndex_314_impl);
    auto bufferIndex_314 = &bufferIndex_314_impl;
    USE(bufferIndex_314);
    *bufferIndex_314 = t1336;
    // ../../src/builtins/data-view.tq:708:4
    {
      Label label__False_312_impl(this);
      Label* label__False_312 = &label__False_312_impl;
      USE(label__False_312);
      bool t1337 = ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS);
      USE(t1337);
      bool t1338 = ElementsKindEqual(p_kind, BIGINT64_ELEMENTS);
      USE(t1338);
      if (((t1337 || t1338))) {
        // ../../src/builtins/data-view.tq:708:75
        {
          // ../../src/builtins/data-view.tq:709:6
          StoreDataViewBigInt((*buffer_308).value(), (*bufferIndex_314).value(), (*bigint_value_309).value(), (*littleEndian_307).value());
        }
      } else {
        // ../../src/builtins/data-view.tq:712:9
        {
          // ../../src/builtins/data-view.tq:713:6
          TNode<Float64T> t1339 = UncheckedCast<Float64T>(ChangeNumberToFloat64((*num_value_310).value()));
          USE(t1339);
          TVARIABLE(Float64T, double_value_315_impl);
          auto double_value_315 = &double_value_315_impl;
          USE(double_value_315);
          *double_value_315 = t1339;
          // ../../src/builtins/data-view.tq:715:6
          {
            Label label__False_315_impl(this);
            Label* label__False_315 = &label__False_315_impl;
            USE(label__False_315);
            bool t1340 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
            USE(t1340);
            bool t1341 = ElementsKindEqual(p_kind, INT8_ELEMENTS);
            USE(t1341);
            if (((t1340 || t1341))) {
              // ../../src/builtins/data-view.tq:715:69
              {
                // ../../src/builtins/data-view.tq:716:8
                TNode<Uint32T> t1342 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32((*double_value_315).value()));
                USE(t1342);
                StoreDataView8((*buffer_308).value(), (*bufferIndex_314).value(), t1342);
              }
            } else {
              // ../../src/builtins/data-view.tq:719:11
              {
                Label label__False_318_impl(this);
                Label* label__False_318 = &label__False_318_impl;
                USE(label__False_318);
                bool t1343 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
                USE(t1343);
                bool t1344 = ElementsKindEqual(p_kind, INT16_ELEMENTS);
                USE(t1344);
                if (((t1343 || t1344))) {
                  // ../../src/builtins/data-view.tq:719:76
                  {
                    // ../../src/builtins/data-view.tq:720:8
                    TNode<Uint32T> t1345 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32((*double_value_315).value()));
                    USE(t1345);
                    StoreDataView16((*buffer_308).value(), (*bufferIndex_314).value(), t1345, (*littleEndian_307).value());
                  }
                } else {
                  // ../../src/builtins/data-view.tq:723:11
                  {
                    Label label__False_321_impl(this);
                    Label* label__False_321 = &label__False_321_impl;
                    USE(label__False_321);
                    bool t1346 = ElementsKindEqual(p_kind, UINT32_ELEMENTS);
                    USE(t1346);
                    bool t1347 = ElementsKindEqual(p_kind, INT32_ELEMENTS);
                    USE(t1347);
                    if (((t1346 || t1347))) {
                      // ../../src/builtins/data-view.tq:723:76
                      {
                        // ../../src/builtins/data-view.tq:724:8
                        TNode<Uint32T> t1348 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32((*double_value_315).value()));
                        USE(t1348);
                        StoreDataView32((*buffer_308).value(), (*bufferIndex_314).value(), t1348, (*littleEndian_307).value());
                      }
                    } else {
                      // ../../src/builtins/data-view.tq:727:11
                      {
                        bool t1349 = ElementsKindEqual(p_kind, FLOAT32_ELEMENTS);
                        USE(t1349);
                        if ((t1349)) {
                          // ../../src/builtins/data-view.tq:727:51
                          {
                            // ../../src/builtins/data-view.tq:728:8
                            TNode<Float32T> t1350 = UncheckedCast<Float32T>(TruncateFloat64ToFloat32((*double_value_315).value()));
                            USE(t1350);
                            TVARIABLE(Float32T, float_value_316_impl);
                            auto float_value_316 = &float_value_316_impl;
                            USE(float_value_316);
                            *float_value_316 = t1350;
                            // ../../src/builtins/data-view.tq:729:8
                            TNode<Uint32T> t1351 = UncheckedCast<Uint32T>(BitcastFloat32ToInt32((*float_value_316).value()));
                            USE(t1351);
                            StoreDataView32((*buffer_308).value(), (*bufferIndex_314).value(), t1351, (*littleEndian_307).value());
                          }
                        } else {
                          // ../../src/builtins/data-view.tq:732:11
                          {
                            bool t1352 = ElementsKindEqual(p_kind, FLOAT64_ELEMENTS);
                            USE(t1352);
                            if ((t1352)) {
                              // ../../src/builtins/data-view.tq:732:51
                              {
                                // ../../src/builtins/data-view.tq:733:8
                                TNode<Uint32T> t1353 = UncheckedCast<Uint32T>(Float64ExtractLowWord32((*double_value_315).value()));
                                USE(t1353);
                                TVARIABLE(Uint32T, low_word_317_impl);
                                auto low_word_317 = &low_word_317_impl;
                                USE(low_word_317);
                                *low_word_317 = t1353;
                                // ../../src/builtins/data-view.tq:734:8
                                TNode<Uint32T> t1354 = UncheckedCast<Uint32T>(Float64ExtractHighWord32((*double_value_315).value()));
                                USE(t1354);
                                TVARIABLE(Uint32T, high_word_318_impl);
                                auto high_word_318 = &high_word_318_impl;
                                USE(high_word_318);
                                *high_word_318 = t1354;
                                // ../../src/builtins/data-view.tq:735:8
                                StoreDataView64((*buffer_308).value(), (*bufferIndex_314).value(), (*low_word_317).value(), (*high_word_318).value(), (*littleEndian_307).value());
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    // ../../src/builtins/data-view.tq:739:4
    *_return_303 = Undefined();
    Goto(label_macro_end_722);
  }
  BIND(label_macro_end_722);
  return (*_return_303).value();
}

TF_BUILTIN(DataViewPrototypeSetInt8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:743:62
  {
    // ../../src/builtins/data-view.tq:744:6
    auto t1355 = [=]() {
      int31_t t1357 = 0;
      TNode<IntPtrT> t1358 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1357));
      TNode<Object> t1359 = UncheckedCast<Object>(GetArgumentValue(arguments, t1358));
      return t1359;
    };
    auto t1356 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1360_583_impl);
    auto t1360_583 = &t1360_583_impl;
    USE(t1360_583);
    {
      Label label__True_326_impl(this);
      Label* label__True_326 = &label__True_326_impl;
      USE(label__True_326);
      Label label__False_327_impl(this);
      Label* label__False_327 = &label__False_327_impl;
      USE(label__False_327);
      Label label__done_584_725_impl(this, {t1360_583});
      Label* label__done_584_725 = &label__done_584_725_impl;
      USE(label__done_584_725);
      TNode<IntPtrT> t1361 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1362 = 0;
      TNode<IntPtrT> t1363 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1362));
      TNode<BoolT> t1364 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1361, t1363));
      USE(t1364);
      Branch(t1364, label__True_326, label__False_327);
      BIND(label__True_326);
            *t1360_583 = t1355();
      Goto(label__done_584_725);
      BIND(label__False_327);
            *t1360_583 = t1356();
      Goto(label__done_584_725);
      BIND(label__done_584_725);
    }
    TVARIABLE(Object, offset_319_impl);
    auto offset_319 = &offset_319_impl;
    USE(offset_319);
    *offset_319 = (*t1360_583).value();
    // ../../src/builtins/data-view.tq:747:6
    auto t1365 = [=]() {
      int31_t t1367 = 1;
      TNode<IntPtrT> t1368 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1367));
      TNode<Object> t1369 = UncheckedCast<Object>(GetArgumentValue(arguments, t1368));
      return t1369;
    };
    auto t1366 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1370_585_impl);
    auto t1370_585 = &t1370_585_impl;
    USE(t1370_585);
    {
      Label label__True_328_impl(this);
      Label* label__True_328 = &label__True_328_impl;
      USE(label__True_328);
      Label label__False_329_impl(this);
      Label* label__False_329 = &label__False_329_impl;
      USE(label__False_329);
      Label label__done_586_726_impl(this, {t1370_585});
      Label* label__done_586_726 = &label__done_586_726_impl;
      USE(label__done_586_726);
      TNode<IntPtrT> t1371 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1372 = 1;
      TNode<IntPtrT> t1373 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1372));
      TNode<BoolT> t1374 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1371, t1373));
      USE(t1374);
      Branch(t1374, label__True_328, label__False_329);
      BIND(label__True_328);
            *t1370_585 = t1365();
      Goto(label__done_586_726);
      BIND(label__False_329);
            *t1370_585 = t1366();
      Goto(label__done_586_726);
      BIND(label__done_586_726);
    }
    TVARIABLE(Object, value_320_impl);
    auto value_320 = &value_320_impl;
    USE(value_320);
    *value_320 = (*t1370_585).value();
    // ../../src/builtins/data-view.tq:750:6
    TNode<Object> t1375 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_319).value(), (*value_320).value(), Undefined(), INT8_ELEMENTS));
    USE(t1375);
    arguments->PopAndReturn(t1375);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint8, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:755:62
  {
    // ../../src/builtins/data-view.tq:756:6
    auto t1376 = [=]() {
      int31_t t1378 = 0;
      TNode<IntPtrT> t1379 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1378));
      TNode<Object> t1380 = UncheckedCast<Object>(GetArgumentValue(arguments, t1379));
      return t1380;
    };
    auto t1377 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1381_587_impl);
    auto t1381_587 = &t1381_587_impl;
    USE(t1381_587);
    {
      Label label__True_330_impl(this);
      Label* label__True_330 = &label__True_330_impl;
      USE(label__True_330);
      Label label__False_331_impl(this);
      Label* label__False_331 = &label__False_331_impl;
      USE(label__False_331);
      Label label__done_588_727_impl(this, {t1381_587});
      Label* label__done_588_727 = &label__done_588_727_impl;
      USE(label__done_588_727);
      TNode<IntPtrT> t1382 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1383 = 0;
      TNode<IntPtrT> t1384 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1383));
      TNode<BoolT> t1385 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1382, t1384));
      USE(t1385);
      Branch(t1385, label__True_330, label__False_331);
      BIND(label__True_330);
            *t1381_587 = t1376();
      Goto(label__done_588_727);
      BIND(label__False_331);
            *t1381_587 = t1377();
      Goto(label__done_588_727);
      BIND(label__done_588_727);
    }
    TVARIABLE(Object, offset_321_impl);
    auto offset_321 = &offset_321_impl;
    USE(offset_321);
    *offset_321 = (*t1381_587).value();
    // ../../src/builtins/data-view.tq:759:6
    auto t1386 = [=]() {
      int31_t t1388 = 1;
      TNode<IntPtrT> t1389 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1388));
      TNode<Object> t1390 = UncheckedCast<Object>(GetArgumentValue(arguments, t1389));
      return t1390;
    };
    auto t1387 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1391_589_impl);
    auto t1391_589 = &t1391_589_impl;
    USE(t1391_589);
    {
      Label label__True_332_impl(this);
      Label* label__True_332 = &label__True_332_impl;
      USE(label__True_332);
      Label label__False_333_impl(this);
      Label* label__False_333 = &label__False_333_impl;
      USE(label__False_333);
      Label label__done_590_728_impl(this, {t1391_589});
      Label* label__done_590_728 = &label__done_590_728_impl;
      USE(label__done_590_728);
      TNode<IntPtrT> t1392 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1393 = 1;
      TNode<IntPtrT> t1394 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1393));
      TNode<BoolT> t1395 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1392, t1394));
      USE(t1395);
      Branch(t1395, label__True_332, label__False_333);
      BIND(label__True_332);
            *t1391_589 = t1386();
      Goto(label__done_590_728);
      BIND(label__False_333);
            *t1391_589 = t1387();
      Goto(label__done_590_728);
      BIND(label__done_590_728);
    }
    TVARIABLE(Object, value_322_impl);
    auto value_322 = &value_322_impl;
    USE(value_322);
    *value_322 = (*t1391_589).value();
    // ../../src/builtins/data-view.tq:762:6
    TNode<Object> t1396 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_321).value(), (*value_322).value(), Undefined(), UINT8_ELEMENTS));
    USE(t1396);
    arguments->PopAndReturn(t1396);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:767:62
  {
    // ../../src/builtins/data-view.tq:768:6
    auto t1397 = [=]() {
      int31_t t1399 = 0;
      TNode<IntPtrT> t1400 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1399));
      TNode<Object> t1401 = UncheckedCast<Object>(GetArgumentValue(arguments, t1400));
      return t1401;
    };
    auto t1398 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1402_591_impl);
    auto t1402_591 = &t1402_591_impl;
    USE(t1402_591);
    {
      Label label__True_334_impl(this);
      Label* label__True_334 = &label__True_334_impl;
      USE(label__True_334);
      Label label__False_335_impl(this);
      Label* label__False_335 = &label__False_335_impl;
      USE(label__False_335);
      Label label__done_592_729_impl(this, {t1402_591});
      Label* label__done_592_729 = &label__done_592_729_impl;
      USE(label__done_592_729);
      TNode<IntPtrT> t1403 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1404 = 0;
      TNode<IntPtrT> t1405 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1404));
      TNode<BoolT> t1406 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1403, t1405));
      USE(t1406);
      Branch(t1406, label__True_334, label__False_335);
      BIND(label__True_334);
            *t1402_591 = t1397();
      Goto(label__done_592_729);
      BIND(label__False_335);
            *t1402_591 = t1398();
      Goto(label__done_592_729);
      BIND(label__done_592_729);
    }
    TVARIABLE(Object, offset_323_impl);
    auto offset_323 = &offset_323_impl;
    USE(offset_323);
    *offset_323 = (*t1402_591).value();
    // ../../src/builtins/data-view.tq:771:6
    auto t1407 = [=]() {
      int31_t t1409 = 1;
      TNode<IntPtrT> t1410 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1409));
      TNode<Object> t1411 = UncheckedCast<Object>(GetArgumentValue(arguments, t1410));
      return t1411;
    };
    auto t1408 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1412_593_impl);
    auto t1412_593 = &t1412_593_impl;
    USE(t1412_593);
    {
      Label label__True_336_impl(this);
      Label* label__True_336 = &label__True_336_impl;
      USE(label__True_336);
      Label label__False_337_impl(this);
      Label* label__False_337 = &label__False_337_impl;
      USE(label__False_337);
      Label label__done_594_730_impl(this, {t1412_593});
      Label* label__done_594_730 = &label__done_594_730_impl;
      USE(label__done_594_730);
      TNode<IntPtrT> t1413 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1414 = 1;
      TNode<IntPtrT> t1415 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1414));
      TNode<BoolT> t1416 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1413, t1415));
      USE(t1416);
      Branch(t1416, label__True_336, label__False_337);
      BIND(label__True_336);
            *t1412_593 = t1407();
      Goto(label__done_594_730);
      BIND(label__False_337);
            *t1412_593 = t1408();
      Goto(label__done_594_730);
      BIND(label__done_594_730);
    }
    TVARIABLE(Object, value_324_impl);
    auto value_324 = &value_324_impl;
    USE(value_324);
    *value_324 = (*t1412_593).value();
    // ../../src/builtins/data-view.tq:774:6
    auto t1417 = [=]() {
      int31_t t1419 = 2;
      TNode<IntPtrT> t1420 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1419));
      TNode<Object> t1421 = UncheckedCast<Object>(GetArgumentValue(arguments, t1420));
      return t1421;
    };
    auto t1418 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1422_595_impl);
    auto t1422_595 = &t1422_595_impl;
    USE(t1422_595);
    {
      Label label__True_338_impl(this);
      Label* label__True_338 = &label__True_338_impl;
      USE(label__True_338);
      Label label__False_339_impl(this);
      Label* label__False_339 = &label__False_339_impl;
      USE(label__False_339);
      Label label__done_596_731_impl(this, {t1422_595});
      Label* label__done_596_731 = &label__done_596_731_impl;
      USE(label__done_596_731);
      TNode<IntPtrT> t1423 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1424 = 2;
      TNode<IntPtrT> t1425 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1424));
      TNode<BoolT> t1426 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1423, t1425));
      USE(t1426);
      Branch(t1426, label__True_338, label__False_339);
      BIND(label__True_338);
            *t1422_595 = t1417();
      Goto(label__done_596_731);
      BIND(label__False_339);
            *t1422_595 = t1418();
      Goto(label__done_596_731);
      BIND(label__done_596_731);
    }
    TVARIABLE(Object, is_little_endian_325_impl);
    auto is_little_endian_325 = &is_little_endian_325_impl;
    USE(is_little_endian_325);
    *is_little_endian_325 = (*t1422_595).value();
    // ../../src/builtins/data-view.tq:777:6
    TNode<Object> t1427 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_323).value(), (*value_324).value(), (*is_little_endian_325).value(), INT16_ELEMENTS));
    USE(t1427);
    arguments->PopAndReturn(t1427);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint16, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:782:62
  {
    // ../../src/builtins/data-view.tq:783:6
    auto t1428 = [=]() {
      int31_t t1430 = 0;
      TNode<IntPtrT> t1431 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1430));
      TNode<Object> t1432 = UncheckedCast<Object>(GetArgumentValue(arguments, t1431));
      return t1432;
    };
    auto t1429 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1433_597_impl);
    auto t1433_597 = &t1433_597_impl;
    USE(t1433_597);
    {
      Label label__True_340_impl(this);
      Label* label__True_340 = &label__True_340_impl;
      USE(label__True_340);
      Label label__False_341_impl(this);
      Label* label__False_341 = &label__False_341_impl;
      USE(label__False_341);
      Label label__done_598_732_impl(this, {t1433_597});
      Label* label__done_598_732 = &label__done_598_732_impl;
      USE(label__done_598_732);
      TNode<IntPtrT> t1434 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1435 = 0;
      TNode<IntPtrT> t1436 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1435));
      TNode<BoolT> t1437 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1434, t1436));
      USE(t1437);
      Branch(t1437, label__True_340, label__False_341);
      BIND(label__True_340);
            *t1433_597 = t1428();
      Goto(label__done_598_732);
      BIND(label__False_341);
            *t1433_597 = t1429();
      Goto(label__done_598_732);
      BIND(label__done_598_732);
    }
    TVARIABLE(Object, offset_326_impl);
    auto offset_326 = &offset_326_impl;
    USE(offset_326);
    *offset_326 = (*t1433_597).value();
    // ../../src/builtins/data-view.tq:786:6
    auto t1438 = [=]() {
      int31_t t1440 = 1;
      TNode<IntPtrT> t1441 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1440));
      TNode<Object> t1442 = UncheckedCast<Object>(GetArgumentValue(arguments, t1441));
      return t1442;
    };
    auto t1439 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1443_599_impl);
    auto t1443_599 = &t1443_599_impl;
    USE(t1443_599);
    {
      Label label__True_342_impl(this);
      Label* label__True_342 = &label__True_342_impl;
      USE(label__True_342);
      Label label__False_343_impl(this);
      Label* label__False_343 = &label__False_343_impl;
      USE(label__False_343);
      Label label__done_600_733_impl(this, {t1443_599});
      Label* label__done_600_733 = &label__done_600_733_impl;
      USE(label__done_600_733);
      TNode<IntPtrT> t1444 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1445 = 1;
      TNode<IntPtrT> t1446 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1445));
      TNode<BoolT> t1447 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1444, t1446));
      USE(t1447);
      Branch(t1447, label__True_342, label__False_343);
      BIND(label__True_342);
            *t1443_599 = t1438();
      Goto(label__done_600_733);
      BIND(label__False_343);
            *t1443_599 = t1439();
      Goto(label__done_600_733);
      BIND(label__done_600_733);
    }
    TVARIABLE(Object, value_327_impl);
    auto value_327 = &value_327_impl;
    USE(value_327);
    *value_327 = (*t1443_599).value();
    // ../../src/builtins/data-view.tq:789:6
    auto t1448 = [=]() {
      int31_t t1450 = 2;
      TNode<IntPtrT> t1451 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1450));
      TNode<Object> t1452 = UncheckedCast<Object>(GetArgumentValue(arguments, t1451));
      return t1452;
    };
    auto t1449 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1453_601_impl);
    auto t1453_601 = &t1453_601_impl;
    USE(t1453_601);
    {
      Label label__True_344_impl(this);
      Label* label__True_344 = &label__True_344_impl;
      USE(label__True_344);
      Label label__False_345_impl(this);
      Label* label__False_345 = &label__False_345_impl;
      USE(label__False_345);
      Label label__done_602_734_impl(this, {t1453_601});
      Label* label__done_602_734 = &label__done_602_734_impl;
      USE(label__done_602_734);
      TNode<IntPtrT> t1454 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1455 = 2;
      TNode<IntPtrT> t1456 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1455));
      TNode<BoolT> t1457 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1454, t1456));
      USE(t1457);
      Branch(t1457, label__True_344, label__False_345);
      BIND(label__True_344);
            *t1453_601 = t1448();
      Goto(label__done_602_734);
      BIND(label__False_345);
            *t1453_601 = t1449();
      Goto(label__done_602_734);
      BIND(label__done_602_734);
    }
    TVARIABLE(Object, is_little_endian_328_impl);
    auto is_little_endian_328 = &is_little_endian_328_impl;
    USE(is_little_endian_328);
    *is_little_endian_328 = (*t1453_601).value();
    // ../../src/builtins/data-view.tq:792:6
    TNode<Object> t1458 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_326).value(), (*value_327).value(), (*is_little_endian_328).value(), UINT16_ELEMENTS));
    USE(t1458);
    arguments->PopAndReturn(t1458);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:797:62
  {
    // ../../src/builtins/data-view.tq:798:6
    auto t1459 = [=]() {
      int31_t t1461 = 0;
      TNode<IntPtrT> t1462 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1461));
      TNode<Object> t1463 = UncheckedCast<Object>(GetArgumentValue(arguments, t1462));
      return t1463;
    };
    auto t1460 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1464_603_impl);
    auto t1464_603 = &t1464_603_impl;
    USE(t1464_603);
    {
      Label label__True_346_impl(this);
      Label* label__True_346 = &label__True_346_impl;
      USE(label__True_346);
      Label label__False_347_impl(this);
      Label* label__False_347 = &label__False_347_impl;
      USE(label__False_347);
      Label label__done_604_735_impl(this, {t1464_603});
      Label* label__done_604_735 = &label__done_604_735_impl;
      USE(label__done_604_735);
      TNode<IntPtrT> t1465 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1466 = 0;
      TNode<IntPtrT> t1467 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1466));
      TNode<BoolT> t1468 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1465, t1467));
      USE(t1468);
      Branch(t1468, label__True_346, label__False_347);
      BIND(label__True_346);
            *t1464_603 = t1459();
      Goto(label__done_604_735);
      BIND(label__False_347);
            *t1464_603 = t1460();
      Goto(label__done_604_735);
      BIND(label__done_604_735);
    }
    TVARIABLE(Object, offset_329_impl);
    auto offset_329 = &offset_329_impl;
    USE(offset_329);
    *offset_329 = (*t1464_603).value();
    // ../../src/builtins/data-view.tq:801:6
    auto t1469 = [=]() {
      int31_t t1471 = 1;
      TNode<IntPtrT> t1472 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1471));
      TNode<Object> t1473 = UncheckedCast<Object>(GetArgumentValue(arguments, t1472));
      return t1473;
    };
    auto t1470 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1474_605_impl);
    auto t1474_605 = &t1474_605_impl;
    USE(t1474_605);
    {
      Label label__True_348_impl(this);
      Label* label__True_348 = &label__True_348_impl;
      USE(label__True_348);
      Label label__False_349_impl(this);
      Label* label__False_349 = &label__False_349_impl;
      USE(label__False_349);
      Label label__done_606_736_impl(this, {t1474_605});
      Label* label__done_606_736 = &label__done_606_736_impl;
      USE(label__done_606_736);
      TNode<IntPtrT> t1475 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1476 = 1;
      TNode<IntPtrT> t1477 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1476));
      TNode<BoolT> t1478 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1475, t1477));
      USE(t1478);
      Branch(t1478, label__True_348, label__False_349);
      BIND(label__True_348);
            *t1474_605 = t1469();
      Goto(label__done_606_736);
      BIND(label__False_349);
            *t1474_605 = t1470();
      Goto(label__done_606_736);
      BIND(label__done_606_736);
    }
    TVARIABLE(Object, value_330_impl);
    auto value_330 = &value_330_impl;
    USE(value_330);
    *value_330 = (*t1474_605).value();
    // ../../src/builtins/data-view.tq:804:6
    auto t1479 = [=]() {
      int31_t t1481 = 2;
      TNode<IntPtrT> t1482 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1481));
      TNode<Object> t1483 = UncheckedCast<Object>(GetArgumentValue(arguments, t1482));
      return t1483;
    };
    auto t1480 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1484_607_impl);
    auto t1484_607 = &t1484_607_impl;
    USE(t1484_607);
    {
      Label label__True_350_impl(this);
      Label* label__True_350 = &label__True_350_impl;
      USE(label__True_350);
      Label label__False_351_impl(this);
      Label* label__False_351 = &label__False_351_impl;
      USE(label__False_351);
      Label label__done_608_737_impl(this, {t1484_607});
      Label* label__done_608_737 = &label__done_608_737_impl;
      USE(label__done_608_737);
      TNode<IntPtrT> t1485 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1486 = 2;
      TNode<IntPtrT> t1487 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1486));
      TNode<BoolT> t1488 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1485, t1487));
      USE(t1488);
      Branch(t1488, label__True_350, label__False_351);
      BIND(label__True_350);
            *t1484_607 = t1479();
      Goto(label__done_608_737);
      BIND(label__False_351);
            *t1484_607 = t1480();
      Goto(label__done_608_737);
      BIND(label__done_608_737);
    }
    TVARIABLE(Object, is_little_endian_331_impl);
    auto is_little_endian_331 = &is_little_endian_331_impl;
    USE(is_little_endian_331);
    *is_little_endian_331 = (*t1484_607).value();
    // ../../src/builtins/data-view.tq:807:6
    TNode<Object> t1489 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_329).value(), (*value_330).value(), (*is_little_endian_331).value(), INT32_ELEMENTS));
    USE(t1489);
    arguments->PopAndReturn(t1489);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:812:62
  {
    // ../../src/builtins/data-view.tq:813:6
    auto t1490 = [=]() {
      int31_t t1492 = 0;
      TNode<IntPtrT> t1493 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1492));
      TNode<Object> t1494 = UncheckedCast<Object>(GetArgumentValue(arguments, t1493));
      return t1494;
    };
    auto t1491 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1495_609_impl);
    auto t1495_609 = &t1495_609_impl;
    USE(t1495_609);
    {
      Label label__True_352_impl(this);
      Label* label__True_352 = &label__True_352_impl;
      USE(label__True_352);
      Label label__False_353_impl(this);
      Label* label__False_353 = &label__False_353_impl;
      USE(label__False_353);
      Label label__done_610_738_impl(this, {t1495_609});
      Label* label__done_610_738 = &label__done_610_738_impl;
      USE(label__done_610_738);
      TNode<IntPtrT> t1496 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1497 = 0;
      TNode<IntPtrT> t1498 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1497));
      TNode<BoolT> t1499 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1496, t1498));
      USE(t1499);
      Branch(t1499, label__True_352, label__False_353);
      BIND(label__True_352);
            *t1495_609 = t1490();
      Goto(label__done_610_738);
      BIND(label__False_353);
            *t1495_609 = t1491();
      Goto(label__done_610_738);
      BIND(label__done_610_738);
    }
    TVARIABLE(Object, offset_332_impl);
    auto offset_332 = &offset_332_impl;
    USE(offset_332);
    *offset_332 = (*t1495_609).value();
    // ../../src/builtins/data-view.tq:816:6
    auto t1500 = [=]() {
      int31_t t1502 = 1;
      TNode<IntPtrT> t1503 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1502));
      TNode<Object> t1504 = UncheckedCast<Object>(GetArgumentValue(arguments, t1503));
      return t1504;
    };
    auto t1501 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1505_611_impl);
    auto t1505_611 = &t1505_611_impl;
    USE(t1505_611);
    {
      Label label__True_354_impl(this);
      Label* label__True_354 = &label__True_354_impl;
      USE(label__True_354);
      Label label__False_355_impl(this);
      Label* label__False_355 = &label__False_355_impl;
      USE(label__False_355);
      Label label__done_612_739_impl(this, {t1505_611});
      Label* label__done_612_739 = &label__done_612_739_impl;
      USE(label__done_612_739);
      TNode<IntPtrT> t1506 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1507 = 1;
      TNode<IntPtrT> t1508 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1507));
      TNode<BoolT> t1509 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1506, t1508));
      USE(t1509);
      Branch(t1509, label__True_354, label__False_355);
      BIND(label__True_354);
            *t1505_611 = t1500();
      Goto(label__done_612_739);
      BIND(label__False_355);
            *t1505_611 = t1501();
      Goto(label__done_612_739);
      BIND(label__done_612_739);
    }
    TVARIABLE(Object, value_333_impl);
    auto value_333 = &value_333_impl;
    USE(value_333);
    *value_333 = (*t1505_611).value();
    // ../../src/builtins/data-view.tq:819:6
    auto t1510 = [=]() {
      int31_t t1512 = 2;
      TNode<IntPtrT> t1513 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1512));
      TNode<Object> t1514 = UncheckedCast<Object>(GetArgumentValue(arguments, t1513));
      return t1514;
    };
    auto t1511 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1515_613_impl);
    auto t1515_613 = &t1515_613_impl;
    USE(t1515_613);
    {
      Label label__True_356_impl(this);
      Label* label__True_356 = &label__True_356_impl;
      USE(label__True_356);
      Label label__False_357_impl(this);
      Label* label__False_357 = &label__False_357_impl;
      USE(label__False_357);
      Label label__done_614_740_impl(this, {t1515_613});
      Label* label__done_614_740 = &label__done_614_740_impl;
      USE(label__done_614_740);
      TNode<IntPtrT> t1516 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1517 = 2;
      TNode<IntPtrT> t1518 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1517));
      TNode<BoolT> t1519 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1516, t1518));
      USE(t1519);
      Branch(t1519, label__True_356, label__False_357);
      BIND(label__True_356);
            *t1515_613 = t1510();
      Goto(label__done_614_740);
      BIND(label__False_357);
            *t1515_613 = t1511();
      Goto(label__done_614_740);
      BIND(label__done_614_740);
    }
    TVARIABLE(Object, is_little_endian_334_impl);
    auto is_little_endian_334 = &is_little_endian_334_impl;
    USE(is_little_endian_334);
    *is_little_endian_334 = (*t1515_613).value();
    // ../../src/builtins/data-view.tq:822:6
    TNode<Object> t1520 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_332).value(), (*value_333).value(), (*is_little_endian_334).value(), UINT32_ELEMENTS));
    USE(t1520);
    arguments->PopAndReturn(t1520);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat32, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:827:62
  {
    // ../../src/builtins/data-view.tq:828:6
    auto t1521 = [=]() {
      int31_t t1523 = 0;
      TNode<IntPtrT> t1524 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1523));
      TNode<Object> t1525 = UncheckedCast<Object>(GetArgumentValue(arguments, t1524));
      return t1525;
    };
    auto t1522 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1526_615_impl);
    auto t1526_615 = &t1526_615_impl;
    USE(t1526_615);
    {
      Label label__True_358_impl(this);
      Label* label__True_358 = &label__True_358_impl;
      USE(label__True_358);
      Label label__False_359_impl(this);
      Label* label__False_359 = &label__False_359_impl;
      USE(label__False_359);
      Label label__done_616_741_impl(this, {t1526_615});
      Label* label__done_616_741 = &label__done_616_741_impl;
      USE(label__done_616_741);
      TNode<IntPtrT> t1527 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1528 = 0;
      TNode<IntPtrT> t1529 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1528));
      TNode<BoolT> t1530 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1527, t1529));
      USE(t1530);
      Branch(t1530, label__True_358, label__False_359);
      BIND(label__True_358);
            *t1526_615 = t1521();
      Goto(label__done_616_741);
      BIND(label__False_359);
            *t1526_615 = t1522();
      Goto(label__done_616_741);
      BIND(label__done_616_741);
    }
    TVARIABLE(Object, offset_335_impl);
    auto offset_335 = &offset_335_impl;
    USE(offset_335);
    *offset_335 = (*t1526_615).value();
    // ../../src/builtins/data-view.tq:831:6
    auto t1531 = [=]() {
      int31_t t1533 = 1;
      TNode<IntPtrT> t1534 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1533));
      TNode<Object> t1535 = UncheckedCast<Object>(GetArgumentValue(arguments, t1534));
      return t1535;
    };
    auto t1532 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1536_617_impl);
    auto t1536_617 = &t1536_617_impl;
    USE(t1536_617);
    {
      Label label__True_360_impl(this);
      Label* label__True_360 = &label__True_360_impl;
      USE(label__True_360);
      Label label__False_361_impl(this);
      Label* label__False_361 = &label__False_361_impl;
      USE(label__False_361);
      Label label__done_618_742_impl(this, {t1536_617});
      Label* label__done_618_742 = &label__done_618_742_impl;
      USE(label__done_618_742);
      TNode<IntPtrT> t1537 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1538 = 1;
      TNode<IntPtrT> t1539 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1538));
      TNode<BoolT> t1540 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1537, t1539));
      USE(t1540);
      Branch(t1540, label__True_360, label__False_361);
      BIND(label__True_360);
            *t1536_617 = t1531();
      Goto(label__done_618_742);
      BIND(label__False_361);
            *t1536_617 = t1532();
      Goto(label__done_618_742);
      BIND(label__done_618_742);
    }
    TVARIABLE(Object, value_336_impl);
    auto value_336 = &value_336_impl;
    USE(value_336);
    *value_336 = (*t1536_617).value();
    // ../../src/builtins/data-view.tq:834:6
    auto t1541 = [=]() {
      int31_t t1543 = 2;
      TNode<IntPtrT> t1544 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1543));
      TNode<Object> t1545 = UncheckedCast<Object>(GetArgumentValue(arguments, t1544));
      return t1545;
    };
    auto t1542 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1546_619_impl);
    auto t1546_619 = &t1546_619_impl;
    USE(t1546_619);
    {
      Label label__True_362_impl(this);
      Label* label__True_362 = &label__True_362_impl;
      USE(label__True_362);
      Label label__False_363_impl(this);
      Label* label__False_363 = &label__False_363_impl;
      USE(label__False_363);
      Label label__done_620_743_impl(this, {t1546_619});
      Label* label__done_620_743 = &label__done_620_743_impl;
      USE(label__done_620_743);
      TNode<IntPtrT> t1547 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1548 = 2;
      TNode<IntPtrT> t1549 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1548));
      TNode<BoolT> t1550 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1547, t1549));
      USE(t1550);
      Branch(t1550, label__True_362, label__False_363);
      BIND(label__True_362);
            *t1546_619 = t1541();
      Goto(label__done_620_743);
      BIND(label__False_363);
            *t1546_619 = t1542();
      Goto(label__done_620_743);
      BIND(label__done_620_743);
    }
    TVARIABLE(Object, is_little_endian_337_impl);
    auto is_little_endian_337 = &is_little_endian_337_impl;
    USE(is_little_endian_337);
    *is_little_endian_337 = (*t1546_619).value();
    // ../../src/builtins/data-view.tq:837:6
    TNode<Object> t1551 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_335).value(), (*value_336).value(), (*is_little_endian_337).value(), FLOAT32_ELEMENTS));
    USE(t1551);
    arguments->PopAndReturn(t1551);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:842:62
  {
    // ../../src/builtins/data-view.tq:843:6
    auto t1552 = [=]() {
      int31_t t1554 = 0;
      TNode<IntPtrT> t1555 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1554));
      TNode<Object> t1556 = UncheckedCast<Object>(GetArgumentValue(arguments, t1555));
      return t1556;
    };
    auto t1553 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1557_621_impl);
    auto t1557_621 = &t1557_621_impl;
    USE(t1557_621);
    {
      Label label__True_364_impl(this);
      Label* label__True_364 = &label__True_364_impl;
      USE(label__True_364);
      Label label__False_365_impl(this);
      Label* label__False_365 = &label__False_365_impl;
      USE(label__False_365);
      Label label__done_622_744_impl(this, {t1557_621});
      Label* label__done_622_744 = &label__done_622_744_impl;
      USE(label__done_622_744);
      TNode<IntPtrT> t1558 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1559 = 0;
      TNode<IntPtrT> t1560 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1559));
      TNode<BoolT> t1561 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1558, t1560));
      USE(t1561);
      Branch(t1561, label__True_364, label__False_365);
      BIND(label__True_364);
            *t1557_621 = t1552();
      Goto(label__done_622_744);
      BIND(label__False_365);
            *t1557_621 = t1553();
      Goto(label__done_622_744);
      BIND(label__done_622_744);
    }
    TVARIABLE(Object, offset_338_impl);
    auto offset_338 = &offset_338_impl;
    USE(offset_338);
    *offset_338 = (*t1557_621).value();
    // ../../src/builtins/data-view.tq:846:6
    auto t1562 = [=]() {
      int31_t t1564 = 1;
      TNode<IntPtrT> t1565 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1564));
      TNode<Object> t1566 = UncheckedCast<Object>(GetArgumentValue(arguments, t1565));
      return t1566;
    };
    auto t1563 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1567_623_impl);
    auto t1567_623 = &t1567_623_impl;
    USE(t1567_623);
    {
      Label label__True_366_impl(this);
      Label* label__True_366 = &label__True_366_impl;
      USE(label__True_366);
      Label label__False_367_impl(this);
      Label* label__False_367 = &label__False_367_impl;
      USE(label__False_367);
      Label label__done_624_745_impl(this, {t1567_623});
      Label* label__done_624_745 = &label__done_624_745_impl;
      USE(label__done_624_745);
      TNode<IntPtrT> t1568 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1569 = 1;
      TNode<IntPtrT> t1570 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1569));
      TNode<BoolT> t1571 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1568, t1570));
      USE(t1571);
      Branch(t1571, label__True_366, label__False_367);
      BIND(label__True_366);
            *t1567_623 = t1562();
      Goto(label__done_624_745);
      BIND(label__False_367);
            *t1567_623 = t1563();
      Goto(label__done_624_745);
      BIND(label__done_624_745);
    }
    TVARIABLE(Object, value_339_impl);
    auto value_339 = &value_339_impl;
    USE(value_339);
    *value_339 = (*t1567_623).value();
    // ../../src/builtins/data-view.tq:849:6
    auto t1572 = [=]() {
      int31_t t1574 = 2;
      TNode<IntPtrT> t1575 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1574));
      TNode<Object> t1576 = UncheckedCast<Object>(GetArgumentValue(arguments, t1575));
      return t1576;
    };
    auto t1573 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1577_625_impl);
    auto t1577_625 = &t1577_625_impl;
    USE(t1577_625);
    {
      Label label__True_368_impl(this);
      Label* label__True_368 = &label__True_368_impl;
      USE(label__True_368);
      Label label__False_369_impl(this);
      Label* label__False_369 = &label__False_369_impl;
      USE(label__False_369);
      Label label__done_626_746_impl(this, {t1577_625});
      Label* label__done_626_746 = &label__done_626_746_impl;
      USE(label__done_626_746);
      TNode<IntPtrT> t1578 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1579 = 2;
      TNode<IntPtrT> t1580 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1579));
      TNode<BoolT> t1581 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1578, t1580));
      USE(t1581);
      Branch(t1581, label__True_368, label__False_369);
      BIND(label__True_368);
            *t1577_625 = t1572();
      Goto(label__done_626_746);
      BIND(label__False_369);
            *t1577_625 = t1573();
      Goto(label__done_626_746);
      BIND(label__done_626_746);
    }
    TVARIABLE(Object, is_little_endian_340_impl);
    auto is_little_endian_340 = &is_little_endian_340_impl;
    USE(is_little_endian_340);
    *is_little_endian_340 = (*t1577_625).value();
    // ../../src/builtins/data-view.tq:852:6
    TNode<Object> t1582 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_338).value(), (*value_339).value(), (*is_little_endian_340).value(), FLOAT64_ELEMENTS));
    USE(t1582);
    arguments->PopAndReturn(t1582);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigInt64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:857:62
  {
    // ../../src/builtins/data-view.tq:858:6
    auto t1583 = [=]() {
      int31_t t1585 = 0;
      TNode<IntPtrT> t1586 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1585));
      TNode<Object> t1587 = UncheckedCast<Object>(GetArgumentValue(arguments, t1586));
      return t1587;
    };
    auto t1584 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1588_627_impl);
    auto t1588_627 = &t1588_627_impl;
    USE(t1588_627);
    {
      Label label__True_370_impl(this);
      Label* label__True_370 = &label__True_370_impl;
      USE(label__True_370);
      Label label__False_371_impl(this);
      Label* label__False_371 = &label__False_371_impl;
      USE(label__False_371);
      Label label__done_628_747_impl(this, {t1588_627});
      Label* label__done_628_747 = &label__done_628_747_impl;
      USE(label__done_628_747);
      TNode<IntPtrT> t1589 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1590 = 0;
      TNode<IntPtrT> t1591 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1590));
      TNode<BoolT> t1592 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1589, t1591));
      USE(t1592);
      Branch(t1592, label__True_370, label__False_371);
      BIND(label__True_370);
            *t1588_627 = t1583();
      Goto(label__done_628_747);
      BIND(label__False_371);
            *t1588_627 = t1584();
      Goto(label__done_628_747);
      BIND(label__done_628_747);
    }
    TVARIABLE(Object, offset_341_impl);
    auto offset_341 = &offset_341_impl;
    USE(offset_341);
    *offset_341 = (*t1588_627).value();
    // ../../src/builtins/data-view.tq:861:6
    auto t1593 = [=]() {
      int31_t t1595 = 1;
      TNode<IntPtrT> t1596 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1595));
      TNode<Object> t1597 = UncheckedCast<Object>(GetArgumentValue(arguments, t1596));
      return t1597;
    };
    auto t1594 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1598_629_impl);
    auto t1598_629 = &t1598_629_impl;
    USE(t1598_629);
    {
      Label label__True_372_impl(this);
      Label* label__True_372 = &label__True_372_impl;
      USE(label__True_372);
      Label label__False_373_impl(this);
      Label* label__False_373 = &label__False_373_impl;
      USE(label__False_373);
      Label label__done_630_748_impl(this, {t1598_629});
      Label* label__done_630_748 = &label__done_630_748_impl;
      USE(label__done_630_748);
      TNode<IntPtrT> t1599 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1600 = 1;
      TNode<IntPtrT> t1601 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1600));
      TNode<BoolT> t1602 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1599, t1601));
      USE(t1602);
      Branch(t1602, label__True_372, label__False_373);
      BIND(label__True_372);
            *t1598_629 = t1593();
      Goto(label__done_630_748);
      BIND(label__False_373);
            *t1598_629 = t1594();
      Goto(label__done_630_748);
      BIND(label__done_630_748);
    }
    TVARIABLE(Object, value_342_impl);
    auto value_342 = &value_342_impl;
    USE(value_342);
    *value_342 = (*t1598_629).value();
    // ../../src/builtins/data-view.tq:864:6
    auto t1603 = [=]() {
      int31_t t1605 = 2;
      TNode<IntPtrT> t1606 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1605));
      TNode<Object> t1607 = UncheckedCast<Object>(GetArgumentValue(arguments, t1606));
      return t1607;
    };
    auto t1604 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1608_631_impl);
    auto t1608_631 = &t1608_631_impl;
    USE(t1608_631);
    {
      Label label__True_374_impl(this);
      Label* label__True_374 = &label__True_374_impl;
      USE(label__True_374);
      Label label__False_375_impl(this);
      Label* label__False_375 = &label__False_375_impl;
      USE(label__False_375);
      Label label__done_632_749_impl(this, {t1608_631});
      Label* label__done_632_749 = &label__done_632_749_impl;
      USE(label__done_632_749);
      TNode<IntPtrT> t1609 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1610 = 2;
      TNode<IntPtrT> t1611 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1610));
      TNode<BoolT> t1612 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1609, t1611));
      USE(t1612);
      Branch(t1612, label__True_374, label__False_375);
      BIND(label__True_374);
            *t1608_631 = t1603();
      Goto(label__done_632_749);
      BIND(label__False_375);
            *t1608_631 = t1604();
      Goto(label__done_632_749);
      BIND(label__done_632_749);
    }
    TVARIABLE(Object, is_little_endian_343_impl);
    auto is_little_endian_343 = &is_little_endian_343_impl;
    USE(is_little_endian_343);
    *is_little_endian_343 = (*t1608_631).value();
    // ../../src/builtins/data-view.tq:867:6
    TNode<Object> t1613 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_341).value(), (*value_342).value(), (*is_little_endian_343).value(), BIGINT64_ELEMENTS));
    USE(t1613);
    arguments->PopAndReturn(t1613);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigUint64, DataViewBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/data-view.tq:872:62
  {
    // ../../src/builtins/data-view.tq:873:6
    auto t1614 = [=]() {
      int31_t t1616 = 0;
      TNode<IntPtrT> t1617 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1616));
      TNode<Object> t1618 = UncheckedCast<Object>(GetArgumentValue(arguments, t1617));
      return t1618;
    };
    auto t1615 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1619_633_impl);
    auto t1619_633 = &t1619_633_impl;
    USE(t1619_633);
    {
      Label label__True_376_impl(this);
      Label* label__True_376 = &label__True_376_impl;
      USE(label__True_376);
      Label label__False_377_impl(this);
      Label* label__False_377 = &label__False_377_impl;
      USE(label__False_377);
      Label label__done_634_750_impl(this, {t1619_633});
      Label* label__done_634_750 = &label__done_634_750_impl;
      USE(label__done_634_750);
      TNode<IntPtrT> t1620 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1621 = 0;
      TNode<IntPtrT> t1622 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1621));
      TNode<BoolT> t1623 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1620, t1622));
      USE(t1623);
      Branch(t1623, label__True_376, label__False_377);
      BIND(label__True_376);
            *t1619_633 = t1614();
      Goto(label__done_634_750);
      BIND(label__False_377);
            *t1619_633 = t1615();
      Goto(label__done_634_750);
      BIND(label__done_634_750);
    }
    TVARIABLE(Object, offset_344_impl);
    auto offset_344 = &offset_344_impl;
    USE(offset_344);
    *offset_344 = (*t1619_633).value();
    // ../../src/builtins/data-view.tq:876:6
    auto t1624 = [=]() {
      int31_t t1626 = 1;
      TNode<IntPtrT> t1627 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1626));
      TNode<Object> t1628 = UncheckedCast<Object>(GetArgumentValue(arguments, t1627));
      return t1628;
    };
    auto t1625 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1629_635_impl);
    auto t1629_635 = &t1629_635_impl;
    USE(t1629_635);
    {
      Label label__True_378_impl(this);
      Label* label__True_378 = &label__True_378_impl;
      USE(label__True_378);
      Label label__False_379_impl(this);
      Label* label__False_379 = &label__False_379_impl;
      USE(label__False_379);
      Label label__done_636_751_impl(this, {t1629_635});
      Label* label__done_636_751 = &label__done_636_751_impl;
      USE(label__done_636_751);
      TNode<IntPtrT> t1630 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1631 = 1;
      TNode<IntPtrT> t1632 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1631));
      TNode<BoolT> t1633 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1630, t1632));
      USE(t1633);
      Branch(t1633, label__True_378, label__False_379);
      BIND(label__True_378);
            *t1629_635 = t1624();
      Goto(label__done_636_751);
      BIND(label__False_379);
            *t1629_635 = t1625();
      Goto(label__done_636_751);
      BIND(label__done_636_751);
    }
    TVARIABLE(Object, value_345_impl);
    auto value_345 = &value_345_impl;
    USE(value_345);
    *value_345 = (*t1629_635).value();
    // ../../src/builtins/data-view.tq:879:6
    auto t1634 = [=]() {
      int31_t t1636 = 2;
      TNode<IntPtrT> t1637 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1636));
      TNode<Object> t1638 = UncheckedCast<Object>(GetArgumentValue(arguments, t1637));
      return t1638;
    };
    auto t1635 = [=]() {
      return Undefined();
    };
    TVARIABLE(Object, t1639_637_impl);
    auto t1639_637 = &t1639_637_impl;
    USE(t1639_637);
    {
      Label label__True_380_impl(this);
      Label* label__True_380 = &label__True_380_impl;
      USE(label__True_380);
      Label label__False_381_impl(this);
      Label* label__False_381 = &label__False_381_impl;
      USE(label__False_381);
      Label label__done_638_752_impl(this, {t1639_637});
      Label* label__done_638_752 = &label__done_638_752_impl;
      USE(label__done_638_752);
      TNode<IntPtrT> t1640 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t1641 = 2;
      TNode<IntPtrT> t1642 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1641));
      TNode<BoolT> t1643 = UncheckedCast<BoolT>(IntPtrGreaterThan(t1640, t1642));
      USE(t1643);
      Branch(t1643, label__True_380, label__False_381);
      BIND(label__True_380);
            *t1639_637 = t1634();
      Goto(label__done_638_752);
      BIND(label__False_381);
            *t1639_637 = t1635();
      Goto(label__done_638_752);
      BIND(label__done_638_752);
    }
    TVARIABLE(Object, is_little_endian_346_impl);
    auto is_little_endian_346 = &is_little_endian_346_impl;
    USE(is_little_endian_346);
    *is_little_endian_346 = (*t1639_637).value();
    // ../../src/builtins/data-view.tq:882:6
    TNode<Object> t1644 = UncheckedCast<Object>(DataViewSet(p_context, p_receiver, (*offset_344).value(), (*value_345).value(), (*is_little_endian_346).value(), BIGUINT64_ELEMENTS));
    USE(t1644);
    arguments->PopAndReturn(t1644);
  }
}

}  // namepsace internal
}  // namespace v8

