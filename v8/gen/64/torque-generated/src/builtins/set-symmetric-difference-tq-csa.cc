#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-object-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-duration-format.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-iterator-helpers.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realm.h"
#include "src/objects/js-shared-array.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-temporal-objects.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/objects/turboshaft-types.h"
#include "src/torque/runtime-support.h"
#include "src/wasm/wasm-linkage.h"
// Required Builtins:
#include "torque-generated/src/builtins/set-symmetric-difference-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/function-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/object-groupby-tq-csa.h"
#include "torque-generated/src/builtins/set-difference-tq-csa.h"
#include "torque-generated/src/builtins/set-symmetric-difference-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(SetPrototypeSymmetricDifference, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kOther);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, IntPtrT, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, IntPtrT, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, Object, IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, Object, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, Object, IntPtrT, IntPtrT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, Object, IntPtrT, IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, Object, Object, IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, JSReceiver> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, JSReceiver> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, JSReceiver> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, JSReceiver> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, OrderedHashSet> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, OrderedHashSet> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi, JSReceiver> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<JSSet> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Cast_JSSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_Object_constexpr_string_0(state_, "Set.prototype.symmetricDifference");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp3}, TNode<Object>{parameter1});
  }

  TNode<JSReceiver> tmp4;
  TNode<Number> tmp5;
  TNode<Object> tmp6;
  TNode<Object> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<OrderedHashSet> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    std::tie(tmp4, tmp5, tmp6, tmp7) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.symmetricDifference").Flatten();
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp9 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp1, tmp8});
    compiler::CodeAssemblerLabel label11(&ca_);
    tmp10 = Cast_OrderedHashSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp9}, &label11);
    ca_.Goto(&block7);
    if (label11.is_used()) {
      ca_.Bind(&label11);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSReceiver> tmp12;
  TNode<JSReceiver> tmp13;
  TNode<Object> tmp14;
  TNode<FixedArrayBase> tmp15;
  TNode<OrderedHashSet> tmp16;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    std::tie(tmp13, tmp14) = GetKeysIterator_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<JSReceiver>{tmp12}).Flatten();
    tmp15 = CodeStubAssembler(state_).CloneFixedArray(TNode<FixedArrayBase>{tmp10}, CodeStubAssembler::ExtractFixedArrayFlag::kFixedArrays);
    compiler::CodeAssemblerLabel label17(&ca_);
    tmp16 = Cast_OrderedHashSet_0(state_, TNode<HeapObject>{tmp15}, &label17);
    ca_.Goto(&block11);
    if (label17.is_used()) {
      ca_.Bind(&label17);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<UintPtrT> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<BoolT> tmp24;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    std::tie(tmp18, tmp19, tmp20) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp16}).Flatten();
    tmp21 = FromConstexpr_intptr_constexpr_int32_0(state_, OrderedHashSet::NumberOfElementsIndex());
    tmp22 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp21});
    tmp23 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp20});
    tmp24 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp22}, TNode<UintPtrT>{tmp23});
    ca_.Branch(tmp24, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<Object> tmp29;
  TNode<Smi> tmp30;
  TNode<JSSet> tmp31;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp25 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp21});
    tmp26 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp19}, TNode<IntPtrT>{tmp25});
    std::tie(tmp27, tmp28) = NewReference_Object_0(state_, TNode<Object>{tmp18}, TNode<IntPtrT>{tmp26}).Flatten();
    tmp29 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp27, tmp28});
    tmp30 = UnsafeCast_Smi_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp29});
    compiler::CodeAssemblerLabel label32(&ca_);
    tmp31 = Cast_JSSetWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label32);
    ca_.Goto(&block27);
    if (label32.is_used()) {
      ca_.Bind(&label32);
      ca_.Goto(&block28);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSMap> tmp33;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    compiler::CodeAssemblerLabel label34(&ca_);
    tmp33 = Cast_JSMapWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter2)}, &label34);
    ca_.Goto(&block43);
    if (label34.is_used()) {
      ca_.Bind(&label34);
      ca_.Goto(&block44);
    }
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    compiler::CodeAssemblerLabel label35(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label35);
    ca_.Goto(&block29);
    if (label35.is_used()) {
      ca_.Bind(&label35);
      ca_.Goto(&block30);
    }
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.Goto(&block24);
  }

  TNode<IntPtrT> tmp36;
  TNode<Object> tmp37;
  TNode<OrderedHashSet> tmp38;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp36 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp37 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp31, tmp36});
    compiler::CodeAssemblerLabel label39(&ca_);
    tmp38 = Cast_OrderedHashSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp37}, &label39);
    ca_.Goto(&block33);
    if (label39.is_used()) {
      ca_.Bind(&label39);
      ca_.Goto(&block34);
    }
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> tmp40;
  TNode<Int32T> tmp41;
  TNode<Int32T> tmp42;
  TNode<Object> tmp43;
  TNode<IntPtrT> tmp44;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    std::tie(tmp40, tmp41, tmp42, tmp43, tmp44) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp38}).Flatten();
    ca_.Goto(&block37, tmp16, tmp30, tmp43, tmp44);
  }

  TNode<OrderedHashSet> phi_bb37_13;
  TNode<Smi> phi_bb37_14;
  TNode<Object> phi_bb37_21;
  TNode<IntPtrT> phi_bb37_22;
  TNode<BoolT> tmp45;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_13, &phi_bb37_14, &phi_bb37_21, &phi_bb37_22);
    tmp45 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp45, &block35, std::vector<compiler::Node*>{phi_bb37_13, phi_bb37_14, phi_bb37_21, phi_bb37_22}, &block36, std::vector<compiler::Node*>{phi_bb37_13, phi_bb37_14, phi_bb37_21, phi_bb37_22});
  }

  TNode<OrderedHashSet> phi_bb35_13;
  TNode<Smi> phi_bb35_14;
  TNode<Object> phi_bb35_21;
  TNode<IntPtrT> phi_bb35_22;
  TNode<Object> tmp46;
  TNode<IntPtrT> tmp47;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_13, &phi_bb35_14, &phi_bb35_21, &phi_bb35_22);
    compiler::CodeAssemblerLabel label48(&ca_);
    std::tie(tmp46, tmp47) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp40}, TNode<Int32T>{tmp41}, TNode<Int32T>{tmp42}, TNode<IntPtrT>{phi_bb35_22}, &label48).Flatten();
    ca_.Goto(&block39, phi_bb35_13, phi_bb35_14, phi_bb35_21, phi_bb35_22, phi_bb35_22);
    if (label48.is_used()) {
      ca_.Bind(&label48);
      ca_.Goto(&block40, phi_bb35_13, phi_bb35_14, phi_bb35_21, phi_bb35_22, phi_bb35_22);
    }
  }

  TNode<OrderedHashSet> phi_bb40_13;
  TNode<Smi> phi_bb40_14;
  TNode<Object> phi_bb40_21;
  TNode<IntPtrT> phi_bb40_22;
  TNode<IntPtrT> phi_bb40_26;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_13, &phi_bb40_14, &phi_bb40_21, &phi_bb40_22, &phi_bb40_26);
    ca_.Goto(&block22, phi_bb40_13, phi_bb40_14);
  }

  TNode<OrderedHashSet> phi_bb39_13;
  TNode<Smi> phi_bb39_14;
  TNode<Object> phi_bb39_21;
  TNode<IntPtrT> phi_bb39_22;
  TNode<IntPtrT> phi_bb39_26;
  TNode<OrderedHashSet> tmp49;
  TNode<Smi> tmp50;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_13, &phi_bb39_14, &phi_bb39_21, &phi_bb39_22, &phi_bb39_26);
    std::tie(tmp49, tmp50) = FastSymmetricDifference_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp46}, TNode<OrderedHashSet>{tmp10}, TorqueStructOrderedHashSetAndNumberOfElements_0{TNode<OrderedHashSet>{phi_bb39_13}, TNode<Smi>{phi_bb39_14}}, "Set.prototype.symmetricDifference").Flatten();
    ca_.Goto(&block37, tmp49, tmp50, tmp46, tmp47);
  }

  TNode<OrderedHashSet> phi_bb36_13;
  TNode<Smi> phi_bb36_14;
  TNode<Object> phi_bb36_21;
  TNode<IntPtrT> phi_bb36_22;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_13, &phi_bb36_14, &phi_bb36_21, &phi_bb36_22);
    ca_.Goto(&block25, phi_bb36_13, phi_bb36_14);
  }

  if (block44.is_used()) {
    ca_.Bind(&block44);
    ca_.Goto(&block24);
  }

  if (block43.is_used()) {
    ca_.Bind(&block43);
    compiler::CodeAssemblerLabel label51(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label51);
    ca_.Goto(&block45);
    if (label51.is_used()) {
      ca_.Bind(&label51);
      ca_.Goto(&block46);
    }
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    ca_.Goto(&block24);
  }

  TNode<IntPtrT> tmp52;
  TNode<Object> tmp53;
  TNode<OrderedHashMap> tmp54;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp52 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp53 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp33, tmp52});
    compiler::CodeAssemblerLabel label55(&ca_);
    tmp54 = Cast_OrderedHashMap_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp53}, &label55);
    ca_.Goto(&block49);
    if (label55.is_used()) {
      ca_.Bind(&label55);
      ca_.Goto(&block50);
    }
  }

  if (block50.is_used()) {
    ca_.Bind(&block50);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashMap> tmp56;
  TNode<Int32T> tmp57;
  TNode<Int32T> tmp58;
  TNode<Object> tmp59;
  TNode<Object> tmp60;
  TNode<IntPtrT> tmp61;
  if (block49.is_used()) {
    ca_.Bind(&block49);
    std::tie(tmp56, tmp57, tmp58, tmp59, tmp60, tmp61) = NewUnmodifiedOrderedHashMapIterator_0(state_, TNode<OrderedHashMap>{tmp54}).Flatten();
    ca_.Goto(&block53, tmp16, tmp30, tmp59, tmp60, tmp61);
  }

  TNode<OrderedHashSet> phi_bb53_13;
  TNode<Smi> phi_bb53_14;
  TNode<Object> phi_bb53_21;
  TNode<Object> phi_bb53_22;
  TNode<IntPtrT> phi_bb53_23;
  TNode<BoolT> tmp62;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_13, &phi_bb53_14, &phi_bb53_21, &phi_bb53_22, &phi_bb53_23);
    tmp62 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp62, &block51, std::vector<compiler::Node*>{phi_bb53_13, phi_bb53_14, phi_bb53_21, phi_bb53_22, phi_bb53_23}, &block52, std::vector<compiler::Node*>{phi_bb53_13, phi_bb53_14, phi_bb53_21, phi_bb53_22, phi_bb53_23});
  }

  TNode<OrderedHashSet> phi_bb51_13;
  TNode<Smi> phi_bb51_14;
  TNode<Object> phi_bb51_21;
  TNode<Object> phi_bb51_22;
  TNode<IntPtrT> phi_bb51_23;
  TNode<Object> tmp63;
  TNode<Object> tmp64;
  TNode<IntPtrT> tmp65;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_13, &phi_bb51_14, &phi_bb51_21, &phi_bb51_22, &phi_bb51_23);
    compiler::CodeAssemblerLabel label66(&ca_);
    std::tie(tmp63, tmp64, tmp65) = CollectionsBuiltinsAssembler(state_).NextKeyValueIndexTupleUnmodifiedTable(TNode<OrderedHashMap>{tmp56}, TNode<Int32T>{tmp57}, TNode<Int32T>{tmp58}, TNode<IntPtrT>{phi_bb51_23}, &label66).Flatten();
    ca_.Goto(&block55, phi_bb51_13, phi_bb51_14, phi_bb51_21, phi_bb51_22, phi_bb51_23, phi_bb51_23);
    if (label66.is_used()) {
      ca_.Bind(&label66);
      ca_.Goto(&block56, phi_bb51_13, phi_bb51_14, phi_bb51_21, phi_bb51_22, phi_bb51_23, phi_bb51_23);
    }
  }

  TNode<OrderedHashSet> phi_bb56_13;
  TNode<Smi> phi_bb56_14;
  TNode<Object> phi_bb56_21;
  TNode<Object> phi_bb56_22;
  TNode<IntPtrT> phi_bb56_23;
  TNode<IntPtrT> phi_bb56_27;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_13, &phi_bb56_14, &phi_bb56_21, &phi_bb56_22, &phi_bb56_23, &phi_bb56_27);
    ca_.Goto(&block22, phi_bb56_13, phi_bb56_14);
  }

  TNode<OrderedHashSet> phi_bb55_13;
  TNode<Smi> phi_bb55_14;
  TNode<Object> phi_bb55_21;
  TNode<Object> phi_bb55_22;
  TNode<IntPtrT> phi_bb55_23;
  TNode<IntPtrT> phi_bb55_27;
  TNode<OrderedHashSet> tmp67;
  TNode<Smi> tmp68;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_13, &phi_bb55_14, &phi_bb55_21, &phi_bb55_22, &phi_bb55_23, &phi_bb55_27);
    std::tie(tmp67, tmp68) = FastSymmetricDifference_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp63}, TNode<OrderedHashSet>{tmp10}, TorqueStructOrderedHashSetAndNumberOfElements_0{TNode<OrderedHashSet>{phi_bb55_13}, TNode<Smi>{phi_bb55_14}}, "Set.prototype.symmetricDifference").Flatten();
    ca_.Goto(&block53, tmp67, tmp68, tmp63, tmp64, tmp65);
  }

  TNode<OrderedHashSet> phi_bb52_13;
  TNode<Smi> phi_bb52_14;
  TNode<Object> phi_bb52_21;
  TNode<Object> phi_bb52_22;
  TNode<IntPtrT> phi_bb52_23;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_13, &phi_bb52_14, &phi_bb52_21, &phi_bb52_22, &phi_bb52_23);
    ca_.Goto(&block25, phi_bb52_13, phi_bb52_14);
  }

  TNode<OrderedHashSet> phi_bb25_13;
  TNode<Smi> phi_bb25_14;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_13, &phi_bb25_14);
    ca_.Goto(&block23, phi_bb25_13, phi_bb25_14);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.Goto(&block59, tmp16, tmp30, ca_.Uninitialized<JSReceiver>());
  }

  TNode<OrderedHashSet> phi_bb59_13;
  TNode<Smi> phi_bb59_14;
  TNode<JSReceiver> phi_bb59_15;
  TNode<BoolT> tmp69;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_13, &phi_bb59_14, &phi_bb59_15);
    tmp69 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp69, &block57, std::vector<compiler::Node*>{phi_bb59_13, phi_bb59_14, phi_bb59_15}, &block58, std::vector<compiler::Node*>{phi_bb59_13, phi_bb59_14, phi_bb59_15});
  }

  TNode<OrderedHashSet> phi_bb57_13;
  TNode<Smi> phi_bb57_14;
  TNode<JSReceiver> phi_bb57_15;
  TNode<JSReceiver> tmp70;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_13, &phi_bb57_14, &phi_bb57_15);
    compiler::CodeAssemblerLabel label71(&ca_);
    tmp70 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp13}, TNode<Object>{tmp14}}, TNode<Map>{tmp0}, &label71);
    ca_.Goto(&block60, phi_bb57_13, phi_bb57_14, phi_bb57_15);
    if (label71.is_used()) {
      ca_.Bind(&label71);
      ca_.Goto(&block61, phi_bb57_13, phi_bb57_14, phi_bb57_15);
    }
  }

  TNode<OrderedHashSet> phi_bb61_13;
  TNode<Smi> phi_bb61_14;
  TNode<JSReceiver> phi_bb61_15;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_13, &phi_bb61_14, &phi_bb61_15);
    ca_.Goto(&block22, phi_bb61_13, phi_bb61_14);
  }

  TNode<OrderedHashSet> phi_bb60_13;
  TNode<Smi> phi_bb60_14;
  TNode<JSReceiver> phi_bb60_15;
  TNode<Object> tmp72;
  TNode<Object> tmp73;
  TNode<BoolT> tmp74;
  TNode<BoolT> tmp75;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_13, &phi_bb60_14, &phi_bb60_15);
    tmp72 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp70}, TNode<Map>{tmp0});
    tmp73 = CollectionsBuiltinsAssembler(state_).NormalizeNumberKey(TNode<Object>{tmp72});
    tmp74 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb60_13}, TNode<Object>{tmp73});
    tmp75 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<Object>{tmp73});
    ca_.Branch(tmp75, &block62, std::vector<compiler::Node*>{phi_bb60_13, phi_bb60_14}, &block63, std::vector<compiler::Node*>{phi_bb60_13, phi_bb60_14});
  }

  TNode<OrderedHashSet> phi_bb62_13;
  TNode<Smi> phi_bb62_14;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_13, &phi_bb62_14);
    ca_.Branch(tmp74, &block65, std::vector<compiler::Node*>{phi_bb62_13, phi_bb62_14}, &block66, std::vector<compiler::Node*>{phi_bb62_13, phi_bb62_14});
  }

  TNode<OrderedHashSet> phi_bb65_13;
  TNode<Smi> phi_bb65_14;
  TNode<Smi> tmp76;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_13, &phi_bb65_14);
    compiler::CodeAssemblerLabel label77(&ca_);
    tmp76 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb65_13}, TNode<Object>{tmp73}, &label77);
    ca_.Goto(&block69, phi_bb65_13, phi_bb65_14, phi_bb65_13);
    if (label77.is_used()) {
      ca_.Bind(&label77);
      ca_.Goto(&block70, phi_bb65_13, phi_bb65_14, phi_bb65_13);
    }
  }

  TNode<OrderedHashSet> phi_bb70_13;
  TNode<Smi> phi_bb70_14;
  TNode<OrderedHashSet> phi_bb70_18;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_13, &phi_bb70_14, &phi_bb70_18);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> phi_bb69_13;
  TNode<Smi> phi_bb69_14;
  TNode<OrderedHashSet> phi_bb69_18;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_13, &phi_bb69_14, &phi_bb69_18);
    ca_.Goto(&block66, phi_bb69_13, tmp76);
  }

  TNode<OrderedHashSet> phi_bb66_13;
  TNode<Smi> phi_bb66_14;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_13, &phi_bb66_14);
    ca_.Goto(&block64, phi_bb66_13, phi_bb66_14);
  }

  TNode<OrderedHashSet> phi_bb63_13;
  TNode<Smi> phi_bb63_14;
  TNode<BoolT> tmp78;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_13, &phi_bb63_14);
    tmp78 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp74});
    ca_.Branch(tmp78, &block71, std::vector<compiler::Node*>{phi_bb63_13, phi_bb63_14}, &block72, std::vector<compiler::Node*>{phi_bb63_13, phi_bb63_14});
  }

  TNode<OrderedHashSet> phi_bb71_13;
  TNode<Smi> phi_bb71_14;
  TNode<String> tmp79;
  TNode<OrderedHashSet> tmp80;
  TNode<Smi> tmp81;
  TNode<Smi> tmp82;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_13, &phi_bb71_14);
    tmp79 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.symmetricDifference");
    tmp80 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb71_13}, TNode<Object>{tmp73}, TNode<String>{tmp79});
    tmp81 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp82 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb71_14}, TNode<Smi>{tmp81});
    ca_.Goto(&block72, tmp80, tmp82);
  }

  TNode<OrderedHashSet> phi_bb72_13;
  TNode<Smi> phi_bb72_14;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_13, &phi_bb72_14);
    ca_.Goto(&block64, phi_bb72_13, phi_bb72_14);
  }

  TNode<OrderedHashSet> phi_bb64_13;
  TNode<Smi> phi_bb64_14;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_13, &phi_bb64_14);
    ca_.Goto(&block59, phi_bb64_13, phi_bb64_14, tmp70);
  }

  TNode<OrderedHashSet> phi_bb58_13;
  TNode<Smi> phi_bb58_14;
  TNode<JSReceiver> phi_bb58_15;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_13, &phi_bb58_14, &phi_bb58_15);
    ca_.Goto(&block23, phi_bb58_13, phi_bb58_14);
  }

  TNode<OrderedHashSet> phi_bb23_13;
  TNode<Smi> phi_bb23_14;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_13, &phi_bb23_14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> phi_bb22_13;
  TNode<Smi> phi_bb22_14;
  TNode<OrderedHashSet> tmp83;
  TNode<IntPtrT> tmp84;
  TNode<Object> tmp85;
  TNode<IntPtrT> tmp86;
  TNode<Map> tmp87;
  TNode<FixedArray> tmp88;
  TNode<FixedArray> tmp89;
  TNode<BoolT> tmp90;
  TNode<BoolT> tmp91;
  TNode<IntPtrT> tmp92;
  TNode<HeapObject> tmp93;
  TNode<IntPtrT> tmp94;
  TNode<IntPtrT> tmp95;
  TNode<IntPtrT> tmp96;
  TNode<IntPtrT> tmp97;
  TNode<JSSet> tmp98;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_13, &phi_bb22_14);
    tmp83 = ShrinkOrderedHashSetIfNeeded_0(state_, TNode<Context>{parameter0}, TNode<Smi>{phi_bb22_14}, TNode<OrderedHashSet>{phi_bb22_13});
    tmp84 = JS_SET_MAP_INDEX_0(state_);
    std::tie(tmp85, tmp86) = NativeContextSlot_NativeContext_Map_0(state_, TNode<NativeContext>{parameter0}, TNode<IntPtrT>{tmp84}).Flatten();
    tmp87 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp85, tmp86});
    tmp88 = kEmptyFixedArray_0(state_);
    tmp89 = kEmptyFixedArray_0(state_);
    tmp90 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp91 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp92 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp93 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp92}, TNode<Map>{tmp87}, TNode<BoolT>{tmp90}, TNode<BoolT>{tmp91});
    tmp94 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp93, tmp94}, tmp87);
    tmp95 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp93, tmp95}, tmp88);
    tmp96 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp93, tmp96}, tmp89);
    tmp97 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp93, tmp97}, tmp83);
    tmp98 = TORQUE_CAST(TNode<HeapObject>{tmp93});
    CodeStubAssembler(state_).Return(tmp98);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-symmetric-difference.tq?l=135&c=1
TorqueStructOrderedHashSetAndNumberOfElements_0 FastSymmetricDifference_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_nextValue, TNode<OrderedHashSet> p_table, TorqueStructOrderedHashSetAndNumberOfElements_0 p_resultSetDataAndNumberOfElements, const char* p_methodName) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CollectionsBuiltinsAssembler(state_).NormalizeNumberKey(TNode<Object>{p_nextValue});
    tmp1 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_resultSetDataAndNumberOfElements.setData}, TNode<Object>{tmp0});
    ca_.Branch(tmp1, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp2;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_resultSetDataAndNumberOfElements.setData}, TNode<Object>{tmp0}, &label3);
    ca_.Goto(&block11);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block8, p_resultSetDataAndNumberOfElements.setData, tmp2);
  }

  TNode<String> tmp4;
  TNode<OrderedHashSet> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = FromConstexpr_String_constexpr_string_0(state_, p_methodName);
    tmp5 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_resultSetDataAndNumberOfElements.setData}, TNode<Object>{tmp0}, TNode<String>{tmp4});
    tmp6 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp7 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{p_resultSetDataAndNumberOfElements.numberOfElements}, TNode<Smi>{tmp6});
    ca_.Goto(&block8, tmp5, tmp7);
  }

  TNode<OrderedHashSet> phi_bb8_6;
  TNode<Smi> phi_bb8_7;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_6, &phi_bb8_7);
    ca_.Goto(&block13);
  }

    ca_.Bind(&block13);
  return TorqueStructOrderedHashSetAndNumberOfElements_0{TNode<OrderedHashSet>{phi_bb8_6}, TNode<Smi>{phi_bb8_7}};
}

} // namespace internal
} // namespace v8
