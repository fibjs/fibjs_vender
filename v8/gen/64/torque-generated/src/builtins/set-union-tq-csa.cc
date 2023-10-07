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
#include "torque-generated/src/builtins/set-union-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/function-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/set-difference-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(SetPrototypeUnion, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, Object, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    tmp3 = FromConstexpr_Object_constexpr_string_0(state_, "Set.prototype.union");
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
    std::tie(tmp4, tmp5, tmp6, tmp7) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.union").Flatten();
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

  TNode<JSSet> tmp15;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp15 = Cast_JSSetWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label16);
    ca_.Goto(&block19);
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block20);
    }
  }

  TNode<JSMap> tmp17;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    compiler::CodeAssemblerLabel label18(&ca_);
    tmp17 = Cast_JSMapWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter2)}, &label18);
    ca_.Goto(&block35);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block36);
    }
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    compiler::CodeAssemblerLabel label19(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label19);
    ca_.Goto(&block21);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block22);
    }
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.Goto(&block16);
  }

  TNode<IntPtrT> tmp20;
  TNode<Object> tmp21;
  TNode<OrderedHashSet> tmp22;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp20 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp21 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp20});
    compiler::CodeAssemblerLabel label23(&ca_);
    tmp22 = Cast_OrderedHashSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp21}, &label23);
    ca_.Goto(&block25);
    if (label23.is_used()) {
      ca_.Bind(&label23);
      ca_.Goto(&block26);
    }
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> tmp24;
  TNode<Int32T> tmp25;
  TNode<Int32T> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    std::tie(tmp24, tmp25, tmp26, tmp27, tmp28) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp22}).Flatten();
    ca_.Goto(&block29, tmp13, tmp27, tmp28);
  }

  TNode<OrderedHashSet> phi_bb29_10;
  TNode<Object> phi_bb29_17;
  TNode<IntPtrT> phi_bb29_18;
  TNode<BoolT> tmp29;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_10, &phi_bb29_17, &phi_bb29_18);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp29, &block27, std::vector<compiler::Node*>{phi_bb29_10, phi_bb29_17, phi_bb29_18}, &block28, std::vector<compiler::Node*>{phi_bb29_10, phi_bb29_17, phi_bb29_18});
  }

  TNode<OrderedHashSet> phi_bb27_10;
  TNode<Object> phi_bb27_17;
  TNode<IntPtrT> phi_bb27_18;
  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_10, &phi_bb27_17, &phi_bb27_18);
    compiler::CodeAssemblerLabel label32(&ca_);
    std::tie(tmp30, tmp31) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp24}, TNode<Int32T>{tmp25}, TNode<Int32T>{tmp26}, TNode<IntPtrT>{phi_bb27_18}, &label32).Flatten();
    ca_.Goto(&block31, phi_bb27_10, phi_bb27_17, phi_bb27_18, phi_bb27_18);
    if (label32.is_used()) {
      ca_.Bind(&label32);
      ca_.Goto(&block32, phi_bb27_10, phi_bb27_17, phi_bb27_18, phi_bb27_18);
    }
  }

  TNode<OrderedHashSet> phi_bb32_10;
  TNode<Object> phi_bb32_17;
  TNode<IntPtrT> phi_bb32_18;
  TNode<IntPtrT> phi_bb32_22;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_10, &phi_bb32_17, &phi_bb32_18, &phi_bb32_22);
    ca_.Goto(&block14, phi_bb32_10);
  }

  TNode<OrderedHashSet> phi_bb31_10;
  TNode<Object> phi_bb31_17;
  TNode<IntPtrT> phi_bb31_18;
  TNode<IntPtrT> phi_bb31_22;
  TNode<String> tmp33;
  TNode<OrderedHashSet> tmp34;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_10, &phi_bb31_17, &phi_bb31_18, &phi_bb31_22);
    tmp33 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.union");
    tmp34 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb31_10}, TNode<Object>{tmp30}, TNode<String>{tmp33});
    ca_.Goto(&block29, tmp34, tmp30, tmp31);
  }

  TNode<OrderedHashSet> phi_bb28_10;
  TNode<Object> phi_bb28_17;
  TNode<IntPtrT> phi_bb28_18;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_10, &phi_bb28_17, &phi_bb28_18);
    ca_.Goto(&block17, phi_bb28_10);
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.Goto(&block16);
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    compiler::CodeAssemblerLabel label35(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp6}, TNode<Object>{tmp7}}, &label35);
    ca_.Goto(&block37);
    if (label35.is_used()) {
      ca_.Bind(&label35);
      ca_.Goto(&block38);
    }
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    ca_.Goto(&block16);
  }

  TNode<IntPtrT> tmp36;
  TNode<Object> tmp37;
  TNode<OrderedHashMap> tmp38;
  if (block37.is_used()) {
    ca_.Bind(&block37);
    tmp36 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp37 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp17, tmp36});
    compiler::CodeAssemblerLabel label39(&ca_);
    tmp38 = Cast_OrderedHashMap_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp37}, &label39);
    ca_.Goto(&block41);
    if (label39.is_used()) {
      ca_.Bind(&label39);
      ca_.Goto(&block42);
    }
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashMap> tmp40;
  TNode<Int32T> tmp41;
  TNode<Int32T> tmp42;
  TNode<Object> tmp43;
  TNode<Object> tmp44;
  TNode<IntPtrT> tmp45;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    std::tie(tmp40, tmp41, tmp42, tmp43, tmp44, tmp45) = NewUnmodifiedOrderedHashMapIterator_0(state_, TNode<OrderedHashMap>{tmp38}).Flatten();
    ca_.Goto(&block45, tmp13, tmp43, tmp44, tmp45);
  }

  TNode<OrderedHashSet> phi_bb45_10;
  TNode<Object> phi_bb45_17;
  TNode<Object> phi_bb45_18;
  TNode<IntPtrT> phi_bb45_19;
  TNode<BoolT> tmp46;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_10, &phi_bb45_17, &phi_bb45_18, &phi_bb45_19);
    tmp46 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp46, &block43, std::vector<compiler::Node*>{phi_bb45_10, phi_bb45_17, phi_bb45_18, phi_bb45_19}, &block44, std::vector<compiler::Node*>{phi_bb45_10, phi_bb45_17, phi_bb45_18, phi_bb45_19});
  }

  TNode<OrderedHashSet> phi_bb43_10;
  TNode<Object> phi_bb43_17;
  TNode<Object> phi_bb43_18;
  TNode<IntPtrT> phi_bb43_19;
  TNode<Object> tmp47;
  TNode<Object> tmp48;
  TNode<IntPtrT> tmp49;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_10, &phi_bb43_17, &phi_bb43_18, &phi_bb43_19);
    compiler::CodeAssemblerLabel label50(&ca_);
    std::tie(tmp47, tmp48, tmp49) = CollectionsBuiltinsAssembler(state_).NextKeyValueIndexTupleUnmodifiedTable(TNode<OrderedHashMap>{tmp40}, TNode<Int32T>{tmp41}, TNode<Int32T>{tmp42}, TNode<IntPtrT>{phi_bb43_19}, &label50).Flatten();
    ca_.Goto(&block47, phi_bb43_10, phi_bb43_17, phi_bb43_18, phi_bb43_19, phi_bb43_19);
    if (label50.is_used()) {
      ca_.Bind(&label50);
      ca_.Goto(&block48, phi_bb43_10, phi_bb43_17, phi_bb43_18, phi_bb43_19, phi_bb43_19);
    }
  }

  TNode<OrderedHashSet> phi_bb48_10;
  TNode<Object> phi_bb48_17;
  TNode<Object> phi_bb48_18;
  TNode<IntPtrT> phi_bb48_19;
  TNode<IntPtrT> phi_bb48_23;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_10, &phi_bb48_17, &phi_bb48_18, &phi_bb48_19, &phi_bb48_23);
    ca_.Goto(&block14, phi_bb48_10);
  }

  TNode<OrderedHashSet> phi_bb47_10;
  TNode<Object> phi_bb47_17;
  TNode<Object> phi_bb47_18;
  TNode<IntPtrT> phi_bb47_19;
  TNode<IntPtrT> phi_bb47_23;
  TNode<String> tmp51;
  TNode<OrderedHashSet> tmp52;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_10, &phi_bb47_17, &phi_bb47_18, &phi_bb47_19, &phi_bb47_23);
    tmp51 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.union");
    tmp52 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb47_10}, TNode<Object>{tmp47}, TNode<String>{tmp51});
    ca_.Goto(&block45, tmp52, tmp47, tmp48, tmp49);
  }

  TNode<OrderedHashSet> phi_bb44_10;
  TNode<Object> phi_bb44_17;
  TNode<Object> phi_bb44_18;
  TNode<IntPtrT> phi_bb44_19;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_10, &phi_bb44_17, &phi_bb44_18, &phi_bb44_19);
    ca_.Goto(&block17, phi_bb44_10);
  }

  TNode<OrderedHashSet> phi_bb17_10;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_10);
    ca_.Goto(&block15, phi_bb17_10);
  }

  TNode<JSReceiver> tmp53;
  TNode<JSReceiver> tmp54;
  TNode<Object> tmp55;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp53 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    std::tie(tmp54, tmp55) = GetKeysIterator_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<JSReceiver>{tmp53}).Flatten();
    ca_.Goto(&block51, tmp13, ca_.Uninitialized<JSReceiver>());
  }

  TNode<OrderedHashSet> phi_bb51_10;
  TNode<JSReceiver> phi_bb51_13;
  TNode<BoolT> tmp56;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_10, &phi_bb51_13);
    tmp56 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp56, &block49, std::vector<compiler::Node*>{phi_bb51_10, phi_bb51_13}, &block50, std::vector<compiler::Node*>{phi_bb51_10, phi_bb51_13});
  }

  TNode<OrderedHashSet> phi_bb49_10;
  TNode<JSReceiver> phi_bb49_13;
  TNode<JSReceiver> tmp57;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_10, &phi_bb49_13);
    compiler::CodeAssemblerLabel label58(&ca_);
    tmp57 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp54}, TNode<Object>{tmp55}}, TNode<Map>{tmp0}, &label58);
    ca_.Goto(&block52, phi_bb49_10, phi_bb49_13);
    if (label58.is_used()) {
      ca_.Bind(&label58);
      ca_.Goto(&block53, phi_bb49_10, phi_bb49_13);
    }
  }

  TNode<OrderedHashSet> phi_bb53_10;
  TNode<JSReceiver> phi_bb53_13;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_10, &phi_bb53_13);
    ca_.Goto(&block14, phi_bb53_10);
  }

  TNode<OrderedHashSet> phi_bb52_10;
  TNode<JSReceiver> phi_bb52_13;
  TNode<Object> tmp59;
  TNode<String> tmp60;
  TNode<OrderedHashSet> tmp61;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_10, &phi_bb52_13);
    tmp59 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp57}, TNode<Map>{tmp0});
    tmp60 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.union");
    tmp61 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb52_10}, TNode<Object>{tmp59}, TNode<String>{tmp60});
    ca_.Goto(&block51, tmp61, tmp57);
  }

  TNode<OrderedHashSet> phi_bb50_10;
  TNode<JSReceiver> phi_bb50_13;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_10, &phi_bb50_13);
    ca_.Goto(&block15, phi_bb50_10);
  }

  TNode<OrderedHashSet> phi_bb15_10;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_10);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> phi_bb14_10;
  TNode<IntPtrT> tmp62;
  TNode<Object> tmp63;
  TNode<IntPtrT> tmp64;
  TNode<Map> tmp65;
  TNode<FixedArray> tmp66;
  TNode<FixedArray> tmp67;
  TNode<BoolT> tmp68;
  TNode<BoolT> tmp69;
  TNode<IntPtrT> tmp70;
  TNode<HeapObject> tmp71;
  TNode<IntPtrT> tmp72;
  TNode<IntPtrT> tmp73;
  TNode<IntPtrT> tmp74;
  TNode<IntPtrT> tmp75;
  TNode<JSSet> tmp76;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_10);
    tmp62 = JS_SET_MAP_INDEX_0(state_);
    std::tie(tmp63, tmp64) = NativeContextSlot_NativeContext_Map_0(state_, TNode<NativeContext>{parameter0}, TNode<IntPtrT>{tmp62}).Flatten();
    tmp65 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp63, tmp64});
    tmp66 = kEmptyFixedArray_0(state_);
    tmp67 = kEmptyFixedArray_0(state_);
    tmp68 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp69 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp70 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp71 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp70}, TNode<Map>{tmp65}, TNode<BoolT>{tmp68}, TNode<BoolT>{tmp69});
    tmp72 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp71, tmp72}, tmp65);
    tmp73 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp71, tmp73}, tmp66);
    tmp74 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp71, tmp74}, tmp67);
    tmp75 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp71, tmp75}, phi_bb14_10);
    tmp76 = TORQUE_CAST(TNode<HeapObject>{tmp71});
    CodeStubAssembler(state_).Return(tmp76);
  }
}

} // namespace internal
} // namespace v8
