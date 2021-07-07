#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/heap/factory-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/source-text-module.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "torque-generated/src/builtins/arguments-tq-csa.h"
#include "torque-generated/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-find-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-of-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-some-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/bigint-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/extras-utils-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/math-tq-csa.h"
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/object-tq-csa.h"
#include "torque-generated/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-tq-csa.h"
#include "torque-generated/src/builtins/reflect-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-source-tq-csa.h"
#include "torque-generated/src/builtins/regexp-test-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/string-tq-csa.h"
#include "torque-generated/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/src/builtins/string-html-tq-csa.h"
#include "torque-generated/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/src/builtins/string-pad-tq-csa.h"
#include "torque-generated/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"

namespace v8 {
namespace internal {

void RegExpReplaceCallableNoExplicitCaptures_322(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, HeapObject> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, HeapObject, String> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_matchesElements, p_matchesLength, p_string, p_replaceFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArray> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<String> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 31);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 32);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<FixedArray> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<String> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp13}, compiler::TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp14, &block2, &block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<FixedArray> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<String> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 33);
    compiler::TNode<IntPtrT> tmp22 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp22);
    compiler::TNode<IntPtrT> tmp23 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp23);
    compiler::TNode<Smi>tmp24 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp16, tmp23});
    compiler::TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp24});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp26;
    USE(tmp26);
    tmp26 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp21});
    compiler::TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp25});
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp26}, compiler::TNode<UintPtrT>{tmp27});
    ca_.Branch(tmp28, &block10, &block11, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp16, tmp22, tmp25, tmp21, tmp21, tmp16, tmp22, tmp25, tmp21, tmp21);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<FixedArray> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<String> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<FixedArray> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<HeapObject> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    ca_.Bind(&block10, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp46;
    USE(tmp46);
    tmp46 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp45}, compiler::TNode<IntPtrT>{tmp46});
    compiler::TNode<IntPtrT> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp42}, compiler::TNode<IntPtrT>{tmp47});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp49;
    USE(tmp49);
    compiler::TNode<IntPtrT> tmp50;
    USE(tmp50);
    std::tie(tmp49, tmp50) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp41}, compiler::TNode<IntPtrT>{tmp48}).Flatten();
    ca_.Goto(&block9, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp49, tmp50);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<FixedArray> tmp52;
    compiler::TNode<IntPtrT> tmp53;
    compiler::TNode<String> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<FixedArray> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<HeapObject> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    compiler::TNode<IntPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    ca_.Bind(&block11, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block8, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<FixedArray> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<String> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    compiler::TNode<FixedArray> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    compiler::TNode<HeapObject> tmp80;
    compiler::TNode<IntPtrT> tmp81;
    compiler::TNode<IntPtrT> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<HeapObject> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    ca_.Bind(&block9, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block7, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp85, tmp86);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp87;
    compiler::TNode<FixedArray> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<String> tmp90;
    compiler::TNode<JSReceiver> tmp91;
    compiler::TNode<Smi> tmp92;
    compiler::TNode<IntPtrT> tmp93;
    compiler::TNode<FixedArray> tmp94;
    compiler::TNode<IntPtrT> tmp95;
    compiler::TNode<IntPtrT> tmp96;
    compiler::TNode<IntPtrT> tmp97;
    compiler::TNode<IntPtrT> tmp98;
    ca_.Bind(&block8, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp99;
    compiler::TNode<FixedArray> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    compiler::TNode<String> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<IntPtrT> tmp105;
    compiler::TNode<FixedArray> tmp106;
    compiler::TNode<IntPtrT> tmp107;
    compiler::TNode<IntPtrT> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<IntPtrT> tmp110;
    compiler::TNode<HeapObject> tmp111;
    compiler::TNode<IntPtrT> tmp112;
    ca_.Bind(&block7, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    ca_.Goto(&block6, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<FixedArray> tmp114;
    compiler::TNode<IntPtrT> tmp115;
    compiler::TNode<String> tmp116;
    compiler::TNode<JSReceiver> tmp117;
    compiler::TNode<Smi> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<FixedArray> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<IntPtrT> tmp122;
    compiler::TNode<IntPtrT> tmp123;
    compiler::TNode<IntPtrT> tmp124;
    compiler::TNode<HeapObject> tmp125;
    compiler::TNode<IntPtrT> tmp126;
    ca_.Bind(&block6, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 33);
    compiler::TNode<Object>tmp127 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp125, tmp126});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 35);
    compiler::TNode<Smi> tmp128;
    USE(tmp128);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp128 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp127}, &label0);
    ca_.Goto(&block15, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp127, tmp127, tmp128);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp127, tmp127);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp129;
    compiler::TNode<FixedArray> tmp130;
    compiler::TNode<IntPtrT> tmp131;
    compiler::TNode<String> tmp132;
    compiler::TNode<JSReceiver> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<IntPtrT> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<Object> tmp137;
    ca_.Bind(&block16, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.Goto(&block14, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp138;
    compiler::TNode<FixedArray> tmp139;
    compiler::TNode<IntPtrT> tmp140;
    compiler::TNode<String> tmp141;
    compiler::TNode<JSReceiver> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<IntPtrT> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<Smi> tmp147;
    ca_.Bind(&block15, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 39);
    compiler::TNode<Smi> tmp148;
    USE(tmp148);
    tmp148 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp149;
    USE(tmp149);
    tmp149 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp147}, compiler::TNode<Smi>{tmp148});
    ca_.Branch(tmp149, &block17, &block18, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp147);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<FixedArray> tmp151;
    compiler::TNode<IntPtrT> tmp152;
    compiler::TNode<String> tmp153;
    compiler::TNode<JSReceiver> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<IntPtrT> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<Smi> tmp158;
    ca_.Bind(&block17, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 43);
    compiler::TNode<IntPtrT> tmp159;
    USE(tmp159);
    tmp159 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp158});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 44);
    compiler::TNode<IntPtrT> tmp160;
    USE(tmp160);
    tmp160 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 11);
    compiler::TNode<IntPtrT> tmp161;
    USE(tmp161);
    tmp161 = CodeStubAssembler(state_).WordSar(compiler::TNode<IntPtrT>{tmp159}, compiler::TNode<IntPtrT>{tmp160});
    compiler::TNode<IntPtrT> tmp162;
    USE(tmp162);
    tmp162 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0x7FF);
    compiler::TNode<IntPtrT> tmp163;
    USE(tmp163);
    tmp163 = CodeStubAssembler(state_).WordAnd(compiler::TNode<IntPtrT>{tmp159}, compiler::TNode<IntPtrT>{tmp162});
    compiler::TNode<IntPtrT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp161}, compiler::TNode<IntPtrT>{tmp163});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 45);
    compiler::TNode<Smi> tmp165;
    USE(tmp165);
    tmp165 = Convert5ATSmi8ATintptr_184(state_, compiler::TNode<IntPtrT>{tmp164});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 39);
    ca_.Goto(&block19, tmp150, tmp151, tmp152, tmp153, tmp154, tmp165, tmp156, tmp157, tmp158);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp166;
    compiler::TNode<FixedArray> tmp167;
    compiler::TNode<IntPtrT> tmp168;
    compiler::TNode<String> tmp169;
    compiler::TNode<JSReceiver> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<IntPtrT> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<Smi> tmp174;
    ca_.Bind(&block18, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 49);
    compiler::TNode<IntPtrT> tmp175 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp175);
    compiler::TNode<IntPtrT> tmp176 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp176);
    compiler::TNode<Smi>tmp177 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp167, tmp176});
    compiler::TNode<IntPtrT> tmp178;
    USE(tmp178);
    tmp178 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp177});
    compiler::TNode<IntPtrT> tmp179;
    USE(tmp179);
    tmp179 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp180;
    USE(tmp180);
    tmp180 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp172}, compiler::TNode<IntPtrT>{tmp179});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp181;
    USE(tmp181);
    tmp181 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp180});
    compiler::TNode<UintPtrT> tmp182;
    USE(tmp182);
    tmp182 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp178});
    compiler::TNode<BoolT> tmp183;
    USE(tmp183);
    tmp183 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp181}, compiler::TNode<UintPtrT>{tmp182});
    ca_.Branch(tmp183, &block24, &block25, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp180, tmp173, tmp174, tmp167, tmp175, tmp178, tmp180, tmp180, tmp167, tmp175, tmp178, tmp180, tmp180);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp184;
    compiler::TNode<FixedArray> tmp185;
    compiler::TNode<IntPtrT> tmp186;
    compiler::TNode<String> tmp187;
    compiler::TNode<JSReceiver> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<IntPtrT> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<Smi> tmp192;
    compiler::TNode<FixedArray> tmp193;
    compiler::TNode<IntPtrT> tmp194;
    compiler::TNode<IntPtrT> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<IntPtrT> tmp197;
    compiler::TNode<HeapObject> tmp198;
    compiler::TNode<IntPtrT> tmp199;
    compiler::TNode<IntPtrT> tmp200;
    compiler::TNode<IntPtrT> tmp201;
    compiler::TNode<IntPtrT> tmp202;
    ca_.Bind(&block24, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp203;
    USE(tmp203);
    tmp203 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp204;
    USE(tmp204);
    tmp204 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp202}, compiler::TNode<IntPtrT>{tmp203});
    compiler::TNode<IntPtrT> tmp205;
    USE(tmp205);
    tmp205 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp199}, compiler::TNode<IntPtrT>{tmp204});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp206;
    USE(tmp206);
    compiler::TNode<IntPtrT> tmp207;
    USE(tmp207);
    std::tie(tmp206, tmp207) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp198}, compiler::TNode<IntPtrT>{tmp205}).Flatten();
    ca_.Goto(&block23, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp206, tmp207);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp208;
    compiler::TNode<FixedArray> tmp209;
    compiler::TNode<IntPtrT> tmp210;
    compiler::TNode<String> tmp211;
    compiler::TNode<JSReceiver> tmp212;
    compiler::TNode<Smi> tmp213;
    compiler::TNode<IntPtrT> tmp214;
    compiler::TNode<Object> tmp215;
    compiler::TNode<Smi> tmp216;
    compiler::TNode<FixedArray> tmp217;
    compiler::TNode<IntPtrT> tmp218;
    compiler::TNode<IntPtrT> tmp219;
    compiler::TNode<IntPtrT> tmp220;
    compiler::TNode<IntPtrT> tmp221;
    compiler::TNode<HeapObject> tmp222;
    compiler::TNode<IntPtrT> tmp223;
    compiler::TNode<IntPtrT> tmp224;
    compiler::TNode<IntPtrT> tmp225;
    compiler::TNode<IntPtrT> tmp226;
    ca_.Bind(&block25, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block22, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp227;
    compiler::TNode<FixedArray> tmp228;
    compiler::TNode<IntPtrT> tmp229;
    compiler::TNode<String> tmp230;
    compiler::TNode<JSReceiver> tmp231;
    compiler::TNode<Smi> tmp232;
    compiler::TNode<IntPtrT> tmp233;
    compiler::TNode<Object> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<FixedArray> tmp236;
    compiler::TNode<IntPtrT> tmp237;
    compiler::TNode<IntPtrT> tmp238;
    compiler::TNode<IntPtrT> tmp239;
    compiler::TNode<IntPtrT> tmp240;
    compiler::TNode<HeapObject> tmp241;
    compiler::TNode<IntPtrT> tmp242;
    compiler::TNode<IntPtrT> tmp243;
    compiler::TNode<IntPtrT> tmp244;
    compiler::TNode<IntPtrT> tmp245;
    compiler::TNode<HeapObject> tmp246;
    compiler::TNode<IntPtrT> tmp247;
    ca_.Bind(&block23, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block21, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp246, tmp247);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp248;
    compiler::TNode<FixedArray> tmp249;
    compiler::TNode<IntPtrT> tmp250;
    compiler::TNode<String> tmp251;
    compiler::TNode<JSReceiver> tmp252;
    compiler::TNode<Smi> tmp253;
    compiler::TNode<IntPtrT> tmp254;
    compiler::TNode<Object> tmp255;
    compiler::TNode<Smi> tmp256;
    compiler::TNode<FixedArray> tmp257;
    compiler::TNode<IntPtrT> tmp258;
    compiler::TNode<IntPtrT> tmp259;
    compiler::TNode<IntPtrT> tmp260;
    compiler::TNode<IntPtrT> tmp261;
    ca_.Bind(&block22, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp262;
    compiler::TNode<FixedArray> tmp263;
    compiler::TNode<IntPtrT> tmp264;
    compiler::TNode<String> tmp265;
    compiler::TNode<JSReceiver> tmp266;
    compiler::TNode<Smi> tmp267;
    compiler::TNode<IntPtrT> tmp268;
    compiler::TNode<Object> tmp269;
    compiler::TNode<Smi> tmp270;
    compiler::TNode<FixedArray> tmp271;
    compiler::TNode<IntPtrT> tmp272;
    compiler::TNode<IntPtrT> tmp273;
    compiler::TNode<IntPtrT> tmp274;
    compiler::TNode<IntPtrT> tmp275;
    compiler::TNode<HeapObject> tmp276;
    compiler::TNode<IntPtrT> tmp277;
    ca_.Bind(&block21, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277);
    ca_.Goto(&block20, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp278;
    compiler::TNode<FixedArray> tmp279;
    compiler::TNode<IntPtrT> tmp280;
    compiler::TNode<String> tmp281;
    compiler::TNode<JSReceiver> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<IntPtrT> tmp284;
    compiler::TNode<Object> tmp285;
    compiler::TNode<Smi> tmp286;
    compiler::TNode<FixedArray> tmp287;
    compiler::TNode<IntPtrT> tmp288;
    compiler::TNode<IntPtrT> tmp289;
    compiler::TNode<IntPtrT> tmp290;
    compiler::TNode<IntPtrT> tmp291;
    compiler::TNode<HeapObject> tmp292;
    compiler::TNode<IntPtrT> tmp293;
    ca_.Bind(&block20, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 49);
    compiler::TNode<Object>tmp294 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp292, tmp293});
    compiler::TNode<Smi> tmp295;
    USE(tmp295);
    tmp295 = UnsafeCast5ATSmi_1344(state_, compiler::TNode<Context>{tmp278}, compiler::TNode<Object>{tmp294});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 50);
    compiler::TNode<Smi> tmp296;
    USE(tmp296);
    tmp296 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp295}, compiler::TNode<Smi>{tmp286});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 39);
    ca_.Goto(&block19, tmp278, tmp279, tmp280, tmp281, tmp282, tmp296, tmp284, tmp285, tmp286);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp297;
    compiler::TNode<FixedArray> tmp298;
    compiler::TNode<IntPtrT> tmp299;
    compiler::TNode<String> tmp300;
    compiler::TNode<JSReceiver> tmp301;
    compiler::TNode<Smi> tmp302;
    compiler::TNode<IntPtrT> tmp303;
    compiler::TNode<Object> tmp304;
    compiler::TNode<Smi> tmp305;
    ca_.Bind(&block19, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 35);
    ca_.Goto(&block13, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp306;
    compiler::TNode<FixedArray> tmp307;
    compiler::TNode<IntPtrT> tmp308;
    compiler::TNode<String> tmp309;
    compiler::TNode<JSReceiver> tmp310;
    compiler::TNode<Smi> tmp311;
    compiler::TNode<IntPtrT> tmp312;
    compiler::TNode<Object> tmp313;
    ca_.Bind(&block14, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 55);
    compiler::TNode<String> tmp314;
    USE(tmp314);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp314 = Cast6String_119(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp313)}, &label0);
    ca_.Goto(&block29, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, ca_.UncheckedCast<HeapObject>(tmp313), tmp314);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block30, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, ca_.UncheckedCast<HeapObject>(tmp313));
    }
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp315;
    compiler::TNode<FixedArray> tmp316;
    compiler::TNode<IntPtrT> tmp317;
    compiler::TNode<String> tmp318;
    compiler::TNode<JSReceiver> tmp319;
    compiler::TNode<Smi> tmp320;
    compiler::TNode<IntPtrT> tmp321;
    compiler::TNode<Object> tmp322;
    compiler::TNode<HeapObject> tmp323;
    ca_.Bind(&block30, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323);
    ca_.Goto(&block28, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp324;
    compiler::TNode<FixedArray> tmp325;
    compiler::TNode<IntPtrT> tmp326;
    compiler::TNode<String> tmp327;
    compiler::TNode<JSReceiver> tmp328;
    compiler::TNode<Smi> tmp329;
    compiler::TNode<IntPtrT> tmp330;
    compiler::TNode<Object> tmp331;
    compiler::TNode<HeapObject> tmp332;
    compiler::TNode<String> tmp333;
    ca_.Bind(&block29, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 57);
    compiler::TNode<Oddball> tmp334;
    USE(tmp334);
    tmp334 = Undefined_64(state_);
    compiler::TNode<Object> tmp335;
    USE(tmp335);
    tmp335 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp324}, compiler::TNode<JSReceiver>{tmp328}, compiler::TNode<Object>{tmp334}, compiler::TNode<Object>{tmp333}, compiler::TNode<Object>{tmp329}, compiler::TNode<Object>{tmp327});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 58);
    compiler::TNode<String> tmp336;
    USE(tmp336);
    tmp336 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp324}, compiler::TNode<Object>{tmp335});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 59);
    compiler::TNode<IntPtrT> tmp337 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp337);
    compiler::TNode<IntPtrT> tmp338 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp338);
    compiler::TNode<Smi>tmp339 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp325, tmp338});
    compiler::TNode<IntPtrT> tmp340;
    USE(tmp340);
    tmp340 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp339});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp341;
    USE(tmp341);
    tmp341 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp330});
    compiler::TNode<UintPtrT> tmp342;
    USE(tmp342);
    tmp342 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp340});
    compiler::TNode<BoolT> tmp343;
    USE(tmp343);
    tmp343 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp341}, compiler::TNode<UintPtrT>{tmp342});
    ca_.Branch(tmp343, &block35, &block36, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp333, tmp335, tmp336, tmp325, tmp337, tmp340, tmp330, tmp330, tmp325, tmp337, tmp340, tmp330, tmp330);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp344;
    compiler::TNode<FixedArray> tmp345;
    compiler::TNode<IntPtrT> tmp346;
    compiler::TNode<String> tmp347;
    compiler::TNode<JSReceiver> tmp348;
    compiler::TNode<Smi> tmp349;
    compiler::TNode<IntPtrT> tmp350;
    compiler::TNode<Object> tmp351;
    compiler::TNode<String> tmp352;
    compiler::TNode<Object> tmp353;
    compiler::TNode<String> tmp354;
    compiler::TNode<FixedArray> tmp355;
    compiler::TNode<IntPtrT> tmp356;
    compiler::TNode<IntPtrT> tmp357;
    compiler::TNode<IntPtrT> tmp358;
    compiler::TNode<IntPtrT> tmp359;
    compiler::TNode<HeapObject> tmp360;
    compiler::TNode<IntPtrT> tmp361;
    compiler::TNode<IntPtrT> tmp362;
    compiler::TNode<IntPtrT> tmp363;
    compiler::TNode<IntPtrT> tmp364;
    ca_.Bind(&block35, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp365;
    USE(tmp365);
    tmp365 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp366;
    USE(tmp366);
    tmp366 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp364}, compiler::TNode<IntPtrT>{tmp365});
    compiler::TNode<IntPtrT> tmp367;
    USE(tmp367);
    tmp367 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp361}, compiler::TNode<IntPtrT>{tmp366});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp368;
    USE(tmp368);
    compiler::TNode<IntPtrT> tmp369;
    USE(tmp369);
    std::tie(tmp368, tmp369) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp360}, compiler::TNode<IntPtrT>{tmp367}).Flatten();
    ca_.Goto(&block34, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp368, tmp369);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp370;
    compiler::TNode<FixedArray> tmp371;
    compiler::TNode<IntPtrT> tmp372;
    compiler::TNode<String> tmp373;
    compiler::TNode<JSReceiver> tmp374;
    compiler::TNode<Smi> tmp375;
    compiler::TNode<IntPtrT> tmp376;
    compiler::TNode<Object> tmp377;
    compiler::TNode<String> tmp378;
    compiler::TNode<Object> tmp379;
    compiler::TNode<String> tmp380;
    compiler::TNode<FixedArray> tmp381;
    compiler::TNode<IntPtrT> tmp382;
    compiler::TNode<IntPtrT> tmp383;
    compiler::TNode<IntPtrT> tmp384;
    compiler::TNode<IntPtrT> tmp385;
    compiler::TNode<HeapObject> tmp386;
    compiler::TNode<IntPtrT> tmp387;
    compiler::TNode<IntPtrT> tmp388;
    compiler::TNode<IntPtrT> tmp389;
    compiler::TNode<IntPtrT> tmp390;
    ca_.Bind(&block36, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block33, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp391;
    compiler::TNode<FixedArray> tmp392;
    compiler::TNode<IntPtrT> tmp393;
    compiler::TNode<String> tmp394;
    compiler::TNode<JSReceiver> tmp395;
    compiler::TNode<Smi> tmp396;
    compiler::TNode<IntPtrT> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<String> tmp399;
    compiler::TNode<Object> tmp400;
    compiler::TNode<String> tmp401;
    compiler::TNode<FixedArray> tmp402;
    compiler::TNode<IntPtrT> tmp403;
    compiler::TNode<IntPtrT> tmp404;
    compiler::TNode<IntPtrT> tmp405;
    compiler::TNode<IntPtrT> tmp406;
    compiler::TNode<HeapObject> tmp407;
    compiler::TNode<IntPtrT> tmp408;
    compiler::TNode<IntPtrT> tmp409;
    compiler::TNode<IntPtrT> tmp410;
    compiler::TNode<IntPtrT> tmp411;
    compiler::TNode<HeapObject> tmp412;
    compiler::TNode<IntPtrT> tmp413;
    ca_.Bind(&block34, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block32, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp412, tmp413);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp414;
    compiler::TNode<FixedArray> tmp415;
    compiler::TNode<IntPtrT> tmp416;
    compiler::TNode<String> tmp417;
    compiler::TNode<JSReceiver> tmp418;
    compiler::TNode<Smi> tmp419;
    compiler::TNode<IntPtrT> tmp420;
    compiler::TNode<Object> tmp421;
    compiler::TNode<String> tmp422;
    compiler::TNode<Object> tmp423;
    compiler::TNode<String> tmp424;
    compiler::TNode<FixedArray> tmp425;
    compiler::TNode<IntPtrT> tmp426;
    compiler::TNode<IntPtrT> tmp427;
    compiler::TNode<IntPtrT> tmp428;
    compiler::TNode<IntPtrT> tmp429;
    ca_.Bind(&block33, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp430;
    compiler::TNode<FixedArray> tmp431;
    compiler::TNode<IntPtrT> tmp432;
    compiler::TNode<String> tmp433;
    compiler::TNode<JSReceiver> tmp434;
    compiler::TNode<Smi> tmp435;
    compiler::TNode<IntPtrT> tmp436;
    compiler::TNode<Object> tmp437;
    compiler::TNode<String> tmp438;
    compiler::TNode<Object> tmp439;
    compiler::TNode<String> tmp440;
    compiler::TNode<FixedArray> tmp441;
    compiler::TNode<IntPtrT> tmp442;
    compiler::TNode<IntPtrT> tmp443;
    compiler::TNode<IntPtrT> tmp444;
    compiler::TNode<IntPtrT> tmp445;
    compiler::TNode<HeapObject> tmp446;
    compiler::TNode<IntPtrT> tmp447;
    ca_.Bind(&block32, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447);
    ca_.Goto(&block31, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp448;
    compiler::TNode<FixedArray> tmp449;
    compiler::TNode<IntPtrT> tmp450;
    compiler::TNode<String> tmp451;
    compiler::TNode<JSReceiver> tmp452;
    compiler::TNode<Smi> tmp453;
    compiler::TNode<IntPtrT> tmp454;
    compiler::TNode<Object> tmp455;
    compiler::TNode<String> tmp456;
    compiler::TNode<Object> tmp457;
    compiler::TNode<String> tmp458;
    compiler::TNode<FixedArray> tmp459;
    compiler::TNode<IntPtrT> tmp460;
    compiler::TNode<IntPtrT> tmp461;
    compiler::TNode<IntPtrT> tmp462;
    compiler::TNode<IntPtrT> tmp463;
    compiler::TNode<HeapObject> tmp464;
    compiler::TNode<IntPtrT> tmp465;
    ca_.Bind(&block31, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 59);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp464, tmp465}, tmp458);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 60);
    compiler::TNode<Smi> tmp466;
    USE(tmp466);
    tmp466 = CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp456});
    compiler::TNode<Smi> tmp467;
    USE(tmp467);
    tmp467 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp453}, compiler::TNode<Smi>{tmp466});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 55);
    ca_.Goto(&block27, tmp448, tmp449, tmp450, tmp451, tmp452, tmp467, tmp454, tmp455);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp468;
    compiler::TNode<FixedArray> tmp469;
    compiler::TNode<IntPtrT> tmp470;
    compiler::TNode<String> tmp471;
    compiler::TNode<JSReceiver> tmp472;
    compiler::TNode<Smi> tmp473;
    compiler::TNode<IntPtrT> tmp474;
    compiler::TNode<Object> tmp475;
    ca_.Bind(&block28, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 63);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp476;
    compiler::TNode<FixedArray> tmp477;
    compiler::TNode<IntPtrT> tmp478;
    compiler::TNode<String> tmp479;
    compiler::TNode<JSReceiver> tmp480;
    compiler::TNode<Smi> tmp481;
    compiler::TNode<IntPtrT> tmp482;
    compiler::TNode<Object> tmp483;
    ca_.Bind(&block27, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 35);
    ca_.Goto(&block13, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp484;
    compiler::TNode<FixedArray> tmp485;
    compiler::TNode<IntPtrT> tmp486;
    compiler::TNode<String> tmp487;
    compiler::TNode<JSReceiver> tmp488;
    compiler::TNode<Smi> tmp489;
    compiler::TNode<IntPtrT> tmp490;
    compiler::TNode<Object> tmp491;
    ca_.Bind(&block13, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 32);
    ca_.Goto(&block5, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp492;
    compiler::TNode<FixedArray> tmp493;
    compiler::TNode<IntPtrT> tmp494;
    compiler::TNode<String> tmp495;
    compiler::TNode<JSReceiver> tmp496;
    compiler::TNode<Smi> tmp497;
    compiler::TNode<IntPtrT> tmp498;
    ca_.Bind(&block5, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498);
    compiler::TNode<IntPtrT> tmp499;
    USE(tmp499);
    tmp499 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp500;
    USE(tmp500);
    tmp500 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp498}, compiler::TNode<IntPtrT>{tmp499});
    ca_.Goto(&block4, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp500);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp501;
    compiler::TNode<FixedArray> tmp502;
    compiler::TNode<IntPtrT> tmp503;
    compiler::TNode<String> tmp504;
    compiler::TNode<JSReceiver> tmp505;
    compiler::TNode<Smi> tmp506;
    compiler::TNode<IntPtrT> tmp507;
    ca_.Bind(&block3, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 30);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 27);
    ca_.Goto(&block1, tmp501, tmp502, tmp503, tmp504, tmp505);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp508;
    compiler::TNode<FixedArray> tmp509;
    compiler::TNode<IntPtrT> tmp510;
    compiler::TNode<String> tmp511;
    compiler::TNode<JSReceiver> tmp512;
    ca_.Bind(&block1, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512);
    ca_.Goto(&block38, tmp508, tmp509, tmp510, tmp511, tmp512);
  }

    compiler::TNode<Context> tmp513;
    compiler::TNode<FixedArray> tmp514;
    compiler::TNode<IntPtrT> tmp515;
    compiler::TNode<String> tmp516;
    compiler::TNode<JSReceiver> tmp517;
    ca_.Bind(&block38, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
}

void RegExpReplaceCallableWithExplicitCaptures_323(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<JSReceiver> p_replaceFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, Object, JSArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_matchesElements, p_matchesLength, p_replaceFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArray> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 72);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<FixedArray> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp9}, compiler::TNode<IntPtrT>{tmp7});
    ca_.Branch(tmp10, &block2, &block3, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<FixedArray> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 74);
    compiler::TNode<IntPtrT> tmp16 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp16);
    compiler::TNode<IntPtrT> tmp17 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp17);
    compiler::TNode<Smi>tmp18 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp17});
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp15});
    compiler::TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp19});
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp20}, compiler::TNode<UintPtrT>{tmp21});
    ca_.Branch(tmp22, &block12, &block13, tmp11, tmp12, tmp13, tmp14, tmp15, tmp12, tmp16, tmp19, tmp15, tmp15, tmp12, tmp16, tmp19, tmp15, tmp15);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<FixedArray> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    compiler::TNode<FixedArray> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<HeapObject> tmp33;
    compiler::TNode<IntPtrT> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    ca_.Bind(&block12, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp37}, compiler::TNode<IntPtrT>{tmp38});
    compiler::TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp34}, compiler::TNode<IntPtrT>{tmp39});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp41;
    USE(tmp41);
    compiler::TNode<IntPtrT> tmp42;
    USE(tmp42);
    std::tie(tmp41, tmp42) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp33}, compiler::TNode<IntPtrT>{tmp40}).Flatten();
    ca_.Goto(&block11, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp41, tmp42);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<FixedArray> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<FixedArray> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<HeapObject> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    ca_.Bind(&block13, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block10, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<FixedArray> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<FixedArray> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    compiler::TNode<IntPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<HeapObject> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<IntPtrT> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    compiler::TNode<HeapObject> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    ca_.Bind(&block11, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block9, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp73, tmp74);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<FixedArray> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    compiler::TNode<FixedArray> tmp80;
    compiler::TNode<IntPtrT> tmp81;
    compiler::TNode<IntPtrT> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    ca_.Bind(&block10, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<FixedArray> tmp86;
    compiler::TNode<IntPtrT> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<FixedArray> tmp90;
    compiler::TNode<IntPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<IntPtrT> tmp93;
    compiler::TNode<IntPtrT> tmp94;
    compiler::TNode<HeapObject> tmp95;
    compiler::TNode<IntPtrT> tmp96;
    ca_.Bind(&block9, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.Goto(&block8, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<FixedArray> tmp98;
    compiler::TNode<IntPtrT> tmp99;
    compiler::TNode<JSReceiver> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    compiler::TNode<FixedArray> tmp102;
    compiler::TNode<IntPtrT> tmp103;
    compiler::TNode<IntPtrT> tmp104;
    compiler::TNode<IntPtrT> tmp105;
    compiler::TNode<IntPtrT> tmp106;
    compiler::TNode<HeapObject> tmp107;
    compiler::TNode<IntPtrT> tmp108;
    ca_.Bind(&block8, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 74);
    compiler::TNode<Object>tmp109 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp107, tmp108});
    compiler::TNode<JSArray> tmp110;
    USE(tmp110);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp110 = Cast7JSArray_1383(state_, compiler::TNode<Context>{tmp97}, compiler::TNode<Object>{tmp109}, &label0);
    ca_.Goto(&block15, tmp97, tmp98, tmp99, tmp100, tmp101, tmp109, tmp110);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp97, tmp98, tmp99, tmp100, tmp101, tmp109);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp111;
    compiler::TNode<FixedArray> tmp112;
    compiler::TNode<IntPtrT> tmp113;
    compiler::TNode<JSReceiver> tmp114;
    compiler::TNode<IntPtrT> tmp115;
    compiler::TNode<Object> tmp116;
    ca_.Bind(&block16, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block7, tmp111, tmp112, tmp113, tmp114, tmp115);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<FixedArray> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<JSReceiver> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<JSArray> tmp123;
    ca_.Bind(&block15, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.Goto(&block6, tmp117, tmp118, tmp119, tmp120, tmp121, tmp123);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp124;
    compiler::TNode<FixedArray> tmp125;
    compiler::TNode<IntPtrT> tmp126;
    compiler::TNode<JSReceiver> tmp127;
    compiler::TNode<IntPtrT> tmp128;
    ca_.Bind(&block7, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.Goto(&block5, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp129;
    compiler::TNode<FixedArray> tmp130;
    compiler::TNode<IntPtrT> tmp131;
    compiler::TNode<JSReceiver> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<JSArray> tmp134;
    ca_.Bind(&block6, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 79);
    compiler::TNode<JSReceiver> tmp135;
    USE(tmp135);
    tmp135 = GetReflectApply_227(state_, compiler::TNode<Context>{tmp129});
    compiler::TNode<Oddball> tmp136;
    USE(tmp136);
    tmp136 = Undefined_64(state_);
    compiler::TNode<Oddball> tmp137;
    USE(tmp137);
    tmp137 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 78);
    compiler::TNode<Object> tmp138;
    USE(tmp138);
    tmp138 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp129}, compiler::TNode<JSReceiver>{tmp135}, compiler::TNode<Object>{tmp136}, compiler::TNode<Object>{tmp132}, compiler::TNode<Object>{tmp137}, compiler::TNode<Object>{tmp134});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 83);
    compiler::TNode<IntPtrT> tmp139 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp139);
    compiler::TNode<IntPtrT> tmp140 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp140);
    compiler::TNode<Smi>tmp141 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp130, tmp140});
    compiler::TNode<IntPtrT> tmp142;
    USE(tmp142);
    tmp142 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp141});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp143;
    USE(tmp143);
    tmp143 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp133});
    compiler::TNode<UintPtrT> tmp144;
    USE(tmp144);
    tmp144 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp142});
    compiler::TNode<BoolT> tmp145;
    USE(tmp145);
    tmp145 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp143}, compiler::TNode<UintPtrT>{tmp144});
    ca_.Branch(tmp145, &block21, &block22, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp138, tmp130, tmp139, tmp142, tmp133, tmp133, tmp130, tmp139, tmp142, tmp133, tmp133);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp146;
    compiler::TNode<FixedArray> tmp147;
    compiler::TNode<IntPtrT> tmp148;
    compiler::TNode<JSReceiver> tmp149;
    compiler::TNode<IntPtrT> tmp150;
    compiler::TNode<JSArray> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<FixedArray> tmp153;
    compiler::TNode<IntPtrT> tmp154;
    compiler::TNode<IntPtrT> tmp155;
    compiler::TNode<IntPtrT> tmp156;
    compiler::TNode<IntPtrT> tmp157;
    compiler::TNode<HeapObject> tmp158;
    compiler::TNode<IntPtrT> tmp159;
    compiler::TNode<IntPtrT> tmp160;
    compiler::TNode<IntPtrT> tmp161;
    compiler::TNode<IntPtrT> tmp162;
    ca_.Bind(&block21, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp163;
    USE(tmp163);
    tmp163 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp162}, compiler::TNode<IntPtrT>{tmp163});
    compiler::TNode<IntPtrT> tmp165;
    USE(tmp165);
    tmp165 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp159}, compiler::TNode<IntPtrT>{tmp164});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp166;
    USE(tmp166);
    compiler::TNode<IntPtrT> tmp167;
    USE(tmp167);
    std::tie(tmp166, tmp167) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp158}, compiler::TNode<IntPtrT>{tmp165}).Flatten();
    ca_.Goto(&block20, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp166, tmp167);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp168;
    compiler::TNode<FixedArray> tmp169;
    compiler::TNode<IntPtrT> tmp170;
    compiler::TNode<JSReceiver> tmp171;
    compiler::TNode<IntPtrT> tmp172;
    compiler::TNode<JSArray> tmp173;
    compiler::TNode<Object> tmp174;
    compiler::TNode<FixedArray> tmp175;
    compiler::TNode<IntPtrT> tmp176;
    compiler::TNode<IntPtrT> tmp177;
    compiler::TNode<IntPtrT> tmp178;
    compiler::TNode<IntPtrT> tmp179;
    compiler::TNode<HeapObject> tmp180;
    compiler::TNode<IntPtrT> tmp181;
    compiler::TNode<IntPtrT> tmp182;
    compiler::TNode<IntPtrT> tmp183;
    compiler::TNode<IntPtrT> tmp184;
    ca_.Bind(&block22, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block19, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp185;
    compiler::TNode<FixedArray> tmp186;
    compiler::TNode<IntPtrT> tmp187;
    compiler::TNode<JSReceiver> tmp188;
    compiler::TNode<IntPtrT> tmp189;
    compiler::TNode<JSArray> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<FixedArray> tmp192;
    compiler::TNode<IntPtrT> tmp193;
    compiler::TNode<IntPtrT> tmp194;
    compiler::TNode<IntPtrT> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<HeapObject> tmp197;
    compiler::TNode<IntPtrT> tmp198;
    compiler::TNode<IntPtrT> tmp199;
    compiler::TNode<IntPtrT> tmp200;
    compiler::TNode<IntPtrT> tmp201;
    compiler::TNode<HeapObject> tmp202;
    compiler::TNode<IntPtrT> tmp203;
    ca_.Bind(&block20, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block18, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp202, tmp203);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp204;
    compiler::TNode<FixedArray> tmp205;
    compiler::TNode<IntPtrT> tmp206;
    compiler::TNode<JSReceiver> tmp207;
    compiler::TNode<IntPtrT> tmp208;
    compiler::TNode<JSArray> tmp209;
    compiler::TNode<Object> tmp210;
    compiler::TNode<FixedArray> tmp211;
    compiler::TNode<IntPtrT> tmp212;
    compiler::TNode<IntPtrT> tmp213;
    compiler::TNode<IntPtrT> tmp214;
    compiler::TNode<IntPtrT> tmp215;
    ca_.Bind(&block19, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp216;
    compiler::TNode<FixedArray> tmp217;
    compiler::TNode<IntPtrT> tmp218;
    compiler::TNode<JSReceiver> tmp219;
    compiler::TNode<IntPtrT> tmp220;
    compiler::TNode<JSArray> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<FixedArray> tmp223;
    compiler::TNode<IntPtrT> tmp224;
    compiler::TNode<IntPtrT> tmp225;
    compiler::TNode<IntPtrT> tmp226;
    compiler::TNode<IntPtrT> tmp227;
    compiler::TNode<HeapObject> tmp228;
    compiler::TNode<IntPtrT> tmp229;
    ca_.Bind(&block18, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229);
    ca_.Goto(&block17, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp230;
    compiler::TNode<FixedArray> tmp231;
    compiler::TNode<IntPtrT> tmp232;
    compiler::TNode<JSReceiver> tmp233;
    compiler::TNode<IntPtrT> tmp234;
    compiler::TNode<JSArray> tmp235;
    compiler::TNode<Object> tmp236;
    compiler::TNode<FixedArray> tmp237;
    compiler::TNode<IntPtrT> tmp238;
    compiler::TNode<IntPtrT> tmp239;
    compiler::TNode<IntPtrT> tmp240;
    compiler::TNode<IntPtrT> tmp241;
    compiler::TNode<HeapObject> tmp242;
    compiler::TNode<IntPtrT> tmp243;
    ca_.Bind(&block17, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 83);
    compiler::TNode<String> tmp244;
    USE(tmp244);
    tmp244 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp230}, compiler::TNode<Object>{tmp236});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp242, tmp243}, tmp244);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 72);
    ca_.Goto(&block5, tmp230, tmp231, tmp232, tmp233, tmp234);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp245;
    compiler::TNode<FixedArray> tmp246;
    compiler::TNode<IntPtrT> tmp247;
    compiler::TNode<JSReceiver> tmp248;
    compiler::TNode<IntPtrT> tmp249;
    ca_.Bind(&block5, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249);
    compiler::TNode<IntPtrT> tmp250;
    USE(tmp250);
    tmp250 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp251;
    USE(tmp251);
    tmp251 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp249}, compiler::TNode<IntPtrT>{tmp250});
    ca_.Goto(&block4, tmp245, tmp246, tmp247, tmp248, tmp251);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp252;
    compiler::TNode<FixedArray> tmp253;
    compiler::TNode<IntPtrT> tmp254;
    compiler::TNode<JSReceiver> tmp255;
    compiler::TNode<IntPtrT> tmp256;
    ca_.Bind(&block3, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 69);
    ca_.Goto(&block1, tmp252, tmp253, tmp254, tmp255);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp257;
    compiler::TNode<FixedArray> tmp258;
    compiler::TNode<IntPtrT> tmp259;
    compiler::TNode<JSReceiver> tmp260;
    ca_.Bind(&block1, &tmp257, &tmp258, &tmp259, &tmp260);
    ca_.Goto(&block24, tmp257, tmp258, tmp259, tmp260);
  }

    compiler::TNode<Context> tmp261;
    compiler::TNode<FixedArray> tmp262;
    compiler::TNode<IntPtrT> tmp263;
    compiler::TNode<JSReceiver> tmp264;
    ca_.Bind(&block24, &tmp261, &tmp262, &tmp263, &tmp264);
}

compiler::TNode<String> RegExpReplaceFastGlobalCallable_324(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string, p_replaceFn);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSRegExp> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 90);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp1}, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 92);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 16);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 93);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 95);
    compiler::TNode<RegExpMatchInfo> tmp7;
    USE(tmp7);
    tmp7 = GetRegExpLastMatchInfo_228(state_, compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 97);
    compiler::TNode<Map> tmp8;
    USE(tmp8);
    tmp8 = GetFastPackedElementsJSArrayMap_222(state_, compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 98);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 96);
    compiler::TNode<JSArray> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).AllocateJSArray(PACKED_ELEMENTS, compiler::TNode<Map>{tmp8}, compiler::TNode<Smi>{tmp5}, compiler::TNode<Smi>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 94);
    compiler::TNode<HeapObject> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpExecMultiple, tmp0, tmp1, tmp2, tmp7, tmp9)); 
    USE(tmp10);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 100);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp1}, compiler::TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 103);
    compiler::TNode<Oddball> tmp12;
    USE(tmp12);
    tmp12 = Null_63(state_);
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp10}, compiler::TNode<HeapObject>{tmp12});
    ca_.Branch(tmp13, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp6, tmp10);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<JSRegExp> tmp15;
    compiler::TNode<String> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<HeapObject> tmp20;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp16);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSRegExp> tmp22;
    compiler::TNode<String> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<HeapObject> tmp27;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 105);
    compiler::TNode<JSArray> tmp28;
    USE(tmp28);
    tmp28 = UnsafeCast7JSArray_1341(state_, compiler::TNode<Context>{tmp21}, compiler::TNode<Object>{tmp27});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 106);
    compiler::TNode<IntPtrT> tmp29 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp29);
    compiler::TNode<Number>tmp30 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp28, tmp29});
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block6, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<JSRegExp> tmp33;
    compiler::TNode<String> tmp34;
    compiler::TNode<JSReceiver> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<HeapObject> tmp38;
    compiler::TNode<JSArray> tmp39;
    compiler::TNode<Number> tmp40;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.Goto(&block5, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<JSRegExp> tmp42;
    compiler::TNode<String> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Smi> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<HeapObject> tmp47;
    compiler::TNode<JSArray> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<Smi> tmp50;
    ca_.Bind(&block6, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block4, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSRegExp> tmp52;
    compiler::TNode<String> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<HeapObject> tmp57;
    compiler::TNode<JSArray> tmp58;
    ca_.Bind(&block5, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<JSRegExp> tmp60;
    compiler::TNode<String> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<HeapObject> tmp65;
    compiler::TNode<JSArray> tmp66;
    compiler::TNode<Smi> tmp67;
    ca_.Bind(&block4, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 107);
    compiler::TNode<IntPtrT> tmp68;
    USE(tmp68);
    tmp68 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp67});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 109);
    compiler::TNode<IntPtrT> tmp69 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp69);
    compiler::TNode<FixedArrayBase>tmp70 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp66, tmp69});
    compiler::TNode<FixedArray> tmp71;
    USE(tmp71);
    tmp71 = UnsafeCast10FixedArray_1343(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp70});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 108);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 112);
    compiler::TNode<RegExpMatchInfo> tmp72;
    USE(tmp72);
    tmp72 = GetRegExpLastMatchInfo_228(state_, compiler::TNode<Context>{tmp59});
    compiler::TNode<Smi> tmp73;
    USE(tmp73);
    tmp73 = _method_RegExpMatchInfo_NumberOfCaptures(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<RegExpMatchInfo>{tmp72});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 117);
    compiler::TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    compiler::TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp73}, compiler::TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block8, &block9, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71, tmp73);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<JSRegExp> tmp77;
    compiler::TNode<String> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<HeapObject> tmp82;
    compiler::TNode<JSArray> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<IntPtrT> tmp85;
    compiler::TNode<FixedArray> tmp86;
    compiler::TNode<Smi> tmp87;
    ca_.Bind(&block8, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 119);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 118);
    RegExpReplaceCallableNoExplicitCaptures_322(state_, compiler::TNode<Context>{tmp76}, compiler::TNode<FixedArray>{tmp86}, compiler::TNode<IntPtrT>{tmp85}, compiler::TNode<String>{tmp78}, compiler::TNode<JSReceiver>{tmp79});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 117);
    ca_.Goto(&block10, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<JSRegExp> tmp89;
    compiler::TNode<String> tmp90;
    compiler::TNode<JSReceiver> tmp91;
    compiler::TNode<Smi> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<HeapObject> tmp94;
    compiler::TNode<JSArray> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<IntPtrT> tmp97;
    compiler::TNode<FixedArray> tmp98;
    compiler::TNode<Smi> tmp99;
    ca_.Bind(&block9, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 122);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 121);
    RegExpReplaceCallableWithExplicitCaptures_323(state_, compiler::TNode<Context>{tmp88}, compiler::TNode<FixedArray>{tmp98}, compiler::TNode<IntPtrT>{tmp97}, compiler::TNode<JSReceiver>{tmp91});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 117);
    ca_.Goto(&block10, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<JSRegExp> tmp101;
    compiler::TNode<String> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<HeapObject> tmp106;
    compiler::TNode<JSArray> tmp107;
    compiler::TNode<Smi> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<FixedArray> tmp110;
    compiler::TNode<Smi> tmp111;
    ca_.Bind(&block10, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 125);
    compiler::TNode<String> tmp112;
    tmp112 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringBuilderConcat, tmp100, tmp107, tmp108, tmp102)); 
    USE(tmp112);
    ca_.Goto(&block1, tmp100, tmp101, tmp102, tmp103, tmp112);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<JSRegExp> tmp114;
    compiler::TNode<String> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<String> tmp117;
    ca_.Bind(&block1, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 87);
    ca_.Goto(&block11, tmp113, tmp114, tmp115, tmp116, tmp117);
  }

    compiler::TNode<Context> tmp118;
    compiler::TNode<JSRegExp> tmp119;
    compiler::TNode<String> tmp120;
    compiler::TNode<JSReceiver> tmp121;
    compiler::TNode<String> tmp122;
    ca_.Bind(&block11, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
  return compiler::TNode<String>{tmp122};
}

compiler::TNode<String> RegExpReplaceFastString_325(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<String> p_replaceString) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, JSRegExp, String> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, JSRegExp, String, RegExpMatchInfo> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string, p_replaceString);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSRegExp> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<String> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 133);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = kEmptyString_67(state_);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 134);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 135);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 136);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 137);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = RegExpBuiltinsAssembler(state_).FastFlagGetterGlobal(compiler::TNode<JSRegExp>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 139);
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSRegExp> tmp10;
    compiler::TNode<String> tmp11;
    compiler::TNode<String> tmp12;
    compiler::TNode<String> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<BoolT> tmp17;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 140);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = RegExpBuiltinsAssembler(state_).FastFlagGetterUnicode(compiler::TNode<JSRegExp>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 141);
    compiler::TNode<Smi> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp10}, compiler::TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 139);
    ca_.Goto(&block3, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp18, tmp16, tmp17);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSRegExp> tmp21;
    compiler::TNode<String> tmp22;
    compiler::TNode<String> tmp23;
    compiler::TNode<String> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<BoolT> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<BoolT> tmp28;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 144);
    ca_.Goto(&block6, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSRegExp> tmp30;
    compiler::TNode<String> tmp31;
    compiler::TNode<String> tmp32;
    compiler::TNode<String> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<BoolT> tmp37;
    ca_.Bind(&block6, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Branch(tmp38, &block4, &block5, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<JSRegExp> tmp40;
    compiler::TNode<String> tmp41;
    compiler::TNode<String> tmp42;
    compiler::TNode<String> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<BoolT> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<BoolT> tmp47;
    ca_.Bind(&block4, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 146);
    compiler::TNode<RegExpMatchInfo> tmp48;
    USE(tmp48);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp48 = RegExpBuiltinsAssembler(state_).RegExpPrototypeExecBodyWithoutResultFast(compiler::TNode<Context>{tmp39}, compiler::TNode<JSRegExp>{tmp40}, compiler::TNode<String>{tmp41}, &label0);
    ca_.Goto(&block9, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp40, tmp41, tmp48);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp40, tmp41);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<JSRegExp> tmp50;
    compiler::TNode<String> tmp51;
    compiler::TNode<String> tmp52;
    compiler::TNode<String> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<BoolT> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<BoolT> tmp57;
    compiler::TNode<JSRegExp> tmp58;
    compiler::TNode<String> tmp59;
    ca_.Bind(&block10, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block8, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSRegExp> tmp61;
    compiler::TNode<String> tmp62;
    compiler::TNode<String> tmp63;
    compiler::TNode<String> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<BoolT> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<BoolT> tmp68;
    compiler::TNode<JSRegExp> tmp69;
    compiler::TNode<String> tmp70;
    compiler::TNode<RegExpMatchInfo> tmp71;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block7, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<JSRegExp> tmp73;
    compiler::TNode<String> tmp74;
    compiler::TNode<String> tmp75;
    compiler::TNode<String> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<BoolT> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<BoolT> tmp80;
    ca_.Bind(&block8, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 147);
    ca_.Goto(&block5, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp81;
    compiler::TNode<JSRegExp> tmp82;
    compiler::TNode<String> tmp83;
    compiler::TNode<String> tmp84;
    compiler::TNode<String> tmp85;
    compiler::TNode<Smi> tmp86;
    compiler::TNode<BoolT> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<BoolT> tmp89;
    compiler::TNode<RegExpMatchInfo> tmp90;
    ca_.Bind(&block7, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 145);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 148);
    compiler::TNode<Smi> tmp91;
    USE(tmp91);
    tmp91 = _method_RegExpMatchInfo_GetStartOfCapture(state_, compiler::TNode<Context>{tmp81}, compiler::TNode<RegExpMatchInfo>{tmp90}, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 149);
    compiler::TNode<Smi> tmp92;
    USE(tmp92);
    tmp92 = _method_RegExpMatchInfo_GetEndOfCapture(state_, compiler::TNode<Context>{tmp81}, compiler::TNode<RegExpMatchInfo>{tmp90}, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 153);
    compiler::TNode<String> tmp93;
    tmp93 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kSubString, tmp81, tmp83, tmp86, tmp91));
    USE(tmp93);
    compiler::TNode<String> tmp94;
    USE(tmp94);
    tmp94 = StringAdd_82(state_, compiler::TNode<Context>{tmp81}, compiler::TNode<String>{tmp85}, compiler::TNode<String>{tmp93});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 154);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 156);
    compiler::TNode<Smi> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).SmiNotEqual(compiler::TNode<Smi>{tmp88}, compiler::TNode<Smi>{tmp95});
    ca_.Branch(tmp96, &block11, &block12, tmp81, tmp82, tmp83, tmp84, tmp94, tmp92, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSRegExp> tmp98;
    compiler::TNode<String> tmp99;
    compiler::TNode<String> tmp100;
    compiler::TNode<String> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<BoolT> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<BoolT> tmp105;
    compiler::TNode<RegExpMatchInfo> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<Smi> tmp108;
    ca_.Bind(&block11, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    compiler::TNode<String> tmp109;
    USE(tmp109);
    tmp109 = StringAdd_82(state_, compiler::TNode<Context>{tmp97}, compiler::TNode<String>{tmp101}, compiler::TNode<String>{tmp100});
    ca_.Goto(&block12, tmp97, tmp98, tmp99, tmp100, tmp109, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<JSRegExp> tmp111;
    compiler::TNode<String> tmp112;
    compiler::TNode<String> tmp113;
    compiler::TNode<String> tmp114;
    compiler::TNode<Smi> tmp115;
    compiler::TNode<BoolT> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<BoolT> tmp118;
    compiler::TNode<RegExpMatchInfo> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<Smi> tmp121;
    ca_.Bind(&block12, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 159);
    compiler::TNode<BoolT> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp118});
    ca_.Branch(tmp122, &block13, &block14, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp123;
    compiler::TNode<JSRegExp> tmp124;
    compiler::TNode<String> tmp125;
    compiler::TNode<String> tmp126;
    compiler::TNode<String> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<BoolT> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<BoolT> tmp131;
    compiler::TNode<RegExpMatchInfo> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<Smi> tmp134;
    ca_.Bind(&block13, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block5, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<JSRegExp> tmp136;
    compiler::TNode<String> tmp137;
    compiler::TNode<String> tmp138;
    compiler::TNode<String> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<BoolT> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<BoolT> tmp143;
    compiler::TNode<RegExpMatchInfo> tmp144;
    compiler::TNode<Smi> tmp145;
    compiler::TNode<Smi> tmp146;
    ca_.Bind(&block14, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 162);
    compiler::TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp146}, compiler::TNode<Smi>{tmp145});
    ca_.Branch(tmp147, &block15, &block16, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp148;
    compiler::TNode<JSRegExp> tmp149;
    compiler::TNode<String> tmp150;
    compiler::TNode<String> tmp151;
    compiler::TNode<String> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<BoolT> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<BoolT> tmp156;
    compiler::TNode<RegExpMatchInfo> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Smi> tmp159;
    ca_.Bind(&block15, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 163);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 164);
    compiler::TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = RegExpBuiltinsAssembler(state_).FastLoadLastIndex(compiler::TNode<JSRegExp>{tmp149});
    compiler::TNode<Smi> tmp161;
    USE(tmp161);
    tmp161 = RegExpBuiltinsAssembler(state_).AdvanceStringIndexFast(compiler::TNode<String>{tmp150}, compiler::TNode<Smi>{tmp160}, compiler::TNode<BoolT>{tmp154});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 163);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(compiler::TNode<JSRegExp>{tmp149}, compiler::TNode<Smi>{tmp161});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 162);
    ca_.Goto(&block16, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp162;
    compiler::TNode<JSRegExp> tmp163;
    compiler::TNode<String> tmp164;
    compiler::TNode<String> tmp165;
    compiler::TNode<String> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<BoolT> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<BoolT> tmp170;
    compiler::TNode<RegExpMatchInfo> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Smi> tmp173;
    ca_.Bind(&block16, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 144);
    ca_.Goto(&block6, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp174;
    compiler::TNode<JSRegExp> tmp175;
    compiler::TNode<String> tmp176;
    compiler::TNode<String> tmp177;
    compiler::TNode<String> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<BoolT> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<BoolT> tmp182;
    ca_.Bind(&block5, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 168);
    compiler::TNode<Smi> tmp183;
    USE(tmp183);
    tmp183 = CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp176});
    compiler::TNode<String> tmp184;
    tmp184 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kSubString, tmp174, tmp176, tmp179, tmp183));
    USE(tmp184);
    compiler::TNode<String> tmp185;
    USE(tmp185);
    tmp185 = StringAdd_82(state_, compiler::TNode<Context>{tmp174}, compiler::TNode<String>{tmp178}, compiler::TNode<String>{tmp184});
    ca_.Goto(&block1, tmp174, tmp175, tmp176, tmp177, tmp185);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp186;
    compiler::TNode<JSRegExp> tmp187;
    compiler::TNode<String> tmp188;
    compiler::TNode<String> tmp189;
    compiler::TNode<String> tmp190;
    ca_.Bind(&block1, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 128);
    ca_.Goto(&block17, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

    compiler::TNode<Context> tmp191;
    compiler::TNode<JSRegExp> tmp192;
    compiler::TNode<String> tmp193;
    compiler::TNode<String> tmp194;
    compiler::TNode<String> tmp195;
    ca_.Bind(&block17, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195);
  return compiler::TNode<String>{tmp195};
}

TF_BUILTIN(RegExpReplace, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSRegExp> parameter1 = UncheckedCast<JSRegExp>(Parameter(Descriptor::kRegexp));
  USE(parameter1);
  compiler::TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kReplaceValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver, String> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver, String> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp, JSRegExp> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSRegExp> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 178);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 179);
    compiler::TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1339(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSRegExp> tmp6;
    compiler::TNode<String> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSRegExp> tmp12;
    compiler::TNode<String> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block3, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 180);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = RegExpBuiltinsAssembler(state_).FastFlagGetterGlobal(compiler::TNode<JSRegExp>{tmp12});
    ca_.Branch(tmp18, &block5, &block6, tmp11, tmp12, tmp13, tmp14, tmp15, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSRegExp> tmp20;
    compiler::TNode<String> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 181);
    compiler::TNode<String> tmp25;
    USE(tmp25);
    tmp25 = RegExpReplaceFastGlobalCallable_324(state_, compiler::TNode<Context>{tmp19}, compiler::TNode<JSRegExp>{tmp20}, compiler::TNode<String>{tmp21}, compiler::TNode<JSReceiver>{tmp24});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 180);
    ca_.Goto(&block8, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<JSRegExp> tmp27;
    compiler::TNode<String> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 182);
    compiler::TNode<String> tmp32;
    tmp32 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringReplaceNonGlobalRegExpWithFunction, tmp26, tmp28, tmp27, tmp31)); 
    USE(tmp32);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 180);
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSRegExp> tmp34;
    compiler::TNode<String> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<String> tmp39;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block7, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSRegExp> tmp41;
    compiler::TNode<String> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<JSReceiver> tmp45;
    compiler::TNode<String> tmp46;
    ca_.Bind(&block7, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    CodeStubAssembler(state_).Return(tmp46);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<JSRegExp> tmp48;
    compiler::TNode<String> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    ca_.Bind(&block2, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 184);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 185);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 186);
    compiler::TNode<String> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp47}, compiler::TNode<Object>{tmp50});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 192);
    compiler::TNode<JSRegExp> tmp53;
    USE(tmp53);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp53 = Cast14ATFastJSRegExp_134(state_, compiler::TNode<Context>{tmp47}, compiler::TNode<HeapObject>{tmp48}, &label0);
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51, ca_.UncheckedCast<Object>(tmp51), tmp48, tmp52, tmp48, tmp53);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp47, tmp48, tmp49, tmp50, tmp51, ca_.UncheckedCast<Object>(tmp51), tmp48, tmp52, tmp48);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<JSRegExp> tmp55;
    compiler::TNode<String> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<JSRegExp> tmp60;
    compiler::TNode<String> tmp61;
    compiler::TNode<JSRegExp> tmp62;
    ca_.Bind(&block12, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.Goto(&block10, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSRegExp> tmp64;
    compiler::TNode<String> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<JSRegExp> tmp69;
    compiler::TNode<String> tmp70;
    compiler::TNode<JSRegExp> tmp71;
    compiler::TNode<JSRegExp> tmp72;
    ca_.Bind(&block11, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 194);
    compiler::TNode<String> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).SingleCharacterStringConstant("$");
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 193);
    compiler::TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<Smi> tmp75;
    tmp75 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringIndexOf, tmp63, tmp70, tmp73, tmp74));
    USE(tmp75);
    compiler::TNode<Smi> tmp76;
    USE(tmp76);
    tmp76 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, -1);
    compiler::TNode<BoolT> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).SmiNotEqual(compiler::TNode<Smi>{tmp75}, compiler::TNode<Smi>{tmp76});
    ca_.Branch(tmp77, &block13, &block14, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp72);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<JSRegExp> tmp79;
    compiler::TNode<String> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<JSRegExp> tmp84;
    compiler::TNode<String> tmp85;
    compiler::TNode<JSRegExp> tmp86;
    ca_.Bind(&block13, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 195);
    ca_.Goto(&block10, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp87;
    compiler::TNode<JSRegExp> tmp88;
    compiler::TNode<String> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<JSRegExp> tmp93;
    compiler::TNode<String> tmp94;
    compiler::TNode<JSRegExp> tmp95;
    ca_.Bind(&block14, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 198);
    compiler::TNode<String> tmp96;
    USE(tmp96);
    tmp96 = RegExpReplaceFastString_325(state_, compiler::TNode<Context>{tmp87}, compiler::TNode<JSRegExp>{tmp95}, compiler::TNode<String>{tmp89}, compiler::TNode<String>{tmp94});
    CodeStubAssembler(state_).Return(tmp96);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSRegExp> tmp98;
    compiler::TNode<String> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<JSRegExp> tmp103;
    compiler::TNode<String> tmp104;
    ca_.Bind(&block10, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 201);
    compiler::TNode<String> tmp105;
    tmp105 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpReplaceRT, tmp97, tmp103, tmp99, tmp104)); 
    USE(tmp105);
    CodeStubAssembler(state_).Return(tmp105);
  }
}

TF_BUILTIN(RegExpPrototypeReplace, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver, String, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver, String, JSReceiver, JSRegExp> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver, String> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 229);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 230);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 234);
    compiler::TNode<JSReceiver> tmp9;
    USE(tmp9);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp9 = Cast10JSReceiver_1338(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp4, tmp9);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp4);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<RawPtrT> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<RawPtrT> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block1, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp26);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block2, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 235);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp30}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@replace");
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    ca_.Bind(&block1, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 238);
    compiler::TNode<String> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp37}, compiler::TNode<Object>{tmp39});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 242);
    compiler::TNode<JSRegExp> tmp43;
    USE(tmp43);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp43 = Cast14ATFastJSRegExp_134(state_, compiler::TNode<Context>{tmp37}, compiler::TNode<HeapObject>{tmp41}, &label0);
    ca_.Goto(&block7, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp41, tmp43);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp41);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSReceiver> tmp51;
    compiler::TNode<String> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    ca_.Bind(&block8, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block6, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp54;
    compiler::TNode<RawPtrT> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<String> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    compiler::TNode<JSRegExp> tmp64;
    ca_.Bind(&block7, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 243);
    compiler::TNode<String> tmp65;
    tmp65 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kRegExpReplace, tmp57, tmp64, tmp62, tmp60));
    USE(tmp65);
    arguments.PopAndReturn(tmp65);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<RawPtrT> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    compiler::TNode<Context> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<String> tmp74;
    ca_.Bind(&block6, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 246);
    compiler::TNode<String> tmp75;
    tmp75 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpReplaceRT, tmp69, tmp73, tmp74, tmp72)); 
    USE(tmp75);
    arguments.PopAndReturn(tmp75);
  }
}

}  // namespace internal
}  // namespace v8

