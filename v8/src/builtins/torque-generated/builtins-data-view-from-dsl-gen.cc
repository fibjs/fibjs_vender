#include "src/builtins/builtins-data-view-gen.h"
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
  TVARIABLE(String, _return_172_impl);
  auto _return_172 = &_return_172_impl;
  USE(_return_172);
  Label label_macro_end_1155_impl(this, {_return_172});
  Label* label_macro_end_1155 = &label_macro_end_1155_impl;
  USE(label_macro_end_1155);
  // ../../src/builtins/data-view.tq:16:76
  {
    // ../../src/builtins/data-view.tq:17:5
    {
      bool t645 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t645));
      if ((implicit_cast<bool>(t645))) {
        // ../../src/builtins/data-view.tq:17:43
        {
          // ../../src/builtins/data-view.tq:18:7
          const char* t646 = "DataView.prototype.getUint8";
          TNode<String> t647 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t646)));
          *_return_172 = implicit_cast<TNode<String>>(t647);
          Goto(label_macro_end_1155);
        }
      } else {
        // ../../src/builtins/data-view.tq:19:12
        {
          bool t648 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t648));
          if ((implicit_cast<bool>(t648))) {
            // ../../src/builtins/data-view.tq:19:49
            {
              // ../../src/builtins/data-view.tq:20:7
              const char* t649 = "DataView.prototype.getInt8";
              TNode<String> t650 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t649)));
              *_return_172 = implicit_cast<TNode<String>>(t650);
              Goto(label_macro_end_1155);
            }
          } else {
            // ../../src/builtins/data-view.tq:21:12
            {
              bool t651 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t651));
              if ((implicit_cast<bool>(t651))) {
                // ../../src/builtins/data-view.tq:21:51
                {
                  // ../../src/builtins/data-view.tq:22:7
                  const char* t652 = "DataView.prototype.getUint16";
                  TNode<String> t653 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t652)));
                  *_return_172 = implicit_cast<TNode<String>>(t653);
                  Goto(label_macro_end_1155);
                }
              } else {
                // ../../src/builtins/data-view.tq:23:12
                {
                  bool t654 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t654));
                  if ((implicit_cast<bool>(t654))) {
                    // ../../src/builtins/data-view.tq:23:50
                    {
                      // ../../src/builtins/data-view.tq:24:7
                      const char* t655 = "DataView.prototype.getInt16";
                      TNode<String> t656 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t655)));
                      *_return_172 = implicit_cast<TNode<String>>(t656);
                      Goto(label_macro_end_1155);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:25:12
                    {
                      bool t657 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t657));
                      if ((implicit_cast<bool>(t657))) {
                        // ../../src/builtins/data-view.tq:25:51
                        {
                          // ../../src/builtins/data-view.tq:26:7
                          const char* t658 = "DataView.prototype.getUint32";
                          TNode<String> t659 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t658)));
                          *_return_172 = implicit_cast<TNode<String>>(t659);
                          Goto(label_macro_end_1155);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:27:12
                        {
                          bool t660 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t660));
                          if ((implicit_cast<bool>(t660))) {
                            // ../../src/builtins/data-view.tq:27:50
                            {
                              // ../../src/builtins/data-view.tq:28:7
                              const char* t661 = "DataView.prototype.getInt32";
                              TNode<String> t662 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t661)));
                              *_return_172 = implicit_cast<TNode<String>>(t662);
                              Goto(label_macro_end_1155);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:29:12
                            {
                              bool t663 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t663));
                              if ((implicit_cast<bool>(t663))) {
                                // ../../src/builtins/data-view.tq:29:52
                                {
                                  // ../../src/builtins/data-view.tq:30:7
                                  const char* t664 = "DataView.prototype.getFloat32";
                                  TNode<String> t665 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t664)));
                                  *_return_172 = implicit_cast<TNode<String>>(t665);
                                  Goto(label_macro_end_1155);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:31:12
                                {
                                  bool t666 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t666));
                                  if ((implicit_cast<bool>(t666))) {
                                    // ../../src/builtins/data-view.tq:31:52
                                    {
                                      // ../../src/builtins/data-view.tq:32:7
                                      const char* t667 = "DataView.prototype.getFloat64";
                                      TNode<String> t668 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t667)));
                                      *_return_172 = implicit_cast<TNode<String>>(t668);
                                      Goto(label_macro_end_1155);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:33:12
                                    {
                                      bool t669 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t669));
                                      if ((implicit_cast<bool>(t669))) {
                                        // ../../src/builtins/data-view.tq:33:53
                                        {
                                          // ../../src/builtins/data-view.tq:34:7
                                          const char* t670 = "DataView.prototype.getBigInt64";
                                          TNode<String> t671 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t670)));
                                          *_return_172 = implicit_cast<TNode<String>>(t671);
                                          Goto(label_macro_end_1155);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:35:12
                                        {
                                          bool t672 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t672));
                                          if ((implicit_cast<bool>(t672))) {
                                            // ../../src/builtins/data-view.tq:35:54
                                            {
                                              // ../../src/builtins/data-view.tq:36:7
                                              const char* t673 = "DataView.prototype.getBigUint64";
                                              TNode<String> t674 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t673)));
                                              *_return_172 = implicit_cast<TNode<String>>(t674);
                                              Goto(label_macro_end_1155);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:37:12
                                            {
                                              // ../../src/builtins/data-view.tq:38:7
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
  BIND(label_macro_end_1155);
  return implicit_cast<TNode<String>>((*_return_172).value());
}

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewSetterNameString(ElementsKind p_kind) {
  TVARIABLE(String, _return_173_impl);
  auto _return_173 = &_return_173_impl;
  USE(_return_173);
  Label label_macro_end_1156_impl(this, {_return_173});
  Label* label_macro_end_1156 = &label_macro_end_1156_impl;
  USE(label_macro_end_1156);
  // ../../src/builtins/data-view.tq:42:76
  {
    // ../../src/builtins/data-view.tq:43:5
    {
      bool t675 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t675));
      if ((implicit_cast<bool>(t675))) {
        // ../../src/builtins/data-view.tq:43:43
        {
          // ../../src/builtins/data-view.tq:44:7
          const char* t676 = "DataView.prototype.setUint8";
          TNode<String> t677 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t676)));
          *_return_173 = implicit_cast<TNode<String>>(t677);
          Goto(label_macro_end_1156);
        }
      } else {
        // ../../src/builtins/data-view.tq:45:12
        {
          bool t678 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t678));
          if ((implicit_cast<bool>(t678))) {
            // ../../src/builtins/data-view.tq:45:49
            {
              // ../../src/builtins/data-view.tq:46:7
              const char* t679 = "DataView.prototype.setInt8";
              TNode<String> t680 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t679)));
              *_return_173 = implicit_cast<TNode<String>>(t680);
              Goto(label_macro_end_1156);
            }
          } else {
            // ../../src/builtins/data-view.tq:47:12
            {
              bool t681 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t681));
              if ((implicit_cast<bool>(t681))) {
                // ../../src/builtins/data-view.tq:47:51
                {
                  // ../../src/builtins/data-view.tq:48:7
                  const char* t682 = "DataView.prototype.setUint16";
                  TNode<String> t683 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t682)));
                  *_return_173 = implicit_cast<TNode<String>>(t683);
                  Goto(label_macro_end_1156);
                }
              } else {
                // ../../src/builtins/data-view.tq:49:12
                {
                  bool t684 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t684));
                  if ((implicit_cast<bool>(t684))) {
                    // ../../src/builtins/data-view.tq:49:50
                    {
                      // ../../src/builtins/data-view.tq:50:7
                      const char* t685 = "DataView.prototype.setInt16";
                      TNode<String> t686 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t685)));
                      *_return_173 = implicit_cast<TNode<String>>(t686);
                      Goto(label_macro_end_1156);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:51:12
                    {
                      bool t687 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t687));
                      if ((implicit_cast<bool>(t687))) {
                        // ../../src/builtins/data-view.tq:51:51
                        {
                          // ../../src/builtins/data-view.tq:52:7
                          const char* t688 = "DataView.prototype.setUint32";
                          TNode<String> t689 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t688)));
                          *_return_173 = implicit_cast<TNode<String>>(t689);
                          Goto(label_macro_end_1156);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:53:12
                        {
                          bool t690 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t690));
                          if ((implicit_cast<bool>(t690))) {
                            // ../../src/builtins/data-view.tq:53:50
                            {
                              // ../../src/builtins/data-view.tq:54:7
                              const char* t691 = "DataView.prototype.setInt32";
                              TNode<String> t692 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t691)));
                              *_return_173 = implicit_cast<TNode<String>>(t692);
                              Goto(label_macro_end_1156);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:55:12
                            {
                              bool t693 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t693));
                              if ((implicit_cast<bool>(t693))) {
                                // ../../src/builtins/data-view.tq:55:52
                                {
                                  // ../../src/builtins/data-view.tq:56:7
                                  const char* t694 = "DataView.prototype.setFloat32";
                                  TNode<String> t695 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t694)));
                                  *_return_173 = implicit_cast<TNode<String>>(t695);
                                  Goto(label_macro_end_1156);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:57:12
                                {
                                  bool t696 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t696));
                                  if ((implicit_cast<bool>(t696))) {
                                    // ../../src/builtins/data-view.tq:57:52
                                    {
                                      // ../../src/builtins/data-view.tq:58:7
                                      const char* t697 = "DataView.prototype.setFloat64";
                                      TNode<String> t698 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t697)));
                                      *_return_173 = implicit_cast<TNode<String>>(t698);
                                      Goto(label_macro_end_1156);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:59:12
                                    {
                                      bool t699 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t699));
                                      if ((implicit_cast<bool>(t699))) {
                                        // ../../src/builtins/data-view.tq:59:53
                                        {
                                          // ../../src/builtins/data-view.tq:60:7
                                          const char* t700 = "DataView.prototype.setBigInt64";
                                          TNode<String> t701 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t700)));
                                          *_return_173 = implicit_cast<TNode<String>>(t701);
                                          Goto(label_macro_end_1156);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:61:12
                                        {
                                          bool t702 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t702));
                                          if ((implicit_cast<bool>(t702))) {
                                            // ../../src/builtins/data-view.tq:61:54
                                            {
                                              // ../../src/builtins/data-view.tq:62:7
                                              const char* t703 = "DataView.prototype.setBigUint64";
                                              TNode<String> t704 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t703)));
                                              *_return_173 = implicit_cast<TNode<String>>(t704);
                                              Goto(label_macro_end_1156);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:63:12
                                            {
                                              // ../../src/builtins/data-view.tq:64:7
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
  BIND(label_macro_end_1156);
  return implicit_cast<TNode<String>>((*_return_173).value());
}

compiler::TNode<BoolT> DataViewBuiltinsFromDSLAssembler::WasNeutered(TNode<JSArrayBufferView> p_view) {
  TVARIABLE(BoolT, _return_174_impl);
  auto _return_174 = &_return_174_impl;
  USE(_return_174);
  Label label_macro_end_1157_impl(this, {_return_174});
  Label* label_macro_end_1157 = &label_macro_end_1157_impl;
  USE(label_macro_end_1157);
  // ../../src/builtins/data-view.tq:68:52
  {
    // ../../src/builtins/data-view.tq:69:5
    TNode<JSArrayBuffer> t705 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>(p_view)));
    TNode<BoolT> t706 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>(t705)));
    USE(implicit_cast<TNode<BoolT>>(t706));
    *_return_174 = implicit_cast<TNode<BoolT>>(t706);
    Goto(label_macro_end_1157);
  }
  BIND(label_macro_end_1157);
  return implicit_cast<TNode<BoolT>>((*_return_174).value());
}

compiler::TNode<JSDataView> DataViewBuiltinsFromDSLAssembler::ValidateDataView(TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method) {
  TVARIABLE(JSDataView, _return_175_impl);
  auto _return_175 = &_return_175_impl;
  USE(_return_175);
  Label label_macro_end_1158_impl(this, {_return_175});
  Label* label_macro_end_1158 = &label_macro_end_1158_impl;
  USE(label_macro_end_1158);
  // ../../src/builtins/data-view.tq:73:46
  {
    // ../../src/builtins/data-view.tq:74:5
    {
      Label label_try_done_716_1159_impl(this);
      Label* label_try_done_716_1159 = &label_try_done_716_1159_impl;
      USE(label_try_done_716_1159);
      Label label_CastError_259_impl(this);
      Label* label_CastError_259 = &label_CastError_259_impl;
      USE(label_CastError_259);
      Label label_try_begin_717_1160_impl(this);
      Label* label_try_begin_717_1160 = &label_try_begin_717_1160_impl;
      USE(label_try_begin_717_1160);
      Goto(label_try_begin_717_1160);
      if (label_try_begin_717_1160->is_used())
      {
        BIND(label_try_begin_717_1160);
        // ../../src/builtins/data-view.tq:74:9
        {
          // ../../src/builtins/data-view.tq:75:7
          TNode<JSDataView> t707 = UncheckedCast<JSDataView>(cast12ATJSDataView(implicit_cast<TNode<Object>>(p_o), label_CastError_259));
          USE(implicit_cast<TNode<JSDataView>>(t707));
          *_return_175 = implicit_cast<TNode<JSDataView>>(t707);
          Goto(label_macro_end_1158);
        }
      }
      if (label_CastError_259->is_used())
      {
        BIND(label_CastError_259);
        // ../../src/builtins/data-view.tq:77:21
        {
          // ../../src/builtins/data-view.tq:78:7
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kIncompatibleMethodReceiver), implicit_cast<TNode<Object>>(p_method));
        }
      }
    }
  }
  BIND(label_macro_end_1158);
  return implicit_cast<TNode<JSDataView>>((*_return_175).value());
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
  // ../../src/builtins/data-view.tq:84:72
  {
    // ../../src/builtins/data-view.tq:85:5
    const char* t708 = "get DataView.prototype.buffer";
    TNode<String> t709 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t708)));
    TNode<JSDataView> t710 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t709)));
    USE(implicit_cast<TNode<JSDataView>>(t710));
    TVARIABLE(JSDataView, data_view_176_impl);
    auto data_view_176 = &data_view_176_impl;
    USE(data_view_176);
    *data_view_176 = implicit_cast<TNode<JSDataView>>(t710);
    // ../../src/builtins/data-view.tq:87:5
    TNode<JSArrayBuffer> t711 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*data_view_176).value())));
    arguments->PopAndReturn(implicit_cast<TNode<JSArrayBuffer>>(t711));
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
  // ../../src/builtins/data-view.tq:92:65
  {
    // ../../src/builtins/data-view.tq:93:5
    const char* t712 = "get DataView.prototype.byte_length";
    TNode<String> t713 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t712)));
    TNode<JSDataView> t714 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t713)));
    USE(implicit_cast<TNode<JSDataView>>(t714));
    TVARIABLE(JSDataView, data_view_177_impl);
    auto data_view_177 = &data_view_177_impl;
    USE(data_view_177);
    *data_view_177 = implicit_cast<TNode<JSDataView>>(t714);
    // ../../src/builtins/data-view.tq:95:5
    {
      Label label__True_260_impl(this);
      Label* label__True_260 = &label__True_260_impl;
      USE(label__True_260);
      Label label__False_261_impl(this, {});
      Label* label__False_261 = &label__False_261_impl;
      USE(label__False_261);
      TNode<BoolT> t715 = UncheckedCast<BoolT>(WasNeutered(implicit_cast<TNode<JSArrayBufferView>>((*data_view_177).value())));
      USE(implicit_cast<TNode<BoolT>>(t715));
      Branch(implicit_cast<TNode<BoolT>>(t715), label__True_260, label__False_261);
      if (label__True_260->is_used())
      {
        BIND(label__True_260);
        // ../../src/builtins/data-view.tq:95:33
        {
          // ../../src/builtins/data-view.tq:98:7
          int31_t t716 = 0;
          TNode<Number> t717 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t716)));
          arguments->PopAndReturn(implicit_cast<TNode<Number>>(t717));
        }
      }
      BIND(label__False_261);
    }
    // ../../src/builtins/data-view.tq:100:5
    TNode<Number> t718 = UncheckedCast<Number>(LoadDataViewByteLength(implicit_cast<TNode<JSDataView>>((*data_view_177).value())));
    arguments->PopAndReturn(implicit_cast<TNode<Number>>(t718));
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
  // ../../src/builtins/data-view.tq:105:65
  {
    // ../../src/builtins/data-view.tq:106:5
    const char* t719 = "get DataView.prototype.byte_offset";
    TNode<String> t720 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t719)));
    TNode<JSDataView> t721 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t720)));
    USE(implicit_cast<TNode<JSDataView>>(t721));
    TVARIABLE(JSDataView, data_view_178_impl);
    auto data_view_178 = &data_view_178_impl;
    USE(data_view_178);
    *data_view_178 = implicit_cast<TNode<JSDataView>>(t721);
    // ../../src/builtins/data-view.tq:108:5
    {
      Label label__True_262_impl(this);
      Label* label__True_262 = &label__True_262_impl;
      USE(label__True_262);
      Label label__False_263_impl(this, {});
      Label* label__False_263 = &label__False_263_impl;
      USE(label__False_263);
      TNode<BoolT> t722 = UncheckedCast<BoolT>(WasNeutered(implicit_cast<TNode<JSArrayBufferView>>((*data_view_178).value())));
      USE(implicit_cast<TNode<BoolT>>(t722));
      Branch(implicit_cast<TNode<BoolT>>(t722), label__True_262, label__False_263);
      if (label__True_262->is_used())
      {
        BIND(label__True_262);
        // ../../src/builtins/data-view.tq:108:33
        {
          // ../../src/builtins/data-view.tq:111:7
          int31_t t723 = 0;
          TNode<Number> t724 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t723)));
          arguments->PopAndReturn(implicit_cast<TNode<Number>>(t724));
        }
      }
      BIND(label__False_263);
    }
    // ../../src/builtins/data-view.tq:113:5
    TNode<Number> t725 = UncheckedCast<Number>(LoadDataViewByteOffset(implicit_cast<TNode<JSDataView>>((*data_view_178).value())));
    arguments->PopAndReturn(implicit_cast<TNode<Number>>(t725));
  }
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataView8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, bool p_signed) {
  TVARIABLE(Smi, _return_179_impl);
  auto _return_179 = &_return_179_impl;
  USE(_return_179);
  Label label_macro_end_1161_impl(this, {_return_179});
  Label* label_macro_end_1161 = &label_macro_end_1161_impl;
  USE(label_macro_end_1161);
  // ../../src/builtins/data-view.tq:127:56
  {
    // ../../src/builtins/data-view.tq:128:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../../src/builtins/data-view.tq:128:27
        {
          // ../../src/builtins/data-view.tq:129:7
          TNode<RawPtrT> t726 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
          TNode<Int32T> t727 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>(t726), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Int32T>>(t727));
          TNode<Smi> t728 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Int32T>>(t727)));
          USE(implicit_cast<TNode<Smi>>(t728));
          *_return_179 = implicit_cast<TNode<Smi>>(t728);
          Goto(label_macro_end_1161);
        }
      } else {
        // ../../src/builtins/data-view.tq:130:12
        {
          // ../../src/builtins/data-view.tq:131:7
          TNode<RawPtrT> t729 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
          TNode<Uint32T> t730 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>(t729), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Uint32T>>(t730));
          TNode<Smi> t731 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Uint32T>>(t730)));
          USE(implicit_cast<TNode<Smi>>(t731));
          *_return_179 = implicit_cast<TNode<Smi>>(t731);
          Goto(label_macro_end_1161);
        }
      }
    }
  }
  BIND(label_macro_end_1161);
  return implicit_cast<TNode<Smi>>((*_return_179).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(Number, _return_180_impl);
  auto _return_180 = &_return_180_impl;
  USE(_return_180);
  Label label_macro_end_1162_impl(this, {_return_180});
  Label* label_macro_end_1162 = &label_macro_end_1162_impl;
  USE(label_macro_end_1162);
  // ../../src/builtins/data-view.tq:137:56
  {
    // ../../src/builtins/data-view.tq:138:5
    TNode<RawPtrT> t732 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_181_impl);
    auto data_pointer_181 = &data_pointer_181_impl;
    USE(data_pointer_181);
    *data_pointer_181 = implicit_cast<TNode<RawPtrT>>(t732);
    // ../../src/builtins/data-view.tq:140:5
    TVARIABLE(Int32T, b0_182_impl);
    auto b0_182 = &b0_182_impl;
    USE(b0_182);
    // ../../src/builtins/data-view.tq:141:5
    TVARIABLE(Int32T, b1_183_impl);
    auto b1_183 = &b1_183_impl;
    USE(b1_183);
    // ../../src/builtins/data-view.tq:142:5
    TVARIABLE(Int32T, result_184_impl);
    auto result_184 = &result_184_impl;
    USE(result_184);
    // ../../src/builtins/data-view.tq:145:5
    {
      Label label__True_266_impl(this);
      Label* label__True_266 = &label__True_266_impl;
      USE(label__True_266);
      Label label__False_267_impl(this);
      Label* label__False_267 = &label__False_267_impl;
      USE(label__False_267);
      Label label_if_done_label_718_1163_impl(this, {b0_182, b1_183, result_184});
      Label* label_if_done_label_718_1163 = &label_if_done_label_718_1163_impl;
      USE(label_if_done_label_718_1163);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_266, label__False_267);
      if (label__True_266->is_used())
      {
        BIND(label__True_266);
        // ../../src/builtins/data-view.tq:145:34
        {
          // ../../src/builtins/data-view.tq:146:7
          TNode<Uint32T> t733 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_181).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Uint32T>>(t733));
          TNode<Int32T> t734 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(t733)));
          USE(implicit_cast<TNode<Int32T>>(t734));
          *b0_182 = implicit_cast<TNode<Int32T>>(t734);
          // ../../src/builtins/data-view.tq:147:7
          int31_t t735 = 1;
          TNode<IntPtrT> t736 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t735)));
          TNode<IntPtrT> t737 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t736)));
          USE(implicit_cast<TNode<IntPtrT>>(t737));
          TNode<Int32T> t738 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>((*data_pointer_181).value()), implicit_cast<TNode<IntPtrT>>(t737)));
          USE(implicit_cast<TNode<Int32T>>(t738));
          *b1_183 = implicit_cast<TNode<Int32T>>(t738);
          // ../../src/builtins/data-view.tq:148:7
          int31_t t739 = 8;
          TNode<Int32T> t740 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t739)));
          TNode<Int32T> t741 = UncheckedCast<Int32T>(Word32Shl(implicit_cast<TNode<Int32T>>((*b1_183).value()), implicit_cast<TNode<Int32T>>(t740)));
          USE(implicit_cast<TNode<Int32T>>(t741));
          TNode<Int32T> t742 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>(t741), implicit_cast<TNode<Int32T>>((*b0_182).value())));
          USE(implicit_cast<TNode<Int32T>>(t742));
          *result_184 = implicit_cast<TNode<Int32T>>(t742);
        }
        Goto(label_if_done_label_718_1163);
      }
      if (label__False_267->is_used())
      {
        BIND(label__False_267);
        // ../../src/builtins/data-view.tq:149:12
        {
          // ../../src/builtins/data-view.tq:150:7
          TNode<Int32T> t743 = UncheckedCast<Int32T>(LoadInt8(implicit_cast<TNode<RawPtrT>>((*data_pointer_181).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
          USE(implicit_cast<TNode<Int32T>>(t743));
          *b0_182 = implicit_cast<TNode<Int32T>>(t743);
          // ../../src/builtins/data-view.tq:151:7
          int31_t t744 = 1;
          TNode<IntPtrT> t745 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t744)));
          TNode<IntPtrT> t746 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t745)));
          USE(implicit_cast<TNode<IntPtrT>>(t746));
          TNode<Uint32T> t747 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_181).value()), implicit_cast<TNode<IntPtrT>>(t746)));
          USE(implicit_cast<TNode<Uint32T>>(t747));
          TNode<Int32T> t748 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(t747)));
          USE(implicit_cast<TNode<Int32T>>(t748));
          *b1_183 = implicit_cast<TNode<Int32T>>(t748);
          // ../../src/builtins/data-view.tq:152:7
          int31_t t749 = 8;
          TNode<Int32T> t750 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t749)));
          TNode<Int32T> t751 = UncheckedCast<Int32T>(Word32Shl(implicit_cast<TNode<Int32T>>((*b0_182).value()), implicit_cast<TNode<Int32T>>(t750)));
          USE(implicit_cast<TNode<Int32T>>(t751));
          TNode<Int32T> t752 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>(t751), implicit_cast<TNode<Int32T>>((*b1_183).value())));
          USE(implicit_cast<TNode<Int32T>>(t752));
          *result_184 = implicit_cast<TNode<Int32T>>(t752);
        }
        Goto(label_if_done_label_718_1163);
      }
      BIND(label_if_done_label_718_1163);
    }
    // ../../src/builtins/data-view.tq:154:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../../src/builtins/data-view.tq:154:27
        {
          // ../../src/builtins/data-view.tq:155:7
          TNode<Smi> t753 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Int32T>>((*result_184).value())));
          USE(implicit_cast<TNode<Smi>>(t753));
          *_return_180 = implicit_cast<TNode<Number>>(t753);
          Goto(label_macro_end_1162);
        }
      } else {
        // ../../src/builtins/data-view.tq:156:12
        {
          // ../../src/builtins/data-view.tq:158:7
          int31_t t754 = 0xFFFF;
          TNode<Int32T> t755 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t754)));
          TNode<Int32T> t756 = UncheckedCast<Int32T>(Word32And(implicit_cast<TNode<Int32T>>((*result_184).value()), implicit_cast<TNode<Int32T>>(t755)));
          USE(implicit_cast<TNode<Int32T>>(t756));
          TNode<Smi> t757 = UncheckedCast<Smi>(convert5ATSmi(implicit_cast<TNode<Int32T>>(t756)));
          USE(implicit_cast<TNode<Smi>>(t757));
          *_return_180 = implicit_cast<TNode<Number>>(t757);
          Goto(label_macro_end_1162);
        }
      }
    }
  }
  BIND(label_macro_end_1162);
  return implicit_cast<TNode<Number>>((*_return_180).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Number, _return_185_impl);
  auto _return_185 = &_return_185_impl;
  USE(_return_185);
  Label label_macro_end_1164_impl(this, {_return_185});
  Label* label_macro_end_1164 = &label_macro_end_1164_impl;
  USE(label_macro_end_1164);
  // ../../src/builtins/data-view.tq:164:62
  {
    // ../../src/builtins/data-view.tq:165:5
    TNode<RawPtrT> t758 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_186_impl);
    auto data_pointer_186 = &data_pointer_186_impl;
    USE(data_pointer_186);
    *data_pointer_186 = implicit_cast<TNode<RawPtrT>>(t758);
    // ../../src/builtins/data-view.tq:167:5
    TNode<Uint32T> t759 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_186).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t759));
    TVARIABLE(Uint32T, b0_187_impl);
    auto b0_187 = &b0_187_impl;
    USE(b0_187);
    *b0_187 = implicit_cast<TNode<Uint32T>>(t759);
    // ../../src/builtins/data-view.tq:168:5
    int31_t t760 = 1;
    TNode<IntPtrT> t761 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t760)));
    TNode<IntPtrT> t762 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t761)));
    USE(implicit_cast<TNode<IntPtrT>>(t762));
    TNode<Uint32T> t763 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_186).value()), implicit_cast<TNode<IntPtrT>>(t762)));
    USE(implicit_cast<TNode<Uint32T>>(t763));
    TVARIABLE(Uint32T, b1_188_impl);
    auto b1_188 = &b1_188_impl;
    USE(b1_188);
    *b1_188 = implicit_cast<TNode<Uint32T>>(t763);
    // ../../src/builtins/data-view.tq:169:5
    int31_t t764 = 2;
    TNode<IntPtrT> t765 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t764)));
    TNode<IntPtrT> t766 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t765)));
    USE(implicit_cast<TNode<IntPtrT>>(t766));
    TNode<Uint32T> t767 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_186).value()), implicit_cast<TNode<IntPtrT>>(t766)));
    USE(implicit_cast<TNode<Uint32T>>(t767));
    TVARIABLE(Uint32T, b2_189_impl);
    auto b2_189 = &b2_189_impl;
    USE(b2_189);
    *b2_189 = implicit_cast<TNode<Uint32T>>(t767);
    // ../../src/builtins/data-view.tq:170:5
    int31_t t768 = 3;
    TNode<IntPtrT> t769 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t768)));
    TNode<IntPtrT> t770 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t769)));
    USE(implicit_cast<TNode<IntPtrT>>(t770));
    TNode<Uint32T> t771 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_186).value()), implicit_cast<TNode<IntPtrT>>(t770)));
    USE(implicit_cast<TNode<Uint32T>>(t771));
    TVARIABLE(Uint32T, b3_190_impl);
    auto b3_190 = &b3_190_impl;
    USE(b3_190);
    *b3_190 = implicit_cast<TNode<Uint32T>>(t771);
    // ../../src/builtins/data-view.tq:171:5
    TVARIABLE(Uint32T, result_191_impl);
    auto result_191 = &result_191_impl;
    USE(result_191);
    // ../../src/builtins/data-view.tq:173:5
    {
      Label label__True_270_impl(this);
      Label* label__True_270 = &label__True_270_impl;
      USE(label__True_270);
      Label label__False_271_impl(this);
      Label* label__False_271 = &label__False_271_impl;
      USE(label__False_271);
      Label label_if_done_label_719_1165_impl(this, {result_191});
      Label* label_if_done_label_719_1165 = &label_if_done_label_719_1165_impl;
      USE(label_if_done_label_719_1165);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_270, label__False_271);
      if (label__True_270->is_used())
      {
        BIND(label__True_270);
        // ../../src/builtins/data-view.tq:173:34
        {
          // ../../src/builtins/data-view.tq:174:7
          int31_t t772 = 24;
          TNode<Uint32T> t773 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t772)));
          TNode<Uint32T> t774 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_190).value()), implicit_cast<TNode<Uint32T>>(t773)));
          USE(implicit_cast<TNode<Uint32T>>(t774));
          int31_t t775 = 16;
          TNode<Uint32T> t776 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t775)));
          TNode<Uint32T> t777 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_189).value()), implicit_cast<TNode<Uint32T>>(t776)));
          USE(implicit_cast<TNode<Uint32T>>(t777));
          TNode<Uint32T> t778 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t774), implicit_cast<TNode<Uint32T>>(t777)));
          USE(implicit_cast<TNode<Uint32T>>(t778));
          int31_t t779 = 8;
          TNode<Uint32T> t780 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t779)));
          TNode<Uint32T> t781 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_188).value()), implicit_cast<TNode<Uint32T>>(t780)));
          USE(implicit_cast<TNode<Uint32T>>(t781));
          TNode<Uint32T> t782 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t778), implicit_cast<TNode<Uint32T>>(t781)));
          USE(implicit_cast<TNode<Uint32T>>(t782));
          TNode<Uint32T> t783 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t782), implicit_cast<TNode<Uint32T>>((*b0_187).value())));
          USE(implicit_cast<TNode<Uint32T>>(t783));
          *result_191 = implicit_cast<TNode<Uint32T>>(t783);
        }
        Goto(label_if_done_label_719_1165);
      }
      if (label__False_271->is_used())
      {
        BIND(label__False_271);
        // ../../src/builtins/data-view.tq:175:12
        {
          // ../../src/builtins/data-view.tq:176:7
          int31_t t784 = 24;
          TNode<Uint32T> t785 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t784)));
          TNode<Uint32T> t786 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_187).value()), implicit_cast<TNode<Uint32T>>(t785)));
          USE(implicit_cast<TNode<Uint32T>>(t786));
          int31_t t787 = 16;
          TNode<Uint32T> t788 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t787)));
          TNode<Uint32T> t789 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_188).value()), implicit_cast<TNode<Uint32T>>(t788)));
          USE(implicit_cast<TNode<Uint32T>>(t789));
          TNode<Uint32T> t790 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t786), implicit_cast<TNode<Uint32T>>(t789)));
          USE(implicit_cast<TNode<Uint32T>>(t790));
          int31_t t791 = 8;
          TNode<Uint32T> t792 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t791)));
          TNode<Uint32T> t793 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_189).value()), implicit_cast<TNode<Uint32T>>(t792)));
          USE(implicit_cast<TNode<Uint32T>>(t793));
          TNode<Uint32T> t794 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t790), implicit_cast<TNode<Uint32T>>(t793)));
          USE(implicit_cast<TNode<Uint32T>>(t794));
          TNode<Uint32T> t795 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t794), implicit_cast<TNode<Uint32T>>((*b3_190).value())));
          USE(implicit_cast<TNode<Uint32T>>(t795));
          *result_191 = implicit_cast<TNode<Uint32T>>(t795);
        }
        Goto(label_if_done_label_719_1165);
      }
      BIND(label_if_done_label_719_1165);
    }
    // ../../src/builtins/data-view.tq:179:5
    {
      bool t796 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
      USE(implicit_cast<bool>(t796));
      if ((implicit_cast<bool>(t796))) {
        // ../../src/builtins/data-view.tq:179:43
        {
          // ../../src/builtins/data-view.tq:180:7
          TNode<Int32T> t797 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*result_191).value())));
          USE(implicit_cast<TNode<Int32T>>(t797));
          TNode<Number> t798 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Int32T>>(t797)));
          USE(implicit_cast<TNode<Number>>(t798));
          *_return_185 = implicit_cast<TNode<Number>>(t798);
          Goto(label_macro_end_1164);
        }
      } else {
        // ../../src/builtins/data-view.tq:181:12
        {
          bool t799 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
          USE(implicit_cast<bool>(t799));
          if ((implicit_cast<bool>(t799))) {
            // ../../src/builtins/data-view.tq:181:51
            {
              // ../../src/builtins/data-view.tq:182:7
              TNode<Number> t800 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Uint32T>>((*result_191).value())));
              USE(implicit_cast<TNode<Number>>(t800));
              *_return_185 = implicit_cast<TNode<Number>>(t800);
              Goto(label_macro_end_1164);
            }
          } else {
            // ../../src/builtins/data-view.tq:183:12
            {
              bool t801 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
              USE(implicit_cast<bool>(t801));
              if ((implicit_cast<bool>(t801))) {
                // ../../src/builtins/data-view.tq:183:52
                {
                  // ../../src/builtins/data-view.tq:184:7
                  TNode<Float32T> t802 = UncheckedCast<Float32T>(BitcastInt32ToFloat32(implicit_cast<TNode<Uint32T>>((*result_191).value())));
                  USE(implicit_cast<TNode<Float32T>>(t802));
                  TNode<Float64T> t803 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Float32T>>(t802)));
                  USE(implicit_cast<TNode<Float64T>>(t803));
                  TVARIABLE(Float64T, float_res_192_impl);
                  auto float_res_192 = &float_res_192_impl;
                  USE(float_res_192);
                  *float_res_192 = implicit_cast<TNode<Float64T>>(t803);
                  // ../../src/builtins/data-view.tq:185:7
                  TNode<Number> t804 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Float64T>>((*float_res_192).value())));
                  USE(implicit_cast<TNode<Number>>(t804));
                  *_return_185 = implicit_cast<TNode<Number>>(t804);
                  Goto(label_macro_end_1164);
                }
              } else {
                // ../../src/builtins/data-view.tq:186:12
                {
                  // ../../src/builtins/data-view.tq:187:7
                  Unreachable();
                }
              }
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1164);
  return implicit_cast<TNode<Number>>((*_return_185).value());
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian) {
  TVARIABLE(Number, _return_193_impl);
  auto _return_193 = &_return_193_impl;
  USE(_return_193);
  Label label_macro_end_1166_impl(this, {_return_193});
  Label* label_macro_end_1166 = &label_macro_end_1166_impl;
  USE(label_macro_end_1166);
  // ../../src/builtins/data-view.tq:192:68
  {
    // ../../src/builtins/data-view.tq:193:5
    TNode<RawPtrT> t805 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_194_impl);
    auto data_pointer_194 = &data_pointer_194_impl;
    USE(data_pointer_194);
    *data_pointer_194 = implicit_cast<TNode<RawPtrT>>(t805);
    // ../../src/builtins/data-view.tq:195:5
    TNode<Uint32T> t806 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_194).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t806));
    TVARIABLE(Uint32T, b0_195_impl);
    auto b0_195 = &b0_195_impl;
    USE(b0_195);
    *b0_195 = implicit_cast<TNode<Uint32T>>(t806);
    // ../../src/builtins/data-view.tq:196:5
    int31_t t807 = 1;
    TNode<IntPtrT> t808 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t807)));
    TNode<IntPtrT> t809 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t808)));
    USE(implicit_cast<TNode<IntPtrT>>(t809));
    TNode<Uint32T> t810 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_194).value()), implicit_cast<TNode<IntPtrT>>(t809)));
    USE(implicit_cast<TNode<Uint32T>>(t810));
    TVARIABLE(Uint32T, b1_196_impl);
    auto b1_196 = &b1_196_impl;
    USE(b1_196);
    *b1_196 = implicit_cast<TNode<Uint32T>>(t810);
    // ../../src/builtins/data-view.tq:197:5
    int31_t t811 = 2;
    TNode<IntPtrT> t812 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t811)));
    TNode<IntPtrT> t813 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t812)));
    USE(implicit_cast<TNode<IntPtrT>>(t813));
    TNode<Uint32T> t814 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_194).value()), implicit_cast<TNode<IntPtrT>>(t813)));
    USE(implicit_cast<TNode<Uint32T>>(t814));
    TVARIABLE(Uint32T, b2_197_impl);
    auto b2_197 = &b2_197_impl;
    USE(b2_197);
    *b2_197 = implicit_cast<TNode<Uint32T>>(t814);
    // ../../src/builtins/data-view.tq:198:5
    int31_t t815 = 3;
    TNode<IntPtrT> t816 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t815)));
    TNode<IntPtrT> t817 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t816)));
    USE(implicit_cast<TNode<IntPtrT>>(t817));
    TNode<Uint32T> t818 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_194).value()), implicit_cast<TNode<IntPtrT>>(t817)));
    USE(implicit_cast<TNode<Uint32T>>(t818));
    TVARIABLE(Uint32T, b3_198_impl);
    auto b3_198 = &b3_198_impl;
    USE(b3_198);
    *b3_198 = implicit_cast<TNode<Uint32T>>(t818);
    // ../../src/builtins/data-view.tq:199:5
    int31_t t819 = 4;
    TNode<IntPtrT> t820 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t819)));
    TNode<IntPtrT> t821 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t820)));
    USE(implicit_cast<TNode<IntPtrT>>(t821));
    TNode<Uint32T> t822 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_194).value()), implicit_cast<TNode<IntPtrT>>(t821)));
    USE(implicit_cast<TNode<Uint32T>>(t822));
    TVARIABLE(Uint32T, b4_199_impl);
    auto b4_199 = &b4_199_impl;
    USE(b4_199);
    *b4_199 = implicit_cast<TNode<Uint32T>>(t822);
    // ../../src/builtins/data-view.tq:200:5
    int31_t t823 = 5;
    TNode<IntPtrT> t824 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t823)));
    TNode<IntPtrT> t825 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t824)));
    USE(implicit_cast<TNode<IntPtrT>>(t825));
    TNode<Uint32T> t826 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_194).value()), implicit_cast<TNode<IntPtrT>>(t825)));
    USE(implicit_cast<TNode<Uint32T>>(t826));
    TVARIABLE(Uint32T, b5_200_impl);
    auto b5_200 = &b5_200_impl;
    USE(b5_200);
    *b5_200 = implicit_cast<TNode<Uint32T>>(t826);
    // ../../src/builtins/data-view.tq:201:5
    int31_t t827 = 6;
    TNode<IntPtrT> t828 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t827)));
    TNode<IntPtrT> t829 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t828)));
    USE(implicit_cast<TNode<IntPtrT>>(t829));
    TNode<Uint32T> t830 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_194).value()), implicit_cast<TNode<IntPtrT>>(t829)));
    USE(implicit_cast<TNode<Uint32T>>(t830));
    TVARIABLE(Uint32T, b6_201_impl);
    auto b6_201 = &b6_201_impl;
    USE(b6_201);
    *b6_201 = implicit_cast<TNode<Uint32T>>(t830);
    // ../../src/builtins/data-view.tq:202:5
    int31_t t831 = 7;
    TNode<IntPtrT> t832 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t831)));
    TNode<IntPtrT> t833 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t832)));
    USE(implicit_cast<TNode<IntPtrT>>(t833));
    TNode<Uint32T> t834 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_194).value()), implicit_cast<TNode<IntPtrT>>(t833)));
    USE(implicit_cast<TNode<Uint32T>>(t834));
    TVARIABLE(Uint32T, b7_202_impl);
    auto b7_202 = &b7_202_impl;
    USE(b7_202);
    *b7_202 = implicit_cast<TNode<Uint32T>>(t834);
    // ../../src/builtins/data-view.tq:203:5
    TVARIABLE(Uint32T, low_word_203_impl);
    auto low_word_203 = &low_word_203_impl;
    USE(low_word_203);
    // ../../src/builtins/data-view.tq:204:5
    TVARIABLE(Uint32T, high_word_204_impl);
    auto high_word_204 = &high_word_204_impl;
    USE(high_word_204);
    // ../../src/builtins/data-view.tq:206:5
    {
      Label label__True_278_impl(this);
      Label* label__True_278 = &label__True_278_impl;
      USE(label__True_278);
      Label label__False_279_impl(this);
      Label* label__False_279 = &label__False_279_impl;
      USE(label__False_279);
      Label label_if_done_label_720_1167_impl(this, {high_word_204, low_word_203});
      Label* label_if_done_label_720_1167 = &label_if_done_label_720_1167_impl;
      USE(label_if_done_label_720_1167);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_278, label__False_279);
      if (label__True_278->is_used())
      {
        BIND(label__True_278);
        // ../../src/builtins/data-view.tq:206:34
        {
          // ../../src/builtins/data-view.tq:207:7
          int31_t t835 = 24;
          TNode<Uint32T> t836 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t835)));
          TNode<Uint32T> t837 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_198).value()), implicit_cast<TNode<Uint32T>>(t836)));
          USE(implicit_cast<TNode<Uint32T>>(t837));
          int31_t t838 = 16;
          TNode<Uint32T> t839 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t838)));
          TNode<Uint32T> t840 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_197).value()), implicit_cast<TNode<Uint32T>>(t839)));
          USE(implicit_cast<TNode<Uint32T>>(t840));
          TNode<Uint32T> t841 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t837), implicit_cast<TNode<Uint32T>>(t840)));
          USE(implicit_cast<TNode<Uint32T>>(t841));
          int31_t t842 = 8;
          TNode<Uint32T> t843 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t842)));
          TNode<Uint32T> t844 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_196).value()), implicit_cast<TNode<Uint32T>>(t843)));
          USE(implicit_cast<TNode<Uint32T>>(t844));
          TNode<Uint32T> t845 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t841), implicit_cast<TNode<Uint32T>>(t844)));
          USE(implicit_cast<TNode<Uint32T>>(t845));
          TNode<Uint32T> t846 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t845), implicit_cast<TNode<Uint32T>>((*b0_195).value())));
          USE(implicit_cast<TNode<Uint32T>>(t846));
          *low_word_203 = implicit_cast<TNode<Uint32T>>(t846);
          // ../../src/builtins/data-view.tq:208:7
          int31_t t847 = 24;
          TNode<Uint32T> t848 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t847)));
          TNode<Uint32T> t849 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b7_202).value()), implicit_cast<TNode<Uint32T>>(t848)));
          USE(implicit_cast<TNode<Uint32T>>(t849));
          int31_t t850 = 16;
          TNode<Uint32T> t851 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t850)));
          TNode<Uint32T> t852 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_201).value()), implicit_cast<TNode<Uint32T>>(t851)));
          USE(implicit_cast<TNode<Uint32T>>(t852));
          TNode<Uint32T> t853 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t849), implicit_cast<TNode<Uint32T>>(t852)));
          USE(implicit_cast<TNode<Uint32T>>(t853));
          int31_t t854 = 8;
          TNode<Uint32T> t855 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t854)));
          TNode<Uint32T> t856 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_200).value()), implicit_cast<TNode<Uint32T>>(t855)));
          USE(implicit_cast<TNode<Uint32T>>(t856));
          TNode<Uint32T> t857 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t853), implicit_cast<TNode<Uint32T>>(t856)));
          USE(implicit_cast<TNode<Uint32T>>(t857));
          TNode<Uint32T> t858 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t857), implicit_cast<TNode<Uint32T>>((*b4_199).value())));
          USE(implicit_cast<TNode<Uint32T>>(t858));
          *high_word_204 = implicit_cast<TNode<Uint32T>>(t858);
        }
        Goto(label_if_done_label_720_1167);
      }
      if (label__False_279->is_used())
      {
        BIND(label__False_279);
        // ../../src/builtins/data-view.tq:209:12
        {
          // ../../src/builtins/data-view.tq:210:7
          int31_t t859 = 24;
          TNode<Uint32T> t860 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t859)));
          TNode<Uint32T> t861 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_195).value()), implicit_cast<TNode<Uint32T>>(t860)));
          USE(implicit_cast<TNode<Uint32T>>(t861));
          int31_t t862 = 16;
          TNode<Uint32T> t863 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t862)));
          TNode<Uint32T> t864 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_196).value()), implicit_cast<TNode<Uint32T>>(t863)));
          USE(implicit_cast<TNode<Uint32T>>(t864));
          TNode<Uint32T> t865 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t861), implicit_cast<TNode<Uint32T>>(t864)));
          USE(implicit_cast<TNode<Uint32T>>(t865));
          int31_t t866 = 8;
          TNode<Uint32T> t867 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t866)));
          TNode<Uint32T> t868 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_197).value()), implicit_cast<TNode<Uint32T>>(t867)));
          USE(implicit_cast<TNode<Uint32T>>(t868));
          TNode<Uint32T> t869 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t865), implicit_cast<TNode<Uint32T>>(t868)));
          USE(implicit_cast<TNode<Uint32T>>(t869));
          TNode<Uint32T> t870 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t869), implicit_cast<TNode<Uint32T>>((*b3_198).value())));
          USE(implicit_cast<TNode<Uint32T>>(t870));
          *high_word_204 = implicit_cast<TNode<Uint32T>>(t870);
          // ../../src/builtins/data-view.tq:211:7
          int31_t t871 = 24;
          TNode<Uint32T> t872 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t871)));
          TNode<Uint32T> t873 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b4_199).value()), implicit_cast<TNode<Uint32T>>(t872)));
          USE(implicit_cast<TNode<Uint32T>>(t873));
          int31_t t874 = 16;
          TNode<Uint32T> t875 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t874)));
          TNode<Uint32T> t876 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_200).value()), implicit_cast<TNode<Uint32T>>(t875)));
          USE(implicit_cast<TNode<Uint32T>>(t876));
          TNode<Uint32T> t877 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t873), implicit_cast<TNode<Uint32T>>(t876)));
          USE(implicit_cast<TNode<Uint32T>>(t877));
          int31_t t878 = 8;
          TNode<Uint32T> t879 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t878)));
          TNode<Uint32T> t880 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_201).value()), implicit_cast<TNode<Uint32T>>(t879)));
          USE(implicit_cast<TNode<Uint32T>>(t880));
          TNode<Uint32T> t881 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t877), implicit_cast<TNode<Uint32T>>(t880)));
          USE(implicit_cast<TNode<Uint32T>>(t881));
          TNode<Uint32T> t882 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t881), implicit_cast<TNode<Uint32T>>((*b7_202).value())));
          USE(implicit_cast<TNode<Uint32T>>(t882));
          *low_word_203 = implicit_cast<TNode<Uint32T>>(t882);
        }
        Goto(label_if_done_label_720_1167);
      }
      BIND(label_if_done_label_720_1167);
    }
    // ../../src/builtins/data-view.tq:214:5
    int31_t t883 = 0;
    TVARIABLE(Float64T, result_205_impl);
    auto result_205 = &result_205_impl;
    USE(result_205);
    TNode<Float64T> t884 = UncheckedCast<Float64T>(from_constexpr9ATfloat64(implicit_cast<int31_t>(t883)));
    *result_205 = implicit_cast<TNode<Float64T>>(t884);
    // ../../src/builtins/data-view.tq:215:5
    TNode<Float64T> t885 = UncheckedCast<Float64T>(Float64InsertLowWord32(implicit_cast<TNode<Float64T>>((*result_205).value()), implicit_cast<TNode<Uint32T>>((*low_word_203).value())));
    USE(implicit_cast<TNode<Float64T>>(t885));
    *result_205 = implicit_cast<TNode<Float64T>>(t885);
    // ../../src/builtins/data-view.tq:216:5
    TNode<Float64T> t886 = UncheckedCast<Float64T>(Float64InsertHighWord32(implicit_cast<TNode<Float64T>>((*result_205).value()), implicit_cast<TNode<Uint32T>>((*high_word_204).value())));
    USE(implicit_cast<TNode<Float64T>>(t886));
    *result_205 = implicit_cast<TNode<Float64T>>(t886);
    // ../../src/builtins/data-view.tq:218:5
    TNode<Number> t887 = UncheckedCast<Number>(convert22UT12ATHeapNumber5ATSmi(implicit_cast<TNode<Float64T>>((*result_205).value())));
    USE(implicit_cast<TNode<Number>>(t887));
    *_return_193 = implicit_cast<TNode<Number>>(t887);
    Goto(label_macro_end_1166);
  }
  BIND(label_macro_end_1166);
  return implicit_cast<TNode<Number>>((*_return_193).value());
}

bool DataViewBuiltinsFromDSLAssembler::kPositiveBigInt() {
  return implicit_cast<bool>(false);
}

bool DataViewBuiltinsFromDSLAssembler::kNegativeBigInt() {
  return implicit_cast<bool>(true);
}

int31_t DataViewBuiltinsFromDSLAssembler::kZeroDigitBigInt() {
  int31_t t888 = 0;
  return implicit_cast<int31_t>(t888);
}

int31_t DataViewBuiltinsFromDSLAssembler::kOneDigitBigInt() {
  int31_t t889 = 1;
  return implicit_cast<int31_t>(t889);
}

int31_t DataViewBuiltinsFromDSLAssembler::kTwoDigitBigInt() {
  int31_t t890 = 2;
  return implicit_cast<int31_t>(t890);
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::CreateEmptyBigInt(TNode<BoolT> p_is_positive, int31_t p_length) {
  TVARIABLE(BigInt, _return_206_impl);
  auto _return_206 = &_return_206_impl;
  USE(_return_206);
  Label label_macro_end_1168_impl(this, {_return_206});
  Label* label_macro_end_1168 = &label_macro_end_1168_impl;
  USE(label_macro_end_1168);
  // ../../src/builtins/data-view.tq:233:79
  {
    // ../../src/builtins/data-view.tq:235:5
    TNode<IntPtrT> t891 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(p_length)));
    TNode<BigInt> t892 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t891)));
    USE(implicit_cast<TNode<BigInt>>(t892));
    TVARIABLE(BigInt, result_207_impl);
    auto result_207 = &result_207_impl;
    USE(result_207);
    *result_207 = implicit_cast<TNode<BigInt>>(t892);
    // ../../src/builtins/data-view.tq:238:5
    {
      Label label__True_280_impl(this);
      Label* label__True_280 = &label__True_280_impl;
      USE(label__True_280);
      Label label__False_281_impl(this);
      Label* label__False_281 = &label__False_281_impl;
      USE(label__False_281);
      Label label_if_done_label_721_1169_impl(this, {});
      Label* label_if_done_label_721_1169 = &label_if_done_label_721_1169_impl;
      USE(label_if_done_label_721_1169);
      Branch(implicit_cast<TNode<BoolT>>(p_is_positive), label__True_280, label__False_281);
      if (label__True_280->is_used())
      {
        BIND(label__True_280);
        // ../../src/builtins/data-view.tq:238:22
        {
          // ../../src/builtins/data-view.tq:239:7
          TNode<IntPtrT> t893 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(implicit_cast<bool>(kPositiveBigInt()), implicit_cast<int31_t>(p_length)));
          USE(implicit_cast<TNode<IntPtrT>>(t893));
          StoreBigIntBitfield(implicit_cast<TNode<BigInt>>((*result_207).value()), implicit_cast<TNode<IntPtrT>>(t893));
        }
        Goto(label_if_done_label_721_1169);
      }
      if (label__False_281->is_used())
      {
        BIND(label__False_281);
        // ../../src/builtins/data-view.tq:241:12
        {
          // ../../src/builtins/data-view.tq:242:7
          TNode<IntPtrT> t894 = UncheckedCast<IntPtrT>(DataViewEncodeBigIntBits(implicit_cast<bool>(kNegativeBigInt()), implicit_cast<int31_t>(p_length)));
          USE(implicit_cast<TNode<IntPtrT>>(t894));
          StoreBigIntBitfield(implicit_cast<TNode<BigInt>>((*result_207).value()), implicit_cast<TNode<IntPtrT>>(t894));
        }
        Goto(label_if_done_label_721_1169);
      }
      BIND(label_if_done_label_721_1169);
    }
    // ../../src/builtins/data-view.tq:246:5
    *_return_206 = implicit_cast<TNode<BigInt>>((*result_207).value());
    Goto(label_macro_end_1168);
  }
  BIND(label_macro_end_1168);
  return implicit_cast<TNode<BigInt>>((*_return_206).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn64Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_208_impl);
  auto _return_208 = &_return_208_impl;
  USE(_return_208);
  Label label_macro_end_1170_impl(this, {_return_208});
  Label* label_macro_end_1170 = &label_macro_end_1170_impl;
  USE(label_macro_end_1170);
  // ../../src/builtins/data-view.tq:251:59
  {
    // ../../src/builtins/data-view.tq:254:5
    {
      Label label__True_282_impl(this);
      Label* label__True_282 = &label__True_282_impl;
      USE(label__True_282);
      Label label__False_283_impl(this, {});
      Label* label__False_283 = &label__False_283_impl;
      USE(label__False_283);
      Label label__True_284_impl(this);
      Label* label__True_284 = &label__True_284_impl;
      USE(label__True_284);
      int31_t t895 = 0;
      TNode<Uint32T> t896 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t895)));
      TNode<BoolT> t897 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t896)));
      USE(implicit_cast<TNode<BoolT>>(t897));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t897), label__False_283);
      int31_t t898 = 0;
      TNode<Uint32T> t899 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t898)));
      TNode<BoolT> t900 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t899)));
      USE(implicit_cast<TNode<BoolT>>(t900));
      Branch(implicit_cast<TNode<BoolT>>(t900), label__True_282, label__False_283);
      if (label__True_282->is_used())
      {
        BIND(label__True_282);
        // ../../src/builtins/data-view.tq:254:42
        {
          // ../../src/builtins/data-view.tq:255:7
          TNode<IntPtrT> t901 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(kZeroDigitBigInt())));
          TNode<BigInt> t902 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t901)));
          USE(implicit_cast<TNode<BigInt>>(t902));
          *_return_208 = implicit_cast<TNode<BigInt>>(t902);
          Goto(label_macro_end_1170);
        }
      }
      BIND(label__False_283);
    }
    // ../../src/builtins/data-view.tq:258:5
    TVARIABLE(BoolT, is_positive_209_impl);
    auto is_positive_209 = &is_positive_209_impl;
    USE(is_positive_209);
    TNode<BoolT> t903 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
    *is_positive_209 = implicit_cast<TNode<BoolT>>(t903);
    // ../../src/builtins/data-view.tq:259:5
    TNode<UintPtrT> t904 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Uint32T>>(p_high_word)));
    USE(implicit_cast<TNode<UintPtrT>>(t904));
    TNode<IntPtrT> t905 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t904)));
    USE(implicit_cast<TNode<IntPtrT>>(t905));
    TVARIABLE(IntPtrT, high_part_210_impl);
    auto high_part_210 = &high_part_210_impl;
    USE(high_part_210);
    *high_part_210 = implicit_cast<TNode<IntPtrT>>(t905);
    // ../../src/builtins/data-view.tq:260:5
    TNode<UintPtrT> t906 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Uint32T>>(p_low_word)));
    USE(implicit_cast<TNode<UintPtrT>>(t906));
    TNode<IntPtrT> t907 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t906)));
    USE(implicit_cast<TNode<IntPtrT>>(t907));
    TVARIABLE(IntPtrT, low_part_211_impl);
    auto low_part_211 = &low_part_211_impl;
    USE(low_part_211);
    *low_part_211 = implicit_cast<TNode<IntPtrT>>(t907);
    // ../../src/builtins/data-view.tq:261:5
    int31_t t908 = 32;
    TNode<IntPtrT> t909 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t908)));
    TNode<IntPtrT> t910 = UncheckedCast<IntPtrT>(WordShl(implicit_cast<TNode<IntPtrT>>((*high_part_210).value()), implicit_cast<TNode<IntPtrT>>(t909)));
    USE(implicit_cast<TNode<IntPtrT>>(t910));
    TNode<IntPtrT> t911 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(t910), implicit_cast<TNode<IntPtrT>>((*low_part_211).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t911));
    TVARIABLE(IntPtrT, raw_value_212_impl);
    auto raw_value_212 = &raw_value_212_impl;
    USE(raw_value_212);
    *raw_value_212 = implicit_cast<TNode<IntPtrT>>(t911);
    // ../../src/builtins/data-view.tq:263:5
    {
      if ((implicit_cast<bool>(p_signed))) {
        // ../../src/builtins/data-view.tq:263:27
        {
          // ../../src/builtins/data-view.tq:264:7
          {
            Label label__True_287_impl(this);
            Label* label__True_287 = &label__True_287_impl;
            USE(label__True_287);
            Label label__False_288_impl(this, {is_positive_209, raw_value_212});
            Label* label__False_288 = &label__False_288_impl;
            USE(label__False_288);
            int31_t t912 = 0;
            TNode<IntPtrT> t913 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t912)));
            TNode<BoolT> t914 = UncheckedCast<BoolT>(IntPtrLessThan(implicit_cast<TNode<IntPtrT>>((*raw_value_212).value()), implicit_cast<TNode<IntPtrT>>(t913)));
            USE(implicit_cast<TNode<BoolT>>(t914));
            Branch(implicit_cast<TNode<BoolT>>(t914), label__True_287, label__False_288);
            if (label__True_287->is_used())
            {
              BIND(label__True_287);
              // ../../src/builtins/data-view.tq:264:26
              {
                // ../../src/builtins/data-view.tq:265:9
                TNode<BoolT> t915 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                *is_positive_209 = implicit_cast<TNode<BoolT>>(t915);
                // ../../src/builtins/data-view.tq:267:9
                int31_t t916 = 0;
                TNode<IntPtrT> t917 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t916)));
                TNode<IntPtrT> t918 = UncheckedCast<IntPtrT>(IntPtrSub(implicit_cast<TNode<IntPtrT>>(t917), implicit_cast<TNode<IntPtrT>>((*raw_value_212).value())));
                USE(implicit_cast<TNode<IntPtrT>>(t918));
                *raw_value_212 = implicit_cast<TNode<IntPtrT>>(t918);
              }
              Goto(label__False_288);
            }
            BIND(label__False_288);
          }
        }
      }
    }
    // ../../src/builtins/data-view.tq:272:5
    TNode<BigInt> t919 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*is_positive_209).value()), implicit_cast<int31_t>(kOneDigitBigInt())));
    USE(implicit_cast<TNode<BigInt>>(t919));
    TVARIABLE(BigInt, result_213_impl);
    auto result_213 = &result_213_impl;
    USE(result_213);
    *result_213 = implicit_cast<TNode<BigInt>>(t919);
    // ../../src/builtins/data-view.tq:274:5
    int31_t t920 = 0;
    TNode<UintPtrT> t921 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>((*raw_value_212).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t921));
    StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_213).value()), implicit_cast<int31_t>(t920), implicit_cast<TNode<UintPtrT>>(t921));
    // ../../src/builtins/data-view.tq:276:5
    *_return_208 = implicit_cast<TNode<BigInt>>((*result_213).value());
    Goto(label_macro_end_1170);
  }
  BIND(label_macro_end_1170);
  return implicit_cast<TNode<BigInt>>((*_return_208).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn32Bit(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_214_impl);
  auto _return_214 = &_return_214_impl;
  USE(_return_214);
  Label label_macro_end_1171_impl(this, {_return_214});
  Label* label_macro_end_1171 = &label_macro_end_1171_impl;
  USE(label_macro_end_1171);
  // ../../src/builtins/data-view.tq:281:59
  {
    // ../../src/builtins/data-view.tq:284:5
    {
      Label label__True_289_impl(this);
      Label* label__True_289 = &label__True_289_impl;
      USE(label__True_289);
      Label label__False_290_impl(this, {});
      Label* label__False_290 = &label__False_290_impl;
      USE(label__False_290);
      Label label__True_291_impl(this);
      Label* label__True_291 = &label__True_291_impl;
      USE(label__True_291);
      int31_t t922 = 0;
      TNode<Uint32T> t923 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t922)));
      TNode<BoolT> t924 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t923)));
      USE(implicit_cast<TNode<BoolT>>(t924));
      GotoIfNot(implicit_cast<TNode<BoolT>>(t924), label__False_290);
      int31_t t925 = 0;
      TNode<Uint32T> t926 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t925)));
      TNode<BoolT> t927 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t926)));
      USE(implicit_cast<TNode<BoolT>>(t927));
      Branch(implicit_cast<TNode<BoolT>>(t927), label__True_289, label__False_290);
      if (label__True_289->is_used())
      {
        BIND(label__True_289);
        // ../../src/builtins/data-view.tq:284:42
        {
          // ../../src/builtins/data-view.tq:285:7
          TNode<IntPtrT> t928 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(kZeroDigitBigInt())));
          TNode<BigInt> t929 = UncheckedCast<BigInt>(AllocateBigInt(implicit_cast<TNode<IntPtrT>>(t928)));
          USE(implicit_cast<TNode<BigInt>>(t929));
          *_return_214 = implicit_cast<TNode<BigInt>>(t929);
          Goto(label_macro_end_1171);
        }
      }
      BIND(label__False_290);
    }
    // ../../src/builtins/data-view.tq:289:5
    TVARIABLE(BoolT, need_two_digits_215_impl);
    auto need_two_digits_215 = &need_two_digits_215_impl;
    USE(need_two_digits_215);
    TNode<BoolT> t930 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
    *need_two_digits_215 = implicit_cast<TNode<BoolT>>(t930);
    // ../../src/builtins/data-view.tq:290:5
    TVARIABLE(BoolT, is_positive_216_impl);
    auto is_positive_216 = &is_positive_216_impl;
    USE(is_positive_216);
    TNode<BoolT> t931 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
    *is_positive_216 = implicit_cast<TNode<BoolT>>(t931);
    // ../../src/builtins/data-view.tq:294:5
    TNode<Int32T> t932 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_low_word)));
    USE(implicit_cast<TNode<Int32T>>(t932));
    TVARIABLE(Int32T, low_part_217_impl);
    auto low_part_217 = &low_part_217_impl;
    USE(low_part_217);
    *low_part_217 = implicit_cast<TNode<Int32T>>(t932);
    // ../../src/builtins/data-view.tq:295:5
    TNode<Int32T> t933 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>(p_high_word)));
    USE(implicit_cast<TNode<Int32T>>(t933));
    TVARIABLE(Int32T, high_part_218_impl);
    auto high_part_218 = &high_part_218_impl;
    USE(high_part_218);
    *high_part_218 = implicit_cast<TNode<Int32T>>(t933);
    // ../../src/builtins/data-view.tq:300:5
    {
      Label label__True_292_impl(this);
      Label* label__True_292 = &label__True_292_impl;
      USE(label__True_292);
      Label label__False_293_impl(this, {high_part_218, is_positive_216, low_part_217, need_two_digits_215});
      Label* label__False_293 = &label__False_293_impl;
      USE(label__False_293);
      int31_t t934 = 0;
      TNode<Uint32T> t935 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t934)));
      TNode<BoolT> t936 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t935)));
      USE(implicit_cast<TNode<BoolT>>(t936));
      Branch(implicit_cast<TNode<BoolT>>(t936), label__True_292, label__False_293);
      if (label__True_292->is_used())
      {
        BIND(label__True_292);
        // ../../src/builtins/data-view.tq:300:25
        {
          // ../../src/builtins/data-view.tq:301:7
          {
            if ((implicit_cast<bool>(p_signed))) {
              // ../../src/builtins/data-view.tq:301:29
              {
                // ../../src/builtins/data-view.tq:304:9
                {
                  Label label__True_296_impl(this);
                  Label* label__True_296 = &label__True_296_impl;
                  USE(label__True_296);
                  Label label__False_297_impl(this);
                  Label* label__False_297 = &label__False_297_impl;
                  USE(label__False_297);
                  Label label_if_done_label_722_1172_impl(this, {high_part_218, is_positive_216, low_part_217, need_two_digits_215});
                  Label* label_if_done_label_722_1172 = &label_if_done_label_722_1172_impl;
                  USE(label_if_done_label_722_1172);
                  int31_t t937 = 0;
                  TNode<Int32T> t938 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t937)));
                  TNode<BoolT> t939 = UncheckedCast<BoolT>(Int32LessThan(implicit_cast<TNode<Int32T>>((*high_part_218).value()), implicit_cast<TNode<Int32T>>(t938)));
                  USE(implicit_cast<TNode<BoolT>>(t939));
                  Branch(implicit_cast<TNode<BoolT>>(t939), label__True_296, label__False_297);
                  if (label__True_296->is_used())
                  {
                    BIND(label__True_296);
                    // ../../src/builtins/data-view.tq:304:28
                    {
                      // ../../src/builtins/data-view.tq:305:11
                      TNode<BoolT> t940 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
                      *is_positive_216 = implicit_cast<TNode<BoolT>>(t940);
                      // ../../src/builtins/data-view.tq:310:11
                      int31_t t941 = 0;
                      TNode<Int32T> t942 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t941)));
                      TNode<Int32T> t943 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t942), implicit_cast<TNode<Int32T>>((*high_part_218).value())));
                      USE(implicit_cast<TNode<Int32T>>(t943));
                      *high_part_218 = implicit_cast<TNode<Int32T>>(t943);
                      // ../../src/builtins/data-view.tq:311:11
                      {
                        Label label__True_298_impl(this);
                        Label* label__True_298 = &label__True_298_impl;
                        USE(label__True_298);
                        Label label__False_299_impl(this, {high_part_218});
                        Label* label__False_299 = &label__False_299_impl;
                        USE(label__False_299);
                        int31_t t944 = 0;
                        TNode<Int32T> t945 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t944)));
                        TNode<BoolT> t946 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Int32T>>((*low_part_217).value()), implicit_cast<TNode<Int32T>>(t945)));
                        USE(implicit_cast<TNode<BoolT>>(t946));
                        Branch(implicit_cast<TNode<BoolT>>(t946), label__True_298, label__False_299);
                        if (label__True_298->is_used())
                        {
                          BIND(label__True_298);
                          // ../../src/builtins/data-view.tq:311:30
                          {
                            // ../../src/builtins/data-view.tq:312:13
                            int31_t t947 = 1;
                            TNode<Int32T> t948 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t947)));
                            TNode<Int32T> t949 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>((*high_part_218).value()), implicit_cast<TNode<Int32T>>(t948)));
                            USE(implicit_cast<TNode<Int32T>>(t949));
                            *high_part_218 = implicit_cast<TNode<Int32T>>(t949);
                          }
                          Goto(label__False_299);
                        }
                        BIND(label__False_299);
                      }
                      // ../../src/builtins/data-view.tq:314:11
                      int31_t t950 = 0;
                      TNode<Int32T> t951 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t950)));
                      TNode<Int32T> t952 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t951), implicit_cast<TNode<Int32T>>((*low_part_217).value())));
                      USE(implicit_cast<TNode<Int32T>>(t952));
                      *low_part_217 = implicit_cast<TNode<Int32T>>(t952);
                      // ../../src/builtins/data-view.tq:317:11
                      {
                        Label label__True_300_impl(this);
                        Label* label__True_300 = &label__True_300_impl;
                        USE(label__True_300);
                        Label label__False_301_impl(this, {need_two_digits_215});
                        Label* label__False_301 = &label__False_301_impl;
                        USE(label__False_301);
                        int31_t t953 = 0;
                        TNode<Int32T> t954 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t953)));
                        TNode<BoolT> t955 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Int32T>>((*high_part_218).value()), implicit_cast<TNode<Int32T>>(t954)));
                        USE(implicit_cast<TNode<BoolT>>(t955));
                        Branch(implicit_cast<TNode<BoolT>>(t955), label__True_300, label__False_301);
                        if (label__True_300->is_used())
                        {
                          BIND(label__True_300);
                          // ../../src/builtins/data-view.tq:317:31
                          {
                            // ../../src/builtins/data-view.tq:318:13
                            TNode<BoolT> t956 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                            *need_two_digits_215 = implicit_cast<TNode<BoolT>>(t956);
                          }
                          Goto(label__False_301);
                        }
                        BIND(label__False_301);
                      }
                    }
                    Goto(label_if_done_label_722_1172);
                  }
                  if (label__False_297->is_used())
                  {
                    BIND(label__False_297);
                    // ../../src/builtins/data-view.tq:321:16
                    {
                      // ../../src/builtins/data-view.tq:323:11
                      TNode<BoolT> t957 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                      *need_two_digits_215 = implicit_cast<TNode<BoolT>>(t957);
                    }
                    Goto(label_if_done_label_722_1172);
                  }
                  BIND(label_if_done_label_722_1172);
                }
              }
            } else {
              // ../../src/builtins/data-view.tq:326:14
              {
                // ../../src/builtins/data-view.tq:329:9
                TNode<BoolT> t958 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
                *need_two_digits_215 = implicit_cast<TNode<BoolT>>(t958);
              }
            }
          }
        }
        Goto(label__False_293);
      }
      BIND(label__False_293);
    }
    // ../../src/builtins/data-view.tq:334:5
    TVARIABLE(BigInt, result_219_impl);
    auto result_219 = &result_219_impl;
    USE(result_219);
    // ../../src/builtins/data-view.tq:335:5
    {
      Label label__True_302_impl(this);
      Label* label__True_302 = &label__True_302_impl;
      USE(label__True_302);
      Label label__False_303_impl(this);
      Label* label__False_303 = &label__False_303_impl;
      USE(label__False_303);
      Label label_if_done_label_723_1173_impl(this, {result_219});
      Label* label_if_done_label_723_1173 = &label_if_done_label_723_1173_impl;
      USE(label_if_done_label_723_1173);
      Branch(implicit_cast<TNode<BoolT>>((*need_two_digits_215).value()), label__True_302, label__False_303);
      if (label__True_302->is_used())
      {
        BIND(label__True_302);
        // ../../src/builtins/data-view.tq:335:26
        {
          // ../../src/builtins/data-view.tq:336:7
          TNode<BigInt> t959 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*is_positive_216).value()), implicit_cast<int31_t>(kTwoDigitBigInt())));
          USE(implicit_cast<TNode<BigInt>>(t959));
          *result_219 = implicit_cast<TNode<BigInt>>(t959);
        }
        Goto(label_if_done_label_723_1173);
      }
      if (label__False_303->is_used())
      {
        BIND(label__False_303);
        // ../../src/builtins/data-view.tq:337:12
        {
          // ../../src/builtins/data-view.tq:338:7
          TNode<BigInt> t960 = UncheckedCast<BigInt>(CreateEmptyBigInt(implicit_cast<TNode<BoolT>>((*is_positive_216).value()), implicit_cast<int31_t>(kOneDigitBigInt())));
          USE(implicit_cast<TNode<BigInt>>(t960));
          *result_219 = implicit_cast<TNode<BigInt>>(t960);
        }
        Goto(label_if_done_label_723_1173);
      }
      BIND(label_if_done_label_723_1173);
    }
    // ../../src/builtins/data-view.tq:342:5
    int31_t t961 = 0;
    TNode<IntPtrT> t962 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Int32T>>((*low_part_217).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t962));
    TNode<UintPtrT> t963 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>(t962)));
    USE(implicit_cast<TNode<UintPtrT>>(t963));
    StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_219).value()), implicit_cast<int31_t>(t961), implicit_cast<TNode<UintPtrT>>(t963));
    // ../../src/builtins/data-view.tq:344:5
    {
      Label label__True_304_impl(this);
      Label* label__True_304 = &label__True_304_impl;
      USE(label__True_304);
      Label label__False_305_impl(this, {});
      Label* label__False_305 = &label__False_305_impl;
      USE(label__False_305);
      Branch(implicit_cast<TNode<BoolT>>((*need_two_digits_215).value()), label__True_304, label__False_305);
      if (label__True_304->is_used())
      {
        BIND(label__True_304);
        // ../../src/builtins/data-view.tq:344:26
        {
          // ../../src/builtins/data-view.tq:345:7
          int31_t t964 = 1;
          TNode<IntPtrT> t965 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<TNode<Int32T>>((*high_part_218).value())));
          USE(implicit_cast<TNode<IntPtrT>>(t965));
          TNode<UintPtrT> t966 = UncheckedCast<UintPtrT>(Unsigned(implicit_cast<TNode<IntPtrT>>(t965)));
          USE(implicit_cast<TNode<UintPtrT>>(t966));
          StoreBigIntDigit(implicit_cast<TNode<BigInt>>((*result_219).value()), implicit_cast<int31_t>(t964), implicit_cast<TNode<UintPtrT>>(t966));
        }
        Goto(label__False_305);
      }
      BIND(label__False_305);
    }
    // ../../src/builtins/data-view.tq:348:5
    *_return_214 = implicit_cast<TNode<BigInt>>((*result_219).value());
    Goto(label_macro_end_1171);
  }
  BIND(label_macro_end_1171);
  return implicit_cast<TNode<BigInt>>((*_return_214).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigInt(TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, bool p_signed) {
  TVARIABLE(BigInt, _return_220_impl);
  auto _return_220 = &_return_220_impl;
  USE(_return_220);
  Label label_macro_end_1174_impl(this, {_return_220});
  Label* label_macro_end_1174 = &label_macro_end_1174_impl;
  USE(label_macro_end_1174);
  // ../../src/builtins/data-view.tq:352:52
  {
    // ../../src/builtins/data-view.tq:355:5
    {
      bool t967 = Is64();
      USE(implicit_cast<bool>(t967));
      if ((implicit_cast<bool>(t967))) {
        // ../../src/builtins/data-view.tq:355:27
        {
          // ../../src/builtins/data-view.tq:356:7
          TNode<BigInt> t968 = UncheckedCast<BigInt>(MakeBigIntOn64Bit(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<bool>(p_signed)));
          USE(implicit_cast<TNode<BigInt>>(t968));
          *_return_220 = implicit_cast<TNode<BigInt>>(t968);
          Goto(label_macro_end_1174);
        }
      } else {
        // ../../src/builtins/data-view.tq:357:12
        {
          // ../../src/builtins/data-view.tq:358:7
          TNode<BigInt> t969 = UncheckedCast<BigInt>(MakeBigIntOn32Bit(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<bool>(p_signed)));
          USE(implicit_cast<TNode<BigInt>>(t969));
          *_return_220 = implicit_cast<TNode<BigInt>>(t969);
          Goto(label_macro_end_1174);
        }
      }
    }
  }
  BIND(label_macro_end_1174);
  return implicit_cast<TNode<BigInt>>((*_return_220).value());
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::LoadDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BoolT> p_requested_little_endian, bool p_signed) {
  TVARIABLE(BigInt, _return_221_impl);
  auto _return_221 = &_return_221_impl;
  USE(_return_221);
  Label label_macro_end_1175_impl(this, {_return_221});
  Label* label_macro_end_1175 = &label_macro_end_1175_impl;
  USE(label_macro_end_1175);
  // ../../src/builtins/data-view.tq:364:60
  {
    // ../../src/builtins/data-view.tq:365:5
    TNode<RawPtrT> t970 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_222_impl);
    auto data_pointer_222 = &data_pointer_222_impl;
    USE(data_pointer_222);
    *data_pointer_222 = implicit_cast<TNode<RawPtrT>>(t970);
    // ../../src/builtins/data-view.tq:367:5
    TNode<Uint32T> t971 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_222).value()), implicit_cast<TNode<IntPtrT>>(p_offset)));
    USE(implicit_cast<TNode<Uint32T>>(t971));
    TVARIABLE(Uint32T, b0_223_impl);
    auto b0_223 = &b0_223_impl;
    USE(b0_223);
    *b0_223 = implicit_cast<TNode<Uint32T>>(t971);
    // ../../src/builtins/data-view.tq:368:5
    int31_t t972 = 1;
    TNode<IntPtrT> t973 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t972)));
    TNode<IntPtrT> t974 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t973)));
    USE(implicit_cast<TNode<IntPtrT>>(t974));
    TNode<Uint32T> t975 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_222).value()), implicit_cast<TNode<IntPtrT>>(t974)));
    USE(implicit_cast<TNode<Uint32T>>(t975));
    TVARIABLE(Uint32T, b1_224_impl);
    auto b1_224 = &b1_224_impl;
    USE(b1_224);
    *b1_224 = implicit_cast<TNode<Uint32T>>(t975);
    // ../../src/builtins/data-view.tq:369:5
    int31_t t976 = 2;
    TNode<IntPtrT> t977 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t976)));
    TNode<IntPtrT> t978 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t977)));
    USE(implicit_cast<TNode<IntPtrT>>(t978));
    TNode<Uint32T> t979 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_222).value()), implicit_cast<TNode<IntPtrT>>(t978)));
    USE(implicit_cast<TNode<Uint32T>>(t979));
    TVARIABLE(Uint32T, b2_225_impl);
    auto b2_225 = &b2_225_impl;
    USE(b2_225);
    *b2_225 = implicit_cast<TNode<Uint32T>>(t979);
    // ../../src/builtins/data-view.tq:370:5
    int31_t t980 = 3;
    TNode<IntPtrT> t981 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t980)));
    TNode<IntPtrT> t982 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t981)));
    USE(implicit_cast<TNode<IntPtrT>>(t982));
    TNode<Uint32T> t983 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_222).value()), implicit_cast<TNode<IntPtrT>>(t982)));
    USE(implicit_cast<TNode<Uint32T>>(t983));
    TVARIABLE(Uint32T, b3_226_impl);
    auto b3_226 = &b3_226_impl;
    USE(b3_226);
    *b3_226 = implicit_cast<TNode<Uint32T>>(t983);
    // ../../src/builtins/data-view.tq:371:5
    int31_t t984 = 4;
    TNode<IntPtrT> t985 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t984)));
    TNode<IntPtrT> t986 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t985)));
    USE(implicit_cast<TNode<IntPtrT>>(t986));
    TNode<Uint32T> t987 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_222).value()), implicit_cast<TNode<IntPtrT>>(t986)));
    USE(implicit_cast<TNode<Uint32T>>(t987));
    TVARIABLE(Uint32T, b4_227_impl);
    auto b4_227 = &b4_227_impl;
    USE(b4_227);
    *b4_227 = implicit_cast<TNode<Uint32T>>(t987);
    // ../../src/builtins/data-view.tq:372:5
    int31_t t988 = 5;
    TNode<IntPtrT> t989 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t988)));
    TNode<IntPtrT> t990 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t989)));
    USE(implicit_cast<TNode<IntPtrT>>(t990));
    TNode<Uint32T> t991 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_222).value()), implicit_cast<TNode<IntPtrT>>(t990)));
    USE(implicit_cast<TNode<Uint32T>>(t991));
    TVARIABLE(Uint32T, b5_228_impl);
    auto b5_228 = &b5_228_impl;
    USE(b5_228);
    *b5_228 = implicit_cast<TNode<Uint32T>>(t991);
    // ../../src/builtins/data-view.tq:373:5
    int31_t t992 = 6;
    TNode<IntPtrT> t993 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t992)));
    TNode<IntPtrT> t994 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t993)));
    USE(implicit_cast<TNode<IntPtrT>>(t994));
    TNode<Uint32T> t995 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_222).value()), implicit_cast<TNode<IntPtrT>>(t994)));
    USE(implicit_cast<TNode<Uint32T>>(t995));
    TVARIABLE(Uint32T, b6_229_impl);
    auto b6_229 = &b6_229_impl;
    USE(b6_229);
    *b6_229 = implicit_cast<TNode<Uint32T>>(t995);
    // ../../src/builtins/data-view.tq:374:5
    int31_t t996 = 7;
    TNode<IntPtrT> t997 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t996)));
    TNode<IntPtrT> t998 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t997)));
    USE(implicit_cast<TNode<IntPtrT>>(t998));
    TNode<Uint32T> t999 = UncheckedCast<Uint32T>(LoadUint8(implicit_cast<TNode<RawPtrT>>((*data_pointer_222).value()), implicit_cast<TNode<IntPtrT>>(t998)));
    USE(implicit_cast<TNode<Uint32T>>(t999));
    TVARIABLE(Uint32T, b7_230_impl);
    auto b7_230 = &b7_230_impl;
    USE(b7_230);
    *b7_230 = implicit_cast<TNode<Uint32T>>(t999);
    // ../../src/builtins/data-view.tq:375:5
    TVARIABLE(Uint32T, low_word_231_impl);
    auto low_word_231 = &low_word_231_impl;
    USE(low_word_231);
    // ../../src/builtins/data-view.tq:376:5
    TVARIABLE(Uint32T, high_word_232_impl);
    auto high_word_232 = &high_word_232_impl;
    USE(high_word_232);
    // ../../src/builtins/data-view.tq:378:5
    {
      Label label__True_308_impl(this);
      Label* label__True_308 = &label__True_308_impl;
      USE(label__True_308);
      Label label__False_309_impl(this);
      Label* label__False_309 = &label__False_309_impl;
      USE(label__False_309);
      Label label_if_done_label_724_1176_impl(this, {high_word_232, low_word_231});
      Label* label_if_done_label_724_1176 = &label_if_done_label_724_1176_impl;
      USE(label_if_done_label_724_1176);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_308, label__False_309);
      if (label__True_308->is_used())
      {
        BIND(label__True_308);
        // ../../src/builtins/data-view.tq:378:34
        {
          // ../../src/builtins/data-view.tq:379:7
          int31_t t1000 = 24;
          TNode<Uint32T> t1001 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1000)));
          TNode<Uint32T> t1002 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b3_226).value()), implicit_cast<TNode<Uint32T>>(t1001)));
          USE(implicit_cast<TNode<Uint32T>>(t1002));
          int31_t t1003 = 16;
          TNode<Uint32T> t1004 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1003)));
          TNode<Uint32T> t1005 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_225).value()), implicit_cast<TNode<Uint32T>>(t1004)));
          USE(implicit_cast<TNode<Uint32T>>(t1005));
          TNode<Uint32T> t1006 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1002), implicit_cast<TNode<Uint32T>>(t1005)));
          USE(implicit_cast<TNode<Uint32T>>(t1006));
          int31_t t1007 = 8;
          TNode<Uint32T> t1008 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1007)));
          TNode<Uint32T> t1009 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_224).value()), implicit_cast<TNode<Uint32T>>(t1008)));
          USE(implicit_cast<TNode<Uint32T>>(t1009));
          TNode<Uint32T> t1010 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1006), implicit_cast<TNode<Uint32T>>(t1009)));
          USE(implicit_cast<TNode<Uint32T>>(t1010));
          TNode<Uint32T> t1011 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1010), implicit_cast<TNode<Uint32T>>((*b0_223).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1011));
          *low_word_231 = implicit_cast<TNode<Uint32T>>(t1011);
          // ../../src/builtins/data-view.tq:380:7
          int31_t t1012 = 24;
          TNode<Uint32T> t1013 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1012)));
          TNode<Uint32T> t1014 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b7_230).value()), implicit_cast<TNode<Uint32T>>(t1013)));
          USE(implicit_cast<TNode<Uint32T>>(t1014));
          int31_t t1015 = 16;
          TNode<Uint32T> t1016 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1015)));
          TNode<Uint32T> t1017 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_229).value()), implicit_cast<TNode<Uint32T>>(t1016)));
          USE(implicit_cast<TNode<Uint32T>>(t1017));
          TNode<Uint32T> t1018 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1014), implicit_cast<TNode<Uint32T>>(t1017)));
          USE(implicit_cast<TNode<Uint32T>>(t1018));
          int31_t t1019 = 8;
          TNode<Uint32T> t1020 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1019)));
          TNode<Uint32T> t1021 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_228).value()), implicit_cast<TNode<Uint32T>>(t1020)));
          USE(implicit_cast<TNode<Uint32T>>(t1021));
          TNode<Uint32T> t1022 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1018), implicit_cast<TNode<Uint32T>>(t1021)));
          USE(implicit_cast<TNode<Uint32T>>(t1022));
          TNode<Uint32T> t1023 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1022), implicit_cast<TNode<Uint32T>>((*b4_227).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1023));
          *high_word_232 = implicit_cast<TNode<Uint32T>>(t1023);
        }
        Goto(label_if_done_label_724_1176);
      }
      if (label__False_309->is_used())
      {
        BIND(label__False_309);
        // ../../src/builtins/data-view.tq:381:12
        {
          // ../../src/builtins/data-view.tq:382:7
          int31_t t1024 = 24;
          TNode<Uint32T> t1025 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1024)));
          TNode<Uint32T> t1026 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b0_223).value()), implicit_cast<TNode<Uint32T>>(t1025)));
          USE(implicit_cast<TNode<Uint32T>>(t1026));
          int31_t t1027 = 16;
          TNode<Uint32T> t1028 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1027)));
          TNode<Uint32T> t1029 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b1_224).value()), implicit_cast<TNode<Uint32T>>(t1028)));
          USE(implicit_cast<TNode<Uint32T>>(t1029));
          TNode<Uint32T> t1030 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1026), implicit_cast<TNode<Uint32T>>(t1029)));
          USE(implicit_cast<TNode<Uint32T>>(t1030));
          int31_t t1031 = 8;
          TNode<Uint32T> t1032 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1031)));
          TNode<Uint32T> t1033 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b2_225).value()), implicit_cast<TNode<Uint32T>>(t1032)));
          USE(implicit_cast<TNode<Uint32T>>(t1033));
          TNode<Uint32T> t1034 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1030), implicit_cast<TNode<Uint32T>>(t1033)));
          USE(implicit_cast<TNode<Uint32T>>(t1034));
          TNode<Uint32T> t1035 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1034), implicit_cast<TNode<Uint32T>>((*b3_226).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1035));
          *high_word_232 = implicit_cast<TNode<Uint32T>>(t1035);
          // ../../src/builtins/data-view.tq:383:7
          int31_t t1036 = 24;
          TNode<Uint32T> t1037 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1036)));
          TNode<Uint32T> t1038 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b4_227).value()), implicit_cast<TNode<Uint32T>>(t1037)));
          USE(implicit_cast<TNode<Uint32T>>(t1038));
          int31_t t1039 = 16;
          TNode<Uint32T> t1040 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1039)));
          TNode<Uint32T> t1041 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b5_228).value()), implicit_cast<TNode<Uint32T>>(t1040)));
          USE(implicit_cast<TNode<Uint32T>>(t1041));
          TNode<Uint32T> t1042 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1038), implicit_cast<TNode<Uint32T>>(t1041)));
          USE(implicit_cast<TNode<Uint32T>>(t1042));
          int31_t t1043 = 8;
          TNode<Uint32T> t1044 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1043)));
          TNode<Uint32T> t1045 = UncheckedCast<Uint32T>(Word32Shl(implicit_cast<TNode<Uint32T>>((*b6_229).value()), implicit_cast<TNode<Uint32T>>(t1044)));
          USE(implicit_cast<TNode<Uint32T>>(t1045));
          TNode<Uint32T> t1046 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1042), implicit_cast<TNode<Uint32T>>(t1045)));
          USE(implicit_cast<TNode<Uint32T>>(t1046));
          TNode<Uint32T> t1047 = UncheckedCast<Uint32T>(Word32Or(implicit_cast<TNode<Uint32T>>(t1046), implicit_cast<TNode<Uint32T>>((*b7_230).value())));
          USE(implicit_cast<TNode<Uint32T>>(t1047));
          *low_word_231 = implicit_cast<TNode<Uint32T>>(t1047);
        }
        Goto(label_if_done_label_724_1176);
      }
      BIND(label_if_done_label_724_1176);
    }
    // ../../src/builtins/data-view.tq:386:5
    TNode<BigInt> t1048 = UncheckedCast<BigInt>(MakeBigInt(implicit_cast<TNode<Uint32T>>((*low_word_231).value()), implicit_cast<TNode<Uint32T>>((*high_word_232).value()), implicit_cast<bool>(p_signed)));
    USE(implicit_cast<TNode<BigInt>>(t1048));
    *_return_221 = implicit_cast<TNode<BigInt>>(t1048);
    Goto(label_macro_end_1175);
  }
  BIND(label_macro_end_1175);
  return implicit_cast<TNode<BigInt>>((*_return_221).value());
}

compiler::TNode<Numeric> DataViewBuiltinsFromDSLAssembler::DataViewGet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Numeric, _return_233_impl);
  auto _return_233 = &_return_233_impl;
  USE(_return_233);
  Label label_macro_end_1177_impl(this, {_return_233});
  Label* label_macro_end_1177 = &label_macro_end_1177_impl;
  USE(label_macro_end_1177);
  // ../../src/builtins/data-view.tq:396:60
  {
    // ../../src/builtins/data-view.tq:398:5
    TNode<String> t1049 = UncheckedCast<String>(MakeDataViewGetterNameString(implicit_cast<ElementsKind>(p_kind)));
    USE(implicit_cast<TNode<String>>(t1049));
    TNode<JSDataView> t1050 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t1049)));
    USE(implicit_cast<TNode<JSDataView>>(t1050));
    TVARIABLE(JSDataView, data_view_234_impl);
    auto data_view_234 = &data_view_234_impl;
    USE(data_view_234);
    *data_view_234 = implicit_cast<TNode<JSDataView>>(t1050);
    // ../../src/builtins/data-view.tq:401:5
    TVARIABLE(Number, getIndex_235_impl);
    auto getIndex_235 = &getIndex_235_impl;
    USE(getIndex_235);
    // ../../src/builtins/data-view.tq:402:5
    {
      Label label_try_done_725_1178_impl(this);
      Label* label_try_done_725_1178 = &label_try_done_725_1178_impl;
      USE(label_try_done_725_1178);
      Label label_RangeError_310_impl(this);
      Label* label_RangeError_310 = &label_RangeError_310_impl;
      USE(label_RangeError_310);
      Label label_try_begin_726_1179_impl(this);
      Label* label_try_begin_726_1179 = &label_try_begin_726_1179_impl;
      USE(label_try_begin_726_1179);
      Goto(label_try_begin_726_1179);
      if (label_try_begin_726_1179->is_used())
      {
        BIND(label_try_begin_726_1179);
        // ../../src/builtins/data-view.tq:402:9
        {
          // ../../src/builtins/data-view.tq:403:7
          TNode<Number> t1051 = UncheckedCast<Number>(ToIndex(implicit_cast<TNode<Object>>(p_offset), implicit_cast<TNode<Context>>(p_context), label_RangeError_310));
          USE(implicit_cast<TNode<Number>>(t1051));
          *getIndex_235 = implicit_cast<TNode<Number>>(t1051);
        }
        Goto(label_try_done_725_1178);
      }
      if (label_RangeError_310->is_used())
      {
        BIND(label_RangeError_310);
        // ../../src/builtins/data-view.tq:405:22
        {
          // ../../src/builtins/data-view.tq:406:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label_try_done_725_1178);
    }
    // ../../src/builtins/data-view.tq:409:5
    TNode<BoolT> t1052 = UncheckedCast<BoolT>(ToBoolean(implicit_cast<TNode<Object>>(p_requested_little_endian)));
    USE(implicit_cast<TNode<BoolT>>(t1052));
    TVARIABLE(BoolT, littleEndian_236_impl);
    auto littleEndian_236 = &littleEndian_236_impl;
    USE(littleEndian_236);
    *littleEndian_236 = implicit_cast<TNode<BoolT>>(t1052);
    // ../../src/builtins/data-view.tq:410:5
    TNode<JSArrayBuffer> t1053 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*data_view_234).value())));
    TVARIABLE(JSArrayBuffer, buffer_237_impl);
    auto buffer_237 = &buffer_237_impl;
    USE(buffer_237);
    *buffer_237 = implicit_cast<TNode<JSArrayBuffer>>(t1053);
    // ../../src/builtins/data-view.tq:412:5
    {
      Label label__True_311_impl(this);
      Label* label__True_311 = &label__True_311_impl;
      USE(label__True_311);
      Label label__False_312_impl(this, {});
      Label* label__False_312 = &label__False_312_impl;
      USE(label__False_312);
      TNode<BoolT> t1054 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value())));
      USE(implicit_cast<TNode<BoolT>>(t1054));
      Branch(implicit_cast<TNode<BoolT>>(t1054), label__True_311, label__False_312);
      if (label__True_311->is_used())
      {
        BIND(label__True_311);
        // ../../src/builtins/data-view.tq:412:35
        {
          // ../../src/builtins/data-view.tq:413:7
          TNode<String> t1055 = UncheckedCast<String>(MakeDataViewGetterNameString(implicit_cast<ElementsKind>(p_kind)));
          USE(implicit_cast<TNode<String>>(t1055));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t1055));
        }
      }
      BIND(label__False_312);
    }
    // ../../src/builtins/data-view.tq:417:5
    TNode<Number> t1056 = UncheckedCast<Number>(LoadDataViewByteOffset(implicit_cast<TNode<JSDataView>>((*data_view_234).value())));
    TVARIABLE(Number, viewOffset_238_impl);
    auto viewOffset_238 = &viewOffset_238_impl;
    USE(viewOffset_238);
    *viewOffset_238 = implicit_cast<TNode<Number>>(t1056);
    // ../../src/builtins/data-view.tq:418:5
    TNode<Number> t1057 = UncheckedCast<Number>(LoadDataViewByteLength(implicit_cast<TNode<JSDataView>>((*data_view_234).value())));
    TVARIABLE(Number, viewSize_239_impl);
    auto viewSize_239 = &viewSize_239_impl;
    USE(viewSize_239);
    *viewSize_239 = implicit_cast<TNode<Number>>(t1057);
    // ../../src/builtins/data-view.tq:419:5
    int31_t t1058 = DataViewElementSize(implicit_cast<ElementsKind>(p_kind));
    USE(implicit_cast<int31_t>(t1058));
    TVARIABLE(Number, elementSize_240_impl);
    auto elementSize_240 = &elementSize_240_impl;
    USE(elementSize_240);
    TNode<Number> t1059 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t1058)));
    *elementSize_240 = implicit_cast<TNode<Number>>(t1059);
    // ../../src/builtins/data-view.tq:421:5
    {
      Label label__True_313_impl(this);
      Label* label__True_313 = &label__True_313_impl;
      USE(label__True_313);
      Label label__False_314_impl(this, {});
      Label* label__False_314 = &label__False_314_impl;
      USE(label__False_314);
      TNode<Number> t1060 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*getIndex_235).value()), implicit_cast<TNode<Number>>((*elementSize_240).value())));
      USE(implicit_cast<TNode<Number>>(t1060));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t1060), implicit_cast<TNode<Number>>((*viewSize_239).value()), label__True_313, label__False_314);
      if (label__True_313->is_used())
      {
        BIND(label__True_313);
        // ../../src/builtins/data-view.tq:421:44
        {
          // ../../src/builtins/data-view.tq:422:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label__False_314);
    }
    // ../../src/builtins/data-view.tq:425:5
    TNode<Float64T> t1061 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*getIndex_235).value())));
    USE(implicit_cast<TNode<Float64T>>(t1061));
    TVARIABLE(Float64T, getIndexFloat_241_impl);
    auto getIndexFloat_241 = &getIndexFloat_241_impl;
    USE(getIndexFloat_241);
    *getIndexFloat_241 = implicit_cast<TNode<Float64T>>(t1061);
    // ../../src/builtins/data-view.tq:426:5
    TNode<UintPtrT> t1062 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*getIndexFloat_241).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1062));
    TNode<IntPtrT> t1063 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1062)));
    USE(implicit_cast<TNode<IntPtrT>>(t1063));
    TVARIABLE(IntPtrT, getIndexIntptr_242_impl);
    auto getIndexIntptr_242 = &getIndexIntptr_242_impl;
    USE(getIndexIntptr_242);
    *getIndexIntptr_242 = implicit_cast<TNode<IntPtrT>>(t1063);
    // ../../src/builtins/data-view.tq:427:5
    TNode<Float64T> t1064 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*viewOffset_238).value())));
    USE(implicit_cast<TNode<Float64T>>(t1064));
    TVARIABLE(Float64T, viewOffsetFloat_243_impl);
    auto viewOffsetFloat_243 = &viewOffsetFloat_243_impl;
    USE(viewOffsetFloat_243);
    *viewOffsetFloat_243 = implicit_cast<TNode<Float64T>>(t1064);
    // ../../src/builtins/data-view.tq:428:5
    TNode<UintPtrT> t1065 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*viewOffsetFloat_243).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1065));
    TNode<IntPtrT> t1066 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1065)));
    USE(implicit_cast<TNode<IntPtrT>>(t1066));
    TVARIABLE(IntPtrT, viewOffsetIntptr_244_impl);
    auto viewOffsetIntptr_244 = &viewOffsetIntptr_244_impl;
    USE(viewOffsetIntptr_244);
    *viewOffsetIntptr_244 = implicit_cast<TNode<IntPtrT>>(t1066);
    // ../../src/builtins/data-view.tq:430:5
    TNode<IntPtrT> t1067 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*getIndexIntptr_242).value()), implicit_cast<TNode<IntPtrT>>((*viewOffsetIntptr_244).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t1067));
    TVARIABLE(IntPtrT, bufferIndex_245_impl);
    auto bufferIndex_245 = &bufferIndex_245_impl;
    USE(bufferIndex_245);
    *bufferIndex_245 = implicit_cast<TNode<IntPtrT>>(t1067);
    // ../../src/builtins/data-view.tq:432:5
    {
      bool t1068 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t1068));
      if ((implicit_cast<bool>(t1068))) {
        // ../../src/builtins/data-view.tq:432:43
        {
          // ../../src/builtins/data-view.tq:433:7
          TNode<Smi> t1069 = UncheckedCast<Smi>(LoadDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<bool>(false)));
          USE(implicit_cast<TNode<Smi>>(t1069));
          *_return_233 = implicit_cast<TNode<Numeric>>(t1069);
          Goto(label_macro_end_1177);
        }
      } else {
        // ../../src/builtins/data-view.tq:434:12
        {
          bool t1070 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
          USE(implicit_cast<bool>(t1070));
          if ((implicit_cast<bool>(t1070))) {
            // ../../src/builtins/data-view.tq:434:49
            {
              // ../../src/builtins/data-view.tq:435:7
              TNode<Smi> t1071 = UncheckedCast<Smi>(LoadDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<bool>(true)));
              USE(implicit_cast<TNode<Smi>>(t1071));
              *_return_233 = implicit_cast<TNode<Numeric>>(t1071);
              Goto(label_macro_end_1177);
            }
          } else {
            // ../../src/builtins/data-view.tq:436:12
            {
              bool t1072 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
              USE(implicit_cast<bool>(t1072));
              if ((implicit_cast<bool>(t1072))) {
                // ../../src/builtins/data-view.tq:436:51
                {
                  // ../../src/builtins/data-view.tq:437:7
                  TNode<Number> t1073 = UncheckedCast<Number>(LoadDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<TNode<BoolT>>((*littleEndian_236).value()), implicit_cast<bool>(false)));
                  USE(implicit_cast<TNode<Number>>(t1073));
                  *_return_233 = implicit_cast<TNode<Numeric>>(t1073);
                  Goto(label_macro_end_1177);
                }
              } else {
                // ../../src/builtins/data-view.tq:438:12
                {
                  bool t1074 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                  USE(implicit_cast<bool>(t1074));
                  if ((implicit_cast<bool>(t1074))) {
                    // ../../src/builtins/data-view.tq:438:50
                    {
                      // ../../src/builtins/data-view.tq:439:7
                      TNode<Number> t1075 = UncheckedCast<Number>(LoadDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<TNode<BoolT>>((*littleEndian_236).value()), implicit_cast<bool>(true)));
                      USE(implicit_cast<TNode<Number>>(t1075));
                      *_return_233 = implicit_cast<TNode<Numeric>>(t1075);
                      Goto(label_macro_end_1177);
                    }
                  } else {
                    // ../../src/builtins/data-view.tq:440:12
                    {
                      bool t1076 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                      USE(implicit_cast<bool>(t1076));
                      if ((implicit_cast<bool>(t1076))) {
                        // ../../src/builtins/data-view.tq:440:51
                        {
                          // ../../src/builtins/data-view.tq:441:7
                          TNode<Number> t1077 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<TNode<BoolT>>((*littleEndian_236).value()), implicit_cast<ElementsKind>(p_kind)));
                          USE(implicit_cast<TNode<Number>>(t1077));
                          *_return_233 = implicit_cast<TNode<Numeric>>(t1077);
                          Goto(label_macro_end_1177);
                        }
                      } else {
                        // ../../src/builtins/data-view.tq:442:12
                        {
                          bool t1078 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                          USE(implicit_cast<bool>(t1078));
                          if ((implicit_cast<bool>(t1078))) {
                            // ../../src/builtins/data-view.tq:442:50
                            {
                              // ../../src/builtins/data-view.tq:443:7
                              TNode<Number> t1079 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<TNode<BoolT>>((*littleEndian_236).value()), implicit_cast<ElementsKind>(p_kind)));
                              USE(implicit_cast<TNode<Number>>(t1079));
                              *_return_233 = implicit_cast<TNode<Numeric>>(t1079);
                              Goto(label_macro_end_1177);
                            }
                          } else {
                            // ../../src/builtins/data-view.tq:444:12
                            {
                              bool t1080 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                              USE(implicit_cast<bool>(t1080));
                              if ((implicit_cast<bool>(t1080))) {
                                // ../../src/builtins/data-view.tq:444:52
                                {
                                  // ../../src/builtins/data-view.tq:445:7
                                  TNode<Number> t1081 = UncheckedCast<Number>(LoadDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<TNode<BoolT>>((*littleEndian_236).value()), implicit_cast<ElementsKind>(p_kind)));
                                  USE(implicit_cast<TNode<Number>>(t1081));
                                  *_return_233 = implicit_cast<TNode<Numeric>>(t1081);
                                  Goto(label_macro_end_1177);
                                }
                              } else {
                                // ../../src/builtins/data-view.tq:446:12
                                {
                                  bool t1082 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                                  USE(implicit_cast<bool>(t1082));
                                  if ((implicit_cast<bool>(t1082))) {
                                    // ../../src/builtins/data-view.tq:446:52
                                    {
                                      // ../../src/builtins/data-view.tq:447:7
                                      TNode<Number> t1083 = UncheckedCast<Number>(LoadDataViewFloat64(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<TNode<BoolT>>((*littleEndian_236).value())));
                                      USE(implicit_cast<TNode<Number>>(t1083));
                                      *_return_233 = implicit_cast<TNode<Numeric>>(t1083);
                                      Goto(label_macro_end_1177);
                                    }
                                  } else {
                                    // ../../src/builtins/data-view.tq:448:12
                                    {
                                      bool t1084 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
                                      USE(implicit_cast<bool>(t1084));
                                      if ((implicit_cast<bool>(t1084))) {
                                        // ../../src/builtins/data-view.tq:448:54
                                        {
                                          // ../../src/builtins/data-view.tq:449:7
                                          TNode<BigInt> t1085 = UncheckedCast<BigInt>(LoadDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<TNode<BoolT>>((*littleEndian_236).value()), implicit_cast<bool>(false)));
                                          USE(implicit_cast<TNode<BigInt>>(t1085));
                                          *_return_233 = implicit_cast<TNode<Numeric>>(t1085);
                                          Goto(label_macro_end_1177);
                                        }
                                      } else {
                                        // ../../src/builtins/data-view.tq:450:12
                                        {
                                          bool t1086 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
                                          USE(implicit_cast<bool>(t1086));
                                          if ((implicit_cast<bool>(t1086))) {
                                            // ../../src/builtins/data-view.tq:450:53
                                            {
                                              // ../../src/builtins/data-view.tq:451:7
                                              TNode<BigInt> t1087 = UncheckedCast<BigInt>(LoadDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_237).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_245).value()), implicit_cast<TNode<BoolT>>((*littleEndian_236).value()), implicit_cast<bool>(true)));
                                              USE(implicit_cast<TNode<BigInt>>(t1087));
                                              *_return_233 = implicit_cast<TNode<Numeric>>(t1087);
                                              Goto(label_macro_end_1177);
                                            }
                                          } else {
                                            // ../../src/builtins/data-view.tq:452:12
                                            {
                                              // ../../src/builtins/data-view.tq:453:7
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
  BIND(label_macro_end_1177);
  return implicit_cast<TNode<Numeric>>((*_return_233).value());
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
  // ../../src/builtins/data-view.tq:458:63
  {
    // ../../src/builtins/data-view.tq:459:7
    auto t1088 = [=]() {
      int31_t t1090 = 0;
      TNode<IntPtrT> t1091 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1090)));
      TNode<Object> t1092 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1091)));
      return implicit_cast<TNode<Object>>(t1092);
    };
    auto t1089 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1093_727_impl);
    auto t1093_727 = &t1093_727_impl;
    USE(t1093_727);
    {
      Label label__True_335_impl(this);
      Label* label__True_335 = &label__True_335_impl;
      USE(label__True_335);
      Label label__False_336_impl(this);
      Label* label__False_336 = &label__False_336_impl;
      USE(label__False_336);
      Label label__done_728_1180_impl(this, {t1093_727});
      Label* label__done_728_1180 = &label__done_728_1180_impl;
      USE(label__done_728_1180);
      TNode<IntPtrT> t1094 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1095 = 0;
      TNode<IntPtrT> t1096 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1095)));
      TNode<BoolT> t1097 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1094), implicit_cast<TNode<IntPtrT>>(t1096)));
      USE(implicit_cast<TNode<BoolT>>(t1097));
      Branch(implicit_cast<TNode<BoolT>>(t1097), label__True_335, label__False_336);
      BIND(label__True_335);
            *t1093_727 = implicit_cast<TNode<Object>>(t1088());
      Goto(label__done_728_1180);
      BIND(label__False_336);
            *t1093_727 = implicit_cast<TNode<Object>>(t1089());
      Goto(label__done_728_1180);
      BIND(label__done_728_1180);
    }
    TVARIABLE(Object, offset_246_impl);
    auto offset_246 = &offset_246_impl;
    USE(offset_246);
    *offset_246 = implicit_cast<TNode<Object>>((*t1093_727).value());
    // ../../src/builtins/data-view.tq:462:7
    TNode<Numeric> t1098 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_246).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1098));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1098));
  }
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
  // ../../src/builtins/data-view.tq:466:65
  {
    // ../../src/builtins/data-view.tq:467:5
    auto t1099 = [=]() {
      int31_t t1101 = 0;
      TNode<IntPtrT> t1102 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1101)));
      TNode<Object> t1103 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1102)));
      return implicit_cast<TNode<Object>>(t1103);
    };
    auto t1100 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1104_729_impl);
    auto t1104_729 = &t1104_729_impl;
    USE(t1104_729);
    {
      Label label__True_337_impl(this);
      Label* label__True_337 = &label__True_337_impl;
      USE(label__True_337);
      Label label__False_338_impl(this);
      Label* label__False_338 = &label__False_338_impl;
      USE(label__False_338);
      Label label__done_730_1181_impl(this, {t1104_729});
      Label* label__done_730_1181 = &label__done_730_1181_impl;
      USE(label__done_730_1181);
      TNode<IntPtrT> t1105 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1106 = 0;
      TNode<IntPtrT> t1107 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1106)));
      TNode<BoolT> t1108 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1105), implicit_cast<TNode<IntPtrT>>(t1107)));
      USE(implicit_cast<TNode<BoolT>>(t1108));
      Branch(implicit_cast<TNode<BoolT>>(t1108), label__True_337, label__False_338);
      BIND(label__True_337);
            *t1104_729 = implicit_cast<TNode<Object>>(t1099());
      Goto(label__done_730_1181);
      BIND(label__False_338);
            *t1104_729 = implicit_cast<TNode<Object>>(t1100());
      Goto(label__done_730_1181);
      BIND(label__done_730_1181);
    }
    TVARIABLE(Object, offset_247_impl);
    auto offset_247 = &offset_247_impl;
    USE(offset_247);
    *offset_247 = implicit_cast<TNode<Object>>((*t1104_729).value());
    // ../../src/builtins/data-view.tq:470:5
    TNode<Numeric> t1109 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_247).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(INT8_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1109));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1109));
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
  // ../../src/builtins/data-view.tq:474:63
  {
    // ../../src/builtins/data-view.tq:475:7
    auto t1110 = [=]() {
      int31_t t1112 = 0;
      TNode<IntPtrT> t1113 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1112)));
      TNode<Object> t1114 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1113)));
      return implicit_cast<TNode<Object>>(t1114);
    };
    auto t1111 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1115_731_impl);
    auto t1115_731 = &t1115_731_impl;
    USE(t1115_731);
    {
      Label label__True_339_impl(this);
      Label* label__True_339 = &label__True_339_impl;
      USE(label__True_339);
      Label label__False_340_impl(this);
      Label* label__False_340 = &label__False_340_impl;
      USE(label__False_340);
      Label label__done_732_1182_impl(this, {t1115_731});
      Label* label__done_732_1182 = &label__done_732_1182_impl;
      USE(label__done_732_1182);
      TNode<IntPtrT> t1116 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1117 = 0;
      TNode<IntPtrT> t1118 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1117)));
      TNode<BoolT> t1119 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1116), implicit_cast<TNode<IntPtrT>>(t1118)));
      USE(implicit_cast<TNode<BoolT>>(t1119));
      Branch(implicit_cast<TNode<BoolT>>(t1119), label__True_339, label__False_340);
      BIND(label__True_339);
            *t1115_731 = implicit_cast<TNode<Object>>(t1110());
      Goto(label__done_732_1182);
      BIND(label__False_340);
            *t1115_731 = implicit_cast<TNode<Object>>(t1111());
      Goto(label__done_732_1182);
      BIND(label__done_732_1182);
    }
    TVARIABLE(Object, offset_248_impl);
    auto offset_248 = &offset_248_impl;
    USE(offset_248);
    *offset_248 = implicit_cast<TNode<Object>>((*t1115_731).value());
    // ../../src/builtins/data-view.tq:478:7
    auto t1120 = [=]() {
      int31_t t1122 = 1;
      TNode<IntPtrT> t1123 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1122)));
      TNode<Object> t1124 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1123)));
      return implicit_cast<TNode<Object>>(t1124);
    };
    auto t1121 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1125_733_impl);
    auto t1125_733 = &t1125_733_impl;
    USE(t1125_733);
    {
      Label label__True_341_impl(this);
      Label* label__True_341 = &label__True_341_impl;
      USE(label__True_341);
      Label label__False_342_impl(this);
      Label* label__False_342 = &label__False_342_impl;
      USE(label__False_342);
      Label label__done_734_1183_impl(this, {t1125_733});
      Label* label__done_734_1183 = &label__done_734_1183_impl;
      USE(label__done_734_1183);
      TNode<IntPtrT> t1126 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1127 = 1;
      TNode<IntPtrT> t1128 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1127)));
      TNode<BoolT> t1129 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1126), implicit_cast<TNode<IntPtrT>>(t1128)));
      USE(implicit_cast<TNode<BoolT>>(t1129));
      Branch(implicit_cast<TNode<BoolT>>(t1129), label__True_341, label__False_342);
      BIND(label__True_341);
            *t1125_733 = implicit_cast<TNode<Object>>(t1120());
      Goto(label__done_734_1183);
      BIND(label__False_342);
            *t1125_733 = implicit_cast<TNode<Object>>(t1121());
      Goto(label__done_734_1183);
      BIND(label__done_734_1183);
    }
    TVARIABLE(Object, is_little_endian_249_impl);
    auto is_little_endian_249 = &is_little_endian_249_impl;
    USE(is_little_endian_249);
    *is_little_endian_249 = implicit_cast<TNode<Object>>((*t1125_733).value());
    // ../../src/builtins/data-view.tq:481:7
    TNode<Numeric> t1130 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_248).value()), implicit_cast<TNode<Object>>((*is_little_endian_249).value()), implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1130));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1130));
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
  // ../../src/builtins/data-view.tq:486:63
  {
    // ../../src/builtins/data-view.tq:487:7
    auto t1131 = [=]() {
      int31_t t1133 = 0;
      TNode<IntPtrT> t1134 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1133)));
      TNode<Object> t1135 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1134)));
      return implicit_cast<TNode<Object>>(t1135);
    };
    auto t1132 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1136_735_impl);
    auto t1136_735 = &t1136_735_impl;
    USE(t1136_735);
    {
      Label label__True_343_impl(this);
      Label* label__True_343 = &label__True_343_impl;
      USE(label__True_343);
      Label label__False_344_impl(this);
      Label* label__False_344 = &label__False_344_impl;
      USE(label__False_344);
      Label label__done_736_1184_impl(this, {t1136_735});
      Label* label__done_736_1184 = &label__done_736_1184_impl;
      USE(label__done_736_1184);
      TNode<IntPtrT> t1137 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1138 = 0;
      TNode<IntPtrT> t1139 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1138)));
      TNode<BoolT> t1140 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1137), implicit_cast<TNode<IntPtrT>>(t1139)));
      USE(implicit_cast<TNode<BoolT>>(t1140));
      Branch(implicit_cast<TNode<BoolT>>(t1140), label__True_343, label__False_344);
      BIND(label__True_343);
            *t1136_735 = implicit_cast<TNode<Object>>(t1131());
      Goto(label__done_736_1184);
      BIND(label__False_344);
            *t1136_735 = implicit_cast<TNode<Object>>(t1132());
      Goto(label__done_736_1184);
      BIND(label__done_736_1184);
    }
    TVARIABLE(Object, offset_250_impl);
    auto offset_250 = &offset_250_impl;
    USE(offset_250);
    *offset_250 = implicit_cast<TNode<Object>>((*t1136_735).value());
    // ../../src/builtins/data-view.tq:490:7
    auto t1141 = [=]() {
      int31_t t1143 = 1;
      TNode<IntPtrT> t1144 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1143)));
      TNode<Object> t1145 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1144)));
      return implicit_cast<TNode<Object>>(t1145);
    };
    auto t1142 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1146_737_impl);
    auto t1146_737 = &t1146_737_impl;
    USE(t1146_737);
    {
      Label label__True_345_impl(this);
      Label* label__True_345 = &label__True_345_impl;
      USE(label__True_345);
      Label label__False_346_impl(this);
      Label* label__False_346 = &label__False_346_impl;
      USE(label__False_346);
      Label label__done_738_1185_impl(this, {t1146_737});
      Label* label__done_738_1185 = &label__done_738_1185_impl;
      USE(label__done_738_1185);
      TNode<IntPtrT> t1147 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1148 = 1;
      TNode<IntPtrT> t1149 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1148)));
      TNode<BoolT> t1150 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1147), implicit_cast<TNode<IntPtrT>>(t1149)));
      USE(implicit_cast<TNode<BoolT>>(t1150));
      Branch(implicit_cast<TNode<BoolT>>(t1150), label__True_345, label__False_346);
      BIND(label__True_345);
            *t1146_737 = implicit_cast<TNode<Object>>(t1141());
      Goto(label__done_738_1185);
      BIND(label__False_346);
            *t1146_737 = implicit_cast<TNode<Object>>(t1142());
      Goto(label__done_738_1185);
      BIND(label__done_738_1185);
    }
    TVARIABLE(Object, is_little_endian_251_impl);
    auto is_little_endian_251 = &is_little_endian_251_impl;
    USE(is_little_endian_251);
    *is_little_endian_251 = implicit_cast<TNode<Object>>((*t1146_737).value());
    // ../../src/builtins/data-view.tq:493:7
    TNode<Numeric> t1151 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_250).value()), implicit_cast<TNode<Object>>((*is_little_endian_251).value()), implicit_cast<ElementsKind>(INT16_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1151));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1151));
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
  // ../../src/builtins/data-view.tq:498:63
  {
    // ../../src/builtins/data-view.tq:499:7
    auto t1152 = [=]() {
      int31_t t1154 = 0;
      TNode<IntPtrT> t1155 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1154)));
      TNode<Object> t1156 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1155)));
      return implicit_cast<TNode<Object>>(t1156);
    };
    auto t1153 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1157_739_impl);
    auto t1157_739 = &t1157_739_impl;
    USE(t1157_739);
    {
      Label label__True_347_impl(this);
      Label* label__True_347 = &label__True_347_impl;
      USE(label__True_347);
      Label label__False_348_impl(this);
      Label* label__False_348 = &label__False_348_impl;
      USE(label__False_348);
      Label label__done_740_1186_impl(this, {t1157_739});
      Label* label__done_740_1186 = &label__done_740_1186_impl;
      USE(label__done_740_1186);
      TNode<IntPtrT> t1158 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1159 = 0;
      TNode<IntPtrT> t1160 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1159)));
      TNode<BoolT> t1161 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1158), implicit_cast<TNode<IntPtrT>>(t1160)));
      USE(implicit_cast<TNode<BoolT>>(t1161));
      Branch(implicit_cast<TNode<BoolT>>(t1161), label__True_347, label__False_348);
      BIND(label__True_347);
            *t1157_739 = implicit_cast<TNode<Object>>(t1152());
      Goto(label__done_740_1186);
      BIND(label__False_348);
            *t1157_739 = implicit_cast<TNode<Object>>(t1153());
      Goto(label__done_740_1186);
      BIND(label__done_740_1186);
    }
    TVARIABLE(Object, offset_252_impl);
    auto offset_252 = &offset_252_impl;
    USE(offset_252);
    *offset_252 = implicit_cast<TNode<Object>>((*t1157_739).value());
    // ../../src/builtins/data-view.tq:502:7
    auto t1162 = [=]() {
      int31_t t1164 = 1;
      TNode<IntPtrT> t1165 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1164)));
      TNode<Object> t1166 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1165)));
      return implicit_cast<TNode<Object>>(t1166);
    };
    auto t1163 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1167_741_impl);
    auto t1167_741 = &t1167_741_impl;
    USE(t1167_741);
    {
      Label label__True_349_impl(this);
      Label* label__True_349 = &label__True_349_impl;
      USE(label__True_349);
      Label label__False_350_impl(this);
      Label* label__False_350 = &label__False_350_impl;
      USE(label__False_350);
      Label label__done_742_1187_impl(this, {t1167_741});
      Label* label__done_742_1187 = &label__done_742_1187_impl;
      USE(label__done_742_1187);
      TNode<IntPtrT> t1168 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1169 = 1;
      TNode<IntPtrT> t1170 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1169)));
      TNode<BoolT> t1171 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1168), implicit_cast<TNode<IntPtrT>>(t1170)));
      USE(implicit_cast<TNode<BoolT>>(t1171));
      Branch(implicit_cast<TNode<BoolT>>(t1171), label__True_349, label__False_350);
      BIND(label__True_349);
            *t1167_741 = implicit_cast<TNode<Object>>(t1162());
      Goto(label__done_742_1187);
      BIND(label__False_350);
            *t1167_741 = implicit_cast<TNode<Object>>(t1163());
      Goto(label__done_742_1187);
      BIND(label__done_742_1187);
    }
    TVARIABLE(Object, is_little_endian_253_impl);
    auto is_little_endian_253 = &is_little_endian_253_impl;
    USE(is_little_endian_253);
    *is_little_endian_253 = implicit_cast<TNode<Object>>((*t1167_741).value());
    // ../../src/builtins/data-view.tq:505:7
    TNode<Numeric> t1172 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_252).value()), implicit_cast<TNode<Object>>((*is_little_endian_253).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1172));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1172));
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
  // ../../src/builtins/data-view.tq:510:63
  {
    // ../../src/builtins/data-view.tq:511:7
    auto t1173 = [=]() {
      int31_t t1175 = 0;
      TNode<IntPtrT> t1176 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1175)));
      TNode<Object> t1177 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1176)));
      return implicit_cast<TNode<Object>>(t1177);
    };
    auto t1174 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1178_743_impl);
    auto t1178_743 = &t1178_743_impl;
    USE(t1178_743);
    {
      Label label__True_351_impl(this);
      Label* label__True_351 = &label__True_351_impl;
      USE(label__True_351);
      Label label__False_352_impl(this);
      Label* label__False_352 = &label__False_352_impl;
      USE(label__False_352);
      Label label__done_744_1188_impl(this, {t1178_743});
      Label* label__done_744_1188 = &label__done_744_1188_impl;
      USE(label__done_744_1188);
      TNode<IntPtrT> t1179 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1180 = 0;
      TNode<IntPtrT> t1181 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1180)));
      TNode<BoolT> t1182 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1179), implicit_cast<TNode<IntPtrT>>(t1181)));
      USE(implicit_cast<TNode<BoolT>>(t1182));
      Branch(implicit_cast<TNode<BoolT>>(t1182), label__True_351, label__False_352);
      BIND(label__True_351);
            *t1178_743 = implicit_cast<TNode<Object>>(t1173());
      Goto(label__done_744_1188);
      BIND(label__False_352);
            *t1178_743 = implicit_cast<TNode<Object>>(t1174());
      Goto(label__done_744_1188);
      BIND(label__done_744_1188);
    }
    TVARIABLE(Object, offset_254_impl);
    auto offset_254 = &offset_254_impl;
    USE(offset_254);
    *offset_254 = implicit_cast<TNode<Object>>((*t1178_743).value());
    // ../../src/builtins/data-view.tq:514:7
    auto t1183 = [=]() {
      int31_t t1185 = 1;
      TNode<IntPtrT> t1186 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1185)));
      TNode<Object> t1187 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1186)));
      return implicit_cast<TNode<Object>>(t1187);
    };
    auto t1184 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1188_745_impl);
    auto t1188_745 = &t1188_745_impl;
    USE(t1188_745);
    {
      Label label__True_353_impl(this);
      Label* label__True_353 = &label__True_353_impl;
      USE(label__True_353);
      Label label__False_354_impl(this);
      Label* label__False_354 = &label__False_354_impl;
      USE(label__False_354);
      Label label__done_746_1189_impl(this, {t1188_745});
      Label* label__done_746_1189 = &label__done_746_1189_impl;
      USE(label__done_746_1189);
      TNode<IntPtrT> t1189 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1190 = 1;
      TNode<IntPtrT> t1191 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1190)));
      TNode<BoolT> t1192 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1189), implicit_cast<TNode<IntPtrT>>(t1191)));
      USE(implicit_cast<TNode<BoolT>>(t1192));
      Branch(implicit_cast<TNode<BoolT>>(t1192), label__True_353, label__False_354);
      BIND(label__True_353);
            *t1188_745 = implicit_cast<TNode<Object>>(t1183());
      Goto(label__done_746_1189);
      BIND(label__False_354);
            *t1188_745 = implicit_cast<TNode<Object>>(t1184());
      Goto(label__done_746_1189);
      BIND(label__done_746_1189);
    }
    TVARIABLE(Object, is_little_endian_255_impl);
    auto is_little_endian_255 = &is_little_endian_255_impl;
    USE(is_little_endian_255);
    *is_little_endian_255 = implicit_cast<TNode<Object>>((*t1188_745).value());
    // ../../src/builtins/data-view.tq:517:7
    TNode<Numeric> t1193 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_254).value()), implicit_cast<TNode<Object>>((*is_little_endian_255).value()), implicit_cast<ElementsKind>(INT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1193));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1193));
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
  // ../../src/builtins/data-view.tq:522:63
  {
    // ../../src/builtins/data-view.tq:523:7
    auto t1194 = [=]() {
      int31_t t1196 = 0;
      TNode<IntPtrT> t1197 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1196)));
      TNode<Object> t1198 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1197)));
      return implicit_cast<TNode<Object>>(t1198);
    };
    auto t1195 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1199_747_impl);
    auto t1199_747 = &t1199_747_impl;
    USE(t1199_747);
    {
      Label label__True_355_impl(this);
      Label* label__True_355 = &label__True_355_impl;
      USE(label__True_355);
      Label label__False_356_impl(this);
      Label* label__False_356 = &label__False_356_impl;
      USE(label__False_356);
      Label label__done_748_1190_impl(this, {t1199_747});
      Label* label__done_748_1190 = &label__done_748_1190_impl;
      USE(label__done_748_1190);
      TNode<IntPtrT> t1200 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1201 = 0;
      TNode<IntPtrT> t1202 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1201)));
      TNode<BoolT> t1203 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1200), implicit_cast<TNode<IntPtrT>>(t1202)));
      USE(implicit_cast<TNode<BoolT>>(t1203));
      Branch(implicit_cast<TNode<BoolT>>(t1203), label__True_355, label__False_356);
      BIND(label__True_355);
            *t1199_747 = implicit_cast<TNode<Object>>(t1194());
      Goto(label__done_748_1190);
      BIND(label__False_356);
            *t1199_747 = implicit_cast<TNode<Object>>(t1195());
      Goto(label__done_748_1190);
      BIND(label__done_748_1190);
    }
    TVARIABLE(Object, offset_256_impl);
    auto offset_256 = &offset_256_impl;
    USE(offset_256);
    *offset_256 = implicit_cast<TNode<Object>>((*t1199_747).value());
    // ../../src/builtins/data-view.tq:526:7
    auto t1204 = [=]() {
      int31_t t1206 = 1;
      TNode<IntPtrT> t1207 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1206)));
      TNode<Object> t1208 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1207)));
      return implicit_cast<TNode<Object>>(t1208);
    };
    auto t1205 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1209_749_impl);
    auto t1209_749 = &t1209_749_impl;
    USE(t1209_749);
    {
      Label label__True_357_impl(this);
      Label* label__True_357 = &label__True_357_impl;
      USE(label__True_357);
      Label label__False_358_impl(this);
      Label* label__False_358 = &label__False_358_impl;
      USE(label__False_358);
      Label label__done_750_1191_impl(this, {t1209_749});
      Label* label__done_750_1191 = &label__done_750_1191_impl;
      USE(label__done_750_1191);
      TNode<IntPtrT> t1210 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1211 = 1;
      TNode<IntPtrT> t1212 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1211)));
      TNode<BoolT> t1213 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1210), implicit_cast<TNode<IntPtrT>>(t1212)));
      USE(implicit_cast<TNode<BoolT>>(t1213));
      Branch(implicit_cast<TNode<BoolT>>(t1213), label__True_357, label__False_358);
      BIND(label__True_357);
            *t1209_749 = implicit_cast<TNode<Object>>(t1204());
      Goto(label__done_750_1191);
      BIND(label__False_358);
            *t1209_749 = implicit_cast<TNode<Object>>(t1205());
      Goto(label__done_750_1191);
      BIND(label__done_750_1191);
    }
    TVARIABLE(Object, is_little_endian_257_impl);
    auto is_little_endian_257 = &is_little_endian_257_impl;
    USE(is_little_endian_257);
    *is_little_endian_257 = implicit_cast<TNode<Object>>((*t1209_749).value());
    // ../../src/builtins/data-view.tq:529:7
    TNode<Numeric> t1214 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_256).value()), implicit_cast<TNode<Object>>((*is_little_endian_257).value()), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1214));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1214));
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
  // ../../src/builtins/data-view.tq:534:63
  {
    // ../../src/builtins/data-view.tq:535:7
    auto t1215 = [=]() {
      int31_t t1217 = 0;
      TNode<IntPtrT> t1218 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1217)));
      TNode<Object> t1219 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1218)));
      return implicit_cast<TNode<Object>>(t1219);
    };
    auto t1216 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1220_751_impl);
    auto t1220_751 = &t1220_751_impl;
    USE(t1220_751);
    {
      Label label__True_359_impl(this);
      Label* label__True_359 = &label__True_359_impl;
      USE(label__True_359);
      Label label__False_360_impl(this);
      Label* label__False_360 = &label__False_360_impl;
      USE(label__False_360);
      Label label__done_752_1192_impl(this, {t1220_751});
      Label* label__done_752_1192 = &label__done_752_1192_impl;
      USE(label__done_752_1192);
      TNode<IntPtrT> t1221 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1222 = 0;
      TNode<IntPtrT> t1223 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1222)));
      TNode<BoolT> t1224 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1221), implicit_cast<TNode<IntPtrT>>(t1223)));
      USE(implicit_cast<TNode<BoolT>>(t1224));
      Branch(implicit_cast<TNode<BoolT>>(t1224), label__True_359, label__False_360);
      BIND(label__True_359);
            *t1220_751 = implicit_cast<TNode<Object>>(t1215());
      Goto(label__done_752_1192);
      BIND(label__False_360);
            *t1220_751 = implicit_cast<TNode<Object>>(t1216());
      Goto(label__done_752_1192);
      BIND(label__done_752_1192);
    }
    TVARIABLE(Object, offset_258_impl);
    auto offset_258 = &offset_258_impl;
    USE(offset_258);
    *offset_258 = implicit_cast<TNode<Object>>((*t1220_751).value());
    // ../../src/builtins/data-view.tq:538:7
    auto t1225 = [=]() {
      int31_t t1227 = 1;
      TNode<IntPtrT> t1228 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1227)));
      TNode<Object> t1229 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1228)));
      return implicit_cast<TNode<Object>>(t1229);
    };
    auto t1226 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1230_753_impl);
    auto t1230_753 = &t1230_753_impl;
    USE(t1230_753);
    {
      Label label__True_361_impl(this);
      Label* label__True_361 = &label__True_361_impl;
      USE(label__True_361);
      Label label__False_362_impl(this);
      Label* label__False_362 = &label__False_362_impl;
      USE(label__False_362);
      Label label__done_754_1193_impl(this, {t1230_753});
      Label* label__done_754_1193 = &label__done_754_1193_impl;
      USE(label__done_754_1193);
      TNode<IntPtrT> t1231 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1232 = 1;
      TNode<IntPtrT> t1233 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1232)));
      TNode<BoolT> t1234 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1231), implicit_cast<TNode<IntPtrT>>(t1233)));
      USE(implicit_cast<TNode<BoolT>>(t1234));
      Branch(implicit_cast<TNode<BoolT>>(t1234), label__True_361, label__False_362);
      BIND(label__True_361);
            *t1230_753 = implicit_cast<TNode<Object>>(t1225());
      Goto(label__done_754_1193);
      BIND(label__False_362);
            *t1230_753 = implicit_cast<TNode<Object>>(t1226());
      Goto(label__done_754_1193);
      BIND(label__done_754_1193);
    }
    TVARIABLE(Object, is_little_endian_259_impl);
    auto is_little_endian_259 = &is_little_endian_259_impl;
    USE(is_little_endian_259);
    *is_little_endian_259 = implicit_cast<TNode<Object>>((*t1230_753).value());
    // ../../src/builtins/data-view.tq:541:7
    TNode<Numeric> t1235 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_258).value()), implicit_cast<TNode<Object>>((*is_little_endian_259).value()), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1235));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1235));
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
  // ../../src/builtins/data-view.tq:546:63
  {
    // ../../src/builtins/data-view.tq:547:7
    auto t1236 = [=]() {
      int31_t t1238 = 0;
      TNode<IntPtrT> t1239 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1238)));
      TNode<Object> t1240 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1239)));
      return implicit_cast<TNode<Object>>(t1240);
    };
    auto t1237 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1241_755_impl);
    auto t1241_755 = &t1241_755_impl;
    USE(t1241_755);
    {
      Label label__True_363_impl(this);
      Label* label__True_363 = &label__True_363_impl;
      USE(label__True_363);
      Label label__False_364_impl(this);
      Label* label__False_364 = &label__False_364_impl;
      USE(label__False_364);
      Label label__done_756_1194_impl(this, {t1241_755});
      Label* label__done_756_1194 = &label__done_756_1194_impl;
      USE(label__done_756_1194);
      TNode<IntPtrT> t1242 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1243 = 0;
      TNode<IntPtrT> t1244 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1243)));
      TNode<BoolT> t1245 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1242), implicit_cast<TNode<IntPtrT>>(t1244)));
      USE(implicit_cast<TNode<BoolT>>(t1245));
      Branch(implicit_cast<TNode<BoolT>>(t1245), label__True_363, label__False_364);
      BIND(label__True_363);
            *t1241_755 = implicit_cast<TNode<Object>>(t1236());
      Goto(label__done_756_1194);
      BIND(label__False_364);
            *t1241_755 = implicit_cast<TNode<Object>>(t1237());
      Goto(label__done_756_1194);
      BIND(label__done_756_1194);
    }
    TVARIABLE(Object, offset_260_impl);
    auto offset_260 = &offset_260_impl;
    USE(offset_260);
    *offset_260 = implicit_cast<TNode<Object>>((*t1241_755).value());
    // ../../src/builtins/data-view.tq:550:7
    auto t1246 = [=]() {
      int31_t t1248 = 1;
      TNode<IntPtrT> t1249 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1248)));
      TNode<Object> t1250 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1249)));
      return implicit_cast<TNode<Object>>(t1250);
    };
    auto t1247 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1251_757_impl);
    auto t1251_757 = &t1251_757_impl;
    USE(t1251_757);
    {
      Label label__True_365_impl(this);
      Label* label__True_365 = &label__True_365_impl;
      USE(label__True_365);
      Label label__False_366_impl(this);
      Label* label__False_366 = &label__False_366_impl;
      USE(label__False_366);
      Label label__done_758_1195_impl(this, {t1251_757});
      Label* label__done_758_1195 = &label__done_758_1195_impl;
      USE(label__done_758_1195);
      TNode<IntPtrT> t1252 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1253 = 1;
      TNode<IntPtrT> t1254 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1253)));
      TNode<BoolT> t1255 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1252), implicit_cast<TNode<IntPtrT>>(t1254)));
      USE(implicit_cast<TNode<BoolT>>(t1255));
      Branch(implicit_cast<TNode<BoolT>>(t1255), label__True_365, label__False_366);
      BIND(label__True_365);
            *t1251_757 = implicit_cast<TNode<Object>>(t1246());
      Goto(label__done_758_1195);
      BIND(label__False_366);
            *t1251_757 = implicit_cast<TNode<Object>>(t1247());
      Goto(label__done_758_1195);
      BIND(label__done_758_1195);
    }
    TVARIABLE(Object, is_little_endian_261_impl);
    auto is_little_endian_261 = &is_little_endian_261_impl;
    USE(is_little_endian_261);
    *is_little_endian_261 = implicit_cast<TNode<Object>>((*t1251_757).value());
    // ../../src/builtins/data-view.tq:553:7
    TNode<Numeric> t1256 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_260).value()), implicit_cast<TNode<Object>>((*is_little_endian_261).value()), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1256));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1256));
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
  // ../../src/builtins/data-view.tq:558:63
  {
    // ../../src/builtins/data-view.tq:559:7
    auto t1257 = [=]() {
      int31_t t1259 = 0;
      TNode<IntPtrT> t1260 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1259)));
      TNode<Object> t1261 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1260)));
      return implicit_cast<TNode<Object>>(t1261);
    };
    auto t1258 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1262_759_impl);
    auto t1262_759 = &t1262_759_impl;
    USE(t1262_759);
    {
      Label label__True_367_impl(this);
      Label* label__True_367 = &label__True_367_impl;
      USE(label__True_367);
      Label label__False_368_impl(this);
      Label* label__False_368 = &label__False_368_impl;
      USE(label__False_368);
      Label label__done_760_1196_impl(this, {t1262_759});
      Label* label__done_760_1196 = &label__done_760_1196_impl;
      USE(label__done_760_1196);
      TNode<IntPtrT> t1263 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1264 = 0;
      TNode<IntPtrT> t1265 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1264)));
      TNode<BoolT> t1266 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1263), implicit_cast<TNode<IntPtrT>>(t1265)));
      USE(implicit_cast<TNode<BoolT>>(t1266));
      Branch(implicit_cast<TNode<BoolT>>(t1266), label__True_367, label__False_368);
      BIND(label__True_367);
            *t1262_759 = implicit_cast<TNode<Object>>(t1257());
      Goto(label__done_760_1196);
      BIND(label__False_368);
            *t1262_759 = implicit_cast<TNode<Object>>(t1258());
      Goto(label__done_760_1196);
      BIND(label__done_760_1196);
    }
    TVARIABLE(Object, offset_262_impl);
    auto offset_262 = &offset_262_impl;
    USE(offset_262);
    *offset_262 = implicit_cast<TNode<Object>>((*t1262_759).value());
    // ../../src/builtins/data-view.tq:562:7
    auto t1267 = [=]() {
      int31_t t1269 = 1;
      TNode<IntPtrT> t1270 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1269)));
      TNode<Object> t1271 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1270)));
      return implicit_cast<TNode<Object>>(t1271);
    };
    auto t1268 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1272_761_impl);
    auto t1272_761 = &t1272_761_impl;
    USE(t1272_761);
    {
      Label label__True_369_impl(this);
      Label* label__True_369 = &label__True_369_impl;
      USE(label__True_369);
      Label label__False_370_impl(this);
      Label* label__False_370 = &label__False_370_impl;
      USE(label__False_370);
      Label label__done_762_1197_impl(this, {t1272_761});
      Label* label__done_762_1197 = &label__done_762_1197_impl;
      USE(label__done_762_1197);
      TNode<IntPtrT> t1273 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1274 = 1;
      TNode<IntPtrT> t1275 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1274)));
      TNode<BoolT> t1276 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1273), implicit_cast<TNode<IntPtrT>>(t1275)));
      USE(implicit_cast<TNode<BoolT>>(t1276));
      Branch(implicit_cast<TNode<BoolT>>(t1276), label__True_369, label__False_370);
      BIND(label__True_369);
            *t1272_761 = implicit_cast<TNode<Object>>(t1267());
      Goto(label__done_762_1197);
      BIND(label__False_370);
            *t1272_761 = implicit_cast<TNode<Object>>(t1268());
      Goto(label__done_762_1197);
      BIND(label__done_762_1197);
    }
    TVARIABLE(Object, is_little_endian_263_impl);
    auto is_little_endian_263 = &is_little_endian_263_impl;
    USE(is_little_endian_263);
    *is_little_endian_263 = implicit_cast<TNode<Object>>((*t1272_761).value());
    // ../../src/builtins/data-view.tq:565:7
    TNode<Numeric> t1277 = UncheckedCast<Numeric>(DataViewGet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_262).value()), implicit_cast<TNode<Object>>((*is_little_endian_263).value()), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Numeric>>(t1277));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1277));
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView8(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value) {
  Label label_macro_end_1198_impl(this, {});
  Label* label_macro_end_1198 = &label_macro_end_1198_impl;
  USE(label_macro_end_1198);
  // ../../src/builtins/data-view.tq:577:39
  {
    // ../../src/builtins/data-view.tq:578:5
    TNode<RawPtrT> t1278 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    int31_t t1279 = 0xFF;
    TNode<Uint32T> t1280 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1279)));
    TNode<Uint32T> t1281 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1280)));
    USE(implicit_cast<TNode<Uint32T>>(t1281));
    StoreWord8(implicit_cast<TNode<RawPtrT>>(t1278), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>(t1281));
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView16(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_1199_impl(this, {});
  Label* label_macro_end_1199 = &label_macro_end_1199_impl;
  USE(label_macro_end_1199);
  // ../../src/builtins/data-view.tq:582:56
  {
    // ../../src/builtins/data-view.tq:583:5
    TNode<RawPtrT> t1282 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_264_impl);
    auto data_pointer_264 = &data_pointer_264_impl;
    USE(data_pointer_264);
    *data_pointer_264 = implicit_cast<TNode<RawPtrT>>(t1282);
    // ../../src/builtins/data-view.tq:585:5
    int31_t t1283 = 0xFF;
    TNode<Uint32T> t1284 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1283)));
    TNode<Uint32T> t1285 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1284)));
    USE(implicit_cast<TNode<Uint32T>>(t1285));
    TVARIABLE(Uint32T, b0_265_impl);
    auto b0_265 = &b0_265_impl;
    USE(b0_265);
    *b0_265 = implicit_cast<TNode<Uint32T>>(t1285);
    // ../../src/builtins/data-view.tq:586:5
    int31_t t1286 = 8;
    TNode<Uint32T> t1287 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1286)));
    TNode<Uint32T> t1288 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1287)));
    USE(implicit_cast<TNode<Uint32T>>(t1288));
    int31_t t1289 = 0xFF;
    TNode<Uint32T> t1290 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1289)));
    TNode<Uint32T> t1291 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1288), implicit_cast<TNode<Uint32T>>(t1290)));
    USE(implicit_cast<TNode<Uint32T>>(t1291));
    TVARIABLE(Uint32T, b1_266_impl);
    auto b1_266 = &b1_266_impl;
    USE(b1_266);
    *b1_266 = implicit_cast<TNode<Uint32T>>(t1291);
    // ../../src/builtins/data-view.tq:588:5
    {
      Label label__True_371_impl(this);
      Label* label__True_371 = &label__True_371_impl;
      USE(label__True_371);
      Label label__False_372_impl(this);
      Label* label__False_372 = &label__False_372_impl;
      USE(label__False_372);
      Label label_if_done_label_763_1200_impl(this, {});
      Label* label_if_done_label_763_1200 = &label_if_done_label_763_1200_impl;
      USE(label_if_done_label_763_1200);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_371, label__False_372);
      if (label__True_371->is_used())
      {
        BIND(label__True_371);
        // ../../src/builtins/data-view.tq:588:34
        {
          // ../../src/builtins/data-view.tq:589:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_264).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_265).value()));
          // ../../src/builtins/data-view.tq:590:7
          int31_t t1292 = 1;
          TNode<IntPtrT> t1293 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1292)));
          TNode<IntPtrT> t1294 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1293)));
          USE(implicit_cast<TNode<IntPtrT>>(t1294));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_264).value()), implicit_cast<TNode<IntPtrT>>(t1294), implicit_cast<TNode<Uint32T>>((*b1_266).value()));
        }
        Goto(label_if_done_label_763_1200);
      }
      if (label__False_372->is_used())
      {
        BIND(label__False_372);
        // ../../src/builtins/data-view.tq:591:12
        {
          // ../../src/builtins/data-view.tq:592:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_264).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b1_266).value()));
          // ../../src/builtins/data-view.tq:593:7
          int31_t t1295 = 1;
          TNode<IntPtrT> t1296 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1295)));
          TNode<IntPtrT> t1297 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1296)));
          USE(implicit_cast<TNode<IntPtrT>>(t1297));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_264).value()), implicit_cast<TNode<IntPtrT>>(t1297), implicit_cast<TNode<Uint32T>>((*b0_265).value()));
        }
        Goto(label_if_done_label_763_1200);
      }
      BIND(label_if_done_label_763_1200);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView32(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_1201_impl(this, {});
  Label* label_macro_end_1201 = &label_macro_end_1201_impl;
  USE(label_macro_end_1201);
  // ../../src/builtins/data-view.tq:598:56
  {
    // ../../src/builtins/data-view.tq:599:5
    TNode<RawPtrT> t1298 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_267_impl);
    auto data_pointer_267 = &data_pointer_267_impl;
    USE(data_pointer_267);
    *data_pointer_267 = implicit_cast<TNode<RawPtrT>>(t1298);
    // ../../src/builtins/data-view.tq:601:5
    int31_t t1299 = 0xFF;
    TNode<Uint32T> t1300 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1299)));
    TNode<Uint32T> t1301 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1300)));
    USE(implicit_cast<TNode<Uint32T>>(t1301));
    TVARIABLE(Uint32T, b0_268_impl);
    auto b0_268 = &b0_268_impl;
    USE(b0_268);
    *b0_268 = implicit_cast<TNode<Uint32T>>(t1301);
    // ../../src/builtins/data-view.tq:602:5
    int31_t t1302 = 8;
    TNode<Uint32T> t1303 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1302)));
    TNode<Uint32T> t1304 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1303)));
    USE(implicit_cast<TNode<Uint32T>>(t1304));
    int31_t t1305 = 0xFF;
    TNode<Uint32T> t1306 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1305)));
    TNode<Uint32T> t1307 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1304), implicit_cast<TNode<Uint32T>>(t1306)));
    USE(implicit_cast<TNode<Uint32T>>(t1307));
    TVARIABLE(Uint32T, b1_269_impl);
    auto b1_269 = &b1_269_impl;
    USE(b1_269);
    *b1_269 = implicit_cast<TNode<Uint32T>>(t1307);
    // ../../src/builtins/data-view.tq:603:5
    int31_t t1308 = 16;
    TNode<Uint32T> t1309 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1308)));
    TNode<Uint32T> t1310 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1309)));
    USE(implicit_cast<TNode<Uint32T>>(t1310));
    int31_t t1311 = 0xFF;
    TNode<Uint32T> t1312 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1311)));
    TNode<Uint32T> t1313 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1310), implicit_cast<TNode<Uint32T>>(t1312)));
    USE(implicit_cast<TNode<Uint32T>>(t1313));
    TVARIABLE(Uint32T, b2_270_impl);
    auto b2_270 = &b2_270_impl;
    USE(b2_270);
    *b2_270 = implicit_cast<TNode<Uint32T>>(t1313);
    // ../../src/builtins/data-view.tq:604:5
    int31_t t1314 = 24;
    TNode<Uint32T> t1315 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1314)));
    TNode<Uint32T> t1316 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_value), implicit_cast<TNode<Uint32T>>(t1315)));
    USE(implicit_cast<TNode<Uint32T>>(t1316));
    TVARIABLE(Uint32T, b3_271_impl);
    auto b3_271 = &b3_271_impl;
    USE(b3_271);
    *b3_271 = implicit_cast<TNode<Uint32T>>(t1316);
    // ../../src/builtins/data-view.tq:606:5
    {
      Label label__True_373_impl(this);
      Label* label__True_373 = &label__True_373_impl;
      USE(label__True_373);
      Label label__False_374_impl(this);
      Label* label__False_374 = &label__False_374_impl;
      USE(label__False_374);
      Label label_if_done_label_764_1202_impl(this, {});
      Label* label_if_done_label_764_1202 = &label_if_done_label_764_1202_impl;
      USE(label_if_done_label_764_1202);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_373, label__False_374);
      if (label__True_373->is_used())
      {
        BIND(label__True_373);
        // ../../src/builtins/data-view.tq:606:34
        {
          // ../../src/builtins/data-view.tq:607:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_268).value()));
          // ../../src/builtins/data-view.tq:608:7
          int31_t t1317 = 1;
          TNode<IntPtrT> t1318 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1317)));
          TNode<IntPtrT> t1319 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1318)));
          USE(implicit_cast<TNode<IntPtrT>>(t1319));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(t1319), implicit_cast<TNode<Uint32T>>((*b1_269).value()));
          // ../../src/builtins/data-view.tq:609:7
          int31_t t1320 = 2;
          TNode<IntPtrT> t1321 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1320)));
          TNode<IntPtrT> t1322 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1321)));
          USE(implicit_cast<TNode<IntPtrT>>(t1322));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(t1322), implicit_cast<TNode<Uint32T>>((*b2_270).value()));
          // ../../src/builtins/data-view.tq:610:7
          int31_t t1323 = 3;
          TNode<IntPtrT> t1324 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1323)));
          TNode<IntPtrT> t1325 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1324)));
          USE(implicit_cast<TNode<IntPtrT>>(t1325));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(t1325), implicit_cast<TNode<Uint32T>>((*b3_271).value()));
        }
        Goto(label_if_done_label_764_1202);
      }
      if (label__False_374->is_used())
      {
        BIND(label__False_374);
        // ../../src/builtins/data-view.tq:611:12
        {
          // ../../src/builtins/data-view.tq:612:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b3_271).value()));
          // ../../src/builtins/data-view.tq:613:7
          int31_t t1326 = 1;
          TNode<IntPtrT> t1327 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1326)));
          TNode<IntPtrT> t1328 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1327)));
          USE(implicit_cast<TNode<IntPtrT>>(t1328));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(t1328), implicit_cast<TNode<Uint32T>>((*b2_270).value()));
          // ../../src/builtins/data-view.tq:614:7
          int31_t t1329 = 2;
          TNode<IntPtrT> t1330 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1329)));
          TNode<IntPtrT> t1331 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1330)));
          USE(implicit_cast<TNode<IntPtrT>>(t1331));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(t1331), implicit_cast<TNode<Uint32T>>((*b1_269).value()));
          // ../../src/builtins/data-view.tq:615:7
          int31_t t1332 = 3;
          TNode<IntPtrT> t1333 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1332)));
          TNode<IntPtrT> t1334 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1333)));
          USE(implicit_cast<TNode<IntPtrT>>(t1334));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_267).value()), implicit_cast<TNode<IntPtrT>>(t1334), implicit_cast<TNode<Uint32T>>((*b0_268).value()));
        }
        Goto(label_if_done_label_764_1202);
      }
      BIND(label_if_done_label_764_1202);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView64(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<Uint32T> p_low_word, TNode<Uint32T> p_high_word, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_1203_impl(this, {});
  Label* label_macro_end_1203 = &label_macro_end_1203_impl;
  USE(label_macro_end_1203);
  // ../../src/builtins/data-view.tq:621:56
  {
    // ../../src/builtins/data-view.tq:622:5
    TNode<RawPtrT> t1335 = UncheckedCast<RawPtrT>(LoadArrayBufferBackingStore(implicit_cast<TNode<JSArrayBuffer>>(p_buffer)));
    TVARIABLE(RawPtrT, data_pointer_272_impl);
    auto data_pointer_272 = &data_pointer_272_impl;
    USE(data_pointer_272);
    *data_pointer_272 = implicit_cast<TNode<RawPtrT>>(t1335);
    // ../../src/builtins/data-view.tq:624:5
    int31_t t1336 = 0xFF;
    TNode<Uint32T> t1337 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1336)));
    TNode<Uint32T> t1338 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1337)));
    USE(implicit_cast<TNode<Uint32T>>(t1338));
    TVARIABLE(Uint32T, b0_273_impl);
    auto b0_273 = &b0_273_impl;
    USE(b0_273);
    *b0_273 = implicit_cast<TNode<Uint32T>>(t1338);
    // ../../src/builtins/data-view.tq:625:5
    int31_t t1339 = 8;
    TNode<Uint32T> t1340 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1339)));
    TNode<Uint32T> t1341 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1340)));
    USE(implicit_cast<TNode<Uint32T>>(t1341));
    int31_t t1342 = 0xFF;
    TNode<Uint32T> t1343 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1342)));
    TNode<Uint32T> t1344 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1341), implicit_cast<TNode<Uint32T>>(t1343)));
    USE(implicit_cast<TNode<Uint32T>>(t1344));
    TVARIABLE(Uint32T, b1_274_impl);
    auto b1_274 = &b1_274_impl;
    USE(b1_274);
    *b1_274 = implicit_cast<TNode<Uint32T>>(t1344);
    // ../../src/builtins/data-view.tq:626:5
    int31_t t1345 = 16;
    TNode<Uint32T> t1346 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1345)));
    TNode<Uint32T> t1347 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1346)));
    USE(implicit_cast<TNode<Uint32T>>(t1347));
    int31_t t1348 = 0xFF;
    TNode<Uint32T> t1349 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1348)));
    TNode<Uint32T> t1350 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1347), implicit_cast<TNode<Uint32T>>(t1349)));
    USE(implicit_cast<TNode<Uint32T>>(t1350));
    TVARIABLE(Uint32T, b2_275_impl);
    auto b2_275 = &b2_275_impl;
    USE(b2_275);
    *b2_275 = implicit_cast<TNode<Uint32T>>(t1350);
    // ../../src/builtins/data-view.tq:627:5
    int31_t t1351 = 24;
    TNode<Uint32T> t1352 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1351)));
    TNode<Uint32T> t1353 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_low_word), implicit_cast<TNode<Uint32T>>(t1352)));
    USE(implicit_cast<TNode<Uint32T>>(t1353));
    TVARIABLE(Uint32T, b3_276_impl);
    auto b3_276 = &b3_276_impl;
    USE(b3_276);
    *b3_276 = implicit_cast<TNode<Uint32T>>(t1353);
    // ../../src/builtins/data-view.tq:629:5
    int31_t t1354 = 0xFF;
    TNode<Uint32T> t1355 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1354)));
    TNode<Uint32T> t1356 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1355)));
    USE(implicit_cast<TNode<Uint32T>>(t1356));
    TVARIABLE(Uint32T, b4_277_impl);
    auto b4_277 = &b4_277_impl;
    USE(b4_277);
    *b4_277 = implicit_cast<TNode<Uint32T>>(t1356);
    // ../../src/builtins/data-view.tq:630:5
    int31_t t1357 = 8;
    TNode<Uint32T> t1358 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1357)));
    TNode<Uint32T> t1359 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1358)));
    USE(implicit_cast<TNode<Uint32T>>(t1359));
    int31_t t1360 = 0xFF;
    TNode<Uint32T> t1361 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1360)));
    TNode<Uint32T> t1362 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1359), implicit_cast<TNode<Uint32T>>(t1361)));
    USE(implicit_cast<TNode<Uint32T>>(t1362));
    TVARIABLE(Uint32T, b5_278_impl);
    auto b5_278 = &b5_278_impl;
    USE(b5_278);
    *b5_278 = implicit_cast<TNode<Uint32T>>(t1362);
    // ../../src/builtins/data-view.tq:631:5
    int31_t t1363 = 16;
    TNode<Uint32T> t1364 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1363)));
    TNode<Uint32T> t1365 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1364)));
    USE(implicit_cast<TNode<Uint32T>>(t1365));
    int31_t t1366 = 0xFF;
    TNode<Uint32T> t1367 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1366)));
    TNode<Uint32T> t1368 = UncheckedCast<Uint32T>(Word32And(implicit_cast<TNode<Uint32T>>(t1365), implicit_cast<TNode<Uint32T>>(t1367)));
    USE(implicit_cast<TNode<Uint32T>>(t1368));
    TVARIABLE(Uint32T, b6_279_impl);
    auto b6_279 = &b6_279_impl;
    USE(b6_279);
    *b6_279 = implicit_cast<TNode<Uint32T>>(t1368);
    // ../../src/builtins/data-view.tq:632:5
    int31_t t1369 = 24;
    TNode<Uint32T> t1370 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1369)));
    TNode<Uint32T> t1371 = UncheckedCast<Uint32T>(Word32Shr(implicit_cast<TNode<Uint32T>>(p_high_word), implicit_cast<TNode<Uint32T>>(t1370)));
    USE(implicit_cast<TNode<Uint32T>>(t1371));
    TVARIABLE(Uint32T, b7_280_impl);
    auto b7_280 = &b7_280_impl;
    USE(b7_280);
    *b7_280 = implicit_cast<TNode<Uint32T>>(t1371);
    // ../../src/builtins/data-view.tq:635:5
    {
      Label label__True_375_impl(this);
      Label* label__True_375 = &label__True_375_impl;
      USE(label__True_375);
      Label label__False_376_impl(this);
      Label* label__False_376 = &label__False_376_impl;
      USE(label__False_376);
      Label label_if_done_label_765_1204_impl(this, {});
      Label* label_if_done_label_765_1204 = &label_if_done_label_765_1204_impl;
      USE(label_if_done_label_765_1204);
      Branch(implicit_cast<TNode<BoolT>>(p_requested_little_endian), label__True_375, label__False_376);
      if (label__True_375->is_used())
      {
        BIND(label__True_375);
        // ../../src/builtins/data-view.tq:635:34
        {
          // ../../src/builtins/data-view.tq:636:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b0_273).value()));
          // ../../src/builtins/data-view.tq:637:7
          int31_t t1372 = 1;
          TNode<IntPtrT> t1373 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1372)));
          TNode<IntPtrT> t1374 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1373)));
          USE(implicit_cast<TNode<IntPtrT>>(t1374));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1374), implicit_cast<TNode<Uint32T>>((*b1_274).value()));
          // ../../src/builtins/data-view.tq:638:7
          int31_t t1375 = 2;
          TNode<IntPtrT> t1376 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1375)));
          TNode<IntPtrT> t1377 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1376)));
          USE(implicit_cast<TNode<IntPtrT>>(t1377));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1377), implicit_cast<TNode<Uint32T>>((*b2_275).value()));
          // ../../src/builtins/data-view.tq:639:7
          int31_t t1378 = 3;
          TNode<IntPtrT> t1379 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1378)));
          TNode<IntPtrT> t1380 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1379)));
          USE(implicit_cast<TNode<IntPtrT>>(t1380));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1380), implicit_cast<TNode<Uint32T>>((*b3_276).value()));
          // ../../src/builtins/data-view.tq:640:7
          int31_t t1381 = 4;
          TNode<IntPtrT> t1382 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1381)));
          TNode<IntPtrT> t1383 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1382)));
          USE(implicit_cast<TNode<IntPtrT>>(t1383));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1383), implicit_cast<TNode<Uint32T>>((*b4_277).value()));
          // ../../src/builtins/data-view.tq:641:7
          int31_t t1384 = 5;
          TNode<IntPtrT> t1385 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1384)));
          TNode<IntPtrT> t1386 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1385)));
          USE(implicit_cast<TNode<IntPtrT>>(t1386));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1386), implicit_cast<TNode<Uint32T>>((*b5_278).value()));
          // ../../src/builtins/data-view.tq:642:7
          int31_t t1387 = 6;
          TNode<IntPtrT> t1388 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1387)));
          TNode<IntPtrT> t1389 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1388)));
          USE(implicit_cast<TNode<IntPtrT>>(t1389));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1389), implicit_cast<TNode<Uint32T>>((*b6_279).value()));
          // ../../src/builtins/data-view.tq:643:7
          int31_t t1390 = 7;
          TNode<IntPtrT> t1391 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1390)));
          TNode<IntPtrT> t1392 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1391)));
          USE(implicit_cast<TNode<IntPtrT>>(t1392));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1392), implicit_cast<TNode<Uint32T>>((*b7_280).value()));
        }
        Goto(label_if_done_label_765_1204);
      }
      if (label__False_376->is_used())
      {
        BIND(label__False_376);
        // ../../src/builtins/data-view.tq:644:12
        {
          // ../../src/builtins/data-view.tq:645:7
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*b7_280).value()));
          // ../../src/builtins/data-view.tq:646:7
          int31_t t1393 = 1;
          TNode<IntPtrT> t1394 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1393)));
          TNode<IntPtrT> t1395 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1394)));
          USE(implicit_cast<TNode<IntPtrT>>(t1395));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1395), implicit_cast<TNode<Uint32T>>((*b6_279).value()));
          // ../../src/builtins/data-view.tq:647:7
          int31_t t1396 = 2;
          TNode<IntPtrT> t1397 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1396)));
          TNode<IntPtrT> t1398 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1397)));
          USE(implicit_cast<TNode<IntPtrT>>(t1398));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1398), implicit_cast<TNode<Uint32T>>((*b5_278).value()));
          // ../../src/builtins/data-view.tq:648:7
          int31_t t1399 = 3;
          TNode<IntPtrT> t1400 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1399)));
          TNode<IntPtrT> t1401 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1400)));
          USE(implicit_cast<TNode<IntPtrT>>(t1401));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1401), implicit_cast<TNode<Uint32T>>((*b4_277).value()));
          // ../../src/builtins/data-view.tq:649:7
          int31_t t1402 = 4;
          TNode<IntPtrT> t1403 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1402)));
          TNode<IntPtrT> t1404 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1403)));
          USE(implicit_cast<TNode<IntPtrT>>(t1404));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1404), implicit_cast<TNode<Uint32T>>((*b3_276).value()));
          // ../../src/builtins/data-view.tq:650:7
          int31_t t1405 = 5;
          TNode<IntPtrT> t1406 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1405)));
          TNode<IntPtrT> t1407 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1406)));
          USE(implicit_cast<TNode<IntPtrT>>(t1407));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1407), implicit_cast<TNode<Uint32T>>((*b2_275).value()));
          // ../../src/builtins/data-view.tq:651:7
          int31_t t1408 = 6;
          TNode<IntPtrT> t1409 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1408)));
          TNode<IntPtrT> t1410 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1409)));
          USE(implicit_cast<TNode<IntPtrT>>(t1410));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1410), implicit_cast<TNode<Uint32T>>((*b1_274).value()));
          // ../../src/builtins/data-view.tq:652:7
          int31_t t1411 = 7;
          TNode<IntPtrT> t1412 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1411)));
          TNode<IntPtrT> t1413 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<IntPtrT>>(t1412)));
          USE(implicit_cast<TNode<IntPtrT>>(t1413));
          StoreWord8(implicit_cast<TNode<RawPtrT>>((*data_pointer_272).value()), implicit_cast<TNode<IntPtrT>>(t1413), implicit_cast<TNode<Uint32T>>((*b0_273).value()));
        }
        Goto(label_if_done_label_765_1204);
      }
      BIND(label_if_done_label_765_1204);
    }
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataViewBigInt(TNode<JSArrayBuffer> p_buffer, TNode<IntPtrT> p_offset, TNode<BigInt> p_bigint_value, TNode<BoolT> p_requested_little_endian) {
  Label label_macro_end_1205_impl(this, {});
  Label* label_macro_end_1205 = &label_macro_end_1205_impl;
  USE(label_macro_end_1205);
  // ../../src/builtins/data-view.tq:665:60
  {
    // ../../src/builtins/data-view.tq:667:5
    TNode<UintPtrT> t1414 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntLength(implicit_cast<TNode<BigInt>>(p_bigint_value)));
    USE(implicit_cast<TNode<UintPtrT>>(t1414));
    TVARIABLE(UintPtrT, length_281_impl);
    auto length_281 = &length_281_impl;
    USE(length_281);
    *length_281 = implicit_cast<TNode<UintPtrT>>(t1414);
    // ../../src/builtins/data-view.tq:668:5
    TNode<UintPtrT> t1415 = UncheckedCast<UintPtrT>(DataViewDecodeBigIntSign(implicit_cast<TNode<BigInt>>(p_bigint_value)));
    USE(implicit_cast<TNode<UintPtrT>>(t1415));
    TVARIABLE(UintPtrT, sign_282_impl);
    auto sign_282 = &sign_282_impl;
    USE(sign_282);
    *sign_282 = implicit_cast<TNode<UintPtrT>>(t1415);
    // ../../src/builtins/data-view.tq:672:5
    int31_t t1416 = 0;
    TVARIABLE(Uint32T, low_word_283_impl);
    auto low_word_283 = &low_word_283_impl;
    USE(low_word_283);
    TNode<Uint32T> t1417 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1416)));
    *low_word_283 = implicit_cast<TNode<Uint32T>>(t1417);
    // ../../src/builtins/data-view.tq:673:5
    int31_t t1418 = 0;
    TVARIABLE(Uint32T, high_word_284_impl);
    auto high_word_284 = &high_word_284_impl;
    USE(high_word_284);
    TNode<Uint32T> t1419 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1418)));
    *high_word_284 = implicit_cast<TNode<Uint32T>>(t1419);
    // ../../src/builtins/data-view.tq:676:5
    {
      Label label__True_377_impl(this);
      Label* label__True_377 = &label__True_377_impl;
      USE(label__True_377);
      Label label__False_378_impl(this, {high_word_284, low_word_283});
      Label* label__False_378 = &label__False_378_impl;
      USE(label__False_378);
      int31_t t1420 = 0;
      TNode<UintPtrT> t1421 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1420)));
      TNode<BoolT> t1422 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<UintPtrT>>((*length_281).value()), implicit_cast<TNode<UintPtrT>>(t1421)));
      USE(implicit_cast<TNode<BoolT>>(t1422));
      Branch(implicit_cast<TNode<BoolT>>(t1422), label__True_377, label__False_378);
      if (label__True_377->is_used())
      {
        BIND(label__True_377);
        // ../../src/builtins/data-view.tq:676:22
        {
          // ../../src/builtins/data-view.tq:677:7
          {
            bool t1423 = Is64();
            USE(implicit_cast<bool>(t1423));
            if ((implicit_cast<bool>(t1423))) {
              // ../../src/builtins/data-view.tq:677:29
              {
                // ../../src/builtins/data-view.tq:679:9
                int31_t t1424 = 0;
                TNode<UintPtrT> t1425 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigint_value), implicit_cast<int31_t>(t1424)));
                USE(implicit_cast<TNode<UintPtrT>>(t1425));
                TVARIABLE(UintPtrT, value_285_impl);
                auto value_285 = &value_285_impl;
                USE(value_285);
                *value_285 = implicit_cast<TNode<UintPtrT>>(t1425);
                // ../../src/builtins/data-view.tq:680:9
                TNode<Uint32T> t1426 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>((*value_285).value())));
                USE(implicit_cast<TNode<Uint32T>>(t1426));
                *low_word_283 = implicit_cast<TNode<Uint32T>>(t1426);
                // ../../src/builtins/data-view.tq:681:9
                int31_t t1427 = 32;
                TNode<UintPtrT> t1428 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1427)));
                TNode<UintPtrT> t1429 = UncheckedCast<UintPtrT>(WordShr(implicit_cast<TNode<UintPtrT>>((*value_285).value()), implicit_cast<TNode<UintPtrT>>(t1428)));
                USE(implicit_cast<TNode<UintPtrT>>(t1429));
                TNode<Uint32T> t1430 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1429)));
                USE(implicit_cast<TNode<Uint32T>>(t1430));
                *high_word_284 = implicit_cast<TNode<Uint32T>>(t1430);
              }
            } else {
              // ../../src/builtins/data-view.tq:683:12
              {
                // ../../src/builtins/data-view.tq:684:9
                int31_t t1431 = 0;
                TNode<UintPtrT> t1432 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigint_value), implicit_cast<int31_t>(t1431)));
                USE(implicit_cast<TNode<UintPtrT>>(t1432));
                TNode<Uint32T> t1433 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1432)));
                USE(implicit_cast<TNode<Uint32T>>(t1433));
                *low_word_283 = implicit_cast<TNode<Uint32T>>(t1433);
                // ../../src/builtins/data-view.tq:685:9
                {
                  Label label__True_381_impl(this);
                  Label* label__True_381 = &label__True_381_impl;
                  USE(label__True_381);
                  Label label__False_382_impl(this, {high_word_284});
                  Label* label__False_382 = &label__False_382_impl;
                  USE(label__False_382);
                  int31_t t1434 = 2;
                  TNode<UintPtrT> t1435 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1434)));
                  TNode<BoolT> t1436 = UncheckedCast<BoolT>(UintPtrGreaterThanOrEqual(implicit_cast<TNode<UintPtrT>>((*length_281).value()), implicit_cast<TNode<UintPtrT>>(t1435)));
                  USE(implicit_cast<TNode<BoolT>>(t1436));
                  Branch(implicit_cast<TNode<BoolT>>(t1436), label__True_381, label__False_382);
                  if (label__True_381->is_used())
                  {
                    BIND(label__True_381);
                    // ../../src/builtins/data-view.tq:685:26
                    {
                      // ../../src/builtins/data-view.tq:686:11
                      int31_t t1437 = 1;
                      TNode<UintPtrT> t1438 = UncheckedCast<UintPtrT>(LoadBigIntDigit(implicit_cast<TNode<BigInt>>(p_bigint_value), implicit_cast<int31_t>(t1437)));
                      USE(implicit_cast<TNode<UintPtrT>>(t1438));
                      TNode<Uint32T> t1439 = UncheckedCast<Uint32T>(convert8ATuint32(implicit_cast<TNode<UintPtrT>>(t1438)));
                      USE(implicit_cast<TNode<Uint32T>>(t1439));
                      *high_word_284 = implicit_cast<TNode<Uint32T>>(t1439);
                    }
                    Goto(label__False_382);
                  }
                  BIND(label__False_382);
                }
              }
            }
          }
        }
        Goto(label__False_378);
      }
      BIND(label__False_378);
    }
    // ../../src/builtins/data-view.tq:691:5
    {
      Label label__True_383_impl(this);
      Label* label__True_383 = &label__True_383_impl;
      USE(label__True_383);
      Label label__False_384_impl(this, {high_word_284, low_word_283});
      Label* label__False_384 = &label__False_384_impl;
      USE(label__False_384);
      int31_t t1440 = 0;
      TNode<UintPtrT> t1441 = UncheckedCast<UintPtrT>(from_constexpr9ATuintptr(implicit_cast<int31_t>(t1440)));
      TNode<BoolT> t1442 = UncheckedCast<BoolT>(WordNotEqual(implicit_cast<TNode<UintPtrT>>((*sign_282).value()), implicit_cast<TNode<UintPtrT>>(t1441)));
      USE(implicit_cast<TNode<BoolT>>(t1442));
      Branch(implicit_cast<TNode<BoolT>>(t1442), label__True_383, label__False_384);
      if (label__True_383->is_used())
      {
        BIND(label__True_383);
        // ../../src/builtins/data-view.tq:691:20
        {
          // ../../src/builtins/data-view.tq:692:7
          int31_t t1443 = 0;
          TNode<Int32T> t1444 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*high_word_284).value())));
          USE(implicit_cast<TNode<Int32T>>(t1444));
          TNode<Int32T> t1445 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1443)));
          TNode<Int32T> t1446 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1445), implicit_cast<TNode<Int32T>>(t1444)));
          USE(implicit_cast<TNode<Int32T>>(t1446));
          TNode<Uint32T> t1447 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1446)));
          USE(implicit_cast<TNode<Uint32T>>(t1447));
          *high_word_284 = implicit_cast<TNode<Uint32T>>(t1447);
          // ../../src/builtins/data-view.tq:693:7
          {
            Label label__True_385_impl(this);
            Label* label__True_385 = &label__True_385_impl;
            USE(label__True_385);
            Label label__False_386_impl(this, {high_word_284});
            Label* label__False_386 = &label__False_386_impl;
            USE(label__False_386);
            int31_t t1448 = 0;
            TNode<Uint32T> t1449 = UncheckedCast<Uint32T>(from_constexpr8ATuint32(implicit_cast<int31_t>(t1448)));
            TNode<BoolT> t1450 = UncheckedCast<BoolT>(Word32NotEqual(implicit_cast<TNode<Uint32T>>((*low_word_283).value()), implicit_cast<TNode<Uint32T>>(t1449)));
            USE(implicit_cast<TNode<BoolT>>(t1450));
            Branch(implicit_cast<TNode<BoolT>>(t1450), label__True_385, label__False_386);
            if (label__True_385->is_used())
            {
              BIND(label__True_385);
              // ../../src/builtins/data-view.tq:693:26
              {
                // ../../src/builtins/data-view.tq:694:9
                TNode<Int32T> t1451 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*high_word_284).value())));
                USE(implicit_cast<TNode<Int32T>>(t1451));
                int31_t t1452 = 1;
                TNode<Int32T> t1453 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1452)));
                TNode<Int32T> t1454 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1451), implicit_cast<TNode<Int32T>>(t1453)));
                USE(implicit_cast<TNode<Int32T>>(t1454));
                TNode<Uint32T> t1455 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1454)));
                USE(implicit_cast<TNode<Uint32T>>(t1455));
                *high_word_284 = implicit_cast<TNode<Uint32T>>(t1455);
              }
              Goto(label__False_386);
            }
            BIND(label__False_386);
          }
          // ../../src/builtins/data-view.tq:696:7
          int31_t t1456 = 0;
          TNode<Int32T> t1457 = UncheckedCast<Int32T>(Signed(implicit_cast<TNode<Uint32T>>((*low_word_283).value())));
          USE(implicit_cast<TNode<Int32T>>(t1457));
          TNode<Int32T> t1458 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t1456)));
          TNode<Int32T> t1459 = UncheckedCast<Int32T>(Int32Sub(implicit_cast<TNode<Int32T>>(t1458), implicit_cast<TNode<Int32T>>(t1457)));
          USE(implicit_cast<TNode<Int32T>>(t1459));
          TNode<Uint32T> t1460 = UncheckedCast<Uint32T>(Unsigned(implicit_cast<TNode<Int32T>>(t1459)));
          USE(implicit_cast<TNode<Uint32T>>(t1460));
          *low_word_283 = implicit_cast<TNode<Uint32T>>(t1460);
        }
        Goto(label__False_384);
      }
      BIND(label__False_384);
    }
    // ../../src/builtins/data-view.tq:699:5
    StoreDataView64(implicit_cast<TNode<JSArrayBuffer>>(p_buffer), implicit_cast<TNode<IntPtrT>>(p_offset), implicit_cast<TNode<Uint32T>>((*low_word_283).value()), implicit_cast<TNode<Uint32T>>((*high_word_284).value()), implicit_cast<TNode<BoolT>>(p_requested_little_endian));
  }
}

compiler::TNode<Object> DataViewBuiltinsFromDSLAssembler::DataViewSet(TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_value, TNode<Object> p_requested_little_endian, ElementsKind p_kind) {
  TVARIABLE(Object, _return_286_impl);
  auto _return_286 = &_return_286_impl;
  USE(_return_286);
  Label label_macro_end_1206_impl(this, {_return_286});
  Label* label_macro_end_1206 = &label_macro_end_1206_impl;
  USE(label_macro_end_1206);
  // ../../src/builtins/data-view.tq:708:59
  {
    // ../../src/builtins/data-view.tq:710:5
    TNode<String> t1461 = UncheckedCast<String>(MakeDataViewSetterNameString(implicit_cast<ElementsKind>(p_kind)));
    USE(implicit_cast<TNode<String>>(t1461));
    TNode<JSDataView> t1462 = UncheckedCast<JSDataView>(ValidateDataView(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<String>>(t1461)));
    USE(implicit_cast<TNode<JSDataView>>(t1462));
    TVARIABLE(JSDataView, data_view_287_impl);
    auto data_view_287 = &data_view_287_impl;
    USE(data_view_287);
    *data_view_287 = implicit_cast<TNode<JSDataView>>(t1462);
    // ../../src/builtins/data-view.tq:713:5
    TVARIABLE(Number, getIndex_288_impl);
    auto getIndex_288 = &getIndex_288_impl;
    USE(getIndex_288);
    // ../../src/builtins/data-view.tq:714:5
    {
      Label label_try_done_766_1207_impl(this);
      Label* label_try_done_766_1207 = &label_try_done_766_1207_impl;
      USE(label_try_done_766_1207);
      Label label_RangeError_387_impl(this);
      Label* label_RangeError_387 = &label_RangeError_387_impl;
      USE(label_RangeError_387);
      Label label_try_begin_767_1208_impl(this);
      Label* label_try_begin_767_1208 = &label_try_begin_767_1208_impl;
      USE(label_try_begin_767_1208);
      Goto(label_try_begin_767_1208);
      if (label_try_begin_767_1208->is_used())
      {
        BIND(label_try_begin_767_1208);
        // ../../src/builtins/data-view.tq:714:9
        {
          // ../../src/builtins/data-view.tq:715:7
          TNode<Number> t1463 = UncheckedCast<Number>(ToIndex(implicit_cast<TNode<Object>>(p_offset), implicit_cast<TNode<Context>>(p_context), label_RangeError_387));
          USE(implicit_cast<TNode<Number>>(t1463));
          *getIndex_288 = implicit_cast<TNode<Number>>(t1463);
        }
        Goto(label_try_done_766_1207);
      }
      if (label_RangeError_387->is_used())
      {
        BIND(label_RangeError_387);
        // ../../src/builtins/data-view.tq:717:22
        {
          // ../../src/builtins/data-view.tq:718:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label_try_done_766_1207);
    }
    // ../../src/builtins/data-view.tq:721:5
    TNode<BoolT> t1464 = UncheckedCast<BoolT>(ToBoolean(implicit_cast<TNode<Object>>(p_requested_little_endian)));
    USE(implicit_cast<TNode<BoolT>>(t1464));
    TVARIABLE(BoolT, littleEndian_289_impl);
    auto littleEndian_289 = &littleEndian_289_impl;
    USE(littleEndian_289);
    *littleEndian_289 = implicit_cast<TNode<BoolT>>(t1464);
    // ../../src/builtins/data-view.tq:722:5
    TNode<JSArrayBuffer> t1465 = UncheckedCast<JSArrayBuffer>(LoadArrayBufferViewBuffer(implicit_cast<TNode<JSArrayBufferView>>((*data_view_287).value())));
    TVARIABLE(JSArrayBuffer, buffer_290_impl);
    auto buffer_290 = &buffer_290_impl;
    USE(buffer_290);
    *buffer_290 = implicit_cast<TNode<JSArrayBuffer>>(t1465);
    // ../../src/builtins/data-view.tq:724:5
    TVARIABLE(BigInt, bigint_value_291_impl);
    auto bigint_value_291 = &bigint_value_291_impl;
    USE(bigint_value_291);
    // ../../src/builtins/data-view.tq:725:5
    TVARIABLE(Number, num_value_292_impl);
    auto num_value_292 = &num_value_292_impl;
    USE(num_value_292);
    // ../../src/builtins/data-view.tq:728:5
    {
      Label label__False_390_impl(this);
      Label* label__False_390 = &label__False_390_impl;
      USE(label__False_390);
      bool t1466 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1466));
      bool t1467 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1467));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1466) || implicit_cast<bool>(t1467))))) {
        // ../../src/builtins/data-view.tq:728:76
        {
          // ../../src/builtins/data-view.tq:729:7
          TNode<BigInt> t1468 = UncheckedCast<BigInt>(ToBigInt(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_value)));
          USE(implicit_cast<TNode<BigInt>>(t1468));
          *bigint_value_291 = implicit_cast<TNode<BigInt>>(t1468);
        }
      } else {
        // ../../src/builtins/data-view.tq:730:12
        {
          // ../../src/builtins/data-view.tq:731:7
          TNode<Number> t1469 = UncheckedCast<Number>(ToNumber(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_value)));
          USE(implicit_cast<TNode<Number>>(t1469));
          *num_value_292 = implicit_cast<TNode<Number>>(t1469);
        }
      }
    }
    // ../../src/builtins/data-view.tq:734:5
    {
      Label label__True_391_impl(this);
      Label* label__True_391 = &label__True_391_impl;
      USE(label__True_391);
      Label label__False_392_impl(this, {});
      Label* label__False_392 = &label__False_392_impl;
      USE(label__False_392);
      TNode<BoolT> t1470 = UncheckedCast<BoolT>(IsDetachedBuffer(implicit_cast<TNode<JSArrayBuffer>>((*buffer_290).value())));
      USE(implicit_cast<TNode<BoolT>>(t1470));
      Branch(implicit_cast<TNode<BoolT>>(t1470), label__True_391, label__False_392);
      if (label__True_391->is_used())
      {
        BIND(label__True_391);
        // ../../src/builtins/data-view.tq:734:35
        {
          // ../../src/builtins/data-view.tq:735:7
          TNode<String> t1471 = UncheckedCast<String>(MakeDataViewSetterNameString(implicit_cast<ElementsKind>(p_kind)));
          USE(implicit_cast<TNode<String>>(t1471));
          ThrowTypeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kDetachedOperation), implicit_cast<TNode<Object>>(t1471));
        }
      }
      BIND(label__False_392);
    }
    // ../../src/builtins/data-view.tq:739:5
    TNode<Number> t1472 = UncheckedCast<Number>(LoadDataViewByteOffset(implicit_cast<TNode<JSDataView>>((*data_view_287).value())));
    TVARIABLE(Number, viewOffset_293_impl);
    auto viewOffset_293 = &viewOffset_293_impl;
    USE(viewOffset_293);
    *viewOffset_293 = implicit_cast<TNode<Number>>(t1472);
    // ../../src/builtins/data-view.tq:740:5
    TNode<Number> t1473 = UncheckedCast<Number>(LoadDataViewByteLength(implicit_cast<TNode<JSDataView>>((*data_view_287).value())));
    TVARIABLE(Number, viewSize_294_impl);
    auto viewSize_294 = &viewSize_294_impl;
    USE(viewSize_294);
    *viewSize_294 = implicit_cast<TNode<Number>>(t1473);
    // ../../src/builtins/data-view.tq:741:5
    int31_t t1474 = DataViewElementSize(implicit_cast<ElementsKind>(p_kind));
    USE(implicit_cast<int31_t>(t1474));
    TVARIABLE(Number, elementSize_295_impl);
    auto elementSize_295 = &elementSize_295_impl;
    USE(elementSize_295);
    TNode<Number> t1475 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t1474)));
    *elementSize_295 = implicit_cast<TNode<Number>>(t1475);
    // ../../src/builtins/data-view.tq:743:5
    {
      Label label__True_393_impl(this);
      Label* label__True_393 = &label__True_393_impl;
      USE(label__True_393);
      Label label__False_394_impl(this, {});
      Label* label__False_394 = &label__False_394_impl;
      USE(label__False_394);
      TNode<Number> t1476 = UncheckedCast<Number>(NumberAdd(implicit_cast<TNode<Number>>((*getIndex_288).value()), implicit_cast<TNode<Number>>((*elementSize_295).value())));
      USE(implicit_cast<TNode<Number>>(t1476));
      BranchIfNumberGreaterThan(implicit_cast<TNode<Number>>(t1476), implicit_cast<TNode<Number>>((*viewSize_294).value()), label__True_393, label__False_394);
      if (label__True_393->is_used())
      {
        BIND(label__True_393);
        // ../../src/builtins/data-view.tq:743:44
        {
          // ../../src/builtins/data-view.tq:744:7
          ThrowRangeError(implicit_cast<TNode<Context>>(p_context), implicit_cast<MessageTemplate::Template>(MessageTemplate::kInvalidDataViewAccessorOffset));
        }
      }
      BIND(label__False_394);
    }
    // ../../src/builtins/data-view.tq:747:5
    TNode<Float64T> t1477 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*getIndex_288).value())));
    USE(implicit_cast<TNode<Float64T>>(t1477));
    TVARIABLE(Float64T, getIndexFloat_296_impl);
    auto getIndexFloat_296 = &getIndexFloat_296_impl;
    USE(getIndexFloat_296);
    *getIndexFloat_296 = implicit_cast<TNode<Float64T>>(t1477);
    // ../../src/builtins/data-view.tq:748:5
    TNode<UintPtrT> t1478 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*getIndexFloat_296).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1478));
    TNode<IntPtrT> t1479 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1478)));
    USE(implicit_cast<TNode<IntPtrT>>(t1479));
    TVARIABLE(IntPtrT, getIndexIntptr_297_impl);
    auto getIndexIntptr_297 = &getIndexIntptr_297_impl;
    USE(getIndexIntptr_297);
    *getIndexIntptr_297 = implicit_cast<TNode<IntPtrT>>(t1479);
    // ../../src/builtins/data-view.tq:749:5
    TNode<Float64T> t1480 = UncheckedCast<Float64T>(convert9ATfloat64(implicit_cast<TNode<Number>>((*viewOffset_293).value())));
    USE(implicit_cast<TNode<Float64T>>(t1480));
    TVARIABLE(Float64T, viewOffsetFloat_298_impl);
    auto viewOffsetFloat_298 = &viewOffsetFloat_298_impl;
    USE(viewOffsetFloat_298);
    *viewOffsetFloat_298 = implicit_cast<TNode<Float64T>>(t1480);
    // ../../src/builtins/data-view.tq:750:5
    TNode<UintPtrT> t1481 = UncheckedCast<UintPtrT>(convert9ATuintptr(implicit_cast<TNode<Float64T>>((*viewOffsetFloat_298).value())));
    USE(implicit_cast<TNode<UintPtrT>>(t1481));
    TNode<IntPtrT> t1482 = UncheckedCast<IntPtrT>(Signed(implicit_cast<TNode<UintPtrT>>(t1481)));
    USE(implicit_cast<TNode<IntPtrT>>(t1482));
    TVARIABLE(IntPtrT, viewOffsetIntptr_299_impl);
    auto viewOffsetIntptr_299 = &viewOffsetIntptr_299_impl;
    USE(viewOffsetIntptr_299);
    *viewOffsetIntptr_299 = implicit_cast<TNode<IntPtrT>>(t1482);
    // ../../src/builtins/data-view.tq:752:5
    TNode<IntPtrT> t1483 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>((*getIndexIntptr_297).value()), implicit_cast<TNode<IntPtrT>>((*viewOffsetIntptr_299).value())));
    USE(implicit_cast<TNode<IntPtrT>>(t1483));
    TVARIABLE(IntPtrT, bufferIndex_300_impl);
    auto bufferIndex_300 = &bufferIndex_300_impl;
    USE(bufferIndex_300);
    *bufferIndex_300 = implicit_cast<TNode<IntPtrT>>(t1483);
    // ../../src/builtins/data-view.tq:754:5
    {
      Label label__False_397_impl(this);
      Label* label__False_397 = &label__False_397_impl;
      USE(label__False_397);
      bool t1484 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1484));
      bool t1485 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS));
      USE(implicit_cast<bool>(t1485));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1484) || implicit_cast<bool>(t1485))))) {
        // ../../src/builtins/data-view.tq:754:76
        {
          // ../../src/builtins/data-view.tq:755:7
          StoreDataViewBigInt(implicit_cast<TNode<JSArrayBuffer>>((*buffer_290).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_300).value()), implicit_cast<TNode<BigInt>>((*bigint_value_291).value()), implicit_cast<TNode<BoolT>>((*littleEndian_289).value()));
        }
      } else {
        // ../../src/builtins/data-view.tq:758:10
        {
          // ../../src/builtins/data-view.tq:759:7
          TNode<Float64T> t1486 = UncheckedCast<Float64T>(ChangeNumberToFloat64(implicit_cast<TNode<Number>>((*num_value_292).value())));
          USE(implicit_cast<TNode<Float64T>>(t1486));
          TVARIABLE(Float64T, double_value_301_impl);
          auto double_value_301 = &double_value_301_impl;
          USE(double_value_301);
          *double_value_301 = implicit_cast<TNode<Float64T>>(t1486);
          // ../../src/builtins/data-view.tq:761:7
          {
            Label label__False_400_impl(this);
            Label* label__False_400 = &label__False_400_impl;
            USE(label__False_400);
            bool t1487 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
            USE(implicit_cast<bool>(t1487));
            bool t1488 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT8_ELEMENTS));
            USE(implicit_cast<bool>(t1488));
            if ((implicit_cast<bool>((implicit_cast<bool>(t1487) || implicit_cast<bool>(t1488))))) {
              // ../../src/builtins/data-view.tq:761:70
              {
                // ../../src/builtins/data-view.tq:762:9
                TNode<Uint32T> t1489 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*double_value_301).value())));
                USE(implicit_cast<TNode<Uint32T>>(t1489));
                StoreDataView8(implicit_cast<TNode<JSArrayBuffer>>((*buffer_290).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_300).value()), implicit_cast<TNode<Uint32T>>(t1489));
              }
            } else {
              // ../../src/builtins/data-view.tq:765:12
              {
                Label label__False_403_impl(this);
                Label* label__False_403 = &label__False_403_impl;
                USE(label__False_403);
                bool t1490 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
                USE(implicit_cast<bool>(t1490));
                bool t1491 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT16_ELEMENTS));
                USE(implicit_cast<bool>(t1491));
                if ((implicit_cast<bool>((implicit_cast<bool>(t1490) || implicit_cast<bool>(t1491))))) {
                  // ../../src/builtins/data-view.tq:765:77
                  {
                    // ../../src/builtins/data-view.tq:766:9
                    TNode<Uint32T> t1492 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*double_value_301).value())));
                    USE(implicit_cast<TNode<Uint32T>>(t1492));
                    StoreDataView16(implicit_cast<TNode<JSArrayBuffer>>((*buffer_290).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_300).value()), implicit_cast<TNode<Uint32T>>(t1492), implicit_cast<TNode<BoolT>>((*littleEndian_289).value()));
                  }
                } else {
                  // ../../src/builtins/data-view.tq:769:12
                  {
                    Label label__False_406_impl(this);
                    Label* label__False_406 = &label__False_406_impl;
                    USE(label__False_406);
                    bool t1493 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT32_ELEMENTS));
                    USE(implicit_cast<bool>(t1493));
                    bool t1494 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(INT32_ELEMENTS));
                    USE(implicit_cast<bool>(t1494));
                    if ((implicit_cast<bool>((implicit_cast<bool>(t1493) || implicit_cast<bool>(t1494))))) {
                      // ../../src/builtins/data-view.tq:769:77
                      {
                        // ../../src/builtins/data-view.tq:770:9
                        TNode<Uint32T> t1495 = UncheckedCast<Uint32T>(TruncateFloat64ToWord32(implicit_cast<TNode<Float64T>>((*double_value_301).value())));
                        USE(implicit_cast<TNode<Uint32T>>(t1495));
                        StoreDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_290).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_300).value()), implicit_cast<TNode<Uint32T>>(t1495), implicit_cast<TNode<BoolT>>((*littleEndian_289).value()));
                      }
                    } else {
                      // ../../src/builtins/data-view.tq:773:12
                      {
                        bool t1496 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS));
                        USE(implicit_cast<bool>(t1496));
                        if ((implicit_cast<bool>(t1496))) {
                          // ../../src/builtins/data-view.tq:773:52
                          {
                            // ../../src/builtins/data-view.tq:774:9
                            TNode<Float32T> t1497 = UncheckedCast<Float32T>(TruncateFloat64ToFloat32(implicit_cast<TNode<Float64T>>((*double_value_301).value())));
                            USE(implicit_cast<TNode<Float32T>>(t1497));
                            TVARIABLE(Float32T, float_value_302_impl);
                            auto float_value_302 = &float_value_302_impl;
                            USE(float_value_302);
                            *float_value_302 = implicit_cast<TNode<Float32T>>(t1497);
                            // ../../src/builtins/data-view.tq:775:9
                            TNode<Uint32T> t1498 = UncheckedCast<Uint32T>(BitcastFloat32ToInt32(implicit_cast<TNode<Float32T>>((*float_value_302).value())));
                            USE(implicit_cast<TNode<Uint32T>>(t1498));
                            StoreDataView32(implicit_cast<TNode<JSArrayBuffer>>((*buffer_290).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_300).value()), implicit_cast<TNode<Uint32T>>(t1498), implicit_cast<TNode<BoolT>>((*littleEndian_289).value()));
                          }
                        } else {
                          // ../../src/builtins/data-view.tq:778:12
                          {
                            bool t1499 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS));
                            USE(implicit_cast<bool>(t1499));
                            if ((implicit_cast<bool>(t1499))) {
                              // ../../src/builtins/data-view.tq:778:52
                              {
                                // ../../src/builtins/data-view.tq:779:9
                                TNode<Uint32T> t1500 = UncheckedCast<Uint32T>(Float64ExtractLowWord32(implicit_cast<TNode<Float64T>>((*double_value_301).value())));
                                USE(implicit_cast<TNode<Uint32T>>(t1500));
                                TVARIABLE(Uint32T, low_word_303_impl);
                                auto low_word_303 = &low_word_303_impl;
                                USE(low_word_303);
                                *low_word_303 = implicit_cast<TNode<Uint32T>>(t1500);
                                // ../../src/builtins/data-view.tq:780:9
                                TNode<Uint32T> t1501 = UncheckedCast<Uint32T>(Float64ExtractHighWord32(implicit_cast<TNode<Float64T>>((*double_value_301).value())));
                                USE(implicit_cast<TNode<Uint32T>>(t1501));
                                TVARIABLE(Uint32T, high_word_304_impl);
                                auto high_word_304 = &high_word_304_impl;
                                USE(high_word_304);
                                *high_word_304 = implicit_cast<TNode<Uint32T>>(t1501);
                                // ../../src/builtins/data-view.tq:781:9
                                StoreDataView64(implicit_cast<TNode<JSArrayBuffer>>((*buffer_290).value()), implicit_cast<TNode<IntPtrT>>((*bufferIndex_300).value()), implicit_cast<TNode<Uint32T>>((*low_word_303).value()), implicit_cast<TNode<Uint32T>>((*high_word_304).value()), implicit_cast<TNode<BoolT>>((*littleEndian_289).value()));
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
    // ../../src/builtins/data-view.tq:785:5
    *_return_286 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1206);
  }
  BIND(label_macro_end_1206);
  return implicit_cast<TNode<Object>>((*_return_286).value());
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
  // ../../src/builtins/data-view.tq:789:63
  {
    // ../../src/builtins/data-view.tq:790:7
    auto t1502 = [=]() {
      int31_t t1504 = 0;
      TNode<IntPtrT> t1505 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1504)));
      TNode<Object> t1506 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1505)));
      return implicit_cast<TNode<Object>>(t1506);
    };
    auto t1503 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1507_768_impl);
    auto t1507_768 = &t1507_768_impl;
    USE(t1507_768);
    {
      Label label__True_411_impl(this);
      Label* label__True_411 = &label__True_411_impl;
      USE(label__True_411);
      Label label__False_412_impl(this);
      Label* label__False_412 = &label__False_412_impl;
      USE(label__False_412);
      Label label__done_769_1209_impl(this, {t1507_768});
      Label* label__done_769_1209 = &label__done_769_1209_impl;
      USE(label__done_769_1209);
      TNode<IntPtrT> t1508 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1509 = 0;
      TNode<IntPtrT> t1510 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1509)));
      TNode<BoolT> t1511 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1508), implicit_cast<TNode<IntPtrT>>(t1510)));
      USE(implicit_cast<TNode<BoolT>>(t1511));
      Branch(implicit_cast<TNode<BoolT>>(t1511), label__True_411, label__False_412);
      BIND(label__True_411);
            *t1507_768 = implicit_cast<TNode<Object>>(t1502());
      Goto(label__done_769_1209);
      BIND(label__False_412);
            *t1507_768 = implicit_cast<TNode<Object>>(t1503());
      Goto(label__done_769_1209);
      BIND(label__done_769_1209);
    }
    TVARIABLE(Object, offset_305_impl);
    auto offset_305 = &offset_305_impl;
    USE(offset_305);
    *offset_305 = implicit_cast<TNode<Object>>((*t1507_768).value());
    // ../../src/builtins/data-view.tq:793:7
    auto t1512 = [=]() {
      int31_t t1514 = 1;
      TNode<IntPtrT> t1515 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1514)));
      TNode<Object> t1516 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1515)));
      return implicit_cast<TNode<Object>>(t1516);
    };
    auto t1513 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1517_770_impl);
    auto t1517_770 = &t1517_770_impl;
    USE(t1517_770);
    {
      Label label__True_413_impl(this);
      Label* label__True_413 = &label__True_413_impl;
      USE(label__True_413);
      Label label__False_414_impl(this);
      Label* label__False_414 = &label__False_414_impl;
      USE(label__False_414);
      Label label__done_771_1210_impl(this, {t1517_770});
      Label* label__done_771_1210 = &label__done_771_1210_impl;
      USE(label__done_771_1210);
      TNode<IntPtrT> t1518 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1519 = 1;
      TNode<IntPtrT> t1520 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1519)));
      TNode<BoolT> t1521 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1518), implicit_cast<TNode<IntPtrT>>(t1520)));
      USE(implicit_cast<TNode<BoolT>>(t1521));
      Branch(implicit_cast<TNode<BoolT>>(t1521), label__True_413, label__False_414);
      BIND(label__True_413);
            *t1517_770 = implicit_cast<TNode<Object>>(t1512());
      Goto(label__done_771_1210);
      BIND(label__False_414);
            *t1517_770 = implicit_cast<TNode<Object>>(t1513());
      Goto(label__done_771_1210);
      BIND(label__done_771_1210);
    }
    TVARIABLE(Object, value_306_impl);
    auto value_306 = &value_306_impl;
    USE(value_306);
    *value_306 = implicit_cast<TNode<Object>>((*t1517_770).value());
    // ../../src/builtins/data-view.tq:796:7
    TNode<Object> t1522 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_305).value()), implicit_cast<TNode<Object>>((*value_306).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1522));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1522));
  }
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
  // ../../src/builtins/data-view.tq:801:63
  {
    // ../../src/builtins/data-view.tq:802:7
    auto t1523 = [=]() {
      int31_t t1525 = 0;
      TNode<IntPtrT> t1526 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1525)));
      TNode<Object> t1527 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1526)));
      return implicit_cast<TNode<Object>>(t1527);
    };
    auto t1524 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1528_772_impl);
    auto t1528_772 = &t1528_772_impl;
    USE(t1528_772);
    {
      Label label__True_415_impl(this);
      Label* label__True_415 = &label__True_415_impl;
      USE(label__True_415);
      Label label__False_416_impl(this);
      Label* label__False_416 = &label__False_416_impl;
      USE(label__False_416);
      Label label__done_773_1211_impl(this, {t1528_772});
      Label* label__done_773_1211 = &label__done_773_1211_impl;
      USE(label__done_773_1211);
      TNode<IntPtrT> t1529 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1530 = 0;
      TNode<IntPtrT> t1531 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1530)));
      TNode<BoolT> t1532 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1529), implicit_cast<TNode<IntPtrT>>(t1531)));
      USE(implicit_cast<TNode<BoolT>>(t1532));
      Branch(implicit_cast<TNode<BoolT>>(t1532), label__True_415, label__False_416);
      BIND(label__True_415);
            *t1528_772 = implicit_cast<TNode<Object>>(t1523());
      Goto(label__done_773_1211);
      BIND(label__False_416);
            *t1528_772 = implicit_cast<TNode<Object>>(t1524());
      Goto(label__done_773_1211);
      BIND(label__done_773_1211);
    }
    TVARIABLE(Object, offset_307_impl);
    auto offset_307 = &offset_307_impl;
    USE(offset_307);
    *offset_307 = implicit_cast<TNode<Object>>((*t1528_772).value());
    // ../../src/builtins/data-view.tq:805:7
    auto t1533 = [=]() {
      int31_t t1535 = 1;
      TNode<IntPtrT> t1536 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1535)));
      TNode<Object> t1537 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1536)));
      return implicit_cast<TNode<Object>>(t1537);
    };
    auto t1534 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1538_774_impl);
    auto t1538_774 = &t1538_774_impl;
    USE(t1538_774);
    {
      Label label__True_417_impl(this);
      Label* label__True_417 = &label__True_417_impl;
      USE(label__True_417);
      Label label__False_418_impl(this);
      Label* label__False_418 = &label__False_418_impl;
      USE(label__False_418);
      Label label__done_775_1212_impl(this, {t1538_774});
      Label* label__done_775_1212 = &label__done_775_1212_impl;
      USE(label__done_775_1212);
      TNode<IntPtrT> t1539 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1540 = 1;
      TNode<IntPtrT> t1541 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1540)));
      TNode<BoolT> t1542 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1539), implicit_cast<TNode<IntPtrT>>(t1541)));
      USE(implicit_cast<TNode<BoolT>>(t1542));
      Branch(implicit_cast<TNode<BoolT>>(t1542), label__True_417, label__False_418);
      BIND(label__True_417);
            *t1538_774 = implicit_cast<TNode<Object>>(t1533());
      Goto(label__done_775_1212);
      BIND(label__False_418);
            *t1538_774 = implicit_cast<TNode<Object>>(t1534());
      Goto(label__done_775_1212);
      BIND(label__done_775_1212);
    }
    TVARIABLE(Object, value_308_impl);
    auto value_308 = &value_308_impl;
    USE(value_308);
    *value_308 = implicit_cast<TNode<Object>>((*t1538_774).value());
    // ../../src/builtins/data-view.tq:808:7
    TNode<Object> t1543 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_307).value()), implicit_cast<TNode<Object>>((*value_308).value()), implicit_cast<TNode<Object>>(Undefined()), implicit_cast<ElementsKind>(INT8_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1543));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1543));
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
  // ../../src/builtins/data-view.tq:813:63
  {
    // ../../src/builtins/data-view.tq:814:7
    auto t1544 = [=]() {
      int31_t t1546 = 0;
      TNode<IntPtrT> t1547 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1546)));
      TNode<Object> t1548 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1547)));
      return implicit_cast<TNode<Object>>(t1548);
    };
    auto t1545 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1549_776_impl);
    auto t1549_776 = &t1549_776_impl;
    USE(t1549_776);
    {
      Label label__True_419_impl(this);
      Label* label__True_419 = &label__True_419_impl;
      USE(label__True_419);
      Label label__False_420_impl(this);
      Label* label__False_420 = &label__False_420_impl;
      USE(label__False_420);
      Label label__done_777_1213_impl(this, {t1549_776});
      Label* label__done_777_1213 = &label__done_777_1213_impl;
      USE(label__done_777_1213);
      TNode<IntPtrT> t1550 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1551 = 0;
      TNode<IntPtrT> t1552 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1551)));
      TNode<BoolT> t1553 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1550), implicit_cast<TNode<IntPtrT>>(t1552)));
      USE(implicit_cast<TNode<BoolT>>(t1553));
      Branch(implicit_cast<TNode<BoolT>>(t1553), label__True_419, label__False_420);
      BIND(label__True_419);
            *t1549_776 = implicit_cast<TNode<Object>>(t1544());
      Goto(label__done_777_1213);
      BIND(label__False_420);
            *t1549_776 = implicit_cast<TNode<Object>>(t1545());
      Goto(label__done_777_1213);
      BIND(label__done_777_1213);
    }
    TVARIABLE(Object, offset_309_impl);
    auto offset_309 = &offset_309_impl;
    USE(offset_309);
    *offset_309 = implicit_cast<TNode<Object>>((*t1549_776).value());
    // ../../src/builtins/data-view.tq:817:7
    auto t1554 = [=]() {
      int31_t t1556 = 1;
      TNode<IntPtrT> t1557 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1556)));
      TNode<Object> t1558 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1557)));
      return implicit_cast<TNode<Object>>(t1558);
    };
    auto t1555 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1559_778_impl);
    auto t1559_778 = &t1559_778_impl;
    USE(t1559_778);
    {
      Label label__True_421_impl(this);
      Label* label__True_421 = &label__True_421_impl;
      USE(label__True_421);
      Label label__False_422_impl(this);
      Label* label__False_422 = &label__False_422_impl;
      USE(label__False_422);
      Label label__done_779_1214_impl(this, {t1559_778});
      Label* label__done_779_1214 = &label__done_779_1214_impl;
      USE(label__done_779_1214);
      TNode<IntPtrT> t1560 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1561 = 1;
      TNode<IntPtrT> t1562 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1561)));
      TNode<BoolT> t1563 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1560), implicit_cast<TNode<IntPtrT>>(t1562)));
      USE(implicit_cast<TNode<BoolT>>(t1563));
      Branch(implicit_cast<TNode<BoolT>>(t1563), label__True_421, label__False_422);
      BIND(label__True_421);
            *t1559_778 = implicit_cast<TNode<Object>>(t1554());
      Goto(label__done_779_1214);
      BIND(label__False_422);
            *t1559_778 = implicit_cast<TNode<Object>>(t1555());
      Goto(label__done_779_1214);
      BIND(label__done_779_1214);
    }
    TVARIABLE(Object, value_310_impl);
    auto value_310 = &value_310_impl;
    USE(value_310);
    *value_310 = implicit_cast<TNode<Object>>((*t1559_778).value());
    // ../../src/builtins/data-view.tq:820:7
    auto t1564 = [=]() {
      int31_t t1566 = 2;
      TNode<IntPtrT> t1567 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1566)));
      TNode<Object> t1568 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1567)));
      return implicit_cast<TNode<Object>>(t1568);
    };
    auto t1565 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1569_780_impl);
    auto t1569_780 = &t1569_780_impl;
    USE(t1569_780);
    {
      Label label__True_423_impl(this);
      Label* label__True_423 = &label__True_423_impl;
      USE(label__True_423);
      Label label__False_424_impl(this);
      Label* label__False_424 = &label__False_424_impl;
      USE(label__False_424);
      Label label__done_781_1215_impl(this, {t1569_780});
      Label* label__done_781_1215 = &label__done_781_1215_impl;
      USE(label__done_781_1215);
      TNode<IntPtrT> t1570 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1571 = 2;
      TNode<IntPtrT> t1572 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1571)));
      TNode<BoolT> t1573 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1570), implicit_cast<TNode<IntPtrT>>(t1572)));
      USE(implicit_cast<TNode<BoolT>>(t1573));
      Branch(implicit_cast<TNode<BoolT>>(t1573), label__True_423, label__False_424);
      BIND(label__True_423);
            *t1569_780 = implicit_cast<TNode<Object>>(t1564());
      Goto(label__done_781_1215);
      BIND(label__False_424);
            *t1569_780 = implicit_cast<TNode<Object>>(t1565());
      Goto(label__done_781_1215);
      BIND(label__done_781_1215);
    }
    TVARIABLE(Object, is_little_endian_311_impl);
    auto is_little_endian_311 = &is_little_endian_311_impl;
    USE(is_little_endian_311);
    *is_little_endian_311 = implicit_cast<TNode<Object>>((*t1569_780).value());
    // ../../src/builtins/data-view.tq:823:7
    TNode<Object> t1574 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_309).value()), implicit_cast<TNode<Object>>((*value_310).value()), implicit_cast<TNode<Object>>((*is_little_endian_311).value()), implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1574));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1574));
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
  // ../../src/builtins/data-view.tq:828:63
  {
    // ../../src/builtins/data-view.tq:829:7
    auto t1575 = [=]() {
      int31_t t1577 = 0;
      TNode<IntPtrT> t1578 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1577)));
      TNode<Object> t1579 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1578)));
      return implicit_cast<TNode<Object>>(t1579);
    };
    auto t1576 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1580_782_impl);
    auto t1580_782 = &t1580_782_impl;
    USE(t1580_782);
    {
      Label label__True_425_impl(this);
      Label* label__True_425 = &label__True_425_impl;
      USE(label__True_425);
      Label label__False_426_impl(this);
      Label* label__False_426 = &label__False_426_impl;
      USE(label__False_426);
      Label label__done_783_1216_impl(this, {t1580_782});
      Label* label__done_783_1216 = &label__done_783_1216_impl;
      USE(label__done_783_1216);
      TNode<IntPtrT> t1581 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1582 = 0;
      TNode<IntPtrT> t1583 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1582)));
      TNode<BoolT> t1584 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1581), implicit_cast<TNode<IntPtrT>>(t1583)));
      USE(implicit_cast<TNode<BoolT>>(t1584));
      Branch(implicit_cast<TNode<BoolT>>(t1584), label__True_425, label__False_426);
      BIND(label__True_425);
            *t1580_782 = implicit_cast<TNode<Object>>(t1575());
      Goto(label__done_783_1216);
      BIND(label__False_426);
            *t1580_782 = implicit_cast<TNode<Object>>(t1576());
      Goto(label__done_783_1216);
      BIND(label__done_783_1216);
    }
    TVARIABLE(Object, offset_312_impl);
    auto offset_312 = &offset_312_impl;
    USE(offset_312);
    *offset_312 = implicit_cast<TNode<Object>>((*t1580_782).value());
    // ../../src/builtins/data-view.tq:832:7
    auto t1585 = [=]() {
      int31_t t1587 = 1;
      TNode<IntPtrT> t1588 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1587)));
      TNode<Object> t1589 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1588)));
      return implicit_cast<TNode<Object>>(t1589);
    };
    auto t1586 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1590_784_impl);
    auto t1590_784 = &t1590_784_impl;
    USE(t1590_784);
    {
      Label label__True_427_impl(this);
      Label* label__True_427 = &label__True_427_impl;
      USE(label__True_427);
      Label label__False_428_impl(this);
      Label* label__False_428 = &label__False_428_impl;
      USE(label__False_428);
      Label label__done_785_1217_impl(this, {t1590_784});
      Label* label__done_785_1217 = &label__done_785_1217_impl;
      USE(label__done_785_1217);
      TNode<IntPtrT> t1591 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1592 = 1;
      TNode<IntPtrT> t1593 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1592)));
      TNode<BoolT> t1594 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1591), implicit_cast<TNode<IntPtrT>>(t1593)));
      USE(implicit_cast<TNode<BoolT>>(t1594));
      Branch(implicit_cast<TNode<BoolT>>(t1594), label__True_427, label__False_428);
      BIND(label__True_427);
            *t1590_784 = implicit_cast<TNode<Object>>(t1585());
      Goto(label__done_785_1217);
      BIND(label__False_428);
            *t1590_784 = implicit_cast<TNode<Object>>(t1586());
      Goto(label__done_785_1217);
      BIND(label__done_785_1217);
    }
    TVARIABLE(Object, value_313_impl);
    auto value_313 = &value_313_impl;
    USE(value_313);
    *value_313 = implicit_cast<TNode<Object>>((*t1590_784).value());
    // ../../src/builtins/data-view.tq:835:7
    auto t1595 = [=]() {
      int31_t t1597 = 2;
      TNode<IntPtrT> t1598 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1597)));
      TNode<Object> t1599 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1598)));
      return implicit_cast<TNode<Object>>(t1599);
    };
    auto t1596 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1600_786_impl);
    auto t1600_786 = &t1600_786_impl;
    USE(t1600_786);
    {
      Label label__True_429_impl(this);
      Label* label__True_429 = &label__True_429_impl;
      USE(label__True_429);
      Label label__False_430_impl(this);
      Label* label__False_430 = &label__False_430_impl;
      USE(label__False_430);
      Label label__done_787_1218_impl(this, {t1600_786});
      Label* label__done_787_1218 = &label__done_787_1218_impl;
      USE(label__done_787_1218);
      TNode<IntPtrT> t1601 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1602 = 2;
      TNode<IntPtrT> t1603 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1602)));
      TNode<BoolT> t1604 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1601), implicit_cast<TNode<IntPtrT>>(t1603)));
      USE(implicit_cast<TNode<BoolT>>(t1604));
      Branch(implicit_cast<TNode<BoolT>>(t1604), label__True_429, label__False_430);
      BIND(label__True_429);
            *t1600_786 = implicit_cast<TNode<Object>>(t1595());
      Goto(label__done_787_1218);
      BIND(label__False_430);
            *t1600_786 = implicit_cast<TNode<Object>>(t1596());
      Goto(label__done_787_1218);
      BIND(label__done_787_1218);
    }
    TVARIABLE(Object, is_little_endian_314_impl);
    auto is_little_endian_314 = &is_little_endian_314_impl;
    USE(is_little_endian_314);
    *is_little_endian_314 = implicit_cast<TNode<Object>>((*t1600_786).value());
    // ../../src/builtins/data-view.tq:838:7
    TNode<Object> t1605 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_312).value()), implicit_cast<TNode<Object>>((*value_313).value()), implicit_cast<TNode<Object>>((*is_little_endian_314).value()), implicit_cast<ElementsKind>(INT16_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1605));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1605));
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
  // ../../src/builtins/data-view.tq:843:63
  {
    // ../../src/builtins/data-view.tq:844:7
    auto t1606 = [=]() {
      int31_t t1608 = 0;
      TNode<IntPtrT> t1609 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1608)));
      TNode<Object> t1610 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1609)));
      return implicit_cast<TNode<Object>>(t1610);
    };
    auto t1607 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1611_788_impl);
    auto t1611_788 = &t1611_788_impl;
    USE(t1611_788);
    {
      Label label__True_431_impl(this);
      Label* label__True_431 = &label__True_431_impl;
      USE(label__True_431);
      Label label__False_432_impl(this);
      Label* label__False_432 = &label__False_432_impl;
      USE(label__False_432);
      Label label__done_789_1219_impl(this, {t1611_788});
      Label* label__done_789_1219 = &label__done_789_1219_impl;
      USE(label__done_789_1219);
      TNode<IntPtrT> t1612 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1613 = 0;
      TNode<IntPtrT> t1614 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1613)));
      TNode<BoolT> t1615 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1612), implicit_cast<TNode<IntPtrT>>(t1614)));
      USE(implicit_cast<TNode<BoolT>>(t1615));
      Branch(implicit_cast<TNode<BoolT>>(t1615), label__True_431, label__False_432);
      BIND(label__True_431);
            *t1611_788 = implicit_cast<TNode<Object>>(t1606());
      Goto(label__done_789_1219);
      BIND(label__False_432);
            *t1611_788 = implicit_cast<TNode<Object>>(t1607());
      Goto(label__done_789_1219);
      BIND(label__done_789_1219);
    }
    TVARIABLE(Object, offset_315_impl);
    auto offset_315 = &offset_315_impl;
    USE(offset_315);
    *offset_315 = implicit_cast<TNode<Object>>((*t1611_788).value());
    // ../../src/builtins/data-view.tq:847:7
    auto t1616 = [=]() {
      int31_t t1618 = 1;
      TNode<IntPtrT> t1619 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1618)));
      TNode<Object> t1620 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1619)));
      return implicit_cast<TNode<Object>>(t1620);
    };
    auto t1617 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1621_790_impl);
    auto t1621_790 = &t1621_790_impl;
    USE(t1621_790);
    {
      Label label__True_433_impl(this);
      Label* label__True_433 = &label__True_433_impl;
      USE(label__True_433);
      Label label__False_434_impl(this);
      Label* label__False_434 = &label__False_434_impl;
      USE(label__False_434);
      Label label__done_791_1220_impl(this, {t1621_790});
      Label* label__done_791_1220 = &label__done_791_1220_impl;
      USE(label__done_791_1220);
      TNode<IntPtrT> t1622 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1623 = 1;
      TNode<IntPtrT> t1624 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1623)));
      TNode<BoolT> t1625 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1622), implicit_cast<TNode<IntPtrT>>(t1624)));
      USE(implicit_cast<TNode<BoolT>>(t1625));
      Branch(implicit_cast<TNode<BoolT>>(t1625), label__True_433, label__False_434);
      BIND(label__True_433);
            *t1621_790 = implicit_cast<TNode<Object>>(t1616());
      Goto(label__done_791_1220);
      BIND(label__False_434);
            *t1621_790 = implicit_cast<TNode<Object>>(t1617());
      Goto(label__done_791_1220);
      BIND(label__done_791_1220);
    }
    TVARIABLE(Object, value_316_impl);
    auto value_316 = &value_316_impl;
    USE(value_316);
    *value_316 = implicit_cast<TNode<Object>>((*t1621_790).value());
    // ../../src/builtins/data-view.tq:850:7
    auto t1626 = [=]() {
      int31_t t1628 = 2;
      TNode<IntPtrT> t1629 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1628)));
      TNode<Object> t1630 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1629)));
      return implicit_cast<TNode<Object>>(t1630);
    };
    auto t1627 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1631_792_impl);
    auto t1631_792 = &t1631_792_impl;
    USE(t1631_792);
    {
      Label label__True_435_impl(this);
      Label* label__True_435 = &label__True_435_impl;
      USE(label__True_435);
      Label label__False_436_impl(this);
      Label* label__False_436 = &label__False_436_impl;
      USE(label__False_436);
      Label label__done_793_1221_impl(this, {t1631_792});
      Label* label__done_793_1221 = &label__done_793_1221_impl;
      USE(label__done_793_1221);
      TNode<IntPtrT> t1632 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1633 = 2;
      TNode<IntPtrT> t1634 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1633)));
      TNode<BoolT> t1635 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1632), implicit_cast<TNode<IntPtrT>>(t1634)));
      USE(implicit_cast<TNode<BoolT>>(t1635));
      Branch(implicit_cast<TNode<BoolT>>(t1635), label__True_435, label__False_436);
      BIND(label__True_435);
            *t1631_792 = implicit_cast<TNode<Object>>(t1626());
      Goto(label__done_793_1221);
      BIND(label__False_436);
            *t1631_792 = implicit_cast<TNode<Object>>(t1627());
      Goto(label__done_793_1221);
      BIND(label__done_793_1221);
    }
    TVARIABLE(Object, is_little_endian_317_impl);
    auto is_little_endian_317 = &is_little_endian_317_impl;
    USE(is_little_endian_317);
    *is_little_endian_317 = implicit_cast<TNode<Object>>((*t1631_792).value());
    // ../../src/builtins/data-view.tq:853:7
    TNode<Object> t1636 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_315).value()), implicit_cast<TNode<Object>>((*value_316).value()), implicit_cast<TNode<Object>>((*is_little_endian_317).value()), implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1636));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1636));
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
  // ../../src/builtins/data-view.tq:858:63
  {
    // ../../src/builtins/data-view.tq:859:7
    auto t1637 = [=]() {
      int31_t t1639 = 0;
      TNode<IntPtrT> t1640 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1639)));
      TNode<Object> t1641 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1640)));
      return implicit_cast<TNode<Object>>(t1641);
    };
    auto t1638 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1642_794_impl);
    auto t1642_794 = &t1642_794_impl;
    USE(t1642_794);
    {
      Label label__True_437_impl(this);
      Label* label__True_437 = &label__True_437_impl;
      USE(label__True_437);
      Label label__False_438_impl(this);
      Label* label__False_438 = &label__False_438_impl;
      USE(label__False_438);
      Label label__done_795_1222_impl(this, {t1642_794});
      Label* label__done_795_1222 = &label__done_795_1222_impl;
      USE(label__done_795_1222);
      TNode<IntPtrT> t1643 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1644 = 0;
      TNode<IntPtrT> t1645 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1644)));
      TNode<BoolT> t1646 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1643), implicit_cast<TNode<IntPtrT>>(t1645)));
      USE(implicit_cast<TNode<BoolT>>(t1646));
      Branch(implicit_cast<TNode<BoolT>>(t1646), label__True_437, label__False_438);
      BIND(label__True_437);
            *t1642_794 = implicit_cast<TNode<Object>>(t1637());
      Goto(label__done_795_1222);
      BIND(label__False_438);
            *t1642_794 = implicit_cast<TNode<Object>>(t1638());
      Goto(label__done_795_1222);
      BIND(label__done_795_1222);
    }
    TVARIABLE(Object, offset_318_impl);
    auto offset_318 = &offset_318_impl;
    USE(offset_318);
    *offset_318 = implicit_cast<TNode<Object>>((*t1642_794).value());
    // ../../src/builtins/data-view.tq:862:7
    auto t1647 = [=]() {
      int31_t t1649 = 1;
      TNode<IntPtrT> t1650 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1649)));
      TNode<Object> t1651 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1650)));
      return implicit_cast<TNode<Object>>(t1651);
    };
    auto t1648 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1652_796_impl);
    auto t1652_796 = &t1652_796_impl;
    USE(t1652_796);
    {
      Label label__True_439_impl(this);
      Label* label__True_439 = &label__True_439_impl;
      USE(label__True_439);
      Label label__False_440_impl(this);
      Label* label__False_440 = &label__False_440_impl;
      USE(label__False_440);
      Label label__done_797_1223_impl(this, {t1652_796});
      Label* label__done_797_1223 = &label__done_797_1223_impl;
      USE(label__done_797_1223);
      TNode<IntPtrT> t1653 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1654 = 1;
      TNode<IntPtrT> t1655 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1654)));
      TNode<BoolT> t1656 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1653), implicit_cast<TNode<IntPtrT>>(t1655)));
      USE(implicit_cast<TNode<BoolT>>(t1656));
      Branch(implicit_cast<TNode<BoolT>>(t1656), label__True_439, label__False_440);
      BIND(label__True_439);
            *t1652_796 = implicit_cast<TNode<Object>>(t1647());
      Goto(label__done_797_1223);
      BIND(label__False_440);
            *t1652_796 = implicit_cast<TNode<Object>>(t1648());
      Goto(label__done_797_1223);
      BIND(label__done_797_1223);
    }
    TVARIABLE(Object, value_319_impl);
    auto value_319 = &value_319_impl;
    USE(value_319);
    *value_319 = implicit_cast<TNode<Object>>((*t1652_796).value());
    // ../../src/builtins/data-view.tq:865:7
    auto t1657 = [=]() {
      int31_t t1659 = 2;
      TNode<IntPtrT> t1660 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1659)));
      TNode<Object> t1661 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1660)));
      return implicit_cast<TNode<Object>>(t1661);
    };
    auto t1658 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1662_798_impl);
    auto t1662_798 = &t1662_798_impl;
    USE(t1662_798);
    {
      Label label__True_441_impl(this);
      Label* label__True_441 = &label__True_441_impl;
      USE(label__True_441);
      Label label__False_442_impl(this);
      Label* label__False_442 = &label__False_442_impl;
      USE(label__False_442);
      Label label__done_799_1224_impl(this, {t1662_798});
      Label* label__done_799_1224 = &label__done_799_1224_impl;
      USE(label__done_799_1224);
      TNode<IntPtrT> t1663 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1664 = 2;
      TNode<IntPtrT> t1665 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1664)));
      TNode<BoolT> t1666 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1663), implicit_cast<TNode<IntPtrT>>(t1665)));
      USE(implicit_cast<TNode<BoolT>>(t1666));
      Branch(implicit_cast<TNode<BoolT>>(t1666), label__True_441, label__False_442);
      BIND(label__True_441);
            *t1662_798 = implicit_cast<TNode<Object>>(t1657());
      Goto(label__done_799_1224);
      BIND(label__False_442);
            *t1662_798 = implicit_cast<TNode<Object>>(t1658());
      Goto(label__done_799_1224);
      BIND(label__done_799_1224);
    }
    TVARIABLE(Object, is_little_endian_320_impl);
    auto is_little_endian_320 = &is_little_endian_320_impl;
    USE(is_little_endian_320);
    *is_little_endian_320 = implicit_cast<TNode<Object>>((*t1662_798).value());
    // ../../src/builtins/data-view.tq:868:7
    TNode<Object> t1667 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_318).value()), implicit_cast<TNode<Object>>((*value_319).value()), implicit_cast<TNode<Object>>((*is_little_endian_320).value()), implicit_cast<ElementsKind>(INT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1667));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1667));
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
  // ../../src/builtins/data-view.tq:873:63
  {
    // ../../src/builtins/data-view.tq:874:7
    auto t1668 = [=]() {
      int31_t t1670 = 0;
      TNode<IntPtrT> t1671 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1670)));
      TNode<Object> t1672 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1671)));
      return implicit_cast<TNode<Object>>(t1672);
    };
    auto t1669 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1673_800_impl);
    auto t1673_800 = &t1673_800_impl;
    USE(t1673_800);
    {
      Label label__True_443_impl(this);
      Label* label__True_443 = &label__True_443_impl;
      USE(label__True_443);
      Label label__False_444_impl(this);
      Label* label__False_444 = &label__False_444_impl;
      USE(label__False_444);
      Label label__done_801_1225_impl(this, {t1673_800});
      Label* label__done_801_1225 = &label__done_801_1225_impl;
      USE(label__done_801_1225);
      TNode<IntPtrT> t1674 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1675 = 0;
      TNode<IntPtrT> t1676 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1675)));
      TNode<BoolT> t1677 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1674), implicit_cast<TNode<IntPtrT>>(t1676)));
      USE(implicit_cast<TNode<BoolT>>(t1677));
      Branch(implicit_cast<TNode<BoolT>>(t1677), label__True_443, label__False_444);
      BIND(label__True_443);
            *t1673_800 = implicit_cast<TNode<Object>>(t1668());
      Goto(label__done_801_1225);
      BIND(label__False_444);
            *t1673_800 = implicit_cast<TNode<Object>>(t1669());
      Goto(label__done_801_1225);
      BIND(label__done_801_1225);
    }
    TVARIABLE(Object, offset_321_impl);
    auto offset_321 = &offset_321_impl;
    USE(offset_321);
    *offset_321 = implicit_cast<TNode<Object>>((*t1673_800).value());
    // ../../src/builtins/data-view.tq:877:7
    auto t1678 = [=]() {
      int31_t t1680 = 1;
      TNode<IntPtrT> t1681 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1680)));
      TNode<Object> t1682 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1681)));
      return implicit_cast<TNode<Object>>(t1682);
    };
    auto t1679 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1683_802_impl);
    auto t1683_802 = &t1683_802_impl;
    USE(t1683_802);
    {
      Label label__True_445_impl(this);
      Label* label__True_445 = &label__True_445_impl;
      USE(label__True_445);
      Label label__False_446_impl(this);
      Label* label__False_446 = &label__False_446_impl;
      USE(label__False_446);
      Label label__done_803_1226_impl(this, {t1683_802});
      Label* label__done_803_1226 = &label__done_803_1226_impl;
      USE(label__done_803_1226);
      TNode<IntPtrT> t1684 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1685 = 1;
      TNode<IntPtrT> t1686 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1685)));
      TNode<BoolT> t1687 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1684), implicit_cast<TNode<IntPtrT>>(t1686)));
      USE(implicit_cast<TNode<BoolT>>(t1687));
      Branch(implicit_cast<TNode<BoolT>>(t1687), label__True_445, label__False_446);
      BIND(label__True_445);
            *t1683_802 = implicit_cast<TNode<Object>>(t1678());
      Goto(label__done_803_1226);
      BIND(label__False_446);
            *t1683_802 = implicit_cast<TNode<Object>>(t1679());
      Goto(label__done_803_1226);
      BIND(label__done_803_1226);
    }
    TVARIABLE(Object, value_322_impl);
    auto value_322 = &value_322_impl;
    USE(value_322);
    *value_322 = implicit_cast<TNode<Object>>((*t1683_802).value());
    // ../../src/builtins/data-view.tq:880:7
    auto t1688 = [=]() {
      int31_t t1690 = 2;
      TNode<IntPtrT> t1691 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1690)));
      TNode<Object> t1692 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1691)));
      return implicit_cast<TNode<Object>>(t1692);
    };
    auto t1689 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1693_804_impl);
    auto t1693_804 = &t1693_804_impl;
    USE(t1693_804);
    {
      Label label__True_447_impl(this);
      Label* label__True_447 = &label__True_447_impl;
      USE(label__True_447);
      Label label__False_448_impl(this);
      Label* label__False_448 = &label__False_448_impl;
      USE(label__False_448);
      Label label__done_805_1227_impl(this, {t1693_804});
      Label* label__done_805_1227 = &label__done_805_1227_impl;
      USE(label__done_805_1227);
      TNode<IntPtrT> t1694 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1695 = 2;
      TNode<IntPtrT> t1696 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1695)));
      TNode<BoolT> t1697 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1694), implicit_cast<TNode<IntPtrT>>(t1696)));
      USE(implicit_cast<TNode<BoolT>>(t1697));
      Branch(implicit_cast<TNode<BoolT>>(t1697), label__True_447, label__False_448);
      BIND(label__True_447);
            *t1693_804 = implicit_cast<TNode<Object>>(t1688());
      Goto(label__done_805_1227);
      BIND(label__False_448);
            *t1693_804 = implicit_cast<TNode<Object>>(t1689());
      Goto(label__done_805_1227);
      BIND(label__done_805_1227);
    }
    TVARIABLE(Object, is_little_endian_323_impl);
    auto is_little_endian_323 = &is_little_endian_323_impl;
    USE(is_little_endian_323);
    *is_little_endian_323 = implicit_cast<TNode<Object>>((*t1693_804).value());
    // ../../src/builtins/data-view.tq:883:7
    TNode<Object> t1698 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_321).value()), implicit_cast<TNode<Object>>((*value_322).value()), implicit_cast<TNode<Object>>((*is_little_endian_323).value()), implicit_cast<ElementsKind>(FLOAT32_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1698));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1698));
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
  // ../../src/builtins/data-view.tq:888:63
  {
    // ../../src/builtins/data-view.tq:889:7
    auto t1699 = [=]() {
      int31_t t1701 = 0;
      TNode<IntPtrT> t1702 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1701)));
      TNode<Object> t1703 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1702)));
      return implicit_cast<TNode<Object>>(t1703);
    };
    auto t1700 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1704_806_impl);
    auto t1704_806 = &t1704_806_impl;
    USE(t1704_806);
    {
      Label label__True_449_impl(this);
      Label* label__True_449 = &label__True_449_impl;
      USE(label__True_449);
      Label label__False_450_impl(this);
      Label* label__False_450 = &label__False_450_impl;
      USE(label__False_450);
      Label label__done_807_1228_impl(this, {t1704_806});
      Label* label__done_807_1228 = &label__done_807_1228_impl;
      USE(label__done_807_1228);
      TNode<IntPtrT> t1705 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1706 = 0;
      TNode<IntPtrT> t1707 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1706)));
      TNode<BoolT> t1708 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1705), implicit_cast<TNode<IntPtrT>>(t1707)));
      USE(implicit_cast<TNode<BoolT>>(t1708));
      Branch(implicit_cast<TNode<BoolT>>(t1708), label__True_449, label__False_450);
      BIND(label__True_449);
            *t1704_806 = implicit_cast<TNode<Object>>(t1699());
      Goto(label__done_807_1228);
      BIND(label__False_450);
            *t1704_806 = implicit_cast<TNode<Object>>(t1700());
      Goto(label__done_807_1228);
      BIND(label__done_807_1228);
    }
    TVARIABLE(Object, offset_324_impl);
    auto offset_324 = &offset_324_impl;
    USE(offset_324);
    *offset_324 = implicit_cast<TNode<Object>>((*t1704_806).value());
    // ../../src/builtins/data-view.tq:892:7
    auto t1709 = [=]() {
      int31_t t1711 = 1;
      TNode<IntPtrT> t1712 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1711)));
      TNode<Object> t1713 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1712)));
      return implicit_cast<TNode<Object>>(t1713);
    };
    auto t1710 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1714_808_impl);
    auto t1714_808 = &t1714_808_impl;
    USE(t1714_808);
    {
      Label label__True_451_impl(this);
      Label* label__True_451 = &label__True_451_impl;
      USE(label__True_451);
      Label label__False_452_impl(this);
      Label* label__False_452 = &label__False_452_impl;
      USE(label__False_452);
      Label label__done_809_1229_impl(this, {t1714_808});
      Label* label__done_809_1229 = &label__done_809_1229_impl;
      USE(label__done_809_1229);
      TNode<IntPtrT> t1715 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1716 = 1;
      TNode<IntPtrT> t1717 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1716)));
      TNode<BoolT> t1718 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1715), implicit_cast<TNode<IntPtrT>>(t1717)));
      USE(implicit_cast<TNode<BoolT>>(t1718));
      Branch(implicit_cast<TNode<BoolT>>(t1718), label__True_451, label__False_452);
      BIND(label__True_451);
            *t1714_808 = implicit_cast<TNode<Object>>(t1709());
      Goto(label__done_809_1229);
      BIND(label__False_452);
            *t1714_808 = implicit_cast<TNode<Object>>(t1710());
      Goto(label__done_809_1229);
      BIND(label__done_809_1229);
    }
    TVARIABLE(Object, value_325_impl);
    auto value_325 = &value_325_impl;
    USE(value_325);
    *value_325 = implicit_cast<TNode<Object>>((*t1714_808).value());
    // ../../src/builtins/data-view.tq:895:7
    auto t1719 = [=]() {
      int31_t t1721 = 2;
      TNode<IntPtrT> t1722 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1721)));
      TNode<Object> t1723 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1722)));
      return implicit_cast<TNode<Object>>(t1723);
    };
    auto t1720 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1724_810_impl);
    auto t1724_810 = &t1724_810_impl;
    USE(t1724_810);
    {
      Label label__True_453_impl(this);
      Label* label__True_453 = &label__True_453_impl;
      USE(label__True_453);
      Label label__False_454_impl(this);
      Label* label__False_454 = &label__False_454_impl;
      USE(label__False_454);
      Label label__done_811_1230_impl(this, {t1724_810});
      Label* label__done_811_1230 = &label__done_811_1230_impl;
      USE(label__done_811_1230);
      TNode<IntPtrT> t1725 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1726 = 2;
      TNode<IntPtrT> t1727 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1726)));
      TNode<BoolT> t1728 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1725), implicit_cast<TNode<IntPtrT>>(t1727)));
      USE(implicit_cast<TNode<BoolT>>(t1728));
      Branch(implicit_cast<TNode<BoolT>>(t1728), label__True_453, label__False_454);
      BIND(label__True_453);
            *t1724_810 = implicit_cast<TNode<Object>>(t1719());
      Goto(label__done_811_1230);
      BIND(label__False_454);
            *t1724_810 = implicit_cast<TNode<Object>>(t1720());
      Goto(label__done_811_1230);
      BIND(label__done_811_1230);
    }
    TVARIABLE(Object, is_little_endian_326_impl);
    auto is_little_endian_326 = &is_little_endian_326_impl;
    USE(is_little_endian_326);
    *is_little_endian_326 = implicit_cast<TNode<Object>>((*t1724_810).value());
    // ../../src/builtins/data-view.tq:898:7
    TNode<Object> t1729 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_324).value()), implicit_cast<TNode<Object>>((*value_325).value()), implicit_cast<TNode<Object>>((*is_little_endian_326).value()), implicit_cast<ElementsKind>(FLOAT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1729));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1729));
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
  // ../../src/builtins/data-view.tq:903:63
  {
    // ../../src/builtins/data-view.tq:904:7
    auto t1730 = [=]() {
      int31_t t1732 = 0;
      TNode<IntPtrT> t1733 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1732)));
      TNode<Object> t1734 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1733)));
      return implicit_cast<TNode<Object>>(t1734);
    };
    auto t1731 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1735_812_impl);
    auto t1735_812 = &t1735_812_impl;
    USE(t1735_812);
    {
      Label label__True_455_impl(this);
      Label* label__True_455 = &label__True_455_impl;
      USE(label__True_455);
      Label label__False_456_impl(this);
      Label* label__False_456 = &label__False_456_impl;
      USE(label__False_456);
      Label label__done_813_1231_impl(this, {t1735_812});
      Label* label__done_813_1231 = &label__done_813_1231_impl;
      USE(label__done_813_1231);
      TNode<IntPtrT> t1736 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1737 = 0;
      TNode<IntPtrT> t1738 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1737)));
      TNode<BoolT> t1739 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1736), implicit_cast<TNode<IntPtrT>>(t1738)));
      USE(implicit_cast<TNode<BoolT>>(t1739));
      Branch(implicit_cast<TNode<BoolT>>(t1739), label__True_455, label__False_456);
      BIND(label__True_455);
            *t1735_812 = implicit_cast<TNode<Object>>(t1730());
      Goto(label__done_813_1231);
      BIND(label__False_456);
            *t1735_812 = implicit_cast<TNode<Object>>(t1731());
      Goto(label__done_813_1231);
      BIND(label__done_813_1231);
    }
    TVARIABLE(Object, offset_327_impl);
    auto offset_327 = &offset_327_impl;
    USE(offset_327);
    *offset_327 = implicit_cast<TNode<Object>>((*t1735_812).value());
    // ../../src/builtins/data-view.tq:907:7
    auto t1740 = [=]() {
      int31_t t1742 = 1;
      TNode<IntPtrT> t1743 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1742)));
      TNode<Object> t1744 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1743)));
      return implicit_cast<TNode<Object>>(t1744);
    };
    auto t1741 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1745_814_impl);
    auto t1745_814 = &t1745_814_impl;
    USE(t1745_814);
    {
      Label label__True_457_impl(this);
      Label* label__True_457 = &label__True_457_impl;
      USE(label__True_457);
      Label label__False_458_impl(this);
      Label* label__False_458 = &label__False_458_impl;
      USE(label__False_458);
      Label label__done_815_1232_impl(this, {t1745_814});
      Label* label__done_815_1232 = &label__done_815_1232_impl;
      USE(label__done_815_1232);
      TNode<IntPtrT> t1746 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1747 = 1;
      TNode<IntPtrT> t1748 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1747)));
      TNode<BoolT> t1749 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1746), implicit_cast<TNode<IntPtrT>>(t1748)));
      USE(implicit_cast<TNode<BoolT>>(t1749));
      Branch(implicit_cast<TNode<BoolT>>(t1749), label__True_457, label__False_458);
      BIND(label__True_457);
            *t1745_814 = implicit_cast<TNode<Object>>(t1740());
      Goto(label__done_815_1232);
      BIND(label__False_458);
            *t1745_814 = implicit_cast<TNode<Object>>(t1741());
      Goto(label__done_815_1232);
      BIND(label__done_815_1232);
    }
    TVARIABLE(Object, value_328_impl);
    auto value_328 = &value_328_impl;
    USE(value_328);
    *value_328 = implicit_cast<TNode<Object>>((*t1745_814).value());
    // ../../src/builtins/data-view.tq:910:7
    auto t1750 = [=]() {
      int31_t t1752 = 2;
      TNode<IntPtrT> t1753 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1752)));
      TNode<Object> t1754 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1753)));
      return implicit_cast<TNode<Object>>(t1754);
    };
    auto t1751 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1755_816_impl);
    auto t1755_816 = &t1755_816_impl;
    USE(t1755_816);
    {
      Label label__True_459_impl(this);
      Label* label__True_459 = &label__True_459_impl;
      USE(label__True_459);
      Label label__False_460_impl(this);
      Label* label__False_460 = &label__False_460_impl;
      USE(label__False_460);
      Label label__done_817_1233_impl(this, {t1755_816});
      Label* label__done_817_1233 = &label__done_817_1233_impl;
      USE(label__done_817_1233);
      TNode<IntPtrT> t1756 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1757 = 2;
      TNode<IntPtrT> t1758 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1757)));
      TNode<BoolT> t1759 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1756), implicit_cast<TNode<IntPtrT>>(t1758)));
      USE(implicit_cast<TNode<BoolT>>(t1759));
      Branch(implicit_cast<TNode<BoolT>>(t1759), label__True_459, label__False_460);
      BIND(label__True_459);
            *t1755_816 = implicit_cast<TNode<Object>>(t1750());
      Goto(label__done_817_1233);
      BIND(label__False_460);
            *t1755_816 = implicit_cast<TNode<Object>>(t1751());
      Goto(label__done_817_1233);
      BIND(label__done_817_1233);
    }
    TVARIABLE(Object, is_little_endian_329_impl);
    auto is_little_endian_329 = &is_little_endian_329_impl;
    USE(is_little_endian_329);
    *is_little_endian_329 = implicit_cast<TNode<Object>>((*t1755_816).value());
    // ../../src/builtins/data-view.tq:913:7
    TNode<Object> t1760 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_327).value()), implicit_cast<TNode<Object>>((*value_328).value()), implicit_cast<TNode<Object>>((*is_little_endian_329).value()), implicit_cast<ElementsKind>(BIGUINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1760));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1760));
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
  // ../../src/builtins/data-view.tq:918:63
  {
    // ../../src/builtins/data-view.tq:919:7
    auto t1761 = [=]() {
      int31_t t1763 = 0;
      TNode<IntPtrT> t1764 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1763)));
      TNode<Object> t1765 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1764)));
      return implicit_cast<TNode<Object>>(t1765);
    };
    auto t1762 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1766_818_impl);
    auto t1766_818 = &t1766_818_impl;
    USE(t1766_818);
    {
      Label label__True_461_impl(this);
      Label* label__True_461 = &label__True_461_impl;
      USE(label__True_461);
      Label label__False_462_impl(this);
      Label* label__False_462 = &label__False_462_impl;
      USE(label__False_462);
      Label label__done_819_1234_impl(this, {t1766_818});
      Label* label__done_819_1234 = &label__done_819_1234_impl;
      USE(label__done_819_1234);
      TNode<IntPtrT> t1767 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1768 = 0;
      TNode<IntPtrT> t1769 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1768)));
      TNode<BoolT> t1770 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1767), implicit_cast<TNode<IntPtrT>>(t1769)));
      USE(implicit_cast<TNode<BoolT>>(t1770));
      Branch(implicit_cast<TNode<BoolT>>(t1770), label__True_461, label__False_462);
      BIND(label__True_461);
            *t1766_818 = implicit_cast<TNode<Object>>(t1761());
      Goto(label__done_819_1234);
      BIND(label__False_462);
            *t1766_818 = implicit_cast<TNode<Object>>(t1762());
      Goto(label__done_819_1234);
      BIND(label__done_819_1234);
    }
    TVARIABLE(Object, offset_330_impl);
    auto offset_330 = &offset_330_impl;
    USE(offset_330);
    *offset_330 = implicit_cast<TNode<Object>>((*t1766_818).value());
    // ../../src/builtins/data-view.tq:922:7
    auto t1771 = [=]() {
      int31_t t1773 = 1;
      TNode<IntPtrT> t1774 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1773)));
      TNode<Object> t1775 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1774)));
      return implicit_cast<TNode<Object>>(t1775);
    };
    auto t1772 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1776_820_impl);
    auto t1776_820 = &t1776_820_impl;
    USE(t1776_820);
    {
      Label label__True_463_impl(this);
      Label* label__True_463 = &label__True_463_impl;
      USE(label__True_463);
      Label label__False_464_impl(this);
      Label* label__False_464 = &label__False_464_impl;
      USE(label__False_464);
      Label label__done_821_1235_impl(this, {t1776_820});
      Label* label__done_821_1235 = &label__done_821_1235_impl;
      USE(label__done_821_1235);
      TNode<IntPtrT> t1777 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1778 = 1;
      TNode<IntPtrT> t1779 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1778)));
      TNode<BoolT> t1780 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1777), implicit_cast<TNode<IntPtrT>>(t1779)));
      USE(implicit_cast<TNode<BoolT>>(t1780));
      Branch(implicit_cast<TNode<BoolT>>(t1780), label__True_463, label__False_464);
      BIND(label__True_463);
            *t1776_820 = implicit_cast<TNode<Object>>(t1771());
      Goto(label__done_821_1235);
      BIND(label__False_464);
            *t1776_820 = implicit_cast<TNode<Object>>(t1772());
      Goto(label__done_821_1235);
      BIND(label__done_821_1235);
    }
    TVARIABLE(Object, value_331_impl);
    auto value_331 = &value_331_impl;
    USE(value_331);
    *value_331 = implicit_cast<TNode<Object>>((*t1776_820).value());
    // ../../src/builtins/data-view.tq:925:7
    auto t1781 = [=]() {
      int31_t t1783 = 2;
      TNode<IntPtrT> t1784 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1783)));
      TNode<Object> t1785 = UncheckedCast<Object>(GetArgumentValue(implicit_cast<CodeStubArguments*>(arguments), implicit_cast<TNode<IntPtrT>>(t1784)));
      return implicit_cast<TNode<Object>>(t1785);
    };
    auto t1782 = [=]() {
      return implicit_cast<TNode<Oddball>>(Undefined());
    };
    TVARIABLE(Object, t1786_822_impl);
    auto t1786_822 = &t1786_822_impl;
    USE(t1786_822);
    {
      Label label__True_465_impl(this);
      Label* label__True_465 = &label__True_465_impl;
      USE(label__True_465);
      Label label__False_466_impl(this);
      Label* label__False_466 = &label__False_466_impl;
      USE(label__False_466);
      Label label__done_823_1236_impl(this, {t1786_822});
      Label* label__done_823_1236 = &label__done_823_1236_impl;
      USE(label__done_823_1236);
      TNode<IntPtrT> t1787 = UncheckedCast<IntPtrT>(GetArgumentsLength(implicit_cast<CodeStubArguments*>(arguments)));
      int31_t t1788 = 2;
      TNode<IntPtrT> t1789 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1788)));
      TNode<BoolT> t1790 = UncheckedCast<BoolT>(IntPtrGreaterThan(implicit_cast<TNode<IntPtrT>>(t1787), implicit_cast<TNode<IntPtrT>>(t1789)));
      USE(implicit_cast<TNode<BoolT>>(t1790));
      Branch(implicit_cast<TNode<BoolT>>(t1790), label__True_465, label__False_466);
      BIND(label__True_465);
            *t1786_822 = implicit_cast<TNode<Object>>(t1781());
      Goto(label__done_823_1236);
      BIND(label__False_466);
            *t1786_822 = implicit_cast<TNode<Object>>(t1782());
      Goto(label__done_823_1236);
      BIND(label__done_823_1236);
    }
    TVARIABLE(Object, is_little_endian_332_impl);
    auto is_little_endian_332 = &is_little_endian_332_impl;
    USE(is_little_endian_332);
    *is_little_endian_332 = implicit_cast<TNode<Object>>((*t1786_822).value());
    // ../../src/builtins/data-view.tq:928:7
    TNode<Object> t1791 = UncheckedCast<Object>(DataViewSet(implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Object>>(p_receiver), implicit_cast<TNode<Object>>((*offset_330).value()), implicit_cast<TNode<Object>>((*value_331).value()), implicit_cast<TNode<Object>>((*is_little_endian_332).value()), implicit_cast<ElementsKind>(BIGINT64_ELEMENTS)));
    USE(implicit_cast<TNode<Object>>(t1791));
    arguments->PopAndReturn(implicit_cast<TNode<Object>>(t1791));
  }
}

}  // namespace internal
}  // namespace v8

