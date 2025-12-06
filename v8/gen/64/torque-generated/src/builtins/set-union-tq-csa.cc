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
#include "src/wasm/wasm-module.h"
#include "src/codegen/code-stub-assembler-inl.h"
// Required Builtins:
#include "torque-generated/src/builtins/set-union-tq-csa.h"
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
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
  TNode<JSAny> parameter1 = UncheckedParameter<JSAny>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSAny> parameter2 = UncheckedParameter<JSAny>(Descriptor::kOther);
  USE(parameter2);
  CodeStubAssembler(state_).CallRuntime(Runtime::kIncrementUseCounter, parameter0, CodeStubAssembler(state_).SmiConstant(v8::Isolate::kSetMethods));
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, IntPtrT, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, JSAny, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, JSAny, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, JSAny, IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, JSAny, IntPtrT, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSAny, JSAny, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, JSReceiver> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, OrderedHashSet> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, OrderedHashSet, OrderedHashSet> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
  TNode<JSAny> tmp6;
  TNode<JSAny> tmp7;
  TNode<JSSet> tmp8;
  TNode<OrderedHashSet> tmp9;
  TNode<JSSet> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    std::tie(tmp4, tmp5, tmp6, tmp7) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<JSAny>{parameter2}, "Set.prototype.union").Flatten();
    std::tie(tmp8, tmp9) = NewStableBackingTableWitness_0(state_, TNode<JSSet>{tmp1}).Flatten();
    compiler::CodeAssemblerLabel label11(&ca_);
    tmp10 = Cast_JSSetWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label11);
    ca_.Goto(&block11);
    if (label11.is_used()) {
      ca_.Bind(&label11);
      ca_.Goto(&block12);
    }
  }

  TNode<JSMap> tmp12;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    compiler::CodeAssemblerLabel label13(&ca_);
    tmp12 = Cast_JSMapWithNoCustomIteration_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<JSAny>(parameter2)}, &label13);
    ca_.Goto(&block31);
    if (label13.is_used()) {
      ca_.Bind(&label13);
      ca_.Goto(&block32);
    }
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::CodeAssemblerLabel label14(&ca_);
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<JSAny>{tmp6}, TNode<JSAny>{tmp7}}, &label14);
    ca_.Goto(&block13);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block14);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block8);
  }

  TNode<JSSet> tmp15;
  TNode<OrderedHashSet> tmp16;
  TNode<OrderedHashSet> tmp17;
  TNode<Int32T> tmp18;
  TNode<Int32T> tmp19;
  TNode<JSAny> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<FixedArrayBase> tmp22;
  TNode<OrderedHashSet> tmp23;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    std::tie(tmp15, tmp16) = NewStableBackingTableWitness_0(state_, TNode<JSSet>{tmp10}).Flatten();
    std::tie(tmp17, tmp18, tmp19, tmp20, tmp21) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp16}).Flatten();
    tmp22 = CodeStubAssembler(state_).CloneFixedArray(TNode<FixedArrayBase>{tmp9}, CodeStubAssembler::ExtractFixedArrayFlag::kFixedArrays);
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = Cast_OrderedHashSet_0(state_, TNode<HeapObject>{tmp22}, &label24);
    ca_.Goto(&block19);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    ca_.Goto(&block23, tmp23, tmp20, tmp21);
  }

  TNode<OrderedHashSet> phi_bb23_11;
  TNode<JSAny> phi_bb23_19;
  TNode<IntPtrT> phi_bb23_20;
  TNode<BoolT> tmp25;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_11, &phi_bb23_19, &phi_bb23_20);
    tmp25 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp25, &block21, std::vector<compiler::Node*>{phi_bb23_11, phi_bb23_19, phi_bb23_20}, &block22, std::vector<compiler::Node*>{phi_bb23_11, phi_bb23_19, phi_bb23_20});
  }

  TNode<OrderedHashSet> phi_bb21_11;
  TNode<JSAny> phi_bb21_19;
  TNode<IntPtrT> phi_bb21_20;
  TNode<JSAny> tmp26;
  TNode<IntPtrT> tmp27;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_11, &phi_bb21_19, &phi_bb21_20);
    compiler::CodeAssemblerLabel label28(&ca_);
    std::tie(tmp26, tmp27) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp17}, TNode<Int32T>{tmp18}, TNode<Int32T>{tmp19}, TNode<IntPtrT>{phi_bb21_20}, &label28).Flatten();
    ca_.Goto(&block27, phi_bb21_11, phi_bb21_19, phi_bb21_20, phi_bb21_20);
    if (label28.is_used()) {
      ca_.Bind(&label28);
      ca_.Goto(&block28, phi_bb21_11, phi_bb21_19, phi_bb21_20, phi_bb21_20);
    }
  }

  TNode<OrderedHashSet> phi_bb28_11;
  TNode<JSAny> phi_bb28_19;
  TNode<IntPtrT> phi_bb28_20;
  TNode<IntPtrT> phi_bb28_24;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_11, &phi_bb28_19, &phi_bb28_20, &phi_bb28_24);
    ca_.Goto(&block6, tmp9, phi_bb28_11, phi_bb28_11);
  }

  TNode<OrderedHashSet> phi_bb27_11;
  TNode<JSAny> phi_bb27_19;
  TNode<IntPtrT> phi_bb27_20;
  TNode<IntPtrT> phi_bb27_24;
  TNode<String> tmp29;
  TNode<OrderedHashSet> tmp30;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_11, &phi_bb27_19, &phi_bb27_20, &phi_bb27_24);
    tmp29 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.union");
    tmp30 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb27_11}, TNode<JSAny>{tmp26}, TNode<String>{tmp29});
    ca_.Goto(&block23, tmp30, tmp26, tmp27);
  }

  TNode<OrderedHashSet> phi_bb22_11;
  TNode<JSAny> phi_bb22_19;
  TNode<IntPtrT> phi_bb22_20;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_11, &phi_bb22_19, &phi_bb22_20);
    ca_.Goto(&block9, phi_bb22_11);
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    ca_.Goto(&block8);
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    compiler::CodeAssemblerLabel label31(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<JSAny>{tmp6}, TNode<JSAny>{tmp7}}, &label31);
    ca_.Goto(&block33);
    if (label31.is_used()) {
      ca_.Bind(&label31);
      ca_.Goto(&block34);
    }
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block8);
  }

  TNode<JSMap> tmp32;
  TNode<OrderedHashMap> tmp33;
  TNode<OrderedHashMap> tmp34;
  TNode<Int32T> tmp35;
  TNode<Int32T> tmp36;
  TNode<JSAny> tmp37;
  TNode<JSAny> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<FixedArrayBase> tmp40;
  TNode<OrderedHashSet> tmp41;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    std::tie(tmp32, tmp33) = NewStableBackingTableWitness_1(state_, TNode<JSMap>{tmp12}).Flatten();
    std::tie(tmp34, tmp35, tmp36, tmp37, tmp38, tmp39) = NewUnmodifiedOrderedHashMapIterator_0(state_, TNode<OrderedHashMap>{tmp33}).Flatten();
    tmp40 = CodeStubAssembler(state_).CloneFixedArray(TNode<FixedArrayBase>{tmp9}, CodeStubAssembler::ExtractFixedArrayFlag::kFixedArrays);
    compiler::CodeAssemblerLabel label42(&ca_);
    tmp41 = Cast_OrderedHashSet_0(state_, TNode<HeapObject>{tmp40}, &label42);
    ca_.Goto(&block39);
    if (label42.is_used()) {
      ca_.Bind(&label42);
      ca_.Goto(&block40);
    }
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    ca_.Goto(&block43, tmp41, tmp37, tmp38, tmp39);
  }

  TNode<OrderedHashSet> phi_bb43_11;
  TNode<JSAny> phi_bb43_19;
  TNode<JSAny> phi_bb43_20;
  TNode<IntPtrT> phi_bb43_21;
  TNode<BoolT> tmp43;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_11, &phi_bb43_19, &phi_bb43_20, &phi_bb43_21);
    tmp43 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp43, &block41, std::vector<compiler::Node*>{phi_bb43_11, phi_bb43_19, phi_bb43_20, phi_bb43_21}, &block42, std::vector<compiler::Node*>{phi_bb43_11, phi_bb43_19, phi_bb43_20, phi_bb43_21});
  }

  TNode<OrderedHashSet> phi_bb41_11;
  TNode<JSAny> phi_bb41_19;
  TNode<JSAny> phi_bb41_20;
  TNode<IntPtrT> phi_bb41_21;
  TNode<JSAny> tmp44;
  TNode<JSAny> tmp45;
  TNode<IntPtrT> tmp46;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_11, &phi_bb41_19, &phi_bb41_20, &phi_bb41_21);
    compiler::CodeAssemblerLabel label47(&ca_);
    std::tie(tmp44, tmp45, tmp46) = CollectionsBuiltinsAssembler(state_).NextKeyValueIndexTupleUnmodifiedTable(TNode<OrderedHashMap>{tmp34}, TNode<Int32T>{tmp35}, TNode<Int32T>{tmp36}, TNode<IntPtrT>{phi_bb41_21}, &label47).Flatten();
    ca_.Goto(&block47, phi_bb41_11, phi_bb41_19, phi_bb41_20, phi_bb41_21, phi_bb41_21);
    if (label47.is_used()) {
      ca_.Bind(&label47);
      ca_.Goto(&block48, phi_bb41_11, phi_bb41_19, phi_bb41_20, phi_bb41_21, phi_bb41_21);
    }
  }

  TNode<OrderedHashSet> phi_bb48_11;
  TNode<JSAny> phi_bb48_19;
  TNode<JSAny> phi_bb48_20;
  TNode<IntPtrT> phi_bb48_21;
  TNode<IntPtrT> phi_bb48_25;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_11, &phi_bb48_19, &phi_bb48_20, &phi_bb48_21, &phi_bb48_25);
    ca_.Goto(&block6, tmp9, phi_bb48_11, phi_bb48_11);
  }

  TNode<OrderedHashSet> phi_bb47_11;
  TNode<JSAny> phi_bb47_19;
  TNode<JSAny> phi_bb47_20;
  TNode<IntPtrT> phi_bb47_21;
  TNode<IntPtrT> phi_bb47_25;
  TNode<String> tmp48;
  TNode<OrderedHashSet> tmp49;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_11, &phi_bb47_19, &phi_bb47_20, &phi_bb47_21, &phi_bb47_25);
    tmp48 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.union");
    tmp49 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb47_11}, TNode<JSAny>{tmp44}, TNode<String>{tmp48});
    ca_.Goto(&block43, tmp49, tmp44, tmp45, tmp46);
  }

  TNode<OrderedHashSet> phi_bb42_11;
  TNode<JSAny> phi_bb42_19;
  TNode<JSAny> phi_bb42_20;
  TNode<IntPtrT> phi_bb42_21;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_11, &phi_bb42_19, &phi_bb42_20, &phi_bb42_21);
    ca_.Goto(&block9, phi_bb42_11);
  }

  TNode<OrderedHashSet> phi_bb9_11;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_11);
    ca_.Goto(&block7, tmp9, phi_bb9_11);
  }

  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> tmp50;
  TNode<JSReceiver> tmp51;
  TNode<JSAny> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<Object> tmp54;
  TNode<HeapObject> tmp55;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp50 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7});
    std::tie(tmp51, tmp52) = GetKeysIterator_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp4}, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>>{tmp50}).Flatten();
    tmp53 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp54 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp8, tmp53});
    compiler::CodeAssemblerLabel label56(&ca_);
    tmp55 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp54}, &label56);
    ca_.Goto(&block53);
    if (label56.is_used()) {
      ca_.Bind(&label56);
      ca_.Goto(&block54);
    }
  }

  if (block54.is_used()) {
    ca_.Bind(&block54);
    ca_.Goto(&block51);
  }

  TNode<OrderedHashSet> tmp57;
  if (block53.is_used()) {
    ca_.Bind(&block53);
    compiler::CodeAssemblerLabel label58(&ca_);
    tmp57 = Cast_OrderedHashSet_0(state_, TNode<HeapObject>{tmp55}, &label58);
    ca_.Goto(&block56);
    if (label58.is_used()) {
      ca_.Bind(&label58);
      ca_.Goto(&block57);
    }
  }

  if (block57.is_used()) {
    ca_.Bind(&block57);
    ca_.Goto(&block51);
  }

  TNode<OrderedHashSet> tmp59;
  TNode<FixedArrayBase> tmp60;
  TNode<OrderedHashSet> tmp61;
  if (block56.is_used()) {
    ca_.Bind(&block56);
    tmp59 = (TNode<OrderedHashSet>{tmp57});
    tmp60 = CodeStubAssembler(state_).CloneFixedArray(TNode<FixedArrayBase>{tmp59}, CodeStubAssembler::ExtractFixedArrayFlag::kFixedArrays);
    compiler::CodeAssemblerLabel label62(&ca_);
    tmp61 = Cast_OrderedHashSet_0(state_, TNode<HeapObject>{tmp60}, &label62);
    ca_.Goto(&block61);
    if (label62.is_used()) {
      ca_.Bind(&label62);
      ca_.Goto(&block62);
    }
  }

  if (block51.is_used()) {
    ca_.Bind(&block51);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block62.is_used()) {
    ca_.Bind(&block62);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block61.is_used()) {
    ca_.Bind(&block61);
    ca_.Goto(&block65, tmp61, ca_.Uninitialized<JSReceiver>());
  }

  TNode<OrderedHashSet> phi_bb65_11;
  TNode<JSReceiver> phi_bb65_14;
  TNode<BoolT> tmp63;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_11, &phi_bb65_14);
    tmp63 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp63, &block63, std::vector<compiler::Node*>{phi_bb65_11, phi_bb65_14}, &block64, std::vector<compiler::Node*>{phi_bb65_11, phi_bb65_14});
  }

  TNode<OrderedHashSet> phi_bb63_11;
  TNode<JSReceiver> phi_bb63_14;
  TNode<JSReceiver> tmp64;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_11, &phi_bb63_14);
    compiler::CodeAssemblerLabel label65(&ca_);
    tmp64 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp51}, TNode<JSAny>{tmp52}}, TNode<Map>{tmp0}, &label65);
    ca_.Goto(&block68, phi_bb63_11, phi_bb63_14);
    if (label65.is_used()) {
      ca_.Bind(&label65);
      ca_.Goto(&block69, phi_bb63_11, phi_bb63_14);
    }
  }

  TNode<OrderedHashSet> phi_bb69_11;
  TNode<JSReceiver> phi_bb69_14;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_11, &phi_bb69_14);
    ca_.Goto(&block6, tmp59, phi_bb69_11, phi_bb69_11);
  }

  TNode<OrderedHashSet> phi_bb68_11;
  TNode<JSReceiver> phi_bb68_14;
  TNode<JSAny> tmp66;
  TNode<String> tmp67;
  TNode<OrderedHashSet> tmp68;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_11, &phi_bb68_14);
    tmp66 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp64}, TNode<Map>{tmp0});
    tmp67 = FromConstexpr_String_constexpr_string_0(state_, "Set.prototype.union");
    tmp68 = CollectionsBuiltinsAssembler(state_).AddToSetTable(TNode<Context>{parameter0}, TNode<OrderedHashSet>{phi_bb68_11}, TNode<JSAny>{tmp66}, TNode<String>{tmp67});
    ca_.Goto(&block65, tmp68, tmp64);
  }

  TNode<OrderedHashSet> phi_bb64_11;
  TNode<JSReceiver> phi_bb64_14;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_11, &phi_bb64_14);
    ca_.Goto(&block7, tmp59, phi_bb64_11);
  }

  TNode<OrderedHashSet> phi_bb7_10;
  TNode<OrderedHashSet> phi_bb7_11;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_10, &phi_bb7_11);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<OrderedHashSet> phi_bb6_10;
  TNode<OrderedHashSet> phi_bb6_11;
  TNode<OrderedHashSet> phi_bb6_12;
  TNode<IntPtrT> tmp69;
  TNode<Union<HeapObject, TaggedIndex>> tmp70;
  TNode<IntPtrT> tmp71;
  TNode<Map> tmp72;
  TNode<FixedArray> tmp73;
  TNode<FixedArray> tmp74;
  TNode<BoolT> tmp75;
  TNode<BoolT> tmp76;
  TNode<IntPtrT> tmp77;
  TNode<HeapObject> tmp78;
  TNode<IntPtrT> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<JSSet> tmp83;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_10, &phi_bb6_11, &phi_bb6_12);
    tmp69 = JS_SET_MAP_INDEX_0(state_);
    std::tie(tmp70, tmp71) = NativeContextSlot_NativeContext_Map_0(state_, TNode<NativeContext>{parameter0}, TNode<IntPtrT>{tmp69}).Flatten();
    tmp72 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp70, tmp71});
    tmp73 = kEmptyFixedArray_0(state_);
    tmp74 = kEmptyFixedArray_0(state_);
    tmp75 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp76 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp77 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp78 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp77}, TNode<Map>{tmp72}, TNode<BoolT>{tmp75}, TNode<BoolT>{tmp76});
    tmp79 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp78, tmp79}, tmp72);
    tmp80 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Union<FixedArrayBase, PropertyArray, Smi, SwissNameDictionary>>(CodeStubAssembler::Reference{tmp78, tmp80}, tmp73);
    tmp81 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp78, tmp81}, tmp74);
    tmp82 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp78, tmp82}, phi_bb6_12);
    tmp83 = TORQUE_CAST(TNode<HeapObject>{tmp78});
    CodeStubAssembler(state_).Return(tmp83);
  }
}

} // namespace internal
} // namespace v8
