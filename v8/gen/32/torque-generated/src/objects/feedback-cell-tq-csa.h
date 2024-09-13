#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FEEDBACK_CELL_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FEEDBACK_CELL_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=5&c=1
TNode<FeedbackCell> Cast_FeedbackCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=6&c=3
TNode<HeapObject> LoadFeedbackCellValue_0(compiler::CodeAssemblerState* state_, TNode<FeedbackCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=6&c=3
void StoreFeedbackCellValue_0(compiler::CodeAssemblerState* state_, TNode<FeedbackCell> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=8&c=3
TNode<Int32T> LoadFeedbackCellInterruptBudget_0(compiler::CodeAssemblerState* state_, TNode<FeedbackCell> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=8&c=3
void StoreFeedbackCellInterruptBudget_0(compiler::CodeAssemblerState* state_, TNode<FeedbackCell> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=5&c=1
TNode<FeedbackCell> DownCastForTorqueClass_FeedbackCell_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_FEEDBACK_CELL_TQ_CSA_H_
