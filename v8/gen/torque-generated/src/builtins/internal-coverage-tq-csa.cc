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

compiler::TNode<FixedArray> GetCoverageInfo_306(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_function, compiler::CodeAssemblerLabel* label_IfNoCoverageInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, HeapObject, DebugInfo> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, DebugInfo> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, DebugInfo> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, DebugInfo> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, FixedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_function);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSFunction> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 23);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSFunction::kSharedFunctionInfoOffset);
    USE(tmp2);
    compiler::TNode<SharedFunctionInfo>tmp3 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp1, tmp2});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 24);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(SharedFunctionInfo::kScriptOrDebugInfoOffset);
    USE(tmp4);
    compiler::TNode<HeapObject>tmp5 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp3, tmp4});
    compiler::TNode<DebugInfo> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast9DebugInfo_142(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp5}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp3, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp3, tmp5);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSFunction> tmp8;
    compiler::TNode<SharedFunctionInfo> tmp9;
    compiler::TNode<HeapObject> tmp10;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block4, tmp7, tmp8, tmp9);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSFunction> tmp12;
    compiler::TNode<SharedFunctionInfo> tmp13;
    compiler::TNode<HeapObject> tmp14;
    compiler::TNode<DebugInfo> tmp15;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block3, tmp11, tmp12, tmp13, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSFunction> tmp17;
    compiler::TNode<SharedFunctionInfo> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 25);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSFunction> tmp20;
    compiler::TNode<SharedFunctionInfo> tmp21;
    compiler::TNode<DebugInfo> tmp22;
    ca_.Bind(&block3, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 27);
    compiler::TNode<IntPtrT> tmp23 = ca_.IntPtrConstant(DebugInfo::kFlagsOffset);
    USE(tmp23);
    compiler::TNode<Smi>tmp24 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp22, tmp23});
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, DebugInfo::kHasCoverageInfo);
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiAnd(compiler::TNode<Smi>{tmp24}, compiler::TNode<Smi>{tmp25});
    compiler::TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp26}, compiler::TNode<Smi>{tmp27});
    ca_.Branch(tmp28, &block7, &block8, tmp19, tmp20, tmp21, tmp22);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSFunction> tmp30;
    compiler::TNode<SharedFunctionInfo> tmp31;
    compiler::TNode<DebugInfo> tmp32;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSFunction> tmp34;
    compiler::TNode<SharedFunctionInfo> tmp35;
    compiler::TNode<DebugInfo> tmp36;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 28);
    compiler::TNode<IntPtrT> tmp37 = ca_.IntPtrConstant(DebugInfo::kCoverageInfoOffset);
    USE(tmp37);
    compiler::TNode<HeapObject>tmp38 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp36, tmp37});
    compiler::TNode<FixedArray> tmp39;
    USE(tmp39);
    tmp39 = UnsafeCast14ATCoverageInfo_1396(state_, compiler::TNode<Context>{tmp33}, compiler::TNode<Object>{tmp38});
    ca_.Goto(&block2, tmp33, tmp34, tmp39);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSFunction> tmp41;
    compiler::TNode<FixedArray> tmp42;
    ca_.Bind(&block2, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 21);
    ca_.Goto(&block9, tmp40, tmp41, tmp42);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfNoCoverageInfo);
  }

    compiler::TNode<Context> tmp43;
    compiler::TNode<JSFunction> tmp44;
    compiler::TNode<FixedArray> tmp45;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45);
  return compiler::TNode<FixedArray>{tmp45};
}

compiler::TNode<Smi> SlotCount_307(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_coverageInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_coverageInfo);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 36);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiSar(compiler::TNode<Smi>{tmp2}, CoverageInfo::kSlotIndexCountLog2);
    ca_.Goto(&block1, tmp0, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block1, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 31);
    ca_.Goto(&block2, tmp4, tmp5);
  }

    compiler::TNode<FixedArray> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
  return compiler::TNode<Smi>{tmp7};
}

compiler::TNode<Smi> FirstIndexForSlot_308(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_slot) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_slot);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 41);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiShl(compiler::TNode<Smi>{tmp1}, CoverageInfo::kSlotIndexCountLog2);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 39);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Smi>{tmp8};
}

void IncrementBlockCount_309(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_coverageInfo, compiler::TNode<Smi> p_slot) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_coverageInfo, p_slot);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 47);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FirstIndexForSlot_308(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 48);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, CoverageInfo::kSlotBlockCountIndex);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 49);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp6);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp7);
    compiler::TNode<Smi>tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp7});
    compiler::TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp8});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp10});
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp9});
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp11}, compiler::TNode<UintPtrT>{tmp12});
    ca_.Branch(tmp13, &block6, &block7, tmp0, tmp1, tmp2, tmp3, tmp5, tmp1, tmp6, tmp9, tmp5, tmp5, tmp10, tmp1, tmp6, tmp9, tmp10, tmp10);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<FixedArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<FixedArray> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<HeapObject> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    ca_.Bind(&block6, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp29}, compiler::TNode<IntPtrT>{tmp30});
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp26}, compiler::TNode<IntPtrT>{tmp31});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp33;
    USE(tmp33);
    compiler::TNode<IntPtrT> tmp34;
    USE(tmp34);
    std::tie(tmp33, tmp34) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp25}, compiler::TNode<IntPtrT>{tmp32}).Flatten();
    ca_.Goto(&block5, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp33, tmp34);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<FixedArray> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<Smi> tmp39;
    compiler::TNode<FixedArray> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<HeapObject> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    ca_.Bind(&block7, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<FixedArray> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<FixedArray> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Smi> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<HeapObject> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    compiler::TNode<IntPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    compiler::TNode<HeapObject> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    ca_.Bind(&block5, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block3, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp67, tmp68);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<FixedArray> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<FixedArray> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    ca_.Bind(&block4, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp80;
    compiler::TNode<FixedArray> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<FixedArray> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<IntPtrT> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<IntPtrT> tmp90;
    compiler::TNode<HeapObject> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    ca_.Bind(&block3, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.Goto(&block2, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp91, tmp92);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<FixedArray> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<Smi> tmp97;
    compiler::TNode<FixedArray> tmp98;
    compiler::TNode<IntPtrT> tmp99;
    compiler::TNode<IntPtrT> tmp100;
    compiler::TNode<Smi> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<HeapObject> tmp103;
    compiler::TNode<IntPtrT> tmp104;
    ca_.Bind(&block2, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 50);
    compiler::TNode<IntPtrT> tmp105 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp105);
    compiler::TNode<IntPtrT> tmp106 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp106);
    compiler::TNode<Smi>tmp107 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp94, tmp106});
    compiler::TNode<IntPtrT> tmp108;
    USE(tmp108);
    tmp108 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp107});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp109;
    USE(tmp109);
    tmp109 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp97});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp110;
    USE(tmp110);
    tmp110 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp109});
    compiler::TNode<UintPtrT> tmp111;
    USE(tmp111);
    tmp111 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp108});
    compiler::TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp110}, compiler::TNode<UintPtrT>{tmp111});
    ca_.Branch(tmp112, &block13, &block14, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp94, tmp105, tmp108, tmp97, tmp97, tmp109, tmp94, tmp105, tmp108, tmp109, tmp109);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<FixedArray> tmp114;
    compiler::TNode<Smi> tmp115;
    compiler::TNode<Smi> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<FixedArray> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<IntPtrT> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Smi> tmp122;
    compiler::TNode<HeapObject> tmp123;
    compiler::TNode<IntPtrT> tmp124;
    compiler::TNode<FixedArray> tmp125;
    compiler::TNode<IntPtrT> tmp126;
    compiler::TNode<IntPtrT> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<IntPtrT> tmp130;
    compiler::TNode<HeapObject> tmp131;
    compiler::TNode<IntPtrT> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<IntPtrT> tmp134;
    compiler::TNode<IntPtrT> tmp135;
    ca_.Bind(&block13, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp136;
    USE(tmp136);
    tmp136 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp137;
    USE(tmp137);
    tmp137 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp135}, compiler::TNode<IntPtrT>{tmp136});
    compiler::TNode<IntPtrT> tmp138;
    USE(tmp138);
    tmp138 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp132}, compiler::TNode<IntPtrT>{tmp137});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp139;
    USE(tmp139);
    compiler::TNode<IntPtrT> tmp140;
    USE(tmp140);
    std::tie(tmp139, tmp140) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp131}, compiler::TNode<IntPtrT>{tmp138}).Flatten();
    ca_.Goto(&block12, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp139, tmp140);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp141;
    compiler::TNode<FixedArray> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<Smi> tmp144;
    compiler::TNode<Smi> tmp145;
    compiler::TNode<FixedArray> tmp146;
    compiler::TNode<IntPtrT> tmp147;
    compiler::TNode<IntPtrT> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<Smi> tmp150;
    compiler::TNode<HeapObject> tmp151;
    compiler::TNode<IntPtrT> tmp152;
    compiler::TNode<FixedArray> tmp153;
    compiler::TNode<IntPtrT> tmp154;
    compiler::TNode<IntPtrT> tmp155;
    compiler::TNode<Smi> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<IntPtrT> tmp158;
    compiler::TNode<HeapObject> tmp159;
    compiler::TNode<IntPtrT> tmp160;
    compiler::TNode<IntPtrT> tmp161;
    compiler::TNode<IntPtrT> tmp162;
    compiler::TNode<IntPtrT> tmp163;
    ca_.Bind(&block14, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block11, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp164;
    compiler::TNode<FixedArray> tmp165;
    compiler::TNode<Smi> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<FixedArray> tmp169;
    compiler::TNode<IntPtrT> tmp170;
    compiler::TNode<IntPtrT> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Smi> tmp173;
    compiler::TNode<HeapObject> tmp174;
    compiler::TNode<IntPtrT> tmp175;
    compiler::TNode<FixedArray> tmp176;
    compiler::TNode<IntPtrT> tmp177;
    compiler::TNode<IntPtrT> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<IntPtrT> tmp181;
    compiler::TNode<HeapObject> tmp182;
    compiler::TNode<IntPtrT> tmp183;
    compiler::TNode<IntPtrT> tmp184;
    compiler::TNode<IntPtrT> tmp185;
    compiler::TNode<IntPtrT> tmp186;
    compiler::TNode<HeapObject> tmp187;
    compiler::TNode<IntPtrT> tmp188;
    ca_.Bind(&block12, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block10, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp187, tmp188);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp189;
    compiler::TNode<FixedArray> tmp190;
    compiler::TNode<Smi> tmp191;
    compiler::TNode<Smi> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<FixedArray> tmp194;
    compiler::TNode<IntPtrT> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<Smi> tmp197;
    compiler::TNode<Smi> tmp198;
    compiler::TNode<HeapObject> tmp199;
    compiler::TNode<IntPtrT> tmp200;
    compiler::TNode<FixedArray> tmp201;
    compiler::TNode<IntPtrT> tmp202;
    compiler::TNode<IntPtrT> tmp203;
    compiler::TNode<Smi> tmp204;
    compiler::TNode<Smi> tmp205;
    compiler::TNode<IntPtrT> tmp206;
    ca_.Bind(&block11, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp207;
    compiler::TNode<FixedArray> tmp208;
    compiler::TNode<Smi> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<FixedArray> tmp212;
    compiler::TNode<IntPtrT> tmp213;
    compiler::TNode<IntPtrT> tmp214;
    compiler::TNode<Smi> tmp215;
    compiler::TNode<Smi> tmp216;
    compiler::TNode<HeapObject> tmp217;
    compiler::TNode<IntPtrT> tmp218;
    compiler::TNode<FixedArray> tmp219;
    compiler::TNode<IntPtrT> tmp220;
    compiler::TNode<IntPtrT> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<IntPtrT> tmp224;
    compiler::TNode<HeapObject> tmp225;
    compiler::TNode<IntPtrT> tmp226;
    ca_.Bind(&block10, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.Goto(&block9, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp225, tmp226);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp227;
    compiler::TNode<FixedArray> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Smi> tmp231;
    compiler::TNode<FixedArray> tmp232;
    compiler::TNode<IntPtrT> tmp233;
    compiler::TNode<IntPtrT> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<HeapObject> tmp237;
    compiler::TNode<IntPtrT> tmp238;
    compiler::TNode<FixedArray> tmp239;
    compiler::TNode<IntPtrT> tmp240;
    compiler::TNode<IntPtrT> tmp241;
    compiler::TNode<Smi> tmp242;
    compiler::TNode<Smi> tmp243;
    compiler::TNode<HeapObject> tmp244;
    compiler::TNode<IntPtrT> tmp245;
    ca_.Bind(&block9, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 50);
    compiler::TNode<Object>tmp246 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp244, tmp245});
    compiler::TNode<Smi> tmp247;
    USE(tmp247);
    tmp247 = UnsafeCast5ATSmi_1344(state_, compiler::TNode<Context>{tmp227}, compiler::TNode<Object>{tmp246});
    compiler::TNode<Smi> tmp248;
    USE(tmp248);
    tmp248 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp249;
    USE(tmp249);
    tmp249 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp247}, compiler::TNode<Smi>{tmp248});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 49);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp237, tmp238}, tmp249);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 45);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 44);
    ca_.Goto(&block1, tmp227, tmp228, tmp229);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp250;
    compiler::TNode<FixedArray> tmp251;
    compiler::TNode<Smi> tmp252;
    ca_.Bind(&block1, &tmp250, &tmp251, &tmp252);
    ca_.Goto(&block16, tmp250, tmp251, tmp252);
  }

    compiler::TNode<Context> tmp253;
    compiler::TNode<FixedArray> tmp254;
    compiler::TNode<Smi> tmp255;
    ca_.Bind(&block16, &tmp253, &tmp254, &tmp255);
}

TF_BUILTIN(IncBlockCounter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSFunction> parameter1 = UncheckedCast<JSFunction>(Parameter(Descriptor::kFunction));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kCoverageArraySlotIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi, JSFunction> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi, JSFunction, FixedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSFunction> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 61);
    compiler::TNode<FixedArray> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = GetCoverageInfo_306(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<JSFunction>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<JSFunction> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<JSFunction> tmp7;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSFunction> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<JSFunction> tmp11;
    compiler::TNode<FixedArray> tmp12;
    ca_.Bind(&block3, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block1, tmp8, tmp9, tmp10, tmp12);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<JSFunction> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    compiler::TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp16);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSFunction> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<FixedArray> tmp20;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 60);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 62);
    IncrementBlockCount_309(state_, compiler::TNode<Context>{tmp17}, compiler::TNode<FixedArray>{tmp20}, compiler::TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 63);
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp21);
  }
}

compiler::TNode<FixedArray> UnsafeCast14ATCoverageInfo_1396(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2807);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<FixedArray> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 28);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<FixedArray> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<FixedArray>{tmp8};
}

}  // namespace internal
}  // namespace v8

