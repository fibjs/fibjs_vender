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
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<OrderedHashSet, Object, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
  TNode<JSSet> tmp7;
  TNode<OrderedHashSet> tmp8;
  TNode<Int32T> tmp9;
  TNode<Number> tmp10;
  TNode<BoolT> tmp11;
  TNode<BoolT> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    std::tie(tmp3, tmp4, tmp5, tmp6) = GetSetRecord_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, "Set.prototype.isSubsetOf").Flatten();
    std::tie(tmp7, tmp8) = NewStableBackingTableWitness_0(state_, TNode<JSSet>{tmp0}).Flatten();
    tmp9 = LoadOrderedHashTableMetadata_0(state_, TNode<FixedArray>{tmp8}, OrderedHashSet::NumberOfElementsIndex());
    tmp10 = FromConstexpr_Number_constexpr_float64_0(state_, V8_INFINITY);
    tmp11 = IsNumberEqual_0(state_, TNode<Number>{tmp4}, TNode<Number>{tmp10});
    tmp12 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp11});
    ca_.Branch(tmp12, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp13;
  TNode<BoolT> tmp14;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp13 = Convert_int32_Number_0(state_, TNode<Number>{tmp4});
    tmp14 = CodeStubAssembler(state_).Int32GreaterThan(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp13});
    ca_.Goto(&block10, tmp14);
  }

  TNode<BoolT> tmp15;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp15 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block10, tmp15);
  }

  TNode<BoolT> phi_bb10_12;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_12);
    ca_.Branch(phi_bb10_12, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
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
    CheckSetRecordHasJSSetMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp3}, TNode<Number>{tmp4}, TNode<Object>{tmp5}, TNode<Object>{tmp6}}, &label21);
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
    std::tie(tmp24, tmp25, tmp26, tmp27, tmp28) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp8}).Flatten();
    ca_.Goto(&block24, tmp27, tmp28);
  }

  TNode<Object> phi_bb24_18;
  TNode<IntPtrT> phi_bb24_19;
  TNode<BoolT> tmp29;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_18, &phi_bb24_19);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp29, &block22, std::vector<compiler::Node*>{phi_bb24_18, phi_bb24_19}, &block23, std::vector<compiler::Node*>{phi_bb24_18, phi_bb24_19});
  }

  TNode<Object> phi_bb22_18;
  TNode<IntPtrT> phi_bb22_19;
  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_18, &phi_bb22_19);
    compiler::CodeAssemblerLabel label32(&ca_);
    std::tie(tmp30, tmp31) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp24}, TNode<Int32T>{tmp25}, TNode<Int32T>{tmp26}, TNode<IntPtrT>{phi_bb22_19}, &label32).Flatten();
    ca_.Goto(&block26, phi_bb22_18, phi_bb22_19, phi_bb22_19);
    if (label32.is_used()) {
      ca_.Bind(&label32);
      ca_.Goto(&block27, phi_bb22_18, phi_bb22_19, phi_bb22_19);
    }
  }

  TNode<Object> phi_bb27_18;
  TNode<IntPtrT> phi_bb27_19;
  TNode<IntPtrT> phi_bb27_23;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_18, &phi_bb27_19, &phi_bb27_23);
    ca_.Goto(&block12);
  }

  TNode<Object> phi_bb26_18;
  TNode<IntPtrT> phi_bb26_19;
  TNode<IntPtrT> phi_bb26_23;
  TNode<BoolT> tmp33;
  TNode<BoolT> tmp34;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_18, &phi_bb26_19, &phi_bb26_23);
    tmp33 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashSet>{tmp23}, TNode<Object>{tmp30});
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

  TNode<Object> phi_bb23_18;
  TNode<IntPtrT> phi_bb23_19;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_18, &phi_bb23_19);
    ca_.Goto(&block15);
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block14);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    compiler::CodeAssemblerLabel label36(&ca_);
    CheckSetRecordHasJSMapMethods_0(state_, TorqueStructSetRecord{TNode<JSReceiver>{tmp3}, TNode<Number>{tmp4}, TNode<Object>{tmp5}, TNode<Object>{tmp6}}, &label36);
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
  TNode<OrderedHashSet> tmp39;
  TNode<Int32T> tmp40;
  TNode<Int32T> tmp41;
  TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    std::tie(tmp37, tmp38) = NewStableBackingTableWitness_1(state_, TNode<JSMap>{tmp19}).Flatten();
    std::tie(tmp39, tmp40, tmp41, tmp42, tmp43) = NewUnmodifiedOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp8}).Flatten();
    ca_.Goto(&block40, tmp42, tmp43);
  }

  TNode<Object> phi_bb40_18;
  TNode<IntPtrT> phi_bb40_19;
  TNode<BoolT> tmp44;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_18, &phi_bb40_19);
    tmp44 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp44, &block38, std::vector<compiler::Node*>{phi_bb40_18, phi_bb40_19}, &block39, std::vector<compiler::Node*>{phi_bb40_18, phi_bb40_19});
  }

  TNode<Object> phi_bb38_18;
  TNode<IntPtrT> phi_bb38_19;
  TNode<Object> tmp45;
  TNode<IntPtrT> tmp46;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_18, &phi_bb38_19);
    compiler::CodeAssemblerLabel label47(&ca_);
    std::tie(tmp45, tmp46) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPairUnmodifiedTable(TNode<OrderedHashSet>{tmp39}, TNode<Int32T>{tmp40}, TNode<Int32T>{tmp41}, TNode<IntPtrT>{phi_bb38_19}, &label47).Flatten();
    ca_.Goto(&block42, phi_bb38_18, phi_bb38_19, phi_bb38_19);
    if (label47.is_used()) {
      ca_.Bind(&label47);
      ca_.Goto(&block43, phi_bb38_18, phi_bb38_19, phi_bb38_19);
    }
  }

  TNode<Object> phi_bb43_18;
  TNode<IntPtrT> phi_bb43_19;
  TNode<IntPtrT> phi_bb43_23;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_18, &phi_bb43_19, &phi_bb43_23);
    ca_.Goto(&block12);
  }

  TNode<Object> phi_bb42_18;
  TNode<IntPtrT> phi_bb42_19;
  TNode<IntPtrT> phi_bb42_23;
  TNode<BoolT> tmp48;
  TNode<BoolT> tmp49;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_18, &phi_bb42_19, &phi_bb42_23);
    tmp48 = CollectionsBuiltinsAssembler(state_).TableHasKey(TNode<Context>{parameter0}, TNode<OrderedHashMap>{tmp38}, TNode<Object>{tmp45});
    tmp49 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp48});
    ca_.Branch(tmp49, &block44, std::vector<compiler::Node*>{}, &block45, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp50;
  if (block44.is_used()) {
    ca_.Bind(&block44);
    tmp50 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp50);
  }

  if (block45.is_used()) {
    ca_.Bind(&block45);
    ca_.Goto(&block40, tmp45, tmp46);
  }

  TNode<Object> phi_bb39_18;
  TNode<IntPtrT> phi_bb39_19;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_18, &phi_bb39_19);
    ca_.Goto(&block15);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block13);
  }

  TNode<OrderedHashSet> tmp51;
  TNode<Object> tmp52;
  TNode<IntPtrT> tmp53;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    std::tie(tmp51, tmp52, tmp53) = NewOrderedHashSetIterator_0(state_, TNode<OrderedHashSet>{tmp8}).Flatten();
    ca_.Goto(&block50, tmp51, tmp52, tmp53);
  }

  TNode<OrderedHashSet> phi_bb50_11;
  TNode<Object> phi_bb50_12;
  TNode<IntPtrT> phi_bb50_13;
  TNode<BoolT> tmp54;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_11, &phi_bb50_12, &phi_bb50_13);
    tmp54 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp54, &block48, std::vector<compiler::Node*>{phi_bb50_11, phi_bb50_12, phi_bb50_13}, &block49, std::vector<compiler::Node*>{phi_bb50_11, phi_bb50_12, phi_bb50_13});
  }

  TNode<OrderedHashSet> phi_bb48_11;
  TNode<Object> phi_bb48_12;
  TNode<IntPtrT> phi_bb48_13;
  TNode<OrderedHashSet> tmp55;
  TNode<IntPtrT> tmp56;
  TNode<Object> tmp57;
  TNode<IntPtrT> tmp58;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_11, &phi_bb48_12, &phi_bb48_13);
    std::tie(tmp55, tmp56) = CollectionsBuiltinsAssembler(state_).TransitionOrderedHashSetNoUpdate(TNode<OrderedHashSet>{phi_bb48_11}, TNode<IntPtrT>{phi_bb48_13}).Flatten();
    compiler::CodeAssemblerLabel label59(&ca_);
    std::tie(tmp57, tmp58) = CollectionsBuiltinsAssembler(state_).NextKeyIndexPair(TNode<OrderedHashSet>{tmp55}, TNode<IntPtrT>{tmp56}, &label59).Flatten();
    ca_.Goto(&block52, phi_bb48_12);
    if (label59.is_used()) {
      ca_.Bind(&label59);
      ca_.Goto(&block53, phi_bb48_12);
    }
  }

  TNode<Object> phi_bb53_12;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_12);
    ca_.Goto(&block12);
  }

  TNode<Object> phi_bb52_12;
  TNode<Object> tmp60;
  TNode<BoolT> tmp61;
  TNode<BoolT> tmp62;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_12);
    tmp60 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp5}, TNode<Object>{tmp3}, TNode<Object>{tmp57});
    tmp61 = ToBoolean_0(state_, TNode<Object>{tmp60});
    tmp62 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp61});
    ca_.Branch(tmp62, &block54, std::vector<compiler::Node*>{}, &block55, std::vector<compiler::Node*>{});
  }

  TNode<False> tmp63;
  if (block54.is_used()) {
    ca_.Bind(&block54);
    tmp63 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp63);
  }

  if (block55.is_used()) {
    ca_.Bind(&block55);
    ca_.Goto(&block50, tmp55, tmp57, tmp58);
  }

  TNode<OrderedHashSet> phi_bb49_11;
  TNode<Object> phi_bb49_12;
  TNode<IntPtrT> phi_bb49_13;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_11, &phi_bb49_12, &phi_bb49_13);
    ca_.Goto(&block13);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<True> tmp64;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp64 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp64);
  }
}

} // namespace internal
} // namespace v8
