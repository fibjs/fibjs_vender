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
#include "torque-generated/src/builtins/set-is-superset-of-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
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
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<OrderedHashSet> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    std::tie(tmp4, tmp5, tmp6, tmp7) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.isSupersetOf").Flatten();
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

  TNode<Int32T> tmp12;
  TNode<Int32T> tmp13;
  TNode<BoolT> tmp14;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp10}, OrderedHashSet::NumberOfElementsIndex());
    tmp13 = Convert_int32_Number_0(state_, TNode<Number>{tmp5});
    tmp14 = CodeStubAssembler(state_).Int32LessThan(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp13});
    ca_.Branch(tmp14, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp15;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp15 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp15);
  }

  TNode<JSSet> tmp16;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    compiler::CodeAssemblerLabel label17(&ca_);
    tmp16 = Cast_JSSetWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label17);
    ca_.Goto(&block17);
    if (label17.is_used()) {
      ca_.Bind(&label17);
      ca_.Goto(&block18);
    }
  }

  TNode<JSMap> tmp18;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    compiler::CodeAssemblerLabel label19(&ca_);
    tmp18 = Cast_JSMapWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter2)}, &label19);
    ca_.Goto(&block35);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block36);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    compiler::CodeAssemblerLabel label20(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label20);
    ca_.Goto(&block19);
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block14);
  }

  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<OrderedHashSet> tmp23;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp22 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp16, tmp21});
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = Cast_OrderedHashSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp22}, &label24);
    ca_.Goto(&block23);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block24);
    }
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> tmp25;
  TNode<Int32T> tmp26;
  TNode<Int32T> tmp27;
  TNode<Object> tmp28;
  TNode<IntPtrT> tmp29;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    std::tie(tmp25, tmp26, tmp27, tmp28, tmp29) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp23}).Flatten();
    ca_.Goto(&block27, tmp28, tmp29);
  }

  TNode<Object> phi_bb27_17;
  TNode<IntPtrT> phi_bb27_18;
  TNode<BoolT> tmp30;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_17, &phi_bb27_18);
    tmp30 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp30, &block25, std::vector<compiler::Node*>{phi_bb27_17, phi_bb27_18}, &block26, std::vector<compiler::Node*>{phi_bb27_17, phi_bb27_18});
  }

  TNode<Object> phi_bb25_17;
  TNode<IntPtrT> phi_bb25_18;
  TNode<Object> tmp31;
  TNode<IntPtrT> tmp32;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_17, &phi_bb25_18);
    compiler::CodeAssemblerLabel label33(&ca_);
    std::tie(tmp31, tmp32) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp25}, TNode<Int32T>{tmp26}, TNode<Int32T>{tmp27}, TNode<IntPtrT>{phi_bb25_18}, &label33).Flatten();
    ca_.Goto(&block29, phi_bb25_17, phi_bb25_18, phi_bb25_18);
    if (label33.is_used()) {
      ca_.Bind(&label33);
      ca_.Goto(&block30, phi_bb25_17, phi_bb25_18, phi_bb25_18);
    }
  }

  TNode<Object> phi_bb30_17;
  TNode<IntPtrT> phi_bb30_18;
  TNode<IntPtrT> phi_bb30_22;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_17, &phi_bb30_18, &phi_bb30_22);
    ca_.Goto(&block12);
  }

  TNode<Object> phi_bb29_17;
  TNode<IntPtrT> phi_bb29_18;
  TNode<IntPtrT> phi_bb29_22;
  TNode<BoolT> tmp34;
  TNode<BoolT> tmp35;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_17, &phi_bb29_18, &phi_bb29_22);
    tmp34 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<Object>{tmp31});
    tmp35 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp34});
    ca_.Branch(tmp35, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp36;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp36 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp36);
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    ca_.Goto(&block27, tmp31, tmp32);
  }

  TNode<Object> phi_bb26_17;
  TNode<IntPtrT> phi_bb26_18;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_17, &phi_bb26_18);
    ca_.Goto(&block15);
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.Goto(&block14);
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    compiler::CodeAssemblerLabel label37(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label37);
    ca_.Goto(&block37);
    if (label37.is_used()) {
      ca_.Bind(&label37);
      ca_.Goto(&block38);
    }
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    ca_.Goto(&block14);
  }

  TNode<IntPtrT> tmp38;
  TNode<Object> tmp39;
  TNode<OrderedHashMap> tmp40;
  if (block37.is_used()) {
    ca_.Bind(&block37);
    tmp38 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp39 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp18, tmp38});
    compiler::CodeAssemblerLabel label41(&ca_);
    tmp40 = Cast_OrderedHashMap_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp39}, &label41);
    ca_.Goto(&block41);
    if (label41.is_used()) {
      ca_.Bind(&label41);
      ca_.Goto(&block42);
    }
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashMap> tmp42;
  TNode<Int32T> tmp43;
  TNode<Int32T> tmp44;
  TNode<Object> tmp45;
  TNode<Object> tmp46;
  TNode<IntPtrT> tmp47;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    std::tie(tmp42, tmp43, tmp44, tmp45, tmp46, tmp47) = NewUnmodifiedOrderedHashMapIterator_0(state_, TNode<OrderedHashMap>{tmp40}).Flatten();
    ca_.Goto(&block45, tmp45, tmp46, tmp47);
  }

  TNode<Object> phi_bb45_17;
  TNode<Object> phi_bb45_18;
  TNode<IntPtrT> phi_bb45_19;
  TNode<BoolT> tmp48;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_17, &phi_bb45_18, &phi_bb45_19);
    tmp48 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp48, &block43, std::vector<compiler::Node*>{phi_bb45_17, phi_bb45_18, phi_bb45_19}, &block44, std::vector<compiler::Node*>{phi_bb45_17, phi_bb45_18, phi_bb45_19});
  }

  TNode<Object> phi_bb43_17;
  TNode<Object> phi_bb43_18;
  TNode<IntPtrT> phi_bb43_19;
  TNode<Object> tmp49;
  TNode<Object> tmp50;
  TNode<IntPtrT> tmp51;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_17, &phi_bb43_18, &phi_bb43_19);
    compiler::CodeAssemblerLabel label52(&ca_);
    std::tie(tmp49, tmp50, tmp51) = CollectionsBuiltinsAssembler(state_).NextKeyValueIndexTupleUnmodifiedTable(TNode<OrderedHashMap>{tmp42}, TNode<Int32T>{tmp43}, TNode<Int32T>{tmp44}, TNode<IntPtrT>{phi_bb43_19}, &label52).Flatten();
    ca_.Goto(&block47, phi_bb43_17, phi_bb43_18, phi_bb43_19, phi_bb43_19);
    if (label52.is_used()) {
      ca_.Bind(&label52);
      ca_.Goto(&block48, phi_bb43_17, phi_bb43_18, phi_bb43_19, phi_bb43_19);
    }
  }

  TNode<Object> phi_bb48_17;
  TNode<Object> phi_bb48_18;
  TNode<IntPtrT> phi_bb48_19;
  TNode<IntPtrT> phi_bb48_23;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_17, &phi_bb48_18, &phi_bb48_19, &phi_bb48_23);
    ca_.Goto(&block12);
  }

  TNode<Object> phi_bb47_17;
  TNode<Object> phi_bb47_18;
  TNode<IntPtrT> phi_bb47_19;
  TNode<IntPtrT> phi_bb47_23;
  TNode<BoolT> tmp53;
  TNode<BoolT> tmp54;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_17, &phi_bb47_18, &phi_bb47_19, &phi_bb47_23);
    tmp53 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<Object>{tmp49});
    tmp54 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp53});
    ca_.Branch(tmp54, &block49, std::vector<compiler::Node*>{}, &block50, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp55;
  if (block49.is_used()) {
    ca_.Bind(&block49);
    tmp55 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp55);
  }

  if (block50.is_used()) {
    ca_.Bind(&block50);
    ca_.Goto(&block45, tmp49, tmp50, tmp51);
  }

  TNode<Object> phi_bb44_17;
  TNode<Object> phi_bb44_18;
  TNode<IntPtrT> phi_bb44_19;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_17, &phi_bb44_18, &phi_bb44_19);
    ca_.Goto(&block15);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block13);
  }

  TNode<JSReceiver> tmp56;
  TNode<JSReceiver> tmp57;
  TNode<Object> tmp58;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp56 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    std::tie(tmp57, tmp58) = GetKeysIterator_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<JSReceiver>{tmp56}).Flatten();
    ca_.Goto(&block53, ca_.Uninitialized<JSReceiver>());
  }

  TNode<JSReceiver> phi_bb53_13;
  TNode<BoolT> tmp59;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_13);
    tmp59 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp59, &block51, std::vector<compiler::Node*>{phi_bb53_13}, &block52, std::vector<compiler::Node*>{phi_bb53_13});
  }

  TNode<JSReceiver> phi_bb51_13;
  TNode<JSReceiver> tmp60;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_13);
    compiler::CodeAssemblerLabel label61(&ca_);
    tmp60 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp57}, TNode<Object>{tmp58}}, TNode<Map>{tmp0}, &label61);
    ca_.Goto(&block54, phi_bb51_13);
    if (label61.is_used()) {
      ca_.Bind(&label61);
      ca_.Goto(&block55, phi_bb51_13);
    }
  }

  TNode<JSReceiver> phi_bb55_13;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_13);
    ca_.Goto(&block12);
  }

  TNode<JSReceiver> phi_bb54_13;
  TNode<Object> tmp62;
  TNode<BoolT> tmp63;
  TNode<BoolT> tmp64;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_13);
    tmp62 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp60}, TNode<Map>{tmp0});
    tmp63 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<Object>{tmp62});
    tmp64 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp63});
    ca_.Branch(tmp64, &block56, std::vector<compiler::Node*>{}, &block57, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp65;
  if (block56.is_used()) {
    ca_.Bind(&block56);
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp57}, TNode<Object>{tmp58}});
    tmp65 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp65);
  }

  if (block57.is_used()) {
    ca_.Bind(&block57);
    ca_.Goto(&block53, tmp60);
  }

  TNode<JSReceiver> phi_bb52_13;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_13);
    ca_.Goto(&block13);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<True> tmp66;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp66 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp66);
  }
}

} // namespace internal
} // namespace v8
