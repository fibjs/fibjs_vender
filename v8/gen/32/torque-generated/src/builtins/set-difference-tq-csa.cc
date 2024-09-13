#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-call-gen.h"
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
#include "src/objects/js-disposable-stack.h"
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
#include "src/objects/js-segment-iterator-inl.h"
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
#include "src/wasm/value-type.h"
#include "src/wasm/wasm-linkage.h"
#include "src/codegen/code-stub-assembler-inl.h"
// Required Builtins:
#include "torque-generated/src/builtins/set-difference-tq-csa.h"
#include "torque-generated/src/builtins/array-flat-tq-csa.h"
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
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
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, OrderedHashSet, Object, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, OrderedHashSet, Object, IntPtrT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, OrderedHashSet, Object, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSReceiver> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
  TNode<JSSet> tmp8;
  TNode<OrderedHashSet> tmp9;
  TNode<FixedArrayBase> tmp10;
  TNode<OrderedHashSet> tmp11;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    std::tie(tmp4, tmp5, tmp6, tmp7) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.difference").Flatten();
    std::tie(tmp8, tmp9) = NewStableBackingTableWitness_0(state_, TNode<JSSet>{tmp1}).Flatten();
    tmp10 = CodeStubAssembler(state_).CloneFixedArray(TNode<FixedArrayBase>{tmp9}, CodeStubAssembler::ExtractFixedArrayFlag::kFixedArrays);
    compiler::CodeAssemblerLabel label12(&ca_);
    tmp11 = Cast_OrderedHashSet_0(state_, TNode<HeapObject>{tmp10}, &label12);
    ca_.Goto(&block8);
    if (label12.is_used()) {
      ca_.Bind(&label12);
      ca_.Goto(&block9);
    }
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp13;
  TNode<Smi> tmp14;
  TNode<JSSet> tmp15;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp13 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp9}, OrderedHashSet::NumberOfElementsIndex());
    tmp14 = Convert_Smi_int32_0(state_, TNode<Int32T>{tmp13});
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp15 = Cast_JSSetWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label16);
    ca_.Goto(&block17);
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block18);
    }
  }

  TNode<JSMap> tmp17;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    compiler::CodeAssemblerLabel label18(&ca_);
    tmp17 = Cast_JSMapWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter2)}, &label18);
    ca_.Goto(&block28);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block29);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    compiler::CodeAssemblerLabel label19(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label19);
    ca_.Goto(&block19);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block14);
  }

  TNode<JSSet> tmp20;
  TNode<OrderedHashSet> tmp21;
  TNode<Int32T> tmp22;
  TNode<BoolT> tmp23;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    std::tie(tmp20, tmp21) = NewStableBackingTableWitness_0(state_, TNode<JSSet>{tmp15}).Flatten();
    tmp22 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp21}, OrderedHashSet::NumberOfElementsIndex());
    tmp23 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp13}, TNode<Int32T>{tmp22});
    ca_.Branch(tmp23, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp24;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp24 = FastDifference_OrderedHashSet_0(state_, TNode<Context>{parameter0}, TorqueStructStableJSSetBackingTableWitness_0{TNode<JSSet>{tmp8}, TNode<OrderedHashSet>{tmp9}}, TNode<OrderedHashSet>{tmp21}, TNode<OrderedHashSet>{tmp11});
    ca_.Goto(&block24, tmp24);
  }

  TNode<Smi> tmp25;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp25 = FastDifference_OrderedHashSet_0(state_, TNode<Context>{parameter0}, TorqueStructStableJSSetBackingTableWitness_0{TNode<JSSet>{tmp20}, TNode<OrderedHashSet>{tmp21}}, TNode<OrderedHashSet>{tmp11}, TNode<OrderedHashSet>{tmp11});
    ca_.Goto(&block24, tmp25);
  }

  TNode<Smi> phi_bb24_13;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_13);
    ca_.Goto(&block12, phi_bb24_13);
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.Goto(&block14);
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    compiler::CodeAssemblerLabel label26(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label26);
    ca_.Goto(&block30);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block31);
    }
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    ca_.Goto(&block14);
  }

  TNode<JSMap> tmp27;
  TNode<OrderedHashMap> tmp28;
  TNode<Int32T> tmp29;
  TNode<BoolT> tmp30;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    std::tie(tmp27, tmp28) = NewStableBackingTableWitness_1(state_, TNode<JSMap>{tmp17}).Flatten();
    tmp29 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp28}, OrderedHashMap::NumberOfElementsIndex());
    tmp30 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp13}, TNode<Int32T>{tmp29});
    ca_.Branch(tmp30, &block33, std::vector<compiler::Node*>{}, &block34, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp31;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp31 = FastDifference_OrderedHashMap_0(state_, TNode<Context>{parameter0}, TorqueStructStableJSSetBackingTableWitness_0{TNode<JSSet>{tmp8}, TNode<OrderedHashSet>{tmp9}}, TNode<OrderedHashMap>{tmp28}, TNode<OrderedHashSet>{tmp11});
    ca_.Goto(&block12, tmp31);
  }

  TNode<OrderedHashMap> tmp32;
  TNode<Int32T> tmp33;
  TNode<Int32T> tmp34;
  TNode<Object> tmp35;
  TNode<Object> tmp36;
  TNode<IntPtrT> tmp37;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    std::tie(tmp32, tmp33, tmp34, tmp35, tmp36, tmp37) = NewUnmodifiedOrderedHashMapIterator_0(state_, TNode<OrderedHashMap>{tmp28}).Flatten();
    ca_.Goto(&block40, tmp14, tmp35, tmp36, tmp37);
  }

  TNode<Smi> phi_bb40_13;
  TNode<Object> phi_bb40_22;
  TNode<Object> phi_bb40_23;
  TNode<IntPtrT> phi_bb40_24;
  TNode<BoolT> tmp38;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_13, &phi_bb40_22, &phi_bb40_23, &phi_bb40_24);
    tmp38 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp38, &block38, std::vector<compiler::Node*>{phi_bb40_13, phi_bb40_22, phi_bb40_23, phi_bb40_24}, &block39, std::vector<compiler::Node*>{phi_bb40_13, phi_bb40_22, phi_bb40_23, phi_bb40_24});
  }

  TNode<Smi> phi_bb38_13;
  TNode<Object> phi_bb38_22;
  TNode<Object> phi_bb38_23;
  TNode<IntPtrT> phi_bb38_24;
  TNode<Object> tmp39;
  TNode<Object> tmp40;
  TNode<IntPtrT> tmp41;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_13, &phi_bb38_22, &phi_bb38_23, &phi_bb38_24);
    compiler::CodeAssemblerLabel label42(&ca_);
    std::tie(tmp39, tmp40, tmp41) = CollectionsBuiltinsAssembler(state_).NextKeyValueIndexTupleUnmodifiedTable(TNode<OrderedHashMap>{tmp32}, TNode<Int32T>{tmp33}, TNode<Int32T>{tmp34}, TNode<IntPtrT>{phi_bb38_24}, &label42).Flatten();
    ca_.Goto(&block42, phi_bb38_13, phi_bb38_22, phi_bb38_23, phi_bb38_24, phi_bb38_24);
    if (label42.is_used()) {
      ca_.Bind(&label42);
      ca_.Goto(&block43, phi_bb38_13, phi_bb38_22, phi_bb38_23, phi_bb38_24, phi_bb38_24);
    }
  }

  TNode<Smi> phi_bb43_13;
  TNode<Object> phi_bb43_22;
  TNode<Object> phi_bb43_23;
  TNode<IntPtrT> phi_bb43_24;
  TNode<IntPtrT> phi_bb43_28;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_13, &phi_bb43_22, &phi_bb43_23, &phi_bb43_24, &phi_bb43_28);
    ca_.Goto(&block12, phi_bb43_13);
  }

  TNode<Smi> phi_bb42_13;
  TNode<Object> phi_bb42_22;
  TNode<Object> phi_bb42_23;
  TNode<IntPtrT> phi_bb42_24;
  TNode<IntPtrT> phi_bb42_28;
  TNode<BoolT> tmp43;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_13, &phi_bb42_22, &phi_bb42_23, &phi_bb42_24, &phi_bb42_28);
    tmp43 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp11}, TNode<Object>{tmp39});
    ca_.Branch(tmp43, &block44, std::vector<compiler::Node*>{phi_bb42_13}, &block45, std::vector<compiler::Node*>{phi_bb42_13});
  }

  TNode<Smi> phi_bb44_13;
  TNode<Smi> tmp44;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_13);
    compiler::CodeAssemblerLabel label45(&ca_);
    tmp44 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp11}, TNode<Object>{tmp39}, &label45);
    ca_.Goto(&block48, phi_bb44_13);
    if (label45.is_used()) {
      ca_.Bind(&label45);
      ca_.Goto(&block49, phi_bb44_13);
    }
  }

  TNode<Smi> phi_bb49_13;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb48_13;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_13);
    ca_.Goto(&block45, tmp44);
  }

  TNode<Smi> phi_bb45_13;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_13);
    ca_.Goto(&block40, phi_bb45_13, tmp39, tmp40, tmp41);
  }

  TNode<Smi> phi_bb39_13;
  TNode<Object> phi_bb39_22;
  TNode<Object> phi_bb39_23;
  TNode<IntPtrT> phi_bb39_24;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_13, &phi_bb39_22, &phi_bb39_23, &phi_bb39_24);
    ca_.Goto(&block13, phi_bb39_13);
  }

  TNode<Number> tmp46;
  TNode<BoolT> tmp47;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp46 = FromConstexpr_Number_constexpr_float64_0(state_, V8_INFINITY);
    tmp47 = IsNumberEqual_0(state_, TNode<Number>{tmp5}, TNode<Number>{tmp46});
    ca_.Branch(tmp47, &block52, std::vector<compiler::Node*>{}, &block53, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp48;
  if (block52.is_used()) {
    ca_.Bind(&block52);
    tmp48 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block54, tmp48);
  }

  TNode<Int32T> tmp49;
  TNode<BoolT> tmp50;
  if (block53.is_used()) {
    ca_.Bind(&block53);
    tmp49 = Convert_int32_Number_0(state_, TNode<Number>{tmp5});
    tmp50 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp13}, TNode<Int32T>{tmp49});
    ca_.Goto(&block54, tmp50);
  }

  TNode<BoolT> phi_bb54_15;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_15);
    ca_.Branch(phi_bb54_15, &block50, std::vector<compiler::Node*>{}, &block51, std::vector<compiler::Node*>{});
  }

  TNode<OrderedHashSet> tmp51;
  TNode<Object> tmp52;
  TNode<IntPtrT> tmp53;
  if (block50.is_used()) {
    ca_.Bind(&block50);
    std::tie(tmp51, tmp52, tmp53) = NewOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp9}).Flatten();
    ca_.Goto(&block59, tmp14, tmp51, tmp52, tmp53);
  }

  TNode<Smi> phi_bb59_13;
  TNode<OrderedHashSet> phi_bb59_14;
  TNode<Object> phi_bb59_15;
  TNode<IntPtrT> phi_bb59_16;
  TNode<BoolT> tmp54;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_13, &phi_bb59_14, &phi_bb59_15, &phi_bb59_16);
    tmp54 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp54, &block57, std::vector<compiler::Node*>{phi_bb59_13, phi_bb59_14, phi_bb59_15, phi_bb59_16}, &block58, std::vector<compiler::Node*>{phi_bb59_13, phi_bb59_14, phi_bb59_15, phi_bb59_16});
  }

  TNode<Smi> phi_bb57_13;
  TNode<OrderedHashSet> phi_bb57_14;
  TNode<Object> phi_bb57_15;
  TNode<IntPtrT> phi_bb57_16;
  TNode<OrderedHashSet> tmp55;
  TNode<IntPtrT> tmp56;
  TNode<Object> tmp57;
  TNode<IntPtrT> tmp58;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_13, &phi_bb57_14, &phi_bb57_15, &phi_bb57_16);
    std::tie(tmp55, tmp56) = CollectionsBuiltinsAssembler(state_).TransitionOrderedHashSetNoUpdate(TNode<OrderedHashSet>{phi_bb57_14}, TNode<IntPtrT>{phi_bb57_16}).Flatten();
    compiler::CodeAssemblerLabel label59(&ca_);
    std::tie(tmp57, tmp58) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPair(TNode<OrderedHashSet>{tmp55}, TNode<IntPtrT>{tmp56}, &label59).Flatten();
    ca_.Goto(&block61, phi_bb57_13, phi_bb57_15);
    if (label59.is_used()) {
      ca_.Bind(&label59);
      ca_.Goto(&block62, phi_bb57_13, phi_bb57_15);
    }
  }

  TNode<Smi> phi_bb62_13;
  TNode<Object> phi_bb62_15;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_13, &phi_bb62_15);
    ca_.Goto(&block12, phi_bb62_13);
  }

  TNode<Smi> phi_bb61_13;
  TNode<Object> phi_bb61_15;
  TNode<Object> tmp60;
  TNode<BoolT> tmp61;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_13, &phi_bb61_15);
    tmp60 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp6}, TNode<Object>{tmp4}, TNode<Object>{tmp57});
    tmp61 = ToBoolean_0(state_, TNode<Object>{tmp60});
    ca_.Branch(tmp61, &block63, std::vector<compiler::Node*>{phi_bb61_13}, &block64, std::vector<compiler::Node*>{phi_bb61_13});
  }

  TNode<Smi> phi_bb63_13;
  TNode<Smi> tmp62;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_13);
    compiler::CodeAssemblerLabel label63(&ca_);
    tmp62 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp11}, TNode<Object>{tmp57}, &label63);
    ca_.Goto(&block67, phi_bb63_13);
    if (label63.is_used()) {
      ca_.Bind(&label63);
      ca_.Goto(&block68, phi_bb63_13);
    }
  }

  TNode<Smi> phi_bb68_13;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_13);
    ca_.Goto(&block65, phi_bb68_13);
  }

  TNode<Smi> phi_bb67_13;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_13);
    ca_.Goto(&block65, tmp62);
  }

  TNode<Smi> phi_bb65_13;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_13);
    ca_.Goto(&block64, phi_bb65_13);
  }

  TNode<Smi> phi_bb64_13;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_13);
    ca_.Goto(&block59, phi_bb64_13, tmp55, tmp57, tmp58);
  }

  TNode<Smi> phi_bb58_13;
  TNode<OrderedHashSet> phi_bb58_14;
  TNode<Object> phi_bb58_15;
  TNode<IntPtrT> phi_bb58_16;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_13, &phi_bb58_14, &phi_bb58_15, &phi_bb58_16);
    ca_.Goto(&block55, phi_bb58_13);
  }

  TNode<JSReceiver> tmp64;
  TNode<JSReceiver> tmp65;
  TNode<Object> tmp66;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp64 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    std::tie(tmp65, tmp66) = GetKeysIterator_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<JSReceiver>{tmp64}).Flatten();
    ca_.Goto(&block71, tmp14, ca_.Uninitialized<JSReceiver>());
  }

  TNode<Smi> phi_bb71_13;
  TNode<JSReceiver> phi_bb71_16;
  TNode<BoolT> tmp67;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_13, &phi_bb71_16);
    tmp67 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp67, &block69, std::vector<compiler::Node*>{phi_bb71_13, phi_bb71_16}, &block70, std::vector<compiler::Node*>{phi_bb71_13, phi_bb71_16});
  }

  TNode<Smi> phi_bb69_13;
  TNode<JSReceiver> phi_bb69_16;
  TNode<JSReceiver> tmp68;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_13, &phi_bb69_16);
    compiler::CodeAssemblerLabel label69(&ca_);
    tmp68 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp65}, TNode<Object>{tmp66}}, TNode<Map>{tmp0}, &label69);
    ca_.Goto(&block72, phi_bb69_13, phi_bb69_16);
    if (label69.is_used()) {
      ca_.Bind(&label69);
      ca_.Goto(&block73, phi_bb69_13, phi_bb69_16);
    }
  }

  TNode<Smi> phi_bb73_13;
  TNode<JSReceiver> phi_bb73_16;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_13, &phi_bb73_16);
    ca_.Goto(&block12, phi_bb73_13);
  }

  TNode<Smi> phi_bb72_13;
  TNode<JSReceiver> phi_bb72_16;
  TNode<Object> tmp70;
  TNode<Object> tmp71;
  TNode<BoolT> tmp72;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_13, &phi_bb72_16);
    tmp70 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp68}, TNode<Map>{tmp0});
    tmp71 = CollectionsBuiltinsAssembler(state_).NormalizeNumberKey(TNode<Object>{tmp70});
    tmp72 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp11}, TNode<Object>{tmp71});
    ca_.Branch(tmp72, &block74, std::vector<compiler::Node*>{phi_bb72_13}, &block75, std::vector<compiler::Node*>{phi_bb72_13});
  }

  TNode<Smi> phi_bb74_13;
  TNode<Smi> tmp73;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_13);
    compiler::CodeAssemblerLabel label74(&ca_);
    tmp73 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp11}, TNode<Object>{tmp71}, &label74);
    ca_.Goto(&block78, phi_bb74_13);
    if (label74.is_used()) {
      ca_.Bind(&label74);
      ca_.Goto(&block79, phi_bb74_13);
    }
  }

  TNode<Smi> phi_bb79_13;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb78_13;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_13);
    ca_.Goto(&block75, tmp73);
  }

  TNode<Smi> phi_bb75_13;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_13);
    ca_.Goto(&block71, phi_bb75_13, tmp68);
  }

  TNode<Smi> phi_bb70_13;
  TNode<JSReceiver> phi_bb70_16;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_13, &phi_bb70_16);
    ca_.Goto(&block55, phi_bb70_13);
  }

  TNode<Smi> phi_bb55_13;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_13);
    ca_.Goto(&block13, phi_bb55_13);
  }

  TNode<Smi> phi_bb13_13;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb12_13;
  TNode<OrderedHashSet> tmp75;
  TNode<IntPtrT> tmp76;
  TNode<Object> tmp77;
  TNode<IntPtrT> tmp78;
  TNode<Map> tmp79;
  TNode<FixedArray> tmp80;
  TNode<FixedArray> tmp81;
  TNode<BoolT> tmp82;
  TNode<BoolT> tmp83;
  TNode<IntPtrT> tmp84;
  TNode<HeapObject> tmp85;
  TNode<IntPtrT> tmp86;
  TNode<IntPtrT> tmp87;
  TNode<IntPtrT> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<JSSet> tmp90;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_13);
    tmp75 = ShrinkOrderedHashSetIfNeeded_0(state_, TNode<Context>{parameter0}, TNode<Smi>{phi_bb12_13}, TNode<OrderedHashSet>{tmp11});
    tmp76 = JS_SET_MAP_INDEX_0(state_);
    std::tie(tmp77, tmp78) = NativeContextSlot_NativeContext_Map_0(state_, TNode<NativeContext>{parameter0}, TNode<IntPtrT>{tmp76}).Flatten();
    tmp79 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp77, tmp78});
    tmp80 = kEmptyFixedArray_0(state_);
    tmp81 = kEmptyFixedArray_0(state_);
    tmp82 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp83 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp84 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp85 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp84}, TNode<Map>{tmp79}, TNode<BoolT>{tmp82}, TNode<BoolT>{tmp83});
    tmp86 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp85, tmp86}, tmp79);
    tmp87 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp85, tmp87}, tmp80);
    tmp88 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp85, tmp88}, tmp81);
    tmp89 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp85, tmp89}, tmp75);
    tmp90 = TORQUE_CAST(TNode<HeapObject>{tmp85});
    CodeStubAssembler(state_).Return(tmp90);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=44&c=30
TNode<Smi> FastDifference_OrderedHashSet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructStableJSSetBackingTableWitness_0 p_collectionToIterate, TNode<OrderedHashSet> p_tableToLookup, TNode<OrderedHashSet> p_resultSetData) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    std::tie(tmp0, tmp1, tmp2, tmp3, tmp4) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{p_collectionToIterate.unstable}).Flatten();
    std::tie(tmp5, tmp6, tmp7) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_resultSetData}).Flatten();
    tmp8 = FromConstexpr_intptr_constexpr_int32_0(state_, OrderedHashSet::NumberOfElementsIndex());
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp9}, TNode<UintPtrT>{tmp10});
    ca_.Branch(tmp11, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<Smi> tmp17;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp8});
    tmp13 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp12});
    std::tie(tmp14, tmp15) = NewReference_Object_0(state_, TNode<Object>{tmp5}, TNode<IntPtrT>{tmp13}).Flatten();
    tmp16 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp16});
    ca_.Goto(&block15, tmp3, tmp4, tmp17);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb15_8;
  TNode<IntPtrT> phi_bb15_9;
  TNode<Smi> phi_bb15_10;
  TNode<BoolT> tmp18;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_8, &phi_bb15_9, &phi_bb15_10);
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp18, &block13, std::vector<compiler::Node*>{phi_bb15_8, phi_bb15_9, phi_bb15_10}, &block14, std::vector<compiler::Node*>{phi_bb15_8, phi_bb15_9, phi_bb15_10});
  }

  TNode<Object> phi_bb13_8;
  TNode<IntPtrT> phi_bb13_9;
  TNode<Smi> phi_bb13_10;
  TNode<Object> tmp19;
  TNode<IntPtrT> tmp20;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_8, &phi_bb13_9, &phi_bb13_10);
    compiler::CodeAssemblerLabel label21(&ca_);
    std::tie(tmp19, tmp20) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp0}, TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2}, TNode<IntPtrT>{phi_bb13_9}, &label21).Flatten();
    ca_.Goto(&block17, phi_bb13_8, phi_bb13_9, phi_bb13_10, phi_bb13_9);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block18, phi_bb13_8, phi_bb13_9, phi_bb13_10, phi_bb13_9);
    }
  }

  TNode<Object> phi_bb18_8;
  TNode<IntPtrT> phi_bb18_9;
  TNode<Smi> phi_bb18_10;
  TNode<IntPtrT> phi_bb18_14;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_8, &phi_bb18_9, &phi_bb18_10, &phi_bb18_14);
    ca_.Goto(&block25, phi_bb18_10);
  }

  TNode<Object> phi_bb17_8;
  TNode<IntPtrT> phi_bb17_9;
  TNode<Smi> phi_bb17_10;
  TNode<IntPtrT> phi_bb17_14;
  TNode<BoolT> tmp22;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_8, &phi_bb17_9, &phi_bb17_10, &phi_bb17_14);
    tmp22 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_tableToLookup}, TNode<Object>{tmp19});
    ca_.Branch(tmp22, &block19, std::vector<compiler::Node*>{phi_bb17_10}, &block20, std::vector<compiler::Node*>{phi_bb17_10});
  }

  TNode<Smi> phi_bb19_10;
  TNode<Smi> tmp23;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_10);
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_resultSetData}, TNode<Object>{tmp19}, &label24);
    ca_.Goto(&block23, phi_bb19_10);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block24, phi_bb19_10);
    }
  }

  TNode<Smi> phi_bb24_10;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_10);
    ca_.Goto(&block21, phi_bb24_10);
  }

  TNode<Smi> phi_bb23_10;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_10);
    ca_.Goto(&block21, tmp23);
  }

  TNode<Smi> phi_bb21_10;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_10);
    ca_.Goto(&block20, phi_bb21_10);
  }

  TNode<Smi> phi_bb20_10;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_10);
    ca_.Goto(&block15, tmp19, tmp20, phi_bb20_10);
  }

  TNode<Object> phi_bb14_8;
  TNode<IntPtrT> phi_bb14_9;
  TNode<Smi> phi_bb14_10;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_8, &phi_bb14_9, &phi_bb14_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb25_5;
    ca_.Bind(&block25, &phi_bb25_5);
  return TNode<Smi>{phi_bb25_5};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=52&c=7
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=60&c=30
TNode<Smi> FastDifference_OrderedHashMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructStableJSSetBackingTableWitness_0 p_collectionToIterate, TNode<OrderedHashMap> p_tableToLookup, TNode<OrderedHashSet> p_resultSetData) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    std::tie(tmp0, tmp1, tmp2, tmp3, tmp4) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{p_collectionToIterate.unstable}).Flatten();
    std::tie(tmp5, tmp6, tmp7) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_resultSetData}).Flatten();
    tmp8 = FromConstexpr_intptr_constexpr_int32_0(state_, OrderedHashSet::NumberOfElementsIndex());
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp9}, TNode<UintPtrT>{tmp10});
    ca_.Branch(tmp11, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<Smi> tmp17;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp8});
    tmp13 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp12});
    std::tie(tmp14, tmp15) = NewReference_Object_0(state_, TNode<Object>{tmp5}, TNode<IntPtrT>{tmp13}).Flatten();
    tmp16 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp16});
    ca_.Goto(&block15, tmp3, tmp4, tmp17);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb15_8;
  TNode<IntPtrT> phi_bb15_9;
  TNode<Smi> phi_bb15_10;
  TNode<BoolT> tmp18;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_8, &phi_bb15_9, &phi_bb15_10);
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp18, &block13, std::vector<compiler::Node*>{phi_bb15_8, phi_bb15_9, phi_bb15_10}, &block14, std::vector<compiler::Node*>{phi_bb15_8, phi_bb15_9, phi_bb15_10});
  }

  TNode<Object> phi_bb13_8;
  TNode<IntPtrT> phi_bb13_9;
  TNode<Smi> phi_bb13_10;
  TNode<Object> tmp19;
  TNode<IntPtrT> tmp20;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_8, &phi_bb13_9, &phi_bb13_10);
    compiler::CodeAssemblerLabel label21(&ca_);
    std::tie(tmp19, tmp20) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp0}, TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2}, TNode<IntPtrT>{phi_bb13_9}, &label21).Flatten();
    ca_.Goto(&block17, phi_bb13_8, phi_bb13_9, phi_bb13_10, phi_bb13_9);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block18, phi_bb13_8, phi_bb13_9, phi_bb13_10, phi_bb13_9);
    }
  }

  TNode<Object> phi_bb18_8;
  TNode<IntPtrT> phi_bb18_9;
  TNode<Smi> phi_bb18_10;
  TNode<IntPtrT> phi_bb18_14;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_8, &phi_bb18_9, &phi_bb18_10, &phi_bb18_14);
    ca_.Goto(&block25, phi_bb18_10);
  }

  TNode<Object> phi_bb17_8;
  TNode<IntPtrT> phi_bb17_9;
  TNode<Smi> phi_bb17_10;
  TNode<IntPtrT> phi_bb17_14;
  TNode<BoolT> tmp22;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_8, &phi_bb17_9, &phi_bb17_10, &phi_bb17_14);
    tmp22 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{p_context}, TNode<OrderedHashMap>{p_tableToLookup}, TNode<Object>{tmp19});
    ca_.Branch(tmp22, &block19, std::vector<compiler::Node*>{phi_bb17_10}, &block20, std::vector<compiler::Node*>{phi_bb17_10});
  }

  TNode<Smi> phi_bb19_10;
  TNode<Smi> tmp23;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_10);
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = CollectionsBuiltinsAssembler(state_).DeleteFromSetTable(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_resultSetData}, TNode<Object>{tmp19}, &label24);
    ca_.Goto(&block23, phi_bb19_10);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block24, phi_bb19_10);
    }
  }

  TNode<Smi> phi_bb24_10;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_10);
    ca_.Goto(&block21, phi_bb24_10);
  }

  TNode<Smi> phi_bb23_10;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_10);
    ca_.Goto(&block21, tmp23);
  }

  TNode<Smi> phi_bb21_10;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_10);
    ca_.Goto(&block20, phi_bb21_10);
  }

  TNode<Smi> phi_bb20_10;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_10);
    ca_.Goto(&block15, tmp19, tmp20, phi_bb20_10);
  }

  TNode<Object> phi_bb14_8;
  TNode<IntPtrT> phi_bb14_9;
  TNode<Smi> phi_bb14_10;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_8, &phi_bb14_9, &phi_bb14_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb25_5;
    ca_.Bind(&block25, &phi_bb25_5);
  return TNode<Smi>{phi_bb25_5};
}

} // namespace internal
} // namespace v8
