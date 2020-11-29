#ifndef V8_TORQUE_BASE_FROM_DSL_BASE_H__
#define V8_TORQUE_BASE_FROM_DSL_BASE_H__

#include "src/code-stub-assembler.h"

 namespace v8 {
namespace internal {

class BaseBuiltinsFromDSLAssembler: public CodeStubAssembler {
 public:
  explicit BaseBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : CodeStubAssembler(state) {}

  using Node = compiler::Node;
  template <class T>
  using TNode = compiler::TNode<T>;
  template <class T>
  using SloppyTNode = compiler::SloppyTNode<T>;

  TNode<Oddball> Hole();
  TNode<Oddball> Null();
  TNode<Oddball> Undefined();
  TNode<Oddball> True();
  TNode<Oddball> False();
  TNode<Number> min(TNode<Number> p_x, TNode<Number> p_y);
  TNode<Number> max(TNode<Number> p_x, TNode<Number> p_y);
  TNode<HeapObject> cast_HeapObject12ATHeapObject(TNode<HeapObject> p_o, Label* label_CastError_0);
  TNode<FixedArray> cast_HeapObject12ATFixedArray(TNode<HeapObject> p_o, Label* label_CastError_1);
  TNode<FixedDoubleArray> cast_HeapObject18ATFixedDoubleArray(TNode<HeapObject> p_o, Label* label_CastError_2);
  TNode<JSDataView> cast_HeapObject12ATJSDataView(TNode<HeapObject> p_o, Label* label_CastError_3);
  TNode<JSReceiver> cast_HeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<HeapObject> p_o, Label* label_CastError_4);
  TNode<JSArray> cast_HeapObject9ATJSArray(TNode<HeapObject> p_o, Label* label_CastError_5);
  TNode<Smi> cast5ATSmi(TNode<Object> p_o, Label* label_CastError_6);
  TNode<Number> cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o, Label* label_CastError_7);
  TNode<IntPtrT> from_constexpr8ATintptr(int31_t p_i);
  TNode<Int32T> from_constexpr7ATint31(int31_t p_i);
  TNode<Int32T> from_constexpr7ATint32(int31_t p_i);
  TNode<Uint32T> from_constexpr8ATuint32(int31_t p_i);
  TNode<UintPtrT> from_constexpr9ATuintptr(int31_t p_i);
  TNode<Smi> from_constexpr5ATSmi(int31_t p_i);
  TNode<Number> from_constexpr22UT12ATHeapNumber5ATSmi(int31_t p_i);
  TNode<Float64T> from_constexpr9ATfloat64(int31_t p_i);
  TNode<IntPtrT> from_constexpr8ATintptr(int32_t p_i);
  TNode<Int32T> from_constexpr7ATint32(int32_t p_i);
  TNode<Number> from_constexpr22UT12ATHeapNumber5ATSmi(int32_t p_i);
  TNode<Number> from_constexpr22UT12ATHeapNumber5ATSmi(double p_f);
  TNode<BoolT> from_constexpr6ATbool(bool p_b);
  TNode<Smi> from_constexpr14ATLanguageMode(LanguageMode p_b);
  TNode<Int32T> from_constexpr14ATElementsKind(ElementsKind p_e);
  TNode<String> from_constexpr8ATString(const char* p_s);
  TNode<Object> from_constexpr22UT12ATHeapObject5ATSmi(const char* p_s);
  TNode<Number> convert22UT12ATHeapNumber5ATSmi(TNode<Int32T> p_i);
  TNode<IntPtrT> convert8ATintptr(TNode<Int32T> p_i);
  TNode<Smi> convert5ATSmi(TNode<Int32T> p_i);
  TNode<Number> convert22UT12ATHeapNumber5ATSmi(TNode<Uint32T> p_ui);
  TNode<Smi> convert5ATSmi(TNode<Uint32T> p_ui);
  TNode<UintPtrT> convert9ATuintptr(TNode<Uint32T> p_ui);
  TNode<Int32T> convert7ATint32(TNode<IntPtrT> p_i);
  TNode<Smi> convert5ATSmi(TNode<IntPtrT> p_i);
  TNode<Uint32T> convert8ATuint32(TNode<UintPtrT> p_ui);
  TNode<IntPtrT> convert8ATintptr(TNode<Smi> p_s);
  TNode<Int32T> convert7ATint32(TNode<Smi> p_s);
  TNode<Float64T> convert9ATfloat64(TNode<HeapNumber> p_h);
  TNode<Float64T> convert9ATfloat64(TNode<Number> p_n);
  TNode<Float64T> convert9ATfloat64(TNode<Float32T> p_f);
  TNode<Number> convert22UT12ATHeapNumber5ATSmi(TNode<Float64T> p_d);
  TNode<UintPtrT> convert9ATuintptr(TNode<Float64T> p_d);
  TNode<UintPtrT> convert9ATuintptr(TNode<RawPtrT> p_r);
  TNode<IntPtrT> convert8ATintptr(TNode<RawPtrT> p_r);
  TNode<HeapNumber> unsafe_cast12ATHeapNumber(TNode<Number> p_n);
  TNode<FixedArray> unsafe_cast12ATFixedArray(TNode<Object> p_o);
  TNode<FixedDoubleArray> unsafe_cast18ATFixedDoubleArray(TNode<Object> p_o);
  TNode<HeapNumber> unsafe_cast12ATHeapNumber(TNode<Object> p_o);
  TNode<JSReceiver> unsafe_cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o);
  TNode<Smi> unsafe_cast5ATSmi(TNode<Object> p_o);
  TNode<Number> unsafe_cast22UT12ATHeapNumber5ATSmi(TNode<Object> p_o);
  TNode<HeapObject> unsafe_cast12ATHeapObject(TNode<Object> p_o);
  TNode<JSArray> unsafe_cast9ATJSArray(TNode<Object> p_o);
  TNode<FixedTypedArrayBase> unsafe_cast21ATFixedTypedArrayBase(TNode<Object> p_o);
  TNode<NumberDictionary> unsafe_cast18ATNumberDictionary(TNode<Object> p_o);
  TNode<JSReceiver> unsafe_cast12ATJSReceiver(TNode<Object> p_o);
  TNode<JSObject> unsafe_cast10ATJSObject(TNode<Object> p_o);
  TNode<Map> unsafe_cast5ATMap(TNode<Object> p_o);
  TNode<FixedArrayBase> unsafe_cast16ATFixedArrayBase(TNode<Object> p_o);
  TNode<Map> kCOWMap();
  TNode<FixedArrayBase> kEmptyFixedArray();
  void StoreFixedDoubleArrayElementWithSmiIndex(TNode<FixedDoubleArray> p_array, TNode<Smi> p_index, TNode<Float64T> p_value);
  TNode<Object> LoadElementNoHole12ATFixedArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_8);
  TNode<Object> LoadElementNoHole18ATFixedDoubleArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_12);
  TNode<BoolT> NumberIsNaN(TNode<Number> p_number);
  TNode<BoolT> ToBoolean(TNode<Object> p_obj);
  TNode<Number> ToIndex(TNode<Object> p_input, TNode<Context> p_context, Label* label_RangeError_17);
  TNode<Code> unsafe_cast108FT9ATContext22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi(TNode<Object> p_o);
  TNode<Code> unsafe_cast70FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(TNode<Object> p_o);
  TNode<Code> unsafe_cast76FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi5ATSmi(TNode<Object> p_o);
  TNode<Code> unsafe_cast84FT9ATContext12ATJSReceiver22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi9ATBoolean(TNode<Object> p_o);
  TNode<FixedArray> cast12ATFixedArray(TNode<HeapObject> p_o, Label* label_CastError_919);
  TNode<FixedDoubleArray> cast18ATFixedDoubleArray(TNode<HeapObject> p_o, Label* label_CastError_921);
  TNode<JSArray> cast9ATJSArray(TNode<Object> p_o, Label* label_CastError_925);
  TNode<JSReceiver> cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(TNode<Object> p_o, Label* label_CastError_927);
  TNode<JSArray> cast9ATJSArray(TNode<HeapObject> p_o, Label* label_CastError_924);
  TNode<JSDataView> cast12ATJSDataView(TNode<Object> p_o, Label* label_CastError_958);
  TNode<IntPtrT> convert8ATintptr(int31_t p_i);
  TNode<FixedArray> cast12ATFixedArray(TNode<Object> p_o, Label* label_CastError_920);
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_BASE_FROM_DSL_BASE_H__
