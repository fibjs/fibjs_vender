class Context::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return Context::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class WeakFixedArray::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return WeakFixedArray::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class ScopeInfo::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return ScopeInfo::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class DescriptorArray::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<12> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return DescriptorArray::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class StrongDescriptorArray::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<12> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return StrongDescriptorArray::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class FeedbackVector::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<16> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return FeedbackVector::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class WeakArrayList::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return WeakArrayList::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class MegaDomHandler::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class UncompiledDataWithoutPreparseData::BodyDescriptor final : public FixedRangeBodyDescriptor<4, 8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 16;
  }

};
class UncompiledDataWithPreparseData::BodyDescriptor final : public BodyDescriptorBase {
 public:
  template <typename ObjectVisitor>
  static inline void IterateBody(Tagged<Map> map, Tagged<HeapObject> obj, int object_size, ObjectVisitor* v) {
    IteratePointer(obj, 4, v);
    IteratePointer(obj, 16, v);
  }

  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 20;
  }

};
class UncompiledDataWithoutPreparseDataWithJob::BodyDescriptor final : public FixedRangeBodyDescriptor<4, 8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 20;
  }

};
class UncompiledDataWithPreparseDataAndJob::BodyDescriptor final : public BodyDescriptorBase {
 public:
  template <typename ObjectVisitor>
  static inline void IterateBody(Tagged<Map> map, Tagged<HeapObject> obj, int object_size, ObjectVisitor* v) {
    IteratePointer(obj, 4, v);
    IteratePointer(obj, 16, v);
  }

  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class OnHeapBasicBlockProfilerData::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 32;
  }

};
class ConsString::BodyDescriptor final : public SuffixRangeBodyDescriptor<12> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 20;
  }

};
class SeqOneByteString::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return SeqOneByteString::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class SeqTwoByteString::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return SeqTwoByteString::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class SlicedString::BodyDescriptor final : public SuffixRangeBodyDescriptor<12> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 20;
  }

};
class ThinString::BodyDescriptor final : public SuffixRangeBodyDescriptor<12> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 16;
  }

};
class TurbofanBitsetType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class TurbofanUnionType::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class TurbofanRangeType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 20;
  }

};
class TurbofanHeapConstantType::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 8;
  }

};
class TurbofanOtherNumberConstantType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class TurboshaftWord32Type::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 4;
  }

};
class TurboshaftWord32RangeType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class TurboshaftWord32SetType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return TurboshaftWord32SetType::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class TurboshaftWord64Type::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 4;
  }

};
class TurboshaftWord64RangeType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 20;
  }

};
class TurboshaftWord64SetType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return TurboshaftWord64SetType::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class TurboshaftFloat64Type::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 8;
  }

};
class TurboshaftFloat64RangeType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 28;
  }

};
class TurboshaftFloat64SetType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return TurboshaftFloat64SetType::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class InternalClass::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class SmiPair::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class SmiBox::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class ExportedSubClassBase::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
class ExportedSubClass::BodyDescriptor final : public BodyDescriptorBase {
 public:
  template <typename ObjectVisitor>
  static inline void IterateBody(Tagged<Map> map, Tagged<HeapObject> obj, int object_size, ObjectVisitor* v) {
    IteratePointers(obj, 4, 12, v);
    IteratePointer(obj, 20, v);
  }

  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class AbstractInternalClassSubclass1::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 4;
  }

};
class AbstractInternalClassSubclass2::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 4;
  }

};
class InternalClassWithStructElements::BodyDescriptor final : public SuffixRangeBodyDescriptor<12> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return InternalClassWithStructElements::unchecked_cast(raw_object)->AllocatedSize();
  }

};
class ExportedSubClass2::BodyDescriptor final : public BodyDescriptorBase {
 public:
  template <typename ObjectVisitor>
  static inline void IterateBody(Tagged<Map> map, Tagged<HeapObject> obj, int object_size, ObjectVisitor* v) {
    IteratePointers(obj, 4, 12, v);
    IteratePointer(obj, 20, v);
  }

  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 24;
  }

};
class SortState::BodyDescriptor final : public SuffixRangeBodyDescriptor<4> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 68;
  }

};
class WasmStringViewIter::BodyDescriptor final : public FixedRangeBodyDescriptor<4, 8> {
 public:
  static inline int SizeOf(Tagged<Map> map, Tagged<HeapObject> raw_object) {
    return 12;
  }

};
