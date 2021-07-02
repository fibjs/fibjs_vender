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

compiler::TNode<JSStringIterator> NewJSStringIterator_286(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<String> p_string, compiler::TNode<Smi> p_nextIndex) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, JSStringIterator> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, JSStringIterator> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_string, p_nextIndex);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<String> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 10);
    compiler::TNode<Map> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Map>(GetInitialStringIteratorMap_205(state_, compiler::TNode<Context>{tmp0}));
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 11);
    compiler::TNode<FixedArray> tmp4;
    USE(tmp4);
    tmp4 = kEmptyFixedArray_190(state_);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 12);
    compiler::TNode<FixedArray> tmp5;
    USE(tmp5);
    tmp5 = kEmptyFixedArray_190(state_);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 13);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 14);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 9);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrConstant(((40)));
    compiler::TNode<JSStringIterator> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<JSStringIterator>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp6}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp7, CodeStubAssembler(state_).IntPtrConstant(40), compiler::TNode<IntPtrT>{tmp6}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp8);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp8}, tmp3);
    compiler::TNode<IntPtrT> tmp9 = ca_.IntPtrConstant(JSReceiver::kPropertiesOrHashOffset);
    USE(tmp9);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp9}, tmp4);
    compiler::TNode<IntPtrT> tmp10 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp10);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp10}, tmp5);
    compiler::TNode<IntPtrT> tmp11 = ca_.IntPtrConstant(JSStringIterator::kStringOffset);
    USE(tmp11);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp11}, tmp1);
    compiler::TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(JSStringIterator::kNextIndexOffset);
    USE(tmp12);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp12}, tmp2);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp7);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<String> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<JSStringIterator> tmp16;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 7);
    ca_.Goto(&block2, tmp13, tmp14, tmp15, tmp16);
  }

    compiler::TNode<Context> tmp17;
    compiler::TNode<String> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<JSStringIterator> tmp20;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19, &tmp20);
  return compiler::TNode<JSStringIterator>{tmp20};
}

TF_BUILTIN(StringPrototypeIterator, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 22);
    compiler::TNode<String> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype[Symbol.iterator]"));
    compiler::TNode<String> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).ToThisString(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp2}));
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 21);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 23);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 24);
    compiler::TNode<JSStringIterator> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<JSStringIterator>(NewJSStringIterator_286(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<String>{tmp3}, compiler::TNode<Smi>{tmp4}));
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(StringIteratorPrototypeNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSStringIterator> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSStringIterator> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSStringIterator, String, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSStringIterator, String, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 30);
    compiler::TNode<JSStringIterator> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast16JSStringIterator_1227(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2, tmp3, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSStringIterator> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1, tmp6, tmp7, tmp9);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block2, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 30);
    compiler::TNode<Object> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Object>(FromConstexpr20UT5ATSmi10HeapObject18ATconstexpr_string_147(state_, "String Iterator.prototype.next"));
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp10}, MessageTemplate::kIncompatibleMethodReceiver, compiler::TNode<Object>{tmp12}, compiler::TNode<Object>{tmp11});
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<JSStringIterator> tmp15;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 33);
    compiler::TNode<IntPtrT> tmp16 = ca_.IntPtrConstant(JSStringIterator::kStringOffset);
    USE(tmp16);
    compiler::TNode<String>tmp17 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp15, tmp16});
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 34);
    compiler::TNode<IntPtrT> tmp18 = ca_.IntPtrConstant(JSStringIterator::kNextIndexOffset);
    USE(tmp18);
    compiler::TNode<Smi>tmp19 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp15, tmp18});
    compiler::TNode<IntPtrT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp19}));
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 35);
    compiler::TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).LoadStringLengthAsWord(compiler::TNode<String>{tmp17}));
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 36);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(compiler::TNode<IntPtrT>{tmp20}, compiler::TNode<IntPtrT>{tmp21}));
    ca_.Branch(tmp22, &block5, &block6, tmp13, tmp14, tmp15, tmp17, tmp20, tmp21);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<JSStringIterator> tmp25;
    compiler::TNode<String> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 37);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined_70(state_);
    compiler::TNode<Oddball> tmp30;
    USE(tmp30);
    tmp30 = True_71(state_);
    compiler::TNode<JSIteratorResult> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<JSIteratorResult>(NewJSIteratorResult_76(state_, compiler::TNode<Context>{tmp23}, compiler::TNode<Object>{tmp29}, compiler::TNode<Oddball>{tmp30}));
    CodeStubAssembler(state_).Return(tmp31);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSStringIterator> tmp34;
    compiler::TNode<String> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    ca_.Bind(&block6, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 41);
    compiler::TNode<Int32T> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<Int32T>(StringBuiltinsAssembler(state_).LoadSurrogatePairAt(compiler::TNode<String>{tmp35}, compiler::TNode<IntPtrT>{tmp37}, compiler::TNode<IntPtrT>{tmp36}, UnicodeEncoding::UTF16));
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 42);
    compiler::TNode<String> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).StringFromSingleCodePoint(compiler::TNode<Int32T>{tmp38}, UnicodeEncoding::UTF16));
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 43);
    compiler::TNode<IntPtrT> tmp40 = ca_.IntPtrConstant(JSStringIterator::kNextIndexOffset);
    USE(tmp40);
    compiler::TNode<IntPtrT> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).LoadStringLengthAsWord(compiler::TNode<String>{tmp39}));
    compiler::TNode<IntPtrT> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp36}, compiler::TNode<IntPtrT>{tmp41}));
    compiler::TNode<Smi> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiTag(compiler::TNode<IntPtrT>{tmp42}));
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp34, tmp40}, tmp43);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 44);
    compiler::TNode<Oddball> tmp44;
    USE(tmp44);
    tmp44 = False_72(state_);
    compiler::TNode<JSIteratorResult> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<JSIteratorResult>(NewJSIteratorResult_76(state_, compiler::TNode<Context>{tmp32}, compiler::TNode<Object>{tmp39}, compiler::TNode<Oddball>{tmp44}));
    CodeStubAssembler(state_).Return(tmp45);
  }
}

}  // namespace internal
}  // namespace v8

