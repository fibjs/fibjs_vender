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
#include "torque-generated/src/builtins/set-intersection-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/function-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/set-difference-tq-csa.h"
#include "torque-generated/src/builtins/set-intersection-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(SetPrototypeIntersection, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, OrderedHashSet, Object, IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, OrderedHashSet, Object, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, OrderedHashSet, Object, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    tmp3 = FromConstexpr_Object_constexpr_string_0(state_, "Set.prototype.intersection");
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
    std::tie(tmp4, tmp5, tmp6, tmp7) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.intersection").Flatten();
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

  TNode<OrderedHashSet> tmp12;
  TNode<Int32T> tmp13;
  TNode<JSSet> tmp14;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = CodeStubAssembler(state_).AllocateOrderedHashSet();
    tmp13 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp10}, OrderedHashSet::NumberOfElementsIndex());
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = Cast_JSSetWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label15);
    ca_.Goto(&block15);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block16);
    }
  }

  TNode<JSMap> tmp16;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    compiler::CodeAssemblerLabel label17(&ca_);
    tmp16 = Cast_JSMapWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter2)}, &label17);
    ca_.Goto(&block28);
    if (label17.is_used()) {
      ca_.Bind(&label17);
      ca_.Goto(&block29);
    }
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label18(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label18);
    ca_.Goto(&block17);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block18);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(&block12);
  }

  TNode<IntPtrT> tmp19;
  TNode<Object> tmp20;
  TNode<OrderedHashSet> tmp21;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp19 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp20 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp14, tmp19});
    compiler::CodeAssemblerLabel label22(&ca_);
    tmp21 = Cast_OrderedHashSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp20}, &label22);
    ca_.Goto(&block21);
    if (label22.is_used()) {
      ca_.Bind(&label22);
      ca_.Goto(&block22);
    }
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp23;
  TNode<BoolT> tmp24;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp23 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp21}, OrderedHashSet::NumberOfElementsIndex());
    tmp24 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp13}, TNode<Int32T>{tmp23});
    ca_.Branch(tmp24, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp25;
  TNode<OrderedHashSet> tmp26;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp25 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.intersection");
    tmp26 = FastIntersect_OrderedHashSet_0(state_, TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<OrderedHashSet>{tmp21}, TNode<String>{tmp25}, TNode<OrderedHashSet>{tmp12});
    ca_.Goto(&block10, tmp26);
  }

  TNode<String> tmp27;
  TNode<OrderedHashSet> tmp28;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp27 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.intersection");
    tmp28 = FastIntersect_OrderedHashSet_0(state_, TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp21}, TNode<OrderedHashSet>{tmp10}, TNode<String>{tmp27}, TNode<OrderedHashSet>{tmp12});
    ca_.Goto(&block10, tmp28);
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.Goto(&block12);
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    compiler::CodeAssemblerLabel label29(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label29);
    ca_.Goto(&block30);
    if (label29.is_used()) {
      ca_.Bind(&label29);
      ca_.Goto(&block31);
    }
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    ca_.Goto(&block12);
  }

  TNode<IntPtrT> tmp30;
  TNode<Object> tmp31;
  TNode<OrderedHashMap> tmp32;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp30 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp31 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp16, tmp30});
    compiler::CodeAssemblerLabel label33(&ca_);
    tmp32 = Cast_OrderedHashMap_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp31}, &label33);
    ca_.Goto(&block34);
    if (label33.is_used()) {
      ca_.Bind(&label33);
      ca_.Goto(&block35);
    }
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp34;
  TNode<BoolT> tmp35;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    tmp34 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp32}, OrderedHashSet::NumberOfElementsIndex());
    tmp35 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp13}, TNode<Int32T>{tmp34});
    ca_.Branch(tmp35, &block36, std::vector<compiler::Node*>{}, &block37, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp36;
  TNode<OrderedHashSet> tmp37;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    tmp36 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.intersection");
    tmp37 = FastIntersect_OrderedHashMap_0(state_, TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<OrderedHashMap>{tmp32}, TNode<String>{tmp36}, TNode<OrderedHashSet>{tmp12});
    ca_.Goto(&block10, tmp37);
  }

  TNode<OrderedHashMap> tmp38;
  TNode<Int32T> tmp39;
  TNode<Int32T> tmp40;
  TNode<Object> tmp41;
  TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  if (block37.is_used()) {
    ca_.Bind(&block37);
    std::tie(tmp38, tmp39, tmp40, tmp41, tmp42, tmp43) = NewUnmodifiedOrderedHashMapIterator_0(state_, TNode<OrderedHashMap>{tmp32}).Flatten();
    ca_.Goto(&block41, tmp12, tmp41, tmp42, tmp43);
  }

  TNode<OrderedHashSet> phi_bb41_10;
  TNode<Object> phi_bb41_19;
  TNode<Object> phi_bb41_20;
  TNode<IntPtrT> phi_bb41_21;
  TNode<BoolT> tmp44;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_10, &phi_bb41_19, &phi_bb41_20, &phi_bb41_21);
    tmp44 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp44, &block39, std::vector<compiler::Node*>{phi_bb41_10, phi_bb41_19, phi_bb41_20, phi_bb41_21}, &block40, std::vector<compiler::Node*>{phi_bb41_10, phi_bb41_19, phi_bb41_20, phi_bb41_21});
  }

  TNode<OrderedHashSet> phi_bb39_10;
  TNode<Object> phi_bb39_19;
  TNode<Object> phi_bb39_20;
  TNode<IntPtrT> phi_bb39_21;
  TNode<Object> tmp45;
  TNode<Object> tmp46;
  TNode<IntPtrT> tmp47;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_10, &phi_bb39_19, &phi_bb39_20, &phi_bb39_21);
    compiler::CodeAssemblerLabel label48(&ca_);
    std::tie(tmp45, tmp46, tmp47) = CollectionsBuiltinsAssembler(state_).NextKeyValueIndexTupleUnmodifiedTable(TNode<OrderedHashMap>{tmp38}, TNode<Int32T>{tmp39}, TNode<Int32T>{tmp40}, TNode<IntPtrT>{phi_bb39_21}, &label48).Flatten();
    ca_.Goto(&block43, phi_bb39_10, phi_bb39_19, phi_bb39_20, phi_bb39_21, phi_bb39_21);
    if (label48.is_used()) {
      ca_.Bind(&label48);
      ca_.Goto(&block44, phi_bb39_10, phi_bb39_19, phi_bb39_20, phi_bb39_21, phi_bb39_21);
    }
  }

  TNode<OrderedHashSet> phi_bb44_10;
  TNode<Object> phi_bb44_19;
  TNode<Object> phi_bb44_20;
  TNode<IntPtrT> phi_bb44_21;
  TNode<IntPtrT> phi_bb44_25;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_10, &phi_bb44_19, &phi_bb44_20, &phi_bb44_21, &phi_bb44_25);
    ca_.Goto(&block10, phi_bb44_10);
  }

  TNode<OrderedHashSet> phi_bb43_10;
  TNode<Object> phi_bb43_19;
  TNode<Object> phi_bb43_20;
  TNode<IntPtrT> phi_bb43_21;
  TNode<IntPtrT> phi_bb43_25;
  TNode<BoolT> tmp49;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_10, &phi_bb43_19, &phi_bb43_20, &phi_bb43_21, &phi_bb43_25);
    tmp49 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<Object>{tmp45});
    ca_.Branch(tmp49, &block45, std::vector<compiler::Node*>{phi_bb43_10}, &block46, std::vector<compiler::Node*>{phi_bb43_10});
  }

  TNode<OrderedHashSet> phi_bb45_10;
  TNode<String> tmp50;
  TNode<OrderedHashSet> tmp51;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_10);
    tmp50 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.intersection");
    tmp51 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb45_10}, TNode<Object>{tmp45}, TNode<String>{tmp50});
    ca_.Goto(&block46, tmp51);
  }

  TNode<OrderedHashSet> phi_bb46_10;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_10);
    ca_.Goto(&block41, phi_bb46_10, tmp45, tmp46, tmp47);
  }

  TNode<OrderedHashSet> phi_bb40_10;
  TNode<Object> phi_bb40_19;
  TNode<Object> phi_bb40_20;
  TNode<IntPtrT> phi_bb40_21;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_10, &phi_bb40_19, &phi_bb40_20, &phi_bb40_21);
    ca_.Goto(&block11, phi_bb40_10);
  }

  TNode<Int32T> tmp52;
  TNode<BoolT> tmp53;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp52 = Convert_int32_Number_0(state_, TNode<Number>{tmp5});
    tmp53 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp13}, TNode<Int32T>{tmp52});
    ca_.Branch(tmp53, &block47, std::vector<compiler::Node*>{}, &block48, std::vector<compiler::Node*>{});
  }

  TNode<OrderedHashSet> tmp54;
  TNode<Object> tmp55;
  TNode<IntPtrT> tmp56;
  if (block47.is_used()) {
    ca_.Bind(&block47);
    std::tie(tmp54, tmp55, tmp56) = NewOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp10}).Flatten();
    ca_.Goto(&block52, tmp12, tmp54, tmp55, tmp56);
  }

  TNode<OrderedHashSet> phi_bb52_10;
  TNode<OrderedHashSet> phi_bb52_12;
  TNode<Object> phi_bb52_13;
  TNode<IntPtrT> phi_bb52_14;
  TNode<BoolT> tmp57;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_10, &phi_bb52_12, &phi_bb52_13, &phi_bb52_14);
    tmp57 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp57, &block50, std::vector<compiler::Node*>{phi_bb52_10, phi_bb52_12, phi_bb52_13, phi_bb52_14}, &block51, std::vector<compiler::Node*>{phi_bb52_10, phi_bb52_12, phi_bb52_13, phi_bb52_14});
  }

  TNode<OrderedHashSet> phi_bb50_10;
  TNode<OrderedHashSet> phi_bb50_12;
  TNode<Object> phi_bb50_13;
  TNode<IntPtrT> phi_bb50_14;
  TNode<OrderedHashSet> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<Object> tmp60;
  TNode<IntPtrT> tmp61;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_10, &phi_bb50_12, &phi_bb50_13, &phi_bb50_14);
    std::tie(tmp58, tmp59) = CollectionsBuiltinsAssembler(state_).TransitionOrderedHashSetNoUpdate(TNode<OrderedHashSet>{phi_bb50_12}, TNode<IntPtrT>{phi_bb50_14}).Flatten();
    compiler::CodeAssemblerLabel label62(&ca_);
    std::tie(tmp60, tmp61) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPair(TNode<OrderedHashSet>{tmp58}, TNode<IntPtrT>{tmp59}, &label62).Flatten();
    ca_.Goto(&block54, phi_bb50_10, phi_bb50_13);
    if (label62.is_used()) {
      ca_.Bind(&label62);
      ca_.Goto(&block55, phi_bb50_10, phi_bb50_13);
    }
  }

  TNode<OrderedHashSet> phi_bb55_10;
  TNode<Object> phi_bb55_13;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_10, &phi_bb55_13);
    ca_.Goto(&block10, phi_bb55_10);
  }

  TNode<OrderedHashSet> phi_bb54_10;
  TNode<Object> phi_bb54_13;
  TNode<Object> tmp63;
  TNode<BoolT> tmp64;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_10, &phi_bb54_13);
    tmp63 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp6}, TNode<Object>{tmp4}, TNode<Object>{tmp60});
    tmp64 = ToBoolean_0(state_, TNode<Object>{tmp63});
    ca_.Branch(tmp64, &block56, std::vector<compiler::Node*>{phi_bb54_10}, &block57, std::vector<compiler::Node*>{phi_bb54_10});
  }

  TNode<OrderedHashSet> phi_bb56_10;
  TNode<String> tmp65;
  TNode<OrderedHashSet> tmp66;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_10);
    tmp65 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.intersection");
    tmp66 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb56_10}, TNode<Object>{tmp60}, TNode<String>{tmp65});
    ca_.Goto(&block57, tmp66);
  }

  TNode<OrderedHashSet> phi_bb57_10;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_10);
    ca_.Goto(&block52, phi_bb57_10, tmp58, tmp60, tmp61);
  }

  TNode<OrderedHashSet> phi_bb51_10;
  TNode<OrderedHashSet> phi_bb51_12;
  TNode<Object> phi_bb51_13;
  TNode<IntPtrT> phi_bb51_14;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_10, &phi_bb51_12, &phi_bb51_13, &phi_bb51_14);
    ca_.Goto(&block49, phi_bb51_10);
  }

  TNode<JSReceiver> tmp67;
  TNode<JSReceiver> tmp68;
  TNode<Object> tmp69;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp67 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    std::tie(tmp68, tmp69) = GetKeysIterator_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<JSReceiver>{tmp67}).Flatten();
    ca_.Goto(&block60, tmp12, ca_.Uninitialized<JSReceiver>());
  }

  TNode<OrderedHashSet> phi_bb60_10;
  TNode<JSReceiver> phi_bb60_14;
  TNode<BoolT> tmp70;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_10, &phi_bb60_14);
    tmp70 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp70, &block58, std::vector<compiler::Node*>{phi_bb60_10, phi_bb60_14}, &block59, std::vector<compiler::Node*>{phi_bb60_10, phi_bb60_14});
  }

  TNode<OrderedHashSet> phi_bb58_10;
  TNode<JSReceiver> phi_bb58_14;
  TNode<JSReceiver> tmp71;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_10, &phi_bb58_14);
    compiler::CodeAssemblerLabel label72(&ca_);
    tmp71 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp68}, TNode<Object>{tmp69}}, TNode<Map>{tmp0}, &label72);
    ca_.Goto(&block61, phi_bb58_10, phi_bb58_14);
    if (label72.is_used()) {
      ca_.Bind(&label72);
      ca_.Goto(&block62, phi_bb58_10, phi_bb58_14);
    }
  }

  TNode<OrderedHashSet> phi_bb62_10;
  TNode<JSReceiver> phi_bb62_14;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_10, &phi_bb62_14);
    ca_.Goto(&block10, phi_bb62_10);
  }

  TNode<OrderedHashSet> phi_bb61_10;
  TNode<JSReceiver> phi_bb61_14;
  TNode<Object> tmp73;
  TNode<BoolT> tmp74;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_10, &phi_bb61_14);
    tmp73 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp71}, TNode<Map>{tmp0});
    tmp74 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<Object>{tmp73});
    ca_.Branch(tmp74, &block63, std::vector<compiler::Node*>{phi_bb61_10}, &block64, std::vector<compiler::Node*>{phi_bb61_10});
  }

  TNode<OrderedHashSet> phi_bb63_10;
  TNode<String> tmp75;
  TNode<OrderedHashSet> tmp76;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_10);
    tmp75 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.intersection");
    tmp76 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb63_10}, TNode<Object>{tmp73}, TNode<String>{tmp75});
    ca_.Goto(&block64, tmp76);
  }

  TNode<OrderedHashSet> phi_bb64_10;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_10);
    ca_.Goto(&block60, phi_bb64_10, tmp71);
  }

  TNode<OrderedHashSet> phi_bb59_10;
  TNode<JSReceiver> phi_bb59_14;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_10, &phi_bb59_14);
    ca_.Goto(&block49, phi_bb59_10);
  }

  TNode<OrderedHashSet> phi_bb49_10;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_10);
    ca_.Goto(&block11, phi_bb49_10);
  }

  TNode<OrderedHashSet> phi_bb11_10;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> phi_bb10_10;
  TNode<IntPtrT> tmp77;
  TNode<Object> tmp78;
  TNode<IntPtrT> tmp79;
  TNode<Map> tmp80;
  TNode<FixedArray> tmp81;
  TNode<FixedArray> tmp82;
  TNode<BoolT> tmp83;
  TNode<BoolT> tmp84;
  TNode<IntPtrT> tmp85;
  TNode<HeapObject> tmp86;
  TNode<IntPtrT> tmp87;
  TNode<IntPtrT> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<JSSet> tmp91;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_10);
    tmp77 = JS_SET_MAP_INDEX_0(state_);
    std::tie(tmp78, tmp79) = NativeContextSlot_NativeContext_Map_0(state_, TNode<NativeContext>{parameter0}, TNode<IntPtrT>{tmp77}).Flatten();
    tmp80 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp78, tmp79});
    tmp81 = kEmptyFixedArray_0(state_);
    tmp82 = kEmptyFixedArray_0(state_);
    tmp83 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp84 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp85 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp86 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp85}, TNode<Map>{tmp80}, TNode<BoolT>{tmp83}, TNode<BoolT>{tmp84});
    tmp87 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp86, tmp87}, tmp80);
    tmp88 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp86, tmp88}, tmp81);
    tmp89 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp86, tmp89}, tmp82);
    tmp90 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp86, tmp90}, phi_bb10_10);
    tmp91 = TORQUE_CAST(TNode<HeapObject>{tmp86});
    CodeStubAssembler(state_).Return(tmp91);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-intersection.tq?l=43&c=27
TNode<OrderedHashSet> FastIntersect_OrderedHashSet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashSet> p_tableToLookup, TNode<String> p_methodName, TNode<OrderedHashSet> p_resultSetData) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<OrderedHashSet> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2, tmp3, tmp4) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{p_collectionToIterate}).Flatten();
    ca_.Goto(&block6, p_resultSetData, tmp3, tmp4);
  }

  TNode<OrderedHashSet> phi_bb6_5;
  TNode<Object> phi_bb6_9;
  TNode<IntPtrT> phi_bb6_10;
  TNode<BoolT> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_5, &phi_bb6_9, &phi_bb6_10);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{phi_bb6_5, phi_bb6_9, phi_bb6_10}, &block5, std::vector<compiler::Node*>{phi_bb6_5, phi_bb6_9, phi_bb6_10});
  }

  TNode<OrderedHashSet> phi_bb4_5;
  TNode<Object> phi_bb4_9;
  TNode<IntPtrT> phi_bb4_10;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_9, &phi_bb4_10);
    compiler::CodeAssemblerLabel label8(&ca_);
    std::tie(tmp6, tmp7) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp0}, TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2}, TNode<IntPtrT>{phi_bb4_10}, &label8).Flatten();
    ca_.Goto(&block8, phi_bb4_5, phi_bb4_9, phi_bb4_10, phi_bb4_10);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block9, phi_bb4_5, phi_bb4_9, phi_bb4_10, phi_bb4_10);
    }
  }

  TNode<OrderedHashSet> phi_bb9_5;
  TNode<Object> phi_bb9_9;
  TNode<IntPtrT> phi_bb9_10;
  TNode<IntPtrT> phi_bb9_14;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5, &phi_bb9_9, &phi_bb9_10, &phi_bb9_14);
    ca_.Goto(&block12, phi_bb9_5);
  }

  TNode<OrderedHashSet> phi_bb8_5;
  TNode<Object> phi_bb8_9;
  TNode<IntPtrT> phi_bb8_10;
  TNode<IntPtrT> phi_bb8_14;
  TNode<BoolT> tmp9;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_5, &phi_bb8_9, &phi_bb8_10, &phi_bb8_14);
    tmp9 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_tableToLookup}, TNode<Object>{tmp6});
    ca_.Branch(tmp9, &block10, std::vector<compiler::Node*>{phi_bb8_5}, &block11, std::vector<compiler::Node*>{phi_bb8_5});
  }

  TNode<OrderedHashSet> phi_bb10_5;
  TNode<OrderedHashSet> tmp10;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5);
    tmp10 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{p_context}, TNode<OrderedHashSet>{phi_bb10_5}, TNode<Object>{tmp6}, TNode<String>{p_methodName});
    ca_.Goto(&block11, tmp10);
  }

  TNode<OrderedHashSet> phi_bb11_5;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_5);
    ca_.Goto(&block6, phi_bb11_5, tmp6, tmp7);
  }

  TNode<OrderedHashSet> phi_bb5_5;
  TNode<Object> phi_bb5_9;
  TNode<IntPtrT> phi_bb5_10;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_5, &phi_bb5_9, &phi_bb5_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> phi_bb12_5;
    ca_.Bind(&block12, &phi_bb12_5);
  return TNode<OrderedHashSet>{phi_bb12_5};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-intersection.tq?l=63&c=27
TNode<OrderedHashSet> FastIntersect_OrderedHashMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashMap> p_tableToLookup, TNode<String> p_methodName, TNode<OrderedHashSet> p_resultSetData) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<OrderedHashSet> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2, tmp3, tmp4) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{p_collectionToIterate}).Flatten();
    ca_.Goto(&block6, p_resultSetData, tmp3, tmp4);
  }

  TNode<OrderedHashSet> phi_bb6_5;
  TNode<Object> phi_bb6_9;
  TNode<IntPtrT> phi_bb6_10;
  TNode<BoolT> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_5, &phi_bb6_9, &phi_bb6_10);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{phi_bb6_5, phi_bb6_9, phi_bb6_10}, &block5, std::vector<compiler::Node*>{phi_bb6_5, phi_bb6_9, phi_bb6_10});
  }

  TNode<OrderedHashSet> phi_bb4_5;
  TNode<Object> phi_bb4_9;
  TNode<IntPtrT> phi_bb4_10;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_9, &phi_bb4_10);
    compiler::CodeAssemblerLabel label8(&ca_);
    std::tie(tmp6, tmp7) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp0}, TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2}, TNode<IntPtrT>{phi_bb4_10}, &label8).Flatten();
    ca_.Goto(&block8, phi_bb4_5, phi_bb4_9, phi_bb4_10, phi_bb4_10);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block9, phi_bb4_5, phi_bb4_9, phi_bb4_10, phi_bb4_10);
    }
  }

  TNode<OrderedHashSet> phi_bb9_5;
  TNode<Object> phi_bb9_9;
  TNode<IntPtrT> phi_bb9_10;
  TNode<IntPtrT> phi_bb9_14;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5, &phi_bb9_9, &phi_bb9_10, &phi_bb9_14);
    ca_.Goto(&block12, phi_bb9_5);
  }

  TNode<OrderedHashSet> phi_bb8_5;
  TNode<Object> phi_bb8_9;
  TNode<IntPtrT> phi_bb8_10;
  TNode<IntPtrT> phi_bb8_14;
  TNode<BoolT> tmp9;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_5, &phi_bb8_9, &phi_bb8_10, &phi_bb8_14);
    tmp9 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{p_context}, TNode<OrderedHashMap>{p_tableToLookup}, TNode<Object>{tmp6});
    ca_.Branch(tmp9, &block10, std::vector<compiler::Node*>{phi_bb8_5}, &block11, std::vector<compiler::Node*>{phi_bb8_5});
  }

  TNode<OrderedHashSet> phi_bb10_5;
  TNode<OrderedHashSet> tmp10;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5);
    tmp10 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{p_context}, TNode<OrderedHashSet>{phi_bb10_5}, TNode<Object>{tmp6}, TNode<String>{p_methodName});
    ca_.Goto(&block11, tmp10);
  }

  TNode<OrderedHashSet> phi_bb11_5;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_5);
    ca_.Goto(&block6, phi_bb11_5, tmp6, tmp7);
  }

  TNode<OrderedHashSet> phi_bb5_5;
  TNode<Object> phi_bb5_9;
  TNode<IntPtrT> phi_bb5_10;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_5, &phi_bb5_9, &phi_bb5_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> phi_bb12_5;
    ca_.Bind(&block12, &phi_bb12_5);
  return TNode<OrderedHashSet>{phi_bb12_5};
}

} // namespace internal
} // namespace v8
