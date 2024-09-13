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
#include "torque-generated/src/builtins/set-is-superset-of-tq-csa.h"
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/set-difference-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(SetPrototypeIsSupersetOf, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    tmp3 = FromConstexpr_Object_constexpr_string_0(state_, "Set.prototype.isSupersetOf");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp3}, TNode<Object>{parameter1});
  }

  TNode<JSReceiver> tmp4;
  TNode<Number> tmp5;
  TNode<Object> tmp6;
  TNode<Object> tmp7;
  TNode<JSSet> tmp8;
  TNode<OrderedHashSet> tmp9;
  TNode<Int32T> tmp10;
  TNode<Number> tmp11;
  TNode<BoolT> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    std::tie(tmp4, tmp5, tmp6, tmp7) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.isSupersetOf").Flatten();
    std::tie(tmp8, tmp9) = NewStableBackingTableWitness_0(state_, TNode<JSSet>{tmp1}).Flatten();
    tmp10 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp9}, OrderedHashSet::NumberOfElementsIndex());
    tmp11 = FromConstexpr_Number_constexpr_float64_0(state_, V8_INFINITY);
    tmp12 = IsNumberEqual_0(state_, TNode<Number>{tmp5}, TNode<Number>{tmp11});
    ca_.Branch(tmp12, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp13;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp13 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block10, tmp13);
  }

  TNode<Int32T> tmp14;
  TNode<BoolT> tmp15;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp14 = Convert_int32_Number_0(state_, TNode<Number>{tmp5});
    tmp15 = CodeStubAssembler(state_).Int32LessThan(TNode<Int32T>{tmp10}, TNode<Int32T>{tmp14});
    ca_.Goto(&block10, tmp15);
  }

  TNode<BoolT> phi_bb10_13;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_13);
    ca_.Branch(phi_bb10_13, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp16;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp16 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp16);
  }

  TNode<JSSet> tmp17;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label18(&ca_);
    tmp17 = Cast_JSSetWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label18);
    ca_.Goto(&block17);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block18);
    }
  }

  TNode<JSMap> tmp19;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    compiler::CodeAssemblerLabel label20(&ca_);
    tmp19 = Cast_JSMapWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter2)}, &label20);
    ca_.Goto(&block33);
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block34);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    compiler::CodeAssemblerLabel label21(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label21);
    ca_.Goto(&block19);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block14);
  }

  TNode<JSSet> tmp22;
  TNode<OrderedHashSet> tmp23;
  TNode<OrderedHashSet> tmp24;
  TNode<Int32T> tmp25;
  TNode<Int32T> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    std::tie(tmp22, tmp23) = NewStableBackingTableWitness_0(state_, TNode<JSSet>{tmp17}).Flatten();
    std::tie(tmp24, tmp25, tmp26, tmp27, tmp28) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp23}).Flatten();
    ca_.Goto(&block24, tmp27, tmp28);
  }

  TNode<Object> phi_bb24_19;
  TNode<IntPtrT> phi_bb24_20;
  TNode<BoolT> tmp29;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_19, &phi_bb24_20);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp29, &block22, std::vector<compiler::Node*>{phi_bb24_19, phi_bb24_20}, &block23, std::vector<compiler::Node*>{phi_bb24_19, phi_bb24_20});
  }

  TNode<Object> phi_bb22_19;
  TNode<IntPtrT> phi_bb22_20;
  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_19, &phi_bb22_20);
    compiler::CodeAssemblerLabel label32(&ca_);
    std::tie(tmp30, tmp31) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp24}, TNode<Int32T>{tmp25}, TNode<Int32T>{tmp26}, TNode<IntPtrT>{phi_bb22_20}, &label32).Flatten();
    ca_.Goto(&block26, phi_bb22_19, phi_bb22_20, phi_bb22_20);
    if (label32.is_used()) {
      ca_.Bind(&label32);
      ca_.Goto(&block27, phi_bb22_19, phi_bb22_20, phi_bb22_20);
    }
  }

  TNode<Object> phi_bb27_19;
  TNode<IntPtrT> phi_bb27_20;
  TNode<IntPtrT> phi_bb27_24;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_19, &phi_bb27_20, &phi_bb27_24);
    ca_.Goto(&block12, tmp9);
  }

  TNode<Object> phi_bb26_19;
  TNode<IntPtrT> phi_bb26_20;
  TNode<IntPtrT> phi_bb26_24;
  TNode<BoolT> tmp33;
  TNode<BoolT> tmp34;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_19, &phi_bb26_20, &phi_bb26_24);
    tmp33 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp9}, TNode<Object>{tmp30});
    tmp34 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp33});
    ca_.Branch(tmp34, &block28, std::vector<compiler::Node*>{}, &block29, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp35;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp35 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp35);
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.Goto(&block24, tmp30, tmp31);
  }

  TNode<Object> phi_bb23_19;
  TNode<IntPtrT> phi_bb23_20;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_19, &phi_bb23_20);
    ca_.Goto(&block15);
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block14);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    compiler::CodeAssemblerLabel label36(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label36);
    ca_.Goto(&block35);
    if (label36.is_used()) {
      ca_.Bind(&label36);
      ca_.Goto(&block36);
    }
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.Goto(&block14);
  }

  TNode<JSMap> tmp37;
  TNode<OrderedHashMap> tmp38;
  TNode<OrderedHashMap> tmp39;
  TNode<Int32T> tmp40;
  TNode<Int32T> tmp41;
  TNode<Object> tmp42;
  TNode<Object> tmp43;
  TNode<IntPtrT> tmp44;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    std::tie(tmp37, tmp38) = NewStableBackingTableWitness_1(state_, TNode<JSMap>{tmp19}).Flatten();
    std::tie(tmp39, tmp40, tmp41, tmp42, tmp43, tmp44) = NewUnmodifiedOrderedHashMapIterator_0(state_, TNode<OrderedHashMap>{tmp38}).Flatten();
    ca_.Goto(&block40, tmp42, tmp43, tmp44);
  }

  TNode<Object> phi_bb40_19;
  TNode<Object> phi_bb40_20;
  TNode<IntPtrT> phi_bb40_21;
  TNode<BoolT> tmp45;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_19, &phi_bb40_20, &phi_bb40_21);
    tmp45 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp45, &block38, std::vector<compiler::Node*>{phi_bb40_19, phi_bb40_20, phi_bb40_21}, &block39, std::vector<compiler::Node*>{phi_bb40_19, phi_bb40_20, phi_bb40_21});
  }

  TNode<Object> phi_bb38_19;
  TNode<Object> phi_bb38_20;
  TNode<IntPtrT> phi_bb38_21;
  TNode<Object> tmp46;
  TNode<Object> tmp47;
  TNode<IntPtrT> tmp48;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_19, &phi_bb38_20, &phi_bb38_21);
    compiler::CodeAssemblerLabel label49(&ca_);
    std::tie(tmp46, tmp47, tmp48) = CollectionsBuiltinsAssembler(state_).NextKeyValueIndexTupleUnmodifiedTable(TNode<OrderedHashMap>{tmp39}, TNode<Int32T>{tmp40}, TNode<Int32T>{tmp41}, TNode<IntPtrT>{phi_bb38_21}, &label49).Flatten();
    ca_.Goto(&block42, phi_bb38_19, phi_bb38_20, phi_bb38_21, phi_bb38_21);
    if (label49.is_used()) {
      ca_.Bind(&label49);
      ca_.Goto(&block43, phi_bb38_19, phi_bb38_20, phi_bb38_21, phi_bb38_21);
    }
  }

  TNode<Object> phi_bb43_19;
  TNode<Object> phi_bb43_20;
  TNode<IntPtrT> phi_bb43_21;
  TNode<IntPtrT> phi_bb43_25;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_19, &phi_bb43_20, &phi_bb43_21, &phi_bb43_25);
    ca_.Goto(&block12, tmp9);
  }

  TNode<Object> phi_bb42_19;
  TNode<Object> phi_bb42_20;
  TNode<IntPtrT> phi_bb42_21;
  TNode<IntPtrT> phi_bb42_25;
  TNode<BoolT> tmp50;
  TNode<BoolT> tmp51;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_19, &phi_bb42_20, &phi_bb42_21, &phi_bb42_25);
    tmp50 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp9}, TNode<Object>{tmp46});
    tmp51 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp50});
    ca_.Branch(tmp51, &block44, std::vector<compiler::Node*>{}, &block45, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp52;
  if (block44.is_used()) {
    ca_.Bind(&block44);
    tmp52 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp52);
  }

  if (block45.is_used()) {
    ca_.Bind(&block45);
    ca_.Goto(&block40, tmp46, tmp47, tmp48);
  }

  TNode<Object> phi_bb39_19;
  TNode<Object> phi_bb39_20;
  TNode<IntPtrT> phi_bb39_21;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_19, &phi_bb39_20, &phi_bb39_21);
    ca_.Goto(&block15);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block13, tmp9);
  }

  TNode<JSReceiver> tmp53;
  TNode<JSReceiver> tmp54;
  TNode<Object> tmp55;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp53 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    std::tie(tmp54, tmp55) = GetKeysIterator_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<JSReceiver>{tmp53}).Flatten();
    ca_.Goto(&block49, tmp9, ca_.Uninitialized<JSReceiver>());
  }

  TNode<OrderedHashSet> phi_bb49_10;
  TNode<JSReceiver> phi_bb49_14;
  TNode<BoolT> tmp56;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_10, &phi_bb49_14);
    tmp56 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp56, &block47, std::vector<compiler::Node*>{phi_bb49_10, phi_bb49_14}, &block48, std::vector<compiler::Node*>{phi_bb49_10, phi_bb49_14});
  }

  TNode<OrderedHashSet> phi_bb47_10;
  TNode<JSReceiver> phi_bb47_14;
  TNode<JSReceiver> tmp57;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_10, &phi_bb47_14);
    compiler::CodeAssemblerLabel label58(&ca_);
    tmp57 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp54}, TNode<Object>{tmp55}}, TNode<Map>{tmp0}, &label58);
    ca_.Goto(&block50, phi_bb47_10, phi_bb47_14);
    if (label58.is_used()) {
      ca_.Bind(&label58);
      ca_.Goto(&block51, phi_bb47_10, phi_bb47_14);
    }
  }

  TNode<OrderedHashSet> phi_bb51_10;
  TNode<JSReceiver> phi_bb51_14;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_10, &phi_bb51_14);
    ca_.Goto(&block12, phi_bb51_10);
  }

  TNode<OrderedHashSet> phi_bb50_10;
  TNode<JSReceiver> phi_bb50_14;
  TNode<Object> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<HeapObject> tmp62;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_10, &phi_bb50_14);
    tmp59 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp57}, TNode<Map>{tmp0});
    tmp60 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp61 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp8, tmp60});
    compiler::CodeAssemblerLabel label63(&ca_);
    tmp62 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp61}, &label63);
    ca_.Goto(&block56, phi_bb50_10);
    if (label63.is_used()) {
      ca_.Bind(&label63);
      ca_.Goto(&block57, phi_bb50_10);
    }
  }

  TNode<OrderedHashSet> phi_bb57_10;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_10);
    ca_.Goto(&block54, phi_bb57_10);
  }

  TNode<OrderedHashSet> phi_bb56_10;
  TNode<OrderedHashSet> tmp64;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_10);
    compiler::CodeAssemblerLabel label65(&ca_);
    tmp64 = Cast_OrderedHashSet_0(state_, TNode<HeapObject>{tmp62}, &label65);
    ca_.Goto(&block59, phi_bb56_10);
    if (label65.is_used()) {
      ca_.Bind(&label65);
      ca_.Goto(&block60, phi_bb56_10);
    }
  }

  TNode<OrderedHashSet> phi_bb60_10;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_10);
    ca_.Goto(&block54, phi_bb60_10);
  }

  TNode<OrderedHashSet> phi_bb59_10;
  TNode<OrderedHashSet> tmp66;
  TNode<BoolT> tmp67;
  TNode<BoolT> tmp68;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_10);
    tmp66 = (TNode<OrderedHashSet>{tmp64});
    tmp67 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp66}, TNode<Object>{tmp59});
    tmp68 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp67});
    ca_.Branch(tmp68, &block61, std::vector<compiler::Node*>{}, &block62, std::vector<compiler::Node*>{});
  }

  TNode<OrderedHashSet> phi_bb54_10;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<False> tmp69;
  if (block61.is_used()) {
    ca_.Bind(&block61);
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp54}, TNode<Object>{tmp55}});
    tmp69 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp69);
  }

  if (block62.is_used()) {
    ca_.Bind(&block62);
    ca_.Goto(&block49, tmp66, tmp57);
  }

  TNode<OrderedHashSet> phi_bb48_10;
  TNode<JSReceiver> phi_bb48_14;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_10, &phi_bb48_14);
    ca_.Goto(&block13, phi_bb48_10);
  }

  TNode<OrderedHashSet> phi_bb13_10;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> phi_bb12_10;
  TNode<True> tmp70;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_10);
    tmp70 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp70);
  }
}

} // namespace internal
} // namespace v8
