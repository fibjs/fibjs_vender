class WasmInternalFunction;
class WasmNull;
class WasmObject;
class WasmArray;
class WasmApiFunctionRef;
class WasmFunctionData;
class WasmExportedFunctionData;
class WasmJSFunctionData;
class WasmCapiFunctionData;
class WasmResumeData;
class WasmIndirectFunctionTable;
class WasmContinuationObject;
class WasmSuspenderObject;
class WasmExceptionTag;
class WasmModuleObject;
class WasmTableObject;
class WasmMemoryObject;
class WasmGlobalObject;
class WasmTagObject;
class AsmWasmData;
class WasmTypeInfo;
class WasmStruct;
// Alias for HeapObject::IsWasmInternalFunction() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
V8_EXPORT_PRIVATE bool IsWasmInternalFunction_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
template <class D, class P>
class TorqueGeneratedWasmInternalFunction : public P {
  static_assert(
      std::is_same<WasmInternalFunction, D>::value,
      "Use this class as direct base for WasmInternalFunction.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmInternalFunction.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmInternalFunction<D,P>;

  // Torque type: (class WasmInstanceObject | class WasmApiFunctionRef)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
  inline HeapObject ref() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
  inline HeapObject ref(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
  inline void set_ref(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSFunction)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
  inline HeapObject external() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
  inline HeapObject external(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
  inline void set_external(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=3
  inline Code code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=3
  inline Code code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=3
  inline void set_code(Code value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=44&c=3
  inline int function_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=44&c=3
  inline void set_function_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmInternalFunction)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_EXPORT_PRIVATE void WasmInternalFunctionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=38&c=3
  static constexpr int kRefOffset = P::kHeaderSize;
  static constexpr int kRefOffsetEnd = kRefOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=40&c=3
  static constexpr int kExternalOffset = kRefOffsetEnd + 1;
  static constexpr int kExternalOffsetEnd = kExternalOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=3
  static constexpr int kCodeOffset = kExternalOffsetEnd + 1;
  static constexpr int kCodeOffsetEnd = kCodeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=44&c=3
  static constexpr int kFunctionIndexOffset = kCodeOffsetEnd + 1;
  static constexpr int kFunctionIndexOffsetEnd = kFunctionIndexOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFunctionIndexOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=3
  static constexpr int kCallTargetOffset = kFunctionIndexOffsetEnd + 1;
  static constexpr int kCallTargetOffsetEnd = kCallTargetOffset + kExternalPointerSlotSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kCallTargetOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCallTargetOffsetEnd + 1;
  static constexpr int kHeaderSize = kCallTargetOffsetEnd + 1;
  static constexpr int kSize = kCallTargetOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=31&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmInternalFunction() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmInternalFunction, DAlias>::value,
        "class TorqueGeneratedWasmInternalFunction should be used as direct base for WasmInternalFunction.");
  }

 protected:
  inline explicit TorqueGeneratedWasmInternalFunction(Address ptr);
};

// Alias for HeapObject::IsWasmNull() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=231&c=1
V8_EXPORT_PRIVATE bool IsWasmNull_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=231&c=1
template <class D, class P>
class TorqueGeneratedWasmNull : public P {
  static_assert(
      std::is_same<WasmNull, D>::value,
      "Use this class as direct base for WasmNull.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmNull.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmNull<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=231&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=231&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmNull)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=231&c=1
  V8_EXPORT_PRIVATE void WasmNullVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;
  static constexpr int kSize = P::kHeaderSize;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=231&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 4);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=231&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmNull() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmNull, DAlias>::value,
        "class TorqueGeneratedWasmNull should be used as direct base for WasmNull.");
  }

 protected:
  inline explicit TorqueGeneratedWasmNull(Address ptr);
};

// Alias for HeapObject::IsWasmObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=1
V8_EXPORT_PRIVATE bool IsWasmObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=1
template <class D, class P>
class TorqueGeneratedWasmObject : public P {
  static_assert(
      std::is_same<WasmObject, D>::value,
      "Use this class as direct base for WasmObject.");
  static_assert(
      std::is_same<JSReceiver, P>::value,
      "Pass in JSReceiver as second template parameter for TorqueGeneratedWasmObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=1
  V8_EXPORT_PRIVATE void WasmObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmObject, DAlias>::value,
        "class TorqueGeneratedWasmObject should be used as direct base for WasmObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmObject(Address ptr);
};

// Alias for HeapObject::IsWasmArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=215&c=1
V8_EXPORT_PRIVATE bool IsWasmArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=215&c=1
template <class D, class P>
class TorqueGeneratedWasmArray : public P {
  static_assert(
      std::is_same<WasmArray, D>::value,
      "Use this class as direct base for WasmArray.");
  static_assert(
      std::is_same<WasmObject, P>::value,
      "Pass in WasmObject as second template parameter for TorqueGeneratedWasmArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=217&c=3
  inline uint32_t length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=217&c=3
  inline void set_length(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=215&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=215&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=215&c=1
  V8_EXPORT_PRIVATE void WasmArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=217&c=3
  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=220&c=31
  static constexpr int kOptionalPaddingOffset = kLengthOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kHeaderSize = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kSize = kOptionalPaddingOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=215&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=215&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmArray, DAlias>::value,
        "class TorqueGeneratedWasmArray should be used as direct base for WasmArray.");
  }

 protected:
  inline explicit TorqueGeneratedWasmArray(Address ptr);
};

// Alias for HeapObject::IsWasmApiFunctionRef() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
V8_EXPORT_PRIVATE bool IsWasmApiFunctionRef_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
template <class D, class P>
class TorqueGeneratedWasmApiFunctionRef : public P {
  static_assert(
      std::is_same<WasmApiFunctionRef, D>::value,
      "Use this class as direct base for WasmApiFunctionRef.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmApiFunctionRef.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmApiFunctionRef<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
  inline NativeContext native_context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
  inline NativeContext native_context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
  inline void set_native_context(NativeContext value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class JSReceiver | Undefined)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  inline HeapObject callable() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  inline HeapObject callable(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  inline void set_callable(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WasmInstanceObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=25&c=3
  inline HeapObject instance() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=25&c=3
  inline HeapObject instance(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=25&c=3
  inline void set_instance(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=26&c=3
  inline int suspend() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=26&c=3
  inline void set_suspend(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmApiFunctionRef)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_EXPORT_PRIVATE void WasmApiFunctionRefVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
  static constexpr int kNativeContextOffset = P::kHeaderSize;
  static constexpr int kNativeContextOffsetEnd = kNativeContextOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  static constexpr int kCallableOffset = kNativeContextOffsetEnd + 1;
  static constexpr int kCallableOffsetEnd = kCallableOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=25&c=3
  static constexpr int kInstanceOffset = kCallableOffsetEnd + 1;
  static constexpr int kInstanceOffsetEnd = kInstanceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=26&c=3
  static constexpr int kSuspendOffset = kInstanceOffsetEnd + 1;
  static constexpr int kSuspendOffsetEnd = kSuspendOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSuspendOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSuspendOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSuspendOffsetEnd + 1;
  static constexpr int kHeaderSize = kSuspendOffsetEnd + 1;
  static constexpr int kSize = kSuspendOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 20);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmApiFunctionRef() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmApiFunctionRef, DAlias>::value,
        "class TorqueGeneratedWasmApiFunctionRef should be used as direct base for WasmApiFunctionRef.");
  }

 protected:
  inline explicit TorqueGeneratedWasmApiFunctionRef(Address ptr);
};

// Alias for HeapObject::IsWasmFunctionData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=52&c=1
V8_EXPORT_PRIVATE bool IsWasmFunctionData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=52&c=1
template <class D, class P>
class TorqueGeneratedWasmFunctionData : public P {
  static_assert(
      std::is_same<WasmFunctionData, D>::value,
      "Use this class as direct base for WasmFunctionData.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmFunctionData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmFunctionData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=3
  inline WasmInternalFunction internal() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=3
  inline WasmInternalFunction internal(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=3
  inline void set_internal(WasmInternalFunction value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=56&c=3
  inline Code wrapper_code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=56&c=3
  inline Code wrapper_code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=56&c=3
  inline void set_wrapper_code(Code value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
  inline int js_promise_flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
  inline void set_js_promise_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=52&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=52&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmFunctionData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=52&c=1
  V8_EXPORT_PRIVATE void WasmFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=54&c=3
  static constexpr int kInternalOffset = P::kHeaderSize;
  static constexpr int kInternalOffsetEnd = kInternalOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=56&c=3
  static constexpr int kWrapperCodeOffset = kInternalOffsetEnd + 1;
  static constexpr int kWrapperCodeOffsetEnd = kWrapperCodeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
  static constexpr int kJsPromiseFlagsOffset = kWrapperCodeOffsetEnd + 1;
  static constexpr int kJsPromiseFlagsOffsetEnd = kJsPromiseFlagsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kJsPromiseFlagsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kJsPromiseFlagsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kJsPromiseFlagsOffsetEnd + 1;
  static constexpr int kHeaderSize = kJsPromiseFlagsOffsetEnd + 1;
  static constexpr int kSize = kJsPromiseFlagsOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=52&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=52&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmFunctionData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmFunctionData, DAlias>::value,
        "class TorqueGeneratedWasmFunctionData should be used as direct base for WasmFunctionData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmFunctionData(Address ptr);
};

// Alias for HeapObject::IsWasmExportedFunctionData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=1
V8_EXPORT_PRIVATE bool IsWasmExportedFunctionData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=1
template <class D, class P>
class TorqueGeneratedWasmExportedFunctionData : public P {
  static_assert(
      std::is_same<WasmExportedFunctionData, D>::value,
      "Use this class as direct base for WasmExportedFunctionData.");
  static_assert(
      std::is_same<WasmFunctionData, P>::value,
      "Pass in WasmFunctionData as second template parameter for TorqueGeneratedWasmExportedFunctionData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmExportedFunctionData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=65&c=3
  inline WasmInstanceObject instance() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=65&c=3
  inline WasmInstanceObject instance(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=65&c=3
  inline void set_instance(WasmInstanceObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
  inline int function_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
  inline void set_function_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=67&c=3
  inline int wrapper_budget() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=67&c=3
  inline void set_wrapper_budget(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=70&c=3
  inline Code c_wrapper_code() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=70&c=3
  inline Code c_wrapper_code(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=70&c=3
  inline void set_c_wrapper_code(Code value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=71&c=3
  inline int packed_args_size() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=71&c=3
  inline void set_packed_args_size(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=3
  inline int canonical_type_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=3
  inline void set_canonical_type_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmExportedFunctionData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=1
  V8_EXPORT_PRIVATE void WasmExportedFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=65&c=3
  static constexpr int kInstanceOffset = P::kHeaderSize;
  static constexpr int kInstanceOffsetEnd = kInstanceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=66&c=3
  static constexpr int kFunctionIndexOffset = kInstanceOffsetEnd + 1;
  static constexpr int kFunctionIndexOffsetEnd = kFunctionIndexOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=67&c=3
  static constexpr int kWrapperBudgetOffset = kFunctionIndexOffsetEnd + 1;
  static constexpr int kWrapperBudgetOffsetEnd = kWrapperBudgetOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=70&c=3
  static constexpr int kCWrapperCodeOffset = kWrapperBudgetOffsetEnd + 1;
  static constexpr int kCWrapperCodeOffsetEnd = kCWrapperCodeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=71&c=3
  static constexpr int kPackedArgsSizeOffset = kCWrapperCodeOffsetEnd + 1;
  static constexpr int kPackedArgsSizeOffsetEnd = kPackedArgsSizeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=72&c=3
  static constexpr int kCanonicalTypeIndexOffset = kPackedArgsSizeOffsetEnd + 1;
  static constexpr int kCanonicalTypeIndexOffsetEnd = kCanonicalTypeIndexOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCanonicalTypeIndexOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=73&c=3
  static constexpr int kSigOffset = kCanonicalTypeIndexOffsetEnd + 1;
  static constexpr int kSigOffsetEnd = kSigOffset + kExternalPointerSlotSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kSigOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSigOffsetEnd + 1;
  static constexpr int kHeaderSize = kSigOffsetEnd + 1;
  static constexpr int kSize = kSigOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 44);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=61&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmExportedFunctionData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmExportedFunctionData, DAlias>::value,
        "class TorqueGeneratedWasmExportedFunctionData should be used as direct base for WasmExportedFunctionData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmExportedFunctionData(Address ptr);
};

// Alias for HeapObject::IsWasmJSFunctionData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=76&c=1
V8_EXPORT_PRIVATE bool IsWasmJSFunctionData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=76&c=1
template <class D, class P>
class TorqueGeneratedWasmJSFunctionData : public P {
  static_assert(
      std::is_same<WasmJSFunctionData, D>::value,
      "Use this class as direct base for WasmJSFunctionData.");
  static_assert(
      std::is_same<WasmFunctionData, P>::value,
      "Pass in WasmFunctionData as second template parameter for TorqueGeneratedWasmJSFunctionData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmJSFunctionData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=77&c=3
  inline int serialized_return_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=77&c=3
  inline void set_serialized_return_count(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=3
  inline int serialized_parameter_count() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=3
  inline void set_serialized_parameter_count(int value);

  // Torque type: PodArrayOfWasmValueType
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
  inline PodArray<wasm::ValueType> serialized_signature() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
  inline PodArray<wasm::ValueType> serialized_signature(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
  inline void set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=76&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=76&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmJSFunctionData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=76&c=1
  V8_EXPORT_PRIVATE void WasmJSFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=77&c=3
  static constexpr int kSerializedReturnCountOffset = P::kHeaderSize;
  static constexpr int kSerializedReturnCountOffsetEnd = kSerializedReturnCountOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=78&c=3
  static constexpr int kSerializedParameterCountOffset = kSerializedReturnCountOffsetEnd + 1;
  static constexpr int kSerializedParameterCountOffsetEnd = kSerializedParameterCountOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=79&c=3
  static constexpr int kSerializedSignatureOffset = kSerializedParameterCountOffsetEnd + 1;
  static constexpr int kSerializedSignatureOffsetEnd = kSerializedSignatureOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kHeaderSize = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kSize = kSerializedSignatureOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=76&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 28);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=76&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmJSFunctionData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmJSFunctionData, DAlias>::value,
        "class TorqueGeneratedWasmJSFunctionData should be used as direct base for WasmJSFunctionData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmJSFunctionData(Address ptr);
};

// Alias for HeapObject::IsWasmCapiFunctionData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=82&c=1
V8_EXPORT_PRIVATE bool IsWasmCapiFunctionData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=82&c=1
template <class D, class P>
class TorqueGeneratedWasmCapiFunctionData : public P {
  static_assert(
      std::is_same<WasmCapiFunctionData, D>::value,
      "Use this class as direct base for WasmCapiFunctionData.");
  static_assert(
      std::is_same<WasmFunctionData, P>::value,
      "Pass in WasmFunctionData as second template parameter for TorqueGeneratedWasmCapiFunctionData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmCapiFunctionData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=3
  inline Foreign embedder_data() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=3
  inline Foreign embedder_data(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=3
  inline void set_embedder_data(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: PodArrayOfWasmValueType
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
  inline PodArray<wasm::ValueType> serialized_signature() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
  inline PodArray<wasm::ValueType> serialized_signature(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
  inline void set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=82&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=82&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmCapiFunctionData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=82&c=1
  V8_EXPORT_PRIVATE void WasmCapiFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=3
  static constexpr int kEmbedderDataOffset = P::kHeaderSize;
  static constexpr int kEmbedderDataOffsetEnd = kEmbedderDataOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
  static constexpr int kSerializedSignatureOffset = kEmbedderDataOffsetEnd + 1;
  static constexpr int kSerializedSignatureOffsetEnd = kSerializedSignatureOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kHeaderSize = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kSize = kSerializedSignatureOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=82&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=82&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmCapiFunctionData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmCapiFunctionData, DAlias>::value,
        "class TorqueGeneratedWasmCapiFunctionData should be used as direct base for WasmCapiFunctionData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmCapiFunctionData(Address ptr);
};

// Alias for HeapObject::IsWasmResumeData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
V8_EXPORT_PRIVATE bool IsWasmResumeData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
template <class D, class P>
class TorqueGeneratedWasmResumeData : public P {
  static_assert(
      std::is_same<WasmResumeData, D>::value,
      "Use this class as direct base for WasmResumeData.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmResumeData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmResumeData<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
  inline WasmSuspenderObject suspender() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
  inline WasmSuspenderObject suspender(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
  inline void set_suspender(WasmSuspenderObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=89&c=3
  inline int on_resume() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=89&c=3
  inline void set_on_resume(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmResumeData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_EXPORT_PRIVATE void WasmResumeDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
  static constexpr int kSuspenderOffset = P::kHeaderSize;
  static constexpr int kSuspenderOffsetEnd = kSuspenderOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=89&c=3
  static constexpr int kOnResumeOffset = kSuspenderOffsetEnd + 1;
  static constexpr int kOnResumeOffsetEnd = kOnResumeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kOnResumeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kOnResumeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOnResumeOffsetEnd + 1;
  static constexpr int kHeaderSize = kOnResumeOffsetEnd + 1;
  static constexpr int kSize = kOnResumeOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmResumeData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmResumeData, DAlias>::value,
        "class TorqueGeneratedWasmResumeData should be used as direct base for WasmResumeData.");
  }

 protected:
  inline explicit TorqueGeneratedWasmResumeData(Address ptr);
};

// Alias for HeapObject::IsWasmIndirectFunctionTable() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=1
V8_EXPORT_PRIVATE bool IsWasmIndirectFunctionTable_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=1
template <class D, class P>
class TorqueGeneratedWasmIndirectFunctionTable : public P {
  static_assert(
      std::is_same<WasmIndirectFunctionTable, D>::value,
      "Use this class as direct base for WasmIndirectFunctionTable.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedWasmIndirectFunctionTable.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmIndirectFunctionTable<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
  inline ByteArray sig_ids() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
  inline ByteArray sig_ids(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
  inline void set_sig_ids(ByteArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  inline ByteArray targets() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  inline ByteArray targets(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  inline void set_targets(ByteArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=95&c=3
  inline FixedArray refs() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=95&c=3
  inline FixedArray refs(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=95&c=3
  inline void set_refs(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=96&c=3
  inline uint32_t size() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=96&c=3
  inline void set_size(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmIndirectFunctionTable)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=1
  V8_EXPORT_PRIVATE void WasmIndirectFunctionTableVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
  static constexpr int kSigIdsOffset = P::kHeaderSize;
  static constexpr int kSigIdsOffsetEnd = kSigIdsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  static constexpr int kTargetsOffset = kSigIdsOffsetEnd + 1;
  static constexpr int kTargetsOffsetEnd = kTargetsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=95&c=3
  static constexpr int kRefsOffset = kTargetsOffsetEnd + 1;
  static constexpr int kRefsOffsetEnd = kRefsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kRefsOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=96&c=3
  static constexpr int kSizeOffset = kRefsOffsetEnd + 1;
  static constexpr int kSizeOffsetEnd = kSizeOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=31
  static constexpr int kOptionalPaddingOffset = kSizeOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kHeaderSize = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kSize = kOptionalPaddingOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 20);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmIndirectFunctionTable() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmIndirectFunctionTable, DAlias>::value,
        "class TorqueGeneratedWasmIndirectFunctionTable should be used as direct base for WasmIndirectFunctionTable.");
  }

 protected:
  inline explicit TorqueGeneratedWasmIndirectFunctionTable(Address ptr);
};

// Alias for HeapObject::IsWasmContinuationObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=101&c=1
V8_EXPORT_PRIVATE bool IsWasmContinuationObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=101&c=1
template <class D, class P>
class TorqueGeneratedWasmContinuationObject : public P {
  static_assert(
      std::is_same<WasmContinuationObject, D>::value,
      "Use this class as direct base for WasmContinuationObject.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmContinuationObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmContinuationObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=102&c=3
  inline Foreign stack() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=102&c=3
  inline Foreign stack(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=102&c=3
  inline void set_stack(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WasmContinuationObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=3
  inline HeapObject parent() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=3
  inline HeapObject parent(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=3
  inline void set_parent(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=101&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=101&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmContinuationObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=101&c=1
  V8_EXPORT_PRIVATE void WasmContinuationObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=102&c=3
  static constexpr int kStackOffset = P::kHeaderSize;
  static constexpr int kStackOffsetEnd = kStackOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=103&c=3
  static constexpr int kParentOffset = kStackOffsetEnd + 1;
  static constexpr int kParentOffsetEnd = kParentOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kParentOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=104&c=3
  static constexpr int kJmpbufOffset = kParentOffsetEnd + 1;
  static constexpr int kJmpbufOffsetEnd = kJmpbufOffset + kExternalPointerSlotSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kJmpbufOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kJmpbufOffsetEnd + 1;
  static constexpr int kHeaderSize = kJmpbufOffsetEnd + 1;
  static constexpr int kSize = kJmpbufOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=101&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=101&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmContinuationObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmContinuationObject, DAlias>::value,
        "class TorqueGeneratedWasmContinuationObject should be used as direct base for WasmContinuationObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmContinuationObject(Address ptr);
};

// Alias for HeapObject::IsWasmSuspenderObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=1
V8_EXPORT_PRIVATE bool IsWasmSuspenderObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=1
template <class D, class P>
class TorqueGeneratedWasmSuspenderObject : public P {
  static_assert(
      std::is_same<WasmSuspenderObject, D>::value,
      "Use this class as direct base for WasmSuspenderObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmSuspenderObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmSuspenderObject<D,P>;

  // Torque type: (Undefined | class WasmContinuationObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=108&c=3
  inline HeapObject continuation() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=108&c=3
  inline HeapObject continuation(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=108&c=3
  inline void set_continuation(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class WasmSuspenderObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=109&c=3
  inline HeapObject parent() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=109&c=3
  inline HeapObject parent(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=109&c=3
  inline void set_parent(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=3
  inline HeapObject resume() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=3
  inline HeapObject resume(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=3
  inline void set_resume(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=111&c=3
  inline HeapObject reject() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=111&c=3
  inline HeapObject reject(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=111&c=3
  inline void set_reject(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=112&c=3
  inline int state() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=112&c=3
  inline void set_state(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=116&c=3
  inline uint32_t wasm_to_js_counter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=116&c=3
  inline void set_wasm_to_js_counter(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmSuspenderObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=1
  V8_EXPORT_PRIVATE void WasmSuspenderObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=108&c=3
  static constexpr int kContinuationOffset = P::kHeaderSize;
  static constexpr int kContinuationOffsetEnd = kContinuationOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=109&c=3
  static constexpr int kParentOffset = kContinuationOffsetEnd + 1;
  static constexpr int kParentOffsetEnd = kParentOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=110&c=3
  static constexpr int kResumeOffset = kParentOffsetEnd + 1;
  static constexpr int kResumeOffsetEnd = kResumeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=111&c=3
  static constexpr int kRejectOffset = kResumeOffsetEnd + 1;
  static constexpr int kRejectOffsetEnd = kRejectOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=112&c=3
  static constexpr int kStateOffset = kRejectOffsetEnd + 1;
  static constexpr int kStateOffsetEnd = kStateOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kStateOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=116&c=3
  static constexpr int kWasmToJsCounterOffset = kStateOffsetEnd + 1;
  static constexpr int kWasmToJsCounterOffsetEnd = kWasmToJsCounterOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=31
  static constexpr int kOptionalPaddingOffset = kWasmToJsCounterOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kHeaderSize = kOptionalPaddingOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmSuspenderObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmSuspenderObject, DAlias>::value,
        "class TorqueGeneratedWasmSuspenderObject should be used as direct base for WasmSuspenderObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmSuspenderObject(Address ptr);
};

// Alias for HeapObject::IsWasmExceptionTag() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=121&c=1
V8_EXPORT_PRIVATE bool IsWasmExceptionTag_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=121&c=1
template <class D, class P>
class TorqueGeneratedWasmExceptionTag : public P {
  static_assert(
      std::is_same<WasmExceptionTag, D>::value,
      "Use this class as direct base for WasmExceptionTag.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedWasmExceptionTag.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmExceptionTag<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=125&c=3
  inline int index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=125&c=3
  inline void set_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=121&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=121&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmExceptionTag)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=121&c=1
  V8_EXPORT_PRIVATE void WasmExceptionTagVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=125&c=3
  static constexpr int kIndexOffset = P::kHeaderSize;
  static constexpr int kIndexOffsetEnd = kIndexOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kHeaderSize = kIndexOffsetEnd + 1;
  static constexpr int kSize = kIndexOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=121&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=121&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmExceptionTag() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmExceptionTag, DAlias>::value,
        "class TorqueGeneratedWasmExceptionTag should be used as direct base for WasmExceptionTag.");
  }

 protected:
  inline explicit TorqueGeneratedWasmExceptionTag(Address ptr);
};

// Alias for HeapObject::IsWasmModuleObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=130&c=1
V8_EXPORT_PRIVATE bool IsWasmModuleObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=130&c=1
template <class D, class P>
class TorqueGeneratedWasmModuleObject : public P {
  static_assert(
      std::is_same<WasmModuleObject, D>::value,
      "Use this class as direct base for WasmModuleObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmModuleObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmModuleObject<D,P>;

  // Torque type: ManagedWasmNativeModule
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
  inline Managed<wasm::NativeModule> managed_native_module() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
  inline Managed<wasm::NativeModule> managed_native_module(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
  inline void set_managed_native_module(Managed<wasm::NativeModule> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
  inline Script script() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
  inline Script script(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
  inline void set_script(Script value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=130&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=130&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmModuleObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=130&c=1
  V8_EXPORT_PRIVATE void WasmModuleObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
  static constexpr int kManagedNativeModuleOffset = P::kHeaderSize;
  static constexpr int kManagedNativeModuleOffsetEnd = kManagedNativeModuleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
  static constexpr int kScriptOffset = kManagedNativeModuleOffsetEnd + 1;
  static constexpr int kScriptOffsetEnd = kScriptOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kScriptOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kScriptOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kScriptOffsetEnd + 1;
  static constexpr int kHeaderSize = kScriptOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmModuleObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmModuleObject, DAlias>::value,
        "class TorqueGeneratedWasmModuleObject should be used as direct base for WasmModuleObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmModuleObject(Address ptr);
};

// Alias for HeapObject::IsWasmTableObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=1
V8_EXPORT_PRIVATE bool IsWasmTableObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=1
template <class D, class P>
class TorqueGeneratedWasmTableObject : public P {
  static_assert(
      std::is_same<WasmTableObject, D>::value,
      "Use this class as direct base for WasmTableObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmTableObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmTableObject<D,P>;

  // Torque type: (Undefined | class WasmInstanceObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
  inline HeapObject instance() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
  inline HeapObject instance(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
  inline void set_instance(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=143&c=3
  inline FixedArray entries() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=143&c=3
  inline FixedArray entries(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=143&c=3
  inline void set_entries(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=3
  inline int current_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=3
  inline void set_current_length(int value);

  // Torque type: NumberOrUndefined
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=145&c=3
  inline Object maximum_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=145&c=3
  inline Object maximum_length(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=145&c=3
  inline void set_maximum_length(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
  inline FixedArray dispatch_tables() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
  inline FixedArray dispatch_tables(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
  inline void set_dispatch_tables(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=147&c=3
  inline int raw_type() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=147&c=3
  inline void set_raw_type(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmTableObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=1
  V8_EXPORT_PRIVATE void WasmTableObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
  static constexpr int kInstanceOffset = P::kHeaderSize;
  static constexpr int kInstanceOffsetEnd = kInstanceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=143&c=3
  static constexpr int kEntriesOffset = kInstanceOffsetEnd + 1;
  static constexpr int kEntriesOffsetEnd = kEntriesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=144&c=3
  static constexpr int kCurrentLengthOffset = kEntriesOffsetEnd + 1;
  static constexpr int kCurrentLengthOffsetEnd = kCurrentLengthOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=145&c=3
  static constexpr int kMaximumLengthOffset = kCurrentLengthOffsetEnd + 1;
  static constexpr int kMaximumLengthOffsetEnd = kMaximumLengthOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
  static constexpr int kDispatchTablesOffset = kMaximumLengthOffsetEnd + 1;
  static constexpr int kDispatchTablesOffsetEnd = kDispatchTablesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=147&c=3
  static constexpr int kRawTypeOffset = kDispatchTablesOffsetEnd + 1;
  static constexpr int kRawTypeOffsetEnd = kRawTypeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kRawTypeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kRawTypeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kRawTypeOffsetEnd + 1;
  static constexpr int kHeaderSize = kRawTypeOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmTableObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmTableObject, DAlias>::value,
        "class TorqueGeneratedWasmTableObject should be used as direct base for WasmTableObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmTableObject(Address ptr);
};

// Alias for HeapObject::IsWasmMemoryObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=1
V8_EXPORT_PRIVATE bool IsWasmMemoryObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=1
template <class D, class P>
class TorqueGeneratedWasmMemoryObject : public P {
  static_assert(
      std::is_same<WasmMemoryObject, D>::value,
      "Use this class as direct base for WasmMemoryObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmMemoryObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmMemoryObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
  inline JSArrayBuffer array_buffer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
  inline JSArrayBuffer array_buffer(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
  inline void set_array_buffer(JSArrayBuffer value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
  inline int maximum_pages() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
  inline void set_maximum_pages(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
  inline int is_memory64() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
  inline void set_is_memory64(int value);

  // Torque type: (Undefined | class WeakArrayList)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=154&c=3
  inline HeapObject instances() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=154&c=3
  inline HeapObject instances(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=154&c=3
  inline void set_instances(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmMemoryObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=1
  V8_EXPORT_PRIVATE void WasmMemoryObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
  static constexpr int kArrayBufferOffset = P::kHeaderSize;
  static constexpr int kArrayBufferOffsetEnd = kArrayBufferOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
  static constexpr int kMaximumPagesOffset = kArrayBufferOffsetEnd + 1;
  static constexpr int kMaximumPagesOffsetEnd = kMaximumPagesOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
  static constexpr int kIsMemory64Offset = kMaximumPagesOffsetEnd + 1;
  static constexpr int kIsMemory64OffsetEnd = kIsMemory64Offset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=154&c=3
  static constexpr int kInstancesOffset = kIsMemory64OffsetEnd + 1;
  static constexpr int kInstancesOffsetEnd = kInstancesOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kInstancesOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kInstancesOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kInstancesOffsetEnd + 1;
  static constexpr int kHeaderSize = kInstancesOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmMemoryObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmMemoryObject, DAlias>::value,
        "class TorqueGeneratedWasmMemoryObject should be used as direct base for WasmMemoryObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmMemoryObject(Address ptr);
};

// Alias for HeapObject::IsWasmGlobalObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=1
V8_EXPORT_PRIVATE bool IsWasmGlobalObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=1
template <class D, class P>
class TorqueGeneratedWasmGlobalObject : public P {
  static_assert(
      std::is_same<WasmGlobalObject, D>::value,
      "Use this class as direct base for WasmGlobalObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmGlobalObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmGlobalObject<D,P>;

  // Torque type: (Undefined | class WasmInstanceObject)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=162&c=3
  inline HeapObject instance() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=162&c=3
  inline HeapObject instance(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=162&c=3
  inline void set_instance(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class JSArrayBuffer)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=163&c=3
  inline HeapObject untagged_buffer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=163&c=3
  inline HeapObject untagged_buffer(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=163&c=3
  inline void set_untagged_buffer(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | class FixedArray)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=164&c=3
  inline HeapObject tagged_buffer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=164&c=3
  inline HeapObject tagged_buffer(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=164&c=3
  inline void set_tagged_buffer(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=165&c=3
  inline int offset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=165&c=3
  inline void set_offset(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=3
  inline int raw_type() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=3
  inline void set_raw_type(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
  inline int is_mutable() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
  inline void set_is_mutable(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmGlobalObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=1
  V8_EXPORT_PRIVATE void WasmGlobalObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=162&c=3
  static constexpr int kInstanceOffset = P::kHeaderSize;
  static constexpr int kInstanceOffsetEnd = kInstanceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=163&c=3
  static constexpr int kUntaggedBufferOffset = kInstanceOffsetEnd + 1;
  static constexpr int kUntaggedBufferOffsetEnd = kUntaggedBufferOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=164&c=3
  static constexpr int kTaggedBufferOffset = kUntaggedBufferOffsetEnd + 1;
  static constexpr int kTaggedBufferOffsetEnd = kTaggedBufferOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=165&c=3
  static constexpr int kOffsetOffset = kTaggedBufferOffsetEnd + 1;
  static constexpr int kOffsetOffsetEnd = kOffsetOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=166&c=3
  static constexpr int kRawTypeOffset = kOffsetOffsetEnd + 1;
  static constexpr int kRawTypeOffsetEnd = kRawTypeOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
  static constexpr int kIsMutableOffset = kRawTypeOffsetEnd + 1;
  static constexpr int kIsMutableOffsetEnd = kIsMutableOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIsMutableOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIsMutableOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIsMutableOffsetEnd + 1;
  static constexpr int kHeaderSize = kIsMutableOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmGlobalObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmGlobalObject, DAlias>::value,
        "class TorqueGeneratedWasmGlobalObject should be used as direct base for WasmGlobalObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmGlobalObject(Address ptr);
};

// Alias for HeapObject::IsWasmTagObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
V8_EXPORT_PRIVATE bool IsWasmTagObject_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
template <class D, class P>
class TorqueGeneratedWasmTagObject : public P {
  static_assert(
      std::is_same<WasmTagObject, D>::value,
      "Use this class as direct base for WasmTagObject.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedWasmTagObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmTagObject<D,P>;

  // Torque type: PodArrayOfWasmValueType
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
  inline PodArray<wasm::ValueType> serialized_signature() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
  inline PodArray<wasm::ValueType> serialized_signature(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
  inline void set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  inline HeapObject tag() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  inline HeapObject tag(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  inline void set_tag(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=175&c=3
  inline int canonical_type_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=175&c=3
  inline void set_canonical_type_index(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmTagObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=1
  V8_EXPORT_PRIVATE void WasmTagObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=3
  static constexpr int kSerializedSignatureOffset = P::kHeaderSize;
  static constexpr int kSerializedSignatureOffsetEnd = kSerializedSignatureOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  static constexpr int kTagOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kTagOffsetEnd = kTagOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=175&c=3
  static constexpr int kCanonicalTypeIndexOffset = kTagOffsetEnd + 1;
  static constexpr int kCanonicalTypeIndexOffsetEnd = kCanonicalTypeIndexOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCanonicalTypeIndexOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCanonicalTypeIndexOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCanonicalTypeIndexOffsetEnd + 1;
  static constexpr int kHeaderSize = kCanonicalTypeIndexOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmTagObject() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmTagObject, DAlias>::value,
        "class TorqueGeneratedWasmTagObject should be used as direct base for WasmTagObject.");
  }

 protected:
  inline explicit TorqueGeneratedWasmTagObject(Address ptr);
};

// Alias for HeapObject::IsAsmWasmData() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=1
V8_EXPORT_PRIVATE bool IsAsmWasmData_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=1
template <class D, class P>
class TorqueGeneratedAsmWasmData : public P {
  static_assert(
      std::is_same<AsmWasmData, D>::value,
      "Use this class as direct base for AsmWasmData.");
  static_assert(
      std::is_same<Struct, P>::value,
      "Pass in Struct as second template parameter for TorqueGeneratedAsmWasmData.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedAsmWasmData<D,P>;

  // Torque type: ManagedWasmNativeModule
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=181&c=3
  inline Managed<wasm::NativeModule> managed_native_module() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=181&c=3
  inline Managed<wasm::NativeModule> managed_native_module(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=181&c=3
  inline void set_managed_native_module(Managed<wasm::NativeModule> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=182&c=3
  inline HeapNumber uses_bitset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=182&c=3
  inline HeapNumber uses_bitset(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=182&c=3
  inline void set_uses_bitset(HeapNumber value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(AsmWasmData)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=1
  V8_EXPORT_PRIVATE void AsmWasmDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=181&c=3
  static constexpr int kManagedNativeModuleOffset = P::kHeaderSize;
  static constexpr int kManagedNativeModuleOffsetEnd = kManagedNativeModuleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=182&c=3
  static constexpr int kUsesBitsetOffset = kManagedNativeModuleOffsetEnd + 1;
  static constexpr int kUsesBitsetOffsetEnd = kUsesBitsetOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kUsesBitsetOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kUsesBitsetOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kUsesBitsetOffsetEnd + 1;
  static constexpr int kHeaderSize = kUsesBitsetOffsetEnd + 1;
  static constexpr int kSize = kUsesBitsetOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 12);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedAsmWasmData() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedAsmWasmData, DAlias>::value,
        "class TorqueGeneratedAsmWasmData should be used as direct base for AsmWasmData.");
  }

 protected:
  inline explicit TorqueGeneratedAsmWasmData(Address ptr);
};

// Alias for HeapObject::IsWasmTypeInfo() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=1
V8_EXPORT_PRIVATE bool IsWasmTypeInfo_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=1
template <class D, class P>
class TorqueGeneratedWasmTypeInfo : public P {
  static_assert(
      std::is_same<WasmTypeInfo, D>::value,
      "Use this class as direct base for WasmTypeInfo.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedWasmTypeInfo.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmTypeInfo<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=195&c=3
  inline uint32_t type_index() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=195&c=3
  inline void set_type_index(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=198&c=3
  inline WasmInstanceObject instance() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=198&c=3
  inline WasmInstanceObject instance(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=198&c=3
  inline void set_instance(WasmInstanceObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=9
  inline int supertypes_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=9
  inline void set_supertypes_length(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=200&c=3
  inline Object supertypes(int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=200&c=3
  inline Object supertypes(PtrComprCageBase cage_base, int i) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=200&c=3
  inline void set_supertypes(int i, Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmTypeInfo)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=1
  V8_EXPORT_PRIVATE void WasmTypeInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=194&c=3
  static constexpr int kNativeTypeOffset = P::kHeaderSize;
  static constexpr int kNativeTypeOffsetEnd = kNativeTypeOffset + kExternalPointerSlotSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=195&c=3
  static constexpr int kTypeIndexOffset = kNativeTypeOffsetEnd + 1;
  static constexpr int kTypeIndexOffsetEnd = kTypeIndexOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=197&c=31
  static constexpr int kOptionalPaddingOffset = kTypeIndexOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + 0 - 1;
  static constexpr int kStartOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=198&c=3
  static constexpr int kInstanceOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kInstanceOffsetEnd = kInstanceOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=199&c=9
  static constexpr int kSupertypesLengthOffset = kInstanceOffsetEnd + 1;
  static constexpr int kSupertypesLengthOffsetEnd = kSupertypesLengthOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kSupertypesLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=200&c=3
  static constexpr int kSupertypesOffset = kSupertypesLengthOffsetEnd + 1;
  static constexpr int kSupertypesOffsetEnd = kSupertypesOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSupertypesOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSupertypesOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSupertypesOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=1
  V8_INLINE static constexpr int32_t SizeFor(int supertypes_length) {
    int32_t size = kHeaderSize;
    size += supertypes_length * 4;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=185&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor(this->supertypes_length());
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmTypeInfo() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmTypeInfo, DAlias>::value,
        "class TorqueGeneratedWasmTypeInfo should be used as direct base for WasmTypeInfo.");
  }

 protected:
  inline explicit TorqueGeneratedWasmTypeInfo(Address ptr);
};

// Alias for HeapObject::IsWasmStruct() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=211&c=1
V8_EXPORT_PRIVATE bool IsWasmStruct_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=211&c=1
template <class D, class P>
class TorqueGeneratedWasmStruct : public P {
  static_assert(
      std::is_same<WasmStruct, D>::value,
      "Use this class as direct base for WasmStruct.");
  static_assert(
      std::is_same<WasmObject, P>::value,
      "Pass in WasmObject as second template parameter for TorqueGeneratedWasmStruct.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmStruct<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=211&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=211&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(WasmStruct)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=211&c=1
  V8_EXPORT_PRIVATE void WasmStructVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;
  static constexpr int kSize = P::kHeaderSize;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=211&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=211&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedWasmStruct() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedWasmStruct, DAlias>::value,
        "class TorqueGeneratedWasmStruct should be used as direct base for WasmStruct.");
  }

 protected:
  inline explicit TorqueGeneratedWasmStruct(Address ptr);
};

