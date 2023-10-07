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
#include "torque-generated/src/builtins/set-difference-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/function-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/object-groupby-tq-csa.h"
#include "torque-generated/src/builtins/set-difference-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-collection-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(SetPrototypeDifference, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, OrderedHashSet, Object, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, OrderedHashSet, Object, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, OrderedHashSet, Object, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    tmp3 = FromConstexpr_Object_constexpr_string_0(state_, "Set.prototype.difference");
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
    std::tie(tmp4, tmp5, tmp6, tmp7) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.difference").Flatten();
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

  TNode<FixedArrayBase> tmp12;
  TNode<OrderedHashSet> tmp13;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = CodeStubAssembler(state_).CloneFixedArray(TNode<FixedArrayBase>{tmp10}, CodeStubAssembler::ExtractFixedArrayFlag::kFixedArrays);
    compiler::CodeAssemblerLabel label14(&ca_);
    tmp13 = Cast_OrderedHashSet_0(state_, TNode<HeapObject>{tmp12}, &label14);
    ca_.Goto(&block11);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp15;
  TNode<Smi> tmp16;
  TNode<JSSet> tmp17;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp15 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp10}, OrderedHashSet::NumberOfElementsIndex());
    tmp16 = Convert_Smi_int32_0(state_, TNode<Int32T>{tmp15});
    compiler::CodeAssemblerLabel label18(&ca_);
    tmp17 = Cast_JSSetWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label18);
    ca_.Goto(&block19);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block20);
    }
  }

  TNode<JSMap> tmp19;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    compiler::CodeAssemblerLabel label20(&ca_);
    tmp19 = Cast_JSMapWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter2)}, &label20);
    ca_.Goto(&block32);
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block33);
    }
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    compiler::CodeAssemblerLabel label21(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label21);
    ca_.Goto(&block21);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block22);
    }
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.Goto(&block16);
  }

  TNode<IntPtrT> tmp22;
  TNode<Object> tmp23;
  TNode<OrderedHashSet> tmp24;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp23 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp17, tmp22});
    compiler::CodeAssemblerLabel label25(&ca_);
    tmp24 = Cast_OrderedHashSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp23}, &label25);
    ca_.Goto(&block25);
    if (label25.is_used()) {
      ca_.Bind(&label25);
      ca_.Goto(&block26);
    }
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp26;
  TNode<BoolT> tmp27;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp26 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp24}, OrderedHashSet::NumberOfElementsIndex());
    tmp27 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp15}, TNode<Int32T>{tmp26});
    ca_.Branch(tmp27, &block27, std::vector<compiler::Node*>{}, &block28, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp28;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp28 = FastDifference_OrderedHashSet_0(state_, TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<OrderedHashSet>{tmp24}, TNode<OrderedHashSet>{tmp13});
    ca_.Goto(&block29, tmp28);
  }

  TNode<Smi> tmp29;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp29 = FastDifference_OrderedHashSet_0(state_, TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp24}, TNode<OrderedHashSet>{tmp13}, TNode<OrderedHashSet>{tmp13});
    ca_.Goto(&block29, tmp29);
  }

  TNode<Smi> phi_bb29_12;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_12);
    ca_.Goto(&block14, phi_bb29_12);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    ca_.Goto(&block16);
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    compiler::CodeAssemblerLabel label30(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label30);
    ca_.Goto(&block34);
    if (label30.is_used()) {
      ca_.Bind(&label30);
      ca_.Goto(&block35);
    }
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    ca_.Goto(&block16);
  }

  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<OrderedHashMap> tmp33;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    tmp31 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp32 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp19, tmp31});
    compiler::CodeAssemblerLabel label34(&ca_);
    tmp33 = Cast_OrderedHashMap_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp32}, &label34);
    ca_.Goto(&block38);
    if (label34.is_used()) {
      ca_.Bind(&label34);
      ca_.Goto(&block39);
    }
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp35;
  TNode<BoolT> tmp36;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    tmp35 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp33}, OrderedHashSet::NumberOfElementsIndex());
    tmp36 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp15}, TNode<Int32T>{tmp35});
    ca_.Branch(tmp36, &block40, std::vector<compiler::Node*>{}, &block41, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp37;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp37 = FastDifference_OrderedHashMap_0(state_, TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<OrderedHashMap>{tmp33}, TNode<OrderedHashSet>{tmp13});
    ca_.Goto(&block14, tmp37);
  }

  TNode<OrderedHashMap> tmp38;
  TNode<Int32T> tmp39;
  TNode<Int32T> tmp40;
  TNode<Object> tmp41;
  TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    std::tie(tmp38, tmp39, tmp40, tmp41, tmp42, tmp43) = NewUnmodifiedOrderedHashMapIterator_0(state_, TNode<OrderedHashMap>{tmp33}).Flatten();
    ca_.Goto(&block45, tmp16, tmp41, tmp42, tmp43);
  }

  TNode<Smi> phi_bb45_12;
  TNode<Object> phi_bb45_20;
  TNode<Object> phi_bb45_21;
  TNode<IntPtrT> phi_bb45_22;
  TNode<BoolT> tmp44;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_12, &phi_bb45_20, &phi_bb45_21, &phi_bb45_22);
    tmp44 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp44, &block43, std::vector<compiler::Node*>{phi_bb45_12, phi_bb45_20, phi_bb45_21, phi_bb45_22}, &block44, std::vector<compiler::Node*>{phi_bb45_12, phi_bb45_20, phi_bb45_21, phi_bb45_22});
  }

  TNode<Smi> phi_bb43_12;
  TNode<Object> phi_bb43_20;
  TNode<Object> phi_bb43_21;
  TNode<IntPtrT> phi_bb43_22;
  TNode<Object> tmp45;
  TNode<Object> tmp46;
  TNode<IntPtrT> tmp47;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_12, &phi_bb43_20, &phi_bb43_21, &phi_bb43_22);
    compiler::CodeAssemblerLabel label48(&ca_);
    std::tie(tmp45, tmp46, tmp47) = CollectionsBuiltinsAssembler(state_).NextKeyValueIndexTupleUnmodifiedTable(TNode<OrderedHashMap>{tmp38}, TNode<Int32T>{tmp39}, TNode<Int32T>{tmp40}, TNode<IntPtrT>{phi_bb43_22}, &label48).Flatten();
    ca_.Goto(&block47, phi_bb43_12, phi_bb43_20, phi_bb43_21, phi_bb43_22, phi_bb43_22);
    if (label48.is_used()) {
      ca_.Bind(&label48);
      ca_.Goto(&block48, phi_bb43_12, phi_bb43_20, phi_bb43_21, phi_bb43_22, phi_bb43_22);
    }
  }

  TNode<Smi> phi_bb48_12;
  TNode<Object> phi_bb48_20;
  TNode<Object> phi_bb48_21;
  TNode<IntPtrT> phi_bb48_22;
  TNode<IntPtrT> phi_bb48_26;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_12, &phi_bb48_20, &phi_bb48_21, &phi_bb48_22, &phi_bb48_26);
    ca_.Goto(&block14, phi_bb48_12);
  }

  TNode<Smi> phi_bb47_12;
  TNode<Object> phi_bb47_20;
  TNode<Object> phi_bb47_21;
  TNode<IntPtrT> phi_bb47_22;
  TNode<IntPtrT> phi_bb47_26;
  TNode<BoolT> tmp49;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_12, &phi_bb47_20, &phi_bb47_21, &phi_bb47_22, &phi_bb47_26);
    tmp49 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp13}, TNode<Object>{tmp45});
    ca_.Branch(tmp49, &block49, std::vector<compiler::Node*>{phi_bb47_12}, &block50, std::vector<compiler::Node*>{phi_bb47_12});
  }

  TNode<Smi> phi_bb49_12;
  TNode<Smi> tmp50;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_12);
    compiler::CodeAssemblerLabel label51(&ca_);
    tmp50 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp13}, TNode<Object>{tmp45}, &label51);
    ca_.Goto(&block53, phi_bb49_12);
    if (label51.is_used()) {
      ca_.Bind(&label51);
      ca_.Goto(&block54, phi_bb49_12);
    }
  }

  TNode<Smi> phi_bb54_12;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb53_12;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_12);
    ca_.Goto(&block50, tmp50);
  }

  TNode<Smi> phi_bb50_12;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_12);
    ca_.Goto(&block45, phi_bb50_12, tmp45, tmp46, tmp47);
  }

  TNode<Smi> phi_bb44_12;
  TNode<Object> phi_bb44_20;
  TNode<Object> phi_bb44_21;
  TNode<IntPtrT> phi_bb44_22;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_12, &phi_bb44_20, &phi_bb44_21, &phi_bb44_22);
    ca_.Goto(&block15, phi_bb44_12);
  }

  TNode<Int32T> tmp52;
  TNode<BoolT> tmp53;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp52 = Convert_int32_Number_0(state_, TNode<Number>{tmp5});
    tmp53 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp15}, TNode<Int32T>{tmp52});
    ca_.Branch(tmp53, &block55, std::vector<compiler::Node*>{}, &block56, std::vector<compiler::Node*>{});
  }

  TNode<OrderedHashSet> tmp54;
  TNode<Object> tmp55;
  TNode<IntPtrT> tmp56;
  if (block55.is_used()) {
    ca_.Bind(&block55);
    std::tie(tmp54, tmp55, tmp56) = NewOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp10}).Flatten();
    ca_.Goto(&block60, tmp16, tmp54, tmp55, tmp56);
  }

  TNode<Smi> phi_bb60_12;
  TNode<OrderedHashSet> phi_bb60_13;
  TNode<Object> phi_bb60_14;
  TNode<IntPtrT> phi_bb60_15;
  TNode<BoolT> tmp57;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_12, &phi_bb60_13, &phi_bb60_14, &phi_bb60_15);
    tmp57 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp57, &block58, std::vector<compiler::Node*>{phi_bb60_12, phi_bb60_13, phi_bb60_14, phi_bb60_15}, &block59, std::vector<compiler::Node*>{phi_bb60_12, phi_bb60_13, phi_bb60_14, phi_bb60_15});
  }

  TNode<Smi> phi_bb58_12;
  TNode<OrderedHashSet> phi_bb58_13;
  TNode<Object> phi_bb58_14;
  TNode<IntPtrT> phi_bb58_15;
  TNode<OrderedHashSet> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<Object> tmp60;
  TNode<IntPtrT> tmp61;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_12, &phi_bb58_13, &phi_bb58_14, &phi_bb58_15);
    std::tie(tmp58, tmp59) = CollectionsBuiltinsAssembler(state_).TransitionOrderedHashSetNoUpdate(TNode<OrderedHashSet>{phi_bb58_13}, TNode<IntPtrT>{phi_bb58_15}).Flatten();
    compiler::CodeAssemblerLabel label62(&ca_);
    std::tie(tmp60, tmp61) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPair(TNode<OrderedHashSet>{tmp58}, TNode<IntPtrT>{tmp59}, &label62).Flatten();
    ca_.Goto(&block62, phi_bb58_12, phi_bb58_14);
    if (label62.is_used()) {
      ca_.Bind(&label62);
      ca_.Goto(&block63, phi_bb58_12, phi_bb58_14);
    }
  }

  TNode<Smi> phi_bb63_12;
  TNode<Object> phi_bb63_14;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_12, &phi_bb63_14);
    ca_.Goto(&block14, phi_bb63_12);
  }

  TNode<Smi> phi_bb62_12;
  TNode<Object> phi_bb62_14;
  TNode<Object> tmp63;
  TNode<BoolT> tmp64;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_12, &phi_bb62_14);
    tmp63 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp6}, TNode<Object>{tmp4}, TNode<Object>{tmp60});
    tmp64 = ToBoolean_0(state_, TNode<Object>{tmp63});
    ca_.Branch(tmp64, &block64, std::vector<compiler::Node*>{phi_bb62_12}, &block65, std::vector<compiler::Node*>{phi_bb62_12});
  }

  TNode<Smi> phi_bb64_12;
  TNode<Smi> tmp65;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_12);
    compiler::CodeAssemblerLabel label66(&ca_);
    tmp65 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp13}, TNode<Object>{tmp60}, &label66);
    ca_.Goto(&block68, phi_bb64_12);
    if (label66.is_used()) {
      ca_.Bind(&label66);
      ca_.Goto(&block69, phi_bb64_12);
    }
  }

  TNode<Smi> phi_bb69_12;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_12);
    ca_.Goto(&block66, phi_bb69_12);
  }

  TNode<Smi> phi_bb68_12;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_12);
    ca_.Goto(&block66, tmp65);
  }

  TNode<Smi> phi_bb66_12;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_12);
    ca_.Goto(&block65, phi_bb66_12);
  }

  TNode<Smi> phi_bb65_12;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_12);
    ca_.Goto(&block60, phi_bb65_12, tmp58, tmp60, tmp61);
  }

  TNode<Smi> phi_bb59_12;
  TNode<OrderedHashSet> phi_bb59_13;
  TNode<Object> phi_bb59_14;
  TNode<IntPtrT> phi_bb59_15;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_12, &phi_bb59_13, &phi_bb59_14, &phi_bb59_15);
    ca_.Goto(&block57, phi_bb59_12);
  }

  TNode<JSReceiver> tmp67;
  TNode<JSReceiver> tmp68;
  TNode<Object> tmp69;
  if (block56.is_used()) {
    ca_.Bind(&block56);
    tmp67 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    std::tie(tmp68, tmp69) = GetKeysIterator_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<JSReceiver>{tmp67}).Flatten();
    ca_.Goto(&block72, tmp16, ca_.Uninitialized<JSReceiver>());
  }

  TNode<Smi> phi_bb72_12;
  TNode<JSReceiver> phi_bb72_15;
  TNode<BoolT> tmp70;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_12, &phi_bb72_15);
    tmp70 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp70, &block70, std::vector<compiler::Node*>{phi_bb72_12, phi_bb72_15}, &block71, std::vector<compiler::Node*>{phi_bb72_12, phi_bb72_15});
  }

  TNode<Smi> phi_bb70_12;
  TNode<JSReceiver> phi_bb70_15;
  TNode<JSReceiver> tmp71;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_12, &phi_bb70_15);
    compiler::CodeAssemblerLabel label72(&ca_);
    tmp71 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp68}, TNode<Object>{tmp69}}, TNode<Map>{tmp0}, &label72);
    ca_.Goto(&block73, phi_bb70_12, phi_bb70_15);
    if (label72.is_used()) {
      ca_.Bind(&label72);
      ca_.Goto(&block74, phi_bb70_12, phi_bb70_15);
    }
  }

  TNode<Smi> phi_bb74_12;
  TNode<JSReceiver> phi_bb74_15;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_12, &phi_bb74_15);
    ca_.Goto(&block14, phi_bb74_12);
  }

  TNode<Smi> phi_bb73_12;
  TNode<JSReceiver> phi_bb73_15;
  TNode<Object> tmp73;
  TNode<Object> tmp74;
  TNode<BoolT> tmp75;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_12, &phi_bb73_15);
    tmp73 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp71}, TNode<Map>{tmp0});
    tmp74 = CollectionsBuiltinsAssembler(state_).NormalizeNumberKey(TNode<Object>{tmp73});
    tmp75 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp13}, TNode<Object>{tmp74});
    ca_.Branch(tmp75, &block75, std::vector<compiler::Node*>{phi_bb73_12}, &block76, std::vector<compiler::Node*>{phi_bb73_12});
  }

  TNode<Smi> phi_bb75_12;
  TNode<Smi> tmp76;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_12);
    compiler::CodeAssemblerLabel label77(&ca_);
    tmp76 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp13}, TNode<Object>{tmp74}, &label77);
    ca_.Goto(&block79, phi_bb75_12);
    if (label77.is_used()) {
      ca_.Bind(&label77);
      ca_.Goto(&block80, phi_bb75_12);
    }
  }

  TNode<Smi> phi_bb80_12;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb79_12;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_12);
    ca_.Goto(&block76, tmp76);
  }

  TNode<Smi> phi_bb76_12;
  if (block76.is_used()) {
    ca_.Bind(&block76, &phi_bb76_12);
    ca_.Goto(&block72, phi_bb76_12, tmp71);
  }

  TNode<Smi> phi_bb71_12;
  TNode<JSReceiver> phi_bb71_15;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_12, &phi_bb71_15);
    ca_.Goto(&block57, phi_bb71_12);
  }

  TNode<Smi> phi_bb57_12;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_12);
    ca_.Goto(&block15, phi_bb57_12);
  }

  TNode<Smi> phi_bb15_12;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb14_12;
  TNode<OrderedHashSet> tmp78;
  TNode<IntPtrT> tmp79;
  TNode<Object> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<Map> tmp82;
  TNode<FixedArray> tmp83;
  TNode<FixedArray> tmp84;
  TNode<BoolT> tmp85;
  TNode<BoolT> tmp86;
  TNode<IntPtrT> tmp87;
  TNode<HeapObject> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<IntPtrT> tmp92;
  TNode<JSSet> tmp93;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_12);
    tmp78 = ShrinkOrderedHashSetIfNeeded_0(state_, TNode<Context>{parameter0}, TNode<Smi>{phi_bb14_12}, TNode<OrderedHashSet>{tmp13});
    tmp79 = JS_SET_MAP_INDEX_0(state_);
    std::tie(tmp80, tmp81) = NativeContextSlot_NativeContext_Map_0(state_, TNode<NativeContext>{parameter0}, TNode<IntPtrT>{tmp79}).Flatten();
    tmp82 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp80, tmp81});
    tmp83 = kEmptyFixedArray_0(state_);
    tmp84 = kEmptyFixedArray_0(state_);
    tmp85 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp86 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp87 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp88 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp87}, TNode<Map>{tmp82}, TNode<BoolT>{tmp85}, TNode<BoolT>{tmp86});
    tmp89 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp88, tmp89}, tmp82);
    tmp90 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp88, tmp90}, tmp83);
    tmp91 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp88, tmp91}, tmp84);
    tmp92 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp88, tmp92}, tmp78);
    tmp93 = TORQUE_CAST(TNode<HeapObject>{tmp88});
    CodeStubAssembler(state_).Return(tmp93);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=15&c=13
TNode<JSSet> Cast_JSSet_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSSet> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSSet_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSSet>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=22&c=17
TNode<OrderedHashSet> Cast_OrderedHashSet_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<OrderedHashSet> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_OrderedHashSet_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<OrderedHashSet>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=36&c=7
TNode<JSSet> Cast_JSSetWithNoCustomIteration_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSSet> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSSetWithNoCustomIteration_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSSet>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=47&c=15
TNode<Smi> FastDifference_OrderedHashSet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashSet> p_tableToLookup, TNode<OrderedHashSet> p_resultSetData) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<OrderedHashSet> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<BoolT> tmp11;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2, tmp3, tmp4) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{p_collectionToIterate}).Flatten();
    std::tie(tmp5, tmp6, tmp7) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_resultSetData}).Flatten();
    tmp8 = FromConstexpr_intptr_constexpr_int32_0(state_, OrderedHashSet::NumberOfElementsIndex());
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp9}, TNode<UintPtrT>{tmp10});
    ca_.Branch(tmp11, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<Smi> tmp17;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp12 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp8});
    tmp13 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp12});
    std::tie(tmp14, tmp15) = NewReference_Object_0(state_, TNode<Object>{tmp5}, TNode<IntPtrT>{tmp13}).Flatten();
    tmp16 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp16});
    ca_.Goto(&block14, tmp3, tmp4, tmp17);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb14_7;
  TNode<IntPtrT> phi_bb14_8;
  TNode<Smi> phi_bb14_9;
  TNode<BoolT> tmp18;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7, &phi_bb14_8, &phi_bb14_9);
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp18, &block12, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9}, &block13, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9});
  }

  TNode<Object> phi_bb12_7;
  TNode<IntPtrT> phi_bb12_8;
  TNode<Smi> phi_bb12_9;
  TNode<Object> tmp19;
  TNode<IntPtrT> tmp20;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_7, &phi_bb12_8, &phi_bb12_9);
    compiler::CodeAssemblerLabel label21(&ca_);
    std::tie(tmp19, tmp20) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp0}, TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2}, TNode<IntPtrT>{phi_bb12_8}, &label21).Flatten();
    ca_.Goto(&block16, phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_8);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block17, phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_8);
    }
  }

  TNode<Object> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_8;
  TNode<Smi> phi_bb17_9;
  TNode<IntPtrT> phi_bb17_13;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_8, &phi_bb17_9, &phi_bb17_13);
    ca_.Goto(&block24, phi_bb17_9);
  }

  TNode<Object> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_8;
  TNode<Smi> phi_bb16_9;
  TNode<IntPtrT> phi_bb16_13;
  TNode<BoolT> tmp22;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_8, &phi_bb16_9, &phi_bb16_13);
    tmp22 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_tableToLookup}, TNode<Object>{tmp19});
    ca_.Branch(tmp22, &block18, std::vector<compiler::Node*>{phi_bb16_9}, &block19, std::vector<compiler::Node*>{phi_bb16_9});
  }

  TNode<Smi> phi_bb18_9;
  TNode<Smi> tmp23;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_9);
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_resultSetData}, TNode<Object>{tmp19}, &label24);
    ca_.Goto(&block22, phi_bb18_9);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block23, phi_bb18_9);
    }
  }

  TNode<Smi> phi_bb23_9;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_9);
    ca_.Goto(&block20, phi_bb23_9);
  }

  TNode<Smi> phi_bb22_9;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_9);
    ca_.Goto(&block20, tmp23);
  }

  TNode<Smi> phi_bb20_9;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_9);
    ca_.Goto(&block19, phi_bb20_9);
  }

  TNode<Smi> phi_bb19_9;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_9);
    ca_.Goto(&block14, tmp19, tmp20, phi_bb19_9);
  }

  TNode<Object> phi_bb13_7;
  TNode<IntPtrT> phi_bb13_8;
  TNode<Smi> phi_bb13_9;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8, &phi_bb13_9);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb24_4;
    ca_.Bind(&block24, &phi_bb24_4);
  return TNode<Smi>{phi_bb24_4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=54&c=7
TNode<JSMap> Cast_JSMapWithNoCustomIteration_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSMap> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSMapWithNoCustomIteration_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSMap>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=58&c=13
TNode<OrderedHashMap> Cast_OrderedHashMap_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<OrderedHashMap> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_OrderedHashMap_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<OrderedHashMap>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=65&c=15
TNode<Smi> FastDifference_OrderedHashMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashMap> p_tableToLookup, TNode<OrderedHashSet> p_resultSetData) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<OrderedHashSet> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<BoolT> tmp11;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2, tmp3, tmp4) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{p_collectionToIterate}).Flatten();
    std::tie(tmp5, tmp6, tmp7) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_resultSetData}).Flatten();
    tmp8 = FromConstexpr_intptr_constexpr_int32_0(state_, OrderedHashSet::NumberOfElementsIndex());
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp9}, TNode<UintPtrT>{tmp10});
    ca_.Branch(tmp11, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<Smi> tmp17;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp12 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp8});
    tmp13 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp12});
    std::tie(tmp14, tmp15) = NewReference_Object_0(state_, TNode<Object>{tmp5}, TNode<IntPtrT>{tmp13}).Flatten();
    tmp16 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp16});
    ca_.Goto(&block14, tmp3, tmp4, tmp17);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb14_7;
  TNode<IntPtrT> phi_bb14_8;
  TNode<Smi> phi_bb14_9;
  TNode<BoolT> tmp18;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7, &phi_bb14_8, &phi_bb14_9);
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp18, &block12, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9}, &block13, std::vector<compiler::Node*>{phi_bb14_7, phi_bb14_8, phi_bb14_9});
  }

  TNode<Object> phi_bb12_7;
  TNode<IntPtrT> phi_bb12_8;
  TNode<Smi> phi_bb12_9;
  TNode<Object> tmp19;
  TNode<IntPtrT> tmp20;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_7, &phi_bb12_8, &phi_bb12_9);
    compiler::CodeAssemblerLabel label21(&ca_);
    std::tie(tmp19, tmp20) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp0}, TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2}, TNode<IntPtrT>{phi_bb12_8}, &label21).Flatten();
    ca_.Goto(&block16, phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_8);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block17, phi_bb12_7, phi_bb12_8, phi_bb12_9, phi_bb12_8);
    }
  }

  TNode<Object> phi_bb17_7;
  TNode<IntPtrT> phi_bb17_8;
  TNode<Smi> phi_bb17_9;
  TNode<IntPtrT> phi_bb17_13;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_8, &phi_bb17_9, &phi_bb17_13);
    ca_.Goto(&block24, phi_bb17_9);
  }

  TNode<Object> phi_bb16_7;
  TNode<IntPtrT> phi_bb16_8;
  TNode<Smi> phi_bb16_9;
  TNode<IntPtrT> phi_bb16_13;
  TNode<BoolT> tmp22;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7, &phi_bb16_8, &phi_bb16_9, &phi_bb16_13);
    tmp22 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{p_context}, TNode<OrderedHashMap>{p_tableToLookup}, TNode<Object>{tmp19});
    ca_.Branch(tmp22, &block18, std::vector<compiler::Node*>{phi_bb16_9}, &block19, std::vector<compiler::Node*>{phi_bb16_9});
  }

  TNode<Smi> phi_bb18_9;
  TNode<Smi> tmp23;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_9);
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_resultSetData}, TNode<Object>{tmp19}, &label24);
    ca_.Goto(&block22, phi_bb18_9);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block23, phi_bb18_9);
    }
  }

  TNode<Smi> phi_bb23_9;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_9);
    ca_.Goto(&block20, phi_bb23_9);
  }

  TNode<Smi> phi_bb22_9;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_9);
    ca_.Goto(&block20, tmp23);
  }

  TNode<Smi> phi_bb20_9;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_9);
    ca_.Goto(&block19, phi_bb20_9);
  }

  TNode<Smi> phi_bb19_9;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_9);
    ca_.Goto(&block14, tmp19, tmp20, phi_bb19_9);
  }

  TNode<Object> phi_bb13_7;
  TNode<IntPtrT> phi_bb13_8;
  TNode<Smi> phi_bb13_9;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8, &phi_bb13_9);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb24_4;
    ca_.Bind(&block24, &phi_bb24_4);
  return TNode<Smi>{phi_bb24_4};
}

} // namespace internal
} // namespace v8
