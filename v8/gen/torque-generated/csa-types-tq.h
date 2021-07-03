#ifndef V8_GEN_TORQUE_GENERATED_CSA_TYPES_TQ_H_
#define V8_GEN_TORQUE_GENERATED_CSA_TYPES_TQ_H_

#include "src/compiler/code-assembler.h"

namespace v8 {
namespace internal {
struct TorqueStructArguments {
  compiler::TNode<RawPtrT> frame;
  compiler::TNode<RawPtrT> base;
  compiler::TNode<IntPtrT> length;

  std::tuple<compiler::TNode<RawPtrT>, compiler::TNode<RawPtrT>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(frame), std::make_tuple(base), std::make_tuple(length));
  }
};
struct TorqueStructArgumentsInfo {
  compiler::TNode<RawPtrT> frame;
  compiler::TNode<BInt> argument_count;
  compiler::TNode<BInt> formal_parameter_count;

  std::tuple<compiler::TNode<RawPtrT>, compiler::TNode<BInt>, compiler::TNode<BInt>> Flatten() const {
    return std::tuple_cat(std::make_tuple(frame), std::make_tuple(argument_count), std::make_tuple(formal_parameter_count));
  }
};
struct TorqueStructBuffer {
  compiler::TNode<FixedArray> fixedArray;
  compiler::TNode<IntPtrT> index;
  compiler::TNode<IntPtrT> totalStringLength;
  compiler::TNode<BoolT> isOneByte;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<IntPtrT>, compiler::TNode<IntPtrT>, compiler::TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fixedArray), std::make_tuple(index), std::make_tuple(totalStringLength), std::make_tuple(isOneByte));
  }
};
struct TorqueStructVector {
  compiler::TNode<FixedArray> fixedArray;
  compiler::TNode<BoolT> onlySmis;
  compiler::TNode<BoolT> onlyNumbers;
  compiler::TNode<BoolT> skippedElements;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<BoolT>, compiler::TNode<BoolT>, compiler::TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fixedArray), std::make_tuple(onlySmis), std::make_tuple(onlyNumbers), std::make_tuple(skippedElements));
  }
};
struct TorqueStructFastJSArrayWitness {
  compiler::TNode<JSArray> stable;
  compiler::TNode<JSArray> unstable;
  compiler::TNode<Map> map;
  compiler::TNode<BoolT> hasDoubles;
  compiler::TNode<BoolT> hasSmis;
  compiler::TNode<BoolT> arrayIsPushable;

  std::tuple<compiler::TNode<JSArray>, compiler::TNode<JSArray>, compiler::TNode<Map>, compiler::TNode<BoolT>, compiler::TNode<BoolT>, compiler::TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(stable), std::make_tuple(unstable), std::make_tuple(map), std::make_tuple(hasDoubles), std::make_tuple(hasSmis), std::make_tuple(arrayIsPushable));
  }
};
struct TorqueStructFastJSArrayForReadWitness {
  compiler::TNode<JSArray> stable;
  compiler::TNode<JSArray> unstable;
  compiler::TNode<Map> map;
  compiler::TNode<BoolT> hasDoubles;

  std::tuple<compiler::TNode<JSArray>, compiler::TNode<JSArray>, compiler::TNode<Map>, compiler::TNode<BoolT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(stable), std::make_tuple(unstable), std::make_tuple(map), std::make_tuple(hasDoubles));
  }
};
struct TorqueStructKeyValuePair {
  compiler::TNode<Object> key;
  compiler::TNode<Object> value;

  std::tuple<compiler::TNode<Object>, compiler::TNode<Object>> Flatten() const {
    return std::tuple_cat(std::make_tuple(key), std::make_tuple(value));
  }
};
struct TorqueStructGrowableFixedArray {
  compiler::TNode<FixedArray> array;
  compiler::TNode<IntPtrT> capacity;
  compiler::TNode<IntPtrT> length;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<IntPtrT>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(array), std::make_tuple(capacity), std::make_tuple(length));
  }
};
struct TorqueStructIteratorRecord {
  compiler::TNode<JSReceiver> object;
  compiler::TNode<Object> next;

  std::tuple<compiler::TNode<JSReceiver>, compiler::TNode<Object>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(next));
  }
};
struct TorqueStructTypedArrayElementsInfo {
  compiler::TNode<UintPtrT> sizeLog2;
  compiler::TNode<Int32T> kind;

  std::tuple<compiler::TNode<UintPtrT>, compiler::TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(sizeLog2), std::make_tuple(kind));
  }
};
struct TorqueStructAttachedJSTypedArrayWitness {
  compiler::TNode<JSTypedArray> stable;
  compiler::TNode<JSTypedArray> unstable;
  compiler::TNode<BuiltinPtr> loadfn;

  std::tuple<compiler::TNode<JSTypedArray>, compiler::TNode<JSTypedArray>, compiler::TNode<BuiltinPtr>> Flatten() const {
    return std::tuple_cat(std::make_tuple(stable), std::make_tuple(unstable), std::make_tuple(loadfn));
  }
};
struct TorqueStructTestStructA {
  compiler::TNode<FixedArray> indexes;
  compiler::TNode<Smi> i;
  compiler::TNode<Number> k;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>> Flatten() const {
    return std::tuple_cat(std::make_tuple(indexes), std::make_tuple(i), std::make_tuple(k));
  }
};
struct TorqueStructTestStructB {
  TorqueStructTestStructA x;
  compiler::TNode<Smi> y;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>, compiler::TNode<Smi>> Flatten() const {
    return std::tuple_cat(x.Flatten(), std::make_tuple(y));
  }
};
struct TorqueStructTestStructC {
  TorqueStructTestStructA x;
  TorqueStructTestStructA y;

  std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>, compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>> Flatten() const {
    return std::tuple_cat(x.Flatten(), y.Flatten());
  }
};
struct TorqueStructTestInner {
  compiler::TNode<Int32T> x;
  compiler::TNode<Int32T> y;

  std::tuple<compiler::TNode<Int32T>, compiler::TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(x), std::make_tuple(y));
  }
};
struct TorqueStructTestOuter {
  compiler::TNode<Int32T> a;
  TorqueStructTestInner b;
  compiler::TNode<Int32T> c;

  std::tuple<compiler::TNode<Int32T>, compiler::TNode<Int32T>, compiler::TNode<Int32T>, compiler::TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(a), b.Flatten(), std::make_tuple(c));
  }
};
struct TorqueStructStructWithConst {
  compiler::TNode<Object> a;
  compiler::TNode<Int32T> b;

  std::tuple<compiler::TNode<Object>, compiler::TNode<Int32T>> Flatten() const {
    return std::tuple_cat(std::make_tuple(a), std::make_tuple(b));
  }
};
struct TorqueStructTestIterator {
  compiler::TNode<Smi> count;

  std::tuple<compiler::TNode<Smi>> Flatten() const {
    return std::tuple_cat(std::make_tuple(count));
  }
};
struct TorqueStructTestTuple5ATSmi8ATintptr {
  compiler::TNode<Smi> fst;
  compiler::TNode<IntPtrT> snd;

  std::tuple<compiler::TNode<Smi>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fst), std::make_tuple(snd));
  }
};
struct TorqueStructReference5ATSmi {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference14FixedArrayBase {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference3Map {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference13JSArrayBuffer {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference18SharedFunctionInfo {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference8ATuint16 {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference20UT5ATSmi10HeapNumber {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference9ATuintptr {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference18UT10JSReceiver3Map {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference39UT5ATSmi14FixedArrayBase13PropertyArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference20UT5ATSmi10HeapObject {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference6String {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference8ATRawPtr {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference32UT11ATUndefined9DebugInfo6Script {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference31UT14ATCoverageInfo11ATUndefined {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference21UT6ATNull10JSReceiver {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference18UT5ATSmi9ByteArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructSBox8ATintptr {
  compiler::TNode<IntPtrT> value;

  std::tuple<compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(value));
  }
};
struct TorqueStructSBox13SBox8ATintptr {
  TorqueStructSBox8ATintptr value;

  std::tuple<compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(value.Flatten());
  }
};
struct TorqueStructTestTuple8ATintptr5ATSmi {
  compiler::TNode<IntPtrT> fst;
  compiler::TNode<Smi> snd;

  std::tuple<compiler::TNode<IntPtrT>, compiler::TNode<Smi>> Flatten() const {
    return std::tuple_cat(std::make_tuple(fst), std::make_tuple(snd));
  }
};
struct TorqueStructReference10JSReceiver {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference84UT19ATCallableApiObject17ATCallableJSProxy11ATUndefined15JSBoundFunction10JSFunction {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference98FT7Context20UT5ATSmi10HeapObject20UT5ATSmi10HeapObject20UT5ATSmi10HeapObject20UT5ATSmi10HeapNumber {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference48FT7Context9SortState5ATSmi20UT5ATSmi10HeapObject {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference54FT7Context9SortState5ATSmi20UT5ATSmi10HeapObject5ATSmi {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference32FT7Context9SortState5ATSmi5ATSmi {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference85FT7Context10JSReceiver20UT5ATSmi10HeapObject20UT5ATSmi10HeapNumber17UT7ATFalse6ATTrue {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference10FixedArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference11ATScopeInfo {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference9ATfloat64 {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference8ATuint32 {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference7ATint32 {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference7ATuint8 {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference14ATInstanceType {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference10HeapObject {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference15DescriptorArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference18ATLayoutDescriptor {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference15ATDependentCode {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference13UT5ATSmi4Cell {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference46UT5ATSmi17ATTransitionArray3Map13PrototypeInfo {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference9ByteArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference9EnumCache {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference7Context {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference12FeedbackCell {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference6ATCode {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference23UT11ATUndefined7Foreign {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference17ATObjectHashTable {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference34UT11ATUndefined17JSModuleNamespace {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference77UT22ATSourceTextModuleInfo10JSFunction17JSGeneratorObject18SharedFunctionInfo {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference6Script {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference21UT9ATTheHole8JSObject {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference7Foreign {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference6Module {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference35UT11ATUndefined18SharedFunctionInfo {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference24UT6ATZero13WeakArrayList {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference19UT11ATUndefined3Map {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference13BytecodeArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference46UT22ATNoSharedNameSentinel11ATScopeInfo6String {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference7ATint16 {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference29UT15ATUninitialized9FreeSpace {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference33UT5ATSmi11ATUndefined10HeapNumber {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference27UT5ATNaN5ATSmi11ATUndefined {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference15ATNativeContext {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference13JSGlobalProxy {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference4Name {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference40UT16ATNonNullForeign11ATUndefined6ATZero {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference30UT11ATUndefined6ATZero7Foreign {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference39UT11ATUndefined6ATZero15InterceptorInfo {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference15UT6ATCode5ATSmi {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference10JSFunction {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference9JSPromise {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference29UT6ATNull11ATUndefined6String {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference29UT12ATFrameArray11ATUndefined {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference31UT11ATUndefined14StackFrameInfo {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference20ATWasmInstanceObject {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference27UT11ATUndefined10FixedArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference38UT11ATUndefined21AsyncGeneratorRequest {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference22UT11ATUndefined6String {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference27UT11ATUndefined10JSReceiver {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference26UT6ATZero15PromiseReaction {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference44UT11ATUndefined9JSPromise17PromiseCapability {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference21UT5ATSmi11ATUndefined {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference27UT16ATNonNullForeign6ATZero {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference22UT11ATUndefined6Script {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference30UT11ATUndefined13BytecodeArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference43UT11ATUndefined14FeedbackVector10FixedArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference16ATAllocationSite {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference13WeakArrayList {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference25UT11ATUndefined9ByteArray {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference30UT11ATUndefined13WeakArrayList {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference30UT11ATUndefined13JSArrayBuffer {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference10HeapNumber {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference24UT11ATUndefined8WeakCell {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference36UT11ATUndefined19JSFinalizationGroup {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference19JSFinalizationGroup {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference60UT11ATUndefined9ByteArray33SourcePositionTableWithFrameCache {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
struct TorqueStructReference6ATint8 {
  compiler::TNode<HeapObject> object;
  compiler::TNode<IntPtrT> offset;

  std::tuple<compiler::TNode<HeapObject>, compiler::TNode<IntPtrT>> Flatten() const {
    return std::tuple_cat(std::make_tuple(object), std::make_tuple(offset));
  }
};
}  // namespace internal
}  // namespace v8
#endif  // V8_GEN_TORQUE_GENERATED_CSA_TYPES_TQ_H_
