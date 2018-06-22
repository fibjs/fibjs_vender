#ifndef V8_TORQUE_TYPED_ARRAY_FROM_DSL_BASE_H__
#define V8_TORQUE_TYPED_ARRAY_FROM_DSL_BASE_H__

#include "src/builtins/builtins-typed-array-gen.h"


namespace v8 {
namespace internal {

class TypedArrayBuiltinsFromDSLAssembler: public TypedArrayBuiltinsAssembler {
 public:
  explicit TypedArrayBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : TypedArrayBuiltinsAssembler(state) {}

  using Node = compiler::Node;
  template <class T>
  using TNode = compiler::TNode<T>;
  template <class T>
  using SloppyTNode = compiler::SloppyTNode<T>;

  TNode<Number> CallCompareWithDetachedCheck(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_comparefn, TNode<Object> p_a, TNode<Object> p_b, Label* label_Detached_88);
  TNode<Object> Load(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_kind, TNode<Smi> p_index);
  void Store(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_kind, TNode<Smi> p_index, TNode<Object> p_value);
  void TypedArrayInsertionSort(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_kind, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, Label* label_Detached_93);
  void TypedArrayQuickSortImpl(TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<Smi> p_kind, TNode<Smi> p_from_arg, TNode<Smi> p_to_arg, TNode<JSReceiver> p_comparefn, Label* label_Detached_102);
};

}  // namepsace internal
}  // namespace v8

#endif  // V8_TORQUE_TYPED_ARRAY_FROM_DSL_BASE_H__
