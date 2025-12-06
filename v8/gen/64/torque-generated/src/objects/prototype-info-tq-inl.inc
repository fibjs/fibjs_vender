// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
inline std::tuple<Tagged<Union<HeapObject, TaggedIndex>>, intptr_t, intptr_t> TqRuntimeFieldSlicePrototypeInfoCachedHandler(Tagged<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/torque-internal.tq?l=125&c=23
inline intptr_t TqRuntimeConvert_intptr_constexpr_int31_0(int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
inline std::tuple<Tagged<Union<HeapObject, TaggedIndex>>, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Zero_OR_LoadHandler_0(Tagged<Union<HeapObject, TaggedIndex>> p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=73&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=79&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i);

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSlicePrototypeInfoCachedHandler
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSlicePrototypeInfoCachedHandler

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
std::tuple<Tagged<Union<HeapObject, TaggedIndex>>, intptr_t, intptr_t> TqRuntimeFieldSlicePrototypeInfoCachedHandler(Tagged<PrototypeInfo> p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  Tagged<Union<HeapObject, TaggedIndex>> tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  goto block0;

  block0:
  tmp0 = TqRuntimeConvert_intptr_constexpr_int31_0(PrototypeInfo::kCachedHandlerCount);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x38ull));
  std::tie(tmp2, tmp3, tmp4) = TqRuntimeNewMutableSlice_Zero_OR_LoadHandler_0(p_o, tmp1, tmp0);
  goto block2;

  block2:
  return std::make_tuple(tmp2, tmp3, tmp4);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSlicePrototypeInfoCachedHandler
#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/torque-internal.tq?l=125&c=23
intptr_t TqRuntimeConvert_intptr_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(p_i);
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_intptr_0((TorqueRuntimeMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(p_i)));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Zero_OR_LoadHandler_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Zero_OR_LoadHandler_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
std::tuple<Tagged<Union<HeapObject, TaggedIndex>>, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Zero_OR_LoadHandler_0(Tagged<Union<HeapObject, TaggedIndex>> p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Tagged<Union<HeapObject, TaggedIndex>> tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return std::make_tuple(tmp0, tmp1, tmp2);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Zero_OR_LoadHandler_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=73&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=79&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=17&c=3
template<class D, class P>
Tagged<Union<JSModuleNamespace, Undefined>> TorqueGeneratedPrototypeInfo<D, P>::module_namespace() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPrototypeInfo::module_namespace(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=17&c=3
template<class D, class P>
Tagged<Union<JSModuleNamespace, Undefined>> TorqueGeneratedPrototypeInfo<D, P>::module_namespace(PtrComprCageBase cage_base) const {
  Tagged<Union<JSModuleNamespace, Undefined>> value = TaggedField<Tagged<Union<JSModuleNamespace, Undefined>>>::load(cage_base, *this, kModuleNamespaceOffset);
  DCHECK(IsUndefined(value) || IsJSModuleNamespace(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=17&c=3
template<class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_module_namespace(Tagged<Union<JSModuleNamespace, Undefined>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsUndefined(value) || IsJSModuleNamespace(value)));
  WRITE_FIELD(*this, kModuleNamespaceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kModuleNamespaceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=21&c=3
template<class D, class P>
Tagged<Union<Smi, WeakArrayList>> TorqueGeneratedPrototypeInfo<D, P>::prototype_users() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPrototypeInfo::prototype_users(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=21&c=3
template<class D, class P>
Tagged<Union<Smi, WeakArrayList>> TorqueGeneratedPrototypeInfo<D, P>::prototype_users(PtrComprCageBase cage_base) const {
  Tagged<Union<Smi, WeakArrayList>> value = TaggedField<Tagged<Union<Smi, WeakArrayList>>>::load(cage_base, *this, kPrototypeUsersOffset);
  DCHECK(IsZero(value) || IsWeakArrayList(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_prototype_users(Tagged<Union<Smi, WeakArrayList>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsZero(value) || IsWeakArrayList(value)));
  WRITE_FIELD(*this, kPrototypeUsersOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeUsersOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=23&c=3
template<class D, class P>
Tagged<Union<FixedArray, Smi, Undefined>> TorqueGeneratedPrototypeInfo<D, P>::prototype_chain_enum_cache() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPrototypeInfo::prototype_chain_enum_cache(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=23&c=3
template<class D, class P>
Tagged<Union<FixedArray, Smi, Undefined>> TorqueGeneratedPrototypeInfo<D, P>::prototype_chain_enum_cache(PtrComprCageBase cage_base) const {
  Tagged<Union<FixedArray, Smi, Undefined>> value = TaggedField<Tagged<Union<FixedArray, Smi, Undefined>>>::load(cage_base, *this, kPrototypeChainEnumCacheOffset);
  DCHECK(IsUndefined(value) || IsFixedArray(value) || IsZero(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=23&c=3
template<class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_prototype_chain_enum_cache(Tagged<Union<FixedArray, Smi, Undefined>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsUndefined(value) || IsFixedArray(value) || IsZero(value)));
  WRITE_FIELD(*this, kPrototypeChainEnumCacheOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeChainEnumCacheOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=27&c=3
template<class D, class P>
int TorqueGeneratedPrototypeInfo<D, P>::registry_slot() const {
  int value = TaggedField<Smi>::load(*this, kRegistrySlotOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=27&c=3
template<class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_registry_slot(int value) {
  WRITE_FIELD(*this, kRegistrySlotOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
template<class D, class P>
int TorqueGeneratedPrototypeInfo<D, P>::bit_field() const {
  int value = TaggedField<Smi>::load(*this, kBitFieldOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
template<class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_bit_field(int value) {
  // bitfield struct PrototypeInfoFlags
  WRITE_FIELD(*this, kBitFieldOffset, Smi::From31BitPattern(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=34&c=3
template<class D, class P>
Tagged<Union<Undefined, WeakArrayList>> TorqueGeneratedPrototypeInfo<D, P>::derived_maps() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPrototypeInfo::derived_maps(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=34&c=3
template<class D, class P>
Tagged<Union<Undefined, WeakArrayList>> TorqueGeneratedPrototypeInfo<D, P>::derived_maps(PtrComprCageBase cage_base) const {
  Tagged<Union<Undefined, WeakArrayList>> value = TaggedField<Tagged<Union<Undefined, WeakArrayList>>>::load(cage_base, *this, kDerivedMapsOffset);
  DCHECK(IsUndefined(value) || IsWeakArrayList(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=34&c=3
template<class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_derived_maps(Tagged<Union<Undefined, WeakArrayList>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsUndefined(value) || IsWeakArrayList(value)));
  WRITE_FIELD(*this, kDerivedMapsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDerivedMapsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
template<class D, class P>
Tagged<Union<LoadHandler, Smi>> TorqueGeneratedPrototypeInfo<D, P>::cached_handler(int i) const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPrototypeInfo::cached_handler(cage_base, i);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
template<class D, class P>
Tagged<Union<LoadHandler, Smi>> TorqueGeneratedPrototypeInfo<D, P>::cached_handler(PtrComprCageBase cage_base, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSlicePrototypeInfoCachedHandler(*static_cast<const D*>(this)))));
  int offset = kCachedHandlerOffset + i * kTaggedSize;
  Tagged<Union<LoadHandler, Smi>> value = TaggedField<Tagged<Union<LoadHandler, Smi>>>::load(cage_base, *this, offset);
  DCHECK(IsZero(value) || IsLoadHandler(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
template<class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_cached_handler(int i, Tagged<Union<LoadHandler, Smi>> value, WriteBarrierMode mode) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, static_cast<int>(std::get<2>(TqRuntimeFieldSlicePrototypeInfoCachedHandler(*static_cast<const D*>(this)))));
  int offset = kCachedHandlerOffset + i * kTaggedSize;
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsZero(value) || IsLoadHandler(value)));
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=12&c=1
template<class D, class P>
int TorqueGeneratedPrototypeInfo<D, P>::AllocatedSize() const {
  auto slice = TqRuntimeFieldSlicePrototypeInfoCachedHandler(*static_cast<const D*>(this));
  return static_cast<int>(std::get<1>(slice)) + kTaggedSize * static_cast<int>(std::get<2>(slice));
}

template<class D, class P>
inline TorqueGeneratedPrototypeInfo<D, P>::TorqueGeneratedPrototypeInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPrototypeInfo_NonInline(*this));
}
