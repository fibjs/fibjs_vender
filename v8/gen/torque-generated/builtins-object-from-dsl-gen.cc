#include "src/objects/arguments.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "torque-generated/builtins-base-from-dsl-gen.h"
#include "torque-generated/builtins-array-from-dsl-gen.h"
#include "src/builtins/builtins-array-gen.h"
#include "torque-generated/builtins-collections-from-dsl-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "torque-generated/builtins-data-view-from-dsl-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "torque-generated/builtins-object-from-dsl-gen.h"
#include "src/builtins/builtins-object-gen.h"
#include "torque-generated/builtins-iterator-from-dsl-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "torque-generated/builtins-typed-array-from-dsl-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "torque-generated/builtins-test-from-dsl-gen.h"
#include "src/builtins/builtins-test-gen.h"

namespace v8 {
namespace internal {

compiler::TNode<JSObject> ObjectBuiltinsFromDSLAssembler::AllocateEmptyJSObject(compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Object, Map> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<JSFunction> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).GetObjectFunction(TNode<Context>{tmp0}));
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadJSFunctionPrototypeOrInitialMap(TNode<JSFunction>{tmp1}));
    compiler::TNode<Map> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATMap(TNode<Context>{tmp0}, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<JSFunction> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSFunction> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Map> tmp10;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp7, tmp8, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSFunction> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/object.tq:9:19");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<JSFunction> tmp14;
    compiler::TNode<Map> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    compiler::TNode<JSObject> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<JSObject>(CodeStubAssembler(state_).AllocateJSObjectFromMap(TNode<Map>{tmp15}));
    ca_.Goto(&block1, tmp16);
  }

    compiler::TNode<JSObject> tmp17;
    ca_.Bind(&block1, &tmp17);
  return TNode<JSObject>{tmp17};
}

compiler::TNode<JSObject> ObjectBuiltinsFromDSLAssembler::ObjectFromEntriesFastCase(compiler::TNode<Context> p_context, compiler::TNode<Object> p_iterable, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_iterable);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast34ATFastJSArrayWithNoCustomIteration(TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block4, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSArray> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<FixedArrayBase> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(TNode<JSObject>{tmp11}));
    compiler::TNode<FixedArray> tmp13;
    USE(tmp13);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp13 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATFixedArray(TNode<Context>{tmp7}, TNode<HeapObject>{tmp12}, &label0);
    ca_.Goto(&block7, tmp7, tmp8, tmp9, tmp11, tmp12, tmp13);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp11, tmp12);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<JSArray> tmp17;
    compiler::TNode<FixedArrayBase> tmp18;
    ca_.Bind(&block8, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<JSArray> tmp22;
    compiler::TNode<FixedArrayBase> tmp23;
    compiler::TNode<FixedArray> tmp24;
    ca_.Bind(&block7, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp22}));
    compiler::TNode<JSObject> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<JSObject>(ObjectBuiltinsFromDSLAssembler(state_).AllocateEmptyJSObject(TNode<Context>{tmp19}));
    compiler::TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi(0));
    ca_.Goto(&block11, tmp19, tmp20, tmp21, tmp22, tmp24, tmp25, tmp26, tmp27);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<JSArray> tmp31;
    compiler::TNode<FixedArray> tmp32;
    compiler::TNode<Smi> tmp33;
    compiler::TNode<JSObject> tmp34;
    compiler::TNode<Smi> tmp35;
    ca_.Bind(&block11, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp35}, TNode<Smi>{tmp33}));
    ca_.Branch(tmp36, &block9, &block10, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<JSArray> tmp40;
    compiler::TNode<FixedArray> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<JSObject> tmp43;
    compiler::TNode<Smi> tmp44;
    ca_.Bind(&block9, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<Object> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<Object>(ArrayBuiltinsFromDSLAssembler(state_).LoadElementOrUndefined(TNode<FixedArray>{tmp41}, TNode<Smi>{tmp44}));
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    compiler::TNode<Object> tmp47;
    USE(tmp47);
    compiler::CodeAssemblerLabel label0(&ca_);
    std::tie(tmp46, tmp47) = CollectionsBuiltinsFromDSLAssembler(state_).LoadKeyValuePairNoSideEffects(TNode<Context>{tmp37}, TNode<Object>{tmp45}, &label0).Flatten();
    ca_.Goto(&block13, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp45, tmp46, tmp47);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp45);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSArray> tmp51;
    compiler::TNode<FixedArray> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<JSObject> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    ca_.Bind(&block14, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.Goto(&block1);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSArray> tmp61;
    compiler::TNode<FixedArray> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<JSObject> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    ca_.Bind(&block13, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    compiler::TNode<BoolT> tmp70;
    USE(tmp70);
    tmp70 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is12ATJSReceiver22UT12ATHeapObject5ATSmi(TNode<Context>{tmp58}, TNode<Object>{tmp68}));
    ca_.Branch(tmp70, &block15, &block16, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp68, tmp69);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<JSArray> tmp74;
    compiler::TNode<FixedArray> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<JSObject> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    ca_.Bind(&block15, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.Goto(&block1);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<JSArray> tmp85;
    compiler::TNode<FixedArray> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<JSObject> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    ca_.Bind(&block16, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    CodeStubAssembler(state_).CallRuntime(Runtime::kCreateDataProperty, tmp82, tmp88, tmp91, tmp92);
    ca_.Goto(&block12, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<JSArray> tmp97;
    compiler::TNode<FixedArray> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<JSObject> tmp100;
    compiler::TNode<Smi> tmp101;
    ca_.Bind(&block12, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    compiler::TNode<Smi> tmp102;
    USE(tmp102);
    tmp102 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi(1));
    compiler::TNode<Smi> tmp103;
    USE(tmp103);
    tmp103 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp101}, TNode<Smi>{tmp102}));
    ca_.Goto(&block11, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp103);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<JSArray> tmp107;
    compiler::TNode<FixedArray> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<JSObject> tmp110;
    compiler::TNode<Smi> tmp111;
    ca_.Bind(&block10, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.Goto(&block2, tmp110);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<Object> tmp114;
    ca_.Bind(&block4, &tmp112, &tmp113, &tmp114);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    compiler::TNode<JSObject> tmp115;
    ca_.Bind(&block2, &tmp115);
  return TNode<JSObject>{tmp115};
}

TF_BUILTIN(ObjectFromEntries, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Object, Map> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, BoolT, Object> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, Object> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object, Object, Map, Object> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object, Object, Object, Object> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object, Object, Object, Object, JSObject, Object, Object, Object> block30(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNullOrUndefined(TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block5, &block6, tmp0, tmp1, tmp1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8);
    compiler::TNode<JSObject> tmp9;
    USE(tmp9);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp9 = ObjectBuiltinsFromDSLAssembler(state_).ObjectFromEntriesFastCase(TNode<Context>{tmp6}, TNode<Object>{tmp8}, &label0);
    ca_.Goto(&block7, tmp6, tmp7, tmp8, tmp8, tmp9);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp6, tmp7, tmp8, tmp8);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    ca_.Bind(&block8, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSObject> tmp18;
    ca_.Bind(&block7, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    CodeStubAssembler(state_).Return(tmp18);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Object> tmp21;
    ca_.Bind(&block4, &tmp19, &tmp20, &tmp21);
    compiler::TNode<JSObject> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<JSObject>(ObjectBuiltinsFromDSLAssembler(state_).AllocateEmptyJSObject(TNode<Context>{tmp19}));
    compiler::TNode<Context> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{tmp19}));
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr19ATNativeContextSlot(Context::ITERATOR_RESULT_MAP_INDEX));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(TNode<Context>{tmp23}, TNode<IntPtrT>{tmp24}));
    compiler::TNode<Map> tmp26;
    USE(tmp26);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp26 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATMap(TNode<Context>{tmp19}, TNode<Object>{tmp25}, &label0);
    ca_.Goto(&block11, tmp19, tmp20, tmp21, tmp22, tmp25, tmp26);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp19, tmp20, tmp21, tmp22, tmp25);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<JSObject> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block12, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block10, tmp27, tmp28, tmp29, tmp30);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<JSObject> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Map> tmp37;
    ca_.Bind(&block11, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block9, tmp32, tmp33, tmp34, tmp35, tmp37);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSObject> tmp41;
    ca_.Bind(&block10, &tmp38, &tmp39, &tmp40, &tmp41);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/object-fromentries.tq:46:21");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<JSObject> tmp45;
    compiler::TNode<Map> tmp46;
    ca_.Bind(&block9, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    compiler::TNode<JSReceiver> tmp47;
    USE(tmp47);
    compiler::TNode<Object> tmp48;
    USE(tmp48);
    std::tie(tmp47, tmp48) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{tmp42}, TNode<Object>{tmp44}).Flatten();
    compiler::TNode<BoolT> tmp49;
    USE(tmp49);
    compiler::CodeAssemblerExceptionHandlerLabel catch50_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch50_label);
    tmp49 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNullOrUndefined(TNode<Object>{tmp47}));
    }
    if (catch50_label.is_used()) {
      compiler::CodeAssemblerLabel catch50_skip(&ca_);
      ca_.Goto(&catch50_skip);
      compiler::TNode<Object> catch50_exception_object;
      ca_.Bind(&catch50_label, &catch50_exception_object);
      ca_.Goto(&block17, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp47, catch50_exception_object);
      ca_.Bind(&catch50_skip);
    }
    compiler::TNode<BoolT> tmp51;
    USE(tmp51);
    compiler::CodeAssemblerExceptionHandlerLabel catch52_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch52_label);
    tmp51 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp49}));
    }
    if (catch52_label.is_used()) {
      compiler::CodeAssemblerLabel catch52_skip(&ca_);
      ca_.Goto(&catch52_skip);
      compiler::TNode<Object> catch52_exception_object;
      ca_.Bind(&catch52_label, &catch52_exception_object);
      ca_.Goto(&block18, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, catch52_exception_object);
      ca_.Bind(&catch52_skip);
    }
    ca_.Branch(tmp51, &block15, &block16, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<JSObject> tmp56;
    compiler::TNode<Map> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<JSReceiver> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block17, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.Goto(&block14, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp61);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<JSObject> tmp65;
    compiler::TNode<Map> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<BoolT> tmp69;
    compiler::TNode<Object> tmp70;
    ca_.Bind(&block18, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.Goto(&block14, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp70);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<JSObject> tmp74;
    compiler::TNode<Map> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<Object> tmp77;
    ca_.Bind(&block16, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    CodeStubAssembler(state_).FailAssert("Torque assert \'!IsNullOrUndefined(i.object)\' failed", "../../src/builtins/object-fromentries.tq", 49);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<JSObject> tmp81;
    compiler::TNode<Map> tmp82;
    compiler::TNode<JSReceiver> tmp83;
    compiler::TNode<Object> tmp84;
    ca_.Bind(&block15, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.Goto(&block21, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<JSObject> tmp88;
    compiler::TNode<Map> tmp89;
    compiler::TNode<JSReceiver> tmp90;
    compiler::TNode<Object> tmp91;
    ca_.Bind(&block21, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91);
    compiler::TNode<BoolT> tmp92;
    USE(tmp92);
    compiler::CodeAssemblerExceptionHandlerLabel catch93_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch93_label);
    tmp92 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool(true));
    }
    if (catch93_label.is_used()) {
      compiler::CodeAssemblerLabel catch93_skip(&ca_);
      ca_.Goto(&catch93_skip);
      compiler::TNode<Object> catch93_exception_object;
      ca_.Bind(&catch93_label, &catch93_exception_object);
      ca_.Goto(&block22, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, catch93_exception_object);
      ca_.Bind(&catch93_skip);
    }
    ca_.Branch(tmp92, &block19, &block20, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<JSObject> tmp97;
    compiler::TNode<Map> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    ca_.Bind(&block22, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block14, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<JSObject> tmp105;
    compiler::TNode<Map> tmp106;
    compiler::TNode<JSReceiver> tmp107;
    compiler::TNode<Object> tmp108;
    ca_.Bind(&block19, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    compiler::TNode<Object> tmp109;
    USE(tmp109);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch110_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch110_label);
    tmp109 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{tmp102}, IteratorBuiltinsFromDSLAssembler::IteratorRecord{TNode<JSReceiver>{tmp107}, TNode<Object>{tmp108}}, TNode<Map>{tmp106}, &label0);
    }
    if (catch110_label.is_used()) {
      compiler::CodeAssemblerLabel catch110_skip(&ca_);
      ca_.Goto(&catch110_skip);
      compiler::TNode<Object> catch110_exception_object;
      ca_.Bind(&catch110_label, &catch110_exception_object);
      ca_.Goto(&block27, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp107, tmp108, tmp106, catch110_exception_object);
      ca_.Bind(&catch110_skip);
    }
    ca_.Goto(&block25, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp107, tmp108, tmp106, tmp109);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block26, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp107, tmp108, tmp106);
    }
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<JSObject> tmp114;
    compiler::TNode<Map> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSReceiver> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<Map> tmp120;
    compiler::TNode<Object> tmp121;
    ca_.Bind(&block27, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.Goto(&block14, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp121);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<JSObject> tmp125;
    compiler::TNode<Map> tmp126;
    compiler::TNode<JSReceiver> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<JSReceiver> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Map> tmp131;
    ca_.Bind(&block26, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.Goto(&block24, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Object> tmp134;
    compiler::TNode<JSObject> tmp135;
    compiler::TNode<Map> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Map> tmp141;
    compiler::TNode<Object> tmp142;
    ca_.Bind(&block25, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142);
    ca_.Goto(&block23, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp142);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<JSObject> tmp146;
    compiler::TNode<Map> tmp147;
    compiler::TNode<JSReceiver> tmp148;
    compiler::TNode<Object> tmp149;
    ca_.Bind(&block24, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149);
    CodeStubAssembler(state_).Return(tmp146);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<JSObject> tmp153;
    compiler::TNode<Map> tmp154;
    compiler::TNode<JSReceiver> tmp155;
    compiler::TNode<Object> tmp156;
    compiler::TNode<Object> tmp157;
    ca_.Bind(&block23, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157);
    compiler::TNode<Object> tmp158;
    USE(tmp158);
    compiler::CodeAssemblerExceptionHandlerLabel catch159_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch159_label);
    tmp158 = ca_.UncheckedCast<Object>(IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{tmp150}, TNode<Object>{tmp157}, TNode<Map>{tmp154}));
    }
    if (catch159_label.is_used()) {
      compiler::CodeAssemblerLabel catch159_skip(&ca_);
      ca_.Goto(&catch159_skip);
      compiler::TNode<Object> catch159_exception_object;
      ca_.Bind(&catch159_label, &catch159_exception_object);
      ca_.Goto(&block28, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp157, tmp154, catch159_exception_object);
      ca_.Bind(&catch159_skip);
    }
    compiler::TNode<Object> tmp160;
    USE(tmp160);
    compiler::TNode<Object> tmp161;
    USE(tmp161);
    compiler::CodeAssemblerExceptionHandlerLabel catch162_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch162_label);
    std::tie(tmp160, tmp161) = CollectionsBuiltinsFromDSLAssembler(state_).LoadKeyValuePair(TNode<Context>{tmp150}, TNode<Object>{tmp158}).Flatten();
    }
    if (catch162_label.is_used()) {
      compiler::CodeAssemblerLabel catch162_skip(&ca_);
      ca_.Goto(&catch162_skip);
      compiler::TNode<Object> catch162_exception_object;
      ca_.Bind(&catch162_label, &catch162_exception_object);
      ca_.Goto(&block29, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp158, catch162_exception_object);
      ca_.Bind(&catch162_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch164_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch164_label);
    CodeStubAssembler(state_).CallRuntime(Runtime::kCreateDataProperty, tmp150, tmp153, tmp160, tmp161);
    }
    if (catch164_label.is_used()) {
      compiler::CodeAssemblerLabel catch164_skip(&ca_);
      ca_.Goto(&catch164_skip);
      compiler::TNode<Object> catch164_exception_object;
      ca_.Bind(&catch164_label, &catch164_exception_object);
      ca_.Goto(&block30, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp160, tmp161, tmp153, tmp160, tmp161, catch164_exception_object);
      ca_.Bind(&catch164_skip);
    }
    ca_.Goto(&block21, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<JSObject> tmp168;
    compiler::TNode<Map> tmp169;
    compiler::TNode<JSReceiver> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<Object> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<Map> tmp174;
    compiler::TNode<Object> tmp175;
    ca_.Bind(&block28, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
    ca_.Goto(&block14, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp175);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<JSObject> tmp179;
    compiler::TNode<Map> tmp180;
    compiler::TNode<JSReceiver> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<Object> tmp184;
    compiler::TNode<Object> tmp185;
    compiler::TNode<Object> tmp186;
    ca_.Bind(&block29, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186);
    ca_.Goto(&block14, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp186);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<JSObject> tmp190;
    compiler::TNode<Map> tmp191;
    compiler::TNode<JSReceiver> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<Object> tmp196;
    compiler::TNode<Object> tmp197;
    compiler::TNode<JSObject> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<Object> tmp200;
    compiler::TNode<Object> tmp201;
    ca_.Bind(&block30, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201);
    ca_.Goto(&block14, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp201);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<JSObject> tmp205;
    compiler::TNode<Map> tmp206;
    compiler::TNode<JSReceiver> tmp207;
    compiler::TNode<Object> tmp208;
    ca_.Bind(&block20, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208);
    CodeStubAssembler(state_).Return(tmp205);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp209;
    compiler::TNode<Object> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<JSObject> tmp212;
    compiler::TNode<Map> tmp213;
    compiler::TNode<JSReceiver> tmp214;
    compiler::TNode<Object> tmp215;
    compiler::TNode<Object> tmp216;
    ca_.Bind(&block14, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    IteratorBuiltinsAssembler(state_).IteratorCloseOnException(TNode<Context>{tmp209}, IteratorBuiltinsFromDSLAssembler::IteratorRecord{TNode<JSReceiver>{tmp214}, TNode<Object>{tmp215}}, TNode<Object>{tmp216});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp217;
    compiler::TNode<Object> tmp218;
    compiler::TNode<Object> tmp219;
    ca_.Bind(&block2, &tmp217, &tmp218, &tmp219);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp217}, MessageTemplate::kNotIterable);
  }
}

}  // namespace internal
}  // namespace v8

