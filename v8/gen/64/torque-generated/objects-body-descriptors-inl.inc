class Context::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<Context>(raw_object)->AllocatedSize();
  }

};
class WeakArrayList::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<WeakArrayList>(raw_object)->AllocatedSize();
  }

};
class ScopeInfo::BodyDescriptor final : public SuffixRangeBodyDescriptor<16> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<ScopeInfo>(raw_object)->AllocatedSize();
  }

};
class DescriptorArray::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<16> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<DescriptorArray>(raw_object)->AllocatedSize();
  }

};
class StrongDescriptorArray::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<16> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<StrongDescriptorArray>(raw_object)->AllocatedSize();
  }

};
class FeedbackVector::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<24> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<FeedbackVector>(raw_object)->AllocatedSize();
  }

};
class MegaDomHandler::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class OnHeapBasicBlockProfilerData::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 64;
  }

};
class DictionaryTemplateInfo::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class TurbofanBitsetType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 16;
  }

};
class TurbofanUnionType::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class TurbofanRangeType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class TurbofanHeapConstantType::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 16;
  }

};
class TurbofanOtherNumberConstantType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 16;
  }

};
class TurboshaftWord32Type::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 8;
  }

};
class TurboshaftWord32RangeType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 16;
  }

};
class TurboshaftWord32SetType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<TurboshaftWord32SetType>(raw_object)->AllocatedSize();
  }

};
class TurboshaftWord64Type::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 8;
  }

};
class TurboshaftWord64RangeType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class TurboshaftWord64SetType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<TurboshaftWord64SetType>(raw_object)->AllocatedSize();
  }

};
class TurboshaftFloat64Type::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class TurboshaftFloat64RangeType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 32;
  }

};
class TurboshaftFloat64SetType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<TurboshaftFloat64SetType>(raw_object)->AllocatedSize();
  }

};
class InternalClass::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class SmiPair::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class SmiBox::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class ExportedSubClassBase::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class ExportedSubClass::BodyDescriptor final : public BodyDescriptorBase {
 public:
  template <typename ObjectVisitor>
  static inline void IterateBody(Tagged<Map> map, Tagged<HeapObject> obj, int object_size, ObjectVisitor* v) {
    IteratePointers(obj, 8, 24, v);
    IteratePointer(obj, 32, v);
  }

  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 40;
  }

};
class AbstractInternalClassSubclass1::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 8;
  }

};
class AbstractInternalClassSubclass2::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 8;
  }

};
class InternalClassWithStructElements::BodyDescriptor final : public SuffixRangeBodyDescriptor<16> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return UncheckedCast<InternalClassWithStructElements>(raw_object)->AllocatedSize();
  }

};
class ExportedSubClass2::BodyDescriptor final : public BodyDescriptorBase {
 public:
  template <typename ObjectVisitor>
  static inline void IterateBody(Tagged<Map> map, Tagged<HeapObject> obj, int object_size, ObjectVisitor* v) {
    IteratePointers(obj, 8, 24, v);
    IteratePointer(obj, 32, v);
  }

  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 40;
  }

};
class SortState::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 136;
  }

};
class WasmFastApiCallData::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 32;
  }

};
class WasmStringViewIter::BodyDescriptor final : public FixedRangeBodyDescriptor<8, 16> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
