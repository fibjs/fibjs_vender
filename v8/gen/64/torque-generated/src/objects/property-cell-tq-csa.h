#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROPERTY_CELL_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROPERTY_CELL_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=6&c=1
TNode<PropertyCell> Cast_PropertyCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=15&c=1
TNode<ConstTrackingLetCell> Cast_ConstTrackingLetCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=19&c=1
TNode<Smi> kConstTrackingLetCellConstMarker_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=20&c=1
TNode<Smi> kConstTrackingLetCellNonConstMarker_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=7&c=3
TNode<Name> LoadPropertyCellName_0(compiler::CodeAssemblerState* state_, TNode<PropertyCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=7&c=3
void StorePropertyCellName_0(compiler::CodeAssemblerState* state_, TNode<PropertyCell> p_o, TNode<Name> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=8&c=3
TNode<Smi> LoadPropertyCellPropertyDetailsRaw_0(compiler::CodeAssemblerState* state_, TNode<PropertyCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=8&c=3
void StorePropertyCellPropertyDetailsRaw_0(compiler::CodeAssemblerState* state_, TNode<PropertyCell> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=9&c=3
TNode<Object> LoadPropertyCellValue_0(compiler::CodeAssemblerState* state_, TNode<PropertyCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=9&c=3
void StorePropertyCellValue_0(compiler::CodeAssemblerState* state_, TNode<PropertyCell> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=10&c=3
TNode<WeakArrayList> LoadPropertyCellDependentCode_0(compiler::CodeAssemblerState* state_, TNode<PropertyCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=10&c=3
void StorePropertyCellDependentCode_0(compiler::CodeAssemblerState* state_, TNode<PropertyCell> p_o, TNode<WeakArrayList> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=16&c=3
TNode<WeakArrayList> LoadConstTrackingLetCellDependentCode_0(compiler::CodeAssemblerState* state_, TNode<ConstTrackingLetCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=16&c=3
void StoreConstTrackingLetCellDependentCode_0(compiler::CodeAssemblerState* state_, TNode<ConstTrackingLetCell> p_o, TNode<WeakArrayList> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=6&c=1
TNode<PropertyCell> DownCastForTorqueClass_PropertyCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=15&c=1
TNode<ConstTrackingLetCell> DownCastForTorqueClass_ConstTrackingLetCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROPERTY_CELL_TQ_CSA_H_
