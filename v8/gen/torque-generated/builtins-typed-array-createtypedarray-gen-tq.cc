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

compiler::TNode<UintPtrT> TypedArrayInitialize_290(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_initialize, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<Smi> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::TNode<JSReceiver> p_bufferConstructor) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Int32T, Smi, Smi, UintPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, Object, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, Object, Object, JSArrayBuffer> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, Object, JSArrayBuffer> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_typedArray, p_length, p_elementsInfo.sizeLog2, p_elementsInfo.kind, p_bufferConstructor);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    compiler::TNode<Int32T> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    compiler::TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<UintPtrT>(Convert9ATuintptr13ATPositiveSmi_164(state_, compiler::TNode<Smi>{tmp2}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp6}, compiler::TNode<UintPtrT>{tmp3}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp7}, compiler::TNode<UintPtrT>{tmp3}));
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp8}, compiler::TNode<UintPtrT>{tmp6}));
    ca_.Branch(tmp9, &block5, &block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp3, tmp4, tmp2, tmp2, tmp6, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<UintPtrT> tmp13;
    compiler::TNode<Int32T> tmp14;
    compiler::TNode<JSReceiver> tmp15;
    compiler::TNode<UintPtrT> tmp16;
    compiler::TNode<Int32T> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<UintPtrT> tmp20;
    compiler::TNode<UintPtrT> tmp21;
    ca_.Bind(&block5, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block3, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSTypedArray> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<UintPtrT> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<UintPtrT> tmp28;
    compiler::TNode<Int32T> tmp29;
    compiler::TNode<Smi> tmp30;
    compiler::TNode<Smi> tmp31;
    compiler::TNode<UintPtrT> tmp32;
    compiler::TNode<UintPtrT> tmp33;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block4, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp33);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<JSTypedArray> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<UintPtrT> tmp37;
    compiler::TNode<Int32T> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<UintPtrT> tmp40;
    compiler::TNode<Int32T> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<UintPtrT> tmp44;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 31);
    ca_.Goto(&block2, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp44);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<JSTypedArray> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<UintPtrT> tmp48;
    compiler::TNode<Int32T> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    ca_.Bind(&block3, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 32);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp45}, MessageTemplate::kInvalidArrayBufferLength);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSTypedArray> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<UintPtrT> tmp54;
    compiler::TNode<Int32T> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<UintPtrT> tmp57;
    ca_.Bind(&block2, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 33);
    compiler::TNode<Number> tmp58;
    USE(tmp58);
    tmp58 = ca_.UncheckedCast<Number>(Convert20UT5ATSmi10HeapNumber9ATuintptr_178(state_, compiler::TNode<UintPtrT>{tmp57}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 34);
    compiler::TNode<JSReceiver> tmp59;
    USE(tmp59);
    tmp59 = ca_.UncheckedCast<JSReceiver>(GetArrayBufferFunction_199(state_, compiler::TNode<Context>{tmp51}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 37);
    compiler::TNode<BoolT> tmp60;
    USE(tmp60);
    tmp60 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<HeapObject>{tmp56}, compiler::TNode<HeapObject>{tmp59}));
    ca_.Branch(tmp60, &block11, &block12, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<JSTypedArray> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<UintPtrT> tmp64;
    compiler::TNode<Int32T> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<UintPtrT> tmp67;
    compiler::TNode<Number> tmp68;
    compiler::TNode<JSReceiver> tmp69;
    ca_.Bind(&block11, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 39);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 38);
    compiler::TNode<JSReceiver> tmp70;
    USE(tmp70);
    tmp70 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).ConstructWithTarget(compiler::TNode<Context>{tmp61}, compiler::TNode<JSReceiver>{tmp69}, compiler::TNode<JSReceiver>{tmp66}, compiler::TNode<Object>{tmp68}));
    ca_.Goto(&block8, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp71;
    compiler::TNode<JSTypedArray> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<UintPtrT> tmp74;
    compiler::TNode<Int32T> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<UintPtrT> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    ca_.Bind(&block12, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 42);
    compiler::TNode<UintPtrT> tmp80;
    USE(tmp80);
    tmp80 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, V8_TYPED_ARRAY_MAX_SIZE_IN_HEAP));
    compiler::TNode<BoolT> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).UintPtrGreaterThan(compiler::TNode<UintPtrT>{tmp77}, compiler::TNode<UintPtrT>{tmp80}));
    ca_.Branch(tmp81, &block13, &block14, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<JSTypedArray> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<UintPtrT> tmp85;
    compiler::TNode<Int32T> tmp86;
    compiler::TNode<JSReceiver> tmp87;
    compiler::TNode<UintPtrT> tmp88;
    compiler::TNode<Number> tmp89;
    compiler::TNode<JSReceiver> tmp90;
    ca_.Bind(&block13, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.Goto(&block10, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp91;
    compiler::TNode<JSTypedArray> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<UintPtrT> tmp94;
    compiler::TNode<Int32T> tmp95;
    compiler::TNode<JSReceiver> tmp96;
    compiler::TNode<UintPtrT> tmp97;
    compiler::TNode<Number> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    ca_.Bind(&block14, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 44);
    compiler::TNode<JSArrayBuffer> tmp100;
    USE(tmp100);
    tmp100 = ca_.UncheckedCast<JSArrayBuffer>(TypedArrayBuiltinsAssembler(state_).AllocateEmptyOnHeapBuffer(compiler::TNode<Context>{tmp91}, compiler::TNode<JSTypedArray>{tmp92}, compiler::TNode<UintPtrT>{tmp97}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 46);
    if ((p_initialize)) {
      ca_.Goto(&block15, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99);
    } else {
      ca_.Goto(&block16, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99);
    }
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp101;
    compiler::TNode<JSTypedArray> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<UintPtrT> tmp104;
    compiler::TNode<Int32T> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<UintPtrT> tmp107;
    compiler::TNode<Number> tmp108;
    compiler::TNode<JSReceiver> tmp109;
    ca_.Bind(&block15, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 47);
    compiler::TNode<RawPtrT> tmp110;
    USE(tmp110);
    tmp110 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp102}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 48);
    compiler::TNode<IntPtrT> tmp111;
    USE(tmp111);
    tmp111 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    TypedArrayBuiltinsAssembler(state_).CallCMemset(compiler::TNode<RawPtrT>{tmp110}, compiler::TNode<IntPtrT>{tmp111}, compiler::TNode<UintPtrT>{tmp107});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 46);
    ca_.Goto(&block17, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp112;
    compiler::TNode<JSTypedArray> tmp113;
    compiler::TNode<Smi> tmp114;
    compiler::TNode<UintPtrT> tmp115;
    compiler::TNode<Int32T> tmp116;
    compiler::TNode<JSReceiver> tmp117;
    compiler::TNode<UintPtrT> tmp118;
    compiler::TNode<Number> tmp119;
    compiler::TNode<JSReceiver> tmp120;
    ca_.Bind(&block16, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.Goto(&block17, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp121;
    compiler::TNode<JSTypedArray> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<UintPtrT> tmp124;
    compiler::TNode<Int32T> tmp125;
    compiler::TNode<JSReceiver> tmp126;
    compiler::TNode<UintPtrT> tmp127;
    compiler::TNode<Number> tmp128;
    compiler::TNode<JSReceiver> tmp129;
    ca_.Bind(&block17, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 51);
    ca_.Goto(&block9, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp130;
    compiler::TNode<JSTypedArray> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<UintPtrT> tmp133;
    compiler::TNode<Int32T> tmp134;
    compiler::TNode<JSReceiver> tmp135;
    compiler::TNode<UintPtrT> tmp136;
    compiler::TNode<Number> tmp137;
    compiler::TNode<JSReceiver> tmp138;
    ca_.Bind(&block10, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 52);
    if ((p_initialize)) {
      ca_.Goto(&block18, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138);
    } else {
      ca_.Goto(&block19, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138);
    }
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp139;
    compiler::TNode<JSTypedArray> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<UintPtrT> tmp142;
    compiler::TNode<Int32T> tmp143;
    compiler::TNode<JSReceiver> tmp144;
    compiler::TNode<UintPtrT> tmp145;
    compiler::TNode<Number> tmp146;
    compiler::TNode<JSReceiver> tmp147;
    ca_.Bind(&block18, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 53);
    compiler::TNode<JSReceiver> tmp148;
    USE(tmp148);
    tmp148 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).Construct(compiler::TNode<Context>{tmp139}, compiler::TNode<JSReceiver>{tmp147}, compiler::TNode<Object>{tmp146}));
    ca_.Goto(&block8, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp149;
    compiler::TNode<JSTypedArray> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<UintPtrT> tmp152;
    compiler::TNode<Int32T> tmp153;
    compiler::TNode<JSReceiver> tmp154;
    compiler::TNode<UintPtrT> tmp155;
    compiler::TNode<Number> tmp156;
    compiler::TNode<JSReceiver> tmp157;
    ca_.Bind(&block19, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 56);
    compiler::TNode<JSFunction> tmp158;
    USE(tmp158);
    tmp158 = ca_.UncheckedCast<JSFunction>(GetArrayBufferNoInitFunction_200(state_, compiler::TNode<Context>{tmp149}));
    compiler::TNode<Oddball> tmp159;
    USE(tmp159);
    tmp159 = Undefined_70(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 55);
    compiler::TNode<Object> tmp160;
    USE(tmp160);
    tmp160 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp149}, compiler::TNode<JSReceiver>{tmp158}, compiler::TNode<Object>{tmp159}, compiler::TNode<Object>{tmp156}));
    ca_.Goto(&block8, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp160);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp161;
    compiler::TNode<JSTypedArray> tmp162;
    compiler::TNode<Smi> tmp163;
    compiler::TNode<UintPtrT> tmp164;
    compiler::TNode<Int32T> tmp165;
    compiler::TNode<JSReceiver> tmp166;
    compiler::TNode<UintPtrT> tmp167;
    compiler::TNode<Number> tmp168;
    compiler::TNode<JSReceiver> tmp169;
    ca_.Bind(&block9, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 59);
    ca_.Goto(&block7, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp170;
    compiler::TNode<JSTypedArray> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<UintPtrT> tmp173;
    compiler::TNode<Int32T> tmp174;
    compiler::TNode<JSReceiver> tmp175;
    compiler::TNode<UintPtrT> tmp176;
    compiler::TNode<Number> tmp177;
    compiler::TNode<JSReceiver> tmp178;
    compiler::TNode<Object> tmp179;
    ca_.Bind(&block8, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 60);
    compiler::TNode<JSArrayBuffer> tmp180;
    USE(tmp180);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp180 = Cast13JSArrayBuffer_1228(state_, compiler::TNode<Context>{tmp170}, compiler::TNode<Object>{tmp179}, &label0);
    ca_.Goto(&block23, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp179, tmp180);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block24, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp179);
    }
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp181;
    compiler::TNode<JSTypedArray> tmp182;
    compiler::TNode<Smi> tmp183;
    compiler::TNode<UintPtrT> tmp184;
    compiler::TNode<Int32T> tmp185;
    compiler::TNode<JSReceiver> tmp186;
    compiler::TNode<UintPtrT> tmp187;
    compiler::TNode<Number> tmp188;
    compiler::TNode<JSReceiver> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<Object> tmp191;
    ca_.Bind(&block24, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.Goto(&block22, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp192;
    compiler::TNode<JSTypedArray> tmp193;
    compiler::TNode<Smi> tmp194;
    compiler::TNode<UintPtrT> tmp195;
    compiler::TNode<Int32T> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    compiler::TNode<UintPtrT> tmp198;
    compiler::TNode<Number> tmp199;
    compiler::TNode<JSReceiver> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<Object> tmp202;
    compiler::TNode<JSArrayBuffer> tmp203;
    ca_.Bind(&block23, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    ca_.Goto(&block21, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp203);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp204;
    compiler::TNode<JSTypedArray> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<UintPtrT> tmp207;
    compiler::TNode<Int32T> tmp208;
    compiler::TNode<JSReceiver> tmp209;
    compiler::TNode<UintPtrT> tmp210;
    compiler::TNode<Number> tmp211;
    compiler::TNode<JSReceiver> tmp212;
    compiler::TNode<Object> tmp213;
    ca_.Bind(&block22, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp214;
    compiler::TNode<JSTypedArray> tmp215;
    compiler::TNode<Smi> tmp216;
    compiler::TNode<UintPtrT> tmp217;
    compiler::TNode<Int32T> tmp218;
    compiler::TNode<JSReceiver> tmp219;
    compiler::TNode<UintPtrT> tmp220;
    compiler::TNode<Number> tmp221;
    compiler::TNode<JSReceiver> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<JSArrayBuffer> tmp224;
    ca_.Bind(&block21, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 61);
    compiler::TNode<UintPtrT> tmp225;
    USE(tmp225);
    tmp225 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 0));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 62);
    _method_JSTypedArray_AttachOffHeapBuffer(state_, compiler::TNode<JSTypedArray>{tmp215}, compiler::TNode<JSArrayBuffer>{tmp224}, compiler::TNode<UintPtrT>{tmp225});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 59);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 36);
    ca_.Goto(&block7, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp226;
    compiler::TNode<JSTypedArray> tmp227;
    compiler::TNode<Smi> tmp228;
    compiler::TNode<UintPtrT> tmp229;
    compiler::TNode<Int32T> tmp230;
    compiler::TNode<JSReceiver> tmp231;
    compiler::TNode<UintPtrT> tmp232;
    compiler::TNode<Number> tmp233;
    compiler::TNode<JSReceiver> tmp234;
    ca_.Bind(&block7, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 65);
    compiler::TNode<UintPtrT> tmp235;
    USE(tmp235);
    tmp235 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 0));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 67);
    compiler::TNode<UintPtrT> tmp236;
    USE(tmp236);
    tmp236 = ca_.UncheckedCast<UintPtrT>(Convert9ATuintptr13ATPositiveSmi_164(state_, compiler::TNode<Smi>{tmp228}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 66);
    TypedArrayBuiltinsAssembler(state_).SetupTypedArray(compiler::TNode<JSTypedArray>{tmp227}, compiler::TNode<UintPtrT>{tmp236}, compiler::TNode<UintPtrT>{tmp235}, compiler::TNode<UintPtrT>{tmp232});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 69);
    ca_.Goto(&block1, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp237;
    compiler::TNode<JSTypedArray> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<UintPtrT> tmp240;
    compiler::TNode<Int32T> tmp241;
    compiler::TNode<JSReceiver> tmp242;
    compiler::TNode<UintPtrT> tmp243;
    ca_.Bind(&block1, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 27);
    ca_.Goto(&block25, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243);
  }

    compiler::TNode<Context> tmp244;
    compiler::TNode<JSTypedArray> tmp245;
    compiler::TNode<Smi> tmp246;
    compiler::TNode<UintPtrT> tmp247;
    compiler::TNode<Int32T> tmp248;
    compiler::TNode<JSReceiver> tmp249;
    compiler::TNode<UintPtrT> tmp250;
    ca_.Bind(&block25, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250);
  return compiler::TNode<UintPtrT>{tmp250};
}

void ConstructByLength_291(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, UintPtrT, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, UintPtrT, Int32T, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, UintPtrT, Int32T, Number, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, UintPtrT, Int32T, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, UintPtrT, Int32T, Number, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, UintPtrT, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, UintPtrT, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_typedArray, p_length, p_elementsInfo.sizeLog2, p_elementsInfo.kind);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    compiler::TNode<Int32T> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 78);
    compiler::TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 77);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 83);
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast13ATPositiveSmi_85(state_, compiler::TNode<Object>{tmp5}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp5);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<UintPtrT> tmp10;
    compiler::TNode<Int32T> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<JSTypedArray> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<UintPtrT> tmp17;
    compiler::TNode<Int32T> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Smi> tmp21;
    ca_.Bind(&block4, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block2, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSTypedArray> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<UintPtrT> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Number> tmp27;
    ca_.Bind(&block3, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 84);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp22}, MessageTemplate::kInvalidTypedArrayLength, compiler::TNode<Object>{tmp24});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<JSTypedArray> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<UintPtrT> tmp31;
    compiler::TNode<Int32T> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Smi> tmp34;
    ca_.Bind(&block2, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 83);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 85);
    compiler::TNode<JSReceiver> tmp35;
    USE(tmp35);
    tmp35 = ca_.UncheckedCast<JSReceiver>(GetArrayBufferFunction_199(state_, compiler::TNode<Context>{tmp28}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 88);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 89);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 87);
    compiler::TNode<UintPtrT> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<UintPtrT>(TypedArrayInitialize_290(state_, compiler::TNode<Context>{tmp28}, true, compiler::TNode<JSTypedArray>{tmp29}, compiler::TNode<Smi>{tmp34}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<Int32T>{tmp32}}, compiler::TNode<JSReceiver>{tmp35}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 76);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 74);
    ca_.Goto(&block1, tmp28, tmp29, tmp30, tmp31, tmp32);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<JSTypedArray> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<UintPtrT> tmp40;
    compiler::TNode<Int32T> tmp41;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.Goto(&block6, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

    compiler::TNode<Context> tmp42;
    compiler::TNode<JSTypedArray> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<UintPtrT> tmp45;
    compiler::TNode<Int32T> tmp46;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
}

void ConstructByArrayLike_292(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<HeapObject> p_arrayLike, compiler::TNode<Object> p_initialLength, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::TNode<JSReceiver> p_bufferConstructor) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, HeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, HeapObject, JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, JSTypedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, JSTypedArray> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, JSTypedArray> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, JSTypedArray> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT, JSTypedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, UintPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, HeapObject, Object, UintPtrT, Int32T, JSReceiver> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_typedArray, p_arrayLike, p_initialLength, p_elementsInfo.sizeLog2, p_elementsInfo.kind, p_bufferConstructor);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<UintPtrT> tmp4;
    compiler::TNode<Int32T> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 99);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = CodeStubAssembler(state_).ToSmiLength(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp3, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp3);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSTypedArray> tmp9;
    compiler::TNode<HeapObject> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<UintPtrT> tmp12;
    compiler::TNode<Int32T> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<Object> tmp15;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    compiler::TNode<HeapObject> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<UintPtrT> tmp20;
    compiler::TNode<Int32T> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block2, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp24);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<JSTypedArray> tmp26;
    compiler::TNode<HeapObject> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<UintPtrT> tmp29;
    compiler::TNode<Int32T> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    ca_.Bind(&block3, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 100);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp25}, MessageTemplate::kInvalidTypedArrayLength, compiler::TNode<Object>{tmp28});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<JSTypedArray> tmp33;
    compiler::TNode<HeapObject> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<UintPtrT> tmp36;
    compiler::TNode<Int32T> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<Smi> tmp39;
    ca_.Bind(&block2, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 99);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 103);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 102);
    compiler::TNode<UintPtrT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<UintPtrT>(TypedArrayInitialize_290(state_, compiler::TNode<Context>{tmp32}, false, compiler::TNode<JSTypedArray>{tmp33}, compiler::TNode<Smi>{tmp39}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp36}, compiler::TNode<Int32T>{tmp37}}, compiler::TNode<JSReceiver>{tmp38}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 106);
    compiler::TNode<JSTypedArray> tmp41;
    USE(tmp41);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp41 = Cast12JSTypedArray_95(state_, compiler::TNode<HeapObject>{tmp34}, &label0);
    ca_.Goto(&block8, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp34, tmp41);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp34);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<JSTypedArray> tmp43;
    compiler::TNode<HeapObject> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<UintPtrT> tmp46;
    compiler::TNode<Int32T> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<UintPtrT> tmp50;
    compiler::TNode<HeapObject> tmp51;
    ca_.Bind(&block9, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<JSTypedArray> tmp53;
    compiler::TNode<HeapObject> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<UintPtrT> tmp56;
    compiler::TNode<Int32T> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<UintPtrT> tmp60;
    compiler::TNode<HeapObject> tmp61;
    compiler::TNode<JSTypedArray> tmp62;
    ca_.Bind(&block8, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 108);
    compiler::TNode<IntPtrT> tmp63 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp63);
    compiler::TNode<JSArrayBuffer>tmp64 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp62, tmp63});
    compiler::TNode<BoolT> tmp65;
    USE(tmp65);
    tmp65 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp64}));
    ca_.Branch(tmp65, &block10, &block11, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp62);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<JSTypedArray> tmp67;
    compiler::TNode<HeapObject> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<UintPtrT> tmp70;
    compiler::TNode<Int32T> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<UintPtrT> tmp74;
    compiler::TNode<JSTypedArray> tmp75;
    ca_.Bind(&block10, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 109);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp66}, MessageTemplate::kDetachedOperation, "Construct");
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<JSTypedArray> tmp77;
    compiler::TNode<HeapObject> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<UintPtrT> tmp80;
    compiler::TNode<Int32T> tmp81;
    compiler::TNode<JSReceiver> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<UintPtrT> tmp84;
    compiler::TNode<JSTypedArray> tmp85;
    ca_.Bind(&block11, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 111);
    compiler::TNode<Int32T> tmp86;
    USE(tmp86);
    tmp86 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp85}));
    compiler::TNode<BoolT> tmp87;
    USE(tmp87);
    tmp87 = ca_.UncheckedCast<BoolT>(ElementsKindNotEqual_78(state_, compiler::TNode<Int32T>{tmp86}, compiler::TNode<Int32T>{tmp81}));
    ca_.Branch(tmp87, &block13, &block14, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<JSTypedArray> tmp89;
    compiler::TNode<HeapObject> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<UintPtrT> tmp92;
    compiler::TNode<Int32T> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<UintPtrT> tmp96;
    compiler::TNode<JSTypedArray> tmp97;
    ca_.Bind(&block13, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 112);
    ca_.Goto(&block7, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<JSTypedArray> tmp99;
    compiler::TNode<HeapObject> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<UintPtrT> tmp102;
    compiler::TNode<Int32T> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<UintPtrT> tmp106;
    compiler::TNode<JSTypedArray> tmp107;
    ca_.Bind(&block14, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 114);
    compiler::TNode<Smi> tmp108;
    USE(tmp108);
    tmp108 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    compiler::TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp105}, compiler::TNode<Smi>{tmp108}));
    ca_.Branch(tmp109, &block16, &block17, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<JSTypedArray> tmp111;
    compiler::TNode<HeapObject> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<UintPtrT> tmp114;
    compiler::TNode<Int32T> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<UintPtrT> tmp118;
    compiler::TNode<JSTypedArray> tmp119;
    ca_.Bind(&block16, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 116);
    compiler::TNode<RawPtrT> tmp120;
    USE(tmp120);
    tmp120 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp111}));
    compiler::TNode<RawPtrT> tmp121;
    USE(tmp121);
    tmp121 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp119}));
    TypedArrayBuiltinsAssembler(state_).CallCMemcpy(compiler::TNode<RawPtrT>{tmp120}, compiler::TNode<RawPtrT>{tmp121}, compiler::TNode<UintPtrT>{tmp118});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 114);
    ca_.Goto(&block17, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp122;
    compiler::TNode<JSTypedArray> tmp123;
    compiler::TNode<HeapObject> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<UintPtrT> tmp126;
    compiler::TNode<Int32T> tmp127;
    compiler::TNode<JSReceiver> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<UintPtrT> tmp130;
    compiler::TNode<JSTypedArray> tmp131;
    ca_.Bind(&block17, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 111);
    ca_.Goto(&block15, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp132;
    compiler::TNode<JSTypedArray> tmp133;
    compiler::TNode<HeapObject> tmp134;
    compiler::TNode<Object> tmp135;
    compiler::TNode<UintPtrT> tmp136;
    compiler::TNode<Int32T> tmp137;
    compiler::TNode<JSReceiver> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<UintPtrT> tmp140;
    compiler::TNode<JSTypedArray> tmp141;
    ca_.Bind(&block15, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 108);
    ca_.Goto(&block12, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp142;
    compiler::TNode<JSTypedArray> tmp143;
    compiler::TNode<HeapObject> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<UintPtrT> tmp146;
    compiler::TNode<Int32T> tmp147;
    compiler::TNode<JSReceiver> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<UintPtrT> tmp150;
    compiler::TNode<JSTypedArray> tmp151;
    ca_.Bind(&block12, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 105);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 119);
    ca_.Goto(&block6, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp152;
    compiler::TNode<JSTypedArray> tmp153;
    compiler::TNode<HeapObject> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<UintPtrT> tmp156;
    compiler::TNode<Int32T> tmp157;
    compiler::TNode<JSReceiver> tmp158;
    compiler::TNode<Smi> tmp159;
    compiler::TNode<UintPtrT> tmp160;
    ca_.Bind(&block7, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 120);
    compiler::TNode<Smi> tmp161;
    USE(tmp161);
    tmp161 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    compiler::TNode<BoolT> tmp162;
    USE(tmp162);
    tmp162 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp159}, compiler::TNode<Smi>{tmp161}));
    ca_.Branch(tmp162, &block18, &block19, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp163;
    compiler::TNode<JSTypedArray> tmp164;
    compiler::TNode<HeapObject> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<UintPtrT> tmp167;
    compiler::TNode<Int32T> tmp168;
    compiler::TNode<JSReceiver> tmp169;
    compiler::TNode<Smi> tmp170;
    compiler::TNode<UintPtrT> tmp171;
    ca_.Bind(&block18, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 121);
    CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArrayCopyElements, tmp163, tmp164, tmp165, tmp170);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 120);
    ca_.Goto(&block19, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp173;
    compiler::TNode<JSTypedArray> tmp174;
    compiler::TNode<HeapObject> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<UintPtrT> tmp177;
    compiler::TNode<Int32T> tmp178;
    compiler::TNode<JSReceiver> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<UintPtrT> tmp181;
    ca_.Bind(&block19, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 105);
    ca_.Goto(&block6, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp182;
    compiler::TNode<JSTypedArray> tmp183;
    compiler::TNode<HeapObject> tmp184;
    compiler::TNode<Object> tmp185;
    compiler::TNode<UintPtrT> tmp186;
    compiler::TNode<Int32T> tmp187;
    compiler::TNode<JSReceiver> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<UintPtrT> tmp190;
    ca_.Bind(&block6, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 97);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 94);
    ca_.Goto(&block1, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp191;
    compiler::TNode<JSTypedArray> tmp192;
    compiler::TNode<HeapObject> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<UintPtrT> tmp195;
    compiler::TNode<Int32T> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    ca_.Bind(&block1, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197);
    ca_.Goto(&block20, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197);
  }

    compiler::TNode<Context> tmp198;
    compiler::TNode<JSTypedArray> tmp199;
    compiler::TNode<HeapObject> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<UintPtrT> tmp202;
    compiler::TNode<Int32T> tmp203;
    compiler::TNode<JSReceiver> tmp204;
    ca_.Bind(&block20, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204);
}

void ConstructByIterable_293(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<JSReceiver> p_iterable, compiler::TNode<JSReceiver> p_iteratorFn, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSReceiver, UintPtrT, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_typedArray, p_iterable, p_iteratorFn, p_elementsInfo.sizeLog2, p_elementsInfo.kind);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    compiler::TNode<UintPtrT> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 133);
    compiler::TNode<JSArray> tmp6;
    tmp6 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kIterableToListMayPreserveHoles, tmp0, tmp2, tmp3));
    USE(tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 132);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 134);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp7);
    compiler::TNode<Number>tmp8 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp6, tmp7});
    compiler::TNode<JSReceiver> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<JSReceiver>(GetArrayBufferFunction_199(state_, compiler::TNode<Context>{tmp0}));
    ca_.Goto(&block1, tmp6, tmp8, tmp9);
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<JSReceiver> tmp12;
    ca_.Bind(&block1, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 128);
    *label_IfConstructByArrayLike_parameter_2 = tmp12;
    *label_IfConstructByArrayLike_parameter_1 = tmp11;
    *label_IfConstructByArrayLike_parameter_0 = tmp10;
    ca_.Goto(label_IfConstructByArrayLike);
  }
}

void ConstructByTypedArray_294(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<JSTypedArray> p_srcTypedArray, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, UintPtrT, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, UintPtrT, Int32T, JSReceiver, JSArrayBuffer> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, UintPtrT, Int32T, JSReceiver, JSArrayBuffer> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, UintPtrT, Int32T, JSReceiver, JSArrayBuffer> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, UintPtrT, Int32T, JSReceiver, JSArrayBuffer, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, UintPtrT, Int32T, JSReceiver, JSArrayBuffer, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, UintPtrT, Int32T, JSReceiver, JSArrayBuffer, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, UintPtrT, Int32T, JSReceiver, JSArrayBuffer, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, UintPtrT, Int32T, JSReceiver, JSArrayBuffer, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_typedArray, p_srcTypedArray, p_elementsInfo.sizeLog2, p_elementsInfo.kind);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSTypedArray> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    compiler::TNode<Int32T> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 143);
    compiler::TNode<JSReceiver> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<JSReceiver>(GetArrayBufferFunction_199(state_, compiler::TNode<Context>{tmp0}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 144);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp6);
    compiler::TNode<JSArrayBuffer>tmp7 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp2, tmp6});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 148);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp7}));
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSTypedArray> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<UintPtrT> tmp12;
    compiler::TNode<Int32T> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<JSArrayBuffer> tmp15;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block5, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    compiler::TNode<UintPtrT> tmp19;
    compiler::TNode<Int32T> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<JSArrayBuffer> tmp22;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    compiler::TNode<IntPtrT> tmp23 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp23);
    compiler::TNode<UintPtrT>tmp24 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp18, tmp23});
    compiler::TNode<Number> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Number>(Convert20UT5ATSmi10HeapNumber9ATuintptr_178(state_, compiler::TNode<UintPtrT>{tmp24}));
    ca_.Goto(&block4, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp25);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<JSTypedArray> tmp27;
    compiler::TNode<JSTypedArray> tmp28;
    compiler::TNode<UintPtrT> tmp29;
    compiler::TNode<Int32T> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<JSArrayBuffer> tmp32;
    ca_.Bind(&block5, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    compiler::TNode<Number> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<Number>(FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_137(state_, 0));
    ca_.Goto(&block4, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<JSTypedArray> tmp35;
    compiler::TNode<JSTypedArray> tmp36;
    compiler::TNode<UintPtrT> tmp37;
    compiler::TNode<Int32T> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<JSArrayBuffer> tmp40;
    compiler::TNode<Number> tmp41;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 153);
    compiler::TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<BoolT>(TypedArrayBuiltinsAssembler(state_).IsSharedArrayBuffer(compiler::TNode<JSArrayBuffer>{tmp40}));
    compiler::TNode<BoolT> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp42}));
    ca_.Branch(tmp43, &block6, &block7, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<JSTypedArray> tmp45;
    compiler::TNode<JSTypedArray> tmp46;
    compiler::TNode<UintPtrT> tmp47;
    compiler::TNode<Int32T> tmp48;
    compiler::TNode<JSReceiver> tmp49;
    compiler::TNode<JSArrayBuffer> tmp50;
    compiler::TNode<Number> tmp51;
    ca_.Bind(&block6, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 154);
    compiler::TNode<JSReceiver> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).SpeciesConstructor(compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp50}, compiler::TNode<JSReceiver>{tmp49}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 156);
    compiler::TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp50}));
    ca_.Branch(tmp53, &block8, &block9, tmp44, tmp45, tmp46, tmp47, tmp48, tmp52, tmp50, tmp51);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<JSTypedArray> tmp55;
    compiler::TNode<JSTypedArray> tmp56;
    compiler::TNode<UintPtrT> tmp57;
    compiler::TNode<Int32T> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    compiler::TNode<JSArrayBuffer> tmp60;
    compiler::TNode<Number> tmp61;
    ca_.Bind(&block8, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Number> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Number>(FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_137(state_, 0));
    ca_.Goto(&block9, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSTypedArray> tmp64;
    compiler::TNode<JSTypedArray> tmp65;
    compiler::TNode<UintPtrT> tmp66;
    compiler::TNode<Int32T> tmp67;
    compiler::TNode<JSReceiver> tmp68;
    compiler::TNode<JSArrayBuffer> tmp69;
    compiler::TNode<Number> tmp70;
    ca_.Bind(&block9, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 153);
    ca_.Goto(&block7, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp71;
    compiler::TNode<JSTypedArray> tmp72;
    compiler::TNode<JSTypedArray> tmp73;
    compiler::TNode<UintPtrT> tmp74;
    compiler::TNode<Int32T> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<JSArrayBuffer> tmp77;
    compiler::TNode<Number> tmp78;
    ca_.Bind(&block7, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 158);
    ca_.Goto(&block1, tmp73, tmp78, tmp76);
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<JSReceiver> tmp81;
    ca_.Bind(&block1, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 139);
    *label_IfConstructByArrayLike_parameter_2 = tmp81;
    *label_IfConstructByArrayLike_parameter_1 = tmp80;
    *label_IfConstructByArrayLike_parameter_0 = tmp79;
    ca_.Goto(label_IfConstructByArrayLike);
  }
}

void ConstructByArrayBuffer_295(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<Object> p_byteOffset, compiler::TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Number, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, BoolT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, Object, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, BoolT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T, String> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_typedArray, p_buffer, p_byteOffset, p_length, p_elementsInfo.sizeLog2, p_elementsInfo.kind);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSArrayBuffer> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    compiler::TNode<Int32T> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 167);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 0));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 168);
    compiler::TNode<Oddball> tmp8;
    USE(tmp8);
    tmp8 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp3}, compiler::TNode<HeapObject>{tmp8}));
    ca_.Branch(tmp9, &block10, &block11, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<JSArrayBuffer> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<UintPtrT> tmp15;
    compiler::TNode<Int32T> tmp16;
    compiler::TNode<UintPtrT> tmp17;
    ca_.Bind(&block10, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 171);
    compiler::TNode<Number> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp10}, compiler::TNode<Object>{tmp13}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 170);
    compiler::TNode<UintPtrT> tmp19;
    USE(tmp19);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp19 = CodeStubAssembler(state_).TryNumberToUintPtr(compiler::TNode<Number>{tmp18}, &label0);
    ca_.Goto(&block14, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
    }
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSTypedArray> tmp21;
    compiler::TNode<JSArrayBuffer> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<UintPtrT> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<UintPtrT> tmp27;
    compiler::TNode<Number> tmp28;
    ca_.Bind(&block15, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block13, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSTypedArray> tmp30;
    compiler::TNode<JSArrayBuffer> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<UintPtrT> tmp34;
    compiler::TNode<Int32T> tmp35;
    compiler::TNode<UintPtrT> tmp36;
    compiler::TNode<Number> tmp37;
    compiler::TNode<UintPtrT> tmp38;
    ca_.Bind(&block14, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block12, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp38);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<JSTypedArray> tmp40;
    compiler::TNode<JSArrayBuffer> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<UintPtrT> tmp44;
    compiler::TNode<Int32T> tmp45;
    compiler::TNode<UintPtrT> tmp46;
    ca_.Bind(&block13, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 172);
    ca_.Goto(&block3, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<JSTypedArray> tmp48;
    compiler::TNode<JSArrayBuffer> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<UintPtrT> tmp52;
    compiler::TNode<Int32T> tmp53;
    compiler::TNode<UintPtrT> tmp54;
    compiler::TNode<UintPtrT> tmp55;
    ca_.Bind(&block12, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 170);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 175);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 48);
    compiler::TNode<UintPtrT> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 1));
    compiler::TNode<UintPtrT> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp56}, compiler::TNode<UintPtrT>{tmp52}));
    compiler::TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 1));
    compiler::TNode<UintPtrT> tmp59;
    USE(tmp59);
    tmp59 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrSub(compiler::TNode<UintPtrT>{tmp57}, compiler::TNode<UintPtrT>{tmp58}));
    compiler::TNode<UintPtrT> tmp60;
    USE(tmp60);
    tmp60 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordAnd(compiler::TNode<UintPtrT>{tmp55}, compiler::TNode<UintPtrT>{tmp59}));
    compiler::TNode<UintPtrT> tmp61;
    USE(tmp61);
    tmp61 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 0));
    compiler::TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp60}, compiler::TNode<UintPtrT>{tmp61}));
    ca_.Goto(&block18, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55, tmp52, tmp53, tmp55, tmp55, tmp62);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSTypedArray> tmp64;
    compiler::TNode<JSArrayBuffer> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<UintPtrT> tmp68;
    compiler::TNode<Int32T> tmp69;
    compiler::TNode<UintPtrT> tmp70;
    compiler::TNode<UintPtrT> tmp71;
    compiler::TNode<Int32T> tmp72;
    compiler::TNode<UintPtrT> tmp73;
    compiler::TNode<UintPtrT> tmp74;
    compiler::TNode<BoolT> tmp75;
    ca_.Bind(&block18, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 175);
    ca_.Branch(tmp75, &block16, &block17, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<JSTypedArray> tmp77;
    compiler::TNode<JSArrayBuffer> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<UintPtrT> tmp81;
    compiler::TNode<Int32T> tmp82;
    compiler::TNode<UintPtrT> tmp83;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 176);
    compiler::TNode<String> tmp84;
    USE(tmp84);
    tmp84 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "start offset"));
    ca_.Goto(&block9, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp84);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<JSTypedArray> tmp86;
    compiler::TNode<JSArrayBuffer> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<UintPtrT> tmp90;
    compiler::TNode<Int32T> tmp91;
    compiler::TNode<UintPtrT> tmp92;
    ca_.Bind(&block17, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 168);
    ca_.Goto(&block11, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<JSTypedArray> tmp94;
    compiler::TNode<JSArrayBuffer> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<UintPtrT> tmp98;
    compiler::TNode<Int32T> tmp99;
    compiler::TNode<UintPtrT> tmp100;
    ca_.Bind(&block11, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 180);
    compiler::TNode<Smi> tmp101;
    USE(tmp101);
    tmp101 = ca_.UncheckedCast<Smi>(FromConstexpr13ATPositiveSmi17ATconstexpr_int31_132(state_, 0));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 181);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 183);
    compiler::TNode<Oddball> tmp102;
    USE(tmp102);
    tmp102 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp103;
    USE(tmp103);
    tmp103 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp97}, compiler::TNode<HeapObject>{tmp102}));
    ca_.Branch(tmp103, &block19, &block20, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, ca_.Uninitialized<UintPtrT>());
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp104;
    compiler::TNode<JSTypedArray> tmp105;
    compiler::TNode<JSArrayBuffer> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<UintPtrT> tmp109;
    compiler::TNode<Int32T> tmp110;
    compiler::TNode<UintPtrT> tmp111;
    compiler::TNode<Smi> tmp112;
    compiler::TNode<UintPtrT> tmp113;
    ca_.Bind(&block19, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 185);
    compiler::TNode<Smi> tmp114;
    USE(tmp114);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp114 = CodeStubAssembler(state_).ToSmiIndex(compiler::TNode<Context>{tmp104}, compiler::TNode<Object>{tmp108}, &label0);
    ca_.Goto(&block21, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp108, tmp114);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp108);
    }
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp115;
    compiler::TNode<JSTypedArray> tmp116;
    compiler::TNode<JSArrayBuffer> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<UintPtrT> tmp120;
    compiler::TNode<Int32T> tmp121;
    compiler::TNode<UintPtrT> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<UintPtrT> tmp124;
    compiler::TNode<Object> tmp125;
    ca_.Bind(&block22, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.Goto(&block5, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp126;
    compiler::TNode<JSTypedArray> tmp127;
    compiler::TNode<JSArrayBuffer> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<UintPtrT> tmp131;
    compiler::TNode<Int32T> tmp132;
    compiler::TNode<UintPtrT> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<UintPtrT> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<Smi> tmp137;
    ca_.Bind(&block21, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 183);
    ca_.Goto(&block20, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp137, tmp135);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp138;
    compiler::TNode<JSTypedArray> tmp139;
    compiler::TNode<JSArrayBuffer> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<UintPtrT> tmp143;
    compiler::TNode<Int32T> tmp144;
    compiler::TNode<UintPtrT> tmp145;
    compiler::TNode<Smi> tmp146;
    compiler::TNode<UintPtrT> tmp147;
    ca_.Bind(&block20, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 189);
    compiler::TNode<BoolT> tmp148;
    USE(tmp148);
    tmp148 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp140}));
    ca_.Branch(tmp148, &block23, &block24, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp149;
    compiler::TNode<JSTypedArray> tmp150;
    compiler::TNode<JSArrayBuffer> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<UintPtrT> tmp154;
    compiler::TNode<Int32T> tmp155;
    compiler::TNode<UintPtrT> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<UintPtrT> tmp158;
    ca_.Bind(&block23, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 190);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp149}, MessageTemplate::kDetachedOperation, "Construct");
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp159;
    compiler::TNode<JSTypedArray> tmp160;
    compiler::TNode<JSArrayBuffer> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<UintPtrT> tmp164;
    compiler::TNode<Int32T> tmp165;
    compiler::TNode<UintPtrT> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<UintPtrT> tmp168;
    ca_.Bind(&block24, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 194);
    compiler::TNode<IntPtrT> tmp169 = ca_.IntPtrConstant(JSArrayBuffer::kByteLengthOffset);
    USE(tmp169);
    compiler::TNode<UintPtrT>tmp170 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp161, tmp169});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 197);
    compiler::TNode<Oddball> tmp171;
    USE(tmp171);
    tmp171 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp172;
    USE(tmp172);
    tmp172 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp163}, compiler::TNode<HeapObject>{tmp171}));
    ca_.Branch(tmp172, &block25, &block26, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp170);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp173;
    compiler::TNode<JSTypedArray> tmp174;
    compiler::TNode<JSArrayBuffer> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<UintPtrT> tmp178;
    compiler::TNode<Int32T> tmp179;
    compiler::TNode<UintPtrT> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<UintPtrT> tmp182;
    compiler::TNode<UintPtrT> tmp183;
    ca_.Bind(&block25, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 200);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 48);
    compiler::TNode<UintPtrT> tmp184;
    USE(tmp184);
    tmp184 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 1));
    compiler::TNode<UintPtrT> tmp185;
    USE(tmp185);
    tmp185 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp184}, compiler::TNode<UintPtrT>{tmp178}));
    compiler::TNode<UintPtrT> tmp186;
    USE(tmp186);
    tmp186 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 1));
    compiler::TNode<UintPtrT> tmp187;
    USE(tmp187);
    tmp187 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrSub(compiler::TNode<UintPtrT>{tmp185}, compiler::TNode<UintPtrT>{tmp186}));
    compiler::TNode<UintPtrT> tmp188;
    USE(tmp188);
    tmp188 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordAnd(compiler::TNode<UintPtrT>{tmp183}, compiler::TNode<UintPtrT>{tmp187}));
    compiler::TNode<UintPtrT> tmp189;
    USE(tmp189);
    tmp189 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 0));
    compiler::TNode<BoolT> tmp190;
    USE(tmp190);
    tmp190 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp188}, compiler::TNode<UintPtrT>{tmp189}));
    ca_.Goto(&block30, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp178, tmp179, tmp183, tmp183, tmp190);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp191;
    compiler::TNode<JSTypedArray> tmp192;
    compiler::TNode<JSArrayBuffer> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<UintPtrT> tmp196;
    compiler::TNode<Int32T> tmp197;
    compiler::TNode<UintPtrT> tmp198;
    compiler::TNode<Smi> tmp199;
    compiler::TNode<UintPtrT> tmp200;
    compiler::TNode<UintPtrT> tmp201;
    compiler::TNode<UintPtrT> tmp202;
    compiler::TNode<Int32T> tmp203;
    compiler::TNode<UintPtrT> tmp204;
    compiler::TNode<UintPtrT> tmp205;
    compiler::TNode<BoolT> tmp206;
    ca_.Bind(&block30, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 200);
    ca_.Branch(tmp206, &block28, &block29, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp207;
    compiler::TNode<JSTypedArray> tmp208;
    compiler::TNode<JSArrayBuffer> tmp209;
    compiler::TNode<Object> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<UintPtrT> tmp212;
    compiler::TNode<Int32T> tmp213;
    compiler::TNode<UintPtrT> tmp214;
    compiler::TNode<Smi> tmp215;
    compiler::TNode<UintPtrT> tmp216;
    compiler::TNode<UintPtrT> tmp217;
    ca_.Bind(&block28, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 201);
    compiler::TNode<String> tmp218;
    USE(tmp218);
    tmp218 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "byte length"));
    ca_.Goto(&block9, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp218);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp219;
    compiler::TNode<JSTypedArray> tmp220;
    compiler::TNode<JSArrayBuffer> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<UintPtrT> tmp224;
    compiler::TNode<Int32T> tmp225;
    compiler::TNode<UintPtrT> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<UintPtrT> tmp228;
    compiler::TNode<UintPtrT> tmp229;
    ca_.Bind(&block29, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 206);
    compiler::TNode<BoolT> tmp230;
    USE(tmp230);
    tmp230 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp229}, compiler::TNode<UintPtrT>{tmp226}));
    ca_.Branch(tmp230, &block31, &block32, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp231;
    compiler::TNode<JSTypedArray> tmp232;
    compiler::TNode<JSArrayBuffer> tmp233;
    compiler::TNode<Object> tmp234;
    compiler::TNode<Object> tmp235;
    compiler::TNode<UintPtrT> tmp236;
    compiler::TNode<Int32T> tmp237;
    compiler::TNode<UintPtrT> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<UintPtrT> tmp240;
    compiler::TNode<UintPtrT> tmp241;
    ca_.Bind(&block31, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241);
    ca_.Goto(&block3, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp242;
    compiler::TNode<JSTypedArray> tmp243;
    compiler::TNode<JSArrayBuffer> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<UintPtrT> tmp247;
    compiler::TNode<Int32T> tmp248;
    compiler::TNode<UintPtrT> tmp249;
    compiler::TNode<Smi> tmp250;
    compiler::TNode<UintPtrT> tmp251;
    compiler::TNode<UintPtrT> tmp252;
    ca_.Bind(&block32, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 210);
    compiler::TNode<UintPtrT> tmp253;
    USE(tmp253);
    tmp253 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrSub(compiler::TNode<UintPtrT>{tmp252}, compiler::TNode<UintPtrT>{tmp249}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 211);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 37);
    compiler::TNode<UintPtrT> tmp254;
    USE(tmp254);
    tmp254 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp253}, compiler::TNode<UintPtrT>{tmp247}));
    compiler::TNode<Smi> tmp255;
    USE(tmp255);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp255 = Convert13ATPositiveSmi9ATuintptr_167(state_, compiler::TNode<UintPtrT>{tmp254}, &label0);
    ca_.Goto(&block34, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp253, tmp252, tmp247, tmp248, tmp253, tmp253, tmp254, tmp255);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block35, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp253, tmp252, tmp247, tmp248, tmp253, tmp253, tmp254);
    }
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp256;
    compiler::TNode<JSTypedArray> tmp257;
    compiler::TNode<JSArrayBuffer> tmp258;
    compiler::TNode<Object> tmp259;
    compiler::TNode<Object> tmp260;
    compiler::TNode<UintPtrT> tmp261;
    compiler::TNode<Int32T> tmp262;
    compiler::TNode<UintPtrT> tmp263;
    compiler::TNode<Smi> tmp264;
    compiler::TNode<UintPtrT> tmp265;
    compiler::TNode<UintPtrT> tmp266;
    compiler::TNode<UintPtrT> tmp267;
    compiler::TNode<Int32T> tmp268;
    compiler::TNode<UintPtrT> tmp269;
    compiler::TNode<UintPtrT> tmp270;
    compiler::TNode<UintPtrT> tmp271;
    ca_.Bind(&block35, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.Goto(&block3, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp272;
    compiler::TNode<JSTypedArray> tmp273;
    compiler::TNode<JSArrayBuffer> tmp274;
    compiler::TNode<Object> tmp275;
    compiler::TNode<Object> tmp276;
    compiler::TNode<UintPtrT> tmp277;
    compiler::TNode<Int32T> tmp278;
    compiler::TNode<UintPtrT> tmp279;
    compiler::TNode<Smi> tmp280;
    compiler::TNode<UintPtrT> tmp281;
    compiler::TNode<UintPtrT> tmp282;
    compiler::TNode<UintPtrT> tmp283;
    compiler::TNode<Int32T> tmp284;
    compiler::TNode<UintPtrT> tmp285;
    compiler::TNode<UintPtrT> tmp286;
    compiler::TNode<UintPtrT> tmp287;
    compiler::TNode<Smi> tmp288;
    ca_.Bind(&block34, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288);
    ca_.Goto(&block33, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp288);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp289;
    compiler::TNode<JSTypedArray> tmp290;
    compiler::TNode<JSArrayBuffer> tmp291;
    compiler::TNode<Object> tmp292;
    compiler::TNode<Object> tmp293;
    compiler::TNode<UintPtrT> tmp294;
    compiler::TNode<Int32T> tmp295;
    compiler::TNode<UintPtrT> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<UintPtrT> tmp298;
    compiler::TNode<UintPtrT> tmp299;
    compiler::TNode<UintPtrT> tmp300;
    compiler::TNode<Int32T> tmp301;
    compiler::TNode<UintPtrT> tmp302;
    compiler::TNode<UintPtrT> tmp303;
    compiler::TNode<Smi> tmp304;
    ca_.Bind(&block33, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 211);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 197);
    ca_.Goto(&block27, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp304, tmp298, tmp299);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp305;
    compiler::TNode<JSTypedArray> tmp306;
    compiler::TNode<JSArrayBuffer> tmp307;
    compiler::TNode<Object> tmp308;
    compiler::TNode<Object> tmp309;
    compiler::TNode<UintPtrT> tmp310;
    compiler::TNode<Int32T> tmp311;
    compiler::TNode<UintPtrT> tmp312;
    compiler::TNode<Smi> tmp313;
    compiler::TNode<UintPtrT> tmp314;
    compiler::TNode<UintPtrT> tmp315;
    ca_.Bind(&block26, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 217);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    compiler::TNode<UintPtrT> tmp316;
    USE(tmp316);
    tmp316 = ca_.UncheckedCast<UintPtrT>(Convert9ATuintptr13ATPositiveSmi_164(state_, compiler::TNode<Smi>{tmp313}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    compiler::TNode<UintPtrT> tmp317;
    USE(tmp317);
    tmp317 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp316}, compiler::TNode<UintPtrT>{tmp310}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    compiler::TNode<UintPtrT> tmp318;
    USE(tmp318);
    tmp318 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp317}, compiler::TNode<UintPtrT>{tmp310}));
    compiler::TNode<BoolT> tmp319;
    USE(tmp319);
    tmp319 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp318}, compiler::TNode<UintPtrT>{tmp316}));
    ca_.Branch(tmp319, &block37, &block38, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp310, tmp311, tmp313, tmp313, tmp316, tmp317);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp320;
    compiler::TNode<JSTypedArray> tmp321;
    compiler::TNode<JSArrayBuffer> tmp322;
    compiler::TNode<Object> tmp323;
    compiler::TNode<Object> tmp324;
    compiler::TNode<UintPtrT> tmp325;
    compiler::TNode<Int32T> tmp326;
    compiler::TNode<UintPtrT> tmp327;
    compiler::TNode<Smi> tmp328;
    compiler::TNode<UintPtrT> tmp329;
    compiler::TNode<UintPtrT> tmp330;
    compiler::TNode<UintPtrT> tmp331;
    compiler::TNode<Int32T> tmp332;
    compiler::TNode<Smi> tmp333;
    compiler::TNode<Smi> tmp334;
    compiler::TNode<UintPtrT> tmp335;
    compiler::TNode<UintPtrT> tmp336;
    ca_.Bind(&block37, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336);
    ca_.Goto(&block7, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp337;
    compiler::TNode<JSTypedArray> tmp338;
    compiler::TNode<JSArrayBuffer> tmp339;
    compiler::TNode<Object> tmp340;
    compiler::TNode<Object> tmp341;
    compiler::TNode<UintPtrT> tmp342;
    compiler::TNode<Int32T> tmp343;
    compiler::TNode<UintPtrT> tmp344;
    compiler::TNode<Smi> tmp345;
    compiler::TNode<UintPtrT> tmp346;
    compiler::TNode<UintPtrT> tmp347;
    compiler::TNode<UintPtrT> tmp348;
    compiler::TNode<Int32T> tmp349;
    compiler::TNode<Smi> tmp350;
    compiler::TNode<Smi> tmp351;
    compiler::TNode<UintPtrT> tmp352;
    compiler::TNode<UintPtrT> tmp353;
    ca_.Bind(&block38, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block36, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp353);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp354;
    compiler::TNode<JSTypedArray> tmp355;
    compiler::TNode<JSArrayBuffer> tmp356;
    compiler::TNode<Object> tmp357;
    compiler::TNode<Object> tmp358;
    compiler::TNode<UintPtrT> tmp359;
    compiler::TNode<Int32T> tmp360;
    compiler::TNode<UintPtrT> tmp361;
    compiler::TNode<Smi> tmp362;
    compiler::TNode<UintPtrT> tmp363;
    compiler::TNode<UintPtrT> tmp364;
    compiler::TNode<UintPtrT> tmp365;
    compiler::TNode<Int32T> tmp366;
    compiler::TNode<Smi> tmp367;
    compiler::TNode<Smi> tmp368;
    compiler::TNode<UintPtrT> tmp369;
    ca_.Bind(&block36, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 217);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 222);
    compiler::TNode<BoolT> tmp370;
    USE(tmp370);
    tmp370 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp364}, compiler::TNode<UintPtrT>{tmp369}));
    ca_.Branch(tmp370, &block39, &block41, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp369, tmp364);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp371;
    compiler::TNode<JSTypedArray> tmp372;
    compiler::TNode<JSArrayBuffer> tmp373;
    compiler::TNode<Object> tmp374;
    compiler::TNode<Object> tmp375;
    compiler::TNode<UintPtrT> tmp376;
    compiler::TNode<Int32T> tmp377;
    compiler::TNode<UintPtrT> tmp378;
    compiler::TNode<Smi> tmp379;
    compiler::TNode<UintPtrT> tmp380;
    compiler::TNode<UintPtrT> tmp381;
    ca_.Bind(&block41, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 223);
    compiler::TNode<UintPtrT> tmp382;
    USE(tmp382);
    tmp382 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrSub(compiler::TNode<UintPtrT>{tmp381}, compiler::TNode<UintPtrT>{tmp380}));
    compiler::TNode<BoolT> tmp383;
    USE(tmp383);
    tmp383 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).UintPtrGreaterThan(compiler::TNode<UintPtrT>{tmp378}, compiler::TNode<UintPtrT>{tmp382}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 222);
    ca_.Branch(tmp383, &block39, &block40, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp384;
    compiler::TNode<JSTypedArray> tmp385;
    compiler::TNode<JSArrayBuffer> tmp386;
    compiler::TNode<Object> tmp387;
    compiler::TNode<Object> tmp388;
    compiler::TNode<UintPtrT> tmp389;
    compiler::TNode<Int32T> tmp390;
    compiler::TNode<UintPtrT> tmp391;
    compiler::TNode<Smi> tmp392;
    compiler::TNode<UintPtrT> tmp393;
    compiler::TNode<UintPtrT> tmp394;
    ca_.Bind(&block39, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 224);
    ca_.Goto(&block5, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp395;
    compiler::TNode<JSTypedArray> tmp396;
    compiler::TNode<JSArrayBuffer> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<Object> tmp399;
    compiler::TNode<UintPtrT> tmp400;
    compiler::TNode<Int32T> tmp401;
    compiler::TNode<UintPtrT> tmp402;
    compiler::TNode<Smi> tmp403;
    compiler::TNode<UintPtrT> tmp404;
    compiler::TNode<UintPtrT> tmp405;
    ca_.Bind(&block40, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 197);
    ca_.Goto(&block27, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp406;
    compiler::TNode<JSTypedArray> tmp407;
    compiler::TNode<JSArrayBuffer> tmp408;
    compiler::TNode<Object> tmp409;
    compiler::TNode<Object> tmp410;
    compiler::TNode<UintPtrT> tmp411;
    compiler::TNode<Int32T> tmp412;
    compiler::TNode<UintPtrT> tmp413;
    compiler::TNode<Smi> tmp414;
    compiler::TNode<UintPtrT> tmp415;
    compiler::TNode<UintPtrT> tmp416;
    ca_.Bind(&block27, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 228);
    compiler::TNode<UintPtrT> tmp417;
    USE(tmp417);
    tmp417 = ca_.UncheckedCast<UintPtrT>(Convert9ATuintptr13ATPositiveSmi_164(state_, compiler::TNode<Smi>{tmp414}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 227);
    TypedArrayBuiltinsAssembler(state_).SetupTypedArray(compiler::TNode<JSTypedArray>{tmp407}, compiler::TNode<UintPtrT>{tmp417}, compiler::TNode<UintPtrT>{tmp413}, compiler::TNode<UintPtrT>{tmp415});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 229);
    _method_JSTypedArray_AttachOffHeapBuffer(state_, compiler::TNode<JSTypedArray>{tmp407}, compiler::TNode<JSArrayBuffer>{tmp408}, compiler::TNode<UintPtrT>{tmp413});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 166);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 231);
    ca_.Goto(&block8, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp418;
    compiler::TNode<JSTypedArray> tmp419;
    compiler::TNode<JSArrayBuffer> tmp420;
    compiler::TNode<Object> tmp421;
    compiler::TNode<Object> tmp422;
    compiler::TNode<UintPtrT> tmp423;
    compiler::TNode<Int32T> tmp424;
    compiler::TNode<String> tmp425;
    ca_.Bind(&block9, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 232);
    compiler::TNode<IntPtrT> tmp426 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp426);
    compiler::TNode<Map>tmp427 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp419, tmp426});
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidTypedArrayAlignment, tmp418, tmp427, tmp425);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp429;
    compiler::TNode<JSTypedArray> tmp430;
    compiler::TNode<JSArrayBuffer> tmp431;
    compiler::TNode<Object> tmp432;
    compiler::TNode<Object> tmp433;
    compiler::TNode<UintPtrT> tmp434;
    compiler::TNode<Int32T> tmp435;
    ca_.Bind(&block8, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 234);
    ca_.Goto(&block6, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp436;
    compiler::TNode<JSTypedArray> tmp437;
    compiler::TNode<JSArrayBuffer> tmp438;
    compiler::TNode<Object> tmp439;
    compiler::TNode<Object> tmp440;
    compiler::TNode<UintPtrT> tmp441;
    compiler::TNode<Int32T> tmp442;
    ca_.Bind(&block7, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 235);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp436}, MessageTemplate::kInvalidArrayBufferLength);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp443;
    compiler::TNode<JSTypedArray> tmp444;
    compiler::TNode<JSArrayBuffer> tmp445;
    compiler::TNode<Object> tmp446;
    compiler::TNode<Object> tmp447;
    compiler::TNode<UintPtrT> tmp448;
    compiler::TNode<Int32T> tmp449;
    ca_.Bind(&block6, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 237);
    ca_.Goto(&block4, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp450;
    compiler::TNode<JSTypedArray> tmp451;
    compiler::TNode<JSArrayBuffer> tmp452;
    compiler::TNode<Object> tmp453;
    compiler::TNode<Object> tmp454;
    compiler::TNode<UintPtrT> tmp455;
    compiler::TNode<Int32T> tmp456;
    ca_.Bind(&block5, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 238);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp450}, MessageTemplate::kInvalidTypedArrayLength, compiler::TNode<Object>{tmp454});
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp457;
    compiler::TNode<JSTypedArray> tmp458;
    compiler::TNode<JSArrayBuffer> tmp459;
    compiler::TNode<Object> tmp460;
    compiler::TNode<Object> tmp461;
    compiler::TNode<UintPtrT> tmp462;
    compiler::TNode<Int32T> tmp463;
    ca_.Bind(&block4, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 240);
    ca_.Goto(&block2, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp464;
    compiler::TNode<JSTypedArray> tmp465;
    compiler::TNode<JSArrayBuffer> tmp466;
    compiler::TNode<Object> tmp467;
    compiler::TNode<Object> tmp468;
    compiler::TNode<UintPtrT> tmp469;
    compiler::TNode<Int32T> tmp470;
    ca_.Bind(&block3, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 241);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp464}, MessageTemplate::kInvalidOffset, compiler::TNode<Object>{tmp467});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp471;
    compiler::TNode<JSTypedArray> tmp472;
    compiler::TNode<JSArrayBuffer> tmp473;
    compiler::TNode<Object> tmp474;
    compiler::TNode<Object> tmp475;
    compiler::TNode<UintPtrT> tmp476;
    compiler::TNode<Int32T> tmp477;
    ca_.Bind(&block2, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 163);
    ca_.Goto(&block1, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp478;
    compiler::TNode<JSTypedArray> tmp479;
    compiler::TNode<JSArrayBuffer> tmp480;
    compiler::TNode<Object> tmp481;
    compiler::TNode<Object> tmp482;
    compiler::TNode<UintPtrT> tmp483;
    compiler::TNode<Int32T> tmp484;
    ca_.Bind(&block1, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484);
    ca_.Goto(&block42, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484);
  }

    compiler::TNode<Context> tmp485;
    compiler::TNode<JSTypedArray> tmp486;
    compiler::TNode<JSArrayBuffer> tmp487;
    compiler::TNode<Object> tmp488;
    compiler::TNode<Object> tmp489;
    compiler::TNode<UintPtrT> tmp490;
    compiler::TNode<Int32T> tmp491;
    ca_.Bind(&block42, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491);
}

void ConstructByJSReceiver_296(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_obj, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, JSReceiver, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object, Object, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object, JSReceiver, JSTypedArray, JSReceiver, JSReceiver, UintPtrT, Int32T, HeapObject, Object, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, UintPtrT, Int32T, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_obj, p_elementsInfo.sizeLog2, p_elementsInfo.kind);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    compiler::TNode<Int32T> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 251);
    compiler::TNode<Object> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = CodeStubAssembler(state_).GetIteratorMethod(compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp2}, &label0);
    ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp2, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp2);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSTypedArray> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<UintPtrT> tmp9;
    compiler::TNode<Int32T> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    ca_.Bind(&block7, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block5, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<JSTypedArray> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<UintPtrT> tmp15;
    compiler::TNode<Int32T> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block6, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 250);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 252);
    compiler::TNode<JSReceiver> tmp19;
    USE(tmp19);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp19 = Cast39UT15JSBoundFunction10JSFunction7JSProxy_1171(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp18}, &label0);
    ca_.Goto(&block10, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18, tmp19);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18);
    }
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSTypedArray> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<UintPtrT> tmp23;
    compiler::TNode<Int32T> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block11, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block9, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<JSTypedArray> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<UintPtrT> tmp30;
    compiler::TNode<Int32T> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    ca_.Bind(&block10, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block8, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp34);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<JSTypedArray> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    compiler::TNode<UintPtrT> tmp38;
    compiler::TNode<Int32T> tmp39;
    compiler::TNode<Object> tmp40;
    ca_.Bind(&block9, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 253);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp35}, MessageTemplate::kIteratorSymbolNonCallable);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<JSTypedArray> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    compiler::TNode<UintPtrT> tmp44;
    compiler::TNode<Int32T> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<JSReceiver> tmp47;
    ca_.Bind(&block8, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 252);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 254);
    compiler::TypedCodeAssemblerVariable<HeapObject> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    ConstructByIterable_293(state_, compiler::TNode<Context>{tmp41}, compiler::TNode<JSTypedArray>{tmp42}, compiler::TNode<JSReceiver>{tmp43}, compiler::TNode<JSReceiver>{tmp47}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp44}, compiler::TNode<Int32T>{tmp45}}, &label0, &result_0_0, &result_0_1, &result_0_2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp42, tmp43, tmp47, tmp44, tmp45, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<JSTypedArray> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<UintPtrT> tmp51;
    compiler::TNode<Int32T> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<JSTypedArray> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<UintPtrT> tmp58;
    compiler::TNode<Int32T> tmp59;
    compiler::TNode<HeapObject> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    ca_.Bind(&block12, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.Goto(&block1, tmp60, tmp61, tmp62);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSTypedArray> tmp64;
    compiler::TNode<JSReceiver> tmp65;
    compiler::TNode<UintPtrT> tmp66;
    compiler::TNode<Int32T> tmp67;
    ca_.Bind(&block5, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 258);
    compiler::TNode<String> tmp68;
    USE(tmp68);
    tmp68 = kLengthString_74(state_);
    compiler::TNode<Object> tmp69;
    USE(tmp69);
    tmp69 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp63}, compiler::TNode<Object>{tmp65}, compiler::TNode<Object>{tmp68}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 259);
    compiler::TNode<Smi> tmp70;
    USE(tmp70);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp70 = CodeStubAssembler(state_).ToSmiLength(compiler::TNode<Context>{tmp63}, compiler::TNode<Object>{tmp69}, &label0);
    ca_.Goto(&block15, tmp63, tmp64, tmp65, tmp66, tmp67, tmp69, tmp69, tmp70);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp63, tmp64, tmp65, tmp66, tmp67, tmp69, tmp69);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp71;
    compiler::TNode<JSTypedArray> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<UintPtrT> tmp74;
    compiler::TNode<Int32T> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Object> tmp77;
    ca_.Bind(&block16, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.Goto(&block14, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<JSTypedArray> tmp79;
    compiler::TNode<JSReceiver> tmp80;
    compiler::TNode<UintPtrT> tmp81;
    compiler::TNode<Int32T> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Smi> tmp85;
    ca_.Bind(&block15, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.Goto(&block13, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp85);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<JSTypedArray> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<UintPtrT> tmp89;
    compiler::TNode<Int32T> tmp90;
    compiler::TNode<Object> tmp91;
    ca_.Bind(&block14, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 260);
    ca_.Goto(&block3, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp92;
    compiler::TNode<JSTypedArray> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<UintPtrT> tmp95;
    compiler::TNode<Int32T> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Smi> tmp98;
    ca_.Bind(&block13, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 259);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 261);
    compiler::TNode<JSReceiver> tmp99;
    USE(tmp99);
    tmp99 = ca_.UncheckedCast<JSReceiver>(GetArrayBufferFunction_199(state_, compiler::TNode<Context>{tmp92}));
    ca_.Goto(&block1, tmp94, tmp98, tmp99);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<JSTypedArray> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<UintPtrT> tmp103;
    compiler::TNode<Int32T> tmp104;
    compiler::TNode<Object> tmp105;
    ca_.Bind(&block3, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 264);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp100}, MessageTemplate::kInvalidTypedArrayLength, compiler::TNode<Object>{tmp105});
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<JSReceiver> tmp108;
    ca_.Bind(&block1, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 245);
    *label_IfConstructByArrayLike_parameter_2 = tmp108;
    *label_IfConstructByArrayLike_parameter_1 = tmp107;
    *label_IfConstructByArrayLike_parameter_0 = tmp106;
    ca_.Goto(label_IfConstructByArrayLike);
  }
}

TF_BUILTIN(CreateTypedArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSFunction> parameter1 = UncheckedCast<JSFunction>(Parameter(Descriptor::kTarget));
  USE(parameter1);
  compiler::TNode<JSReceiver> parameter2 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kNewTarget));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kArg1));
  USE(parameter3);
  compiler::TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kArg2));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kArg3));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, Object, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, HeapObject> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, HeapObject, JSArrayBuffer> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, HeapObject> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, HeapObject, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, JSTypedArray, JSTypedArray, JSTypedArray, UintPtrT, Int32T, HeapObject, Object, JSReceiver> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, HeapObject> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, HeapObject, JSReceiver> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object, JSReceiver, JSTypedArray, JSReceiver, UintPtrT, Int32T, HeapObject, Object, JSReceiver> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T, HeapObject, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, JSTypedArray, UintPtrT, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSFunction> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 276);
    compiler::TNode<JSTypedArray> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<JSTypedArray>(ConstructorBuiltinsAssembler(state_).EmitFastNewObject(compiler::TNode<Context>{tmp0}, compiler::TNode<JSFunction>{tmp1}, compiler::TNode<JSReceiver>{tmp2}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 283);
    compiler::TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp7);
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 0));
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp7}, tmp8);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 284);
    compiler::TNode<IntPtrT> tmp9 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp9);
    compiler::TNode<UintPtrT> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 0));
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp9}, tmp10);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 285);
    compiler::TNode<IntPtrT> tmp11 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp11);
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<UintPtrT>(FromConstexpr9ATuintptr17ATconstexpr_int31_141(state_, 0));
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp11}, tmp12);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 286);
    compiler::TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(JSTypedArray::kBasePointerOffset);
    USE(tmp13);
    compiler::TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Smi>(Convert5ATSmi17ATconstexpr_int31_1172(state_, 0));
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp13}, tmp14);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 291);
    compiler::TNode<UintPtrT> tmp15;
    USE(tmp15);
    compiler::TNode<Int32T> tmp16;
    USE(tmp16);
    std::tie(tmp15, tmp16) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(compiler::TNode<JSTypedArray>{tmp6}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 290);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 294);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 295);
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = Cast5ATSmi_84(state_, compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp15, tmp16, tmp3, tmp3, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp15, tmp16, tmp3, tmp3);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSFunction> tmp19;
    compiler::TNode<JSReceiver> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<JSTypedArray> tmp24;
    compiler::TNode<UintPtrT> tmp25;
    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block8, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block6, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSFunction> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<JSTypedArray> tmp35;
    compiler::TNode<UintPtrT> tmp36;
    compiler::TNode<Int32T> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Smi> tmp40;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 296);
    ca_.Goto(&block4, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp40);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<JSFunction> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<JSTypedArray> tmp47;
    compiler::TNode<UintPtrT> tmp48;
    compiler::TNode<Int32T> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block6, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 298);
    compiler::TNode<JSArrayBuffer> tmp51;
    USE(tmp51);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp51 = Cast13JSArrayBuffer_100(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp50)}, &label0);
    ca_.Goto(&block11, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, ca_.UncheckedCast<HeapObject>(tmp50), tmp51);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, ca_.UncheckedCast<HeapObject>(tmp50));
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<JSFunction> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<JSTypedArray> tmp58;
    compiler::TNode<UintPtrT> tmp59;
    compiler::TNode<Int32T> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<HeapObject> tmp62;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.Goto(&block10, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSFunction> tmp64;
    compiler::TNode<JSReceiver> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<JSTypedArray> tmp69;
    compiler::TNode<UintPtrT> tmp70;
    compiler::TNode<Int32T> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<HeapObject> tmp73;
    compiler::TNode<JSArrayBuffer> tmp74;
    ca_.Bind(&block11, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 299);
    ConstructByArrayBuffer_295(state_, compiler::TNode<Context>{tmp63}, compiler::TNode<JSTypedArray>{tmp69}, compiler::TNode<JSArrayBuffer>{tmp74}, compiler::TNode<Object>{tmp67}, compiler::TNode<Object>{tmp68}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp70}, compiler::TNode<Int32T>{tmp71}});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 298);
    ca_.Goto(&block9, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<JSFunction> tmp76;
    compiler::TNode<JSReceiver> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<JSTypedArray> tmp81;
    compiler::TNode<UintPtrT> tmp82;
    compiler::TNode<Int32T> tmp83;
    compiler::TNode<Object> tmp84;
    ca_.Bind(&block10, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 301);
    compiler::TNode<JSTypedArray> tmp85;
    USE(tmp85);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp85 = Cast12JSTypedArray_95(state_, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp84)}, &label0);
    ca_.Goto(&block15, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, ca_.UncheckedCast<HeapObject>(tmp84), tmp85);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, ca_.UncheckedCast<HeapObject>(tmp84));
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<JSFunction> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<JSTypedArray> tmp92;
    compiler::TNode<UintPtrT> tmp93;
    compiler::TNode<Int32T> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<HeapObject> tmp96;
    ca_.Bind(&block16, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.Goto(&block14, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSFunction> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<JSTypedArray> tmp103;
    compiler::TNode<UintPtrT> tmp104;
    compiler::TNode<Int32T> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<HeapObject> tmp107;
    compiler::TNode<JSTypedArray> tmp108;
    ca_.Bind(&block15, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 302);
    compiler::TypedCodeAssemblerVariable<HeapObject> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    ConstructByTypedArray_294(state_, compiler::TNode<Context>{tmp97}, compiler::TNode<JSTypedArray>{tmp103}, compiler::TNode<JSTypedArray>{tmp108}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp104}, compiler::TNode<Int32T>{tmp105}}, &label0, &result_0_0, &result_0_1, &result_0_2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block17, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp108, tmp103, tmp108, tmp104, tmp105, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp109;
    compiler::TNode<JSFunction> tmp110;
    compiler::TNode<JSReceiver> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<JSTypedArray> tmp115;
    compiler::TNode<UintPtrT> tmp116;
    compiler::TNode<Int32T> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<JSTypedArray> tmp119;
    compiler::TNode<JSTypedArray> tmp120;
    compiler::TNode<JSTypedArray> tmp121;
    compiler::TNode<UintPtrT> tmp122;
    compiler::TNode<Int32T> tmp123;
    compiler::TNode<HeapObject> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<JSReceiver> tmp126;
    ca_.Bind(&block17, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.Goto(&block2, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp124, tmp125, tmp126);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp127;
    compiler::TNode<JSFunction> tmp128;
    compiler::TNode<JSReceiver> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<JSTypedArray> tmp133;
    compiler::TNode<UintPtrT> tmp134;
    compiler::TNode<Int32T> tmp135;
    compiler::TNode<Object> tmp136;
    ca_.Bind(&block14, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 305);
    compiler::TNode<JSReceiver> tmp137;
    USE(tmp137);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp137 = Cast10JSReceiver_120(state_, compiler::TNode<Context>{tmp127}, compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp136)}, &label0);
    ca_.Goto(&block20, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, ca_.UncheckedCast<HeapObject>(tmp136), tmp137);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, ca_.UncheckedCast<HeapObject>(tmp136));
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp138;
    compiler::TNode<JSFunction> tmp139;
    compiler::TNode<JSReceiver> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<JSTypedArray> tmp144;
    compiler::TNode<UintPtrT> tmp145;
    compiler::TNode<Int32T> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<HeapObject> tmp148;
    ca_.Bind(&block21, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.Goto(&block19, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp149;
    compiler::TNode<JSFunction> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<JSTypedArray> tmp155;
    compiler::TNode<UintPtrT> tmp156;
    compiler::TNode<Int32T> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<HeapObject> tmp159;
    compiler::TNode<JSReceiver> tmp160;
    ca_.Bind(&block20, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 306);
    compiler::TypedCodeAssemblerVariable<HeapObject> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    ConstructByJSReceiver_296(state_, compiler::TNode<Context>{tmp149}, compiler::TNode<JSTypedArray>{tmp155}, compiler::TNode<JSReceiver>{tmp160}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp156}, compiler::TNode<Int32T>{tmp157}}, &label0, &result_0_0, &result_0_1, &result_0_2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp160, tmp155, tmp160, tmp156, tmp157, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp161;
    compiler::TNode<JSFunction> tmp162;
    compiler::TNode<JSReceiver> tmp163;
    compiler::TNode<Object> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<JSTypedArray> tmp167;
    compiler::TNode<UintPtrT> tmp168;
    compiler::TNode<Int32T> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<JSReceiver> tmp171;
    compiler::TNode<JSTypedArray> tmp172;
    compiler::TNode<JSReceiver> tmp173;
    compiler::TNode<UintPtrT> tmp174;
    compiler::TNode<Int32T> tmp175;
    compiler::TNode<HeapObject> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<JSReceiver> tmp178;
    ca_.Bind(&block22, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178);
    ca_.Goto(&block2, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp176, tmp177, tmp178);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp179;
    compiler::TNode<JSFunction> tmp180;
    compiler::TNode<JSReceiver> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<Object> tmp184;
    compiler::TNode<JSTypedArray> tmp185;
    compiler::TNode<UintPtrT> tmp186;
    compiler::TNode<Int32T> tmp187;
    compiler::TNode<Object> tmp188;
    ca_.Bind(&block19, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 311);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 312);
    ca_.Goto(&block4, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, ca_.UncheckedCast<HeapObject>(tmp188));
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp189;
    compiler::TNode<JSFunction> tmp190;
    compiler::TNode<JSReceiver> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<JSTypedArray> tmp195;
    compiler::TNode<UintPtrT> tmp196;
    compiler::TNode<Int32T> tmp197;
    compiler::TNode<Object> tmp198;
    ca_.Bind(&block9, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 295);
    ca_.Goto(&block5, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp199;
    compiler::TNode<JSFunction> tmp200;
    compiler::TNode<JSReceiver> tmp201;
    compiler::TNode<Object> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<JSTypedArray> tmp205;
    compiler::TNode<UintPtrT> tmp206;
    compiler::TNode<Int32T> tmp207;
    compiler::TNode<Object> tmp208;
    ca_.Bind(&block5, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 294);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 316);
    ca_.Goto(&block3, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp209;
    compiler::TNode<JSFunction> tmp210;
    compiler::TNode<JSReceiver> tmp211;
    compiler::TNode<Object> tmp212;
    compiler::TNode<Object> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<JSTypedArray> tmp215;
    compiler::TNode<UintPtrT> tmp216;
    compiler::TNode<Int32T> tmp217;
    compiler::TNode<Object> tmp218;
    ca_.Bind(&block4, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 317);
    ConstructByLength_291(state_, compiler::TNode<Context>{tmp209}, compiler::TNode<JSTypedArray>{tmp215}, compiler::TNode<Object>{tmp218}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp216}, compiler::TNode<Int32T>{tmp217}});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 293);
    ca_.Goto(&block3, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp219;
    compiler::TNode<JSFunction> tmp220;
    compiler::TNode<JSReceiver> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<JSTypedArray> tmp225;
    compiler::TNode<UintPtrT> tmp226;
    compiler::TNode<Int32T> tmp227;
    ca_.Bind(&block3, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 319);
    ca_.Goto(&block1, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp228;
    compiler::TNode<JSFunction> tmp229;
    compiler::TNode<JSReceiver> tmp230;
    compiler::TNode<Object> tmp231;
    compiler::TNode<Object> tmp232;
    compiler::TNode<Object> tmp233;
    compiler::TNode<JSTypedArray> tmp234;
    compiler::TNode<UintPtrT> tmp235;
    compiler::TNode<Int32T> tmp236;
    compiler::TNode<HeapObject> tmp237;
    compiler::TNode<Object> tmp238;
    compiler::TNode<JSReceiver> tmp239;
    ca_.Bind(&block2, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 322);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 321);
    ConstructByArrayLike_292(state_, compiler::TNode<Context>{tmp228}, compiler::TNode<JSTypedArray>{tmp234}, compiler::TNode<HeapObject>{tmp237}, compiler::TNode<Object>{tmp238}, TorqueStructTypedArrayElementsInfo{compiler::TNode<UintPtrT>{tmp235}, compiler::TNode<Int32T>{tmp236}}, compiler::TNode<JSReceiver>{tmp239});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 293);
    ca_.Goto(&block1, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp240;
    compiler::TNode<JSFunction> tmp241;
    compiler::TNode<JSReceiver> tmp242;
    compiler::TNode<Object> tmp243;
    compiler::TNode<Object> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<JSTypedArray> tmp246;
    compiler::TNode<UintPtrT> tmp247;
    compiler::TNode<Int32T> tmp248;
    ca_.Bind(&block1, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 324);
    CodeStubAssembler(state_).Return(tmp246);
  }
}

compiler::TNode<JSTypedArray> TypedArraySpeciesCreate_297(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, const char* p_methodName, int31_t p_numArgs, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Object> p_arg0, compiler::TNode<Object> p_arg1, compiler::TNode<Object> p_arg2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_exemplar, p_arg0, p_arg1, p_arg2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 331);
    compiler::TNode<JSFunction> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<JSFunction>(TypedArrayBuiltinsAssembler(state_).GetDefaultConstructor(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 334);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp6);
    compiler::TNode<Map>tmp7 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp6});
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsPrototypeTypedArrayPrototype(compiler::TNode<Context>{tmp0}, compiler::TNode<Map>{tmp7}));
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp8}));
    ca_.Branch(tmp9, &block4, &block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<JSFunction> tmp15;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block3, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSFunction> tmp21;
    ca_.Bind(&block5, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 335);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsTypedArraySpeciesProtectorCellInvalid());
    ca_.Branch(tmp22, &block6, &block7, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSTypedArray> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<JSFunction> tmp28;
    ca_.Bind(&block6, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block3, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSTypedArray> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSFunction> tmp34;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 338);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 337);
    compiler::TNode<JSTypedArray> tmp35;
    tmp35 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateTypedArray, tmp29, tmp34, tmp34, tmp31, tmp32, tmp33));
    USE(tmp35);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 344);
    ca_.Goto(&block1, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSTypedArray> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSFunction> tmp41;
    ca_.Bind(&block3, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 348);
    compiler::TNode<JSReceiver> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).SpeciesConstructor(compiler::TNode<Context>{tmp36}, compiler::TNode<Object>{tmp37}, compiler::TNode<JSReceiver>{tmp41}));
    compiler::TNode<JSReceiver> tmp43;
    USE(tmp43);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp43 = Cast13ATConstructor_108(state_, compiler::TNode<HeapObject>{tmp42}, &label0);
    ca_.Goto(&block10, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
    }
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<JSTypedArray> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<JSFunction> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    ca_.Bind(&block11, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block9, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSTypedArray> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<JSFunction> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    ca_.Bind(&block10, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block8, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp58);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<JSTypedArray> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<JSFunction> tmp64;
    ca_.Bind(&block9, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 349);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<JSTypedArray> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<JSFunction> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    ca_.Bind(&block8, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 353);
    compiler::TNode<Oddball> tmp72;
    USE(tmp72);
    tmp72 = Undefined_70(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 354);
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(p_numArgs, 1)))) {
      ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
    } else {
      ca_.Goto(&block13, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<JSTypedArray> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<JSFunction> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block12, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 355);
    compiler::TNode<JSReceiver> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).Construct(compiler::TNode<Context>{tmp73}, compiler::TNode<JSReceiver>{tmp79}, compiler::TNode<Object>{tmp75}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 354);
    ca_.Goto(&block14, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp81);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<JSTypedArray> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<JSFunction> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<Object> tmp89;
    ca_.Bind(&block13, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 358);
    compiler::TNode<JSReceiver> tmp90;
    USE(tmp90);
    tmp90 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).Construct(compiler::TNode<Context>{tmp82}, compiler::TNode<JSReceiver>{tmp88}, compiler::TNode<Object>{tmp84}, compiler::TNode<Object>{tmp85}, compiler::TNode<Object>{tmp86}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 354);
    ca_.Goto(&block14, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp90);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp91;
    compiler::TNode<JSTypedArray> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<JSFunction> tmp96;
    compiler::TNode<JSReceiver> tmp97;
    compiler::TNode<Object> tmp98;
    ca_.Bind(&block14, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 361);
    compiler::TNode<JSTypedArray> tmp99;
    USE(tmp99);
    tmp99 = ca_.UncheckedCast<JSTypedArray>(TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(compiler::TNode<Context>{tmp91}, compiler::TNode<Object>{tmp98}, p_methodName));
    ca_.Goto(&block1, tmp91, tmp92, tmp93, tmp94, tmp95, tmp99);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<JSTypedArray> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<JSTypedArray> tmp105;
    ca_.Bind(&block1, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 327);
    ca_.Goto(&block15, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

    compiler::TNode<Context> tmp106;
    compiler::TNode<JSTypedArray> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<JSTypedArray> tmp111;
    ca_.Bind(&block15, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
  return compiler::TNode<JSTypedArray>{tmp111};
}

compiler::TNode<JSTypedArray> TypedArraySpeciesCreateByLength_298(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, const char* p_methodName, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_exemplar, p_length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 372);
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Undefined_70(state_);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 371);
    compiler::TNode<JSTypedArray> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<JSTypedArray>(TypedArraySpeciesCreate_297(state_, compiler::TNode<Context>{tmp0}, p_methodName, 1, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Object>{tmp2}, compiler::TNode<Object>{tmp3}, compiler::TNode<Object>{tmp4}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 373);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp6);
    compiler::TNode<UintPtrT>tmp7 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp5, tmp6});
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<UintPtrT>(Convert9ATuintptr13ATPositiveSmi_164(state_, compiler::TNode<Smi>{tmp2}));
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp7}, compiler::TNode<UintPtrT>{tmp8}));
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp5);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<JSTypedArray> tmp13;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 374);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp10}, MessageTemplate::kTypedArrayTooShort);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<JSTypedArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 377);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSTypedArray> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<JSTypedArray> tmp21;
    ca_.Bind(&block1, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 365);
    ca_.Goto(&block4, tmp18, tmp19, tmp20, tmp21);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<JSTypedArray> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<JSTypedArray> tmp25;
    ca_.Bind(&block4, &tmp22, &tmp23, &tmp24, &tmp25);
  return compiler::TNode<JSTypedArray>{tmp25};
}

}  // namespace internal
}  // namespace v8

