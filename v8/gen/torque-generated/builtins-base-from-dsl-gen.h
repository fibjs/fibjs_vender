#ifndef V8_TORQUE_BASE_FROM_DSL_BASE_H__
#define V8_TORQUE_BASE_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"

namespace v8 {
namespace internal {

class BaseBuiltinsFromDSLAssembler {
 public:
  explicit BaseBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  compiler::TNode<Oddball> Hole();
  compiler::TNode<Oddball> Null();
  compiler::TNode<Oddball> Undefined();
  compiler::TNode<Oddball> True();
  compiler::TNode<Oddball> False();
  compiler::TNode<String> kEmptyString();
  compiler::TNode<String> kLengthString();
  compiler::TNode<BoolT> ElementsKindNotEqual(compiler::TNode<Int32T> p_k1, compiler::TNode<Int32T> p_k2);
  compiler::TNode<Number> Min(compiler::TNode<Number> p_x, compiler::TNode<Number> p_y);
  compiler::TNode<Number> Max(compiler::TNode<Number> p_x, compiler::TNode<Number> p_y);
  compiler::TNode<HeapObject> CastHeapObject12ATHeapObject(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<FixedArray> CastHeapObject12ATFixedArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<FixedDoubleArray> CastHeapObject18ATFixedDoubleArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<FixedArray> CastHeapObject25ATSloppyArgumentsElements(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSDataView> CastHeapObject12ATJSDataView(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSReceiver> CastHeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArray> CastHeapObject9ATJSArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<Context> CastHeapObject9ATContext(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSObject> CastHeapObject10ATJSObject(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<NumberDictionary> CastHeapObject18ATNumberDictionary(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<FixedTypedArrayBase> CastHeapObject21ATFixedTypedArrayBase(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<String> CastHeapObject8ATString(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSReceiver> CastHeapObject13ATConstructor(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<HeapNumber> CastHeapObject12ATHeapNumber(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<Map> CastHeapObject5ATMap(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArgumentsObjectWithLength> CastHeapObject29ATJSArgumentsObjectWithLength(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArray> CastHeapObject13ATFastJSArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArray> CastHeapObject20ATFastJSArrayForCopy(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArray> CastHeapObject34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSReceiver> CastHeapObject12ATJSReceiver(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSFunction> CastHeapObject12ATJSFunction(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<Smi> Cast5ATSmi(compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<Number> Cast22UT12ATHeapNumber5ATSmi(compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<IntPtrT> FromConstexpr8ATintptr(int31_t p_i);
  compiler::TNode<Int32T> FromConstexpr7ATint31(int31_t p_i);
  compiler::TNode<Int32T> FromConstexpr7ATint32(int31_t p_i);
  compiler::TNode<Uint32T> FromConstexpr8ATuint32(int31_t p_i);
  compiler::TNode<UintPtrT> FromConstexpr9ATuintptr(int31_t p_i);
  compiler::TNode<Smi> FromConstexpr5ATSmi(int31_t p_i);
  compiler::TNode<Number> FromConstexpr22UT12ATHeapNumber5ATSmi(int31_t p_i);
  compiler::TNode<Float64T> FromConstexpr9ATfloat64(int31_t p_i);
  compiler::TNode<Number> FromConstexpr22UT12ATHeapNumber5ATSmi(uint32_t p_i);
  compiler::TNode<IntPtrT> FromConstexpr8ATintptr(int32_t p_i);
  compiler::TNode<Int32T> FromConstexpr7ATint32(int32_t p_i);
  compiler::TNode<Number> FromConstexpr22UT12ATHeapNumber5ATSmi(int32_t p_i);
  compiler::TNode<Number> FromConstexpr22UT12ATHeapNumber5ATSmi(double p_f);
  compiler::TNode<BoolT> FromConstexpr6ATbool(bool p_b);
  compiler::TNode<Smi> FromConstexpr14ATLanguageMode(LanguageMode p_b);
  compiler::TNode<Int32T> FromConstexpr14ATElementsKind(ElementsKind p_e);
  compiler::TNode<String> FromConstexpr8ATString(const char* p_s);
  compiler::TNode<Object> FromConstexpr22UT12ATHeapObject5ATSmi(const char* p_s);
  compiler::TNode<IntPtrT> FromConstexpr19ATNativeContextSlot(int32_t p_c);
  compiler::TNode<Int32T> Convert7ATint32(compiler::TNode<Int32T> p_elementsKind);
  compiler::TNode<Number> Convert22UT12ATHeapNumber5ATSmi(compiler::TNode<Int32T> p_i);
  compiler::TNode<IntPtrT> Convert8ATintptr(compiler::TNode<Int32T> p_i);
  compiler::TNode<Smi> Convert5ATSmi(compiler::TNode<Int32T> p_i);
  compiler::TNode<Number> Convert22UT12ATHeapNumber5ATSmi(compiler::TNode<Uint32T> p_ui);
  compiler::TNode<Smi> Convert5ATSmi(compiler::TNode<Uint32T> p_ui);
  compiler::TNode<UintPtrT> Convert9ATuintptr(compiler::TNode<Uint32T> p_ui);
  compiler::TNode<Int32T> Convert7ATint32(compiler::TNode<IntPtrT> p_i);
  compiler::TNode<Smi> Convert5ATSmi(compiler::TNode<IntPtrT> p_i);
  compiler::TNode<Uint32T> Convert8ATuint32(compiler::TNode<UintPtrT> p_ui);
  compiler::TNode<IntPtrT> Convert8ATintptr(compiler::TNode<Smi> p_s);
  compiler::TNode<Int32T> Convert7ATint32(compiler::TNode<Smi> p_s);
  compiler::TNode<Float64T> Convert9ATfloat64(compiler::TNode<HeapNumber> p_h);
  compiler::TNode<Float64T> Convert9ATfloat64(compiler::TNode<Number> p_n);
  compiler::TNode<UintPtrT> Convert9ATuintptr(compiler::TNode<Number> p_n);
  compiler::TNode<Float64T> Convert9ATfloat64(compiler::TNode<Float32T> p_f);
  compiler::TNode<Number> Convert22UT12ATHeapNumber5ATSmi(compiler::TNode<Float64T> p_d);
  compiler::TNode<Float64T> Convert9ATfloat64(compiler::TNode<UintPtrT> p_ui);
  compiler::TNode<Number> Convert22UT12ATHeapNumber5ATSmi(compiler::TNode<UintPtrT> p_ui);
  compiler::TNode<UintPtrT> Convert9ATuintptr(compiler::TNode<Float64T> p_d);
  compiler::TNode<UintPtrT> Convert9ATuintptr(compiler::TNode<RawPtrT> p_r);
  compiler::TNode<IntPtrT> Convert8ATintptr(compiler::TNode<RawPtrT> p_r);
  compiler::TNode<Object> UnsafeCast22UT12ATHeapObject5ATSmi(compiler::TNode<Object> p_o);
  compiler::TNode<Map> kCOWMap();
  compiler::TNode<FixedArrayBase> kEmptyFixedArray();
  void StoreFixedDoubleArrayNumber(compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<Smi> p_index, compiler::TNode<Number> p_value);
  void StoreFixedDoubleArrayElementWithSmiIndex(compiler::TNode<FixedDoubleArray> p_array, compiler::TNode<Smi> p_index, compiler::TNode<Float64T> p_value);
  compiler::TNode<Int32T> AllowDoubleElements(compiler::TNode<Int32T> p_kind);
  compiler::TNode<Int32T> AllowNonNumberElements(compiler::TNode<Int32T> p_kind);
  compiler::TNode<JSFunction> GetObjectFunction(compiler::TNode<Context> p_context);
  void TorqueMoveElements(compiler::TNode<FixedArray> p_elements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count);
  void TorqueMoveElements(compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count);
  void TorqueCopyElements(compiler::TNode<FixedArray> p_dstElements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<FixedArray> p_srcElements, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count);
  void TorqueCopyElements(compiler::TNode<FixedDoubleArray> p_dstElements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<FixedDoubleArray> p_srcElements, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count);
  compiler::TNode<Object> LoadElementNoHole12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);
  compiler::TNode<Object> LoadElementNoHole18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);
  compiler::TNode<BoolT> NumberIsNaN(compiler::TNode<Number> p_number);
  compiler::TNode<BoolT> ToBoolean(compiler::TNode<Object> p_obj);
  compiler::TNode<Number> ToIndex(compiler::TNode<Object> p_input, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_RangeError);
  compiler::TNode<Number> GetLengthProperty(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  struct KeyValuePair {
    compiler::TNode<Object> key;
    compiler::TNode<Object> value;

    std::tuple<compiler::TNode<Object>, compiler::TNode<Object>> Flatten() const {
      return std::tuple_cat(std::make_tuple(key), std::make_tuple(value));
    }
  };
  compiler::TNode<BoolT> IsFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context);
  void BranchIfFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIfNotFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIfFastJSArrayForCopy(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  compiler::TNode<BoolT> IsFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<JSArray> Cast13ATFastJSArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSFunction> UnsafeCast12ATJSFunction(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<FixedArray> Cast12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<FixedDoubleArray> Cast18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArray> Cast9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArgumentsObjectWithLength> Cast29ATJSArgumentsObjectWithLength(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<BoolT> Is13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  void BranchIf13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIfNot13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf20ATFastJSArrayForCopy22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  compiler::TNode<BoolT> Is34ATFastJSArrayWithNoCustomIteration22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<IntPtrT> Convert8ATintptr(int31_t p_i);
  compiler::TNode<JSReceiver> UnsafeCast12ATJSReceiver(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<JSReceiver> Cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArray> Cast9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArray> UnsafeCast9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<NumberDictionary> UnsafeCast18ATNumberDictionary(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<FixedArray> UnsafeCast12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<Smi> UnsafeCast5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<FixedDoubleArray> UnsafeCast18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<String> Cast8ATString(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<HeapObject> UnsafeCast12ATHeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<JSReceiver> Cast13ATConstructor(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArray> Cast13ATFastJSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<FixedArray> Cast25ATSloppyArgumentsElements(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<FixedArray> Cast12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<Context> UnsafeCast9ATContext(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<JSArray> Cast20ATFastJSArrayForCopy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSReceiver> Cast12ATJSReceiver(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<Smi> Convert5ATSmi(int31_t p_i);
  compiler::TNode<JSDataView> Cast12ATJSDataView(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<Float64T> Convert9ATfloat64(int31_t p_i);
  compiler::TNode<Map> Cast5ATMap(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSArray> Cast34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<BoolT> Is12ATJSReceiver22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<HeapNumber> UnsafeCast12ATHeapNumber(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<JSReceiver> UnsafeCast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<JSObject> UnsafeCast10ATJSObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<Number> UnsafeCast22UT12ATHeapNumber5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is12ATJSFunction22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  void BranchIf34ATFastJSArrayWithNoCustomIteration22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  compiler::TNode<BoolT> Is9ATJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is18ATNumberDictionary22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is12ATFixedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is18ATFixedDoubleArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is12ATHeapObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is13ATFastJSArray9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_o);
  compiler::TNode<BoolT> Is9ATContext22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  void BranchIf12ATJSReceiver22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  compiler::TNode<FixedTypedArrayBase> UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is12ATHeapNumber22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is10ATJSObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<BoolT> Is22UT12ATHeapNumber5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  void BranchIf12ATJSFunction22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf9ATJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf18ATNumberDictionary22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf12ATFixedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf18ATFixedDoubleArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf12ATHeapObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf13ATFastJSArray9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf9ATContext22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  compiler::TNode<BoolT> Is21ATFixedTypedArrayBase22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  void BranchIf12ATHeapNumber22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf10ATJSObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  void BranchIf22UT12ATHeapNumber5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  compiler::TNode<JSFunction> Cast12ATJSFunction(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<NumberDictionary> Cast18ATNumberDictionary(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<FixedDoubleArray> Cast18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<HeapObject> Cast12ATHeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<Context> Cast9ATContext(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  void BranchIf21ATFixedTypedArrayBase22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  compiler::TNode<HeapNumber> Cast12ATHeapNumber(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<JSObject> Cast10ATJSObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
  compiler::TNode<FixedTypedArrayBase> Cast21ATFixedTypedArrayBase(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;}; 

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_BASE_FROM_DSL_BASE_H__
