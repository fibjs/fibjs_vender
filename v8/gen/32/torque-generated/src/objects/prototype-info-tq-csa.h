#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROTOTYPE_INFO_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROTOTYPE_INFO_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=12&c=1
TNode<PrototypeInfo> Cast_PrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=17&c=3
TNode<Union<JSModuleNamespace, Undefined>> LoadPrototypeInfoModuleNamespace_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=17&c=3
void StorePrototypeInfoModuleNamespace_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Union<JSModuleNamespace, Undefined>> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=21&c=3
TNode<Union<Smi, WeakArrayList>> LoadPrototypeInfoPrototypeUsers_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=21&c=3
void StorePrototypeInfoPrototypeUsers_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Union<Smi, WeakArrayList>> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=23&c=3
TNode<Union<FixedArray, Smi, Undefined>> LoadPrototypeInfoPrototypeChainEnumCache_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=23&c=3
void StorePrototypeInfoPrototypeChainEnumCache_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Union<FixedArray, Smi, Undefined>> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=27&c=3
TNode<Smi> LoadPrototypeInfoRegistrySlot_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=27&c=3
void StorePrototypeInfoRegistrySlot_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
TNode<Smi> LoadPrototypeInfoBitField_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
void StorePrototypeInfoBitField_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=34&c=3
TNode<Union<Undefined, WeakArrayList>> LoadPrototypeInfoDerivedMaps_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=34&c=3
void StorePrototypeInfoDerivedMaps_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<Union<Undefined, WeakArrayList>> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
TorqueStructSlice_Zero_OR_LoadHandler_MutableReference_Zero_OR_LoadHandler_0 FieldSlicePrototypeInfoCachedHandler_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
TNode<Union<LoadHandler, Smi>> LoadPrototypeInfoCachedHandler_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
void StorePrototypeInfoCachedHandler_0(compiler::CodeAssemblerState* state_, TNode<PrototypeInfo> p_o, TNode<IntPtrT> p_i, TNode<Union<LoadHandler, Smi>> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=12&c=1
TNode<PrototypeInfo> DownCastForTorqueClass_PrototypeInfo_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
TorqueStructSlice_Zero_OR_LoadHandler_MutableReference_Zero_OR_LoadHandler_0 NewMutableSlice_Zero_OR_LoadHandler_0(compiler::CodeAssemblerState* state_, TNode<Union<HeapObject, TaggedIndex>> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROTOTYPE_INFO_TQ_CSA_H_
