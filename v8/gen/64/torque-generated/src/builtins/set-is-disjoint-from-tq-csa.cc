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
#include "torque-generated/src/builtins/set-is-disjoint-from-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/set-difference-tq-csa.h"
#include "torque-generated/src/builtins/set-is-disjoint-from-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(SetPrototypeIsDisjointFrom, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    tmp3 = FromConstexpr_Object_constexpr_string_0(state_, "Set.prototype.isDisjointFrom");
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
    std::tie(tmp4, tmp5, tmp6, tmp7) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.isDisjointFrom").Flatten();
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
  TNode<JSSet> tmp13;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp10}, OrderedHashSet::NumberOfElementsIndex());
    compiler::CodeAssemblerLabel label14(&ca_);
    tmp13 = Cast_JSSetWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label14);
    ca_.Goto(&block15);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block16);
    }
  }

  TNode<JSMap> tmp15;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp15 = Cast_JSMapWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter2)}, &label16);
    ca_.Goto(&block27);
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block28);
    }
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label17(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label17);
    ca_.Goto(&block17);
    if (label17.is_used()) {
      ca_.Bind(&label17);
      ca_.Goto(&block18);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(&block12);
  }

  TNode<IntPtrT> tmp18;
  TNode<Object> tmp19;
  TNode<OrderedHashSet> tmp20;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp19 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp13, tmp18});
    compiler::CodeAssemblerLabel label21(&ca_);
    tmp20 = Cast_OrderedHashSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp19}, &label21);
    ca_.Goto(&block21);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block22);
    }
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp22;
  TNode<BoolT> tmp23;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp22 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp20}, OrderedHashSet::NumberOfElementsIndex());
    tmp23 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp22});
    ca_.Branch(tmp23, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  TNode<Boolean> tmp24;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp24 = FastIsDisjointFrom_OrderedHashSet_0(state_, TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<OrderedHashSet>{tmp20});
    CodeStubAssembler(state_).Return(tmp24);
  }

  TNode<Boolean> tmp25;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp25 = FastIsDisjointFrom_OrderedHashSet_0(state_, TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp20}, TNode<OrderedHashSet>{tmp10});
    CodeStubAssembler(state_).Return(tmp25);
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    ca_.Goto(&block12);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    compiler::CodeAssemblerLabel label26(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label26);
    ca_.Goto(&block29);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block30);
    }
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.Goto(&block12);
  }

  TNode<IntPtrT> tmp27;
  TNode<Object> tmp28;
  TNode<OrderedHashMap> tmp29;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp27 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp28 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp27});
    compiler::CodeAssemblerLabel label30(&ca_);
    tmp29 = Cast_OrderedHashMap_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp28}, &label30);
    ca_.Goto(&block33);
    if (label30.is_used()) {
      ca_.Bind(&label30);
      ca_.Goto(&block34);
    }
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp31;
  TNode<BoolT> tmp32;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp31 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp29}, OrderedHashSet::NumberOfElementsIndex());
    tmp32 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp31});
    ca_.Branch(tmp32, &block35, std::vector<compiler::Node*>{}, &block36, std::vector<compiler::Node*>{});
  }

  TNode<Boolean> tmp33;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp33 = FastIsDisjointFrom_OrderedHashMap_0(state_, TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<OrderedHashMap>{tmp29});
    CodeStubAssembler(state_).Return(tmp33);
  }

  TNode<OrderedHashMap> tmp34;
  TNode<Int32T> tmp35;
  TNode<Int32T> tmp36;
  TNode<Object> tmp37;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    std::tie(tmp34, tmp35, tmp36, tmp37, tmp38, tmp39) = NewUnmodifiedOrderedHashMapIterator_0(state_, TNode<OrderedHashMap>{tmp29}).Flatten();
    ca_.Goto(&block39, tmp37, tmp38, tmp39);
  }

  TNode<Object> phi_bb39_18;
  TNode<Object> phi_bb39_19;
  TNode<IntPtrT> phi_bb39_20;
  TNode<BoolT> tmp40;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_18, &phi_bb39_19, &phi_bb39_20);
    tmp40 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp40, &block37, std::vector<compiler::Node*>{phi_bb39_18, phi_bb39_19, phi_bb39_20}, &block38, std::vector<compiler::Node*>{phi_bb39_18, phi_bb39_19, phi_bb39_20});
  }

  TNode<Object> phi_bb37_18;
  TNode<Object> phi_bb37_19;
  TNode<IntPtrT> phi_bb37_20;
  TNode<Object> tmp41;
  TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_18, &phi_bb37_19, &phi_bb37_20);
    compiler::CodeAssemblerLabel label44(&ca_);
    std::tie(tmp41, tmp42, tmp43) = CollectionsBuiltinsAssembler(state_).NextKeyValueIndexTupleUnmodifiedTable(TNode<OrderedHashMap>{tmp34}, TNode<Int32T>{tmp35}, TNode<Int32T>{tmp36}, TNode<IntPtrT>{phi_bb37_20}, &label44).Flatten();
    ca_.Goto(&block41, phi_bb37_18, phi_bb37_19, phi_bb37_20, phi_bb37_20);
    if (label44.is_used()) {
      ca_.Bind(&label44);
      ca_.Goto(&block42, phi_bb37_18, phi_bb37_19, phi_bb37_20, phi_bb37_20);
    }
  }

  TNode<Object> phi_bb42_18;
  TNode<Object> phi_bb42_19;
  TNode<IntPtrT> phi_bb42_20;
  TNode<IntPtrT> phi_bb42_24;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_18, &phi_bb42_19, &phi_bb42_20, &phi_bb42_24);
    ca_.Goto(&block10);
  }

  TNode<Object> phi_bb41_18;
  TNode<Object> phi_bb41_19;
  TNode<IntPtrT> phi_bb41_20;
  TNode<IntPtrT> phi_bb41_24;
  TNode<BoolT> tmp45;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_18, &phi_bb41_19, &phi_bb41_20, &phi_bb41_24);
    tmp45 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<Object>{tmp41});
    ca_.Branch(tmp45, &block43, std::vector<compiler::Node*>{}, &block44, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp46;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp46 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp46);
  }

  if (block44.is_used()) {
    ca_.Bind(&block44);
    ca_.Goto(&block39, tmp41, tmp42, tmp43);
  }

  TNode<Object> phi_bb38_18;
  TNode<Object> phi_bb38_19;
  TNode<IntPtrT> phi_bb38_20;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_18, &phi_bb38_19, &phi_bb38_20);
    ca_.Goto(&block11);
  }

  TNode<Int32T> tmp47;
  TNode<BoolT> tmp48;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp47 = Convert_int32_Number_0(state_, TNode<Number>{tmp5});
    tmp48 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp47});
    ca_.Branch(tmp48, &block45, std::vector<compiler::Node*>{}, &block46, std::vector<compiler::Node*>{});
  }

  TNode<OrderedHashSet> tmp49;
  TNode<Object> tmp50;
  TNode<IntPtrT> tmp51;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    std::tie(tmp49, tmp50, tmp51) = NewOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp10}).Flatten();
    ca_.Goto(&block50, tmp49, tmp50, tmp51);
  }

  TNode<OrderedHashSet> phi_bb50_11;
  TNode<Object> phi_bb50_12;
  TNode<IntPtrT> phi_bb50_13;
  TNode<BoolT> tmp52;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_11, &phi_bb50_12, &phi_bb50_13);
    tmp52 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp52, &block48, std::vector<compiler::Node*>{phi_bb50_11, phi_bb50_12, phi_bb50_13}, &block49, std::vector<compiler::Node*>{phi_bb50_11, phi_bb50_12, phi_bb50_13});
  }

  TNode<OrderedHashSet> phi_bb48_11;
  TNode<Object> phi_bb48_12;
  TNode<IntPtrT> phi_bb48_13;
  TNode<OrderedHashSet> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<Object> tmp55;
  TNode<IntPtrT> tmp56;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_11, &phi_bb48_12, &phi_bb48_13);
    std::tie(tmp53, tmp54) = CollectionsBuiltinsAssembler(state_).TransitionOrderedHashSetNoUpdate(TNode<OrderedHashSet>{phi_bb48_11}, TNode<IntPtrT>{phi_bb48_13}).Flatten();
    compiler::CodeAssemblerLabel label57(&ca_);
    std::tie(tmp55, tmp56) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPair(TNode<OrderedHashSet>{tmp53}, TNode<IntPtrT>{tmp54}, &label57).Flatten();
    ca_.Goto(&block52, phi_bb48_12);
    if (label57.is_used()) {
      ca_.Bind(&label57);
      ca_.Goto(&block53, phi_bb48_12);
    }
  }

  TNode<Object> phi_bb53_12;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_12);
    ca_.Goto(&block10);
  }

  TNode<Object> phi_bb52_12;
  TNode<Object> tmp58;
  TNode<BoolT> tmp59;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_12);
    tmp58 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp6}, TNode<Object>{tmp4}, TNode<Object>{tmp55});
    tmp59 = ToBoolean_0(state_, TNode<Object>{tmp58});
    ca_.Branch(tmp59, &block54, std::vector<compiler::Node*>{}, &block55, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp60;
  if (block54.is_used()) {
    ca_.Bind(&block54);
    tmp60 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp60);
  }

  if (block55.is_used()) {
    ca_.Bind(&block55);
    ca_.Goto(&block50, tmp53, tmp55, tmp56);
  }

  TNode<OrderedHashSet> phi_bb49_11;
  TNode<Object> phi_bb49_12;
  TNode<IntPtrT> phi_bb49_13;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_11, &phi_bb49_12, &phi_bb49_13);
    ca_.Goto(&block47);
  }

  TNode<JSReceiver> tmp61;
  TNode<JSReceiver> tmp62;
  TNode<Object> tmp63;
  if (block46.is_used()) {
    ca_.Bind(&block46);
    tmp61 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    std::tie(tmp62, tmp63) = GetKeysIterator_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<JSReceiver>{tmp61}).Flatten();
    ca_.Goto(&block58, ca_.Uninitialized<JSReceiver>());
  }

  TNode<JSReceiver> phi_bb58_13;
  TNode<BoolT> tmp64;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_13);
    tmp64 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp64, &block56, std::vector<compiler::Node*>{phi_bb58_13}, &block57, std::vector<compiler::Node*>{phi_bb58_13});
  }

  TNode<JSReceiver> phi_bb56_13;
  TNode<JSReceiver> tmp65;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_13);
    compiler::CodeAssemblerLabel label66(&ca_);
    tmp65 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp62}, TNode<Object>{tmp63}}, TNode<Map>{tmp0}, &label66);
    ca_.Goto(&block59, phi_bb56_13);
    if (label66.is_used()) {
      ca_.Bind(&label66);
      ca_.Goto(&block60, phi_bb56_13);
    }
  }

  TNode<JSReceiver> phi_bb60_13;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_13);
    ca_.Goto(&block10);
  }

  TNode<JSReceiver> phi_bb59_13;
  TNode<Object> tmp67;
  TNode<BoolT> tmp68;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_13);
    tmp67 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp65}, TNode<Map>{tmp0});
    tmp68 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp10}, TNode<Object>{tmp67});
    ca_.Branch(tmp68, &block61, std::vector<compiler::Node*>{}, &block62, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp69;
  if (block61.is_used()) {
    ca_.Bind(&block61);
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp62}, TNode<Object>{tmp63}});
    tmp69 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp69);
  }

  if (block62.is_used()) {
    ca_.Bind(&block62);
    ca_.Goto(&block58, tmp65);
  }

  TNode<JSReceiver> phi_bb57_13;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_13);
    ca_.Goto(&block47);
  }

  if (block47.is_used()) {
    ca_.Bind(&block47);
    ca_.Goto(&block11);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<True> tmp70;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp70 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp70);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-is-disjoint-from.tq?l=41&c=18
TNode<Boolean> FastIsDisjointFrom_OrderedHashSet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashSet> p_tableToLookup) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Boolean> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Boolean> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<OrderedHashSet> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2, tmp3, tmp4) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{p_collectionToIterate}).Flatten();
    ca_.Goto(&block6, tmp3, tmp4);
  }

  TNode<Object> phi_bb6_6;
  TNode<IntPtrT> phi_bb6_7;
  TNode<BoolT> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_6, &phi_bb6_7);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{phi_bb6_6, phi_bb6_7}, &block5, std::vector<compiler::Node*>{phi_bb6_6, phi_bb6_7});
  }

  TNode<Object> phi_bb4_6;
  TNode<IntPtrT> phi_bb4_7;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_6, &phi_bb4_7);
    compiler::CodeAssemblerLabel label8(&ca_);
    std::tie(tmp6, tmp7) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp0}, TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2}, TNode<IntPtrT>{phi_bb4_7}, &label8).Flatten();
    ca_.Goto(&block8, phi_bb4_6, phi_bb4_7, phi_bb4_7);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block9, phi_bb4_6, phi_bb4_7, phi_bb4_7);
    }
  }

  TNode<Object> phi_bb9_6;
  TNode<IntPtrT> phi_bb9_7;
  TNode<IntPtrT> phi_bb9_11;
  TNode<True> tmp9;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_6, &phi_bb9_7, &phi_bb9_11);
    tmp9 = True_0(state_);
    ca_.Goto(&block1, tmp9);
  }

  TNode<Object> phi_bb8_6;
  TNode<IntPtrT> phi_bb8_7;
  TNode<IntPtrT> phi_bb8_11;
  TNode<BoolT> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_6, &phi_bb8_7, &phi_bb8_11);
    tmp10 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{p_context}, TNode<OrderedHashSet>{p_tableToLookup}, TNode<Object>{tmp6});
    ca_.Branch(tmp10, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp11;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp11 = False_0(state_);
    ca_.Goto(&block1, tmp11);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block6, tmp6, tmp7);
  }

  TNode<Object> phi_bb5_6;
  TNode<IntPtrT> phi_bb5_7;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_6, &phi_bb5_7);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Boolean> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block12, phi_bb1_3);
  }

  TNode<Boolean> phi_bb12_3;
    ca_.Bind(&block12, &phi_bb12_3);
  return TNode<Boolean>{phi_bb12_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-is-disjoint-from.tq?l=56&c=18
TNode<Boolean> FastIsDisjointFrom_OrderedHashMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashMap> p_tableToLookup) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Boolean> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Boolean> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<OrderedHashSet> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2, tmp3, tmp4) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{p_collectionToIterate}).Flatten();
    ca_.Goto(&block6, tmp3, tmp4);
  }

  TNode<Object> phi_bb6_6;
  TNode<IntPtrT> phi_bb6_7;
  TNode<BoolT> tmp5;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_6, &phi_bb6_7);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{phi_bb6_6, phi_bb6_7}, &block5, std::vector<compiler::Node*>{phi_bb6_6, phi_bb6_7});
  }

  TNode<Object> phi_bb4_6;
  TNode<IntPtrT> phi_bb4_7;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_6, &phi_bb4_7);
    compiler::CodeAssemblerLabel label8(&ca_);
    std::tie(tmp6, tmp7) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp0}, TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2}, TNode<IntPtrT>{phi_bb4_7}, &label8).Flatten();
    ca_.Goto(&block8, phi_bb4_6, phi_bb4_7, phi_bb4_7);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block9, phi_bb4_6, phi_bb4_7, phi_bb4_7);
    }
  }

  TNode<Object> phi_bb9_6;
  TNode<IntPtrT> phi_bb9_7;
  TNode<IntPtrT> phi_bb9_11;
  TNode<True> tmp9;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_6, &phi_bb9_7, &phi_bb9_11);
    tmp9 = True_0(state_);
    ca_.Goto(&block1, tmp9);
  }

  TNode<Object> phi_bb8_6;
  TNode<IntPtrT> phi_bb8_7;
  TNode<IntPtrT> phi_bb8_11;
  TNode<BoolT> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_6, &phi_bb8_7, &phi_bb8_11);
    tmp10 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{p_context}, TNode<OrderedHashMap>{p_tableToLookup}, TNode<Object>{tmp6});
    ca_.Branch(tmp10, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp11;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp11 = False_0(state_);
    ca_.Goto(&block1, tmp11);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block6, tmp6, tmp7);
  }

  TNode<Object> phi_bb5_6;
  TNode<IntPtrT> phi_bb5_7;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_6, &phi_bb5_7);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Boolean> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block12, phi_bb1_3);
  }

  TNode<Boolean> phi_bb12_3;
    ca_.Bind(&block12, &phi_bb12_3);
  return TNode<Boolean>{phi_bb12_3};
}

} // namespace internal
} // namespace v8
