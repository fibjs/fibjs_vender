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
#include "torque-generated/src/builtins/set-is-subset-of-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/set-difference-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(SetPrototypeIsSubsetOf, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSSet> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_Object_constexpr_string_0(state_, "Set.prototype.isSubsetOf");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp2}, TNode<Object>{parameter1});
  }

  TNode<JSReceiver> tmp3;
  TNode<Number> tmp4;
  TNode<Object> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<OrderedHashSet> tmp9;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    std::tie(tmp3, tmp4, tmp5, tmp6) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.isSubsetOf").Flatten();
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp8 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp0, tmp7});
    compiler::CodeAssemblerLabel label10(&ca_);
    tmp9 = Cast_OrderedHashSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp8}, &label10);
    ca_.Goto(&block7);
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp11;
  TNode<Int32T> tmp12;
  TNode<BoolT> tmp13;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp11 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp9}, OrderedHashSet::NumberOfElementsIndex());
    tmp12 = Convert_int32_Number_0(state_, TNode<Number>{tmp4});
    tmp13 = CodeStubAssembler(state_).Int32GreaterThan(TNode<Int32T>{tmp11}, TNode<Int32T>{tmp12});
    ca_.Branch(tmp13, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp14;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp14 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp14);
  }

  TNode<JSSet> tmp15;
  if (block10.is_used()) {
    ca_.Bind(&block10);
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
    ca_.Goto(&block35);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block36);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    compiler::CodeAssemblerLabel label19(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp3}, TNode<Number>{tmp4}, TNode<Object>{tmp5}, TNode<Object>{tmp6}}, &label19);
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

  TNode<IntPtrT> tmp20;
  TNode<Object> tmp21;
  TNode<OrderedHashSet> tmp22;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp20 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp21 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp20});
    compiler::CodeAssemblerLabel label23(&ca_);
    tmp22 = Cast_OrderedHashSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp21}, &label23);
    ca_.Goto(&block23);
    if (label23.is_used()) {
      ca_.Bind(&label23);
      ca_.Goto(&block24);
    }
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> tmp24;
  TNode<Int32T> tmp25;
  TNode<Int32T> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    std::tie(tmp24, tmp25, tmp26, tmp27, tmp28) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp9}).Flatten();
    ca_.Goto(&block27, tmp27, tmp28);
  }

  TNode<Object> phi_bb27_16;
  TNode<IntPtrT> phi_bb27_17;
  TNode<BoolT> tmp29;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_16, &phi_bb27_17);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp29, &block25, std::vector<compiler::Node*>{phi_bb27_16, phi_bb27_17}, &block26, std::vector<compiler::Node*>{phi_bb27_16, phi_bb27_17});
  }

  TNode<Object> phi_bb25_16;
  TNode<IntPtrT> phi_bb25_17;
  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_16, &phi_bb25_17);
    compiler::CodeAssemblerLabel label32(&ca_);
    std::tie(tmp30, tmp31) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp24}, TNode<Int32T>{tmp25}, TNode<Int32T>{tmp26}, TNode<IntPtrT>{phi_bb25_17}, &label32).Flatten();
    ca_.Goto(&block29, phi_bb25_16, phi_bb25_17, phi_bb25_17);
    if (label32.is_used()) {
      ca_.Bind(&label32);
      ca_.Goto(&block30, phi_bb25_16, phi_bb25_17, phi_bb25_17);
    }
  }

  TNode<Object> phi_bb30_16;
  TNode<IntPtrT> phi_bb30_17;
  TNode<IntPtrT> phi_bb30_21;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_16, &phi_bb30_17, &phi_bb30_21);
    ca_.Goto(&block12);
  }

  TNode<Object> phi_bb29_16;
  TNode<IntPtrT> phi_bb29_17;
  TNode<IntPtrT> phi_bb29_21;
  TNode<BoolT> tmp33;
  TNode<BoolT> tmp34;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_16, &phi_bb29_17, &phi_bb29_21);
    tmp33 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp22}, TNode<Object>{tmp30});
    tmp34 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp33});
    ca_.Branch(tmp34, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp35;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp35 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp35);
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    ca_.Goto(&block27, tmp30, tmp31);
  }

  TNode<Object> phi_bb26_16;
  TNode<IntPtrT> phi_bb26_17;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_16, &phi_bb26_17);
    ca_.Goto(&block15);
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.Goto(&block14);
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    compiler::CodeAssemblerLabel label36(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp3}, TNode<Number>{tmp4}, TNode<Object>{tmp5}, TNode<Object>{tmp6}}, &label36);
    ca_.Goto(&block37);
    if (label36.is_used()) {
      ca_.Bind(&label36);
      ca_.Goto(&block38);
    }
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    ca_.Goto(&block14);
  }

  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<OrderedHashMap> tmp39;
  if (block37.is_used()) {
    ca_.Bind(&block37);
    tmp37 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp38 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp17, tmp37});
    compiler::CodeAssemblerLabel label40(&ca_);
    tmp39 = Cast_OrderedHashMap_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp38}, &label40);
    ca_.Goto(&block41);
    if (label40.is_used()) {
      ca_.Bind(&label40);
      ca_.Goto(&block42);
    }
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> tmp41;
  TNode<Int32T> tmp42;
  TNode<Int32T> tmp43;
  TNode<Object> tmp44;
  TNode<IntPtrT> tmp45;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    std::tie(tmp41, tmp42, tmp43, tmp44, tmp45) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp9}).Flatten();
    ca_.Goto(&block45, tmp44, tmp45);
  }

  TNode<Object> phi_bb45_16;
  TNode<IntPtrT> phi_bb45_17;
  TNode<BoolT> tmp46;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_16, &phi_bb45_17);
    tmp46 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp46, &block43, std::vector<compiler::Node*>{phi_bb45_16, phi_bb45_17}, &block44, std::vector<compiler::Node*>{phi_bb45_16, phi_bb45_17});
  }

  TNode<Object> phi_bb43_16;
  TNode<IntPtrT> phi_bb43_17;
  TNode<Object> tmp47;
  TNode<IntPtrT> tmp48;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_16, &phi_bb43_17);
    compiler::CodeAssemblerLabel label49(&ca_);
    std::tie(tmp47, tmp48) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp41}, TNode<Int32T>{tmp42}, TNode<Int32T>{tmp43}, TNode<IntPtrT>{phi_bb43_17}, &label49).Flatten();
    ca_.Goto(&block47, phi_bb43_16, phi_bb43_17, phi_bb43_17);
    if (label49.is_used()) {
      ca_.Bind(&label49);
      ca_.Goto(&block48, phi_bb43_16, phi_bb43_17, phi_bb43_17);
    }
  }

  TNode<Object> phi_bb48_16;
  TNode<IntPtrT> phi_bb48_17;
  TNode<IntPtrT> phi_bb48_21;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_16, &phi_bb48_17, &phi_bb48_21);
    ca_.Goto(&block12);
  }

  TNode<Object> phi_bb47_16;
  TNode<IntPtrT> phi_bb47_17;
  TNode<IntPtrT> phi_bb47_21;
  TNode<BoolT> tmp50;
  TNode<BoolT> tmp51;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_16, &phi_bb47_17, &phi_bb47_21);
    tmp50 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashMap>{tmp39}, TNode<Object>{tmp47});
    tmp51 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp50});
    ca_.Branch(tmp51, &block49, std::vector<compiler::Node*>{}, &block50, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp52;
  if (block49.is_used()) {
    ca_.Bind(&block49);
    tmp52 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp52);
  }

  if (block50.is_used()) {
    ca_.Bind(&block50);
    ca_.Goto(&block45, tmp47, tmp48);
  }

  TNode<Object> phi_bb44_16;
  TNode<IntPtrT> phi_bb44_17;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_16, &phi_bb44_17);
    ca_.Goto(&block15);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block13);
  }

  TNode<OrderedHashSet> tmp53;
  TNode<Object> tmp54;
  TNode<IntPtrT> tmp55;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    std::tie(tmp53, tmp54, tmp55) = NewOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp9}).Flatten();
    ca_.Goto(&block53, tmp53, tmp54, tmp55);
  }

  TNode<OrderedHashSet> phi_bb53_10;
  TNode<Object> phi_bb53_11;
  TNode<IntPtrT> phi_bb53_12;
  TNode<BoolT> tmp56;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_10, &phi_bb53_11, &phi_bb53_12);
    tmp56 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp56, &block51, std::vector<compiler::Node*>{phi_bb53_10, phi_bb53_11, phi_bb53_12}, &block52, std::vector<compiler::Node*>{phi_bb53_10, phi_bb53_11, phi_bb53_12});
  }

  TNode<OrderedHashSet> phi_bb51_10;
  TNode<Object> phi_bb51_11;
  TNode<IntPtrT> phi_bb51_12;
  TNode<OrderedHashSet> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<Object> tmp59;
  TNode<IntPtrT> tmp60;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_10, &phi_bb51_11, &phi_bb51_12);
    std::tie(tmp57, tmp58) = CollectionsBuiltinsAssembler(state_).TransitionOrderedHashSetNoUpdate(TNode<OrderedHashSet>{phi_bb51_10}, TNode<IntPtrT>{phi_bb51_12}).Flatten();
    compiler::CodeAssemblerLabel label61(&ca_);
    std::tie(tmp59, tmp60) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPair(TNode<OrderedHashSet>{tmp57}, TNode<IntPtrT>{tmp58}, &label61).Flatten();
    ca_.Goto(&block55, phi_bb51_11);
    if (label61.is_used()) {
      ca_.Bind(&label61);
      ca_.Goto(&block56, phi_bb51_11);
    }
  }

  TNode<Object> phi_bb56_11;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_11);
    ca_.Goto(&block12);
  }

  TNode<Object> phi_bb55_11;
  TNode<Object> tmp62;
  TNode<BoolT> tmp63;
  TNode<BoolT> tmp64;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_11);
    tmp62 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp5}, TNode<Object>{tmp3}, TNode<Object>{tmp59});
    tmp63 = ToBoolean_0(state_, TNode<Object>{tmp62});
    tmp64 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp63});
    ca_.Branch(tmp64, &block57, std::vector<compiler::Node*>{}, &block58, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp65;
  if (block57.is_used()) {
    ca_.Bind(&block57);
    tmp65 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp65);
  }

  if (block58.is_used()) {
    ca_.Bind(&block58);
    ca_.Goto(&block53, tmp57, tmp59, tmp60);
  }

  TNode<OrderedHashSet> phi_bb52_10;
  TNode<Object> phi_bb52_11;
  TNode<IntPtrT> phi_bb52_12;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_10, &phi_bb52_11, &phi_bb52_12);
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
