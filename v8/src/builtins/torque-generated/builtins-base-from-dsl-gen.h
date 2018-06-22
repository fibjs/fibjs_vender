#ifndef V8_TORQUE_BASE_FROM_DSL_BASE_H__
#define V8_TORQUE_BASE_FROM_DSL_BASE_H__

#include "src/code-stub-assembler.h"

namespace v8 {
namespace internal {

class BaseBuiltinsFromDSLAssembler: public CodeStubAssembler {
 public:
  explicit BaseBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : CodeStubAssembler(state) {}

  using Node = compiler::Node;
  template <class T>
  using TNode = compiler::TNode<T>;
  template <class T>
  using SloppyTNode = compiler::SloppyTNode<T>;

  TNode<Object> LoadElementNoHole12ATFixedArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_0);
  TNode<Object> LoadElementNoHole18ATFixedDoubleArray(TNode<JSArray> p_a, TNode<Smi> p_index, Label* label_IfHole_4);
  TNode<Oddball> HasPropertyObject(TNode<Object> p_o, TNode<Object> p_p, TNode<Context> p_c, HasPropertyLookupMode p_f);
};

}  // namepsace internal
}  // namespace v8

#endif  // V8_TORQUE_BASE_FROM_DSL_BASE_H__
