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
#include "src/objects/module.h"
#include "src/objects/objects.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/template-objects.h"
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
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
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
#include "torque-generated/builtins-base-gen-tq.h"
#include "torque-generated/builtins-arguments-gen-tq.h"
#include "torque-generated/builtins-array-copywithin-gen-tq.h"
#include "torque-generated/builtins-array-gen-tq.h"
#include "torque-generated/builtins-array-filter-gen-tq.h"
#include "torque-generated/builtins-array-find-gen-tq.h"
#include "torque-generated/builtins-array-findindex-gen-tq.h"
#include "torque-generated/builtins-array-foreach-gen-tq.h"
#include "torque-generated/builtins-array-join-gen-tq.h"
#include "torque-generated/builtins-array-lastindexof-gen-tq.h"
#include "torque-generated/builtins-array-map-gen-tq.h"
#include "torque-generated/builtins-array-of-gen-tq.h"
#include "torque-generated/builtins-array-reverse-gen-tq.h"
#include "torque-generated/builtins-array-shift-gen-tq.h"
#include "torque-generated/builtins-array-slice-gen-tq.h"
#include "torque-generated/builtins-array-splice-gen-tq.h"
#include "torque-generated/builtins-array-unshift-gen-tq.h"
#include "torque-generated/builtins-runtime-gen-tq.h"
#include "torque-generated/builtins-boolean-gen-tq.h"
#include "torque-generated/builtins-collections-gen-tq.h"
#include "torque-generated/builtins-data-view-gen-tq.h"
#include "torque-generated/builtins-extras-utils-gen-tq.h"
#include "torque-generated/builtins-growable-fixed-array-gen-tq.h"
#include "torque-generated/builtins-internal-coverage-gen-tq.h"
#include "torque-generated/builtins-iterator-gen-tq.h"
#include "torque-generated/builtins-math-gen-tq.h"
#include "torque-generated/builtins-object-gen-tq.h"
#include "torque-generated/builtins-proxy-gen-tq.h"
#include "torque-generated/builtins-regexp-replace-gen-tq.h"
#include "torque-generated/builtins-regexp-gen-tq.h"
#include "torque-generated/builtins-string-gen-tq.h"
#include "torque-generated/builtins-string-html-gen-tq.h"
#include "torque-generated/builtins-string-iterator-gen-tq.h"
#include "torque-generated/builtins-string-repeat-gen-tq.h"
#include "torque-generated/builtins-string-slice-gen-tq.h"
#include "torque-generated/builtins-string-substring-gen-tq.h"
#include "torque-generated/builtins-typed-array-createtypedarray-gen-tq.h"
#include "torque-generated/builtins-typed-array-every-gen-tq.h"
#include "torque-generated/builtins-typed-array-filter-gen-tq.h"
#include "torque-generated/builtins-typed-array-find-gen-tq.h"
#include "torque-generated/builtins-typed-array-findindex-gen-tq.h"
#include "torque-generated/builtins-typed-array-foreach-gen-tq.h"
#include "torque-generated/builtins-typed-array-reduce-gen-tq.h"
#include "torque-generated/builtins-typed-array-reduceright-gen-tq.h"
#include "torque-generated/builtins-typed-array-slice-gen-tq.h"
#include "torque-generated/builtins-typed-array-some-gen-tq.h"
#include "torque-generated/builtins-typed-array-subarray-gen-tq.h"
#include "torque-generated/builtins-typed-array-gen-tq.h"
#include "torque-generated/builtins-test-gen-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<FixedArray> GetCoverageInfo_271(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_function, compiler::CodeAssemblerLabel* label_IfNoCoverageInfo) {
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
    tmp6 = Cast9DebugInfo_122(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp5}, &label0);
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
    tmp25 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, DebugInfo::kHasCoverageInfo));
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAnd(compiler::TNode<Smi>{tmp24}, compiler::TNode<Smi>{tmp25}));
    compiler::TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp26}, compiler::TNode<Smi>{tmp27}));
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
    tmp39 = ca_.UncheckedCast<FixedArray>(UnsafeCast14ATCoverageInfo_1222(state_, compiler::TNode<Context>{tmp33}, compiler::TNode<Object>{tmp38}));
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

compiler::TNode<Smi> SlotCount_272(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_coverageInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_coverageInfo);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 34);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSar(compiler::TNode<Smi>{tmp2}, CoverageInfo::kSlotIndexCountLog2));
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

compiler::TNode<Smi> FirstIndexForSlot_273(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_slot) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_slot);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 39);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiShl(compiler::TNode<Smi>{tmp1}, CoverageInfo::kSlotIndexCountLog2));
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 37);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Smi>{tmp8};
}

void IncrementBlockCount_274(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_coverageInfo, compiler::TNode<Smi> p_slot) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_coverageInfo, p_slot);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 45);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Smi>(FirstIndexForSlot_273(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Smi>{tmp2}));
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 46);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, CoverageInfo::kSlotBlockCountIndex));
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4}));
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 47);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 48);
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp1}, compiler::TNode<Smi>{tmp5}));
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Smi>(UnsafeCast5ATSmi_1176(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp6}));
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp7}, compiler::TNode<Smi>{tmp8}));
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 47);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp1}, compiler::TNode<Smi>{tmp5}, compiler::TNode<Smi>{tmp9});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 43);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 42);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<FixedArray> tmp11;
    compiler::TNode<Smi> tmp12;
    ca_.Bind(&block1, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block2, tmp10, tmp11, tmp12);
  }

    compiler::TNode<Context> tmp13;
    compiler::TNode<FixedArray> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
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
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 59);
    compiler::TNode<FixedArray> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = GetCoverageInfo_271(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<JSFunction>{tmp1}, &label0);
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
    tmp16 = Undefined_70(state_);
    CodeStubAssembler(state_).Return(tmp16);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSFunction> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<FixedArray> tmp20;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 58);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 60);
    IncrementBlockCount_274(state_, compiler::TNode<Context>{tmp17}, compiler::TNode<FixedArray>{tmp20}, compiler::TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 61);
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined_70(state_);
    CodeStubAssembler(state_).Return(tmp21);
  }
}

}  // namespace internal
}  // namespace v8

