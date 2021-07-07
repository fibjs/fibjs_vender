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

compiler::TNode<BoolT> ElementsKindTestHelper1_385(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 7);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS))))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 8);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 10);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 6);
    ca_.Goto(&block5, tmp2);
  }

    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block5, &tmp3);
  return compiler::TNode<BoolT>{tmp3};
}

bool ElementsKindTestHelper2_386(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 15);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 14);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)));
}

void LabelTestHelper1_387(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 20);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 18);
    ca_.Goto(label_Label1);
  }
}

void LabelTestHelper2_388(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 25);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 42);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 23);
    *label_Label2_parameter_0 = tmp1;
    ca_.Goto(label_Label2);
  }
}

void LabelTestHelper3_389(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 30);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = Null_63(state_);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 28);
    *label_Label3_parameter_1 = tmp3;
    *label_Label3_parameter_0 = tmp2;
    ca_.Goto(label_Label3);
  }
}

void TestConstexpr1_390(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 35);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, (CodeStubAssembler(state_).IsFastElementsKind(PACKED_SMI_ELEMENTS)));
    ca_.Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))' failed", "test/torque/test-torque.tq", 35);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 33);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
}

void TestConstexprIf_391(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 40);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = ElementsKindTestHelper1_385(state_, UINT8_ELEMENTS);
    ca_.Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'ElementsKindTestHelper1(UINT8_ELEMENTS)' failed", "test/torque/test-torque.tq", 40);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 41);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ElementsKindTestHelper1_385(state_, UINT16_ELEMENTS);
    ca_.Branch(tmp1, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'ElementsKindTestHelper1(UINT16_ELEMENTS)' failed", "test/torque/test-torque.tq", 41);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 42);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ElementsKindTestHelper1_385(state_, UINT32_ELEMENTS);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert '!ElementsKindTestHelper1(UINT32_ELEMENTS)' failed", "test/torque/test-torque.tq", 42);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 38);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

void TestConstexprReturn_392(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 47);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, (ElementsKindTestHelper2_386(state_, UINT8_ELEMENTS)));
    ca_.Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(ElementsKindTestHelper2(UINT8_ELEMENTS))' failed", "test/torque/test-torque.tq", 47);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 48);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, (ElementsKindTestHelper2_386(state_, UINT16_ELEMENTS)));
    ca_.Branch(tmp1, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(ElementsKindTestHelper2(UINT16_ELEMENTS))' failed", "test/torque/test-torque.tq", 48);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 49);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, (ElementsKindTestHelper2_386(state_, UINT32_ELEMENTS)));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert '!FromConstexpr<bool>(ElementsKindTestHelper2(UINT32_ELEMENTS))' failed", "test/torque/test-torque.tq", 49);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 50);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, (CodeStubAssembler(state_).ConstexprBoolNot((ElementsKindTestHelper2_386(state_, UINT32_ELEMENTS)))));
    ca_.Branch(tmp4, &block8, &block9);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(!ElementsKindTestHelper2(UINT32_ELEMENTS))' failed", "test/torque/test-torque.tq", 50);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 45);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

compiler::TNode<Oddball> TestGotoLabel_393(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 56);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper1_387(state_, &label0);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 59);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = True_65(state_);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 53);
    ca_.Goto(&block5, tmp1);
  }

    compiler::TNode<Oddball> tmp2;
    ca_.Bind(&block5, &tmp2);
  return compiler::TNode<Oddball>{tmp2};
}

compiler::TNode<Oddball> TestGotoLabelWithOneParameter_394(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 66);
    compiler::TypedCodeAssemblerVariable<Smi> result_0_0(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper2_388(state_, &label0, &result_0_0);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, result_0_0.value());
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block4, &tmp0);
    ca_.Goto(&block3, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block3, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 69);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 42);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp1}, compiler::TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block5, &block6, tmp1);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block6, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert 'smi == 42' failed", "test/torque/test-torque.tq", 69);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block5, &tmp5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 70);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = True_65(state_);
    ca_.Goto(&block1, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp7;
    ca_.Bind(&block1, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 63);
    ca_.Goto(&block7, tmp7);
  }

    compiler::TNode<Oddball> tmp8;
    ca_.Bind(&block7, &tmp8);
  return compiler::TNode<Oddball>{tmp8};
}

compiler::TNode<Oddball> TestGotoLabelWithTwoParameters_395(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 77);
    compiler::TypedCodeAssemblerVariable<Oddball> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Smi> result_0_1(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper3_389(state_, &label0, &result_0_0, &result_0_1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, result_0_0.value(), result_0_1.value());
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Oddball> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block4, &tmp0, &tmp1);
    ca_.Goto(&block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Oddball> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block3, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 80);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Null_63(state_);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp2}, compiler::TNode<HeapObject>{tmp4});
    ca_.Branch(tmp5, &block5, &block6, tmp2, tmp3);
  }

  if (block6.is_used()) {
    compiler::TNode<Oddball> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block6, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'o == Null' failed", "test/torque/test-torque.tq", 80);
  }

  if (block5.is_used()) {
    compiler::TNode<Oddball> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block5, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 81);
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp9}, compiler::TNode<Smi>{tmp10});
    ca_.Branch(tmp11, &block7, &block8, tmp8, tmp9);
  }

  if (block8.is_used()) {
    compiler::TNode<Oddball> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block8, &tmp12, &tmp13);
    CodeStubAssembler(state_).FailAssert("Torque assert 'smi == 7' failed", "test/torque/test-torque.tq", 81);
  }

  if (block7.is_used()) {
    compiler::TNode<Oddball> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block7, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 82);
    compiler::TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = True_65(state_);
    ca_.Goto(&block1, tmp16);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp17;
    ca_.Bind(&block1, &tmp17);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 74);
    ca_.Goto(&block9, tmp17);
  }

    compiler::TNode<Oddball> tmp18;
    ca_.Bind(&block9, &tmp18);
  return compiler::TNode<Oddball>{tmp18};
}

TF_BUILTIN(GenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 91);
    CodeStubAssembler(state_).Return(tmp1);
  }
}

void TestBuiltinSpecialization_396(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_c);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 96);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<Object> tmp2;
    tmp2 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, tmp0, tmp1);
    USE(tmp2);
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_63(state_);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp2}, compiler::TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Smi>(c, 0) == Null' failed", "test/torque/test-torque.tq", 96);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    ca_.Bind(&block2, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 97);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Object> tmp8;
    tmp8 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, tmp6, tmp7);
    USE(tmp8);
    compiler::TNode<Oddball> tmp9;
    USE(tmp9);
    tmp9 = Null_63(state_);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp8}, compiler::TNode<HeapObject>{tmp9});
    ca_.Branch(tmp10, &block4, &block5, tmp6);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp11;
    ca_.Bind(&block5, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Smi>(c, 1) == Null' failed", "test/torque/test-torque.tq", 97);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp12;
    ca_.Bind(&block4, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 98);
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Undefined_64(state_);
    compiler::TNode<Object> tmp14;
    tmp14 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol, tmp12, tmp13);
    USE(tmp14);
    compiler::TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp14}, compiler::TNode<HeapObject>{tmp15});
    ca_.Branch(tmp16, &block6, &block7, tmp12);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp17;
    ca_.Bind(&block7, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<JSAny>(c, Undefined) == Undefined' failed", "test/torque/test-torque.tq", 98);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp18;
    ca_.Bind(&block6, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 99);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    compiler::TNode<Object> tmp20;
    tmp20 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol, tmp18, tmp19);
    USE(tmp20);
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp20}, compiler::TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block8, &block9, tmp18);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp23;
    ca_.Bind(&block9, &tmp23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<JSAny>(c, Undefined) == Undefined' failed", "test/torque/test-torque.tq", 99);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp24;
    ca_.Bind(&block8, &tmp24);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 94);
    ca_.Goto(&block1, tmp24);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp25;
    ca_.Bind(&block1, &tmp25);
    ca_.Goto(&block10, tmp25);
  }

    compiler::TNode<Context> tmp26;
    ca_.Bind(&block10, &tmp26);
}

void LabelTestHelper4_397(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 104);
    if ((p_flag)) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 105);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 107);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 102);
    ca_.Goto(label_Label4);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_Label5);
  }
}

compiler::TNode<BoolT> CallLabelTestHelper4_398(compiler::CodeAssemblerState* state_, bool p_flag) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 113);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    LabelTestHelper4_397(state_, p_flag, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block5);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block3);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 116);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 119);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 111);
    ca_.Goto(&block8, tmp2);
  }

    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block8, &tmp3);
  return compiler::TNode<BoolT>{tmp3};
}

compiler::TNode<Oddball> TestPartiallyUnusedLabel_399(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 125);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = CallLabelTestHelper4_398(state_, true);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 126);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = CallLabelTestHelper4_398(state_, false);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 128);
    ca_.Branch(tmp0, &block4, &block5, tmp0, tmp1, tmp0);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp2;
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BoolT> tmp4;
    ca_.Bind(&block4, &tmp2, &tmp3, &tmp4);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp3});
    ca_.Goto(&block6, tmp2, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<BoolT> tmp6;
    compiler::TNode<BoolT> tmp7;
    compiler::TNode<BoolT> tmp8;
    ca_.Bind(&block5, &tmp6, &tmp7, &tmp8);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block6, tmp6, tmp7, tmp8, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<BoolT> tmp10;
    compiler::TNode<BoolT> tmp11;
    compiler::TNode<BoolT> tmp12;
    compiler::TNode<BoolT> tmp13;
    ca_.Bind(&block6, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Branch(tmp13, &block2, &block3, tmp10, tmp11);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<BoolT> tmp15;
    ca_.Bind(&block2, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 129);
    compiler::TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = True_65(state_);
    ca_.Goto(&block1, tmp16);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block3, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 131);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = False_66(state_);
    ca_.Goto(&block1, tmp19);
  }

  if (block1.is_used()) {
    compiler::TNode<Oddball> tmp20;
    ca_.Bind(&block1, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 123);
    ca_.Goto(&block8, tmp20);
  }

    compiler::TNode<Oddball> tmp21;
    ca_.Bind(&block8, &tmp21);
  return compiler::TNode<Oddball>{tmp21};
}

compiler::TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject_400(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_param2);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 140);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 139);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<Object>{tmp4};
}

compiler::TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject_401(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_param2);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 150);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 148);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Y);
  }

    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<Object>{tmp10};
}

void TestMacroSpecialization_402(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Oddball> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Oddball, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 156);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 157);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = GenericMacroTest5ATSmi_1408(state_, compiler::TNode<Smi>{tmp1});
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp2}, compiler::TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block4, &block5, tmp0);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block5, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Smi>(0) == Undefined' failed", "test/torque/test-torque.tq", 157);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block4, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 158);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = GenericMacroTest5ATSmi_1408(state_, compiler::TNode<Smi>{tmp7});
    compiler::TNode<Oddball> tmp9;
    USE(tmp9);
    tmp9 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp8}, compiler::TNode<HeapObject>{tmp9});
    ca_.Branch(tmp10, &block6, &block7, tmp6);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block7, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Smi>(1) == Undefined' failed", "test/torque/test-torque.tq", 158);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp12;
    ca_.Bind(&block6, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 159);
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Null_63(state_);
    compiler::TNode<Object> tmp14;
    USE(tmp14);
    tmp14 = GenericMacroTest20UT5ATSmi10HeapObject_400(state_, compiler::TNode<Object>{tmp13});
    compiler::TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = Null_63(state_);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp14}, compiler::TNode<HeapObject>{tmp15});
    ca_.Branch(tmp16, &block8, &block9, tmp12);
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block9, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(Null) == Null' failed", "test/torque/test-torque.tq", 159);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block8, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 160);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = False_66(state_);
    compiler::TNode<Object> tmp20;
    USE(tmp20);
    tmp20 = GenericMacroTest20UT5ATSmi10HeapObject_400(state_, compiler::TNode<Object>{tmp19});
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = False_66(state_);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp20}, compiler::TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block10, &block11, tmp18);
  }

  if (block11.is_used()) {
    compiler::TNode<Smi> tmp23;
    ca_.Bind(&block11, &tmp23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(False) == False' failed", "test/torque/test-torque.tq", 160);
  }

  if (block10.is_used()) {
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block10, &tmp24);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 161);
    compiler::TNode<Oddball> tmp25;
    USE(tmp25);
    tmp25 = True_65(state_);
    compiler::TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = GenericMacroTest20UT5ATSmi10HeapObject_400(state_, compiler::TNode<Object>{tmp25});
    compiler::TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = True_65(state_);
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp26}, compiler::TNode<HeapObject>{tmp27});
    ca_.Branch(tmp28, &block12, &block13, tmp24);
  }

  if (block13.is_used()) {
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block13, &tmp29);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(True) == True' failed", "test/torque/test-torque.tq", 161);
  }

  if (block12.is_used()) {
    compiler::TNode<Smi> tmp30;
    ca_.Bind(&block12, &tmp30);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 162);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<Object> tmp32;
    USE(tmp32);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp32 = GenericMacroTestWithLabels5ATSmi_1409(state_, compiler::TNode<Smi>{tmp31}, &label0);
    ca_.Goto(&block16, tmp30, tmp32);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block17, tmp30);
    }
  }

  if (block17.is_used()) {
    compiler::TNode<Smi> tmp33;
    ca_.Bind(&block17, &tmp33);
    ca_.Goto(&block3);
  }

  if (block16.is_used()) {
    compiler::TNode<Smi> tmp34;
    compiler::TNode<Object> tmp35;
    ca_.Bind(&block16, &tmp34, &tmp35);
    compiler::TNode<Oddball> tmp36;
    USE(tmp36);
    tmp36 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp35}, compiler::TNode<HeapObject>{tmp36});
    ca_.Branch(tmp37, &block14, &block15, tmp34);
  }

  if (block15.is_used()) {
    compiler::TNode<Smi> tmp38;
    ca_.Bind(&block15, &tmp38);
    CodeStubAssembler(state_).FailAssert("Torque assert '(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined' failed", "test/torque/test-torque.tq", 162);
  }

  if (block14.is_used()) {
    compiler::TNode<Smi> tmp39;
    ca_.Bind(&block14, &tmp39);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 163);
    compiler::TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<Object> tmp41;
    USE(tmp41);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp41 = GenericMacroTestWithLabels5ATSmi_1409(state_, compiler::TNode<Smi>{tmp40}, &label0);
    ca_.Goto(&block20, tmp39, tmp41);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp39);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Smi> tmp42;
    ca_.Bind(&block21, &tmp42);
    ca_.Goto(&block3);
  }

  if (block20.is_used()) {
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block20, &tmp43, &tmp44);
    compiler::TNode<Oddball> tmp45;
    USE(tmp45);
    tmp45 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp44}, compiler::TNode<HeapObject>{tmp45});
    ca_.Branch(tmp46, &block18, &block19, tmp43);
  }

  if (block19.is_used()) {
    compiler::TNode<Smi> tmp47;
    ca_.Bind(&block19, &tmp47);
    CodeStubAssembler(state_).FailAssert("Torque assert '(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined' failed", "test/torque/test-torque.tq", 163);
  }

  if (block18.is_used()) {
    compiler::TNode<Smi> tmp48;
    ca_.Bind(&block18, &tmp48);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 165);
    compiler::TNode<Oddball> tmp49;
    USE(tmp49);
    tmp49 = False_66(state_);
    compiler::TNode<Object> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = GenericMacroTestWithLabels20UT5ATSmi10HeapObject_401(state_, compiler::TNode<Object>{tmp49}, &label0);
    ca_.Goto(&block24, tmp48, tmp49, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block25, tmp48, tmp49);
    }
  }

  if (block25.is_used()) {
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Oddball> tmp52;
    ca_.Bind(&block25, &tmp51, &tmp52);
    ca_.Goto(&block23, tmp51);
  }

  if (block24.is_used()) {
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Oddball> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block24, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 167);
    ca_.Goto(&block22, tmp53);
  }

  if (block23.is_used()) {
    compiler::TNode<Smi> tmp56;
    ca_.Bind(&block23, &tmp56);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 164);
    ca_.Goto(&block22, tmp56);
  }

  if (block22.is_used()) {
    compiler::TNode<Smi> tmp57;
    ca_.Bind(&block22, &tmp57);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 155);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 169);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 170);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 153);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block26);
  }

    ca_.Bind(&block26);
}

TF_BUILTIN(TestHelperPlus1, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 175);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1}, compiler::TNode<Smi>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TF_BUILTIN(TestHelperPlus2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 178);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1}, compiler::TNode<Smi>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

compiler::TNode<Oddball> TestFunctionPointers_403(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 183);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 184);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 42);
    compiler::TNode<Smi> tmp2 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(9)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus1)), tmp0, tmp1)); 
    USE(tmp2);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 43);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus1)));
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<BuiltinPtr> tmp6;
    ca_.Bind(&block3, &tmp5, &tmp6);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr(context, 42) == 43' failed", "test/torque/test-torque.tq", 184);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<BuiltinPtr> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 185);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 186);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 42);
    compiler::TNode<Smi> tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(9)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus2)), tmp7, tmp9)); 
    USE(tmp10);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 44);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11});
    ca_.Branch(tmp12, &block4, &block5, tmp7, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus2)));
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<BuiltinPtr> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr(context, 42) == 44' failed", "test/torque/test-torque.tq", 186);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<BuiltinPtr> tmp16;
    ca_.Bind(&block4, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 187);
    compiler::TNode<Oddball> tmp17;
    USE(tmp17);
    tmp17 = True_65(state_);
    ca_.Goto(&block1, tmp15, tmp17);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Oddball> tmp19;
    ca_.Bind(&block1, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 181);
    ca_.Goto(&block6, tmp18, tmp19);
  }

    compiler::TNode<Context> tmp20;
    compiler::TNode<Oddball> tmp21;
    ca_.Bind(&block6, &tmp20, &tmp21);
  return compiler::TNode<Oddball>{tmp21};
}

compiler::TNode<Oddball> TestVariableRedeclaration_404(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 192);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(42, 0)));
    ca_.Branch(tmp1, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp2;
    ca_.Bind(&block2, &tmp2);
    ca_.Goto(&block5, tmp2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block3, &tmp3);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr7ATint3117ATconstexpr_int31_145(state_, 1);
    ca_.Goto(&block4, tmp3, tmp4);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block5, &tmp5);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr7ATint3117ATconstexpr_int31_145(state_, 0);
    ca_.Goto(&block4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Int32T> tmp8;
    ca_.Bind(&block4, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 193);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(42, 0)));
    ca_.Branch(tmp9, &block6, &block7, tmp7, tmp8);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Int32T> tmp11;
    ca_.Bind(&block6, &tmp10, &tmp11);
    ca_.Goto(&block9, tmp10, tmp11);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Int32T> tmp13;
    ca_.Bind(&block7, &tmp12, &tmp13);
    compiler::TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr7ATint3117ATconstexpr_int31_145(state_, 0);
    ca_.Goto(&block8, tmp12, tmp13, tmp14);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Int32T> tmp16;
    ca_.Bind(&block9, &tmp15, &tmp16);
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr7ATint3117ATconstexpr_int31_145(state_, 1);
    ca_.Goto(&block8, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Int32T> tmp19;
    compiler::TNode<Int32T> tmp20;
    ca_.Bind(&block8, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 194);
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = True_65(state_);
    ca_.Goto(&block1, tmp18, tmp21);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Oddball> tmp23;
    ca_.Bind(&block1, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 190);
    ca_.Goto(&block10, tmp22, tmp23);
  }

    compiler::TNode<Context> tmp24;
    compiler::TNode<Oddball> tmp25;
    ca_.Bind(&block10, &tmp24, &tmp25);
  return compiler::TNode<Oddball>{tmp25};
}

compiler::TNode<Smi> TestTernaryOperator_405(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 199);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block2, &tmp3);
    ca_.Goto(&block5, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block3, &tmp4);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block4, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block5, &tmp6);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block4, tmp6, tmp7);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp8;
    compiler::TNode<BoolT> tmp9;
    ca_.Bind(&block4, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 200);
    ca_.Branch(tmp9, &block6, &block7, tmp8, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp10;
    compiler::TNode<BoolT> tmp11;
    ca_.Bind(&block6, &tmp10, &tmp11);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp12});
    ca_.Goto(&block9, tmp10, tmp11, tmp13);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp14;
    compiler::TNode<BoolT> tmp15;
    ca_.Bind(&block7, &tmp14, &tmp15);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 100);
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp14}, compiler::TNode<Smi>{tmp16});
    ca_.Goto(&block8, tmp14, tmp15, tmp17);
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp18;
    compiler::TNode<BoolT> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block9, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block8, tmp18, tmp19, tmp20);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp21;
    compiler::TNode<BoolT> tmp22;
    compiler::TNode<Smi> tmp23;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block1, tmp21, tmp23);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp24;
    compiler::TNode<Smi> tmp25;
    ca_.Bind(&block1, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 197);
    ca_.Goto(&block10, tmp24, tmp25);
  }

    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    ca_.Bind(&block10, &tmp26, &tmp27);
  return compiler::TNode<Smi>{tmp27};
}

void TestFunctionPointerToGeneric_406(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_c);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 205);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 206);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 208);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<Object> tmp2 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(10)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kGenericBuiltinTest5ATSmi)), tmp0, tmp1); 
    USE(tmp2);
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_63(state_);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp2}, compiler::TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kGenericBuiltinTest5ATSmi)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kGenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol)));
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<BuiltinPtr> tmp6;
    compiler::TNode<BuiltinPtr> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr1(c, 0) == Null' failed", "test/torque/test-torque.tq", 208);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<BuiltinPtr> tmp9;
    compiler::TNode<BuiltinPtr> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 209);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Object> tmp12 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(10)).descriptor(), tmp9, tmp8, tmp11); 
    USE(tmp12);
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Null_63(state_);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp12}, compiler::TNode<HeapObject>{tmp13});
    ca_.Branch(tmp14, &block4, &block5, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<BuiltinPtr> tmp16;
    compiler::TNode<BuiltinPtr> tmp17;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr1(c, 1) == Null' failed", "test/torque/test-torque.tq", 209);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<BuiltinPtr> tmp19;
    compiler::TNode<BuiltinPtr> tmp20;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 210);
    compiler::TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined_64(state_);
    compiler::TNode<Object> tmp22 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(3)).descriptor(), tmp20, tmp18, tmp21); 
    USE(tmp22);
    compiler::TNode<Oddball> tmp23;
    USE(tmp23);
    tmp23 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp22}, compiler::TNode<HeapObject>{tmp23});
    ca_.Branch(tmp24, &block6, &block7, tmp18, tmp19, tmp20);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<BuiltinPtr> tmp26;
    compiler::TNode<BuiltinPtr> tmp27;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr2(c, Undefined) == Undefined' failed", "test/torque/test-torque.tq", 210);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<BuiltinPtr> tmp29;
    compiler::TNode<BuiltinPtr> tmp30;
    ca_.Bind(&block6, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 211);
    compiler::TNode<Oddball> tmp31;
    USE(tmp31);
    tmp31 = Undefined_64(state_);
    compiler::TNode<Object> tmp32 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(3)).descriptor(), tmp30, tmp28, tmp31); 
    USE(tmp32);
    compiler::TNode<Oddball> tmp33;
    USE(tmp33);
    tmp33 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp32}, compiler::TNode<HeapObject>{tmp33});
    ca_.Branch(tmp34, &block8, &block9, tmp28, tmp29, tmp30);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<BuiltinPtr> tmp36;
    compiler::TNode<BuiltinPtr> tmp37;
    ca_.Bind(&block9, &tmp35, &tmp36, &tmp37);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr2(c, Undefined) == Undefined' failed", "test/torque/test-torque.tq", 211);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<BuiltinPtr> tmp39;
    compiler::TNode<BuiltinPtr> tmp40;
    ca_.Bind(&block8, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 204);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 203);
    ca_.Goto(&block1, tmp38);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp41;
    ca_.Bind(&block1, &tmp41);
    ca_.Goto(&block10, tmp41);
  }

    compiler::TNode<Context> tmp42;
    ca_.Bind(&block10, &tmp42);
}

compiler::TNode<BuiltinPtr> TestTypeAlias_407(compiler::CodeAssemblerState* state_, compiler::TNode<BuiltinPtr> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<BuiltinPtr> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 217);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<BuiltinPtr> tmp1;
    compiler::TNode<BuiltinPtr> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 215);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<BuiltinPtr> tmp3;
    compiler::TNode<BuiltinPtr> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<BuiltinPtr>{tmp4};
}

compiler::TNode<Oddball> TestUnsafeCast_408(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Number> p_n) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_n);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 222);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).TaggedIsSmi(compiler::TNode<Object>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Number> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 223);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = UnsafeCast5ATSmi_1344(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 225);
    compiler::TNode<Smi> tmp6;
    tmp6 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kTestHelperPlus1, tmp3, tmp5));
    USE(tmp6);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 11);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp6}, compiler::TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block4, &block5, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block5, &tmp9, &tmp10, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestHelperPlus1(context, m) == 11' failed", "test/torque/test-torque.tq", 225);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 226);
    compiler::TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = True_65(state_);
    ca_.Goto(&block1, tmp12, tmp13, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Number> tmp17;
    ca_.Bind(&block3, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 228);
    compiler::TNode<Oddball> tmp18;
    USE(tmp18);
    tmp18 = False_66(state_);
    ca_.Goto(&block1, tmp16, tmp17, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Oddball> tmp21;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 220);
    ca_.Goto(&block6, tmp19, tmp20, tmp21);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Oddball> tmp24;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24);
  return compiler::TNode<Oddball>{tmp24};
}

void TestHexLiteral_409(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 233);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = Convert8ATintptr17ATconstexpr_int31_1349(state_, 0xffff);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp0}, compiler::TNode<IntPtrT>{tmp1});
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0x10000);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'Convert<intptr>(0xffff) + 1 == 0x10000' failed", "test/torque/test-torque.tq", 233);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 234);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr17ATconstexpr_int31_1349(state_, -0xffff);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, -65535);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp5}, compiler::TNode<IntPtrT>{tmp6});
    ca_.Branch(tmp7, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'Convert<intptr>(-0xffff) == -65535' failed", "test/torque/test-torque.tq", 234);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 231);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

void TestLargeIntegerLiterals_410(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_c);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 239);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int32_147(state_, 0x40000000);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 240);
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr7ATint3217ATconstexpr_int32_147(state_, 0x7fffffff);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 238);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 237);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block1, &tmp3);
    ca_.Goto(&block2, tmp3);
  }

    compiler::TNode<Context> tmp4;
    ca_.Bind(&block2, &tmp4);
}

void TestMultilineAssert_411(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 245);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 247);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block4, &block5, tmp0, tmp2);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp3;
    compiler::TNode<BoolT> tmp4;
    ca_.Bind(&block4, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 248);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp5});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 247);
    ca_.Goto(&block6, tmp3, tmp4, tmp6);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp7;
    compiler::TNode<BoolT> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block6, tmp7, tmp8, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp10;
    compiler::TNode<BoolT> tmp11;
    compiler::TNode<BoolT> tmp12;
    ca_.Bind(&block6, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 246);
    ca_.Branch(tmp12, &block2, &block3, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block3, &tmp13);
    CodeStubAssembler(state_).FailAssert("Torque assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed", "test/torque/test-torque.tq", 246);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 244);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 243);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block7);
  }

    ca_.Bind(&block7);
}

void TestNewlineInString_412(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 253);
    CodeStubAssembler(state_).Print("Hello, World!\n");
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 251);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

int31_t kConstexprConst_413(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 5;
}

compiler::TNode<IntPtrT> kIntptrConst_414(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 257);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 4);
return compiler::TNode<IntPtrT>{tmp0};
}

compiler::TNode<Smi> kSmiConst_415(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 258);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
return compiler::TNode<Smi>{tmp0};
}

void TestModuleConstBindings_416(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 262);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = CodeStubAssembler(state_).Int32Constant(5);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, kConstexprConst_413(state_));
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp1}, compiler::TNode<Int32T>{tmp0});
    ca_.Branch(tmp2, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'kConstexprConst == Int32Constant(5)' failed", "test/torque/test-torque.tq", 262);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 263);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = kIntptrConst_414(state_);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 4);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'kIntptrConst == 4' failed", "test/torque/test-torque.tq", 263);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 264);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = kSmiConst_415(state_);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp6}, compiler::TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'kSmiConst == 3' failed", "test/torque/test-torque.tq", 264);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 260);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

void TestLocalConstBindings_417(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 270);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 272);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 273);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp4});
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block3, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi + 1' failed", "test/torque/test-torque.tq", 273);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 274);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 275);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp10});
    ca_.Branch(tmp11, &block4, &block5, tmp9, tmp10, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi' failed", "test/torque/test-torque.tq", 275);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 276);
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 4);
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp18});
    ca_.Branch(tmp19, &block6, &block7, tmp15, tmp16, tmp17);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    ca_.Bind(&block7, &tmp20, &tmp21, &tmp22);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == 4' failed", "test/torque/test-torque.tq", 276);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<Smi> tmp25;
    ca_.Bind(&block6, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 271);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 278);
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp23}, compiler::TNode<Smi>{tmp26});
    ca_.Branch(tmp27, &block8, &block9, tmp23);
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp28;
    ca_.Bind(&block9, &tmp28);
    CodeStubAssembler(state_).FailAssert("Torque assert 'xSmi == 3' failed", "test/torque/test-torque.tq", 278);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block8, &tmp29);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 279);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp30}, compiler::TNode<Smi>{tmp29});
    ca_.Branch(tmp31, &block10, &block11, tmp29);
  }

  if (block11.is_used()) {
    compiler::TNode<Smi> tmp32;
    ca_.Bind(&block11, &tmp32);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi' failed", "test/torque/test-torque.tq", 279);
  }

  if (block10.is_used()) {
    compiler::TNode<Smi> tmp33;
    ca_.Bind(&block10, &tmp33);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 268);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 267);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block12);
  }

    ca_.Bind(&block12);
}

compiler::TNode<Smi> TestStruct1_418(compiler::CodeAssemblerState* state_, TorqueStructTestStructA p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Number, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Number, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i.indexes, p_i.i, p_i.k);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Number> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 295);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Number> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 293);
    ca_.Goto(&block2, tmp3, tmp4, tmp5, tmp6);
  }

    compiler::TNode<FixedArray> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Number> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10);
  return compiler::TNode<Smi>{tmp10};
}

TorqueStructTestStructA TestStruct2_419(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 301);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_212(state_);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = UnsafeCast10FixedArray_1343(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 300);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 27);
    compiler::TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 31);
    ca_.Goto(&block1, tmp0, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<FixedArray> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block1, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 298);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8);
  }

    compiler::TNode<Context> tmp9;
    compiler::TNode<FixedArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<Number> tmp12;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12);
  return TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp10}, compiler::TNode<Smi>{tmp11}, compiler::TNode<Number>{tmp12}};
}

TorqueStructTestStructA TestStruct3_420(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 310);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_212(state_);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = UnsafeCast10FixedArray_1343(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 13);
    compiler::TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 309);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 311);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 312);
    compiler::TNode<FixedArray> tmp5;
    USE(tmp5);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    std::tie(tmp5, tmp6, tmp7) = TestStruct2_419(state_, compiler::TNode<Context>{tmp0}).Flatten();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 313);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = TestStruct1_418(state_, TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp5}, compiler::TNode<Smi>{tmp6}, compiler::TNode<Number>{tmp7}});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 314);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 315);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 316);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 317);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 318);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 320);
    compiler::TNode<FixedArray> tmp10;
    USE(tmp10);
    tmp10 = kEmptyFixedArray_212(state_);
    compiler::TNode<FixedArray> tmp11;
    USE(tmp11);
    tmp11 = UnsafeCast10FixedArray_1343(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp10});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 319);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 27);
    compiler::TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 31);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 324);
    compiler::TNode<FixedArray> tmp14;
    USE(tmp14);
    compiler::TNode<Smi> tmp15;
    USE(tmp15);
    compiler::TNode<Number> tmp16;
    USE(tmp16);
    std::tie(tmp14, tmp15, tmp16) = TestStruct2_419(state_, compiler::TNode<Context>{tmp0}).Flatten();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 325);
    ca_.Goto(&block1, tmp0, tmp2, tmp8, tmp8);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<FixedArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Number> tmp20;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 307);
    ca_.Goto(&block2, tmp17, tmp18, tmp19, tmp20);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<FixedArray> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Number> tmp24;
    ca_.Bind(&block2, &tmp21, &tmp22, &tmp23, &tmp24);
  return TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp22}, compiler::TNode<Smi>{tmp23}, compiler::TNode<Number>{tmp24}};
}

TorqueStructTestStructC TestStruct4_421(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number, FixedArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 335);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    std::tie(tmp1, tmp2, tmp3) = TestStruct2_419(state_, compiler::TNode<Context>{tmp0}).Flatten();
    compiler::TNode<FixedArray> tmp4;
    USE(tmp4);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    std::tie(tmp4, tmp5, tmp6) = TestStruct2_419(state_, compiler::TNode<Context>{tmp0}).Flatten();
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<FixedArray> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Number> tmp10;
    compiler::TNode<FixedArray> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Number> tmp13;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 333);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

    compiler::TNode<Context> tmp14;
    compiler::TNode<FixedArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<FixedArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Number> tmp20;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
  return TorqueStructTestStructC{TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp15}, compiler::TNode<Smi>{tmp16}, compiler::TNode<Number>{tmp17}}, TorqueStructTestStructA{compiler::TNode<FixedArray>{tmp18}, compiler::TNode<Smi>{tmp19}, compiler::TNode<Number>{tmp20}}};
}

void CallTestStructInLabel_423(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 345);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 340);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    std::tie(tmp1, tmp2, tmp3) = TestStruct2_419(state_, compiler::TNode<Context>{tmp0}).Flatten();
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<FixedArray> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Number> tmp7;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 344);
    ca_.Goto(&block2, tmp4, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<FixedArray> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 342);
    ca_.Goto(&block1, tmp8);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp12;
    ca_.Bind(&block1, &tmp12);
    ca_.Goto(&block4, tmp12);
  }

    compiler::TNode<Context> tmp13;
    ca_.Bind(&block4, &tmp13);
}

void TestForLoop_424(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block56(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block66(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block75(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block84(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 354);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 355);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp6}, compiler::TNode<Smi>{tmp7});
    ca_.Goto(&block5, tmp8, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11});
    ca_.Goto(&block4, tmp9, tmp12);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block3, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 356);
    compiler::TNode<Smi> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp13}, compiler::TNode<Smi>{tmp15});
    ca_.Branch(tmp16, &block6, &block7, tmp13);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block7, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 356);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block6, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 358);
    compiler::TNode<Smi> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 359);
    compiler::TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 360);
    ca_.Goto(&block10, tmp19, tmp20);
  }

  if (block10.is_used()) {
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    ca_.Bind(&block10, &tmp21, &tmp22);
    compiler::TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp22}, compiler::TNode<Smi>{tmp23});
    ca_.Branch(tmp24, &block8, &block9, tmp21, tmp22);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Smi> tmp26;
    ca_.Bind(&block8, &tmp25, &tmp26);
    compiler::TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp25}, compiler::TNode<Smi>{tmp26});
    ca_.Goto(&block11, tmp27, tmp26);
  }

  if (block11.is_used()) {
    compiler::TNode<Smi> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block11, &tmp28, &tmp29);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp29}, compiler::TNode<Smi>{tmp30});
    ca_.Goto(&block10, tmp28, tmp31);
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp32;
    compiler::TNode<Smi> tmp33;
    ca_.Bind(&block9, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 361);
    compiler::TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp32}, compiler::TNode<Smi>{tmp34});
    ca_.Branch(tmp35, &block12, &block13, tmp32, tmp33);
  }

  if (block13.is_used()) {
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    ca_.Bind(&block13, &tmp36, &tmp37);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 361);
  }

  if (block12.is_used()) {
    compiler::TNode<Smi> tmp38;
    compiler::TNode<Smi> tmp39;
    ca_.Bind(&block12, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 363);
    compiler::TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 364);
    compiler::TNode<Smi> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 365);
    ca_.Goto(&block16, tmp40, tmp41);
  }

  if (block16.is_used()) {
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    ca_.Bind(&block16, &tmp42, &tmp43);
    compiler::TNode<Smi> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp43}, compiler::TNode<Smi>{tmp44});
    ca_.Branch(tmp45, &block14, &block15, tmp42, tmp43);
  }

  if (block14.is_used()) {
    compiler::TNode<Smi> tmp46;
    compiler::TNode<Smi> tmp47;
    ca_.Bind(&block14, &tmp46, &tmp47);
    compiler::TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp47}, compiler::TNode<Smi>{tmp48});
    compiler::TNode<Smi> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp46}, compiler::TNode<Smi>{tmp47});
    ca_.Goto(&block16, tmp50, tmp49);
  }

  if (block15.is_used()) {
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Smi> tmp52;
    ca_.Bind(&block15, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 366);
    compiler::TNode<Smi> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp51}, compiler::TNode<Smi>{tmp53});
    ca_.Branch(tmp54, &block17, &block18, tmp51, tmp52);
  }

  if (block18.is_used()) {
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    ca_.Bind(&block18, &tmp55, &tmp56);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 366);
  }

  if (block17.is_used()) {
    compiler::TNode<Smi> tmp57;
    compiler::TNode<Smi> tmp58;
    ca_.Bind(&block17, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 369);
    compiler::TNode<Smi> tmp59;
    USE(tmp59);
    tmp59 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 370);
    compiler::TNode<Smi> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block21, tmp59, tmp58, tmp60);
  }

  if (block21.is_used()) {
    compiler::TNode<Smi> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Smi> tmp63;
    ca_.Bind(&block21, &tmp61, &tmp62, &tmp63);
    ca_.Goto(&block19, tmp61, tmp62, tmp63);
  }

  if (block19.is_used()) {
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Smi> tmp66;
    ca_.Bind(&block19, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 371);
    compiler::TNode<Smi> tmp67;
    USE(tmp67);
    tmp67 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp66}, compiler::TNode<Smi>{tmp67});
    ca_.Branch(tmp68, &block23, &block24, tmp64, tmp65, tmp66);
  }

  if (block23.is_used()) {
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Smi> tmp71;
    ca_.Bind(&block23, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block20, tmp69, tmp70, tmp71);
  }

  if (block24.is_used()) {
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Smi> tmp74;
    ca_.Bind(&block24, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 372);
    compiler::TNode<Smi> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp72}, compiler::TNode<Smi>{tmp74});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 370);
    ca_.Goto(&block22, tmp75, tmp73, tmp74);
  }

  if (block22.is_used()) {
    compiler::TNode<Smi> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<Smi> tmp78;
    ca_.Bind(&block22, &tmp76, &tmp77, &tmp78);
    compiler::TNode<Smi> tmp79;
    USE(tmp79);
    tmp79 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp78}, compiler::TNode<Smi>{tmp79});
    ca_.Goto(&block21, tmp76, tmp77, tmp80);
  }

  if (block20.is_used()) {
    compiler::TNode<Smi> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<Smi> tmp83;
    ca_.Bind(&block20, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 374);
    compiler::TNode<Smi> tmp84;
    USE(tmp84);
    tmp84 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp85;
    USE(tmp85);
    tmp85 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp81}, compiler::TNode<Smi>{tmp84});
    ca_.Branch(tmp85, &block25, &block26, tmp81, tmp82);
  }

  if (block26.is_used()) {
    compiler::TNode<Smi> tmp86;
    compiler::TNode<Smi> tmp87;
    ca_.Bind(&block26, &tmp86, &tmp87);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 374);
  }

  if (block25.is_used()) {
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    ca_.Bind(&block25, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 376);
    compiler::TNode<Smi> tmp90;
    USE(tmp90);
    tmp90 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 377);
    compiler::TNode<Smi> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 378);
    ca_.Goto(&block29, tmp90, tmp91);
  }

  if (block29.is_used()) {
    compiler::TNode<Smi> tmp92;
    compiler::TNode<Smi> tmp93;
    ca_.Bind(&block29, &tmp92, &tmp93);
    ca_.Goto(&block27, tmp92, tmp93);
  }

  if (block27.is_used()) {
    compiler::TNode<Smi> tmp94;
    compiler::TNode<Smi> tmp95;
    ca_.Bind(&block27, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 379);
    compiler::TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp95}, compiler::TNode<Smi>{tmp96});
    ca_.Branch(tmp97, &block30, &block31, tmp94, tmp95);
  }

  if (block30.is_used()) {
    compiler::TNode<Smi> tmp98;
    compiler::TNode<Smi> tmp99;
    ca_.Bind(&block30, &tmp98, &tmp99);
    ca_.Goto(&block28, tmp98, tmp99);
  }

  if (block31.is_used()) {
    compiler::TNode<Smi> tmp100;
    compiler::TNode<Smi> tmp101;
    ca_.Bind(&block31, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 380);
    compiler::TNode<Smi> tmp102;
    USE(tmp102);
    tmp102 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp100}, compiler::TNode<Smi>{tmp101});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 381);
    compiler::TNode<Smi> tmp103;
    USE(tmp103);
    tmp103 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp101}, compiler::TNode<Smi>{tmp103});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 378);
    ca_.Goto(&block29, tmp102, tmp104);
  }

  if (block28.is_used()) {
    compiler::TNode<Smi> tmp105;
    compiler::TNode<Smi> tmp106;
    ca_.Bind(&block28, &tmp105, &tmp106);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 383);
    compiler::TNode<Smi> tmp107;
    USE(tmp107);
    tmp107 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp108;
    USE(tmp108);
    tmp108 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp105}, compiler::TNode<Smi>{tmp107});
    ca_.Branch(tmp108, &block32, &block33, tmp105, tmp106);
  }

  if (block33.is_used()) {
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Smi> tmp110;
    ca_.Bind(&block33, &tmp109, &tmp110);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 383);
  }

  if (block32.is_used()) {
    compiler::TNode<Smi> tmp111;
    compiler::TNode<Smi> tmp112;
    ca_.Bind(&block32, &tmp111, &tmp112);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 387);
    compiler::TNode<Smi> tmp113;
    USE(tmp113);
    tmp113 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 388);
    compiler::TNode<Smi> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block36, tmp113, tmp112, tmp114);
  }

  if (block36.is_used()) {
    compiler::TNode<Smi> tmp115;
    compiler::TNode<Smi> tmp116;
    compiler::TNode<Smi> tmp117;
    ca_.Bind(&block36, &tmp115, &tmp116, &tmp117);
    compiler::TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp119;
    USE(tmp119);
    tmp119 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp117}, compiler::TNode<Smi>{tmp118});
    ca_.Branch(tmp119, &block34, &block35, tmp115, tmp116, tmp117);
  }

  if (block34.is_used()) {
    compiler::TNode<Smi> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Smi> tmp122;
    ca_.Bind(&block34, &tmp120, &tmp121, &tmp122);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 389);
    compiler::TNode<Smi> tmp123;
    USE(tmp123);
    tmp123 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp124;
    USE(tmp124);
    tmp124 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp122}, compiler::TNode<Smi>{tmp123});
    ca_.Branch(tmp124, &block38, &block39, tmp120, tmp121, tmp122);
  }

  if (block38.is_used()) {
    compiler::TNode<Smi> tmp125;
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Smi> tmp127;
    ca_.Bind(&block38, &tmp125, &tmp126, &tmp127);
    ca_.Goto(&block37, tmp125, tmp126, tmp127);
  }

  if (block39.is_used()) {
    compiler::TNode<Smi> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<Smi> tmp130;
    ca_.Bind(&block39, &tmp128, &tmp129, &tmp130);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 390);
    compiler::TNode<Smi> tmp131;
    USE(tmp131);
    tmp131 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp128}, compiler::TNode<Smi>{tmp130});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 388);
    ca_.Goto(&block37, tmp131, tmp129, tmp130);
  }

  if (block37.is_used()) {
    compiler::TNode<Smi> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<Smi> tmp134;
    ca_.Bind(&block37, &tmp132, &tmp133, &tmp134);
    compiler::TNode<Smi> tmp135;
    USE(tmp135);
    tmp135 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp136;
    USE(tmp136);
    tmp136 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp134}, compiler::TNode<Smi>{tmp135});
    ca_.Goto(&block36, tmp132, tmp133, tmp136);
  }

  if (block35.is_used()) {
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Smi> tmp139;
    ca_.Bind(&block35, &tmp137, &tmp138, &tmp139);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 392);
    compiler::TNode<Smi> tmp140;
    USE(tmp140);
    tmp140 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    compiler::TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp137}, compiler::TNode<Smi>{tmp140});
    ca_.Branch(tmp141, &block40, &block41, tmp137, tmp138);
  }

  if (block41.is_used()) {
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Smi> tmp143;
    ca_.Bind(&block41, &tmp142, &tmp143);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 392);
  }

  if (block40.is_used()) {
    compiler::TNode<Smi> tmp144;
    compiler::TNode<Smi> tmp145;
    ca_.Bind(&block40, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 394);
    compiler::TNode<Smi> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 395);
    compiler::TNode<Smi> tmp147;
    USE(tmp147);
    tmp147 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 396);
    ca_.Goto(&block44, tmp146, tmp147);
  }

  if (block44.is_used()) {
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Smi> tmp149;
    ca_.Bind(&block44, &tmp148, &tmp149);
    compiler::TNode<Smi> tmp150;
    USE(tmp150);
    tmp150 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp149}, compiler::TNode<Smi>{tmp150});
    ca_.Branch(tmp151, &block42, &block43, tmp148, tmp149);
  }

  if (block42.is_used()) {
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    ca_.Bind(&block42, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 397);
    compiler::TNode<Smi> tmp154;
    USE(tmp154);
    tmp154 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp155;
    USE(tmp155);
    tmp155 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp153}, compiler::TNode<Smi>{tmp154});
    ca_.Branch(tmp155, &block46, &block47, tmp152, tmp153);
  }

  if (block46.is_used()) {
    compiler::TNode<Smi> tmp156;
    compiler::TNode<Smi> tmp157;
    ca_.Bind(&block46, &tmp156, &tmp157);
    ca_.Goto(&block45, tmp156, tmp157);
  }

  if (block47.is_used()) {
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Smi> tmp159;
    ca_.Bind(&block47, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 398);
    compiler::TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp158}, compiler::TNode<Smi>{tmp159});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 396);
    ca_.Goto(&block45, tmp160, tmp159);
  }

  if (block45.is_used()) {
    compiler::TNode<Smi> tmp161;
    compiler::TNode<Smi> tmp162;
    ca_.Bind(&block45, &tmp161, &tmp162);
    compiler::TNode<Smi> tmp163;
    USE(tmp163);
    tmp163 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp162}, compiler::TNode<Smi>{tmp163});
    ca_.Goto(&block44, tmp161, tmp164);
  }

  if (block43.is_used()) {
    compiler::TNode<Smi> tmp165;
    compiler::TNode<Smi> tmp166;
    ca_.Bind(&block43, &tmp165, &tmp166);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 400);
    compiler::TNode<Smi> tmp167;
    USE(tmp167);
    tmp167 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    compiler::TNode<BoolT> tmp168;
    USE(tmp168);
    tmp168 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp165}, compiler::TNode<Smi>{tmp167});
    ca_.Branch(tmp168, &block48, &block49, tmp165, tmp166);
  }

  if (block49.is_used()) {
    compiler::TNode<Smi> tmp169;
    compiler::TNode<Smi> tmp170;
    ca_.Bind(&block49, &tmp169, &tmp170);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 400);
  }

  if (block48.is_used()) {
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Smi> tmp172;
    ca_.Bind(&block48, &tmp171, &tmp172);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 402);
    compiler::TNode<Smi> tmp173;
    USE(tmp173);
    tmp173 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 403);
    compiler::TNode<Smi> tmp174;
    USE(tmp174);
    tmp174 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 404);
    ca_.Goto(&block52, tmp173, tmp174);
  }

  if (block52.is_used()) {
    compiler::TNode<Smi> tmp175;
    compiler::TNode<Smi> tmp176;
    ca_.Bind(&block52, &tmp175, &tmp176);
    compiler::TNode<Smi> tmp177;
    USE(tmp177);
    tmp177 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp178;
    USE(tmp178);
    tmp178 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp176}, compiler::TNode<Smi>{tmp177});
    ca_.Branch(tmp178, &block50, &block51, tmp175, tmp176);
  }

  if (block50.is_used()) {
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Smi> tmp180;
    ca_.Bind(&block50, &tmp179, &tmp180);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 405);
    compiler::TNode<Smi> tmp181;
    USE(tmp181);
    tmp181 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp182;
    USE(tmp182);
    tmp182 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp180}, compiler::TNode<Smi>{tmp181});
    ca_.Branch(tmp182, &block53, &block54, tmp179, tmp180);
  }

  if (block53.is_used()) {
    compiler::TNode<Smi> tmp183;
    compiler::TNode<Smi> tmp184;
    ca_.Bind(&block53, &tmp183, &tmp184);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 406);
    compiler::TNode<Smi> tmp185;
    USE(tmp185);
    tmp185 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp186;
    USE(tmp186);
    tmp186 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp184}, compiler::TNode<Smi>{tmp185});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 407);
    ca_.Goto(&block52, tmp183, tmp186);
  }

  if (block54.is_used()) {
    compiler::TNode<Smi> tmp187;
    compiler::TNode<Smi> tmp188;
    ca_.Bind(&block54, &tmp187, &tmp188);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 409);
    compiler::TNode<Smi> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp187}, compiler::TNode<Smi>{tmp188});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 410);
    compiler::TNode<Smi> tmp190;
    USE(tmp190);
    tmp190 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp191;
    USE(tmp191);
    tmp191 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp188}, compiler::TNode<Smi>{tmp190});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 404);
    ca_.Goto(&block52, tmp189, tmp191);
  }

  if (block51.is_used()) {
    compiler::TNode<Smi> tmp192;
    compiler::TNode<Smi> tmp193;
    ca_.Bind(&block51, &tmp192, &tmp193);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 412);
    compiler::TNode<Smi> tmp194;
    USE(tmp194);
    tmp194 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    compiler::TNode<BoolT> tmp195;
    USE(tmp195);
    tmp195 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp192}, compiler::TNode<Smi>{tmp194});
    ca_.Branch(tmp195, &block55, &block56, tmp192, tmp193);
  }

  if (block56.is_used()) {
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    ca_.Bind(&block56, &tmp196, &tmp197);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 412);
  }

  if (block55.is_used()) {
    compiler::TNode<Smi> tmp198;
    compiler::TNode<Smi> tmp199;
    ca_.Bind(&block55, &tmp198, &tmp199);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 414);
    compiler::TNode<Smi> tmp200;
    USE(tmp200);
    tmp200 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 415);
    compiler::TNode<Smi> tmp201;
    USE(tmp201);
    tmp201 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block59, tmp200, tmp199, tmp201);
  }

  if (block59.is_used()) {
    compiler::TNode<Smi> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Smi> tmp204;
    ca_.Bind(&block59, &tmp202, &tmp203, &tmp204);
    ca_.Goto(&block57, tmp202, tmp203, tmp204);
  }

  if (block57.is_used()) {
    compiler::TNode<Smi> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<Smi> tmp207;
    ca_.Bind(&block57, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 416);
    compiler::TNode<Smi> tmp208;
    USE(tmp208);
    tmp208 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp209;
    USE(tmp209);
    tmp209 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp207}, compiler::TNode<Smi>{tmp208});
    ca_.Branch(tmp209, &block61, &block62, tmp205, tmp206, tmp207);
  }

  if (block61.is_used()) {
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Smi> tmp212;
    ca_.Bind(&block61, &tmp210, &tmp211, &tmp212);
    ca_.Goto(&block60, tmp210, tmp211, tmp212);
  }

  if (block62.is_used()) {
    compiler::TNode<Smi> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<Smi> tmp215;
    ca_.Bind(&block62, &tmp213, &tmp214, &tmp215);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 417);
    compiler::TNode<Smi> tmp216;
    USE(tmp216);
    tmp216 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp217;
    USE(tmp217);
    tmp217 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp215}, compiler::TNode<Smi>{tmp216});
    ca_.Branch(tmp217, &block63, &block64, tmp213, tmp214, tmp215);
  }

  if (block63.is_used()) {
    compiler::TNode<Smi> tmp218;
    compiler::TNode<Smi> tmp219;
    compiler::TNode<Smi> tmp220;
    ca_.Bind(&block63, &tmp218, &tmp219, &tmp220);
    ca_.Goto(&block58, tmp218, tmp219, tmp220);
  }

  if (block64.is_used()) {
    compiler::TNode<Smi> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    ca_.Bind(&block64, &tmp221, &tmp222, &tmp223);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 418);
    compiler::TNode<Smi> tmp224;
    USE(tmp224);
    tmp224 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp221}, compiler::TNode<Smi>{tmp223});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 415);
    ca_.Goto(&block60, tmp224, tmp222, tmp223);
  }

  if (block60.is_used()) {
    compiler::TNode<Smi> tmp225;
    compiler::TNode<Smi> tmp226;
    compiler::TNode<Smi> tmp227;
    ca_.Bind(&block60, &tmp225, &tmp226, &tmp227);
    compiler::TNode<Smi> tmp228;
    USE(tmp228);
    tmp228 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp229;
    USE(tmp229);
    tmp229 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp227}, compiler::TNode<Smi>{tmp228});
    ca_.Goto(&block59, tmp225, tmp226, tmp229);
  }

  if (block58.is_used()) {
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Smi> tmp231;
    compiler::TNode<Smi> tmp232;
    ca_.Bind(&block58, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 420);
    compiler::TNode<Smi> tmp233;
    USE(tmp233);
    tmp233 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    compiler::TNode<BoolT> tmp234;
    USE(tmp234);
    tmp234 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp230}, compiler::TNode<Smi>{tmp233});
    ca_.Branch(tmp234, &block65, &block66, tmp230, tmp231);
  }

  if (block66.is_used()) {
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    ca_.Bind(&block66, &tmp235, &tmp236);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 420);
  }

  if (block65.is_used()) {
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Smi> tmp238;
    ca_.Bind(&block65, &tmp237, &tmp238);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 422);
    compiler::TNode<Smi> tmp239;
    USE(tmp239);
    tmp239 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 423);
    compiler::TNode<Smi> tmp240;
    USE(tmp240);
    tmp240 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 424);
    ca_.Goto(&block69, tmp239, tmp240);
  }

  if (block69.is_used()) {
    compiler::TNode<Smi> tmp241;
    compiler::TNode<Smi> tmp242;
    ca_.Bind(&block69, &tmp241, &tmp242);
    ca_.Goto(&block67, tmp241, tmp242);
  }

  if (block67.is_used()) {
    compiler::TNode<Smi> tmp243;
    compiler::TNode<Smi> tmp244;
    ca_.Bind(&block67, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 425);
    compiler::TNode<Smi> tmp245;
    USE(tmp245);
    tmp245 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp246;
    USE(tmp246);
    tmp246 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp244}, compiler::TNode<Smi>{tmp245});
    ca_.Branch(tmp246, &block70, &block71, tmp243, tmp244);
  }

  if (block70.is_used()) {
    compiler::TNode<Smi> tmp247;
    compiler::TNode<Smi> tmp248;
    ca_.Bind(&block70, &tmp247, &tmp248);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 426);
    compiler::TNode<Smi> tmp249;
    USE(tmp249);
    tmp249 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp250;
    USE(tmp250);
    tmp250 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp248}, compiler::TNode<Smi>{tmp249});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 427);
    ca_.Goto(&block69, tmp247, tmp250);
  }

  if (block71.is_used()) {
    compiler::TNode<Smi> tmp251;
    compiler::TNode<Smi> tmp252;
    ca_.Bind(&block71, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 430);
    compiler::TNode<Smi> tmp253;
    USE(tmp253);
    tmp253 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp254;
    USE(tmp254);
    tmp254 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp252}, compiler::TNode<Smi>{tmp253});
    ca_.Branch(tmp254, &block72, &block73, tmp251, tmp252);
  }

  if (block72.is_used()) {
    compiler::TNode<Smi> tmp255;
    compiler::TNode<Smi> tmp256;
    ca_.Bind(&block72, &tmp255, &tmp256);
    ca_.Goto(&block68, tmp255, tmp256);
  }

  if (block73.is_used()) {
    compiler::TNode<Smi> tmp257;
    compiler::TNode<Smi> tmp258;
    ca_.Bind(&block73, &tmp257, &tmp258);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 431);
    compiler::TNode<Smi> tmp259;
    USE(tmp259);
    tmp259 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp257}, compiler::TNode<Smi>{tmp258});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 432);
    compiler::TNode<Smi> tmp260;
    USE(tmp260);
    tmp260 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp261;
    USE(tmp261);
    tmp261 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp258}, compiler::TNode<Smi>{tmp260});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 424);
    ca_.Goto(&block69, tmp259, tmp261);
  }

  if (block68.is_used()) {
    compiler::TNode<Smi> tmp262;
    compiler::TNode<Smi> tmp263;
    ca_.Bind(&block68, &tmp262, &tmp263);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 434);
    compiler::TNode<Smi> tmp264;
    USE(tmp264);
    tmp264 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    compiler::TNode<BoolT> tmp265;
    USE(tmp265);
    tmp265 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp262}, compiler::TNode<Smi>{tmp264});
    ca_.Branch(tmp265, &block74, &block75, tmp262, tmp263);
  }

  if (block75.is_used()) {
    compiler::TNode<Smi> tmp266;
    compiler::TNode<Smi> tmp267;
    ca_.Bind(&block75, &tmp266, &tmp267);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 434);
  }

  if (block74.is_used()) {
    compiler::TNode<Smi> tmp268;
    compiler::TNode<Smi> tmp269;
    ca_.Bind(&block74, &tmp268, &tmp269);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 436);
    compiler::TNode<Smi> tmp270;
    USE(tmp270);
    tmp270 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 438);
    ca_.Goto(&block80, tmp268, tmp270);
  }

  if (block80.is_used()) {
    compiler::TNode<Smi> tmp271;
    compiler::TNode<Smi> tmp272;
    ca_.Bind(&block80, &tmp271, &tmp272);
    ca_.Goto(&block78, tmp271, tmp272);
  }

  if (block78.is_used()) {
    compiler::TNode<Smi> tmp273;
    compiler::TNode<Smi> tmp274;
    ca_.Bind(&block78, &tmp273, &tmp274);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 439);
    compiler::TNode<Smi> tmp275;
    USE(tmp275);
    tmp275 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp276;
    USE(tmp276);
    tmp276 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp274}, compiler::TNode<Smi>{tmp275});
    compiler::TNode<Smi> tmp277;
    USE(tmp277);
    tmp277 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp278;
    USE(tmp278);
    tmp278 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp276}, compiler::TNode<Smi>{tmp277});
    ca_.Branch(tmp278, &block81, &block82, tmp273, tmp276);
  }

  if (block81.is_used()) {
    compiler::TNode<Smi> tmp279;
    compiler::TNode<Smi> tmp280;
    ca_.Bind(&block81, &tmp279, &tmp280);
    ca_.Goto(&block77, tmp279, tmp280);
  }

  if (block82.is_used()) {
    compiler::TNode<Smi> tmp281;
    compiler::TNode<Smi> tmp282;
    ca_.Bind(&block82, &tmp281, &tmp282);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 438);
    ca_.Goto(&block80, tmp281, tmp282);
  }

  if (block79.is_used()) {
    compiler::TNode<Smi> tmp283;
    compiler::TNode<Smi> tmp284;
    ca_.Bind(&block79, &tmp283, &tmp284);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 442);
    ca_.Goto(&block76, tmp283, tmp284);
  }

  if (block77.is_used()) {
    compiler::TNode<Smi> tmp285;
    compiler::TNode<Smi> tmp286;
    ca_.Bind(&block77, &tmp285, &tmp286);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 443);
    compiler::TNode<Smi> tmp287;
    USE(tmp287);
    tmp287 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp288;
    USE(tmp288);
    tmp288 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp286}, compiler::TNode<Smi>{tmp287});
    ca_.Branch(tmp288, &block83, &block84, tmp285, tmp286);
  }

  if (block84.is_used()) {
    compiler::TNode<Smi> tmp289;
    compiler::TNode<Smi> tmp290;
    ca_.Bind(&block84, &tmp289, &tmp290);
    CodeStubAssembler(state_).FailAssert("Torque assert 'j == 10' failed", "test/torque/test-torque.tq", 443);
  }

  if (block83.is_used()) {
    compiler::TNode<Smi> tmp291;
    compiler::TNode<Smi> tmp292;
    ca_.Bind(&block83, &tmp291, &tmp292);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 437);
    ca_.Goto(&block76, tmp291, tmp292);
  }

  if (block76.is_used()) {
    compiler::TNode<Smi> tmp293;
    compiler::TNode<Smi> tmp294;
    ca_.Bind(&block76, &tmp293, &tmp294);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 447);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 448);
    compiler::TNode<Smi> tmp295;
    USE(tmp295);
    tmp295 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block87, tmp293, tmp294, ca_.Uninitialized<Smi>(), tmp295);
  }

  if (block87.is_used()) {
    compiler::TNode<Smi> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<Smi> tmp298;
    compiler::TNode<Smi> tmp299;
    ca_.Bind(&block87, &tmp296, &tmp297, &tmp298, &tmp299);
    compiler::TNode<Smi> tmp300;
    USE(tmp300);
    tmp300 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp301;
    USE(tmp301);
    tmp301 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp299}, compiler::TNode<Smi>{tmp300});
    ca_.Branch(tmp301, &block85, &block86, tmp296, tmp297, tmp298, tmp299);
  }

  if (block85.is_used()) {
    compiler::TNode<Smi> tmp302;
    compiler::TNode<Smi> tmp303;
    compiler::TNode<Smi> tmp304;
    compiler::TNode<Smi> tmp305;
    ca_.Bind(&block85, &tmp302, &tmp303, &tmp304, &tmp305);
    ca_.Goto(&block88, tmp302, tmp303, tmp304, tmp305);
  }

  if (block88.is_used()) {
    compiler::TNode<Smi> tmp306;
    compiler::TNode<Smi> tmp307;
    compiler::TNode<Smi> tmp308;
    compiler::TNode<Smi> tmp309;
    ca_.Bind(&block88, &tmp306, &tmp307, &tmp308, &tmp309);
    compiler::TNode<Smi> tmp310;
    USE(tmp310);
    tmp310 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp311;
    USE(tmp311);
    tmp311 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp309}, compiler::TNode<Smi>{tmp310});
    ca_.Goto(&block87, tmp306, tmp307, tmp308, tmp311);
  }

  if (block86.is_used()) {
    compiler::TNode<Smi> tmp312;
    compiler::TNode<Smi> tmp313;
    compiler::TNode<Smi> tmp314;
    compiler::TNode<Smi> tmp315;
    ca_.Bind(&block86, &tmp312, &tmp313, &tmp314, &tmp315);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 353);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 352);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block89);
  }

    ca_.Bind(&block89);
}

void TestSubtyping_425(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 454);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 453);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 452);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
}

compiler::TNode<Int32T> TypeswitchExample_426(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object, FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, HeapObject, FixedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_x);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 471);
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 472);
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1410(state_, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 473);
    compiler::TNode<FixedArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast10FixedArray_1367(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp3);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Int32T> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block5, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block3, tmp5, tmp6, tmp7, tmp8);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Int32T> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<FixedArray> tmp15;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 474);
    compiler::TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 1);
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp12}, compiler::TNode<Int32T>{tmp16});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 473);
    ca_.Goto(&block2, tmp10, tmp11, tmp17, tmp13);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Int32T> tmp20;
    compiler::TNode<Object> tmp21;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 476);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 477);
    compiler::TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 2);
    compiler::TNode<Int32T> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp20}, compiler::TNode<Int32T>{tmp22});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 473);
    ca_.Goto(&block2, tmp18, tmp19, tmp23, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 472);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 481);
    compiler::TNode<Int32T> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 10);
    compiler::TNode<Int32T> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).Int32Mul(compiler::TNode<Int32T>{tmp26}, compiler::TNode<Int32T>{tmp28});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 483);
    compiler::TNode<Object> tmp30;
    USE(tmp30);
    tmp30 = IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1410(state_, compiler::TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 484);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block8, tmp24, tmp25, tmp29, tmp30, tmp30, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp24, tmp25, tmp29, tmp30, tmp30);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Int32T> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    ca_.Bind(&block9, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block7, tmp32, tmp33, tmp34, tmp35);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Int32T> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Smi> tmp42;
    ca_.Bind(&block8, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 485);
    compiler::TNode<Int32T> tmp43;
    USE(tmp43);
    tmp43 = Convert7ATint325ATSmi_192(state_, compiler::TNode<Smi>{tmp42});
    compiler::TNode<Int32T> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp39}, compiler::TNode<Int32T>{tmp43});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 484);
    ca_.Goto(&block6, tmp37, tmp38, tmp44, tmp40);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Int32T> tmp47;
    compiler::TNode<Object> tmp48;
    ca_.Bind(&block7, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 487);
    compiler::TNode<FixedArray> tmp49;
    USE(tmp49);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp49 = Cast10FixedArray_103(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp48)}, &label0);
    ca_.Goto(&block12, tmp45, tmp46, tmp47, tmp48, ca_.UncheckedCast<HeapObject>(tmp48), tmp49);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp45, tmp46, tmp47, tmp48, ca_.UncheckedCast<HeapObject>(tmp48));
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Int32T> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<HeapObject> tmp54;
    ca_.Bind(&block13, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.Goto(&block11, tmp50, tmp51, tmp52, tmp53);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Int32T> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<HeapObject> tmp59;
    compiler::TNode<FixedArray> tmp60;
    ca_.Bind(&block12, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 488);
    compiler::TNode<IntPtrT> tmp61 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp61);
    compiler::TNode<Smi>tmp62 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp60, tmp61});
    compiler::TNode<Int32T> tmp63;
    USE(tmp63);
    tmp63 = Convert7ATint325ATSmi_192(state_, compiler::TNode<Smi>{tmp62});
    compiler::TNode<Int32T> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp57}, compiler::TNode<Int32T>{tmp63});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 487);
    ca_.Goto(&block10, tmp55, tmp56, tmp64, tmp58);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Int32T> tmp67;
    compiler::TNode<Object> tmp68;
    ca_.Bind(&block11, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 490);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 491);
    compiler::TNode<Int32T> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 7);
    compiler::TNode<Int32T> tmp70;
    USE(tmp70);
    tmp70 = CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp67}, compiler::TNode<Int32T>{tmp69});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 487);
    ca_.Goto(&block10, tmp65, tmp66, tmp70, tmp68);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Int32T> tmp73;
    compiler::TNode<Object> tmp74;
    ca_.Bind(&block10, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 484);
    ca_.Goto(&block6, tmp71, tmp72, tmp73, tmp74);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Int32T> tmp77;
    compiler::TNode<Object> tmp78;
    ca_.Bind(&block6, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 483);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 495);
    ca_.Goto(&block1, tmp75, tmp76, tmp77);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Int32T> tmp81;
    ca_.Bind(&block1, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 469);
    ca_.Goto(&block14, tmp79, tmp80, tmp81);
  }

    compiler::TNode<Context> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Int32T> tmp84;
    ca_.Bind(&block14, &tmp82, &tmp83, &tmp84);
  return compiler::TNode<Int32T>{tmp84};
}

void TestTypeswitch_427(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 500);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = TypeswitchExample_426(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    compiler::TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 26);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp2}, compiler::TNode<Int32T>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(FromConstexpr<Smi>(5)) == 26' failed", "test/torque/test-torque.tq", 500);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    ca_.Bind(&block2, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 501);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 3);
    compiler::TNode<FixedArray> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).AllocateZeroedFixedArray(compiler::TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 502);
    compiler::TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = TypeswitchExample_426(state_, compiler::TNode<Context>{tmp6}, compiler::TNode<Object>{tmp8});
    compiler::TNode<Int32T> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 13);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp9}, compiler::TNode<Int32T>{tmp10});
    ca_.Branch(tmp11, &block4, &block5, tmp6, tmp8);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<FixedArray> tmp13;
    ca_.Bind(&block5, &tmp12, &tmp13);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(a) == 13' failed", "test/torque/test-torque.tq", 502);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<FixedArray> tmp15;
    ca_.Bind(&block4, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 503);
    compiler::TNode<Number> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr20UT5ATSmi10HeapNumber19ATconstexpr_float64_157(state_, 0.5);
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = TypeswitchExample_426(state_, compiler::TNode<Context>{tmp14}, compiler::TNode<Object>{tmp16});
    compiler::TNode<Int32T> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 27);
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp17}, compiler::TNode<Int32T>{tmp18});
    ca_.Branch(tmp19, &block6, &block7, tmp14, tmp15);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<FixedArray> tmp21;
    ca_.Bind(&block7, &tmp20, &tmp21);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(FromConstexpr<Number>(0.5)) == 27' failed", "test/torque/test-torque.tq", 503);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<FixedArray> tmp23;
    ca_.Bind(&block6, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 499);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 498);
    ca_.Goto(&block1, tmp22);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp24;
    ca_.Bind(&block1, &tmp24);
    ca_.Goto(&block8, tmp24);
  }

    compiler::TNode<Context> tmp25;
    ca_.Bind(&block8, &tmp25);
}

void TestTypeswitchAsanLsanFailure_428(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject, JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_obj);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 508);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 509);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp7, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 511);
    compiler::TNode<JSTypedArray> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = Cast12JSTypedArray_109(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp14)}, &label0);
    ca_.Goto(&block8, tmp12, tmp13, tmp14, ca_.UncheckedCast<HeapObject>(tmp14), tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp12, tmp13, tmp14, ca_.UncheckedCast<HeapObject>(tmp14));
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<HeapObject> tmp19;
    ca_.Bind(&block9, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block7, tmp16, tmp17, tmp18);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<HeapObject> tmp23;
    compiler::TNode<JSTypedArray> tmp24;
    ca_.Bind(&block8, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block6, tmp20, tmp21, tmp22);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 513);
    compiler::TNode<JSReceiver> tmp28;
    USE(tmp28);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp28 = Cast10JSReceiver_140(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp27)}, &label0);
    ca_.Goto(&block12, tmp25, tmp26, tmp27, ca_.UncheckedCast<HeapObject>(tmp27), tmp28);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp25, tmp26, tmp27, ca_.UncheckedCast<HeapObject>(tmp27));
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<HeapObject> tmp32;
    ca_.Bind(&block13, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block11, tmp29, tmp30, tmp31);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<HeapObject> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    ca_.Bind(&block12, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block10, tmp33, tmp34, tmp35);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    ca_.Bind(&block11, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 515);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 513);
    ca_.Goto(&block10, tmp38, tmp39, tmp40);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    ca_.Bind(&block10, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 511);
    ca_.Goto(&block6, tmp41, tmp42, tmp43);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    ca_.Bind(&block6, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 509);
    ca_.Goto(&block2, tmp44, tmp45, tmp46);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    ca_.Bind(&block2, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 508);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 506);
    ca_.Goto(&block1, tmp47, tmp48);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Object> tmp51;
    ca_.Bind(&block1, &tmp50, &tmp51);
    ca_.Goto(&block14, tmp50, tmp51);
  }

    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    ca_.Bind(&block14, &tmp52, &tmp53);
}

void TestGenericOverload_429(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 529);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 530);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 531);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = ExampleGenericOverload5ATSmi_1411(state_, compiler::TNode<Smi>{tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 6);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'ExampleGenericOverload<Smi>(xSmi) == 6' failed", "test/torque/test-torque.tq", 531);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 532);
    compiler::TNode<Object> tmp11;
    USE(tmp11);
    tmp11 = ExampleGenericOverload20UT5ATSmi10HeapObject_1412(state_, compiler::TNode<Object>{tmp10});
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = UnsafeCast5ATSmi_1344(state_, compiler::TNode<Context>{tmp8}, compiler::TNode<Object>{tmp11});
    compiler::TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp12}, compiler::TNode<Smi>{tmp13});
    ca_.Branch(tmp14, &block4, &block5, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'UnsafeCast<Smi>(ExampleGenericOverload<Object>(xObject)) == 5' failed", "test/torque/test-torque.tq", 532);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Object> tmp20;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 528);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 527);
    ca_.Goto(&block1, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp21;
    ca_.Bind(&block1, &tmp21);
    ca_.Goto(&block6, tmp21);
  }

    compiler::TNode<Context> tmp22;
    ca_.Bind(&block6, &tmp22);
}

void TestEquality_430(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 538);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr9ATfloat6419ATconstexpr_float64_164(state_, 0.5);
    compiler::TNode<HeapNumber> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp1});
    compiler::TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr9ATfloat6419ATconstexpr_float64_164(state_, 0.5);
    compiler::TNode<HeapNumber> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp3});
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = IsNumberNotEqual_74(state_, compiler::TNode<Number>{tmp2}, compiler::TNode<Number>{tmp4});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 537);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 539);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<BoolT> tmp8;
    ca_.Bind(&block3, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert '!notEqual' failed", "test/torque/test-torque.tq", 539);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<BoolT> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 541);
    compiler::TNode<Float64T> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr9ATfloat6419ATconstexpr_float64_164(state_, 0.5);
    compiler::TNode<HeapNumber> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp11});
    compiler::TNode<Float64T> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr9ATfloat6419ATconstexpr_float64_164(state_, 0.5);
    compiler::TNode<HeapNumber> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp13});
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = IsNumberEqual_73(state_, compiler::TNode<Number>{tmp12}, compiler::TNode<Number>{tmp14});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 540);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 542);
    ca_.Branch(tmp15, &block4, &block5, tmp9, tmp10, tmp15);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block5, &tmp16, &tmp17, &tmp18);
    CodeStubAssembler(state_).FailAssert("Torque assert 'equal' failed", "test/torque/test-torque.tq", 542);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    ca_.Bind(&block4, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 536);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 535);
    ca_.Goto(&block1, tmp19);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp22;
    ca_.Bind(&block1, &tmp22);
    ca_.Goto(&block6, tmp22);
  }

    compiler::TNode<Context> tmp23;
    ca_.Bind(&block6, &tmp23);
}

compiler::TNode<BoolT> TestOrAnd_431(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT, BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    compiler::TNode<BoolT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 547);
    ca_.Branch(tmp0, &block6, &block7, tmp0, tmp1, tmp2, tmp0);
  }

  if (block6.is_used()) {
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BoolT> tmp4;
    compiler::TNode<BoolT> tmp5;
    compiler::TNode<BoolT> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block8, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block7.is_used()) {
    compiler::TNode<BoolT> tmp8;
    compiler::TNode<BoolT> tmp9;
    compiler::TNode<BoolT> tmp10;
    compiler::TNode<BoolT> tmp11;
    ca_.Bind(&block7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Branch(tmp9, &block9, &block10, tmp8, tmp9, tmp10, tmp11, tmp9);
  }

  if (block9.is_used()) {
    compiler::TNode<BoolT> tmp12;
    compiler::TNode<BoolT> tmp13;
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<BoolT> tmp16;
    ca_.Bind(&block9, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Goto(&block11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp14);
  }

  if (block10.is_used()) {
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    compiler::TNode<BoolT> tmp19;
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    ca_.Bind(&block10, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block11, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block11.is_used()) {
    compiler::TNode<BoolT> tmp23;
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    compiler::TNode<BoolT> tmp26;
    compiler::TNode<BoolT> tmp27;
    compiler::TNode<BoolT> tmp28;
    ca_.Bind(&block11, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block8, tmp23, tmp24, tmp25, tmp26, tmp28);
  }

  if (block8.is_used()) {
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    compiler::TNode<BoolT> tmp31;
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<BoolT> tmp33;
    ca_.Bind(&block8, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Branch(tmp33, &block2, &block3, tmp29, tmp30, tmp31);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<BoolT> tmp36;
    ca_.Bind(&block2, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block5, tmp34, tmp35, tmp36);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<BoolT> tmp38;
    compiler::TNode<BoolT> tmp39;
    ca_.Bind(&block3, &tmp37, &tmp38, &tmp39);
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block4, tmp37, tmp38, tmp39, tmp40);
  }

  if (block5.is_used()) {
    compiler::TNode<BoolT> tmp41;
    compiler::TNode<BoolT> tmp42;
    compiler::TNode<BoolT> tmp43;
    ca_.Bind(&block5, &tmp41, &tmp42, &tmp43);
    compiler::TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block4, tmp41, tmp42, tmp43, tmp44);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp45;
    compiler::TNode<BoolT> tmp46;
    compiler::TNode<BoolT> tmp47;
    compiler::TNode<BoolT> tmp48;
    ca_.Bind(&block4, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.Goto(&block1, tmp45, tmp46, tmp47, tmp48);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp49;
    compiler::TNode<BoolT> tmp50;
    compiler::TNode<BoolT> tmp51;
    compiler::TNode<BoolT> tmp52;
    ca_.Bind(&block1, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 545);
    ca_.Goto(&block12, tmp49, tmp50, tmp51, tmp52);
  }

    compiler::TNode<BoolT> tmp53;
    compiler::TNode<BoolT> tmp54;
    compiler::TNode<BoolT> tmp55;
    compiler::TNode<BoolT> tmp56;
    ca_.Bind(&block12, &tmp53, &tmp54, &tmp55, &tmp56);
  return compiler::TNode<BoolT>{tmp56};
}

compiler::TNode<BoolT> TestAndOr_432(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    compiler::TNode<BoolT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 552);
    ca_.Branch(tmp0, &block6, &block7, tmp0, tmp1, tmp2, tmp0);
  }

  if (block6.is_used()) {
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BoolT> tmp4;
    compiler::TNode<BoolT> tmp5;
    compiler::TNode<BoolT> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block8, tmp3, tmp4, tmp5, tmp6, tmp4);
  }

  if (block7.is_used()) {
    compiler::TNode<BoolT> tmp7;
    compiler::TNode<BoolT> tmp8;
    compiler::TNode<BoolT> tmp9;
    compiler::TNode<BoolT> tmp10;
    ca_.Bind(&block7, &tmp7, &tmp8, &tmp9, &tmp10);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block8.is_used()) {
    compiler::TNode<BoolT> tmp12;
    compiler::TNode<BoolT> tmp13;
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<BoolT> tmp16;
    ca_.Bind(&block8, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Branch(tmp16, &block9, &block10, tmp12, tmp13, tmp14, tmp16);
  }

  if (block9.is_used()) {
    compiler::TNode<BoolT> tmp17;
    compiler::TNode<BoolT> tmp18;
    compiler::TNode<BoolT> tmp19;
    compiler::TNode<BoolT> tmp20;
    ca_.Bind(&block9, &tmp17, &tmp18, &tmp19, &tmp20);
    compiler::TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block11, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block10.is_used()) {
    compiler::TNode<BoolT> tmp22;
    compiler::TNode<BoolT> tmp23;
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    ca_.Bind(&block10, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block11, tmp22, tmp23, tmp24, tmp25, tmp24);
  }

  if (block11.is_used()) {
    compiler::TNode<BoolT> tmp26;
    compiler::TNode<BoolT> tmp27;
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    ca_.Bind(&block11, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Branch(tmp30, &block2, &block3, tmp26, tmp27, tmp28);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp31;
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<BoolT> tmp33;
    ca_.Bind(&block2, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block5, tmp31, tmp32, tmp33);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<BoolT> tmp36;
    ca_.Bind(&block3, &tmp34, &tmp35, &tmp36);
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block4, tmp34, tmp35, tmp36, tmp37);
  }

  if (block5.is_used()) {
    compiler::TNode<BoolT> tmp38;
    compiler::TNode<BoolT> tmp39;
    compiler::TNode<BoolT> tmp40;
    ca_.Bind(&block5, &tmp38, &tmp39, &tmp40);
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block4, tmp38, tmp39, tmp40, tmp41);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp42;
    compiler::TNode<BoolT> tmp43;
    compiler::TNode<BoolT> tmp44;
    compiler::TNode<BoolT> tmp45;
    ca_.Bind(&block4, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.Goto(&block1, tmp42, tmp43, tmp44, tmp45);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp46;
    compiler::TNode<BoolT> tmp47;
    compiler::TNode<BoolT> tmp48;
    compiler::TNode<BoolT> tmp49;
    ca_.Bind(&block1, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 550);
    ca_.Goto(&block12, tmp46, tmp47, tmp48, tmp49);
  }

    compiler::TNode<BoolT> tmp50;
    compiler::TNode<BoolT> tmp51;
    compiler::TNode<BoolT> tmp52;
    compiler::TNode<BoolT> tmp53;
    ca_.Bind(&block12, &tmp50, &tmp51, &tmp52, &tmp53);
  return compiler::TNode<BoolT>{tmp53};
}

void TestLogicalOperators_433(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 557);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = TestAndOr_432(state_, compiler::TNode<BoolT>{tmp0}, compiler::TNode<BoolT>{tmp1}, compiler::TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(true, true, true)' failed", "test/torque/test-torque.tq", 557);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 558);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = TestAndOr_432(state_, compiler::TNode<BoolT>{tmp4}, compiler::TNode<BoolT>{tmp5}, compiler::TNode<BoolT>{tmp6});
    ca_.Branch(tmp7, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(true, true, false)' failed", "test/torque/test-torque.tq", 558);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 559);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = TestAndOr_432(state_, compiler::TNode<BoolT>{tmp8}, compiler::TNode<BoolT>{tmp9}, compiler::TNode<BoolT>{tmp10});
    ca_.Branch(tmp11, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(true, false, true)' failed", "test/torque/test-torque.tq", 559);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 560);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = TestAndOr_432(state_, compiler::TNode<BoolT>{tmp12}, compiler::TNode<BoolT>{tmp13}, compiler::TNode<BoolT>{tmp14});
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp15});
    ca_.Branch(tmp16, &block8, &block9);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr(true, false, false)' failed", "test/torque/test-torque.tq", 560);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 561);
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = TestAndOr_432(state_, compiler::TNode<BoolT>{tmp17}, compiler::TNode<BoolT>{tmp18}, compiler::TNode<BoolT>{tmp19});
    ca_.Branch(tmp20, &block10, &block11);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(false, true, true)' failed", "test/torque/test-torque.tq", 561);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 562);
    compiler::TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = TestAndOr_432(state_, compiler::TNode<BoolT>{tmp21}, compiler::TNode<BoolT>{tmp22}, compiler::TNode<BoolT>{tmp23});
    compiler::TNode<BoolT> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp24});
    ca_.Branch(tmp25, &block12, &block13);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr(false, true, false)' failed", "test/torque/test-torque.tq", 562);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 563);
    compiler::TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = TestAndOr_432(state_, compiler::TNode<BoolT>{tmp26}, compiler::TNode<BoolT>{tmp27}, compiler::TNode<BoolT>{tmp28});
    ca_.Branch(tmp29, &block14, &block15);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(false, false, true)' failed", "test/torque/test-torque.tq", 563);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 564);
    compiler::TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = TestAndOr_432(state_, compiler::TNode<BoolT>{tmp30}, compiler::TNode<BoolT>{tmp31}, compiler::TNode<BoolT>{tmp32});
    compiler::TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp33});
    ca_.Branch(tmp34, &block16, &block17);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr(false, false, false)' failed", "test/torque/test-torque.tq", 564);
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 565);
    compiler::TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = TestOrAnd_431(state_, compiler::TNode<BoolT>{tmp35}, compiler::TNode<BoolT>{tmp36}, compiler::TNode<BoolT>{tmp37});
    ca_.Branch(tmp38, &block18, &block19);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, true, true)' failed", "test/torque/test-torque.tq", 565);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 566);
    compiler::TNode<BoolT> tmp39;
    USE(tmp39);
    tmp39 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = TestOrAnd_431(state_, compiler::TNode<BoolT>{tmp39}, compiler::TNode<BoolT>{tmp40}, compiler::TNode<BoolT>{tmp41});
    ca_.Branch(tmp42, &block20, &block21);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, true, false)' failed", "test/torque/test-torque.tq", 566);
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 567);
    compiler::TNode<BoolT> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp46;
    USE(tmp46);
    tmp46 = TestOrAnd_431(state_, compiler::TNode<BoolT>{tmp43}, compiler::TNode<BoolT>{tmp44}, compiler::TNode<BoolT>{tmp45});
    ca_.Branch(tmp46, &block22, &block23);
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, false, true)' failed", "test/torque/test-torque.tq", 567);
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 568);
    compiler::TNode<BoolT> tmp47;
    USE(tmp47);
    tmp47 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = TestOrAnd_431(state_, compiler::TNode<BoolT>{tmp47}, compiler::TNode<BoolT>{tmp48}, compiler::TNode<BoolT>{tmp49});
    ca_.Branch(tmp50, &block24, &block25);
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, false, false)' failed", "test/torque/test-torque.tq", 568);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 569);
    compiler::TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = TestOrAnd_431(state_, compiler::TNode<BoolT>{tmp51}, compiler::TNode<BoolT>{tmp52}, compiler::TNode<BoolT>{tmp53});
    ca_.Branch(tmp54, &block26, &block27);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(false, true, true)' failed", "test/torque/test-torque.tq", 569);
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 570);
    compiler::TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp58;
    USE(tmp58);
    tmp58 = TestOrAnd_431(state_, compiler::TNode<BoolT>{tmp55}, compiler::TNode<BoolT>{tmp56}, compiler::TNode<BoolT>{tmp57});
    compiler::TNode<BoolT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp58});
    ca_.Branch(tmp59, &block28, &block29);
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd(false, true, false)' failed", "test/torque/test-torque.tq", 570);
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 571);
    compiler::TNode<BoolT> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    compiler::TNode<BoolT> tmp63;
    USE(tmp63);
    tmp63 = TestOrAnd_431(state_, compiler::TNode<BoolT>{tmp60}, compiler::TNode<BoolT>{tmp61}, compiler::TNode<BoolT>{tmp62});
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp63});
    ca_.Branch(tmp64, &block30, &block31);
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd(false, false, true)' failed", "test/torque/test-torque.tq", 571);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 572);
    compiler::TNode<BoolT> tmp65;
    USE(tmp65);
    tmp65 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp66;
    USE(tmp66);
    tmp66 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp67;
    USE(tmp67);
    tmp67 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    compiler::TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = TestOrAnd_431(state_, compiler::TNode<BoolT>{tmp65}, compiler::TNode<BoolT>{tmp66}, compiler::TNode<BoolT>{tmp67});
    compiler::TNode<BoolT> tmp69;
    USE(tmp69);
    tmp69 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp68});
    ca_.Branch(tmp69, &block32, &block33);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd(false, false, false)' failed", "test/torque/test-torque.tq", 572);
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 555);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block34);
  }

    ca_.Bind(&block34);
}

compiler::TNode<Smi> TestCall_434(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 577);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block3, &tmp3);
    ca_.Goto(&block2, tmp3, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 578);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 575);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_A);
  }

    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return compiler::TNode<Smi>{tmp8};
}

void TestOtherwiseWithCode1_435(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 583);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 584);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 586);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = TestCall_434(state_, compiler::TNode<Smi>{tmp2}, &label0);
    ca_.Goto(&block6, tmp0, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp0, tmp1);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block7, &tmp4, &tmp5);
    ca_.Goto(&block5, tmp4, tmp5);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block4, tmp6, tmp7, tmp8);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11});
    ca_.Goto(&block3, tmp9, tmp12, tmp12);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block4, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 588);
    ca_.Goto(&block2, tmp13, tmp14);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 589);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 585);
    ca_.Goto(&block2, tmp18, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block2, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 582);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 581);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

void TestOtherwiseWithCode2_436(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 596);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 597);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 598);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp8 = TestCall_434(state_, compiler::TNode<Smi>{tmp7}, &label0);
    ca_.Goto(&block8, tmp6, tmp7, tmp7, tmp8);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp6, tmp7, tmp7);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block9, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block7, tmp9, tmp10);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block8, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block6, tmp12, tmp13, tmp15);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block7, &tmp16, &tmp17);
    ca_.Goto(&block3, tmp16, tmp17);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block6, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 599);
    compiler::TNode<Smi> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp18}, compiler::TNode<Smi>{tmp21});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 597);
    ca_.Goto(&block5, tmp22, tmp19);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block5, &tmp23, &tmp24);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp24}, compiler::TNode<Smi>{tmp25});
    ca_.Goto(&block4, tmp23, tmp26);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Smi> tmp28;
    ca_.Bind(&block3, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 595);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 594);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

void TestOtherwiseWithCode3_437(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 606);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 607);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 10);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 608);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp8 = TestCall_434(state_, compiler::TNode<Smi>{tmp7}, &label0);
    ca_.Goto(&block8, tmp6, tmp7, tmp6, tmp7, tmp8);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp6, tmp7, tmp6, tmp7);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<Smi> tmp12;
    ca_.Bind(&block9, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block7, tmp9, tmp10, tmp11);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block8, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block6, tmp13, tmp14, tmp15, tmp17);
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block7, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block3, tmp18, tmp19);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block6, &tmp21, &tmp22, &tmp23, &tmp24);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp23}, compiler::TNode<Smi>{tmp24});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 607);
    ca_.Goto(&block5, tmp25, tmp22);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    ca_.Bind(&block5, &tmp26, &tmp27);
    compiler::TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp27}, compiler::TNode<Smi>{tmp28});
    ca_.Goto(&block4, tmp26, tmp29);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp30;
    compiler::TNode<Smi> tmp31;
    ca_.Bind(&block3, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 605);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 604);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

void TestForwardLabel_438(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 616);
    ca_.Goto(&block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 619);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    ca_.Goto(&block3, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block3, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 615);
    ca_.Goto(&block2, tmp1);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 613);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

void TestQualifiedAccess_439(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 628);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 629);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = Is7JSArray5ATSmi_1413(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Smi>{tmp1});
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert '!Is<JSArray>(s)' failed", "test/torque/test-torque.tq", 629);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 627);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 626);
    ca_.Goto(&block1, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp8;
    ca_.Bind(&block1, &tmp8);
    ca_.Goto(&block4, tmp8);
  }

    compiler::TNode<Context> tmp9;
    ca_.Bind(&block4, &tmp9);
}

compiler::TNode<Smi> TestCatch1_440(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 634);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 636);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch2__label);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp0}, MessageTemplate::kInvalidArrayLength);
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      compiler::TNode<Object> catch2_exception_object;
      ca_.Bind(&catch2__label, &catch2_exception_object);
      ca_.Goto(&block4, tmp0, tmp1, catch2_exception_object);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 638);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 639);
    ca_.Goto(&block1, tmp6, tmp9);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block1, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 632);
    ca_.Goto(&block5, tmp10, tmp11);
  }

    compiler::TNode<Context> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block5, &tmp12, &tmp13);
  return compiler::TNode<Smi>{tmp13};
}

void TestCatch2Wrapper_441(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 645);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp0}, MessageTemplate::kInvalidArrayLength);
  }
}

compiler::TNode<Smi> TestCatch2_442(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 650);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 652);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch2__label);
    TestCatch2Wrapper_441(state_, compiler::TNode<Context>{tmp0});
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      compiler::TNode<Object> catch2_exception_object;
      ca_.Bind(&catch2__label, &catch2_exception_object);
      ca_.Goto(&block4, tmp0, tmp1, catch2_exception_object);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 654);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 655);
    ca_.Goto(&block1, tmp6, tmp9);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block1, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 648);
    ca_.Goto(&block5, tmp10, tmp11);
  }

    compiler::TNode<Context> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block5, &tmp12, &tmp13);
  return compiler::TNode<Smi>{tmp13};
}

void TestCatch3WrapperWithLabel_443(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 662);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp0}, MessageTemplate::kInvalidArrayLength);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 659);
    ca_.Goto(label__Abort);
  }
}

compiler::TNode<Smi> TestCatch3_444(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 667);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 669);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch2__label);
    TestCatch3WrapperWithLabel_443(state_, compiler::TNode<Context>{tmp0}, &label0);
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      compiler::TNode<Object> catch2_exception_object;
      ca_.Bind(&catch2__label, &catch2_exception_object);
      ca_.Goto(&block7, tmp0, tmp1, catch2_exception_object);
    }
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block6, &tmp6, &tmp7);
    ca_.Goto(&block5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block5, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 672);
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch11__label);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, -1);
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      compiler::TNode<Object> catch11_exception_object;
      ca_.Bind(&catch11__label, &catch11_exception_object);
      ca_.Goto(&block8, tmp8, tmp9, catch11_exception_object);
      ca_.Bind(&catch11_skip);
    }
    ca_.Goto(&block1, tmp8, tmp10);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block8, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp12, tmp13, tmp14);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block3, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 675);
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 676);
    ca_.Goto(&block1, tmp15, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block1, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 665);
    ca_.Goto(&block9, tmp19, tmp20);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Smi> tmp22;
    ca_.Bind(&block9, &tmp21, &tmp22);
  return compiler::TNode<Smi>{tmp22};
}

void TestIterator_445(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Map> p_map) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, JSReceiver, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, JSReceiver, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, Object, JSReceiver, Object, Map> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, Object, JSReceiver, Object, Map, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_map);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Map> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 687);
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = IteratorBuiltinsAssembler(state_).GetIteratorMethod(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 688);
    compiler::TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::TNode<Object> tmp5;
    USE(tmp5);
    std::tie(tmp4, tmp5) = IteratorBuiltinsAssembler(state_).GetIterator(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}).Flatten();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 690);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = IteratorBuiltinsAssembler(state_).IteratorStep(compiler::TNode<Context>{tmp0}, TorqueStructIteratorRecord{compiler::TNode<JSReceiver>{tmp4}, compiler::TNode<Object>{tmp5}}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp4, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp4, tmp5);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<Map> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<JSReceiver> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp7, tmp8, tmp9);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Map> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 691);
    compiler::TNode<JSReceiver> tmp24;
    USE(tmp24);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp24 = IteratorBuiltinsAssembler(state_).IteratorStep(compiler::TNode<Context>{tmp15}, TorqueStructIteratorRecord{compiler::TNode<JSReceiver>{tmp19}, compiler::TNode<Object>{tmp20}}, compiler::TNode<Map>{tmp17}, &label0);
    ca_.Goto(&block6, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp23, tmp19, tmp20, tmp17, tmp24);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp23, tmp19, tmp20, tmp17);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    compiler::TNode<Map> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Map> tmp34;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block3, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    compiler::TNode<Map> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Map> tmp44;
    compiler::TNode<JSReceiver> tmp45;
    ca_.Bind(&block6, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 693);
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = IteratorBuiltinsAssembler(state_).IteratorValue(compiler::TNode<Context>{tmp35}, compiler::TNode<JSReceiver>{tmp36});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 694);
    compiler::TNode<Object> tmp47;
    USE(tmp47);
    tmp47 = IteratorBuiltinsAssembler(state_).IteratorValue(compiler::TNode<Context>{tmp35}, compiler::TNode<JSReceiver>{tmp36}, compiler::TNode<Map>{tmp37});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 696);
    compiler::TNode<JSArray> tmp48;
    USE(tmp48);
    tmp48 = IteratorBuiltinsAssembler(state_).IterableToList(compiler::TNode<Context>{tmp35}, compiler::TNode<Object>{tmp38}, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 698);
    IteratorBuiltinsAssembler(state_).IteratorCloseOnException(compiler::TNode<Context>{tmp35}, TorqueStructIteratorRecord{compiler::TNode<JSReceiver>{tmp39}, compiler::TNode<Object>{tmp40}}, compiler::TNode<Object>{tmp46});
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Map> tmp51;
    ca_.Bind(&block3, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 686);
    ca_.Goto(&block2, tmp49, tmp50, tmp51);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    compiler::TNode<Map> tmp54;
    ca_.Bind(&block2, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 684);
    ca_.Goto(&block1, tmp52, tmp53, tmp54);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<Map> tmp57;
    ca_.Bind(&block1, &tmp55, &tmp56, &tmp57);
    ca_.Goto(&block8, tmp55, tmp56, tmp57);
  }

    compiler::TNode<Context> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    compiler::TNode<Map> tmp60;
    ca_.Bind(&block8, &tmp58, &tmp59, &tmp60);
}

void TestFrame1_446(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT, RawPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT, RawPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 705);
    compiler::TNode<RawPtrT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).LoadFramePointer();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 707);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = LoadContextOrFrameTypeFromFrame_299(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<RawPtrT>{tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast11ATFrameType_292(state_, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp7, tmp8, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<RawPtrT> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 706);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 710);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 711);
    compiler::TNode<RawPtrT> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast15ATStandardFrame_302(state_, compiler::TNode<Context>{tmp13}, compiler::TNode<RawPtrT>{tmp14}, &label0);
    ca_.Goto(&block8, tmp13, tmp14, tmp15, tmp14, tmp14, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp13, tmp14, tmp15, tmp14, tmp14);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    ca_.Bind(&block9, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block7, tmp17, tmp18, tmp19, tmp20);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 712);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<Smi> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 714);
    compiler::TNode<RawPtrT> tmp32;
    USE(tmp32);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp32 = Cast23ATArgumentsAdaptorFrame_303(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<RawPtrT>{ca_.UncheckedCast<RawPtrT>(tmp31)}, &label0);
    ca_.Goto(&block12, tmp28, tmp29, tmp30, tmp31, ca_.UncheckedCast<RawPtrT>(tmp31), tmp32);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp28, tmp29, tmp30, tmp31, ca_.UncheckedCast<RawPtrT>(tmp31));
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    ca_.Bind(&block13, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block11, tmp33, tmp34, tmp35, tmp36);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    ca_.Bind(&block12, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 715);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<RawPtrT> tmp47;
    ca_.Bind(&block11, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 717);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 714);
    ca_.Goto(&block10, tmp44, tmp45, tmp46, tmp47);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<RawPtrT> tmp51;
    ca_.Bind(&block10, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 711);
    ca_.Goto(&block6, tmp48, tmp49, tmp50, tmp51);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<RawPtrT> tmp55;
    ca_.Bind(&block6, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 710);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 704);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 703);
    ca_.Goto(&block1, tmp52);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp56;
    ca_.Bind(&block1, &tmp56);
    ca_.Goto(&block14, tmp56);
  }

    compiler::TNode<Context> tmp57;
    ca_.Bind(&block14, &tmp57);
}

void TestNew_447(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 724);
    compiler::TNode<JSArray> tmp1;
    USE(tmp1);
    tmp1 = NewJSArray_60(state_, compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 725);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = _method_JSArray_IsEmpty(state_, compiler::TNode<JSArray>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<JSArray> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert 'f.IsEmpty()' failed", "test/torque/test-torque.tq", 725);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSArray> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 726);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp7);
    compiler::TNode<Number> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp7}, tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 723);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 722);
    ca_.Goto(&block1, tmp5);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp9;
    ca_.Bind(&block1, &tmp9);
    ca_.Goto(&block4, tmp9);
  }

    compiler::TNode<Context> tmp10;
    ca_.Bind(&block4, &tmp10);
}

void TestStructConstructor_448(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T, Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T, Int32T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 749);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 6);
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 7);
    compiler::TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 5);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 750);
    compiler::TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 5);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp3}, compiler::TNode<Int32T>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp3, tmp1, tmp2, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Int32T> tmp8;
    compiler::TNode<Int32T> tmp9;
    compiler::TNode<Int32T> tmp10;
    compiler::TNode<Int32T> tmp11;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.a == 5' failed", "test/torque/test-torque.tq", 750);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Int32T> tmp13;
    compiler::TNode<Int32T> tmp14;
    compiler::TNode<Int32T> tmp15;
    compiler::TNode<Int32T> tmp16;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 751);
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 6);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp14}, compiler::TNode<Int32T>{tmp17});
    ca_.Branch(tmp18, &block4, &block5, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Int32T> tmp20;
    compiler::TNode<Int32T> tmp21;
    compiler::TNode<Int32T> tmp22;
    compiler::TNode<Int32T> tmp23;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 6' failed", "test/torque/test-torque.tq", 751);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Int32T> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Int32T> tmp27;
    compiler::TNode<Int32T> tmp28;
    ca_.Bind(&block4, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 752);
    compiler::TNode<Int32T> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 7);
    compiler::TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp27}, compiler::TNode<Int32T>{tmp29});
    ca_.Branch(tmp30, &block6, &block7, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<Int32T> tmp32;
    compiler::TNode<Int32T> tmp33;
    compiler::TNode<Int32T> tmp34;
    compiler::TNode<Int32T> tmp35;
    ca_.Bind(&block7, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.y == 7' failed", "test/torque/test-torque.tq", 752);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Int32T> tmp37;
    compiler::TNode<Int32T> tmp38;
    compiler::TNode<Int32T> tmp39;
    compiler::TNode<Int32T> tmp40;
    ca_.Bind(&block6, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 753);
    compiler::TNode<Int32T> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 8);
    compiler::TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp40}, compiler::TNode<Int32T>{tmp41});
    ca_.Branch(tmp42, &block8, &block9, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<Int32T> tmp44;
    compiler::TNode<Int32T> tmp45;
    compiler::TNode<Int32T> tmp46;
    compiler::TNode<Int32T> tmp47;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.c == 8' failed", "test/torque/test-torque.tq", 753);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Int32T> tmp49;
    compiler::TNode<Int32T> tmp50;
    compiler::TNode<Int32T> tmp51;
    compiler::TNode<Int32T> tmp52;
    ca_.Bind(&block8, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 754);
    compiler::TNode<Int32T> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 755);
    compiler::TNode<Int32T> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 1);
    compiler::TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp53}, compiler::TNode<Int32T>{tmp54});
    ca_.Branch(tmp55, &block10, &block11, tmp48, tmp49, tmp53, tmp51, tmp52);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<Int32T> tmp57;
    compiler::TNode<Int32T> tmp58;
    compiler::TNode<Int32T> tmp59;
    compiler::TNode<Int32T> tmp60;
    ca_.Bind(&block11, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 1' failed", "test/torque/test-torque.tq", 755);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<Int32T> tmp62;
    compiler::TNode<Int32T> tmp63;
    compiler::TNode<Int32T> tmp64;
    compiler::TNode<Int32T> tmp65;
    ca_.Bind(&block10, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 756);
    compiler::TNode<Int32T> tmp66;
    USE(tmp66);
    tmp66 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 731);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 756);
    ca_.Goto(&block12, tmp61, tmp62, tmp66, tmp64, tmp65, tmp66);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<Int32T> tmp68;
    compiler::TNode<Int32T> tmp69;
    compiler::TNode<Int32T> tmp70;
    compiler::TNode<Int32T> tmp71;
    compiler::TNode<Int32T> tmp72;
    ca_.Bind(&block12, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 757);
    compiler::TNode<Int32T> tmp73;
    USE(tmp73);
    tmp73 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 2);
    compiler::TNode<BoolT> tmp74;
    USE(tmp74);
    tmp74 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp69}, compiler::TNode<Int32T>{tmp73});
    ca_.Branch(tmp74, &block13, &block14, tmp67, tmp68, tmp69, tmp70, tmp71);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<Int32T> tmp76;
    compiler::TNode<Int32T> tmp77;
    compiler::TNode<Int32T> tmp78;
    compiler::TNode<Int32T> tmp79;
    ca_.Bind(&block14, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 2' failed", "test/torque/test-torque.tq", 757);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp80;
    compiler::TNode<Int32T> tmp81;
    compiler::TNode<Int32T> tmp82;
    compiler::TNode<Int32T> tmp83;
    compiler::TNode<Int32T> tmp84;
    ca_.Bind(&block13, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 734);
    ca_.Goto(&block17, tmp80, tmp81, tmp82, tmp83, tmp84, tmp82);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<Int32T> tmp86;
    compiler::TNode<Int32T> tmp87;
    compiler::TNode<Int32T> tmp88;
    compiler::TNode<Int32T> tmp89;
    compiler::TNode<Int32T> tmp90;
    ca_.Bind(&block17, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 758);
    compiler::TNode<Int32T> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 2);
    compiler::TNode<BoolT> tmp92;
    USE(tmp92);
    tmp92 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp90}, compiler::TNode<Int32T>{tmp91});
    ca_.Branch(tmp92, &block15, &block16, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<Int32T> tmp94;
    compiler::TNode<Int32T> tmp95;
    compiler::TNode<Int32T> tmp96;
    compiler::TNode<Int32T> tmp97;
    ca_.Bind(&block16, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.GetX() == 2' failed", "test/torque/test-torque.tq", 758);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<Int32T> tmp99;
    compiler::TNode<Int32T> tmp100;
    compiler::TNode<Int32T> tmp101;
    compiler::TNode<Int32T> tmp102;
    ca_.Bind(&block15, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 747);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 746);
    ca_.Goto(&block1, tmp98);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp103;
    ca_.Bind(&block1, &tmp103);
    ca_.Goto(&block18, tmp103);
  }

    compiler::TNode<Context> tmp104;
    ca_.Bind(&block18, &tmp104);
}

compiler::TNode<InternalClass> NewInternalClass_449(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, InternalClass> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, InternalClass> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 772);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    compiler::TNode<Map> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).GetStructMap(INTERNAL_CLASS_TYPE);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).IntPtrConstant(((24)));
    compiler::TNode<InternalClass> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<InternalClass>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp4}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp5, CodeStubAssembler(state_).IntPtrConstant(24), compiler::TNode<IntPtrT>{tmp4}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp6);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp5, tmp6}, tmp3);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp7);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp5, tmp7}, tmp0);
    compiler::TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp8);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp5, tmp8}, tmp2);
    ca_.Goto(&block1, tmp0, tmp5);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp9;
    compiler::TNode<InternalClass> tmp10;
    ca_.Bind(&block1, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 771);
    ca_.Goto(&block2, tmp9, tmp10);
  }

    compiler::TNode<Smi> tmp11;
    compiler::TNode<InternalClass> tmp12;
    ca_.Bind(&block2, &tmp11, &tmp12);
  return compiler::TNode<InternalClass>{tmp12};
}

void TestInternalClass_450(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass, InternalClass> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass, InternalClass> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 777);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<InternalClass> tmp2;
    USE(tmp2);
    tmp2 = NewInternalClass_449(state_, compiler::TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 778);
    compiler::CodeAssemblerLabel label0(&ca_);
    _method_InternalClass_Flip(state_, compiler::TNode<InternalClass>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp2, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp2, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<InternalClass> tmp4;
    compiler::TNode<InternalClass> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<InternalClass> tmp7;
    compiler::TNode<InternalClass> tmp8;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block2, tmp6, tmp7);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<InternalClass> tmp10;
    ca_.Bind(&block3, &tmp9, &tmp10);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<InternalClass> tmp12;
    ca_.Bind(&block2, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 779);
    compiler::TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp13);
    compiler::TNode<Smi>tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp13});
    compiler::TNode<Smi> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 6);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp14}, compiler::TNode<Smi>{tmp15});
    ca_.Branch(tmp16, &block6, &block7, tmp11, tmp12);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<InternalClass> tmp18;
    ca_.Bind(&block7, &tmp17, &tmp18);
    CodeStubAssembler(state_).FailAssert("Torque assert 'o.a == 6' failed", "test/torque/test-torque.tq", 779);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<InternalClass> tmp20;
    ca_.Bind(&block6, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 780);
    compiler::TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp21);
    compiler::TNode<Number>tmp22 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp20, tmp21});
    compiler::TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 5);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = IsNumberEqual_73(state_, compiler::TNode<Number>{tmp22}, compiler::TNode<Number>{tmp23});
    ca_.Branch(tmp24, &block8, &block9, tmp19, tmp20);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<InternalClass> tmp26;
    ca_.Bind(&block9, &tmp25, &tmp26);
    CodeStubAssembler(state_).FailAssert("Torque assert 'o.b == 5' failed", "test/torque/test-torque.tq", 780);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<InternalClass> tmp28;
    ca_.Bind(&block8, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 776);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 775);
    ca_.Goto(&block1, tmp27);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp29;
    ca_.Bind(&block1, &tmp29);
    ca_.Goto(&block10, tmp29);
  }

    compiler::TNode<Context> tmp30;
    ca_.Bind(&block10, &tmp30);
}

void TestConstInStructs_451(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T, Object, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T, Object, Int32T, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 796);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = Null_63(state_);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 797);
    compiler::TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null_63(state_);
    compiler::TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 798);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 799);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 801);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 785);
    ca_.Goto(&block4, tmp0, tmp1, tmp4, tmp3, tmp0, tmp1, tmp0, tmp1, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp5;
    compiler::TNode<Int32T> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Int32T> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Int32T> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Int32T> tmp12;
    compiler::TNode<Int32T> tmp13;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 801);
    compiler::TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 1);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).Word32Equal(compiler::TNode<Int32T>{tmp13}, compiler::TNode<Int32T>{tmp14});
    ca_.Branch(tmp15, &block2, &block3, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp16;
    compiler::TNode<Int32T> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Int32T> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Int32T> tmp21;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x.TestMethod1() == 1' failed", "test/torque/test-torque.tq", 801);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp22;
    compiler::TNode<Int32T> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Int32T> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Int32T> tmp27;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 802);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 788);
    ca_.Goto(&block7, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp22, tmp23, tmp22);
  }

  if (block7.is_used()) {
    compiler::TNode<Object> tmp28;
    compiler::TNode<Int32T> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Int32T> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Int32T> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Int32T> tmp35;
    compiler::TNode<Object> tmp36;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 802);
    compiler::TNode<Oddball> tmp37;
    USE(tmp37);
    tmp37 = Null_63(state_);
    compiler::TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp36}, compiler::TNode<HeapObject>{tmp37});
    ca_.Branch(tmp38, &block5, &block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block6.is_used()) {
    compiler::TNode<Object> tmp39;
    compiler::TNode<Int32T> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Int32T> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Int32T> tmp44;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x.TestMethod2() == Null' failed", "test/torque/test-torque.tq", 802);
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp45;
    compiler::TNode<Int32T> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Int32T> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Int32T> tmp50;
    ca_.Bind(&block5, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 795);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 794);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

compiler::TNode<Object> TestNewFixedArrayFromSpread_452(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 815);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 816);
    compiler::TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = kFixedArrayMap_209(state_);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IntPtrConstant(((16)));
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, kTaggedSize);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 304);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = Convert7ATint325ATSmi_192(state_, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 306);
    compiler::TNode<Int32T> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = CodeStubAssembler(state_).TryInt32Mul(compiler::TNode<Int32T>{tmp6}, compiler::TNode<Int32T>{tmp5}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp3, tmp3, tmp4, tmp5, tmp6, tmp6, tmp5, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1, tmp3, tmp3, tmp4, tmp5, tmp6, tmp6, tmp5);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Map> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Int32T> tmp15;
    compiler::TNode<Int32T> tmp16;
    compiler::TNode<Int32T> tmp17;
    compiler::TNode<Int32T> tmp18;
    ca_.Bind(&block6, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block4, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Map> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Int32T> tmp27;
    compiler::TNode<Int32T> tmp28;
    compiler::TNode<Int32T> tmp29;
    compiler::TNode<Int32T> tmp30;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block3, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp30);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<Smi> tmp32;
    compiler::TNode<Map> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Int32T> tmp38;
    compiler::TNode<Int32T> tmp39;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Map> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<Int32T> tmp47;
    compiler::TNode<Int32T> tmp48;
    compiler::TNode<Int32T> tmp49;
    ca_.Bind(&block3, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 305);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 307);
    compiler::TNode<IntPtrT> tmp50;
    USE(tmp50);
    tmp50 = Convert8ATintptr7ATint32_174(state_, compiler::TNode<Int32T>{tmp49});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 308);
    compiler::TNode<IntPtrT> tmp51;
    USE(tmp51);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp51 = CodeStubAssembler(state_).TryIntPtrAdd(compiler::TNode<IntPtrT>{tmp45}, compiler::TNode<IntPtrT>{tmp50}, &label0);
    ca_.Goto(&block9, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp45, tmp50, tmp51);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp45, tmp50);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Map> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<Smi> tmp58;
    compiler::TNode<Int32T> tmp59;
    compiler::TNode<Int32T> tmp60;
    compiler::TNode<Int32T> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    ca_.Bind(&block10, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.Goto(&block8, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Map> tmp67;
    compiler::TNode<Smi> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<Int32T> tmp72;
    compiler::TNode<Int32T> tmp73;
    compiler::TNode<Int32T> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.Goto(&block7, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp78);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Map> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Smi> tmp85;
    compiler::TNode<Int32T> tmp86;
    compiler::TNode<Int32T> tmp87;
    compiler::TNode<Int32T> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    ca_.Bind(&block8, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<Map> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<IntPtrT> tmp94;
    compiler::TNode<IntPtrT> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<Int32T> tmp97;
    compiler::TNode<Int32T> tmp98;
    compiler::TNode<Int32T> tmp99;
    compiler::TNode<IntPtrT> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    ca_.Bind(&block7, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block2, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp101);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<Map> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<IntPtrT> tmp106;
    compiler::TNode<IntPtrT> tmp107;
    compiler::TNode<Smi> tmp108;
    compiler::TNode<Int32T> tmp109;
    compiler::TNode<IntPtrT> tmp110;
    ca_.Bind(&block2, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 816);
    compiler::TNode<FixedArray> tmp111;
    USE(tmp111);
    tmp111 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp110}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp111, CodeStubAssembler(state_).IntPtrConstant(16), compiler::TNode<IntPtrT>{tmp110}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp112 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp112);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp111, tmp112}, tmp104);
    compiler::TNode<IntPtrT> tmp113 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp113);
    compiler::TNode<Smi> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp111, tmp113}, tmp114);
    compiler::TNode<Smi> tmp115;
    USE(tmp115);
    tmp115 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 315);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 316);
    compiler::TNode<Smi> tmp116;
    USE(tmp116);
    tmp116 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 317);
    ca_.Goto(&block16, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp111, tmp112, tmp111, tmp113, tmp111, tmp115, tmp105, tmp105, tmp116);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<Smi> tmp118;
    compiler::TNode<Map> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<IntPtrT> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<Int32T> tmp124;
    compiler::TNode<IntPtrT> tmp125;
    compiler::TNode<FixedArray> tmp126;
    compiler::TNode<HeapObject> tmp127;
    compiler::TNode<IntPtrT> tmp128;
    compiler::TNode<FixedArrayBase> tmp129;
    compiler::TNode<IntPtrT> tmp130;
    compiler::TNode<FixedArray> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<Smi> tmp135;
    ca_.Bind(&block16, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    compiler::TNode<BoolT> tmp136;
    USE(tmp136);
    tmp136 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp135}, compiler::TNode<Smi>{tmp132});
    ca_.Branch(tmp136, &block14, &block15, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Map> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<IntPtrT> tmp141;
    compiler::TNode<IntPtrT> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<Int32T> tmp144;
    compiler::TNode<IntPtrT> tmp145;
    compiler::TNode<FixedArray> tmp146;
    compiler::TNode<HeapObject> tmp147;
    compiler::TNode<IntPtrT> tmp148;
    compiler::TNode<FixedArrayBase> tmp149;
    compiler::TNode<IntPtrT> tmp150;
    compiler::TNode<FixedArray> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<Smi> tmp155;
    ca_.Bind(&block14, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 322);
    compiler::TNode<Smi> tmp156;
    USE(tmp156);
    tmp156 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp157;
    USE(tmp157);
    tmp157 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp155}, compiler::TNode<Smi>{tmp156});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 807);
    compiler::TNode<Smi> tmp158;
    USE(tmp158);
    tmp158 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp159;
    USE(tmp159);
    tmp159 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp154}, compiler::TNode<Smi>{tmp158});
    compiler::TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp161;
    USE(tmp161);
    tmp161 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp154}, compiler::TNode<Smi>{tmp160});
    ca_.Branch(tmp161, &block18, &block19, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp159, tmp157, tmp155, tmp151);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp162;
    compiler::TNode<Smi> tmp163;
    compiler::TNode<Map> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<IntPtrT> tmp166;
    compiler::TNode<IntPtrT> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<Int32T> tmp169;
    compiler::TNode<IntPtrT> tmp170;
    compiler::TNode<FixedArray> tmp171;
    compiler::TNode<HeapObject> tmp172;
    compiler::TNode<IntPtrT> tmp173;
    compiler::TNode<FixedArrayBase> tmp174;
    compiler::TNode<IntPtrT> tmp175;
    compiler::TNode<FixedArray> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<FixedArray> tmp182;
    ca_.Bind(&block18, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.Goto(&block13, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp183;
    compiler::TNode<Smi> tmp184;
    compiler::TNode<Map> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<IntPtrT> tmp187;
    compiler::TNode<IntPtrT> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Int32T> tmp190;
    compiler::TNode<IntPtrT> tmp191;
    compiler::TNode<FixedArray> tmp192;
    compiler::TNode<HeapObject> tmp193;
    compiler::TNode<IntPtrT> tmp194;
    compiler::TNode<FixedArrayBase> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<FixedArray> tmp197;
    compiler::TNode<Smi> tmp198;
    compiler::TNode<Smi> tmp199;
    compiler::TNode<Smi> tmp200;
    compiler::TNode<Smi> tmp201;
    compiler::TNode<Smi> tmp202;
    compiler::TNode<FixedArray> tmp203;
    ca_.Bind(&block19, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 808);
    compiler::TNode<Oddball> tmp204;
    USE(tmp204);
    tmp204 = TheHole_62(state_);
    ca_.Goto(&block17, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<Map> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<IntPtrT> tmp209;
    compiler::TNode<IntPtrT> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Int32T> tmp212;
    compiler::TNode<IntPtrT> tmp213;
    compiler::TNode<FixedArray> tmp214;
    compiler::TNode<HeapObject> tmp215;
    compiler::TNode<IntPtrT> tmp216;
    compiler::TNode<FixedArrayBase> tmp217;
    compiler::TNode<IntPtrT> tmp218;
    compiler::TNode<FixedArray> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Smi> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<Smi> tmp224;
    compiler::TNode<FixedArray> tmp225;
    compiler::TNode<Object> tmp226;
    ca_.Bind(&block17, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 322);
    StoreFixedArrayDirect_215(state_, compiler::TNode<FixedArray>{tmp225}, compiler::TNode<Smi>{tmp224}, compiler::TNode<Object>{tmp226});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 317);
    ca_.Goto(&block16, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp227;
    compiler::TNode<Smi> tmp228;
    compiler::TNode<Map> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<IntPtrT> tmp231;
    compiler::TNode<IntPtrT> tmp232;
    compiler::TNode<Smi> tmp233;
    compiler::TNode<Int32T> tmp234;
    compiler::TNode<IntPtrT> tmp235;
    compiler::TNode<FixedArray> tmp236;
    compiler::TNode<HeapObject> tmp237;
    compiler::TNode<IntPtrT> tmp238;
    compiler::TNode<FixedArrayBase> tmp239;
    compiler::TNode<IntPtrT> tmp240;
    compiler::TNode<FixedArray> tmp241;
    compiler::TNode<Smi> tmp242;
    compiler::TNode<Smi> tmp243;
    compiler::TNode<Smi> tmp244;
    compiler::TNode<Smi> tmp245;
    ca_.Bind(&block15, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 314);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 325);
    ca_.Goto(&block12, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp246;
    compiler::TNode<Smi> tmp247;
    compiler::TNode<Map> tmp248;
    compiler::TNode<Smi> tmp249;
    compiler::TNode<IntPtrT> tmp250;
    compiler::TNode<IntPtrT> tmp251;
    compiler::TNode<Smi> tmp252;
    compiler::TNode<Int32T> tmp253;
    compiler::TNode<IntPtrT> tmp254;
    compiler::TNode<FixedArray> tmp255;
    compiler::TNode<HeapObject> tmp256;
    compiler::TNode<IntPtrT> tmp257;
    compiler::TNode<FixedArrayBase> tmp258;
    compiler::TNode<IntPtrT> tmp259;
    compiler::TNode<FixedArray> tmp260;
    compiler::TNode<Smi> tmp261;
    compiler::TNode<Smi> tmp262;
    ca_.Bind(&block13, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 326);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp263;
    compiler::TNode<Smi> tmp264;
    compiler::TNode<Map> tmp265;
    compiler::TNode<Smi> tmp266;
    compiler::TNode<IntPtrT> tmp267;
    compiler::TNode<IntPtrT> tmp268;
    compiler::TNode<Smi> tmp269;
    compiler::TNode<Int32T> tmp270;
    compiler::TNode<IntPtrT> tmp271;
    compiler::TNode<FixedArray> tmp272;
    compiler::TNode<HeapObject> tmp273;
    compiler::TNode<IntPtrT> tmp274;
    compiler::TNode<FixedArrayBase> tmp275;
    compiler::TNode<IntPtrT> tmp276;
    compiler::TNode<FixedArray> tmp277;
    compiler::TNode<Smi> tmp278;
    compiler::TNode<Smi> tmp279;
    ca_.Bind(&block12, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 816);
    ca_.Goto(&block11, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp280;
    compiler::TNode<Smi> tmp281;
    compiler::TNode<Map> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<IntPtrT> tmp284;
    compiler::TNode<IntPtrT> tmp285;
    compiler::TNode<Smi> tmp286;
    compiler::TNode<Int32T> tmp287;
    compiler::TNode<IntPtrT> tmp288;
    compiler::TNode<FixedArray> tmp289;
    compiler::TNode<HeapObject> tmp290;
    compiler::TNode<IntPtrT> tmp291;
    compiler::TNode<FixedArrayBase> tmp292;
    compiler::TNode<IntPtrT> tmp293;
    compiler::TNode<FixedArray> tmp294;
    compiler::TNode<Smi> tmp295;
    compiler::TNode<Smi> tmp296;
    ca_.Bind(&block11, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296);
    ca_.Goto(&block1, tmp280, tmp289);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp297;
    compiler::TNode<Object> tmp298;
    ca_.Bind(&block1, &tmp297, &tmp298);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 813);
    ca_.Goto(&block20, tmp297, tmp298);
  }

    compiler::TNode<Context> tmp299;
    compiler::TNode<Object> tmp300;
    ca_.Bind(&block20, &tmp299, &tmp300);
  return compiler::TNode<Object>{tmp300};
}

void TestReferences_453(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 835);
    compiler::TNode<Map> tmp0;
    USE(tmp0);
    tmp0 = CodeStubAssembler(state_).GetStructMap(SMI_PAIR_TYPE);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).IntPtrConstant(((24)));
    compiler::TNode<SmiPair> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<SmiPair>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp1}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp2, CodeStubAssembler(state_).IntPtrConstant(24), compiler::TNode<IntPtrT>{tmp1}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp3);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp3}, tmp0);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp4);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp4}, tmp5);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp6);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp6}, tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 836);
    compiler::TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 837);
    compiler::TNode<Smi>tmp9 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp8});
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp9});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp8}, tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 838);
    compiler::TNode<Smi>tmp12 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp8});
    compiler::TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp12}, compiler::TNode<Smi>{tmp13});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp8}, tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 839);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp15);
    compiler::TNode<HeapObject> tmp16;
    USE(tmp16);
    compiler::TNode<IntPtrT> tmp17;
    USE(tmp17);
    std::tie(tmp16, tmp17) = _method_SmiPair_GetA(state_, compiler::TNode<SmiPair>{tmp2}).Flatten();
    Swap5ATSmi_1416(state_, TorqueStructReference5ATSmi{compiler::TNode<HeapObject>{tmp2}, compiler::TNode<IntPtrT>{tmp15}, TorqueStructUnsafe{}}, TorqueStructReference5ATSmi{compiler::TNode<HeapObject>{tmp16}, compiler::TNode<IntPtrT>{tmp17}, TorqueStructUnsafe{}});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 840);
    compiler::TNode<IntPtrT> tmp18 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp18);
    compiler::TNode<Smi>tmp19 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp18});
    compiler::TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    compiler::TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp19}, compiler::TNode<Smi>{tmp20});
    ca_.Branch(tmp21, &block2, &block3, tmp2, tmp2, tmp8);
  }

  if (block3.is_used()) {
    compiler::TNode<SmiPair> tmp22;
    compiler::TNode<HeapObject> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    ca_.Bind(&block3, &tmp22, &tmp23, &tmp24);
    CodeStubAssembler(state_).FailAssert("Torque assert 'array.a == 2' failed", "test/torque/test-torque.tq", 840);
  }

  if (block2.is_used()) {
    compiler::TNode<SmiPair> tmp25;
    compiler::TNode<HeapObject> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    ca_.Bind(&block2, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 841);
    compiler::TNode<IntPtrT> tmp28 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp28);
    compiler::TNode<Smi>tmp29 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp25, tmp28});
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 9);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp29}, compiler::TNode<Smi>{tmp30});
    ca_.Branch(tmp31, &block4, &block5, tmp25, tmp26, tmp27);
  }

  if (block5.is_used()) {
    compiler::TNode<SmiPair> tmp32;
    compiler::TNode<HeapObject> tmp33;
    compiler::TNode<IntPtrT> tmp34;
    ca_.Bind(&block5, &tmp32, &tmp33, &tmp34);
    CodeStubAssembler(state_).FailAssert("Torque assert 'array.b == 9' failed", "test/torque/test-torque.tq", 841);
  }

  if (block4.is_used()) {
    compiler::TNode<SmiPair> tmp35;
    compiler::TNode<HeapObject> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    ca_.Bind(&block4, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 834);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 833);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

void TestSlices_454(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 846);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 847);
    compiler::TNode<Map> tmp1;
    USE(tmp1);
    tmp1 = kFixedArrayMap_209(state_);
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).IntPtrConstant(((16)));
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, kTaggedSize);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 304);
    compiler::TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = Convert7ATint325ATSmi_192(state_, compiler::TNode<Smi>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 306);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = CodeStubAssembler(state_).TryInt32Mul(compiler::TNode<Int32T>{tmp5}, compiler::TNode<Int32T>{tmp4}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp0, tmp2, tmp2, tmp3, tmp4, tmp5, tmp5, tmp4, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp0, tmp2, tmp2, tmp3, tmp4, tmp5, tmp5, tmp4);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Map> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Int32T> tmp13;
    compiler::TNode<Int32T> tmp14;
    compiler::TNode<Int32T> tmp15;
    compiler::TNode<Int32T> tmp16;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Map> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<Int32T> tmp23;
    compiler::TNode<Int32T> tmp24;
    compiler::TNode<Int32T> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Int32T> tmp27;
    ca_.Bind(&block5, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block3, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp27);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp28;
    compiler::TNode<Map> tmp29;
    compiler::TNode<Smi> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<Smi> tmp33;
    compiler::TNode<Int32T> tmp34;
    compiler::TNode<Int32T> tmp35;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Map> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Int32T> tmp42;
    compiler::TNode<Int32T> tmp43;
    compiler::TNode<Int32T> tmp44;
    ca_.Bind(&block3, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 305);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 307);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = Convert8ATintptr7ATint32_174(state_, compiler::TNode<Int32T>{tmp44});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 308);
    compiler::TNode<IntPtrT> tmp46;
    USE(tmp46);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp46 = CodeStubAssembler(state_).TryIntPtrAdd(compiler::TNode<IntPtrT>{tmp40}, compiler::TNode<IntPtrT>{tmp45}, &label0);
    ca_.Goto(&block9, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp40, tmp45, tmp46);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp40, tmp45);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Smi> tmp47;
    compiler::TNode<Map> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Smi> tmp52;
    compiler::TNode<Int32T> tmp53;
    compiler::TNode<Int32T> tmp54;
    compiler::TNode<Int32T> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block8, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block9.is_used()) {
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Map> tmp60;
    compiler::TNode<Smi> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Int32T> tmp65;
    compiler::TNode<Int32T> tmp66;
    compiler::TNode<Int32T> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<IntPtrT> tmp71;
    ca_.Bind(&block9, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block7, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71);
  }

  if (block8.is_used()) {
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Map> tmp73;
    compiler::TNode<Smi> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<Int32T> tmp78;
    compiler::TNode<Int32T> tmp79;
    compiler::TNode<Int32T> tmp80;
    compiler::TNode<IntPtrT> tmp81;
    ca_.Bind(&block8, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    compiler::TNode<Smi> tmp82;
    compiler::TNode<Map> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<IntPtrT> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<Int32T> tmp88;
    compiler::TNode<Int32T> tmp89;
    compiler::TNode<Int32T> tmp90;
    compiler::TNode<IntPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    ca_.Bind(&block7, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.Goto(&block2, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp92);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp93;
    compiler::TNode<Map> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<IntPtrT> tmp96;
    compiler::TNode<IntPtrT> tmp97;
    compiler::TNode<Smi> tmp98;
    compiler::TNode<Int32T> tmp99;
    compiler::TNode<IntPtrT> tmp100;
    ca_.Bind(&block2, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 847);
    compiler::TNode<FixedArray> tmp101;
    USE(tmp101);
    tmp101 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp100}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp101, CodeStubAssembler(state_).IntPtrConstant(16), compiler::TNode<IntPtrT>{tmp100}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp102 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp102);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp101, tmp102}, tmp94);
    compiler::TNode<IntPtrT> tmp103 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp103);
    compiler::TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp101, tmp103}, tmp104);
    compiler::TNode<Smi> tmp105;
    USE(tmp105);
    tmp105 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 315);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 316);
    compiler::TNode<Smi> tmp106;
    USE(tmp106);
    tmp106 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 317);
    ca_.Goto(&block16, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp101, tmp102, tmp101, tmp103, tmp101, tmp105, tmp95, tmp95, tmp106);
  }

  if (block16.is_used()) {
    compiler::TNode<Smi> tmp107;
    compiler::TNode<Map> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<IntPtrT> tmp110;
    compiler::TNode<IntPtrT> tmp111;
    compiler::TNode<Smi> tmp112;
    compiler::TNode<Int32T> tmp113;
    compiler::TNode<IntPtrT> tmp114;
    compiler::TNode<FixedArray> tmp115;
    compiler::TNode<HeapObject> tmp116;
    compiler::TNode<IntPtrT> tmp117;
    compiler::TNode<FixedArrayBase> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<FixedArray> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Smi> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<Smi> tmp124;
    ca_.Bind(&block16, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    compiler::TNode<BoolT> tmp125;
    USE(tmp125);
    tmp125 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp124}, compiler::TNode<Smi>{tmp121});
    ca_.Branch(tmp125, &block14, &block15, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124);
  }

  if (block14.is_used()) {
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Map> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<IntPtrT> tmp129;
    compiler::TNode<IntPtrT> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<Int32T> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<FixedArray> tmp134;
    compiler::TNode<HeapObject> tmp135;
    compiler::TNode<IntPtrT> tmp136;
    compiler::TNode<FixedArrayBase> tmp137;
    compiler::TNode<IntPtrT> tmp138;
    compiler::TNode<FixedArray> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Smi> tmp143;
    ca_.Bind(&block14, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 322);
    compiler::TNode<Smi> tmp144;
    USE(tmp144);
    tmp144 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp145;
    USE(tmp145);
    tmp145 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp143}, compiler::TNode<Smi>{tmp144});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 807);
    compiler::TNode<Smi> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp147;
    USE(tmp147);
    tmp147 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp142}, compiler::TNode<Smi>{tmp146});
    compiler::TNode<Smi> tmp148;
    USE(tmp148);
    tmp148 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp149;
    USE(tmp149);
    tmp149 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp142}, compiler::TNode<Smi>{tmp148});
    ca_.Branch(tmp149, &block18, &block19, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp147, tmp145, tmp143, tmp139);
  }

  if (block18.is_used()) {
    compiler::TNode<Smi> tmp150;
    compiler::TNode<Map> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<IntPtrT> tmp153;
    compiler::TNode<IntPtrT> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<Int32T> tmp156;
    compiler::TNode<IntPtrT> tmp157;
    compiler::TNode<FixedArray> tmp158;
    compiler::TNode<HeapObject> tmp159;
    compiler::TNode<IntPtrT> tmp160;
    compiler::TNode<FixedArrayBase> tmp161;
    compiler::TNode<IntPtrT> tmp162;
    compiler::TNode<FixedArray> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<Smi> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<FixedArray> tmp169;
    ca_.Bind(&block18, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169);
    ca_.Goto(&block13, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165);
  }

  if (block19.is_used()) {
    compiler::TNode<Smi> tmp170;
    compiler::TNode<Map> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<IntPtrT> tmp173;
    compiler::TNode<IntPtrT> tmp174;
    compiler::TNode<Smi> tmp175;
    compiler::TNode<Int32T> tmp176;
    compiler::TNode<IntPtrT> tmp177;
    compiler::TNode<FixedArray> tmp178;
    compiler::TNode<HeapObject> tmp179;
    compiler::TNode<IntPtrT> tmp180;
    compiler::TNode<FixedArrayBase> tmp181;
    compiler::TNode<IntPtrT> tmp182;
    compiler::TNode<FixedArray> tmp183;
    compiler::TNode<Smi> tmp184;
    compiler::TNode<Smi> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<FixedArray> tmp189;
    ca_.Bind(&block19, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 808);
    compiler::TNode<Oddball> tmp190;
    USE(tmp190);
    tmp190 = TheHole_62(state_);
    ca_.Goto(&block17, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

  if (block17.is_used()) {
    compiler::TNode<Smi> tmp191;
    compiler::TNode<Map> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<IntPtrT> tmp194;
    compiler::TNode<IntPtrT> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Int32T> tmp197;
    compiler::TNode<IntPtrT> tmp198;
    compiler::TNode<FixedArray> tmp199;
    compiler::TNode<HeapObject> tmp200;
    compiler::TNode<IntPtrT> tmp201;
    compiler::TNode<FixedArrayBase> tmp202;
    compiler::TNode<IntPtrT> tmp203;
    compiler::TNode<FixedArray> tmp204;
    compiler::TNode<Smi> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<Smi> tmp209;
    compiler::TNode<FixedArray> tmp210;
    compiler::TNode<Object> tmp211;
    ca_.Bind(&block17, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 322);
    StoreFixedArrayDirect_215(state_, compiler::TNode<FixedArray>{tmp210}, compiler::TNode<Smi>{tmp209}, compiler::TNode<Object>{tmp211});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 317);
    ca_.Goto(&block16, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208);
  }

  if (block15.is_used()) {
    compiler::TNode<Smi> tmp212;
    compiler::TNode<Map> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<IntPtrT> tmp215;
    compiler::TNode<IntPtrT> tmp216;
    compiler::TNode<Smi> tmp217;
    compiler::TNode<Int32T> tmp218;
    compiler::TNode<IntPtrT> tmp219;
    compiler::TNode<FixedArray> tmp220;
    compiler::TNode<HeapObject> tmp221;
    compiler::TNode<IntPtrT> tmp222;
    compiler::TNode<FixedArrayBase> tmp223;
    compiler::TNode<IntPtrT> tmp224;
    compiler::TNode<FixedArray> tmp225;
    compiler::TNode<Smi> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<Smi> tmp228;
    compiler::TNode<Smi> tmp229;
    ca_.Bind(&block15, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 314);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 325);
    ca_.Goto(&block12, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227);
  }

  if (block13.is_used()) {
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Map> tmp231;
    compiler::TNode<Smi> tmp232;
    compiler::TNode<IntPtrT> tmp233;
    compiler::TNode<IntPtrT> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Int32T> tmp236;
    compiler::TNode<IntPtrT> tmp237;
    compiler::TNode<FixedArray> tmp238;
    compiler::TNode<HeapObject> tmp239;
    compiler::TNode<IntPtrT> tmp240;
    compiler::TNode<FixedArrayBase> tmp241;
    compiler::TNode<IntPtrT> tmp242;
    compiler::TNode<FixedArray> tmp243;
    compiler::TNode<Smi> tmp244;
    compiler::TNode<Smi> tmp245;
    ca_.Bind(&block13, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 326);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block12.is_used()) {
    compiler::TNode<Smi> tmp246;
    compiler::TNode<Map> tmp247;
    compiler::TNode<Smi> tmp248;
    compiler::TNode<IntPtrT> tmp249;
    compiler::TNode<IntPtrT> tmp250;
    compiler::TNode<Smi> tmp251;
    compiler::TNode<Int32T> tmp252;
    compiler::TNode<IntPtrT> tmp253;
    compiler::TNode<FixedArray> tmp254;
    compiler::TNode<HeapObject> tmp255;
    compiler::TNode<IntPtrT> tmp256;
    compiler::TNode<FixedArrayBase> tmp257;
    compiler::TNode<IntPtrT> tmp258;
    compiler::TNode<FixedArray> tmp259;
    compiler::TNode<Smi> tmp260;
    compiler::TNode<Smi> tmp261;
    ca_.Bind(&block12, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 847);
    ca_.Goto(&block11, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261);
  }

  if (block11.is_used()) {
    compiler::TNode<Smi> tmp262;
    compiler::TNode<Map> tmp263;
    compiler::TNode<Smi> tmp264;
    compiler::TNode<IntPtrT> tmp265;
    compiler::TNode<IntPtrT> tmp266;
    compiler::TNode<Smi> tmp267;
    compiler::TNode<Int32T> tmp268;
    compiler::TNode<IntPtrT> tmp269;
    compiler::TNode<FixedArray> tmp270;
    compiler::TNode<HeapObject> tmp271;
    compiler::TNode<IntPtrT> tmp272;
    compiler::TNode<FixedArrayBase> tmp273;
    compiler::TNode<IntPtrT> tmp274;
    compiler::TNode<FixedArray> tmp275;
    compiler::TNode<Smi> tmp276;
    compiler::TNode<Smi> tmp277;
    ca_.Bind(&block11, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 848);
    compiler::TNode<IntPtrT> tmp278 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp278);
    compiler::TNode<Smi>tmp279 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp270, tmp278});
    compiler::TNode<Smi> tmp280;
    USE(tmp280);
    tmp280 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp281;
    USE(tmp281);
    tmp281 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp279}, compiler::TNode<Smi>{tmp280});
    ca_.Branch(tmp281, &block20, &block21, tmp262, tmp270);
  }

  if (block21.is_used()) {
    compiler::TNode<Smi> tmp282;
    compiler::TNode<FixedArray> tmp283;
    ca_.Bind(&block21, &tmp282, &tmp283);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.length == 3' failed", "test/torque/test-torque.tq", 848);
  }

  if (block20.is_used()) {
    compiler::TNode<Smi> tmp284;
    compiler::TNode<FixedArray> tmp285;
    ca_.Bind(&block20, &tmp284, &tmp285);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 850);
    compiler::TNode<Smi> tmp286;
    USE(tmp286);
    tmp286 = Convert5ATSmi17ATconstexpr_int31_1340(state_, 123);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 851);
    compiler::TNode<IntPtrT> tmp287 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp287);
    compiler::TNode<IntPtrT> tmp288 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp288);
    compiler::TNode<Smi>tmp289 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp285, tmp288});
    compiler::TNode<IntPtrT> tmp290;
    USE(tmp290);
    tmp290 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp289});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    compiler::TNode<IntPtrT> tmp291;
    USE(tmp291);
    tmp291 = Convert8ATintptr17ATconstexpr_int31_1349(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp292;
    USE(tmp292);
    tmp292 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp291});
    compiler::TNode<UintPtrT> tmp293;
    USE(tmp293);
    tmp293 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp290});
    compiler::TNode<BoolT> tmp294;
    USE(tmp294);
    tmp294 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp292}, compiler::TNode<UintPtrT>{tmp293});
    ca_.Branch(tmp294, &block26, &block27, tmp284, tmp285, tmp286, tmp285, tmp287, tmp290, tmp291, tmp285, tmp287, tmp290, tmp291, tmp291);
  }

  if (block26.is_used()) {
    compiler::TNode<Smi> tmp295;
    compiler::TNode<FixedArray> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<FixedArray> tmp298;
    compiler::TNode<IntPtrT> tmp299;
    compiler::TNode<IntPtrT> tmp300;
    compiler::TNode<IntPtrT> tmp301;
    compiler::TNode<HeapObject> tmp302;
    compiler::TNode<IntPtrT> tmp303;
    compiler::TNode<IntPtrT> tmp304;
    compiler::TNode<IntPtrT> tmp305;
    compiler::TNode<IntPtrT> tmp306;
    ca_.Bind(&block26, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp307;
    USE(tmp307);
    tmp307 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp308;
    USE(tmp308);
    tmp308 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp306}, compiler::TNode<IntPtrT>{tmp307});
    compiler::TNode<IntPtrT> tmp309;
    USE(tmp309);
    tmp309 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp303}, compiler::TNode<IntPtrT>{tmp308});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp310;
    USE(tmp310);
    compiler::TNode<IntPtrT> tmp311;
    USE(tmp311);
    std::tie(tmp310, tmp311) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp302}, compiler::TNode<IntPtrT>{tmp309}).Flatten();
    ca_.Goto(&block25, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp310, tmp311);
  }

  if (block27.is_used()) {
    compiler::TNode<Smi> tmp312;
    compiler::TNode<FixedArray> tmp313;
    compiler::TNode<Smi> tmp314;
    compiler::TNode<FixedArray> tmp315;
    compiler::TNode<IntPtrT> tmp316;
    compiler::TNode<IntPtrT> tmp317;
    compiler::TNode<IntPtrT> tmp318;
    compiler::TNode<HeapObject> tmp319;
    compiler::TNode<IntPtrT> tmp320;
    compiler::TNode<IntPtrT> tmp321;
    compiler::TNode<IntPtrT> tmp322;
    compiler::TNode<IntPtrT> tmp323;
    ca_.Bind(&block27, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block24, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318);
  }

  if (block25.is_used()) {
    compiler::TNode<Smi> tmp324;
    compiler::TNode<FixedArray> tmp325;
    compiler::TNode<Smi> tmp326;
    compiler::TNode<FixedArray> tmp327;
    compiler::TNode<IntPtrT> tmp328;
    compiler::TNode<IntPtrT> tmp329;
    compiler::TNode<IntPtrT> tmp330;
    compiler::TNode<HeapObject> tmp331;
    compiler::TNode<IntPtrT> tmp332;
    compiler::TNode<IntPtrT> tmp333;
    compiler::TNode<IntPtrT> tmp334;
    compiler::TNode<IntPtrT> tmp335;
    compiler::TNode<HeapObject> tmp336;
    compiler::TNode<IntPtrT> tmp337;
    ca_.Bind(&block25, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block23, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp336, tmp337);
  }

  if (block24.is_used()) {
    compiler::TNode<Smi> tmp338;
    compiler::TNode<FixedArray> tmp339;
    compiler::TNode<Smi> tmp340;
    compiler::TNode<FixedArray> tmp341;
    compiler::TNode<IntPtrT> tmp342;
    compiler::TNode<IntPtrT> tmp343;
    compiler::TNode<IntPtrT> tmp344;
    ca_.Bind(&block24, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block23.is_used()) {
    compiler::TNode<Smi> tmp345;
    compiler::TNode<FixedArray> tmp346;
    compiler::TNode<Smi> tmp347;
    compiler::TNode<FixedArray> tmp348;
    compiler::TNode<IntPtrT> tmp349;
    compiler::TNode<IntPtrT> tmp350;
    compiler::TNode<IntPtrT> tmp351;
    compiler::TNode<HeapObject> tmp352;
    compiler::TNode<IntPtrT> tmp353;
    ca_.Bind(&block23, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353);
    ca_.Goto(&block22, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp352, tmp353);
  }

  if (block22.is_used()) {
    compiler::TNode<Smi> tmp354;
    compiler::TNode<FixedArray> tmp355;
    compiler::TNode<Smi> tmp356;
    compiler::TNode<FixedArray> tmp357;
    compiler::TNode<IntPtrT> tmp358;
    compiler::TNode<IntPtrT> tmp359;
    compiler::TNode<HeapObject> tmp360;
    compiler::TNode<IntPtrT> tmp361;
    ca_.Bind(&block22, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 851);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp360, tmp361}, tmp356);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 852);
    compiler::TNode<IntPtrT> tmp362 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp362);
    compiler::TNode<IntPtrT> tmp363 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp363);
    compiler::TNode<Smi>tmp364 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp355, tmp363});
    compiler::TNode<IntPtrT> tmp365;
    USE(tmp365);
    tmp365 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp364});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    compiler::TNode<IntPtrT> tmp366;
    USE(tmp366);
    tmp366 = Convert8ATintptr17ATconstexpr_int31_1349(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp367;
    USE(tmp367);
    tmp367 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp366});
    compiler::TNode<UintPtrT> tmp368;
    USE(tmp368);
    tmp368 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp365});
    compiler::TNode<BoolT> tmp369;
    USE(tmp369);
    tmp369 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp367}, compiler::TNode<UintPtrT>{tmp368});
    ca_.Branch(tmp369, &block33, &block34, tmp354, tmp355, tmp356, tmp355, tmp362, tmp365, tmp366, tmp355, tmp362, tmp365, tmp366, tmp366);
  }

  if (block33.is_used()) {
    compiler::TNode<Smi> tmp370;
    compiler::TNode<FixedArray> tmp371;
    compiler::TNode<Smi> tmp372;
    compiler::TNode<FixedArray> tmp373;
    compiler::TNode<IntPtrT> tmp374;
    compiler::TNode<IntPtrT> tmp375;
    compiler::TNode<IntPtrT> tmp376;
    compiler::TNode<HeapObject> tmp377;
    compiler::TNode<IntPtrT> tmp378;
    compiler::TNode<IntPtrT> tmp379;
    compiler::TNode<IntPtrT> tmp380;
    compiler::TNode<IntPtrT> tmp381;
    ca_.Bind(&block33, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp382;
    USE(tmp382);
    tmp382 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp383;
    USE(tmp383);
    tmp383 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp381}, compiler::TNode<IntPtrT>{tmp382});
    compiler::TNode<IntPtrT> tmp384;
    USE(tmp384);
    tmp384 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp378}, compiler::TNode<IntPtrT>{tmp383});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp385;
    USE(tmp385);
    compiler::TNode<IntPtrT> tmp386;
    USE(tmp386);
    std::tie(tmp385, tmp386) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp377}, compiler::TNode<IntPtrT>{tmp384}).Flatten();
    ca_.Goto(&block32, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp385, tmp386);
  }

  if (block34.is_used()) {
    compiler::TNode<Smi> tmp387;
    compiler::TNode<FixedArray> tmp388;
    compiler::TNode<Smi> tmp389;
    compiler::TNode<FixedArray> tmp390;
    compiler::TNode<IntPtrT> tmp391;
    compiler::TNode<IntPtrT> tmp392;
    compiler::TNode<IntPtrT> tmp393;
    compiler::TNode<HeapObject> tmp394;
    compiler::TNode<IntPtrT> tmp395;
    compiler::TNode<IntPtrT> tmp396;
    compiler::TNode<IntPtrT> tmp397;
    compiler::TNode<IntPtrT> tmp398;
    ca_.Bind(&block34, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block31, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393);
  }

  if (block32.is_used()) {
    compiler::TNode<Smi> tmp399;
    compiler::TNode<FixedArray> tmp400;
    compiler::TNode<Smi> tmp401;
    compiler::TNode<FixedArray> tmp402;
    compiler::TNode<IntPtrT> tmp403;
    compiler::TNode<IntPtrT> tmp404;
    compiler::TNode<IntPtrT> tmp405;
    compiler::TNode<HeapObject> tmp406;
    compiler::TNode<IntPtrT> tmp407;
    compiler::TNode<IntPtrT> tmp408;
    compiler::TNode<IntPtrT> tmp409;
    compiler::TNode<IntPtrT> tmp410;
    compiler::TNode<HeapObject> tmp411;
    compiler::TNode<IntPtrT> tmp412;
    ca_.Bind(&block32, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block30, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp411, tmp412);
  }

  if (block31.is_used()) {
    compiler::TNode<Smi> tmp413;
    compiler::TNode<FixedArray> tmp414;
    compiler::TNode<Smi> tmp415;
    compiler::TNode<FixedArray> tmp416;
    compiler::TNode<IntPtrT> tmp417;
    compiler::TNode<IntPtrT> tmp418;
    compiler::TNode<IntPtrT> tmp419;
    ca_.Bind(&block31, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block30.is_used()) {
    compiler::TNode<Smi> tmp420;
    compiler::TNode<FixedArray> tmp421;
    compiler::TNode<Smi> tmp422;
    compiler::TNode<FixedArray> tmp423;
    compiler::TNode<IntPtrT> tmp424;
    compiler::TNode<IntPtrT> tmp425;
    compiler::TNode<IntPtrT> tmp426;
    compiler::TNode<HeapObject> tmp427;
    compiler::TNode<IntPtrT> tmp428;
    ca_.Bind(&block30, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428);
    ca_.Goto(&block29, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp427, tmp428);
  }

  if (block29.is_used()) {
    compiler::TNode<Smi> tmp429;
    compiler::TNode<FixedArray> tmp430;
    compiler::TNode<Smi> tmp431;
    compiler::TNode<FixedArray> tmp432;
    compiler::TNode<IntPtrT> tmp433;
    compiler::TNode<IntPtrT> tmp434;
    compiler::TNode<HeapObject> tmp435;
    compiler::TNode<IntPtrT> tmp436;
    ca_.Bind(&block29, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 852);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 853);
    compiler::TNode<Object>tmp437 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp435, tmp436});
    compiler::TNode<BoolT> tmp438;
    USE(tmp438);
    tmp438 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp437}, compiler::TNode<Object>{tmp431});
    ca_.Branch(tmp438, &block36, &block37, tmp429, tmp430, tmp431, tmp435, tmp436);
  }

  if (block37.is_used()) {
    compiler::TNode<Smi> tmp439;
    compiler::TNode<FixedArray> tmp440;
    compiler::TNode<Smi> tmp441;
    compiler::TNode<HeapObject> tmp442;
    compiler::TNode<IntPtrT> tmp443;
    ca_.Bind(&block37, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TaggedEqual(* firstRef, oneTwoThree)' failed", "test/torque/test-torque.tq", 853);
  }

  if (block36.is_used()) {
    compiler::TNode<Smi> tmp444;
    compiler::TNode<FixedArray> tmp445;
    compiler::TNode<Smi> tmp446;
    compiler::TNode<HeapObject> tmp447;
    compiler::TNode<IntPtrT> tmp448;
    ca_.Bind(&block36, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 855);
    compiler::TNode<IntPtrT> tmp449 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp449);
    compiler::TNode<IntPtrT> tmp450 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp450);
    compiler::TNode<Smi>tmp451 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp445, tmp450});
    compiler::TNode<IntPtrT> tmp452;
    USE(tmp452);
    tmp452 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp451});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 856);
    compiler::TNode<IntPtrT> tmp453;
    USE(tmp453);
    tmp453 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp454;
    USE(tmp454);
    tmp454 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp453});
    compiler::TNode<UintPtrT> tmp455;
    USE(tmp455);
    tmp455 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp452});
    compiler::TNode<BoolT> tmp456;
    USE(tmp456);
    tmp456 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp454}, compiler::TNode<UintPtrT>{tmp455});
    ca_.Branch(tmp456, &block41, &block42, tmp444, tmp445, tmp446, tmp447, tmp448, tmp445, tmp449, tmp452, tmp445, tmp449, tmp452, tmp453);
  }

  if (block41.is_used()) {
    compiler::TNode<Smi> tmp457;
    compiler::TNode<FixedArray> tmp458;
    compiler::TNode<Smi> tmp459;
    compiler::TNode<HeapObject> tmp460;
    compiler::TNode<IntPtrT> tmp461;
    compiler::TNode<HeapObject> tmp462;
    compiler::TNode<IntPtrT> tmp463;
    compiler::TNode<IntPtrT> tmp464;
    compiler::TNode<HeapObject> tmp465;
    compiler::TNode<IntPtrT> tmp466;
    compiler::TNode<IntPtrT> tmp467;
    compiler::TNode<IntPtrT> tmp468;
    ca_.Bind(&block41, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp469;
    USE(tmp469);
    tmp469 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp470;
    USE(tmp470);
    tmp470 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp468}, compiler::TNode<IntPtrT>{tmp469});
    compiler::TNode<IntPtrT> tmp471;
    USE(tmp471);
    tmp471 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp466}, compiler::TNode<IntPtrT>{tmp470});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp472;
    USE(tmp472);
    compiler::TNode<IntPtrT> tmp473;
    USE(tmp473);
    std::tie(tmp472, tmp473) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp465}, compiler::TNode<IntPtrT>{tmp471}).Flatten();
    ca_.Goto(&block40, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465, tmp466, tmp467, tmp468, tmp472, tmp473);
  }

  if (block42.is_used()) {
    compiler::TNode<Smi> tmp474;
    compiler::TNode<FixedArray> tmp475;
    compiler::TNode<Smi> tmp476;
    compiler::TNode<HeapObject> tmp477;
    compiler::TNode<IntPtrT> tmp478;
    compiler::TNode<HeapObject> tmp479;
    compiler::TNode<IntPtrT> tmp480;
    compiler::TNode<IntPtrT> tmp481;
    compiler::TNode<HeapObject> tmp482;
    compiler::TNode<IntPtrT> tmp483;
    compiler::TNode<IntPtrT> tmp484;
    compiler::TNode<IntPtrT> tmp485;
    ca_.Bind(&block42, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block39, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481);
  }

  if (block40.is_used()) {
    compiler::TNode<Smi> tmp486;
    compiler::TNode<FixedArray> tmp487;
    compiler::TNode<Smi> tmp488;
    compiler::TNode<HeapObject> tmp489;
    compiler::TNode<IntPtrT> tmp490;
    compiler::TNode<HeapObject> tmp491;
    compiler::TNode<IntPtrT> tmp492;
    compiler::TNode<IntPtrT> tmp493;
    compiler::TNode<HeapObject> tmp494;
    compiler::TNode<IntPtrT> tmp495;
    compiler::TNode<IntPtrT> tmp496;
    compiler::TNode<IntPtrT> tmp497;
    compiler::TNode<HeapObject> tmp498;
    compiler::TNode<IntPtrT> tmp499;
    ca_.Bind(&block40, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 856);
    ca_.Goto(&block38, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp498, tmp499);
  }

  if (block39.is_used()) {
    compiler::TNode<Smi> tmp500;
    compiler::TNode<FixedArray> tmp501;
    compiler::TNode<Smi> tmp502;
    compiler::TNode<HeapObject> tmp503;
    compiler::TNode<IntPtrT> tmp504;
    compiler::TNode<HeapObject> tmp505;
    compiler::TNode<IntPtrT> tmp506;
    compiler::TNode<IntPtrT> tmp507;
    ca_.Bind(&block39, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block38.is_used()) {
    compiler::TNode<Smi> tmp508;
    compiler::TNode<FixedArray> tmp509;
    compiler::TNode<Smi> tmp510;
    compiler::TNode<HeapObject> tmp511;
    compiler::TNode<IntPtrT> tmp512;
    compiler::TNode<HeapObject> tmp513;
    compiler::TNode<IntPtrT> tmp514;
    compiler::TNode<IntPtrT> tmp515;
    compiler::TNode<HeapObject> tmp516;
    compiler::TNode<IntPtrT> tmp517;
    ca_.Bind(&block38, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 857);
    compiler::TNode<Object>tmp518 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp516, tmp517});
    compiler::TNode<BoolT> tmp519;
    USE(tmp519);
    tmp519 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp518}, compiler::TNode<Object>{tmp510});
    ca_.Branch(tmp519, &block44, &block45, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513, tmp514, tmp515, tmp516, tmp517);
  }

  if (block45.is_used()) {
    compiler::TNode<Smi> tmp520;
    compiler::TNode<FixedArray> tmp521;
    compiler::TNode<Smi> tmp522;
    compiler::TNode<HeapObject> tmp523;
    compiler::TNode<IntPtrT> tmp524;
    compiler::TNode<HeapObject> tmp525;
    compiler::TNode<IntPtrT> tmp526;
    compiler::TNode<IntPtrT> tmp527;
    compiler::TNode<HeapObject> tmp528;
    compiler::TNode<IntPtrT> tmp529;
    ca_.Bind(&block45, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TaggedEqual(* firstRefAgain, oneTwoThree)' failed", "test/torque/test-torque.tq", 857);
  }

  if (block44.is_used()) {
    compiler::TNode<Smi> tmp530;
    compiler::TNode<FixedArray> tmp531;
    compiler::TNode<Smi> tmp532;
    compiler::TNode<HeapObject> tmp533;
    compiler::TNode<IntPtrT> tmp534;
    compiler::TNode<HeapObject> tmp535;
    compiler::TNode<IntPtrT> tmp536;
    compiler::TNode<IntPtrT> tmp537;
    compiler::TNode<HeapObject> tmp538;
    compiler::TNode<IntPtrT> tmp539;
    ca_.Bind(&block44, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 859);
    compiler::TNode<Smi> tmp540;
    USE(tmp540);
    tmp540 = Convert5ATSmi17ATconstexpr_int31_1340(state_, 321);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 860);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp538, tmp539}, tmp540);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 861);
    compiler::TNode<IntPtrT> tmp541 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp541);
    compiler::TNode<IntPtrT> tmp542 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp542);
    compiler::TNode<Smi>tmp543 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp531, tmp542});
    compiler::TNode<IntPtrT> tmp544;
    USE(tmp544);
    tmp544 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp543});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    compiler::TNode<IntPtrT> tmp545;
    USE(tmp545);
    tmp545 = Convert8ATintptr17ATconstexpr_int31_1349(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp546;
    USE(tmp546);
    tmp546 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp545});
    compiler::TNode<UintPtrT> tmp547;
    USE(tmp547);
    tmp547 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp544});
    compiler::TNode<BoolT> tmp548;
    USE(tmp548);
    tmp548 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp546}, compiler::TNode<UintPtrT>{tmp547});
    ca_.Branch(tmp548, &block52, &block53, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp531, tmp541, tmp544, tmp545, tmp531, tmp541, tmp544, tmp545, tmp545);
  }

  if (block52.is_used()) {
    compiler::TNode<Smi> tmp549;
    compiler::TNode<FixedArray> tmp550;
    compiler::TNode<Smi> tmp551;
    compiler::TNode<HeapObject> tmp552;
    compiler::TNode<IntPtrT> tmp553;
    compiler::TNode<HeapObject> tmp554;
    compiler::TNode<IntPtrT> tmp555;
    compiler::TNode<IntPtrT> tmp556;
    compiler::TNode<HeapObject> tmp557;
    compiler::TNode<IntPtrT> tmp558;
    compiler::TNode<Smi> tmp559;
    compiler::TNode<FixedArray> tmp560;
    compiler::TNode<IntPtrT> tmp561;
    compiler::TNode<IntPtrT> tmp562;
    compiler::TNode<IntPtrT> tmp563;
    compiler::TNode<HeapObject> tmp564;
    compiler::TNode<IntPtrT> tmp565;
    compiler::TNode<IntPtrT> tmp566;
    compiler::TNode<IntPtrT> tmp567;
    compiler::TNode<IntPtrT> tmp568;
    ca_.Bind(&block52, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564, &tmp565, &tmp566, &tmp567, &tmp568);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp569;
    USE(tmp569);
    tmp569 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp570;
    USE(tmp570);
    tmp570 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp568}, compiler::TNode<IntPtrT>{tmp569});
    compiler::TNode<IntPtrT> tmp571;
    USE(tmp571);
    tmp571 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp565}, compiler::TNode<IntPtrT>{tmp570});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp572;
    USE(tmp572);
    compiler::TNode<IntPtrT> tmp573;
    USE(tmp573);
    std::tie(tmp572, tmp573) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp564}, compiler::TNode<IntPtrT>{tmp571}).Flatten();
    ca_.Goto(&block51, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559, tmp560, tmp561, tmp562, tmp563, tmp564, tmp565, tmp566, tmp567, tmp568, tmp572, tmp573);
  }

  if (block53.is_used()) {
    compiler::TNode<Smi> tmp574;
    compiler::TNode<FixedArray> tmp575;
    compiler::TNode<Smi> tmp576;
    compiler::TNode<HeapObject> tmp577;
    compiler::TNode<IntPtrT> tmp578;
    compiler::TNode<HeapObject> tmp579;
    compiler::TNode<IntPtrT> tmp580;
    compiler::TNode<IntPtrT> tmp581;
    compiler::TNode<HeapObject> tmp582;
    compiler::TNode<IntPtrT> tmp583;
    compiler::TNode<Smi> tmp584;
    compiler::TNode<FixedArray> tmp585;
    compiler::TNode<IntPtrT> tmp586;
    compiler::TNode<IntPtrT> tmp587;
    compiler::TNode<IntPtrT> tmp588;
    compiler::TNode<HeapObject> tmp589;
    compiler::TNode<IntPtrT> tmp590;
    compiler::TNode<IntPtrT> tmp591;
    compiler::TNode<IntPtrT> tmp592;
    compiler::TNode<IntPtrT> tmp593;
    ca_.Bind(&block53, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block50, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp588);
  }

  if (block51.is_used()) {
    compiler::TNode<Smi> tmp594;
    compiler::TNode<FixedArray> tmp595;
    compiler::TNode<Smi> tmp596;
    compiler::TNode<HeapObject> tmp597;
    compiler::TNode<IntPtrT> tmp598;
    compiler::TNode<HeapObject> tmp599;
    compiler::TNode<IntPtrT> tmp600;
    compiler::TNode<IntPtrT> tmp601;
    compiler::TNode<HeapObject> tmp602;
    compiler::TNode<IntPtrT> tmp603;
    compiler::TNode<Smi> tmp604;
    compiler::TNode<FixedArray> tmp605;
    compiler::TNode<IntPtrT> tmp606;
    compiler::TNode<IntPtrT> tmp607;
    compiler::TNode<IntPtrT> tmp608;
    compiler::TNode<HeapObject> tmp609;
    compiler::TNode<IntPtrT> tmp610;
    compiler::TNode<IntPtrT> tmp611;
    compiler::TNode<IntPtrT> tmp612;
    compiler::TNode<IntPtrT> tmp613;
    compiler::TNode<HeapObject> tmp614;
    compiler::TNode<IntPtrT> tmp615;
    ca_.Bind(&block51, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block49, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp614, tmp615);
  }

  if (block50.is_used()) {
    compiler::TNode<Smi> tmp616;
    compiler::TNode<FixedArray> tmp617;
    compiler::TNode<Smi> tmp618;
    compiler::TNode<HeapObject> tmp619;
    compiler::TNode<IntPtrT> tmp620;
    compiler::TNode<HeapObject> tmp621;
    compiler::TNode<IntPtrT> tmp622;
    compiler::TNode<IntPtrT> tmp623;
    compiler::TNode<HeapObject> tmp624;
    compiler::TNode<IntPtrT> tmp625;
    compiler::TNode<Smi> tmp626;
    compiler::TNode<FixedArray> tmp627;
    compiler::TNode<IntPtrT> tmp628;
    compiler::TNode<IntPtrT> tmp629;
    compiler::TNode<IntPtrT> tmp630;
    ca_.Bind(&block50, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block49.is_used()) {
    compiler::TNode<Smi> tmp631;
    compiler::TNode<FixedArray> tmp632;
    compiler::TNode<Smi> tmp633;
    compiler::TNode<HeapObject> tmp634;
    compiler::TNode<IntPtrT> tmp635;
    compiler::TNode<HeapObject> tmp636;
    compiler::TNode<IntPtrT> tmp637;
    compiler::TNode<IntPtrT> tmp638;
    compiler::TNode<HeapObject> tmp639;
    compiler::TNode<IntPtrT> tmp640;
    compiler::TNode<Smi> tmp641;
    compiler::TNode<FixedArray> tmp642;
    compiler::TNode<IntPtrT> tmp643;
    compiler::TNode<IntPtrT> tmp644;
    compiler::TNode<IntPtrT> tmp645;
    compiler::TNode<HeapObject> tmp646;
    compiler::TNode<IntPtrT> tmp647;
    ca_.Bind(&block49, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646, &tmp647);
    ca_.Goto(&block48, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644, tmp646, tmp647);
  }

  if (block48.is_used()) {
    compiler::TNode<Smi> tmp648;
    compiler::TNode<FixedArray> tmp649;
    compiler::TNode<Smi> tmp650;
    compiler::TNode<HeapObject> tmp651;
    compiler::TNode<IntPtrT> tmp652;
    compiler::TNode<HeapObject> tmp653;
    compiler::TNode<IntPtrT> tmp654;
    compiler::TNode<IntPtrT> tmp655;
    compiler::TNode<HeapObject> tmp656;
    compiler::TNode<IntPtrT> tmp657;
    compiler::TNode<Smi> tmp658;
    compiler::TNode<FixedArray> tmp659;
    compiler::TNode<IntPtrT> tmp660;
    compiler::TNode<IntPtrT> tmp661;
    compiler::TNode<HeapObject> tmp662;
    compiler::TNode<IntPtrT> tmp663;
    ca_.Bind(&block48, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 861);
    compiler::TNode<Object>tmp664 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp662, tmp663});
    compiler::TNode<BoolT> tmp665;
    USE(tmp665);
    tmp665 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp664}, compiler::TNode<Object>{tmp658});
    ca_.Branch(tmp665, &block46, &block47, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653, tmp654, tmp655, tmp656, tmp657, tmp658);
  }

  if (block47.is_used()) {
    compiler::TNode<Smi> tmp666;
    compiler::TNode<FixedArray> tmp667;
    compiler::TNode<Smi> tmp668;
    compiler::TNode<HeapObject> tmp669;
    compiler::TNode<IntPtrT> tmp670;
    compiler::TNode<HeapObject> tmp671;
    compiler::TNode<IntPtrT> tmp672;
    compiler::TNode<IntPtrT> tmp673;
    compiler::TNode<HeapObject> tmp674;
    compiler::TNode<IntPtrT> tmp675;
    compiler::TNode<Smi> tmp676;
    ca_.Bind(&block47, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TaggedEqual(a.objects[0], threeTwoOne)' failed", "test/torque/test-torque.tq", 861);
  }

  if (block46.is_used()) {
    compiler::TNode<Smi> tmp677;
    compiler::TNode<FixedArray> tmp678;
    compiler::TNode<Smi> tmp679;
    compiler::TNode<HeapObject> tmp680;
    compiler::TNode<IntPtrT> tmp681;
    compiler::TNode<HeapObject> tmp682;
    compiler::TNode<IntPtrT> tmp683;
    compiler::TNode<IntPtrT> tmp684;
    compiler::TNode<HeapObject> tmp685;
    compiler::TNode<IntPtrT> tmp686;
    compiler::TNode<Smi> tmp687;
    ca_.Bind(&block46, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 845);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 844);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block55);
  }

    ca_.Bind(&block55);
}

compiler::TNode<Oddball> TestSliceEnumeration_455(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, BoolT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, HeapObject, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, HeapObject, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, HeapObject, IntPtrT, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, HeapObject, IntPtrT, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, BoolT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block50(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 874);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 3);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).AllocateZeroedFixedArray(compiler::TNode<IntPtrT>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 875);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    ca_.Goto(&block4, tmp0, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<FixedArray> tmp5;
    compiler::TNode<IntPtrT> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 3);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp6}, compiler::TNode<IntPtrT>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp4, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<FixedArray> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 876);
    compiler::TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp12);
    compiler::TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp13);
    compiler::TNode<Smi>tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp10, tmp13});
    compiler::TNode<IntPtrT> tmp15;
    USE(tmp15);
    tmp15 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp14});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp16;
    USE(tmp16);
    tmp16 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp11});
    compiler::TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp15});
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp16}, compiler::TNode<UintPtrT>{tmp17});
    ca_.Branch(tmp18, &block12, &block13, tmp9, tmp10, tmp11, tmp10, tmp12, tmp15, tmp11, tmp11, tmp10, tmp12, tmp15, tmp11, tmp11);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<FixedArray> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<FixedArray> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<HeapObject> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    ca_.Bind(&block12, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp31}, compiler::TNode<IntPtrT>{tmp32});
    compiler::TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp35;
    USE(tmp35);
    compiler::TNode<IntPtrT> tmp36;
    USE(tmp36);
    std::tie(tmp35, tmp36) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp27}, compiler::TNode<IntPtrT>{tmp34}).Flatten();
    ca_.Goto(&block11, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp35, tmp36);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<FixedArray> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<FixedArray> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<HeapObject> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    ca_.Bind(&block13, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block10, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<FixedArray> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<FixedArray> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<HeapObject> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<HeapObject> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    ca_.Bind(&block11, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block9, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp63, tmp64);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<FixedArray> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<FixedArray> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<IntPtrT> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    ca_.Bind(&block10, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<FixedArray> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    compiler::TNode<FixedArray> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    compiler::TNode<IntPtrT> tmp80;
    compiler::TNode<HeapObject> tmp81;
    compiler::TNode<IntPtrT> tmp82;
    ca_.Bind(&block9, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.Goto(&block8, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp83;
    compiler::TNode<FixedArray> tmp84;
    compiler::TNode<IntPtrT> tmp85;
    compiler::TNode<FixedArray> tmp86;
    compiler::TNode<IntPtrT> tmp87;
    compiler::TNode<IntPtrT> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<IntPtrT> tmp90;
    compiler::TNode<HeapObject> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    ca_.Bind(&block8, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 876);
    compiler::TNode<Object>tmp93 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp91, tmp92});
    compiler::TNode<Smi> tmp94;
    USE(tmp94);
    tmp94 = UnsafeCast5ATSmi_1344(state_, compiler::TNode<Context>{tmp83}, compiler::TNode<Object>{tmp93});
    compiler::TNode<Smi> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp94}, compiler::TNode<Smi>{tmp95});
    ca_.Branch(tmp96, &block6, &block7, tmp83, tmp84, tmp85);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<FixedArray> tmp98;
    compiler::TNode<IntPtrT> tmp99;
    ca_.Bind(&block7, &tmp97, &tmp98, &tmp99);
    CodeStubAssembler(state_).FailAssert("Torque assert 'UnsafeCast<Smi>(fixedArray.objects[i]) == 0' failed", "test/torque/test-torque.tq", 876);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<FixedArray> tmp101;
    compiler::TNode<IntPtrT> tmp102;
    ca_.Bind(&block6, &tmp100, &tmp101, &tmp102);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 877);
    compiler::TNode<IntPtrT> tmp103 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp103);
    compiler::TNode<IntPtrT> tmp104 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp104);
    compiler::TNode<Smi>tmp105 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp101, tmp104});
    compiler::TNode<IntPtrT> tmp106;
    USE(tmp106);
    tmp106 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp105});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp107;
    USE(tmp107);
    tmp107 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp102});
    compiler::TNode<UintPtrT> tmp108;
    USE(tmp108);
    tmp108 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp106});
    compiler::TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp107}, compiler::TNode<UintPtrT>{tmp108});
    ca_.Branch(tmp109, &block19, &block20, tmp100, tmp101, tmp102, tmp101, tmp103, tmp106, tmp102, tmp102, tmp101, tmp103, tmp106, tmp102, tmp102);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<FixedArray> tmp111;
    compiler::TNode<IntPtrT> tmp112;
    compiler::TNode<FixedArray> tmp113;
    compiler::TNode<IntPtrT> tmp114;
    compiler::TNode<IntPtrT> tmp115;
    compiler::TNode<IntPtrT> tmp116;
    compiler::TNode<IntPtrT> tmp117;
    compiler::TNode<HeapObject> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<IntPtrT> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<IntPtrT> tmp122;
    ca_.Bind(&block19, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp123;
    USE(tmp123);
    tmp123 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp124;
    USE(tmp124);
    tmp124 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp122}, compiler::TNode<IntPtrT>{tmp123});
    compiler::TNode<IntPtrT> tmp125;
    USE(tmp125);
    tmp125 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp119}, compiler::TNode<IntPtrT>{tmp124});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp126;
    USE(tmp126);
    compiler::TNode<IntPtrT> tmp127;
    USE(tmp127);
    std::tie(tmp126, tmp127) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp118}, compiler::TNode<IntPtrT>{tmp125}).Flatten();
    ca_.Goto(&block18, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp126, tmp127);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp128;
    compiler::TNode<FixedArray> tmp129;
    compiler::TNode<IntPtrT> tmp130;
    compiler::TNode<FixedArray> tmp131;
    compiler::TNode<IntPtrT> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<IntPtrT> tmp134;
    compiler::TNode<IntPtrT> tmp135;
    compiler::TNode<HeapObject> tmp136;
    compiler::TNode<IntPtrT> tmp137;
    compiler::TNode<IntPtrT> tmp138;
    compiler::TNode<IntPtrT> tmp139;
    compiler::TNode<IntPtrT> tmp140;
    ca_.Bind(&block20, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block17, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp141;
    compiler::TNode<FixedArray> tmp142;
    compiler::TNode<IntPtrT> tmp143;
    compiler::TNode<FixedArray> tmp144;
    compiler::TNode<IntPtrT> tmp145;
    compiler::TNode<IntPtrT> tmp146;
    compiler::TNode<IntPtrT> tmp147;
    compiler::TNode<IntPtrT> tmp148;
    compiler::TNode<HeapObject> tmp149;
    compiler::TNode<IntPtrT> tmp150;
    compiler::TNode<IntPtrT> tmp151;
    compiler::TNode<IntPtrT> tmp152;
    compiler::TNode<IntPtrT> tmp153;
    compiler::TNode<HeapObject> tmp154;
    compiler::TNode<IntPtrT> tmp155;
    ca_.Bind(&block18, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block16, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp154, tmp155);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp156;
    compiler::TNode<FixedArray> tmp157;
    compiler::TNode<IntPtrT> tmp158;
    compiler::TNode<FixedArray> tmp159;
    compiler::TNode<IntPtrT> tmp160;
    compiler::TNode<IntPtrT> tmp161;
    compiler::TNode<IntPtrT> tmp162;
    compiler::TNode<IntPtrT> tmp163;
    ca_.Bind(&block17, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp164;
    compiler::TNode<FixedArray> tmp165;
    compiler::TNode<IntPtrT> tmp166;
    compiler::TNode<FixedArray> tmp167;
    compiler::TNode<IntPtrT> tmp168;
    compiler::TNode<IntPtrT> tmp169;
    compiler::TNode<IntPtrT> tmp170;
    compiler::TNode<IntPtrT> tmp171;
    compiler::TNode<HeapObject> tmp172;
    compiler::TNode<IntPtrT> tmp173;
    ca_.Bind(&block16, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.Goto(&block15, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp174;
    compiler::TNode<FixedArray> tmp175;
    compiler::TNode<IntPtrT> tmp176;
    compiler::TNode<FixedArray> tmp177;
    compiler::TNode<IntPtrT> tmp178;
    compiler::TNode<IntPtrT> tmp179;
    compiler::TNode<IntPtrT> tmp180;
    compiler::TNode<IntPtrT> tmp181;
    compiler::TNode<HeapObject> tmp182;
    compiler::TNode<IntPtrT> tmp183;
    ca_.Bind(&block15, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 877);
    compiler::TNode<Smi> tmp184;
    USE(tmp184);
    tmp184 = Convert5ATSmi8ATintptr_184(state_, compiler::TNode<IntPtrT>{tmp176});
    compiler::TNode<Smi> tmp185;
    USE(tmp185);
    tmp185 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<Smi> tmp186;
    USE(tmp186);
    tmp186 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp184}, compiler::TNode<Smi>{tmp185});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp182, tmp183}, tmp186);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 875);
    ca_.Goto(&block5, tmp174, tmp175, tmp176);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp187;
    compiler::TNode<FixedArray> tmp188;
    compiler::TNode<IntPtrT> tmp189;
    ca_.Bind(&block5, &tmp187, &tmp188, &tmp189);
    compiler::TNode<IntPtrT> tmp190;
    USE(tmp190);
    tmp190 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp191;
    USE(tmp191);
    tmp191 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp189}, compiler::TNode<IntPtrT>{tmp190});
    ca_.Goto(&block4, tmp187, tmp188, tmp191);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp192;
    compiler::TNode<FixedArray> tmp193;
    compiler::TNode<IntPtrT> tmp194;
    ca_.Bind(&block3, &tmp192, &tmp193, &tmp194);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 880);
    compiler::TNode<IntPtrT> tmp195 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp195);
    compiler::TNode<IntPtrT> tmp196 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp196);
    compiler::TNode<Smi>tmp197 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp193, tmp196});
    compiler::TNode<IntPtrT> tmp198;
    USE(tmp198);
    tmp198 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp197});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 881);
    compiler::TNode<IntPtrT> tmp199;
    USE(tmp199);
    tmp199 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    ca_.Goto(&block24, tmp192, tmp193, tmp193, tmp195, tmp198, tmp199);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp200;
    compiler::TNode<FixedArray> tmp201;
    compiler::TNode<FixedArray> tmp202;
    compiler::TNode<IntPtrT> tmp203;
    compiler::TNode<IntPtrT> tmp204;
    compiler::TNode<IntPtrT> tmp205;
    ca_.Bind(&block24, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205);
    compiler::TNode<BoolT> tmp206;
    USE(tmp206);
    tmp206 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp205}, compiler::TNode<IntPtrT>{tmp204});
    ca_.Branch(tmp206, &block22, &block23, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp207;
    compiler::TNode<FixedArray> tmp208;
    compiler::TNode<FixedArray> tmp209;
    compiler::TNode<IntPtrT> tmp210;
    compiler::TNode<IntPtrT> tmp211;
    compiler::TNode<IntPtrT> tmp212;
    ca_.Bind(&block22, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 882);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp213;
    USE(tmp213);
    tmp213 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp212});
    compiler::TNode<UintPtrT> tmp214;
    USE(tmp214);
    tmp214 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp211});
    compiler::TNode<BoolT> tmp215;
    USE(tmp215);
    tmp215 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp213}, compiler::TNode<UintPtrT>{tmp214});
    ca_.Branch(tmp215, &block29, &block30, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp212, tmp212);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp216;
    compiler::TNode<FixedArray> tmp217;
    compiler::TNode<FixedArray> tmp218;
    compiler::TNode<IntPtrT> tmp219;
    compiler::TNode<IntPtrT> tmp220;
    compiler::TNode<IntPtrT> tmp221;
    compiler::TNode<IntPtrT> tmp222;
    compiler::TNode<IntPtrT> tmp223;
    ca_.Bind(&block29, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp224;
    USE(tmp224);
    tmp224 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp225;
    USE(tmp225);
    tmp225 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp223}, compiler::TNode<IntPtrT>{tmp224});
    compiler::TNode<IntPtrT> tmp226;
    USE(tmp226);
    tmp226 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp219}, compiler::TNode<IntPtrT>{tmp225});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp227;
    USE(tmp227);
    compiler::TNode<IntPtrT> tmp228;
    USE(tmp228);
    std::tie(tmp227, tmp228) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp218}, compiler::TNode<IntPtrT>{tmp226}).Flatten();
    ca_.Goto(&block28, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp227, tmp228);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp229;
    compiler::TNode<FixedArray> tmp230;
    compiler::TNode<FixedArray> tmp231;
    compiler::TNode<IntPtrT> tmp232;
    compiler::TNode<IntPtrT> tmp233;
    compiler::TNode<IntPtrT> tmp234;
    compiler::TNode<IntPtrT> tmp235;
    compiler::TNode<IntPtrT> tmp236;
    ca_.Bind(&block30, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block27, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp237;
    compiler::TNode<FixedArray> tmp238;
    compiler::TNode<FixedArray> tmp239;
    compiler::TNode<IntPtrT> tmp240;
    compiler::TNode<IntPtrT> tmp241;
    compiler::TNode<IntPtrT> tmp242;
    compiler::TNode<IntPtrT> tmp243;
    compiler::TNode<IntPtrT> tmp244;
    compiler::TNode<HeapObject> tmp245;
    compiler::TNode<IntPtrT> tmp246;
    ca_.Bind(&block28, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 882);
    ca_.Goto(&block26, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp245, tmp246);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp247;
    compiler::TNode<FixedArray> tmp248;
    compiler::TNode<FixedArray> tmp249;
    compiler::TNode<IntPtrT> tmp250;
    compiler::TNode<IntPtrT> tmp251;
    compiler::TNode<IntPtrT> tmp252;
    ca_.Bind(&block27, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp253;
    compiler::TNode<FixedArray> tmp254;
    compiler::TNode<FixedArray> tmp255;
    compiler::TNode<IntPtrT> tmp256;
    compiler::TNode<IntPtrT> tmp257;
    compiler::TNode<IntPtrT> tmp258;
    compiler::TNode<HeapObject> tmp259;
    compiler::TNode<IntPtrT> tmp260;
    ca_.Bind(&block26, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 883);
    compiler::TNode<Object>tmp261 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp259, tmp260});
    compiler::TNode<Smi> tmp262;
    USE(tmp262);
    tmp262 = UnsafeCast5ATSmi_1344(state_, compiler::TNode<Context>{tmp253}, compiler::TNode<Object>{tmp261});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 884);
    compiler::TNode<Smi> tmp263;
    USE(tmp263);
    tmp263 = Convert5ATSmi8ATintptr_184(state_, compiler::TNode<IntPtrT>{tmp258});
    compiler::TNode<Smi> tmp264;
    USE(tmp264);
    tmp264 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<Smi> tmp265;
    USE(tmp265);
    tmp265 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp263}, compiler::TNode<Smi>{tmp264});
    compiler::TNode<BoolT> tmp266;
    USE(tmp266);
    tmp266 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp262}, compiler::TNode<Smi>{tmp265});
    ca_.Branch(tmp266, &block32, &block33, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp262);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp267;
    compiler::TNode<FixedArray> tmp268;
    compiler::TNode<FixedArray> tmp269;
    compiler::TNode<IntPtrT> tmp270;
    compiler::TNode<IntPtrT> tmp271;
    compiler::TNode<IntPtrT> tmp272;
    compiler::TNode<HeapObject> tmp273;
    compiler::TNode<IntPtrT> tmp274;
    compiler::TNode<Smi> tmp275;
    ca_.Bind(&block33, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275);
    CodeStubAssembler(state_).FailAssert("Torque assert 'value == Convert<Smi>(i) + 3' failed", "test/torque/test-torque.tq", 884);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp276;
    compiler::TNode<FixedArray> tmp277;
    compiler::TNode<FixedArray> tmp278;
    compiler::TNode<IntPtrT> tmp279;
    compiler::TNode<IntPtrT> tmp280;
    compiler::TNode<IntPtrT> tmp281;
    compiler::TNode<HeapObject> tmp282;
    compiler::TNode<IntPtrT> tmp283;
    compiler::TNode<Smi> tmp284;
    ca_.Bind(&block32, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 885);
    compiler::TNode<Smi> tmp285;
    USE(tmp285);
    tmp285 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 4);
    compiler::TNode<Smi> tmp286;
    USE(tmp286);
    tmp286 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp284}, compiler::TNode<Smi>{tmp285});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp282, tmp283}, tmp286);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 881);
    ca_.Goto(&block25, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp287;
    compiler::TNode<FixedArray> tmp288;
    compiler::TNode<FixedArray> tmp289;
    compiler::TNode<IntPtrT> tmp290;
    compiler::TNode<IntPtrT> tmp291;
    compiler::TNode<IntPtrT> tmp292;
    ca_.Bind(&block25, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292);
    compiler::TNode<IntPtrT> tmp293;
    USE(tmp293);
    tmp293 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<IntPtrT> tmp294;
    USE(tmp294);
    tmp294 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp292}, compiler::TNode<IntPtrT>{tmp293});
    ca_.Goto(&block24, tmp287, tmp288, tmp289, tmp290, tmp291, tmp294);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp295;
    compiler::TNode<FixedArray> tmp296;
    compiler::TNode<FixedArray> tmp297;
    compiler::TNode<IntPtrT> tmp298;
    compiler::TNode<IntPtrT> tmp299;
    compiler::TNode<IntPtrT> tmp300;
    ca_.Bind(&block23, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 60);
    compiler::TNode<IntPtrT> tmp301;
    USE(tmp301);
    tmp301 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp302;
    USE(tmp302);
    tmp302 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp299}, compiler::TNode<IntPtrT>{tmp301});
    compiler::TNode<IntPtrT> tmp303;
    USE(tmp303);
    tmp303 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp298}, compiler::TNode<IntPtrT>{tmp302});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 63);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 64);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 61);
    ca_.Goto(&block34, tmp295, tmp296, tmp297, tmp298, tmp299, tmp297, tmp298, tmp303);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp304;
    compiler::TNode<FixedArray> tmp305;
    compiler::TNode<FixedArray> tmp306;
    compiler::TNode<IntPtrT> tmp307;
    compiler::TNode<IntPtrT> tmp308;
    compiler::TNode<HeapObject> tmp309;
    compiler::TNode<IntPtrT> tmp310;
    compiler::TNode<IntPtrT> tmp311;
    ca_.Bind(&block34, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 889);
    compiler::TNode<Smi> tmp312;
    USE(tmp312);
    tmp312 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 890);
    ca_.Goto(&block37, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp313;
    compiler::TNode<FixedArray> tmp314;
    compiler::TNode<FixedArray> tmp315;
    compiler::TNode<IntPtrT> tmp316;
    compiler::TNode<IntPtrT> tmp317;
    compiler::TNode<HeapObject> tmp318;
    compiler::TNode<IntPtrT> tmp319;
    compiler::TNode<IntPtrT> tmp320;
    compiler::TNode<Smi> tmp321;
    ca_.Bind(&block37, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321);
    compiler::TNode<BoolT> tmp322;
    USE(tmp322);
    tmp322 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Branch(tmp322, &block35, &block36, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp323;
    compiler::TNode<FixedArray> tmp324;
    compiler::TNode<FixedArray> tmp325;
    compiler::TNode<IntPtrT> tmp326;
    compiler::TNode<IntPtrT> tmp327;
    compiler::TNode<HeapObject> tmp328;
    compiler::TNode<IntPtrT> tmp329;
    compiler::TNode<IntPtrT> tmp330;
    compiler::TNode<Smi> tmp331;
    ca_.Bind(&block35, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 87);
    compiler::TNode<BoolT> tmp332;
    USE(tmp332);
    tmp332 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp329}, compiler::TNode<IntPtrT>{tmp330});
    ca_.Goto(&block43, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp333;
    compiler::TNode<FixedArray> tmp334;
    compiler::TNode<FixedArray> tmp335;
    compiler::TNode<IntPtrT> tmp336;
    compiler::TNode<IntPtrT> tmp337;
    compiler::TNode<HeapObject> tmp338;
    compiler::TNode<IntPtrT> tmp339;
    compiler::TNode<IntPtrT> tmp340;
    compiler::TNode<Smi> tmp341;
    compiler::TNode<BoolT> tmp342;
    ca_.Bind(&block43, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 91);
    ca_.Branch(tmp342, &block41, &block42, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp343;
    compiler::TNode<FixedArray> tmp344;
    compiler::TNode<FixedArray> tmp345;
    compiler::TNode<IntPtrT> tmp346;
    compiler::TNode<IntPtrT> tmp347;
    compiler::TNode<HeapObject> tmp348;
    compiler::TNode<IntPtrT> tmp349;
    compiler::TNode<IntPtrT> tmp350;
    compiler::TNode<Smi> tmp351;
    ca_.Bind(&block41, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 92);
    ca_.Goto(&block39, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp352;
    compiler::TNode<FixedArray> tmp353;
    compiler::TNode<FixedArray> tmp354;
    compiler::TNode<IntPtrT> tmp355;
    compiler::TNode<IntPtrT> tmp356;
    compiler::TNode<HeapObject> tmp357;
    compiler::TNode<IntPtrT> tmp358;
    compiler::TNode<IntPtrT> tmp359;
    compiler::TNode<Smi> tmp360;
    ca_.Bind(&block42, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 94);
    compiler::TNode<HeapObject> tmp361;
    USE(tmp361);
    compiler::TNode<IntPtrT> tmp362;
    USE(tmp362);
    std::tie(tmp361, tmp362) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp357}, compiler::TNode<IntPtrT>{tmp358}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 95);
    compiler::TNode<IntPtrT> tmp363;
    USE(tmp363);
    tmp363 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp364;
    USE(tmp364);
    tmp364 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp358}, compiler::TNode<IntPtrT>{tmp363});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 96);
    ca_.Goto(&block40, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp364, tmp359, tmp360, tmp361, tmp362);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp365;
    compiler::TNode<FixedArray> tmp366;
    compiler::TNode<FixedArray> tmp367;
    compiler::TNode<IntPtrT> tmp368;
    compiler::TNode<IntPtrT> tmp369;
    compiler::TNode<HeapObject> tmp370;
    compiler::TNode<IntPtrT> tmp371;
    compiler::TNode<IntPtrT> tmp372;
    compiler::TNode<Smi> tmp373;
    compiler::TNode<HeapObject> tmp374;
    compiler::TNode<IntPtrT> tmp375;
    ca_.Bind(&block40, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 891);
    ca_.Goto(&block38, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp376;
    compiler::TNode<FixedArray> tmp377;
    compiler::TNode<FixedArray> tmp378;
    compiler::TNode<IntPtrT> tmp379;
    compiler::TNode<IntPtrT> tmp380;
    compiler::TNode<HeapObject> tmp381;
    compiler::TNode<IntPtrT> tmp382;
    compiler::TNode<IntPtrT> tmp383;
    compiler::TNode<Smi> tmp384;
    ca_.Bind(&block39, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384);
    ca_.Goto(&block36, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp385;
    compiler::TNode<FixedArray> tmp386;
    compiler::TNode<FixedArray> tmp387;
    compiler::TNode<IntPtrT> tmp388;
    compiler::TNode<IntPtrT> tmp389;
    compiler::TNode<HeapObject> tmp390;
    compiler::TNode<IntPtrT> tmp391;
    compiler::TNode<IntPtrT> tmp392;
    compiler::TNode<Smi> tmp393;
    compiler::TNode<HeapObject> tmp394;
    compiler::TNode<IntPtrT> tmp395;
    ca_.Bind(&block38, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 892);
    compiler::TNode<Object>tmp396 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp394, tmp395});
    compiler::TNode<Smi> tmp397;
    USE(tmp397);
    tmp397 = UnsafeCast5ATSmi_1344(state_, compiler::TNode<Context>{tmp385}, compiler::TNode<Object>{tmp396});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 893);
    compiler::TNode<Smi> tmp398;
    USE(tmp398);
    tmp398 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 7);
    compiler::TNode<Smi> tmp399;
    USE(tmp399);
    tmp399 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp393}, compiler::TNode<Smi>{tmp398});
    compiler::TNode<BoolT> tmp400;
    USE(tmp400);
    tmp400 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp397}, compiler::TNode<Smi>{tmp399});
    ca_.Branch(tmp400, &block45, &block46, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp397);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp401;
    compiler::TNode<FixedArray> tmp402;
    compiler::TNode<FixedArray> tmp403;
    compiler::TNode<IntPtrT> tmp404;
    compiler::TNode<IntPtrT> tmp405;
    compiler::TNode<HeapObject> tmp406;
    compiler::TNode<IntPtrT> tmp407;
    compiler::TNode<IntPtrT> tmp408;
    compiler::TNode<Smi> tmp409;
    compiler::TNode<HeapObject> tmp410;
    compiler::TNode<IntPtrT> tmp411;
    compiler::TNode<Smi> tmp412;
    ca_.Bind(&block46, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412);
    CodeStubAssembler(state_).FailAssert("Torque assert 'value == count + 7' failed", "test/torque/test-torque.tq", 893);
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp413;
    compiler::TNode<FixedArray> tmp414;
    compiler::TNode<FixedArray> tmp415;
    compiler::TNode<IntPtrT> tmp416;
    compiler::TNode<IntPtrT> tmp417;
    compiler::TNode<HeapObject> tmp418;
    compiler::TNode<IntPtrT> tmp419;
    compiler::TNode<IntPtrT> tmp420;
    compiler::TNode<Smi> tmp421;
    compiler::TNode<HeapObject> tmp422;
    compiler::TNode<IntPtrT> tmp423;
    compiler::TNode<Smi> tmp424;
    ca_.Bind(&block45, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 894);
    compiler::TNode<Smi> tmp425;
    USE(tmp425);
    tmp425 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp426;
    USE(tmp426);
    tmp426 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp421}, compiler::TNode<Smi>{tmp425});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 890);
    ca_.Goto(&block37, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp426);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp427;
    compiler::TNode<FixedArray> tmp428;
    compiler::TNode<FixedArray> tmp429;
    compiler::TNode<IntPtrT> tmp430;
    compiler::TNode<IntPtrT> tmp431;
    compiler::TNode<HeapObject> tmp432;
    compiler::TNode<IntPtrT> tmp433;
    compiler::TNode<IntPtrT> tmp434;
    compiler::TNode<Smi> tmp435;
    ca_.Bind(&block36, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 896);
    compiler::TNode<Smi> tmp436;
    USE(tmp436);
    tmp436 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 3);
    compiler::TNode<BoolT> tmp437;
    USE(tmp437);
    tmp437 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp435}, compiler::TNode<Smi>{tmp436});
    ca_.Branch(tmp437, &block47, &block48, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435);
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp438;
    compiler::TNode<FixedArray> tmp439;
    compiler::TNode<FixedArray> tmp440;
    compiler::TNode<IntPtrT> tmp441;
    compiler::TNode<IntPtrT> tmp442;
    compiler::TNode<HeapObject> tmp443;
    compiler::TNode<IntPtrT> tmp444;
    compiler::TNode<IntPtrT> tmp445;
    compiler::TNode<Smi> tmp446;
    ca_.Bind(&block48, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446);
    CodeStubAssembler(state_).FailAssert("Torque assert 'count == 3' failed", "test/torque/test-torque.tq", 896);
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp447;
    compiler::TNode<FixedArray> tmp448;
    compiler::TNode<FixedArray> tmp449;
    compiler::TNode<IntPtrT> tmp450;
    compiler::TNode<IntPtrT> tmp451;
    compiler::TNode<HeapObject> tmp452;
    compiler::TNode<IntPtrT> tmp453;
    compiler::TNode<IntPtrT> tmp454;
    compiler::TNode<Smi> tmp455;
    ca_.Bind(&block47, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 87);
    compiler::TNode<BoolT> tmp456;
    USE(tmp456);
    tmp456 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp453}, compiler::TNode<IntPtrT>{tmp454});
    ca_.Goto(&block51, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456);
  }

  if (block51.is_used()) {
    compiler::TNode<Context> tmp457;
    compiler::TNode<FixedArray> tmp458;
    compiler::TNode<FixedArray> tmp459;
    compiler::TNode<IntPtrT> tmp460;
    compiler::TNode<IntPtrT> tmp461;
    compiler::TNode<HeapObject> tmp462;
    compiler::TNode<IntPtrT> tmp463;
    compiler::TNode<IntPtrT> tmp464;
    compiler::TNode<Smi> tmp465;
    compiler::TNode<BoolT> tmp466;
    ca_.Bind(&block51, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 897);
    ca_.Branch(tmp466, &block49, &block50, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465);
  }

  if (block50.is_used()) {
    compiler::TNode<Context> tmp467;
    compiler::TNode<FixedArray> tmp468;
    compiler::TNode<FixedArray> tmp469;
    compiler::TNode<IntPtrT> tmp470;
    compiler::TNode<IntPtrT> tmp471;
    compiler::TNode<HeapObject> tmp472;
    compiler::TNode<IntPtrT> tmp473;
    compiler::TNode<IntPtrT> tmp474;
    compiler::TNode<Smi> tmp475;
    ca_.Bind(&block50, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475);
    CodeStubAssembler(state_).FailAssert("Torque assert 'it.Empty()' failed", "test/torque/test-torque.tq", 897);
  }

  if (block49.is_used()) {
    compiler::TNode<Context> tmp476;
    compiler::TNode<FixedArray> tmp477;
    compiler::TNode<FixedArray> tmp478;
    compiler::TNode<IntPtrT> tmp479;
    compiler::TNode<IntPtrT> tmp480;
    compiler::TNode<HeapObject> tmp481;
    compiler::TNode<IntPtrT> tmp482;
    compiler::TNode<IntPtrT> tmp483;
    compiler::TNode<Smi> tmp484;
    ca_.Bind(&block49, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 899);
    compiler::TNode<Oddball> tmp485;
    USE(tmp485);
    tmp485 = Undefined_64(state_);
    ca_.Goto(&block1, tmp476, tmp485);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp486;
    compiler::TNode<Oddball> tmp487;
    ca_.Bind(&block1, &tmp486, &tmp487);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 872);
    ca_.Goto(&block52, tmp486, tmp487);
  }

    compiler::TNode<Context> tmp488;
    compiler::TNode<Oddball> tmp489;
    ca_.Bind(&block52, &tmp488, &tmp489);
  return compiler::TNode<Oddball>{tmp489};
}

void TestStaticAssert_456(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 904);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, (CodeStubAssembler(state_).ConstexprInt31Equal((CodeStubAssembler(state_).ConstexprInt31Add(1, 2)), 3)));
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp0});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 902);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

TF_BUILTIN(NewSmiBox, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kValue));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 913);
    compiler::TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).GetStructMap(SMI_BOX_TYPE);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IntPtrConstant(((24)));
    compiler::TNode<SmiBox> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<SmiBox>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp3}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp4, CodeStubAssembler(state_).IntPtrConstant(24), compiler::TNode<IntPtrT>{tmp3}, RootIndex::kUndefinedValue);
    compiler::TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp5);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp4, tmp5}, tmp2);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp6);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp4, tmp6}, tmp1);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp7);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp4, tmp7}, tmp8);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

void TestLoadEliminationFixed_457(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 918);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 123);
    compiler::TNode<SmiBox> tmp2;
    tmp2 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kNewSmiBox, tmp0, tmp1));
    USE(tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 919);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp3);
    compiler::TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 920);
    compiler::TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp5);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 999);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp5}, tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 921);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp7);
    compiler::TNode<Smi>tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp7});
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp8}, compiler::TNode<Smi>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp0, tmp2, tmp4);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<SmiBox> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13);
    compiler::TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp14);
    compiler::TNode<Smi>tmp15 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp14});
    ca_.Goto(&block5, tmp11, tmp12, tmp13, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<SmiBox> tmp17;
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18);
    compiler::TNode<IntPtrT> tmp19 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp19);
    compiler::TNode<Smi>tmp20 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp17, tmp19});
    ca_.Goto(&block4, tmp16, tmp17, tmp18, tmp20);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<SmiBox> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<SmiBox> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Smi> tmp28;
    ca_.Bind(&block4, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 922);
    compiler::TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp27}, compiler::TNode<Object>{tmp28});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp29});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 924);
    compiler::TNode<IntPtrT> tmp30 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp30);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 11);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp26, tmp30}, tmp31);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 925);
    compiler::TNode<IntPtrT> tmp32 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp32);
    compiler::TNode<Smi>tmp33 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp26, tmp32});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 926);
    compiler::TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 927);
    compiler::TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp33}, compiler::TNode<Object>{tmp34});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp35});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 917);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 916);
    ca_.Goto(&block1, tmp25);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp36;
    ca_.Bind(&block1, &tmp36);
    ca_.Goto(&block6, tmp36);
  }

    compiler::TNode<Context> tmp37;
    ca_.Bind(&block6, &tmp37);
}

void TestLoadEliminationVariable_458(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 932);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_212(state_);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = UnsafeCast10FixedArray_1343(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 933);
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<SmiBox> tmp4;
    tmp4 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kNewSmiBox, tmp0, tmp3));
    USE(tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 934);
    compiler::TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp5);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp6);
    compiler::TNode<Smi>tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp6});
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp7});
    compiler::TNode<IntPtrT> tmp9 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp9);
    compiler::TNode<Smi>tmp10 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp9});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp11});
    compiler::TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp8});
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp12}, compiler::TNode<UintPtrT>{tmp13});
    ca_.Branch(tmp14, &block6, &block7, tmp0, tmp2, tmp4, tmp2, tmp5, tmp8, tmp10, tmp10, tmp11, tmp2, tmp5, tmp8, tmp11, tmp11);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<FixedArray> tmp16;
    compiler::TNode<SmiBox> tmp17;
    compiler::TNode<FixedArray> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<HeapObject> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    ca_.Bind(&block6, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp29});
    compiler::TNode<IntPtrT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp25}, compiler::TNode<IntPtrT>{tmp30});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp32;
    USE(tmp32);
    compiler::TNode<IntPtrT> tmp33;
    USE(tmp33);
    std::tie(tmp32, tmp33) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp24}, compiler::TNode<IntPtrT>{tmp31}).Flatten();
    ca_.Goto(&block5, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<FixedArray> tmp35;
    compiler::TNode<SmiBox> tmp36;
    compiler::TNode<FixedArray> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<HeapObject> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<FixedArray> tmp49;
    compiler::TNode<SmiBox> tmp50;
    compiler::TNode<FixedArray> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<IntPtrT> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<HeapObject> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<HeapObject> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    ca_.Bind(&block5, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block3, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp62, tmp63);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<FixedArray> tmp65;
    compiler::TNode<SmiBox> tmp66;
    compiler::TNode<FixedArray> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    ca_.Bind(&block4, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<FixedArray> tmp74;
    compiler::TNode<SmiBox> tmp75;
    compiler::TNode<FixedArray> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<IntPtrT> tmp81;
    compiler::TNode<HeapObject> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    ca_.Bind(&block3, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.Goto(&block2, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp82, tmp83);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<FixedArray> tmp85;
    compiler::TNode<SmiBox> tmp86;
    compiler::TNode<FixedArray> tmp87;
    compiler::TNode<IntPtrT> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<Smi> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<HeapObject> tmp92;
    compiler::TNode<IntPtrT> tmp93;
    ca_.Bind(&block2, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 934);
    compiler::TNode<Object>tmp94 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp92, tmp93});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 935);
    compiler::TNode<IntPtrT> tmp95 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp95);
    compiler::TNode<IntPtrT> tmp96 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp96);
    compiler::TNode<Smi>tmp97 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp85, tmp96});
    compiler::TNode<IntPtrT> tmp98;
    USE(tmp98);
    tmp98 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp97});
    compiler::TNode<IntPtrT> tmp99 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp99);
    compiler::TNode<Smi>tmp100 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp86, tmp99});
    compiler::TNode<Smi> tmp101;
    USE(tmp101);
    tmp101 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    compiler::TNode<Smi> tmp102;
    USE(tmp102);
    tmp102 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp100}, compiler::TNode<Smi>{tmp101});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp103;
    USE(tmp103);
    tmp103 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp102});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp104;
    USE(tmp104);
    tmp104 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp103});
    compiler::TNode<UintPtrT> tmp105;
    USE(tmp105);
    tmp105 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp98});
    compiler::TNode<BoolT> tmp106;
    USE(tmp106);
    tmp106 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp104}, compiler::TNode<UintPtrT>{tmp105});
    ca_.Branch(tmp106, &block13, &block14, tmp84, tmp85, tmp86, tmp94, tmp85, tmp95, tmp98, tmp102, tmp102, tmp103, tmp85, tmp95, tmp98, tmp103, tmp103);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp107;
    compiler::TNode<FixedArray> tmp108;
    compiler::TNode<SmiBox> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<FixedArray> tmp111;
    compiler::TNode<IntPtrT> tmp112;
    compiler::TNode<IntPtrT> tmp113;
    compiler::TNode<Smi> tmp114;
    compiler::TNode<Smi> tmp115;
    compiler::TNode<IntPtrT> tmp116;
    compiler::TNode<HeapObject> tmp117;
    compiler::TNode<IntPtrT> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<IntPtrT> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    ca_.Bind(&block13, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp122;
    USE(tmp122);
    tmp122 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp123;
    USE(tmp123);
    tmp123 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp121}, compiler::TNode<IntPtrT>{tmp122});
    compiler::TNode<IntPtrT> tmp124;
    USE(tmp124);
    tmp124 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp118}, compiler::TNode<IntPtrT>{tmp123});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp125;
    USE(tmp125);
    compiler::TNode<IntPtrT> tmp126;
    USE(tmp126);
    std::tie(tmp125, tmp126) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp117}, compiler::TNode<IntPtrT>{tmp124}).Flatten();
    ca_.Goto(&block12, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp125, tmp126);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp127;
    compiler::TNode<FixedArray> tmp128;
    compiler::TNode<SmiBox> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<FixedArray> tmp131;
    compiler::TNode<IntPtrT> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<IntPtrT> tmp136;
    compiler::TNode<HeapObject> tmp137;
    compiler::TNode<IntPtrT> tmp138;
    compiler::TNode<IntPtrT> tmp139;
    compiler::TNode<IntPtrT> tmp140;
    compiler::TNode<IntPtrT> tmp141;
    ca_.Bind(&block14, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block11, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp142;
    compiler::TNode<FixedArray> tmp143;
    compiler::TNode<SmiBox> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<FixedArray> tmp146;
    compiler::TNode<IntPtrT> tmp147;
    compiler::TNode<IntPtrT> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<Smi> tmp150;
    compiler::TNode<IntPtrT> tmp151;
    compiler::TNode<HeapObject> tmp152;
    compiler::TNode<IntPtrT> tmp153;
    compiler::TNode<IntPtrT> tmp154;
    compiler::TNode<IntPtrT> tmp155;
    compiler::TNode<IntPtrT> tmp156;
    compiler::TNode<HeapObject> tmp157;
    compiler::TNode<IntPtrT> tmp158;
    ca_.Bind(&block12, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block10, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp157, tmp158);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp159;
    compiler::TNode<FixedArray> tmp160;
    compiler::TNode<SmiBox> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<FixedArray> tmp163;
    compiler::TNode<IntPtrT> tmp164;
    compiler::TNode<IntPtrT> tmp165;
    compiler::TNode<Smi> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<IntPtrT> tmp168;
    ca_.Bind(&block11, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp169;
    compiler::TNode<FixedArray> tmp170;
    compiler::TNode<SmiBox> tmp171;
    compiler::TNode<Object> tmp172;
    compiler::TNode<FixedArray> tmp173;
    compiler::TNode<IntPtrT> tmp174;
    compiler::TNode<IntPtrT> tmp175;
    compiler::TNode<Smi> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<IntPtrT> tmp178;
    compiler::TNode<HeapObject> tmp179;
    compiler::TNode<IntPtrT> tmp180;
    ca_.Bind(&block10, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180);
    ca_.Goto(&block9, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp179, tmp180);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp181;
    compiler::TNode<FixedArray> tmp182;
    compiler::TNode<SmiBox> tmp183;
    compiler::TNode<Object> tmp184;
    compiler::TNode<FixedArray> tmp185;
    compiler::TNode<IntPtrT> tmp186;
    compiler::TNode<IntPtrT> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<HeapObject> tmp190;
    compiler::TNode<IntPtrT> tmp191;
    ca_.Bind(&block9, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 935);
    compiler::TNode<Object>tmp192 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp190, tmp191});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 936);
    compiler::TNode<IntPtrT> tmp193 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp193);
    compiler::TNode<IntPtrT> tmp194 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp194);
    compiler::TNode<Smi>tmp195 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp182, tmp194});
    compiler::TNode<IntPtrT> tmp196;
    USE(tmp196);
    tmp196 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp195});
    compiler::TNode<IntPtrT> tmp197 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp197);
    compiler::TNode<Smi>tmp198 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp183, tmp197});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp199;
    USE(tmp199);
    tmp199 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp198});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp200;
    USE(tmp200);
    tmp200 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp199});
    compiler::TNode<UintPtrT> tmp201;
    USE(tmp201);
    tmp201 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp196});
    compiler::TNode<BoolT> tmp202;
    USE(tmp202);
    tmp202 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp200}, compiler::TNode<UintPtrT>{tmp201});
    ca_.Branch(tmp202, &block20, &block21, tmp181, tmp182, tmp183, tmp184, tmp192, tmp182, tmp193, tmp196, tmp198, tmp198, tmp199, tmp182, tmp193, tmp196, tmp199, tmp199);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp203;
    compiler::TNode<FixedArray> tmp204;
    compiler::TNode<SmiBox> tmp205;
    compiler::TNode<Object> tmp206;
    compiler::TNode<Object> tmp207;
    compiler::TNode<FixedArray> tmp208;
    compiler::TNode<IntPtrT> tmp209;
    compiler::TNode<IntPtrT> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Smi> tmp212;
    compiler::TNode<IntPtrT> tmp213;
    compiler::TNode<HeapObject> tmp214;
    compiler::TNode<IntPtrT> tmp215;
    compiler::TNode<IntPtrT> tmp216;
    compiler::TNode<IntPtrT> tmp217;
    compiler::TNode<IntPtrT> tmp218;
    ca_.Bind(&block20, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp219;
    USE(tmp219);
    tmp219 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp220;
    USE(tmp220);
    tmp220 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp218}, compiler::TNode<IntPtrT>{tmp219});
    compiler::TNode<IntPtrT> tmp221;
    USE(tmp221);
    tmp221 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp215}, compiler::TNode<IntPtrT>{tmp220});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp222;
    USE(tmp222);
    compiler::TNode<IntPtrT> tmp223;
    USE(tmp223);
    std::tie(tmp222, tmp223) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp214}, compiler::TNode<IntPtrT>{tmp221}).Flatten();
    ca_.Goto(&block19, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp222, tmp223);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp224;
    compiler::TNode<FixedArray> tmp225;
    compiler::TNode<SmiBox> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<Object> tmp228;
    compiler::TNode<FixedArray> tmp229;
    compiler::TNode<IntPtrT> tmp230;
    compiler::TNode<IntPtrT> tmp231;
    compiler::TNode<Smi> tmp232;
    compiler::TNode<Smi> tmp233;
    compiler::TNode<IntPtrT> tmp234;
    compiler::TNode<HeapObject> tmp235;
    compiler::TNode<IntPtrT> tmp236;
    compiler::TNode<IntPtrT> tmp237;
    compiler::TNode<IntPtrT> tmp238;
    compiler::TNode<IntPtrT> tmp239;
    ca_.Bind(&block21, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block18, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp240;
    compiler::TNode<FixedArray> tmp241;
    compiler::TNode<SmiBox> tmp242;
    compiler::TNode<Object> tmp243;
    compiler::TNode<Object> tmp244;
    compiler::TNode<FixedArray> tmp245;
    compiler::TNode<IntPtrT> tmp246;
    compiler::TNode<IntPtrT> tmp247;
    compiler::TNode<Smi> tmp248;
    compiler::TNode<Smi> tmp249;
    compiler::TNode<IntPtrT> tmp250;
    compiler::TNode<HeapObject> tmp251;
    compiler::TNode<IntPtrT> tmp252;
    compiler::TNode<IntPtrT> tmp253;
    compiler::TNode<IntPtrT> tmp254;
    compiler::TNode<IntPtrT> tmp255;
    compiler::TNode<HeapObject> tmp256;
    compiler::TNode<IntPtrT> tmp257;
    ca_.Bind(&block19, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block17, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp256, tmp257);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp258;
    compiler::TNode<FixedArray> tmp259;
    compiler::TNode<SmiBox> tmp260;
    compiler::TNode<Object> tmp261;
    compiler::TNode<Object> tmp262;
    compiler::TNode<FixedArray> tmp263;
    compiler::TNode<IntPtrT> tmp264;
    compiler::TNode<IntPtrT> tmp265;
    compiler::TNode<Smi> tmp266;
    compiler::TNode<Smi> tmp267;
    compiler::TNode<IntPtrT> tmp268;
    ca_.Bind(&block18, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp269;
    compiler::TNode<FixedArray> tmp270;
    compiler::TNode<SmiBox> tmp271;
    compiler::TNode<Object> tmp272;
    compiler::TNode<Object> tmp273;
    compiler::TNode<FixedArray> tmp274;
    compiler::TNode<IntPtrT> tmp275;
    compiler::TNode<IntPtrT> tmp276;
    compiler::TNode<Smi> tmp277;
    compiler::TNode<Smi> tmp278;
    compiler::TNode<IntPtrT> tmp279;
    compiler::TNode<HeapObject> tmp280;
    compiler::TNode<IntPtrT> tmp281;
    ca_.Bind(&block17, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281);
    ca_.Goto(&block16, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp280, tmp281);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp282;
    compiler::TNode<FixedArray> tmp283;
    compiler::TNode<SmiBox> tmp284;
    compiler::TNode<Object> tmp285;
    compiler::TNode<Object> tmp286;
    compiler::TNode<FixedArray> tmp287;
    compiler::TNode<IntPtrT> tmp288;
    compiler::TNode<IntPtrT> tmp289;
    compiler::TNode<Smi> tmp290;
    compiler::TNode<Smi> tmp291;
    compiler::TNode<HeapObject> tmp292;
    compiler::TNode<IntPtrT> tmp293;
    ca_.Bind(&block16, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 936);
    compiler::TNode<Object>tmp294 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp292, tmp293});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 937);
    compiler::TNode<IntPtrT> tmp295 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp295);
    compiler::TNode<IntPtrT> tmp296 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp296);
    compiler::TNode<Smi>tmp297 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp283, tmp296});
    compiler::TNode<IntPtrT> tmp298;
    USE(tmp298);
    tmp298 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp297});
    compiler::TNode<IntPtrT> tmp299 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp299);
    compiler::TNode<Smi>tmp300 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp284, tmp299});
    compiler::TNode<Smi> tmp301;
    USE(tmp301);
    tmp301 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    compiler::TNode<Smi> tmp302;
    USE(tmp302);
    tmp302 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp300}, compiler::TNode<Smi>{tmp301});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp303;
    USE(tmp303);
    tmp303 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp302});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp304;
    USE(tmp304);
    tmp304 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp303});
    compiler::TNode<UintPtrT> tmp305;
    USE(tmp305);
    tmp305 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp298});
    compiler::TNode<BoolT> tmp306;
    USE(tmp306);
    tmp306 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp304}, compiler::TNode<UintPtrT>{tmp305});
    ca_.Branch(tmp306, &block27, &block28, tmp282, tmp283, tmp284, tmp285, tmp286, tmp294, tmp283, tmp295, tmp298, tmp302, tmp302, tmp303, tmp283, tmp295, tmp298, tmp303, tmp303);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp307;
    compiler::TNode<FixedArray> tmp308;
    compiler::TNode<SmiBox> tmp309;
    compiler::TNode<Object> tmp310;
    compiler::TNode<Object> tmp311;
    compiler::TNode<Object> tmp312;
    compiler::TNode<FixedArray> tmp313;
    compiler::TNode<IntPtrT> tmp314;
    compiler::TNode<IntPtrT> tmp315;
    compiler::TNode<Smi> tmp316;
    compiler::TNode<Smi> tmp317;
    compiler::TNode<IntPtrT> tmp318;
    compiler::TNode<HeapObject> tmp319;
    compiler::TNode<IntPtrT> tmp320;
    compiler::TNode<IntPtrT> tmp321;
    compiler::TNode<IntPtrT> tmp322;
    compiler::TNode<IntPtrT> tmp323;
    ca_.Bind(&block27, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp324;
    USE(tmp324);
    tmp324 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp325;
    USE(tmp325);
    tmp325 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp323}, compiler::TNode<IntPtrT>{tmp324});
    compiler::TNode<IntPtrT> tmp326;
    USE(tmp326);
    tmp326 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp320}, compiler::TNode<IntPtrT>{tmp325});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp327;
    USE(tmp327);
    compiler::TNode<IntPtrT> tmp328;
    USE(tmp328);
    std::tie(tmp327, tmp328) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp319}, compiler::TNode<IntPtrT>{tmp326}).Flatten();
    ca_.Goto(&block26, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp327, tmp328);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp329;
    compiler::TNode<FixedArray> tmp330;
    compiler::TNode<SmiBox> tmp331;
    compiler::TNode<Object> tmp332;
    compiler::TNode<Object> tmp333;
    compiler::TNode<Object> tmp334;
    compiler::TNode<FixedArray> tmp335;
    compiler::TNode<IntPtrT> tmp336;
    compiler::TNode<IntPtrT> tmp337;
    compiler::TNode<Smi> tmp338;
    compiler::TNode<Smi> tmp339;
    compiler::TNode<IntPtrT> tmp340;
    compiler::TNode<HeapObject> tmp341;
    compiler::TNode<IntPtrT> tmp342;
    compiler::TNode<IntPtrT> tmp343;
    compiler::TNode<IntPtrT> tmp344;
    compiler::TNode<IntPtrT> tmp345;
    ca_.Bind(&block28, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block25, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp346;
    compiler::TNode<FixedArray> tmp347;
    compiler::TNode<SmiBox> tmp348;
    compiler::TNode<Object> tmp349;
    compiler::TNode<Object> tmp350;
    compiler::TNode<Object> tmp351;
    compiler::TNode<FixedArray> tmp352;
    compiler::TNode<IntPtrT> tmp353;
    compiler::TNode<IntPtrT> tmp354;
    compiler::TNode<Smi> tmp355;
    compiler::TNode<Smi> tmp356;
    compiler::TNode<IntPtrT> tmp357;
    compiler::TNode<HeapObject> tmp358;
    compiler::TNode<IntPtrT> tmp359;
    compiler::TNode<IntPtrT> tmp360;
    compiler::TNode<IntPtrT> tmp361;
    compiler::TNode<IntPtrT> tmp362;
    compiler::TNode<HeapObject> tmp363;
    compiler::TNode<IntPtrT> tmp364;
    ca_.Bind(&block26, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block24, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp363, tmp364);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp365;
    compiler::TNode<FixedArray> tmp366;
    compiler::TNode<SmiBox> tmp367;
    compiler::TNode<Object> tmp368;
    compiler::TNode<Object> tmp369;
    compiler::TNode<Object> tmp370;
    compiler::TNode<FixedArray> tmp371;
    compiler::TNode<IntPtrT> tmp372;
    compiler::TNode<IntPtrT> tmp373;
    compiler::TNode<Smi> tmp374;
    compiler::TNode<Smi> tmp375;
    compiler::TNode<IntPtrT> tmp376;
    ca_.Bind(&block25, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp377;
    compiler::TNode<FixedArray> tmp378;
    compiler::TNode<SmiBox> tmp379;
    compiler::TNode<Object> tmp380;
    compiler::TNode<Object> tmp381;
    compiler::TNode<Object> tmp382;
    compiler::TNode<FixedArray> tmp383;
    compiler::TNode<IntPtrT> tmp384;
    compiler::TNode<IntPtrT> tmp385;
    compiler::TNode<Smi> tmp386;
    compiler::TNode<Smi> tmp387;
    compiler::TNode<IntPtrT> tmp388;
    compiler::TNode<HeapObject> tmp389;
    compiler::TNode<IntPtrT> tmp390;
    ca_.Bind(&block24, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390);
    ca_.Goto(&block23, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386, tmp387, tmp389, tmp390);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp391;
    compiler::TNode<FixedArray> tmp392;
    compiler::TNode<SmiBox> tmp393;
    compiler::TNode<Object> tmp394;
    compiler::TNode<Object> tmp395;
    compiler::TNode<Object> tmp396;
    compiler::TNode<FixedArray> tmp397;
    compiler::TNode<IntPtrT> tmp398;
    compiler::TNode<IntPtrT> tmp399;
    compiler::TNode<Smi> tmp400;
    compiler::TNode<Smi> tmp401;
    compiler::TNode<HeapObject> tmp402;
    compiler::TNode<IntPtrT> tmp403;
    ca_.Bind(&block23, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 937);
    compiler::TNode<Object>tmp404 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp402, tmp403});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 938);
    compiler::TNode<BoolT> tmp405;
    USE(tmp405);
    tmp405 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp394}, compiler::TNode<Object>{tmp396});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp405});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 939);
    compiler::TNode<BoolT> tmp406;
    USE(tmp406);
    tmp406 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp395}, compiler::TNode<Object>{tmp404});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp406});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 931);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 930);
    ca_.Goto(&block1, tmp391);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp407;
    ca_.Bind(&block1, &tmp407);
    ca_.Goto(&block30, tmp407);
  }

    compiler::TNode<Context> tmp408;
    ca_.Bind(&block30, &tmp408);
}

compiler::TNode<Smi> TestRedundantArrayElementCheck_459(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 944);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_212(state_);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 945);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<FixedArray> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp6);
    compiler::TNode<Smi>tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp6});
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp5}, compiler::TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp3, tmp4, tmp5);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<FixedArray> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 946);
    compiler::TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp12);
    compiler::TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp13);
    compiler::TNode<Smi>tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp10, tmp13});
    compiler::TNode<IntPtrT> tmp15;
    USE(tmp15);
    tmp15 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp14});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp16;
    USE(tmp16);
    tmp16 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp16});
    compiler::TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp15});
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp17}, compiler::TNode<UintPtrT>{tmp18});
    ca_.Branch(tmp19, &block12, &block13, tmp9, tmp10, tmp11, tmp10, tmp12, tmp15, tmp11, tmp11, tmp16, tmp10, tmp12, tmp15, tmp16, tmp16);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<FixedArray> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<FixedArray> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<HeapObject> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    ca_.Bind(&block12, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp33}, compiler::TNode<IntPtrT>{tmp34});
    compiler::TNode<IntPtrT> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp30}, compiler::TNode<IntPtrT>{tmp35});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp37;
    USE(tmp37);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    std::tie(tmp37, tmp38) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp29}, compiler::TNode<IntPtrT>{tmp36}).Flatten();
    ca_.Goto(&block11, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp37, tmp38);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<FixedArray> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<FixedArray> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<Smi> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<HeapObject> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    ca_.Bind(&block13, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block10, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<FixedArray> tmp54;
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
    ca_.Bind(&block11, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block9, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp67, tmp68);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<FixedArray> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<FixedArray> tmp72;
    compiler::TNode<IntPtrT> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    ca_.Bind(&block10, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<FixedArray> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<FixedArray> tmp81;
    compiler::TNode<IntPtrT> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<Smi> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<HeapObject> tmp87;
    compiler::TNode<IntPtrT> tmp88;
    ca_.Bind(&block9, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88);
    ca_.Goto(&block8, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp87, tmp88);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp89;
    compiler::TNode<FixedArray> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<FixedArray> tmp92;
    compiler::TNode<IntPtrT> tmp93;
    compiler::TNode<IntPtrT> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<HeapObject> tmp97;
    compiler::TNode<IntPtrT> tmp98;
    ca_.Bind(&block8, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 946);
    compiler::TNode<Object>tmp99 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp97, tmp98});
    compiler::TNode<Oddball> tmp100;
    USE(tmp100);
    tmp100 = TheHole_62(state_);
    compiler::TNode<BoolT> tmp101;
    USE(tmp101);
    tmp101 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp99}, compiler::TNode<HeapObject>{tmp100});
    ca_.Branch(tmp101, &block6, &block7, tmp89, tmp90, tmp91);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<FixedArray> tmp103;
    compiler::TNode<Smi> tmp104;
    ca_.Bind(&block6, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 947);
    compiler::TNode<IntPtrT> tmp105 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp105);
    compiler::TNode<IntPtrT> tmp106 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp106);
    compiler::TNode<Smi>tmp107 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp103, tmp106});
    compiler::TNode<IntPtrT> tmp108;
    USE(tmp108);
    tmp108 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp107});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp109;
    USE(tmp109);
    tmp109 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp104});
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
    ca_.Branch(tmp112, &block21, &block22, tmp102, tmp103, tmp104, tmp103, tmp105, tmp108, tmp104, tmp104, tmp109, tmp103, tmp105, tmp108, tmp109, tmp109);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<FixedArray> tmp114;
    compiler::TNode<Smi> tmp115;
    compiler::TNode<FixedArray> tmp116;
    compiler::TNode<IntPtrT> tmp117;
    compiler::TNode<IntPtrT> tmp118;
    compiler::TNode<Smi> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<HeapObject> tmp122;
    compiler::TNode<IntPtrT> tmp123;
    compiler::TNode<IntPtrT> tmp124;
    compiler::TNode<IntPtrT> tmp125;
    compiler::TNode<IntPtrT> tmp126;
    ca_.Bind(&block21, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp127;
    USE(tmp127);
    tmp127 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp128;
    USE(tmp128);
    tmp128 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp126}, compiler::TNode<IntPtrT>{tmp127});
    compiler::TNode<IntPtrT> tmp129;
    USE(tmp129);
    tmp129 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp123}, compiler::TNode<IntPtrT>{tmp128});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp130;
    USE(tmp130);
    compiler::TNode<IntPtrT> tmp131;
    USE(tmp131);
    std::tie(tmp130, tmp131) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp122}, compiler::TNode<IntPtrT>{tmp129}).Flatten();
    ca_.Goto(&block20, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp130, tmp131);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp132;
    compiler::TNode<FixedArray> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<FixedArray> tmp135;
    compiler::TNode<IntPtrT> tmp136;
    compiler::TNode<IntPtrT> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<IntPtrT> tmp140;
    compiler::TNode<HeapObject> tmp141;
    compiler::TNode<IntPtrT> tmp142;
    compiler::TNode<IntPtrT> tmp143;
    compiler::TNode<IntPtrT> tmp144;
    compiler::TNode<IntPtrT> tmp145;
    ca_.Bind(&block22, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block19, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp146;
    compiler::TNode<FixedArray> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<FixedArray> tmp149;
    compiler::TNode<IntPtrT> tmp150;
    compiler::TNode<IntPtrT> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<IntPtrT> tmp154;
    compiler::TNode<HeapObject> tmp155;
    compiler::TNode<IntPtrT> tmp156;
    compiler::TNode<IntPtrT> tmp157;
    compiler::TNode<IntPtrT> tmp158;
    compiler::TNode<IntPtrT> tmp159;
    compiler::TNode<HeapObject> tmp160;
    compiler::TNode<IntPtrT> tmp161;
    ca_.Bind(&block20, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block18, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp160, tmp161);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp162;
    compiler::TNode<FixedArray> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<FixedArray> tmp165;
    compiler::TNode<IntPtrT> tmp166;
    compiler::TNode<IntPtrT> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<IntPtrT> tmp170;
    ca_.Bind(&block19, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp171;
    compiler::TNode<FixedArray> tmp172;
    compiler::TNode<Smi> tmp173;
    compiler::TNode<FixedArray> tmp174;
    compiler::TNode<IntPtrT> tmp175;
    compiler::TNode<IntPtrT> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<IntPtrT> tmp179;
    compiler::TNode<HeapObject> tmp180;
    compiler::TNode<IntPtrT> tmp181;
    ca_.Bind(&block18, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.Goto(&block17, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp180, tmp181);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp182;
    compiler::TNode<FixedArray> tmp183;
    compiler::TNode<Smi> tmp184;
    compiler::TNode<FixedArray> tmp185;
    compiler::TNode<IntPtrT> tmp186;
    compiler::TNode<IntPtrT> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<HeapObject> tmp190;
    compiler::TNode<IntPtrT> tmp191;
    ca_.Bind(&block17, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 947);
    compiler::TNode<Object>tmp192 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp190, tmp191});
    compiler::TNode<Oddball> tmp193;
    USE(tmp193);
    tmp193 = TheHole_62(state_);
    compiler::TNode<BoolT> tmp194;
    USE(tmp194);
    tmp194 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp192}, compiler::TNode<HeapObject>{tmp193});
    ca_.Branch(tmp194, &block15, &block16, tmp182, tmp183, tmp184);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp195;
    compiler::TNode<FixedArray> tmp196;
    compiler::TNode<Smi> tmp197;
    ca_.Bind(&block15, &tmp195, &tmp196, &tmp197);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 948);
    compiler::TNode<Smi> tmp198;
    USE(tmp198);
    tmp198 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, -1);
    ca_.Goto(&block1, tmp195, tmp198);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp199;
    compiler::TNode<FixedArray> tmp200;
    compiler::TNode<Smi> tmp201;
    ca_.Bind(&block16, &tmp199, &tmp200, &tmp201);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 950);
    compiler::TNode<BoolT> tmp202;
    USE(tmp202);
    tmp202 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp202});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 947);
    ca_.Goto(&block24, tmp199, tmp200, tmp201);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp203;
    compiler::TNode<FixedArray> tmp204;
    compiler::TNode<Smi> tmp205;
    ca_.Bind(&block24, &tmp203, &tmp204, &tmp205);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 946);
    ca_.Goto(&block7, tmp203, tmp204, tmp205);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp206;
    compiler::TNode<FixedArray> tmp207;
    compiler::TNode<Smi> tmp208;
    ca_.Bind(&block7, &tmp206, &tmp207, &tmp208);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 945);
    ca_.Goto(&block5, tmp206, tmp207, tmp208);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp209;
    compiler::TNode<FixedArray> tmp210;
    compiler::TNode<Smi> tmp211;
    ca_.Bind(&block5, &tmp209, &tmp210, &tmp211);
    compiler::TNode<Smi> tmp212;
    USE(tmp212);
    tmp212 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp213;
    USE(tmp213);
    tmp213 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp211}, compiler::TNode<Smi>{tmp212});
    ca_.Goto(&block4, tmp209, tmp210, tmp213);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp214;
    compiler::TNode<FixedArray> tmp215;
    compiler::TNode<Smi> tmp216;
    ca_.Bind(&block3, &tmp214, &tmp215, &tmp216);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 954);
    compiler::TNode<Smi> tmp217;
    USE(tmp217);
    tmp217 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    ca_.Goto(&block1, tmp214, tmp217);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp218;
    compiler::TNode<Smi> tmp219;
    ca_.Bind(&block1, &tmp218, &tmp219);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 942);
    ca_.Goto(&block25, tmp218, tmp219);
  }

    compiler::TNode<Context> tmp220;
    compiler::TNode<Smi> tmp221;
    ca_.Bind(&block25, &tmp220, &tmp221);
  return compiler::TNode<Smi>{tmp221};
}

compiler::TNode<Smi> TestRedundantSmiCheck_460(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Object, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 959);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_212(state_);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 960);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp2);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp3);
    compiler::TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp3});
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr17ATconstexpr_int31_1349(state_, 1);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp6});
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp5});
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp7}, compiler::TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block6, &block7, tmp0, tmp1, tmp1, tmp2, tmp5, tmp6, tmp1, tmp2, tmp5, tmp6, tmp6);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<FixedArray> tmp11;
    compiler::TNode<FixedArray> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    ca_.Bind(&block6, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp20}, compiler::TNode<IntPtrT>{tmp21});
    compiler::TNode<IntPtrT> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp17}, compiler::TNode<IntPtrT>{tmp22});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp24;
    USE(tmp24);
    compiler::TNode<IntPtrT> tmp25;
    USE(tmp25);
    std::tie(tmp24, tmp25) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp16}, compiler::TNode<IntPtrT>{tmp23}).Flatten();
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp24, tmp25);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<FixedArray> tmp27;
    compiler::TNode<FixedArray> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<HeapObject> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    compiler::TNode<IntPtrT> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    ca_.Bind(&block7, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<FixedArray> tmp38;
    compiler::TNode<FixedArray> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<HeapObject> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<HeapObject> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    ca_.Bind(&block5, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block3, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp48, tmp49);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<FixedArray> tmp51;
    compiler::TNode<FixedArray> tmp52;
    compiler::TNode<IntPtrT> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    ca_.Bind(&block4, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<FixedArray> tmp57;
    compiler::TNode<FixedArray> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<HeapObject> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    ca_.Bind(&block3, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.Goto(&block2, tmp56, tmp57, tmp58, tmp59, tmp60, tmp62, tmp63);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<FixedArray> tmp65;
    compiler::TNode<FixedArray> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    compiler::TNode<HeapObject> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    ca_.Bind(&block2, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 960);
    compiler::TNode<Object>tmp71 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp69, tmp70});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 961);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 962);
    compiler::TNode<Smi> tmp72;
    USE(tmp72);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp72 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp71}, &label0);
    ca_.Goto(&block11, tmp64, tmp65, tmp71, tmp71, tmp71, tmp72);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp64, tmp65, tmp71, tmp71, tmp71);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<FixedArray> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Object> tmp77;
    ca_.Bind(&block12, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.Goto(&block10, tmp73, tmp74, tmp75, tmp76);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<FixedArray> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Smi> tmp83;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 963);
    compiler::TNode<Smi> tmp84;
    USE(tmp84);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp84 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp80}, &label0);
    ca_.Goto(&block15, tmp78, tmp79, tmp80, tmp81, tmp83, tmp80, tmp84);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp78, tmp79, tmp80, tmp81, tmp83, tmp80);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<FixedArray> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<Object> tmp90;
    ca_.Bind(&block16, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.Goto(&block14, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp91;
    compiler::TNode<FixedArray> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Smi> tmp97;
    ca_.Bind(&block15, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.Goto(&block13, tmp91, tmp92, tmp93, tmp94, tmp95, tmp97);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<FixedArray> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Smi> tmp102;
    ca_.Bind(&block14, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    VerifiedUnreachable_252(state_);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp103;
    compiler::TNode<FixedArray> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<Smi> tmp108;
    ca_.Bind(&block13, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 964);
    compiler::TNode<Smi> tmp109;
    USE(tmp109);
    tmp109 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, -1);
    ca_.Goto(&block1, tmp103, tmp109);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<FixedArray> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Object> tmp113;
    ca_.Bind(&block10, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 966);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 962);
    ca_.Goto(&block9, tmp110, tmp111, tmp112, tmp113);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp114;
    compiler::TNode<FixedArray> tmp115;
    compiler::TNode<Object> tmp116;
    compiler::TNode<Object> tmp117;
    ca_.Bind(&block9, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 961);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 969);
    compiler::TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    ca_.Goto(&block1, tmp114, tmp118);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp119;
    compiler::TNode<Smi> tmp120;
    ca_.Bind(&block1, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 957);
    ca_.Goto(&block17, tmp119, tmp120);
  }

    compiler::TNode<Context> tmp121;
    compiler::TNode<Smi> tmp122;
    ca_.Bind(&block17, &tmp121, &tmp122);
  return compiler::TNode<Smi>{tmp122};
}

compiler::TNode<IntPtrT> TestGenericStruct1_461(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 978);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 123);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 979);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 980);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 981);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 123);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp0}, compiler::TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp0, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    ca_.Bind(&block3, &tmp3, &tmp4, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'box.value == 123' failed", "test/torque/test-torque.tq", 981);
  }

  if (block2.is_used()) {
    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 982);
    compiler::TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    compiler::TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 983);
    compiler::TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 246);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp10}, compiler::TNode<IntPtrT>{tmp11});
    ca_.Branch(tmp12, &block4, &block5, tmp6, tmp7, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15);
    CodeStubAssembler(state_).FailAssert("Torque assert 'boxbox.value.value == 246' failed", "test/torque/test-torque.tq", 983);
  }

  if (block4.is_used()) {
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 984);
    ca_.Goto(&block1, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp19;
    ca_.Bind(&block1, &tmp19);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 976);
    ca_.Goto(&block6, tmp19);
  }

    compiler::TNode<IntPtrT> tmp20;
    ca_.Bind(&block6, &tmp20);
  return compiler::TNode<IntPtrT>{tmp20};
}

TorqueStructTestTuple24TestTuple8ATintptr5ATSmi24TestTuple5ATSmi8ATintptr TestGenericStruct2_462(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1000);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1001);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    std::tie(tmp2, tmp3) = TupleSwap8ATintptr5ATSmi_1417(state_, TorqueStructTestTuple8ATintptr5ATSmi{compiler::TNode<IntPtrT>{tmp0}, compiler::TNode<Smi>{tmp1}}).Flatten();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1002);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp0}, compiler::TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<IntPtrT> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert 'intptrAndSmi.fst == smiAndIntptr.snd' failed", "test/torque/test-torque.tq", 1002);
  }

  if (block2.is_used()) {
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1003);
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11});
    ca_.Branch(tmp13, &block4, &block5, tmp9, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'intptrAndSmi.snd == smiAndIntptr.fst' failed", "test/torque/test-torque.tq", 1003);
  }

  if (block4.is_used()) {
    compiler::TNode<IntPtrT> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1005);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1006);
    ca_.Goto(&block1, tmp18, tmp19, tmp20, tmp21);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    ca_.Bind(&block1, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 997);
    ca_.Goto(&block6, tmp22, tmp23, tmp24, tmp25);
  }

    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Smi> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28, &tmp29);
  return TorqueStructTestTuple24TestTuple8ATintptr5ATSmi24TestTuple5ATSmi8ATintptr{TorqueStructTestTuple8ATintptr5ATSmi{compiler::TNode<IntPtrT>{tmp26}, compiler::TNode<Smi>{tmp27}}, TorqueStructTestTuple5ATSmi8ATintptr{compiler::TNode<Smi>{tmp28}, compiler::TNode<IntPtrT>{tmp29}}};
}

compiler::TNode<BoolT> BranchAndWriteResult_463(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x, compiler::TNode<SmiBox> p_box) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_box);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    compiler::TNode<SmiBox> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1010);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 5);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block4, &block5, tmp0, tmp1, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Smi> tmp4;
    compiler::TNode<SmiBox> tmp5;
    compiler::TNode<BoolT> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block6, tmp4, tmp5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Smi> tmp8;
    compiler::TNode<SmiBox> tmp9;
    compiler::TNode<BoolT> tmp10;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp8}, compiler::TNode<Smi>{tmp11});
    ca_.Goto(&block6, tmp8, tmp9, tmp10, tmp12);
  }

  if (block6.is_used()) {
    compiler::TNode<Smi> tmp13;
    compiler::TNode<SmiBox> tmp14;
    compiler::TNode<BoolT> tmp15;
    compiler::TNode<BoolT> tmp16;
    ca_.Bind(&block6, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Branch(tmp16, &block2, &block3, tmp13, tmp14);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp17;
    compiler::TNode<SmiBox> tmp18;
    ca_.Bind(&block2, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1011);
    compiler::TNode<IntPtrT> tmp19 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp19);
    compiler::TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp18, tmp19}, tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1012);
    compiler::TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block1, tmp17, tmp18, tmp21);
  }

  if (block3.is_used()) {
    compiler::TNode<Smi> tmp22;
    compiler::TNode<SmiBox> tmp23;
    ca_.Bind(&block3, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1014);
    compiler::TNode<IntPtrT> tmp24 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp24);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp23, tmp24}, tmp25);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1015);
    compiler::TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block1, tmp22, tmp23, tmp26);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp27;
    compiler::TNode<SmiBox> tmp28;
    compiler::TNode<BoolT> tmp29;
    ca_.Bind(&block1, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1009);
    ca_.Goto(&block8, tmp27, tmp28, tmp29);
  }

    compiler::TNode<Smi> tmp30;
    compiler::TNode<SmiBox> tmp31;
    compiler::TNode<BoolT> tmp32;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32);
  return compiler::TNode<BoolT>{tmp32};
}

void TestBranchOnBoolOptimization_464(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_input) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, SmiBox> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, SmiBox> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, SmiBox> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_input);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1021);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<SmiBox> tmp3;
    tmp3 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kNewSmiBox, tmp0, tmp2));
    USE(tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1024);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = BranchAndWriteResult_463(state_, compiler::TNode<Smi>{tmp1}, compiler::TNode<SmiBox>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<SmiBox> tmp7;
    ca_.Bind(&block2, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1025);
    compiler::TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp8);
    compiler::TNode<Smi>tmp9 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp7, tmp8});
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp9}, compiler::TNode<Smi>{tmp10});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp11});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1024);
    ca_.Goto(&block4, tmp5, tmp6, tmp7);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<SmiBox> tmp14;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1027);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp15);
    compiler::TNode<Smi>tmp16 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp14, tmp15});
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp17});
    CodeStubAssembler(state_).StaticAssert(compiler::TNode<BoolT>{tmp18});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1024);
    ca_.Goto(&block4, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<SmiBox> tmp21;
    ca_.Bind(&block4, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1020);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1019);
    ca_.Goto(&block1, tmp19, tmp20);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Smi> tmp23;
    ca_.Bind(&block1, &tmp22, &tmp23);
    ca_.Goto(&block5, tmp22, tmp23);
  }

    compiler::TNode<Context> tmp24;
    compiler::TNode<Smi> tmp25;
    ca_.Bind(&block5, &tmp24, &tmp25);
}

compiler::TNode<Smi> LoadInternalClassA_1294(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 767);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<InternalClass> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<InternalClass> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreInternalClassA_1295(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 767);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InternalClass> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<InternalClass> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Number> LoadInternalClassB_1296(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 768);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp1);
    compiler::TNode<Number>tmp2 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<InternalClass> tmp3;
    compiler::TNode<Number> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<InternalClass> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Number>{tmp6};
}

void StoreInternalClassB_1297(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Number> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 768);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InternalClass> tmp3;
    compiler::TNode<Number> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<InternalClass> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

void _method_InternalClass_Flip(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_this);

  if (block0.is_used()) {
    compiler::TNode<InternalClass> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 763);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp1);
    compiler::TNode<Number>tmp2 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp0, tmp1});
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<InternalClass> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block4, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<InternalClass> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 764);
    compiler::TNode<IntPtrT> tmp9 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp9);
    compiler::TNode<IntPtrT> tmp10 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp10);
    compiler::TNode<Smi>tmp11 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp10});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp9}, tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 765);
    compiler::TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp12);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp12}, tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 762);
    ca_.Goto(&block2, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<InternalClass> tmp13;
    ca_.Bind(&block2, &tmp13);
    ca_.Goto(&block5, tmp13);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_NotASmi);
  }

    compiler::TNode<InternalClass> tmp14;
    ca_.Bind(&block5, &tmp14);
}

compiler::TNode<Smi> LoadSmiPairA_1298(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 823);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreSmiPairA_1299(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 823);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadSmiPairB_1300(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 824);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreSmiPairB_1301(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 824);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

TorqueStructReference5ATSmi _method_SmiPair_GetA(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_this) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_this);

  if (block0.is_used()) {
    compiler::TNode<SmiPair> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 821);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp1);
    ca_.Goto(&block1, tmp0, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiPair> tmp2;
    compiler::TNode<HeapObject> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 820);
    ca_.Goto(&block2, tmp2, tmp3, tmp4);
  }

    compiler::TNode<SmiPair> tmp5;
    compiler::TNode<HeapObject> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    ca_.Bind(&block2, &tmp5, &tmp6, &tmp7);
  return TorqueStructReference5ATSmi{compiler::TNode<HeapObject>{tmp6}, compiler::TNode<IntPtrT>{tmp7}, TorqueStructUnsafe{}};
}

compiler::TNode<Smi> LoadSmiBoxValue_1302(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SmiBox> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 908);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiBox> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiBox> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreSmiBoxValue_1303(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SmiBox> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 908);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiBox> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiBox> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

compiler::TNode<Smi> LoadSmiBoxUnrelated_1304(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SmiBox> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 909);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp1);
    compiler::TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiBox> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiBox> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

void StoreSmiBoxUnrelated_1305(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SmiBox> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 909);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SmiBox> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<SmiBox> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 87);
    compiler::TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null_63(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

compiler::TNode<Object> GenericMacroTest5ATSmi_1408(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p__param);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 136);
    compiler::TNode<Oddball> tmp1;
    USE(tmp1);
    tmp1 = Undefined_64(state_);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 157);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

compiler::TNode<Object> GenericMacroTestWithLabels5ATSmi_1409(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p__param);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 145);
    compiler::TNode<Oddball> tmp1;
    USE(tmp1);
    tmp1 = Undefined_64(state_);
    ca_.Goto(&block2, tmp0, tmp1);
  }

  if (block2.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block2, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 162);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label__X);
  }

    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

compiler::TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1410(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 458);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 459);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp0, tmp0);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block5, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 460);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp8}, compiler::TNode<Smi>{tmp9});
    ca_.Goto(&block1, tmp5, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 462);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 463);
    ca_.Goto(&block1, tmp11, ca_.UncheckedCast<HeapObject>(tmp12));
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block1, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 472);
    ca_.Goto(&block6, tmp13, tmp14);
  }

    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    ca_.Bind(&block6, &tmp15, &tmp16);
  return compiler::TNode<Object>{tmp16};
}

compiler::TNode<Smi> ExampleGenericOverload5ATSmi_1411(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 524);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp0}, compiler::TNode<Smi>{tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 531);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<Smi> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

compiler::TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject_1412(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 521);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 532);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<Object>{tmp4};
}

compiler::TNode<BoolT> Is7JSArray5ATSmi_1413(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi, JSArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2801);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast7JSArray_1383(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block1, tmp10, tmp11, tmp12);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<JSArray> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2802);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block1, tmp13, tmp14, tmp16);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 629);
    ca_.Goto(&block6, tmp17, tmp18, tmp19);
  }

    compiler::TNode<Context> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<BoolT> tmp22;
    ca_.Bind(&block6, &tmp20, &tmp21, &tmp22);
  return compiler::TNode<BoolT>{tmp22};
}

void Swap5ATSmi_1416(compiler::CodeAssemblerState* state_, TorqueStructReference5ATSmi p_a, TorqueStructReference5ATSmi p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, IntPtrT, HeapObject, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, IntPtrT, HeapObject, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, IntPtrT, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a.object, p_a.offset, p_b.object, p_b.offset);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 828);
    compiler::TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 829);
    compiler::TNode<Smi>tmp5 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp1}, tmp5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 830);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp3}, tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 827);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 839);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    ca_.Bind(&block1, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9);
  }

    compiler::TNode<HeapObject> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13);
}

TorqueStructTestTuple5ATSmi8ATintptr TupleSwap8ATintptr5ATSmi_1417(compiler::CodeAssemblerState* state_, TorqueStructTestTuple8ATintptr5ATSmi p_tuple) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_tuple.fst, p_tuple.snd);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 994);
    ca_.Goto(&block1, tmp0, tmp1, tmp1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    ca_.Bind(&block1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1001);
    ca_.Goto(&block2, tmp2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9);
  return TorqueStructTestTuple5ATSmi8ATintptr{compiler::TNode<Smi>{tmp8}, compiler::TNode<IntPtrT>{tmp9}};
}

}  // namespace internal
}  // namespace v8

