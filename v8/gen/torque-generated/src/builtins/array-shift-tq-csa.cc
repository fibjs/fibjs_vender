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

compiler::TNode<Object> TryFastArrayShift_36(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::CodeAssemblerLabel* label_Slow, compiler::CodeAssemblerLabel* label_Runtime) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Context, Map> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Context, Map, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase, FixedDoubleArray> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedDoubleArray> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase, FixedArray> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArrayBase> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArrayBase, FixedDoubleArray> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedDoubleArray> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArrayBase> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArrayBase, FixedArray> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArray> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 10);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast13ATFastJSArray_1363(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 11);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::TNode<JSArray> tmp11;
    USE(tmp11);
    compiler::TNode<Map> tmp12;
    USE(tmp12);
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    std::tie(tmp10, tmp11, tmp12, tmp13, tmp14, tmp15) = NewFastJSArrayWitness_236(state_, compiler::TNode<JSArray>{tmp9}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 13);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3158);
    compiler::TNode<Int32T> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = CodeStubAssembler(state_).EnsureArrayPushable(compiler::TNode<Map>{tmp12}, &label0);
    ca_.Goto(&block7, tmp6, tmp7, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp6, tmp12, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp6, tmp7, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp6, tmp12);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<JSArray> tmp19;
    compiler::TNode<JSArray> tmp20;
    compiler::TNode<JSArray> tmp21;
    compiler::TNode<Map> tmp22;
    compiler::TNode<BoolT> tmp23;
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    compiler::TNode<Context> tmp26;
    compiler::TNode<Map> tmp27;
    ca_.Bind(&block8, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<JSArray> tmp30;
    compiler::TNode<JSArray> tmp31;
    compiler::TNode<JSArray> tmp32;
    compiler::TNode<Map> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<BoolT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Map> tmp38;
    compiler::TNode<Int32T> tmp39;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3159);
    EnsureWriteableFastElements_50(state_, compiler::TNode<Context>{tmp37}, compiler::TNode<JSArray>{tmp32});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3160);
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 13);
    ca_.Goto(&block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp40, tmp37);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSArray> tmp43;
    compiler::TNode<JSArray> tmp44;
    compiler::TNode<JSArray> tmp45;
    compiler::TNode<Map> tmp46;
    compiler::TNode<BoolT> tmp47;
    compiler::TNode<BoolT> tmp48;
    compiler::TNode<BoolT> tmp49;
    compiler::TNode<Context> tmp50;
    ca_.Bind(&block6, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 15);
    compiler::TNode<Smi> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp43});
    compiler::TNode<Smi> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp51}, compiler::TNode<Smi>{tmp52});
    ca_.Branch(tmp53, &block9, &block10, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<JSArray> tmp56;
    compiler::TNode<JSArray> tmp57;
    compiler::TNode<JSArray> tmp58;
    compiler::TNode<Map> tmp59;
    compiler::TNode<BoolT> tmp60;
    compiler::TNode<BoolT> tmp61;
    compiler::TNode<BoolT> tmp62;
    ca_.Bind(&block9, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 16);
    compiler::TNode<Oddball> tmp63;
    USE(tmp63);
    tmp63 = Undefined_64(state_);
    ca_.Goto(&block3, tmp54, tmp55, tmp63);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSArray> tmp66;
    compiler::TNode<JSArray> tmp67;
    compiler::TNode<JSArray> tmp68;
    compiler::TNode<Map> tmp69;
    compiler::TNode<BoolT> tmp70;
    compiler::TNode<BoolT> tmp71;
    compiler::TNode<BoolT> tmp72;
    ca_.Bind(&block10, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 19);
    compiler::TNode<Smi> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp66});
    compiler::TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp73}, compiler::TNode<Smi>{tmp74});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 23);
    compiler::TNode<Smi> tmp76;
    USE(tmp76);
    tmp76 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp75}, compiler::TNode<Smi>{tmp75});
    compiler::TNode<Smi> tmp77;
    USE(tmp77);
    tmp77 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, JSObject::kMinAddedElementsCapacity);
    compiler::TNode<Smi> tmp78;
    USE(tmp78);
    tmp78 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp76}, compiler::TNode<Smi>{tmp77});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 24);
    compiler::TNode<IntPtrT> tmp79 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp79);
    compiler::TNode<FixedArrayBase>tmp80 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp66, tmp79});
    compiler::TNode<IntPtrT> tmp81 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp81);
    compiler::TNode<Smi>tmp82 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp80, tmp81});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 23);
    compiler::TNode<BoolT> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp78}, compiler::TNode<Smi>{tmp82});
    ca_.Branch(tmp83, &block11, &block12, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp75);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<JSArray> tmp86;
    compiler::TNode<JSArray> tmp87;
    compiler::TNode<JSArray> tmp88;
    compiler::TNode<Map> tmp89;
    compiler::TNode<BoolT> tmp90;
    compiler::TNode<BoolT> tmp91;
    compiler::TNode<BoolT> tmp92;
    compiler::TNode<Smi> tmp93;
    ca_.Bind(&block11, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 25);
    ca_.Goto(&block2);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<JSArray> tmp96;
    compiler::TNode<JSArray> tmp97;
    compiler::TNode<JSArray> tmp98;
    compiler::TNode<Map> tmp99;
    compiler::TNode<BoolT> tmp100;
    compiler::TNode<BoolT> tmp101;
    compiler::TNode<BoolT> tmp102;
    compiler::TNode<Smi> tmp103;
    ca_.Bind(&block12, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 30);
    compiler::TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, JSArray::kMaxCopyElements);
    compiler::TNode<BoolT> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp103}, compiler::TNode<Smi>{tmp104});
    ca_.Branch(tmp105, &block13, &block14, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<JSArray> tmp108;
    compiler::TNode<JSArray> tmp109;
    compiler::TNode<JSArray> tmp110;
    compiler::TNode<Map> tmp111;
    compiler::TNode<BoolT> tmp112;
    compiler::TNode<BoolT> tmp113;
    compiler::TNode<BoolT> tmp114;
    compiler::TNode<Smi> tmp115;
    ca_.Bind(&block13, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block2);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSArray> tmp118;
    compiler::TNode<JSArray> tmp119;
    compiler::TNode<JSArray> tmp120;
    compiler::TNode<Map> tmp121;
    compiler::TNode<BoolT> tmp122;
    compiler::TNode<BoolT> tmp123;
    compiler::TNode<BoolT> tmp124;
    compiler::TNode<Smi> tmp125;
    ca_.Bind(&block14, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 32);
    compiler::TNode<Smi> tmp126;
    USE(tmp126);
    tmp126 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3150);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3127);
    ca_.Branch(tmp122, &block19, &block20, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp116, tmp126, tmp126, tmp116, tmp126);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<JSArray> tmp129;
    compiler::TNode<JSArray> tmp130;
    compiler::TNode<JSArray> tmp131;
    compiler::TNode<Map> tmp132;
    compiler::TNode<BoolT> tmp133;
    compiler::TNode<BoolT> tmp134;
    compiler::TNode<BoolT> tmp135;
    compiler::TNode<Smi> tmp136;
    compiler::TNode<Context> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<Context> tmp140;
    compiler::TNode<Smi> tmp141;
    ca_.Bind(&block19, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3128);
    compiler::TNode<Object> tmp142;
    USE(tmp142);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp142 = LoadElementNoHole16FixedDoubleArray_235(state_, compiler::TNode<Context>{tmp140}, compiler::TNode<JSArray>{tmp131}, compiler::TNode<Smi>{tmp141}, &label0);
    ca_.Goto(&block22, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp131, tmp141, tmp142);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block23, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp131, tmp141);
    }
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<JSArray> tmp145;
    compiler::TNode<JSArray> tmp146;
    compiler::TNode<JSArray> tmp147;
    compiler::TNode<Map> tmp148;
    compiler::TNode<BoolT> tmp149;
    compiler::TNode<BoolT> tmp150;
    compiler::TNode<BoolT> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Context> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<Context> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<JSArray> tmp158;
    compiler::TNode<Smi> tmp159;
    ca_.Bind(&block23, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.Goto(&block17, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<JSArray> tmp162;
    compiler::TNode<JSArray> tmp163;
    compiler::TNode<JSArray> tmp164;
    compiler::TNode<Map> tmp165;
    compiler::TNode<BoolT> tmp166;
    compiler::TNode<BoolT> tmp167;
    compiler::TNode<BoolT> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<Context> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Context> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<JSArray> tmp175;
    compiler::TNode<Smi> tmp176;
    compiler::TNode<Object> tmp177;
    ca_.Bind(&block22, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
    ca_.Goto(&block18, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp177);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<JSArray> tmp180;
    compiler::TNode<JSArray> tmp181;
    compiler::TNode<JSArray> tmp182;
    compiler::TNode<Map> tmp183;
    compiler::TNode<BoolT> tmp184;
    compiler::TNode<BoolT> tmp185;
    compiler::TNode<BoolT> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<Context> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<Context> tmp191;
    compiler::TNode<Smi> tmp192;
    ca_.Bind(&block20, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3131);
    compiler::TNode<Object> tmp193;
    USE(tmp193);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp193 = LoadElementNoHole10FixedArray_234(state_, compiler::TNode<Context>{tmp191}, compiler::TNode<JSArray>{tmp182}, compiler::TNode<Smi>{tmp192}, &label0);
    ca_.Goto(&block24, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp182, tmp192, tmp193);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block25, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp182, tmp192);
    }
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<JSArray> tmp196;
    compiler::TNode<JSArray> tmp197;
    compiler::TNode<JSArray> tmp198;
    compiler::TNode<Map> tmp199;
    compiler::TNode<BoolT> tmp200;
    compiler::TNode<BoolT> tmp201;
    compiler::TNode<BoolT> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Context> tmp204;
    compiler::TNode<Smi> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<Context> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<JSArray> tmp209;
    compiler::TNode<Smi> tmp210;
    ca_.Bind(&block25, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210);
    ca_.Goto(&block17, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp211;
    compiler::TNode<Object> tmp212;
    compiler::TNode<JSArray> tmp213;
    compiler::TNode<JSArray> tmp214;
    compiler::TNode<JSArray> tmp215;
    compiler::TNode<Map> tmp216;
    compiler::TNode<BoolT> tmp217;
    compiler::TNode<BoolT> tmp218;
    compiler::TNode<BoolT> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Context> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<Context> tmp224;
    compiler::TNode<Smi> tmp225;
    compiler::TNode<JSArray> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<Object> tmp228;
    ca_.Bind(&block24, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228);
    ca_.Goto(&block18, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp228);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp229;
    compiler::TNode<Object> tmp230;
    compiler::TNode<JSArray> tmp231;
    compiler::TNode<JSArray> tmp232;
    compiler::TNode<JSArray> tmp233;
    compiler::TNode<Map> tmp234;
    compiler::TNode<BoolT> tmp235;
    compiler::TNode<BoolT> tmp236;
    compiler::TNode<BoolT> tmp237;
    compiler::TNode<Smi> tmp238;
    compiler::TNode<Context> tmp239;
    compiler::TNode<Smi> tmp240;
    compiler::TNode<Smi> tmp241;
    compiler::TNode<Context> tmp242;
    compiler::TNode<Smi> tmp243;
    compiler::TNode<Object> tmp244;
    ca_.Bind(&block18, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3150);
    ca_.Goto(&block15, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp244);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<JSArray> tmp247;
    compiler::TNode<JSArray> tmp248;
    compiler::TNode<JSArray> tmp249;
    compiler::TNode<Map> tmp250;
    compiler::TNode<BoolT> tmp251;
    compiler::TNode<BoolT> tmp252;
    compiler::TNode<BoolT> tmp253;
    compiler::TNode<Smi> tmp254;
    compiler::TNode<Context> tmp255;
    compiler::TNode<Smi> tmp256;
    ca_.Bind(&block17, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3153);
    compiler::TNode<Oddball> tmp257;
    USE(tmp257);
    tmp257 = Undefined_64(state_);
    ca_.Goto(&block15, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp258;
    compiler::TNode<Object> tmp259;
    compiler::TNode<JSArray> tmp260;
    compiler::TNode<JSArray> tmp261;
    compiler::TNode<JSArray> tmp262;
    compiler::TNode<Map> tmp263;
    compiler::TNode<BoolT> tmp264;
    compiler::TNode<BoolT> tmp265;
    compiler::TNode<BoolT> tmp266;
    compiler::TNode<Smi> tmp267;
    compiler::TNode<Context> tmp268;
    compiler::TNode<Smi> tmp269;
    compiler::TNode<Object> tmp270;
    ca_.Bind(&block15, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3165);
    StoreFastJSArrayLength_213(state_, compiler::TNode<JSArray>{tmp262}, compiler::TNode<Smi>{tmp267});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 33);
    ca_.Goto(&block26, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp270, tmp267, tmp267);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp271;
    compiler::TNode<Object> tmp272;
    compiler::TNode<JSArray> tmp273;
    compiler::TNode<JSArray> tmp274;
    compiler::TNode<JSArray> tmp275;
    compiler::TNode<Map> tmp276;
    compiler::TNode<BoolT> tmp277;
    compiler::TNode<BoolT> tmp278;
    compiler::TNode<BoolT> tmp279;
    compiler::TNode<Smi> tmp280;
    compiler::TNode<Object> tmp281;
    compiler::TNode<Smi> tmp282;
    compiler::TNode<Smi> tmp283;
    ca_.Bind(&block26, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 34);
    compiler::TNode<IntPtrT> tmp284;
    USE(tmp284);
    tmp284 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp280});
    compiler::TNode<IntPtrT> tmp285;
    USE(tmp285);
    tmp285 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<IntPtrT> tmp286;
    USE(tmp286);
    tmp286 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3187);
    ca_.Branch(tmp277, &block28, &block29, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp284, tmp285, tmp286, tmp284);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp287;
    compiler::TNode<Object> tmp288;
    compiler::TNode<JSArray> tmp289;
    compiler::TNode<JSArray> tmp290;
    compiler::TNode<JSArray> tmp291;
    compiler::TNode<Map> tmp292;
    compiler::TNode<BoolT> tmp293;
    compiler::TNode<BoolT> tmp294;
    compiler::TNode<BoolT> tmp295;
    compiler::TNode<Smi> tmp296;
    compiler::TNode<Object> tmp297;
    compiler::TNode<IntPtrT> tmp298;
    compiler::TNode<IntPtrT> tmp299;
    compiler::TNode<IntPtrT> tmp300;
    compiler::TNode<IntPtrT> tmp301;
    ca_.Bind(&block28, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3189);
    compiler::TNode<IntPtrT> tmp302 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp302);
    compiler::TNode<FixedArrayBase>tmp303 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp291, tmp302});
    compiler::TNode<FixedDoubleArray> tmp304;
    USE(tmp304);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp304 = Cast16FixedDoubleArray_104(state_, compiler::TNode<HeapObject>{tmp303}, &label0);
    ca_.Goto(&block33, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp303, tmp304);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block34, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp303);
    }
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp305;
    compiler::TNode<Object> tmp306;
    compiler::TNode<JSArray> tmp307;
    compiler::TNode<JSArray> tmp308;
    compiler::TNode<JSArray> tmp309;
    compiler::TNode<Map> tmp310;
    compiler::TNode<BoolT> tmp311;
    compiler::TNode<BoolT> tmp312;
    compiler::TNode<BoolT> tmp313;
    compiler::TNode<Smi> tmp314;
    compiler::TNode<Object> tmp315;
    compiler::TNode<IntPtrT> tmp316;
    compiler::TNode<IntPtrT> tmp317;
    compiler::TNode<IntPtrT> tmp318;
    compiler::TNode<IntPtrT> tmp319;
    compiler::TNode<FixedArrayBase> tmp320;
    ca_.Bind(&block34, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320);
    ca_.Goto(&block32, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp321;
    compiler::TNode<Object> tmp322;
    compiler::TNode<JSArray> tmp323;
    compiler::TNode<JSArray> tmp324;
    compiler::TNode<JSArray> tmp325;
    compiler::TNode<Map> tmp326;
    compiler::TNode<BoolT> tmp327;
    compiler::TNode<BoolT> tmp328;
    compiler::TNode<BoolT> tmp329;
    compiler::TNode<Smi> tmp330;
    compiler::TNode<Object> tmp331;
    compiler::TNode<IntPtrT> tmp332;
    compiler::TNode<IntPtrT> tmp333;
    compiler::TNode<IntPtrT> tmp334;
    compiler::TNode<IntPtrT> tmp335;
    compiler::TNode<FixedArrayBase> tmp336;
    compiler::TNode<FixedDoubleArray> tmp337;
    ca_.Bind(&block33, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337);
    ca_.Goto(&block31, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp337);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp338;
    compiler::TNode<Object> tmp339;
    compiler::TNode<JSArray> tmp340;
    compiler::TNode<JSArray> tmp341;
    compiler::TNode<JSArray> tmp342;
    compiler::TNode<Map> tmp343;
    compiler::TNode<BoolT> tmp344;
    compiler::TNode<BoolT> tmp345;
    compiler::TNode<BoolT> tmp346;
    compiler::TNode<Smi> tmp347;
    compiler::TNode<Object> tmp348;
    compiler::TNode<IntPtrT> tmp349;
    compiler::TNode<IntPtrT> tmp350;
    compiler::TNode<IntPtrT> tmp351;
    compiler::TNode<IntPtrT> tmp352;
    ca_.Bind(&block32, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3190);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp353;
    compiler::TNode<Object> tmp354;
    compiler::TNode<JSArray> tmp355;
    compiler::TNode<JSArray> tmp356;
    compiler::TNode<JSArray> tmp357;
    compiler::TNode<Map> tmp358;
    compiler::TNode<BoolT> tmp359;
    compiler::TNode<BoolT> tmp360;
    compiler::TNode<BoolT> tmp361;
    compiler::TNode<Smi> tmp362;
    compiler::TNode<Object> tmp363;
    compiler::TNode<IntPtrT> tmp364;
    compiler::TNode<IntPtrT> tmp365;
    compiler::TNode<IntPtrT> tmp366;
    compiler::TNode<IntPtrT> tmp367;
    compiler::TNode<FixedDoubleArray> tmp368;
    ca_.Bind(&block31, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3188);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3191);
    TorqueMoveElements_231(state_, compiler::TNode<FixedDoubleArray>{tmp368}, compiler::TNode<IntPtrT>{tmp365}, compiler::TNode<IntPtrT>{tmp366}, compiler::TNode<IntPtrT>{tmp367});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3187);
    ca_.Goto(&block30, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp369;
    compiler::TNode<Object> tmp370;
    compiler::TNode<JSArray> tmp371;
    compiler::TNode<JSArray> tmp372;
    compiler::TNode<JSArray> tmp373;
    compiler::TNode<Map> tmp374;
    compiler::TNode<BoolT> tmp375;
    compiler::TNode<BoolT> tmp376;
    compiler::TNode<BoolT> tmp377;
    compiler::TNode<Smi> tmp378;
    compiler::TNode<Object> tmp379;
    compiler::TNode<IntPtrT> tmp380;
    compiler::TNode<IntPtrT> tmp381;
    compiler::TNode<IntPtrT> tmp382;
    compiler::TNode<IntPtrT> tmp383;
    ca_.Bind(&block29, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3193);
    compiler::TNode<IntPtrT> tmp384 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp384);
    compiler::TNode<FixedArrayBase>tmp385 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp373, tmp384});
    compiler::TNode<FixedArray> tmp386;
    USE(tmp386);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp386 = Cast10FixedArray_103(state_, compiler::TNode<HeapObject>{tmp385}, &label0);
    ca_.Goto(&block37, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp385, tmp386);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block38, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp385);
    }
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp387;
    compiler::TNode<Object> tmp388;
    compiler::TNode<JSArray> tmp389;
    compiler::TNode<JSArray> tmp390;
    compiler::TNode<JSArray> tmp391;
    compiler::TNode<Map> tmp392;
    compiler::TNode<BoolT> tmp393;
    compiler::TNode<BoolT> tmp394;
    compiler::TNode<BoolT> tmp395;
    compiler::TNode<Smi> tmp396;
    compiler::TNode<Object> tmp397;
    compiler::TNode<IntPtrT> tmp398;
    compiler::TNode<IntPtrT> tmp399;
    compiler::TNode<IntPtrT> tmp400;
    compiler::TNode<IntPtrT> tmp401;
    compiler::TNode<FixedArrayBase> tmp402;
    ca_.Bind(&block38, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402);
    ca_.Goto(&block36, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp403;
    compiler::TNode<Object> tmp404;
    compiler::TNode<JSArray> tmp405;
    compiler::TNode<JSArray> tmp406;
    compiler::TNode<JSArray> tmp407;
    compiler::TNode<Map> tmp408;
    compiler::TNode<BoolT> tmp409;
    compiler::TNode<BoolT> tmp410;
    compiler::TNode<BoolT> tmp411;
    compiler::TNode<Smi> tmp412;
    compiler::TNode<Object> tmp413;
    compiler::TNode<IntPtrT> tmp414;
    compiler::TNode<IntPtrT> tmp415;
    compiler::TNode<IntPtrT> tmp416;
    compiler::TNode<IntPtrT> tmp417;
    compiler::TNode<FixedArrayBase> tmp418;
    compiler::TNode<FixedArray> tmp419;
    ca_.Bind(&block37, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419);
    ca_.Goto(&block35, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp419);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp420;
    compiler::TNode<Object> tmp421;
    compiler::TNode<JSArray> tmp422;
    compiler::TNode<JSArray> tmp423;
    compiler::TNode<JSArray> tmp424;
    compiler::TNode<Map> tmp425;
    compiler::TNode<BoolT> tmp426;
    compiler::TNode<BoolT> tmp427;
    compiler::TNode<BoolT> tmp428;
    compiler::TNode<Smi> tmp429;
    compiler::TNode<Object> tmp430;
    compiler::TNode<IntPtrT> tmp431;
    compiler::TNode<IntPtrT> tmp432;
    compiler::TNode<IntPtrT> tmp433;
    compiler::TNode<IntPtrT> tmp434;
    ca_.Bind(&block36, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3194);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp435;
    compiler::TNode<Object> tmp436;
    compiler::TNode<JSArray> tmp437;
    compiler::TNode<JSArray> tmp438;
    compiler::TNode<JSArray> tmp439;
    compiler::TNode<Map> tmp440;
    compiler::TNode<BoolT> tmp441;
    compiler::TNode<BoolT> tmp442;
    compiler::TNode<BoolT> tmp443;
    compiler::TNode<Smi> tmp444;
    compiler::TNode<Object> tmp445;
    compiler::TNode<IntPtrT> tmp446;
    compiler::TNode<IntPtrT> tmp447;
    compiler::TNode<IntPtrT> tmp448;
    compiler::TNode<IntPtrT> tmp449;
    compiler::TNode<FixedArray> tmp450;
    ca_.Bind(&block35, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3193);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3195);
    ca_.Branch(tmp442, &block39, &block40, tmp435, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp451;
    compiler::TNode<Object> tmp452;
    compiler::TNode<JSArray> tmp453;
    compiler::TNode<JSArray> tmp454;
    compiler::TNode<JSArray> tmp455;
    compiler::TNode<Map> tmp456;
    compiler::TNode<BoolT> tmp457;
    compiler::TNode<BoolT> tmp458;
    compiler::TNode<BoolT> tmp459;
    compiler::TNode<Smi> tmp460;
    compiler::TNode<Object> tmp461;
    compiler::TNode<IntPtrT> tmp462;
    compiler::TNode<IntPtrT> tmp463;
    compiler::TNode<IntPtrT> tmp464;
    compiler::TNode<IntPtrT> tmp465;
    compiler::TNode<FixedArray> tmp466;
    ca_.Bind(&block39, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3196);
    TorqueMoveElementsSmi_229(state_, compiler::TNode<FixedArray>{tmp466}, compiler::TNode<IntPtrT>{tmp463}, compiler::TNode<IntPtrT>{tmp464}, compiler::TNode<IntPtrT>{tmp465});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3195);
    ca_.Goto(&block41, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465, tmp466);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp467;
    compiler::TNode<Object> tmp468;
    compiler::TNode<JSArray> tmp469;
    compiler::TNode<JSArray> tmp470;
    compiler::TNode<JSArray> tmp471;
    compiler::TNode<Map> tmp472;
    compiler::TNode<BoolT> tmp473;
    compiler::TNode<BoolT> tmp474;
    compiler::TNode<BoolT> tmp475;
    compiler::TNode<Smi> tmp476;
    compiler::TNode<Object> tmp477;
    compiler::TNode<IntPtrT> tmp478;
    compiler::TNode<IntPtrT> tmp479;
    compiler::TNode<IntPtrT> tmp480;
    compiler::TNode<IntPtrT> tmp481;
    compiler::TNode<FixedArray> tmp482;
    ca_.Bind(&block40, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3198);
    TorqueMoveElements_230(state_, compiler::TNode<FixedArray>{tmp482}, compiler::TNode<IntPtrT>{tmp479}, compiler::TNode<IntPtrT>{tmp480}, compiler::TNode<IntPtrT>{tmp481});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3195);
    ca_.Goto(&block41, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp483;
    compiler::TNode<Object> tmp484;
    compiler::TNode<JSArray> tmp485;
    compiler::TNode<JSArray> tmp486;
    compiler::TNode<JSArray> tmp487;
    compiler::TNode<Map> tmp488;
    compiler::TNode<BoolT> tmp489;
    compiler::TNode<BoolT> tmp490;
    compiler::TNode<BoolT> tmp491;
    compiler::TNode<Smi> tmp492;
    compiler::TNode<Object> tmp493;
    compiler::TNode<IntPtrT> tmp494;
    compiler::TNode<IntPtrT> tmp495;
    compiler::TNode<IntPtrT> tmp496;
    compiler::TNode<IntPtrT> tmp497;
    compiler::TNode<FixedArray> tmp498;
    ca_.Bind(&block41, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3192);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3187);
    ca_.Goto(&block30, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp499;
    compiler::TNode<Object> tmp500;
    compiler::TNode<JSArray> tmp501;
    compiler::TNode<JSArray> tmp502;
    compiler::TNode<JSArray> tmp503;
    compiler::TNode<Map> tmp504;
    compiler::TNode<BoolT> tmp505;
    compiler::TNode<BoolT> tmp506;
    compiler::TNode<BoolT> tmp507;
    compiler::TNode<Smi> tmp508;
    compiler::TNode<Object> tmp509;
    compiler::TNode<IntPtrT> tmp510;
    compiler::TNode<IntPtrT> tmp511;
    compiler::TNode<IntPtrT> tmp512;
    compiler::TNode<IntPtrT> tmp513;
    ca_.Bind(&block30, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 34);
    ca_.Goto(&block27, tmp499, tmp500, tmp501, tmp502, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp514;
    compiler::TNode<Object> tmp515;
    compiler::TNode<JSArray> tmp516;
    compiler::TNode<JSArray> tmp517;
    compiler::TNode<JSArray> tmp518;
    compiler::TNode<Map> tmp519;
    compiler::TNode<BoolT> tmp520;
    compiler::TNode<BoolT> tmp521;
    compiler::TNode<BoolT> tmp522;
    compiler::TNode<Smi> tmp523;
    compiler::TNode<Object> tmp524;
    compiler::TNode<IntPtrT> tmp525;
    compiler::TNode<IntPtrT> tmp526;
    compiler::TNode<IntPtrT> tmp527;
    compiler::TNode<IntPtrT> tmp528;
    ca_.Bind(&block27, &tmp514, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 35);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3137);
    ca_.Branch(tmp520, &block43, &block44, tmp514, tmp515, tmp516, tmp517, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp523, tmp523);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp529;
    compiler::TNode<Object> tmp530;
    compiler::TNode<JSArray> tmp531;
    compiler::TNode<JSArray> tmp532;
    compiler::TNode<JSArray> tmp533;
    compiler::TNode<Map> tmp534;
    compiler::TNode<BoolT> tmp535;
    compiler::TNode<BoolT> tmp536;
    compiler::TNode<BoolT> tmp537;
    compiler::TNode<Smi> tmp538;
    compiler::TNode<Object> tmp539;
    compiler::TNode<Smi> tmp540;
    compiler::TNode<Smi> tmp541;
    ca_.Bind(&block43, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3138);
    compiler::TNode<IntPtrT> tmp542 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp542);
    compiler::TNode<FixedArrayBase>tmp543 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp533, tmp542});
    compiler::TNode<FixedDoubleArray> tmp544;
    USE(tmp544);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp544 = Cast16FixedDoubleArray_104(state_, compiler::TNode<HeapObject>{tmp543}, &label0);
    ca_.Goto(&block48, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp541, tmp543, tmp544);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block49, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp541, tmp543);
    }
  }

  if (block49.is_used()) {
    compiler::TNode<Context> tmp545;
    compiler::TNode<Object> tmp546;
    compiler::TNode<JSArray> tmp547;
    compiler::TNode<JSArray> tmp548;
    compiler::TNode<JSArray> tmp549;
    compiler::TNode<Map> tmp550;
    compiler::TNode<BoolT> tmp551;
    compiler::TNode<BoolT> tmp552;
    compiler::TNode<BoolT> tmp553;
    compiler::TNode<Smi> tmp554;
    compiler::TNode<Object> tmp555;
    compiler::TNode<Smi> tmp556;
    compiler::TNode<Smi> tmp557;
    compiler::TNode<FixedArrayBase> tmp558;
    ca_.Bind(&block49, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558);
    ca_.Goto(&block47, tmp545, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557);
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp559;
    compiler::TNode<Object> tmp560;
    compiler::TNode<JSArray> tmp561;
    compiler::TNode<JSArray> tmp562;
    compiler::TNode<JSArray> tmp563;
    compiler::TNode<Map> tmp564;
    compiler::TNode<BoolT> tmp565;
    compiler::TNode<BoolT> tmp566;
    compiler::TNode<BoolT> tmp567;
    compiler::TNode<Smi> tmp568;
    compiler::TNode<Object> tmp569;
    compiler::TNode<Smi> tmp570;
    compiler::TNode<Smi> tmp571;
    compiler::TNode<FixedArrayBase> tmp572;
    compiler::TNode<FixedDoubleArray> tmp573;
    ca_.Bind(&block48, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573);
    ca_.Goto(&block46, tmp559, tmp560, tmp561, tmp562, tmp563, tmp564, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp573);
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp574;
    compiler::TNode<Object> tmp575;
    compiler::TNode<JSArray> tmp576;
    compiler::TNode<JSArray> tmp577;
    compiler::TNode<JSArray> tmp578;
    compiler::TNode<Map> tmp579;
    compiler::TNode<BoolT> tmp580;
    compiler::TNode<BoolT> tmp581;
    compiler::TNode<BoolT> tmp582;
    compiler::TNode<Smi> tmp583;
    compiler::TNode<Object> tmp584;
    compiler::TNode<Smi> tmp585;
    compiler::TNode<Smi> tmp586;
    ca_.Bind(&block47, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3139);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp587;
    compiler::TNode<Object> tmp588;
    compiler::TNode<JSArray> tmp589;
    compiler::TNode<JSArray> tmp590;
    compiler::TNode<JSArray> tmp591;
    compiler::TNode<Map> tmp592;
    compiler::TNode<BoolT> tmp593;
    compiler::TNode<BoolT> tmp594;
    compiler::TNode<BoolT> tmp595;
    compiler::TNode<Smi> tmp596;
    compiler::TNode<Object> tmp597;
    compiler::TNode<Smi> tmp598;
    compiler::TNode<Smi> tmp599;
    compiler::TNode<FixedDoubleArray> tmp600;
    ca_.Bind(&block46, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3140);
    CodeStubAssembler(state_).StoreFixedDoubleArrayHoleSmi(compiler::TNode<FixedDoubleArray>{tmp600}, compiler::TNode<Smi>{tmp599});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3137);
    ca_.Goto(&block45, tmp587, tmp588, tmp589, tmp590, tmp591, tmp592, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599);
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp601;
    compiler::TNode<Object> tmp602;
    compiler::TNode<JSArray> tmp603;
    compiler::TNode<JSArray> tmp604;
    compiler::TNode<JSArray> tmp605;
    compiler::TNode<Map> tmp606;
    compiler::TNode<BoolT> tmp607;
    compiler::TNode<BoolT> tmp608;
    compiler::TNode<BoolT> tmp609;
    compiler::TNode<Smi> tmp610;
    compiler::TNode<Object> tmp611;
    compiler::TNode<Smi> tmp612;
    compiler::TNode<Smi> tmp613;
    ca_.Bind(&block44, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3142);
    compiler::TNode<IntPtrT> tmp614 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp614);
    compiler::TNode<FixedArrayBase>tmp615 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp605, tmp614});
    compiler::TNode<FixedArray> tmp616;
    USE(tmp616);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp616 = Cast10FixedArray_103(state_, compiler::TNode<HeapObject>{tmp615}, &label0);
    ca_.Goto(&block52, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp615, tmp616);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block53, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp615);
    }
  }

  if (block53.is_used()) {
    compiler::TNode<Context> tmp617;
    compiler::TNode<Object> tmp618;
    compiler::TNode<JSArray> tmp619;
    compiler::TNode<JSArray> tmp620;
    compiler::TNode<JSArray> tmp621;
    compiler::TNode<Map> tmp622;
    compiler::TNode<BoolT> tmp623;
    compiler::TNode<BoolT> tmp624;
    compiler::TNode<BoolT> tmp625;
    compiler::TNode<Smi> tmp626;
    compiler::TNode<Object> tmp627;
    compiler::TNode<Smi> tmp628;
    compiler::TNode<Smi> tmp629;
    compiler::TNode<FixedArrayBase> tmp630;
    ca_.Bind(&block53, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630);
    ca_.Goto(&block51, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp629);
  }

  if (block52.is_used()) {
    compiler::TNode<Context> tmp631;
    compiler::TNode<Object> tmp632;
    compiler::TNode<JSArray> tmp633;
    compiler::TNode<JSArray> tmp634;
    compiler::TNode<JSArray> tmp635;
    compiler::TNode<Map> tmp636;
    compiler::TNode<BoolT> tmp637;
    compiler::TNode<BoolT> tmp638;
    compiler::TNode<BoolT> tmp639;
    compiler::TNode<Smi> tmp640;
    compiler::TNode<Object> tmp641;
    compiler::TNode<Smi> tmp642;
    compiler::TNode<Smi> tmp643;
    compiler::TNode<FixedArrayBase> tmp644;
    compiler::TNode<FixedArray> tmp645;
    ca_.Bind(&block52, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645);
    ca_.Goto(&block50, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp645);
  }

  if (block51.is_used()) {
    compiler::TNode<Context> tmp646;
    compiler::TNode<Object> tmp647;
    compiler::TNode<JSArray> tmp648;
    compiler::TNode<JSArray> tmp649;
    compiler::TNode<JSArray> tmp650;
    compiler::TNode<Map> tmp651;
    compiler::TNode<BoolT> tmp652;
    compiler::TNode<BoolT> tmp653;
    compiler::TNode<BoolT> tmp654;
    compiler::TNode<Smi> tmp655;
    compiler::TNode<Object> tmp656;
    compiler::TNode<Smi> tmp657;
    compiler::TNode<Smi> tmp658;
    ca_.Bind(&block51, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3143);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block50.is_used()) {
    compiler::TNode<Context> tmp659;
    compiler::TNode<Object> tmp660;
    compiler::TNode<JSArray> tmp661;
    compiler::TNode<JSArray> tmp662;
    compiler::TNode<JSArray> tmp663;
    compiler::TNode<Map> tmp664;
    compiler::TNode<BoolT> tmp665;
    compiler::TNode<BoolT> tmp666;
    compiler::TNode<BoolT> tmp667;
    compiler::TNode<Smi> tmp668;
    compiler::TNode<Object> tmp669;
    compiler::TNode<Smi> tmp670;
    compiler::TNode<Smi> tmp671;
    compiler::TNode<FixedArray> tmp672;
    ca_.Bind(&block50, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3144);
    compiler::TNode<Oddball> tmp673;
    USE(tmp673);
    tmp673 = TheHole_62(state_);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp672}, compiler::TNode<Smi>{tmp671}, compiler::TNode<Object>{tmp673});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3141);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3137);
    ca_.Goto(&block45, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664, tmp665, tmp666, tmp667, tmp668, tmp669, tmp670, tmp671);
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp674;
    compiler::TNode<Object> tmp675;
    compiler::TNode<JSArray> tmp676;
    compiler::TNode<JSArray> tmp677;
    compiler::TNode<JSArray> tmp678;
    compiler::TNode<Map> tmp679;
    compiler::TNode<BoolT> tmp680;
    compiler::TNode<BoolT> tmp681;
    compiler::TNode<BoolT> tmp682;
    compiler::TNode<Smi> tmp683;
    compiler::TNode<Object> tmp684;
    compiler::TNode<Smi> tmp685;
    compiler::TNode<Smi> tmp686;
    ca_.Bind(&block45, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 35);
    ca_.Goto(&block42, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp686);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp687;
    compiler::TNode<Object> tmp688;
    compiler::TNode<JSArray> tmp689;
    compiler::TNode<JSArray> tmp690;
    compiler::TNode<JSArray> tmp691;
    compiler::TNode<Map> tmp692;
    compiler::TNode<BoolT> tmp693;
    compiler::TNode<BoolT> tmp694;
    compiler::TNode<BoolT> tmp695;
    compiler::TNode<Smi> tmp696;
    compiler::TNode<Object> tmp697;
    compiler::TNode<Smi> tmp698;
    compiler::TNode<Smi> tmp699;
    ca_.Bind(&block42, &tmp687, &tmp688, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 36);
    ca_.Goto(&block3, tmp687, tmp688, tmp697);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp700;
    compiler::TNode<Object> tmp701;
    compiler::TNode<Object> tmp702;
    ca_.Bind(&block3, &tmp700, &tmp701, &tmp702);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 8);
    ca_.Goto(&block54, tmp700, tmp701, tmp702);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Slow);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_Runtime);
  }

    compiler::TNode<Context> tmp703;
    compiler::TNode<Object> tmp704;
    compiler::TNode<Object> tmp705;
    ca_.Bind(&block54, &tmp703, &tmp704, &tmp705);
  return compiler::TNode<Object>{tmp705};
}

compiler::TNode<Object> GenericArrayShift_37(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number, Oddball> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number, Oddball> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 42);
    compiler::TNode<JSReceiver> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 45);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = GetLengthProperty_244(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 48);
    compiler::TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = IsNumberEqual_73(state_, compiler::TNode<Number>{tmp3}, compiler::TNode<Number>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp0, tmp1, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 50);
    compiler::TNode<String> tmp10;
    USE(tmp10);
    tmp10 = kLengthString_68(state_);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = Convert5ATSmi17ATconstexpr_int31_1340(state_, 0);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp6, tmp8, tmp10, tmp11);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 52);
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Undefined_64(state_);
    ca_.Goto(&block1, tmp6, tmp7, tmp13);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Number> tmp17;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 56);
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = Convert5ATSmi17ATconstexpr_int31_1340(state_, 0);
    compiler::TNode<Object> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp14}, compiler::TNode<Object>{tmp16}, compiler::TNode<Object>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 58);
    compiler::TNode<Number> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 60);
    ca_.Goto(&block6, tmp14, tmp15, tmp16, tmp17, tmp19, tmp20);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    compiler::TNode<Number> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block6, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp26}, compiler::TNode<Number>{tmp24});
    ca_.Branch(tmp27, &block4, &block5, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<JSReceiver> tmp30;
    compiler::TNode<Number> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 65);
    compiler::TNode<Number> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp33}, compiler::TNode<Number>{tmp34});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 68);
    compiler::TNode<Oddball> tmp36;
    tmp36 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp28, tmp30, tmp33));
    USE(tmp36);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 71);
    compiler::TNode<Oddball> tmp37;
    USE(tmp37);
    tmp37 = True_65(state_);
    compiler::TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp36}, compiler::TNode<HeapObject>{tmp37});
    ca_.Branch(tmp38, &block7, &block8, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp33, tmp35, tmp36);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Number> tmp44;
    compiler::TNode<Number> tmp45;
    compiler::TNode<Number> tmp46;
    compiler::TNode<Oddball> tmp47;
    ca_.Bind(&block7, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 73);
    compiler::TNode<Object> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp39}, compiler::TNode<Object>{tmp41}, compiler::TNode<Object>{tmp45});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 76);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp39, tmp41, tmp46, tmp48);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 71);
    ca_.Goto(&block9, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Number> tmp55;
    compiler::TNode<Number> tmp56;
    compiler::TNode<Number> tmp57;
    compiler::TNode<Oddball> tmp58;
    ca_.Bind(&block8, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 79);
    compiler::TNode<Smi> tmp59;
    USE(tmp59);
    tmp59 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_166(state_, LanguageMode::kStrict);
    compiler::TNode<Oddball> tmp60;
    tmp60 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp50, tmp52, tmp57, tmp59));
    USE(tmp60);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 71);
    ca_.Goto(&block9, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    compiler::TNode<Number> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<Number> tmp66;
    compiler::TNode<Number> tmp67;
    compiler::TNode<Number> tmp68;
    compiler::TNode<Oddball> tmp69;
    ca_.Bind(&block9, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 83);
    compiler::TNode<Number> tmp70;
    USE(tmp70);
    tmp70 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp71;
    USE(tmp71);
    tmp71 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp66}, compiler::TNode<Number>{tmp70});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 60);
    ca_.Goto(&block6, tmp61, tmp62, tmp63, tmp64, tmp65, tmp71);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<JSReceiver> tmp74;
    compiler::TNode<Number> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Number> tmp77;
    ca_.Bind(&block5, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 87);
    compiler::TNode<Number> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp75}, compiler::TNode<Number>{tmp78});
    compiler::TNode<Smi> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_166(state_, LanguageMode::kStrict);
    compiler::TNode<Oddball> tmp81;
    tmp81 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp72, tmp74, tmp79, tmp80));
    USE(tmp81);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 90);
    compiler::TNode<String> tmp82;
    USE(tmp82);
    tmp82 = kLengthString_68(state_);
    compiler::TNode<Number> tmp83;
    USE(tmp83);
    tmp83 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp75}, compiler::TNode<Number>{tmp83});
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp72, tmp74, tmp82, tmp84);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 93);
    ca_.Goto(&block1, tmp72, tmp73, tmp76);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    ca_.Bind(&block1, &tmp86, &tmp87, &tmp88);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 39);
    ca_.Goto(&block10, tmp86, tmp87, tmp88);
  }

    compiler::TNode<Context> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    ca_.Bind(&block10, &tmp89, &tmp90, &tmp91);
  return compiler::TNode<Object>{tmp91};
}

TF_BUILTIN(ArrayPrototypeShift, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 100);
    compiler::TNode<Object> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp5 = TryFastArrayShift_36(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, &label0, &label1);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp6;
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    compiler::TNode<Context> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block7, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<RawPtrT> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    ca_.Bind(&block5, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    arguments.PopAndReturn(tmp24);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    ca_.Bind(&block4, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 103);
    compiler::TNode<Object> tmp30;
    USE(tmp30);
    tmp30 = GenericArrayShift_37(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp29});
    arguments.PopAndReturn(tmp30);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<RawPtrT> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    ca_.Bind(&block2, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 107);
    compiler::TNode<JSFunction> tmp36;
    USE(tmp36);
    tmp36 = LoadTargetFromFrame_304(state_);
    compiler::TNode<Oddball> tmp37;
    USE(tmp37);
    tmp37 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 108);
    compiler::TNode<Int32T> tmp38;
    USE(tmp38);
    tmp38 = Convert7ATint328ATintptr_183(state_, compiler::TNode<IntPtrT>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 106);
   CodeStubAssembler(state_).TailCallBuiltin(Builtins::kArrayShift, tmp34, tmp36, tmp37, tmp38);
  }
}

}  // namespace internal
}  // namespace v8

