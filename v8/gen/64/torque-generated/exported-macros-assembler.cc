#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-call-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-object-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-disposable-stack.h"
#include "src/objects/js-duration-format.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-iterator-helpers.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator-inl.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realm.h"
#include "src/objects/js-shared-array.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/objects/turboshaft-types.h"
#include "src/torque/runtime-support.h"
#include "src/wasm/value-type.h"
#include "src/wasm/wasm-linkage.h"
#include "src/wasm/wasm-module.h"
#include "torque-generated/exported-macros-assembler.h"
#include "torque-generated/src/builtins/aggregate-error-tq-csa.h"
#include "torque-generated/src/builtins/array-at-tq-csa.h"
#include "torque-generated/src/builtins/array-concat-tq-csa.h"
#include "torque-generated/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-find-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-findlast-tq-csa.h"
#include "torque-generated/src/builtins/array-findlastindex-tq-csa.h"
#include "torque-generated/src/builtins/array-flat-tq-csa.h"
#include "torque-generated/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-isarray-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-of-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-some-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/array-to-reversed-tq-csa.h"
#include "torque-generated/src/builtins/array-to-sorted-tq-csa.h"
#include "torque-generated/src/builtins/array-to-spliced-tq-csa.h"
#include "torque-generated/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/src/builtins/array-with-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/arraybuffer-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/builtins-bigint-tq-csa.h"
#include "torque-generated/src/builtins/builtins-string-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/constructor-tq-csa.h"
#include "torque-generated/src/builtins/conversion-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/console-tq-csa.h"
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/finalization-registry-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/function-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/ic-callable-tq-csa.h"
#include "torque-generated/src/builtins/ic-tq-csa.h"
#include "torque-generated/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/src/builtins/internal-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/iterator-from-tq-csa.h"
#include "torque-generated/src/builtins/iterator-helpers-tq-csa.h"
#include "torque-generated/src/builtins/map-groupby-tq-csa.h"
#include "torque-generated/src/builtins/math-tq-csa.h"
#include "torque-generated/src/builtins/number-tq-csa.h"
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/object-groupby-tq-csa.h"
#include "torque-generated/src/builtins/object-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-element-closure-tq-csa.h"
#include "torque-generated/src/builtins/promise-any-tq-csa.h"
#include "torque-generated/src/builtins/promise-constructor-tq-csa.h"
#include "torque-generated/src/builtins/promise-finally-tq-csa.h"
#include "torque-generated/src/builtins/promise-jobs-tq-csa.h"
#include "torque-generated/src/builtins/promise-misc-tq-csa.h"
#include "torque-generated/src/builtins/promise-race-tq-csa.h"
#include "torque-generated/src/builtins/promise-reaction-job-tq-csa.h"
#include "torque-generated/src/builtins/promise-resolve-tq-csa.h"
#include "torque-generated/src/builtins/promise-then-tq-csa.h"
#include "torque-generated/src/builtins/promise-try-tq-csa.h"
#include "torque-generated/src/builtins/promise-withresolvers-tq-csa.h"
#include "torque-generated/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-tq-csa.h"
#include "torque-generated/src/builtins/reflect-tq-csa.h"
#include "torque-generated/src/builtins/regexp-exec-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-all-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-search-tq-csa.h"
#include "torque-generated/src/builtins/regexp-source-tq-csa.h"
#include "torque-generated/src/builtins/regexp-split-tq-csa.h"
#include "torque-generated/src/builtins/regexp-test-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/set-difference-tq-csa.h"
#include "torque-generated/src/builtins/set-intersection-tq-csa.h"
#include "torque-generated/src/builtins/set-is-disjoint-from-tq-csa.h"
#include "torque-generated/src/builtins/set-is-subset-of-tq-csa.h"
#include "torque-generated/src/builtins/set-is-superset-of-tq-csa.h"
#include "torque-generated/src/builtins/set-symmetric-difference-tq-csa.h"
#include "torque-generated/src/builtins/set-union-tq-csa.h"
#include "torque-generated/src/builtins/string-at-tq-csa.h"
#include "torque-generated/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/src/builtins/string-html-tq-csa.h"
#include "torque-generated/src/builtins/string-includes-tq-csa.h"
#include "torque-generated/src/builtins/string-indexof-tq-csa.h"
#include "torque-generated/src/builtins/string-iswellformed-tq-csa.h"
#include "torque-generated/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/src/builtins/string-match-search-tq-csa.h"
#include "torque-generated/src/builtins/string-pad-tq-csa.h"
#include "torque-generated/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/src/builtins/string-replaceall-tq-csa.h"
#include "torque-generated/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/src/builtins/string-substr-tq-csa.h"
#include "torque-generated/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/src/builtins/string-towellformed-tq-csa.h"
#include "torque-generated/src/builtins/string-trim-tq-csa.h"
#include "torque-generated/src/builtins/suppressed-error-tq-csa.h"
#include "torque-generated/src/builtins/symbol-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-at-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-entries-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findlast-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findlastindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-from-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-keys-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-of-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-set-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-sort-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-to-reversed-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-to-sorted-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-values-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-with-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/builtins/weak-ref-tq-csa.h"
#include "torque-generated/src/ic/handler-configuration-tq-csa.h"
#include "torque-generated/src/objects/allocation-site-tq-csa.h"
#include "torque-generated/src/objects/api-callbacks-tq-csa.h"
#include "torque-generated/src/objects/arguments-tq-csa.h"
#include "torque-generated/src/objects/bigint-tq-csa.h"
#include "torque-generated/src/objects/call-site-info-tq-csa.h"
#include "torque-generated/src/objects/cell-tq-csa.h"
#include "torque-generated/src/objects/bytecode-array-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/cpp-heap-external-object-tq-csa.h"
#include "torque-generated/src/objects/data-handler-tq-csa.h"
#include "torque-generated/src/objects/debug-objects-tq-csa.h"
#include "torque-generated/src/objects/descriptor-array-tq-csa.h"
#include "torque-generated/src/objects/embedder-data-array-tq-csa.h"
#include "torque-generated/src/objects/feedback-cell-tq-csa.h"
#include "torque-generated/src/objects/feedback-vector-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/foreign-tq-csa.h"
#include "torque-generated/src/objects/free-space-tq-csa.h"
#include "torque-generated/src/objects/heap-number-tq-csa.h"
#include "torque-generated/src/objects/heap-object-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/js-atomics-synchronization-tq-csa.h"
#include "torque-generated/src/objects/js-collection-iterator-tq-csa.h"
#include "torque-generated/src/objects/js-collection-tq-csa.h"
#include "torque-generated/src/objects/js-disposable-stack-tq-csa.h"
#include "torque-generated/src/objects/js-function-tq-csa.h"
#include "torque-generated/src/objects/js-generator-tq-csa.h"
#include "torque-generated/src/objects/js-iterator-helpers-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"
#include "torque-generated/src/objects/js-promise-tq-csa.h"
#include "torque-generated/src/objects/js-proxy-tq-csa.h"
#include "torque-generated/src/objects/js-raw-json-tq-csa.h"
#include "torque-generated/src/objects/js-regexp-string-iterator-tq-csa.h"
#include "torque-generated/src/objects/js-regexp-tq-csa.h"
#include "torque-generated/src/objects/js-shadow-realm-tq-csa.h"
#include "torque-generated/src/objects/js-shared-array-tq-csa.h"
#include "torque-generated/src/objects/js-struct-tq-csa.h"
#include "torque-generated/src/objects/js-weak-refs-tq-csa.h"
#include "torque-generated/src/objects/literal-objects-tq-csa.h"
#include "torque-generated/src/objects/map-tq-csa.h"
#include "torque-generated/src/objects/megadom-handler-tq-csa.h"
#include "torque-generated/src/objects/microtask-tq-csa.h"
#include "torque-generated/src/objects/module-tq-csa.h"
#include "torque-generated/src/objects/name-tq-csa.h"
#include "torque-generated/src/objects/oddball-tq-csa.h"
#include "torque-generated/src/objects/hole-tq-csa.h"
#include "torque-generated/src/objects/trusted-object-tq-csa.h"
#include "torque-generated/src/objects/ordered-hash-table-tq-csa.h"
#include "torque-generated/src/objects/primitive-heap-object-tq-csa.h"
#include "torque-generated/src/objects/promise-tq-csa.h"
#include "torque-generated/src/objects/property-array-tq-csa.h"
#include "torque-generated/src/objects/property-cell-tq-csa.h"
#include "torque-generated/src/objects/property-descriptor-object-tq-csa.h"
#include "torque-generated/src/objects/prototype-info-tq-csa.h"
#include "torque-generated/src/objects/regexp-match-info-tq-csa.h"
#include "torque-generated/src/objects/scope-info-tq-csa.h"
#include "torque-generated/src/objects/script-tq-csa.h"
#include "torque-generated/src/objects/shared-function-info-tq-csa.h"
#include "torque-generated/src/objects/source-text-module-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"
#include "torque-generated/src/objects/struct-tq-csa.h"
#include "torque-generated/src/objects/swiss-hash-table-helpers-tq-csa.h"
#include "torque-generated/src/objects/swiss-name-dictionary-tq-csa.h"
#include "torque-generated/src/objects/synthetic-module-tq-csa.h"
#include "torque-generated/src/objects/template-objects-tq-csa.h"
#include "torque-generated/src/objects/templates-tq-csa.h"
#include "torque-generated/src/objects/torque-defined-classes-tq-csa.h"
#include "torque-generated/src/objects/turbofan-types-tq-csa.h"
#include "torque-generated/src/objects/turboshaft-types-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"
#include "torque-generated/src/objects/intl-objects-tq-csa.h"
#include "torque-generated/src/objects/js-break-iterator-tq-csa.h"
#include "torque-generated/src/objects/js-collator-tq-csa.h"
#include "torque-generated/src/objects/js-date-time-format-tq-csa.h"
#include "torque-generated/src/objects/js-display-names-tq-csa.h"
#include "torque-generated/src/objects/js-duration-format-tq-csa.h"
#include "torque-generated/src/objects/js-list-format-tq-csa.h"
#include "torque-generated/src/objects/js-locale-tq-csa.h"
#include "torque-generated/src/objects/js-number-format-tq-csa.h"
#include "torque-generated/src/objects/js-plural-rules-tq-csa.h"
#include "torque-generated/src/objects/js-relative-time-format-tq-csa.h"
#include "torque-generated/src/objects/js-segment-iterator-tq-csa.h"
#include "torque-generated/src/objects/js-segmenter-tq-csa.h"
#include "torque-generated/src/objects/js-segments-tq-csa.h"
#include "torque-generated/src/builtins/js-to-js-tq-csa.h"
#include "torque-generated/src/builtins/js-to-wasm-tq-csa.h"
#include "torque-generated/src/builtins/wasm-tq-csa.h"
#include "torque-generated/src/builtins/wasm-strings-tq-csa.h"
#include "torque-generated/src/builtins/wasm-to-js-tq-csa.h"
#include "torque-generated/src/debug/debug-wasm-objects-tq-csa.h"
#include "torque-generated/src/wasm/wasm-objects-tq-csa.h"
namespace v8 {
namespace internal {
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=65&c=1
void TorqueGeneratedExportedMacrosAssembler::EnsureArrayLengthWritable(TNode<Context> p_context, TNode<Map> p_map, compiler::CodeAssemblerLabel* label_Bailout) {
return EnsureArrayLengthWritable_0(state_, p_context, p_map, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=762&c=1
TNode<Number> TorqueGeneratedExportedMacrosAssembler::ToInteger_Inline(TNode<Context> p_context, TNode<JSAny> p_input) {
return ToInteger_Inline_0(state_, p_context, p_input);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1656&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::RequireObjectCoercible(TNode<Context> p_context, TNode<JSAny> p_value, const char* p_name) {
return RequireObjectCoercible_0(state_, p_context, p_value, p_name);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1754&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ChangeUintPtrNumberToUintPtr(TNode<Number> p_value) {
return ChangeUintPtrNumberToUintPtr_0(state_, p_value);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1764&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ChangeSafeIntegerNumberToUintPtr(TNode<Number> p_value, compiler::CodeAssemblerLabel* label_IfUIntPtrOverflow) {
return ChangeSafeIntegerNumberToUintPtr_0(state_, p_value, label_IfUIntPtrOverflow);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1788&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ToIndex(TNode<Context> p_context, TNode<JSAny> p_value, compiler::CodeAssemblerLabel* label_IfRangeError) {
return ToIndex_0(state_, p_context, p_value, label_IfRangeError);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1888&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ConvertAndClampRelativeIndex(TNode<Context> p_context, TNode<JSAny> p_index, TNode<UintPtrT> p_length) {
return ConvertAndClampRelativeIndex_1(state_, p_context, p_index, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1897&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ConvertAndClampRelativeIndex(TNode<Number> p_indexNumber, TNode<UintPtrT> p_length) {
return ConvertAndClampRelativeIndex_2(state_, p_indexNumber, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1956&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ClampToIndexRange(TNode<Context> p_context, TNode<JSAny> p_index, TNode<UintPtrT> p_limit) {
return ClampToIndexRange_0(state_, p_context, p_index, p_limit);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1965&c=1
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::ClampToIndexRange(TNode<Number> p_indexNumber, TNode<UintPtrT> p_limit) {
return ClampToIndexRange_1(state_, p_indexNumber, p_limit);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=2002&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArray(TNode<Object> p_o, TNode<Context> p_context) {
return IsFastJSArray_0(state_, p_o, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=2010&c=1
void TorqueGeneratedExportedMacrosAssembler::BranchIfFastJSArray(TNode<Object> p_o, TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
return BranchIfFastJSArray_0(state_, p_o, p_context, label_True, label_False);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=2020&c=1
void TorqueGeneratedExportedMacrosAssembler::BranchIfFastJSArrayForRead(TNode<Object> p_o, TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
return BranchIfFastJSArrayForRead_0(state_, p_o, p_context, label_True, label_False);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=2033&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArrayWithNoCustomIteration(TNode<Context> p_context, TNode<Object> p_o) {
return IsFastJSArrayWithNoCustomIteration_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=2038&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArrayForReadWithNoCustomIteration(TNode<Context> p_context, TNode<Object> p_o) {
return IsFastJSArrayForReadWithNoCustomIteration_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=13&c=1
TNode<String> TorqueGeneratedExportedMacrosAssembler::ToStringImpl(TNode<Context> p_context, TNode<JSAny> p_o) {
return ToStringImpl_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=12&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsAccessorInfo(TNode<HeapObject> p_o) {
return IsAccessorInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=17&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsAccessorPair(TNode<HeapObject> p_o) {
return IsAccessorPair_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=22&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsAllocationSite(TNode<HeapObject> p_o) {
return IsAllocationSite_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=27&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsCell(TNode<HeapObject> p_o) {
return IsCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=32&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsInstructionStream(TNode<HeapObject> p_o) {
return IsInstructionStream_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=37&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsCode(TNode<HeapObject> p_o) {
return IsCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=42&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsContext(TNode<HeapObject> p_o) {
return IsContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=47&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsCoverageInfo(TNode<HeapObject> p_o) {
return IsCoverageInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=52&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsDebugInfo(TNode<HeapObject> p_o) {
return IsDebugInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=57&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFixedDoubleArray(TNode<HeapObject> p_o) {
return IsFixedDoubleArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=62&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFeedbackCell(TNode<HeapObject> p_o) {
return IsFeedbackCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=67&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFeedbackVector(TNode<HeapObject> p_o) {
return IsFeedbackVector_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=72&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsHeapNumber(TNode<HeapObject> p_o) {
return IsHeapNumber_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=77&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsNativeContext(TNode<HeapObject> p_o) {
return IsNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=82&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsNumber(TNode<Object> p_o) {
return IsNumber_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=87&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPrivateSymbol(TNode<HeapObject> p_o) {
return IsPrivateSymbol_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=92&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPromiseCapability(TNode<HeapObject> p_o) {
return IsPromiseCapability_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=97&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPromiseFulfillReactionJobTask(TNode<HeapObject> p_o) {
return IsPromiseFulfillReactionJobTask_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=102&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPromiseReaction(TNode<HeapObject> p_o) {
return IsPromiseReaction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=107&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsPromiseRejectReactionJobTask(TNode<HeapObject> p_o) {
return IsPromiseRejectReactionJobTask_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=112&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSharedFunctionInfo(TNode<HeapObject> p_o) {
return IsSharedFunctionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=117&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSymbol(TNode<HeapObject> p_o) {
return IsSymbol_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/collections.tq?l=217&c=1
TorqueStructKeyValuePair TorqueGeneratedExportedMacrosAssembler::LoadKeyValuePairNoSideEffects(TNode<Context> p_context, TNode<JSAny> p_o, compiler::CodeAssemblerLabel* label_MayHaveSideEffects) {
return LoadKeyValuePairNoSideEffects_0(state_, p_context, p_o, label_MayHaveSideEffects);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/collections.tq?l=251&c=1
TorqueStructKeyValuePair TorqueGeneratedExportedMacrosAssembler::LoadKeyValuePair(TNode<Context> p_context, TNode<JSAny> p_o) {
return LoadKeyValuePair_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=134&c=1
TNode<JSFunction> TorqueGeneratedExportedMacrosAssembler::LoadTargetFromFrame() {
return LoadTargetFromFrame_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=9&c=1
void TorqueGeneratedExportedMacrosAssembler::CollectCallFeedback(TNode<JSAny> p_maybeTarget, std::function<TNode<JSAny>()> p_maybeReceiver, TNode<Context> p_context, TNode<Union<FeedbackVector, Undefined>> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId) {
return CollectCallFeedback_1(state_, p_maybeTarget, p_maybeReceiver, p_context, p_maybeFeedbackVector, p_slotId);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=17&c=1
void TorqueGeneratedExportedMacrosAssembler::CollectInstanceOfFeedback(TNode<JSAny> p_maybeTarget, TNode<Context> p_context, TNode<Union<FeedbackVector, Undefined>> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId) {
return CollectInstanceOfFeedback_1(state_, p_maybeTarget, p_context, p_maybeFeedbackVector, p_slotId);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=25&c=1
void TorqueGeneratedExportedMacrosAssembler::CollectConstructFeedback(TNode<Context> p_context, TNode<JSAny> p_target, TNode<JSAny> p_newTarget, TNode<Union<FeedbackVector, Undefined>> p_maybeFeedbackVector, TNode<TaggedIndex> p_slotId, UpdateFeedbackMode p_updateFeedbackMode, compiler::CodeAssemblerLabel* label_ConstructGeneric, compiler::CodeAssemblerLabel* label_ConstructArray, compiler::TypedCodeAssemblerVariable<AllocationSite>* label_ConstructArray_parameter_0) {
return CollectConstructFeedback_1(state_, p_context, p_target, p_newTarget, p_maybeFeedbackVector, p_slotId, p_updateFeedbackMode, label_ConstructGeneric, label_ConstructArray, label_ConstructArray_parameter_0);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/internal.tq?l=49&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::ForInNextSlow(TNode<Context> p_context, TNode<UintPtrT> p_slot, TNode<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, String, Symbol, Undefined>> p_receiver, TNode<JSAny> p_key, TNode<Object> p_cacheType, TNode<Union<FeedbackVector, Undefined>> p_maybeFeedbackVector, UpdateFeedbackMode p_guaranteedFeedback) {
return ForInNextSlow_0(state_, p_context, p_slot, p_receiver, p_key, p_cacheType, p_maybeFeedbackVector, p_guaranteedFeedback);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=107&c=1
TorqueStructIteratorRecord TorqueGeneratedExportedMacrosAssembler::GetIteratorRecordAfterCreateAsyncFromSyncIterator(TNode<Context> p_context, TorqueStructIteratorRecord p_asyncIterator) {
return GetIteratorRecordAfterCreateAsyncFromSyncIterator_0(state_, p_context, p_asyncIterator);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=141&c=1
void TorqueGeneratedExportedMacrosAssembler::IteratorCloseOnException(TNode<Context> p_context, TNode<JSReceiver> p_iteratorObject) {
return IteratorCloseOnException_0(state_, p_context, p_iteratorObject);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=163&c=1
void TorqueGeneratedExportedMacrosAssembler::IteratorClose(TNode<Context> p_context, TorqueStructIteratorRecord p_iterator) {
return IteratorClose_0(state_, p_context, p_iterator);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/math.tq?l=119&c=1
TNode<Number> TorqueGeneratedExportedMacrosAssembler::MathPowImpl(TNode<Context> p_context, TNode<JSAny> p_base, TNode<JSAny> p_exponent) {
return MathPowImpl_0(state_, p_context, p_base, p_exponent);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/number.tq?l=105&c=1
TNode<String> TorqueGeneratedExportedMacrosAssembler::IntToDecimalString(TNode<Int32T> p_x) {
return IntToDecimalString_0(state_, p_x);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=321&c=1
TNode<Union<PropertyDescriptorObject, Undefined>> TorqueGeneratedExportedMacrosAssembler::ToPropertyDescriptor(TNode<Context> p_context, TNode<JSAny> p_object) {
return ToPropertyDescriptor_1(state_, p_context, p_object);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=341&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::FromPropertyDescriptor(TNode<Context> p_context, TNode<JSAny> p_object) {
return FromPropertyDescriptor_0(state_, p_context, p_object);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=287&c=1
TNode<Context> TorqueGeneratedExportedMacrosAssembler::CreatePromiseCapabilitiesExecutorContext(TNode<NativeContext> p_nativeContext, TNode<PromiseCapability> p_capability) {
return CreatePromiseCapabilitiesExecutorContext_0(state_, p_nativeContext, p_capability);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=300&c=1
TNode<PromiseCapability> TorqueGeneratedExportedMacrosAssembler::CreatePromiseCapability(TNode<Union<JSReceiver, Undefined>> p_promise, TNode<Union<JSFunction, Undefined>> p_resolve, TNode<Union<JSFunction, Undefined>> p_reject) {
return CreatePromiseCapability_0(state_, p_promise, p_resolve, p_reject);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=324&c=1
TorqueStructPromiseResolvingFunctions TorqueGeneratedExportedMacrosAssembler::CreatePromiseResolvingFunctions(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Boolean> p_debugEvent, TNode<NativeContext> p_nativeContext) {
return CreatePromiseResolvingFunctions_0(state_, p_context, p_promise, p_debugEvent, p_nativeContext);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=450&c=1
void TorqueGeneratedExportedMacrosAssembler::PerformPromiseThenImpl(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> p_onFulfilled, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> p_onRejected, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_resultPromiseOrCapability) {
return PerformPromiseThenImpl_0(state_, p_context, p_promise, p_onFulfilled, p_onRejected, p_resultPromiseOrCapability);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=57&c=1
TNode<Context> TorqueGeneratedExportedMacrosAssembler::CreatePromiseResolvingFunctionsContext(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Boolean> p_debugEvent, TNode<NativeContext> p_nativeContext) {
return CreatePromiseResolvingFunctionsContext_0(state_, p_context, p_promise, p_debugEvent, p_nativeContext);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=44&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::PromiseHasHandler(TNode<JSPromise> p_promise) {
return PromiseHasHandler_0(state_, p_promise);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=49&c=1
void TorqueGeneratedExportedMacrosAssembler::PromiseInit(TNode<JSPromise> p_promise) {
return PromiseInit_0(state_, p_promise);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=136&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookInit(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Object> p_parent) {
return RunContextPromiseHookInit_0(state_, p_context, p_promise, p_parent);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=152&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookResolve(TNode<Context> p_context, TNode<JSPromise> p_promise) {
return RunContextPromiseHookResolve_0(state_, p_context, p_promise);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=164&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookResolve(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Uint32T> p_flags) {
return RunContextPromiseHookResolve_1(state_, p_context, p_promise, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=171&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookBefore(TNode<Context> p_context, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_promiseOrCapability) {
return RunContextPromiseHookBefore_0(state_, p_context, p_promiseOrCapability);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=184&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookBefore(TNode<Context> p_context, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_promiseOrCapability, TNode<Uint32T> p_flags) {
return RunContextPromiseHookBefore_1(state_, p_context, p_promiseOrCapability, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=194&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookAfter(TNode<Context> p_context, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_promiseOrCapability) {
return RunContextPromiseHookAfter_0(state_, p_context, p_promiseOrCapability);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=207&c=1
void TorqueGeneratedExportedMacrosAssembler::RunContextPromiseHookAfter(TNode<Context> p_context, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_promiseOrCapability, TNode<Uint32T> p_flags) {
return RunContextPromiseHookAfter_1(state_, p_context, p_promiseOrCapability, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=271&c=1
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::NewJSPromise(TNode<Context> p_context, TNode<Object> p_parent) {
return NewJSPromise_0(state_, p_context, p_parent);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=282&c=1
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::NewJSPromise(TNode<Context> p_context) {
return NewJSPromise_1(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=289&c=1
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::NewJSPromise(TNode<Context> p_context, Promise::PromiseState p_status, TNode<JSAny> p_result) {
return NewJSPromise_2(state_, p_context, p_status, p_result);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-exec.tq?l=9&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::RegExpPrototypeExecBodyFast(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string) {
return RegExpPrototypeExecBodyFast_0(state_, p_context, p_receiver, p_string);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match-all.tq?l=12&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::RegExpPrototypeMatchAllImpl(TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<JSAny> p_receiver, TNode<JSAny> p_string) {
return RegExpPrototypeMatchAllImpl_0(state_, p_context, p_nativeContext, p_receiver, p_string);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=35&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastRegExpPermissive(TNode<Context> p_context, TNode<HeapObject> p_o) {
return IsFastRegExpPermissive_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=42&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::RegExpExec(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string) {
return RegExpExec_0(state_, p_context, p_receiver, p_string);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=122&c=1
TNode<RegExpMatchInfo> TorqueGeneratedExportedMacrosAssembler::RegExpPrototypeExecBodyWithoutResultFast(TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, compiler::CodeAssemblerLabel* label_IfDidNotMatch) {
return RegExpPrototypeExecBodyWithoutResultFast_0(state_, p_context, p_regexp, p_string, label_IfDidNotMatch);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=330&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadLastIndex(TNode<Context> p_context, TNode<JSAny> p_regexp, bool p_isFastPath) {
return LoadLastIndex_0(state_, p_context, p_regexp, p_isFastPath);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=338&c=1
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadLastIndexAsLength(TNode<Context> p_context, TNode<JSRegExp> p_regexp, bool p_isFastPath) {
return LoadLastIndexAsLength_0(state_, p_context, p_regexp, p_isFastPath);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=359&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreLastIndex(TNode<Context> p_context, TNode<JSAny> p_regexp, TNode<Number> p_value, bool p_isFastPath) {
return StoreLastIndex_0(state_, p_context, p_regexp, p_value, p_isFastPath);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=385&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsRegExp(TNode<Context> p_context, TNode<JSAny> p_obj) {
return IsRegExp_0(state_, p_context, p_obj);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=416&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::RegExpCreate(TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<JSAny> p_maybeString, TNode<String> p_flags) {
return RegExpCreate_0(state_, p_context, p_nativeContext, p_maybeString, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=429&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::RegExpCreate(TNode<Context> p_context, TNode<Map> p_initialMap, TNode<JSAny> p_maybeString, TNode<String> p_flags) {
return RegExpCreate_1(state_, p_context, p_initialMap, p_maybeString, p_flags);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=15&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsWhiteSpaceOrLineTerminator(TNode<Uint16T> p_charCode) {
return IsWhiteSpaceOrLineTerminator_0(state_, p_charCode);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-createtypedarray.tq?l=347&c=1
TNode<JSTypedArray> TorqueGeneratedExportedMacrosAssembler::TypedArrayCreateByLength(TNode<Context> p_context, TNode<JSReceiver> p_constructor, TNode<Number> p_length, const char* p_methodName) {
return TypedArrayCreateByLength_0(state_, p_context, p_constructor, p_length, p_methodName);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-createtypedarray.tq?l=492&c=1
TNode<JSTypedArray> TorqueGeneratedExportedMacrosAssembler::TypedArraySpeciesCreateByLength(TNode<Context> p_context, const char* p_methodName, TNode<JSTypedArray> p_exemplar, TNode<UintPtrT> p_length) {
return TypedArraySpeciesCreateByLength_0(state_, p_context, p_methodName, p_exemplar, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=10&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsJSArgumentsObjectWithLength(TNode<Context> p_context, TNode<Object> p_o) {
return IsJSArgumentsObjectWithLength_0(state_, p_context, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=226&c=1
TNode<JSArray> TorqueGeneratedExportedMacrosAssembler::EmitFastNewAllArguments(TNode<Context> p_context, TNode<RawPtrT> p_frame, TNode<IntPtrT> p_argc) {
return EmitFastNewAllArguments_0(state_, p_context, p_frame, p_argc);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=233&c=1
TNode<JSArray> TorqueGeneratedExportedMacrosAssembler::EmitFastNewRestArguments(TNode<Context> p_context, TNode<JSFunction> p__f) {
return EmitFastNewRestArguments_0(state_, p_context, p__f);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=240&c=1
TNode<JSArgumentsObject> TorqueGeneratedExportedMacrosAssembler::EmitFastNewStrictArguments(TNode<Context> p_context, TNode<JSFunction> p__f) {
return EmitFastNewStrictArguments_0(state_, p_context, p__f);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=247&c=1
TNode<JSArgumentsObject> TorqueGeneratedExportedMacrosAssembler::EmitFastNewSloppyArguments(TNode<Context> p_context, TNode<JSFunction> p_f) {
return EmitFastNewSloppyArguments_0(state_, p_context, p_f);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=330&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::SloppyArgumentsLoad(TNode<JSObject> p_receiver, TNode<Object> p_keyObject, compiler::CodeAssemblerLabel* label_Bailout) {
return SloppyArgumentsLoad_0(state_, p_receiver, p_keyObject, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=337&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::SloppyArgumentsHas(TNode<JSObject> p_receiver, TNode<Object> p_keyObject, compiler::CodeAssemblerLabel* label_Bailout) {
return SloppyArgumentsHas_0(state_, p_receiver, p_keyObject, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=344&c=1
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::SloppyArgumentsStore(TNode<JSObject> p_receiver, TNode<Object> p_keyObject, TNode<JSAny> p_value, compiler::CodeAssemblerLabel* label_Bailout) {
return SloppyArgumentsStore_0(state_, p_receiver, p_keyObject, p_value, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=67&c=1
TNode<Context> TorqueGeneratedExportedMacrosAssembler::AllocateSyntheticFunctionContext(TNode<NativeContext> p_nativeContext, int31_t p_slots) {
return AllocateSyntheticFunctionContext_0(state_, p_nativeContext, p_slots);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=226&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElementNoCell(TNode<Context> p_c, TNode<IntPtrT> p_i) {
return LoadContextElementNoCell_0(state_, p_c, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=231&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElementNoCell(TNode<Context> p_c, TNode<Smi> p_i) {
return LoadContextElementNoCell_1(state_, p_c, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=236&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElementNoCell(TNode<Context> p_c, int32_t p_i) {
return LoadContextElementNoCell_2(state_, p_c, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=241&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElement(TNode<Context> p_c, TNode<IntPtrT> p_i) {
return LoadContextElement_0(state_, p_c, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=246&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElement(TNode<Context> p_c, TNode<Smi> p_i) {
return LoadContextElement_1(state_, p_c, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=251&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElement(TNode<Context> p_c, int32_t p_i) {
return LoadContextElement_2(state_, p_c, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=256&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreContextElementNoCell(TNode<Context> p_c, TNode<IntPtrT> p_i, TNode<Object> p_o) {
return StoreContextElementNoCell_0(state_, p_c, p_i, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=261&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreContextElementNoCell(TNode<Context> p_c, TNode<Smi> p_i, TNode<Object> p_o) {
return StoreContextElementNoCell_1(state_, p_c, p_i, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=266&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreContextElementNoCell(TNode<Context> p_c, int32_t p_i, TNode<Object> p_o) {
return StoreContextElementNoCell_2(state_, p_c, p_i, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=272&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreContextElement(TNode<Context> p_c, TNode<IntPtrT> p_i, TNode<Object> p_o) {
return StoreContextElement_0(state_, p_c, p_i, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=277&c=1
void TorqueGeneratedExportedMacrosAssembler::StoreContextElement(TNode<Context> p_c, int32_t p_i, TNode<Object> p_o) {
return StoreContextElement_1(state_, p_c, p_i, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=37&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsDetachedBuffer(TNode<JSArrayBuffer> p_buffer) {
return IsDetachedBuffer_0(state_, p_buffer);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=42&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSharedArrayBuffer(TNode<JSArrayBuffer> p_buffer) {
return IsSharedArrayBuffer_0(state_, p_buffer);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=47&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsResizableArrayBuffer(TNode<JSArrayBuffer> p_buffer) {
return IsResizableArrayBuffer_0(state_, p_buffer);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=83&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsVariableLengthJSArrayBufferView(TNode<JSArrayBufferView> p_array) {
return IsVariableLengthJSArrayBufferView_0(state_, p_array);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=88&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsLengthTrackingJSArrayBufferView(TNode<JSArrayBufferView> p_array) {
return IsLengthTrackingJSArrayBufferView_0(state_, p_array);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=117&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsOnHeapTypedArray(TNode<JSTypedArray> p_array) {
return IsOnHeapTypedArray_0(state_, p_array);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=39&c=1
TNode<JSArrayIterator> TorqueGeneratedExportedMacrosAssembler::CreateArrayIterator(TNode<NativeContext> p_context, TNode<JSReceiver> p_array, IterationKind p_kind, TNode<Number> p_nextIndex) {
return CreateArrayIterator_0(state_, p_context, p_array, p_kind, p_nextIndex);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=54&c=1
TNode<JSArrayIterator> TorqueGeneratedExportedMacrosAssembler::CreateArrayIterator(TNode<NativeContext> p_context, TNode<JSReceiver> p_array, IterationKind p_kind) {
return CreateArrayIterator_1(state_, p_context, p_array, p_kind);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=82&c=1
TNode<PrototypeInfo> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototypeInfo(TNode<Map> p_m, compiler::CodeAssemblerLabel* label_HasNoPrototypeInfo) {
return LoadMapPrototypeInfo_0(state_, p_m, label_HasNoPrototypeInfo);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=89&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSimpleObjectMap(TNode<Map> p_map) {
return IsSimpleObjectMap_0(state_, p_map);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=39&c=1
TNode<SmallOrderedHashSet> TorqueGeneratedExportedMacrosAssembler::AllocateSmallOrderedHashSet(TNode<IntPtrT> p_capacity) {
return AllocateSmallOrderedHashSet_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=78&c=1
TNode<SmallOrderedHashMap> TorqueGeneratedExportedMacrosAssembler::AllocateSmallOrderedHashMap(TNode<IntPtrT> p_capacity) {
return AllocateSmallOrderedHashMap_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=114&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsCompatiblePropertyDescriptor(TNode<BoolT> p_extensible, TNode<Union<PropertyDescriptorObject, Undefined>> p_newDesc, TNode<Union<PropertyDescriptorObject, Undefined>> p_current) {
return IsCompatiblePropertyDescriptor_2(state_, p_extensible, p_newDesc, p_current);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=131&c=1
void TorqueGeneratedExportedMacrosAssembler::CompletePropertyDescriptor(TNode<PropertyDescriptorObject> p_desc) {
return CompletePropertyDescriptor_0(state_, p_desc);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=203&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::IndexOfLocalName(TNode<ScopeInfo> p_scopeInfo, TNode<Name> p_name, compiler::CodeAssemblerLabel* label_NotFound) {
return IndexOfLocalName_0(state_, p_scopeInfo, p_name, label_NotFound);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=215&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::GetFunctionContextSlotInitialValue(TNode<ScopeInfo> p_scopeInfo, TNode<IntPtrT> p_index) {
return GetFunctionContextSlotInitialValue_0(state_, p_scopeInfo, p_index);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFormalParameterCountWithoutReceiver(TNode<SharedFunctionInfo> p_sfi) {
return LoadSharedFunctionInfoFormalParameterCountWithoutReceiver_0(state_, p_sfi);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=143&c=1
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFormalParameterCountWithReceiver(TNode<SharedFunctionInfo> p_sfi) {
return LoadSharedFunctionInfoFormalParameterCountWithReceiver_0(state_, p_sfi);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=149&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsSharedFunctionInfoDontAdaptArguments(TNode<SharedFunctionInfo> p_sfi) {
return IsSharedFunctionInfoDontAdaptArguments_0(state_, p_sfi);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=189&c=1
TNode<SeqOneByteString> TorqueGeneratedExportedMacrosAssembler::AllocateNonEmptySeqOneByteString(TNode<Uint32T> p_length) {
return AllocateNonEmptySeqOneByteString_0(state_, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=195&c=1
TNode<SeqTwoByteString> TorqueGeneratedExportedMacrosAssembler::AllocateNonEmptySeqTwoByteString(TNode<Uint32T> p_length) {
return AllocateNonEmptySeqTwoByteString_0(state_, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=213&c=1
TNode<Union<SeqOneByteString, String>> TorqueGeneratedExportedMacrosAssembler::AllocateSeqOneByteString(TNode<Uint32T> p_length) {
return AllocateSeqOneByteString_0(state_, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=219&c=1
TNode<Union<SeqTwoByteString, String>> TorqueGeneratedExportedMacrosAssembler::AllocateSeqTwoByteString(TNode<Uint32T> p_length) {
return AllocateSeqTwoByteString_0(state_, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=62&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryCapacityFor(TNode<IntPtrT> p_atLeastSpaceFor) {
return SwissNameDictionaryCapacityFor_0(state_, p_atLeastSpaceFor);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=83&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryMaxUsableCapacity(TNode<IntPtrT> p_capacity) {
return SwissNameDictionaryMaxUsableCapacity_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=95&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionarySizeFor(TNode<IntPtrT> p_capacity) {
return SwissNameDictionarySizeFor_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=105&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryMetaTableSizePerEntryFor(TNode<IntPtrT> p_capacity) {
return SwissNameDictionaryMetaTableSizePerEntryFor_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=117&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryMetaTableSizeFor(TNode<IntPtrT> p_capacity) {
return SwissNameDictionaryMetaTableSizeFor_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=134&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryDataTableStartOffsetMT() {
return SwissNameDictionaryDataTableStartOffsetMT_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=139&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryCtrlTableStartOffsetMT(TNode<IntPtrT> p_capacity) {
return SwissNameDictionaryCtrlTableStartOffsetMT_0(state_, p_capacity);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=248&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryDelete(TNode<SwissNameDictionary> p_table, TNode<IntPtrT> p_entry, compiler::CodeAssemblerLabel* label_Shrunk, compiler::TypedCodeAssemblerVariable<SwissNameDictionary>* label_Shrunk_parameter_0) {
return SwissNameDictionaryDelete_0(state_, p_table, p_entry, label_Shrunk, label_Shrunk_parameter_0);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=277&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryFindEntrySIMD(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound) {
return SwissNameDictionaryFindEntrySIMD_0(state_, p_table, p_key, label_Found, label_Found_parameter_0, label_NotFound);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=285&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryFindEntryPortable(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound) {
return SwissNameDictionaryFindEntryPortable_0(state_, p_table, p_key, label_Found, label_Found_parameter_0, label_NotFound);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=300&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryAddSIMD(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout) {
return SwissNameDictionaryAddSIMD_0(state_, p_table, p_key, p_value, p_propertyDetails, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=308&c=1
void TorqueGeneratedExportedMacrosAssembler::SwissNameDictionaryAddPortable(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout) {
return SwissNameDictionaryAddPortable_0(state_, p_table, p_key, p_value, p_propertyDetails, label_Bailout);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=42&c=1
void TorqueGeneratedExportedMacrosAssembler::TestConstexpr1() {
return TestConstexpr1_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=49&c=1
void TorqueGeneratedExportedMacrosAssembler::TestConstexprIf() {
return TestConstexprIf_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=56&c=1
void TorqueGeneratedExportedMacrosAssembler::TestConstexprReturn() {
return TestConstexprReturn_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=71&c=1
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::TestGotoLabel() {
return TestGotoLabel_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=80&c=1
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::TestGotoLabelWithOneParameter() {
return TestGotoLabelWithOneParameter_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=90&c=1
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::TestGotoLabelWithTwoParameters() {
return TestGotoLabelWithTwoParameters_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=109&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBuiltinSpecialization() {
return TestBuiltinSpecialization_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=136&c=1
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::TestPartiallyUnusedLabel() {
return TestPartiallyUnusedLabel_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=166&c=1
void TorqueGeneratedExportedMacrosAssembler::TestMacroSpecialization() {
return TestMacroSpecialization_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=192&c=1
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::TestFunctionPointers(TNode<Context> p_context) {
return TestFunctionPointers_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=201&c=1
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
return TestVariableRedeclaration_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=208&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestTernaryOperator(TNode<Smi> p_x) {
return TestTernaryOperator_0(state_, p_x);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=214&c=1
void TorqueGeneratedExportedMacrosAssembler::TestFunctionPointerToGeneric() {
return TestFunctionPointerToGeneric_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=226&c=1
TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::TestTypeAlias(TNode<BuiltinPtr> p_x) {
return TestTypeAlias_0(state_, p_x);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=231&c=1
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::TestUnsafeCast(TNode<Context> p_context, TNode<Number> p_n) {
return TestUnsafeCast_0(state_, p_context, p_n);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=242&c=1
void TorqueGeneratedExportedMacrosAssembler::TestHexLiteral() {
return TestHexLiteral_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=248&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLargeIntegerLiterals(TNode<Context> p_c) {
return TestLargeIntegerLiterals_0(state_, p_c);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=254&c=1
void TorqueGeneratedExportedMacrosAssembler::TestMultilineAssert() {
return TestMultilineAssert_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=262&c=1
void TorqueGeneratedExportedMacrosAssembler::TestNewlineInString() {
return TestNewlineInString_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=271&c=1
void TorqueGeneratedExportedMacrosAssembler::TestModuleConstBindings() {
return TestModuleConstBindings_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=278&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLocalConstBindings() {
return TestLocalConstBindings_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=304&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestStruct1(TorqueStructTestStructA_0 p_i) {
return TestStruct1_0(state_, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=309&c=1
TorqueStructTestStructA_0 TorqueGeneratedExportedMacrosAssembler::TestStruct2(TNode<Context> p_context) {
return TestStruct2_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=318&c=1
TorqueStructTestStructA_0 TorqueGeneratedExportedMacrosAssembler::TestStruct3(TNode<Context> p_context) {
return TestStruct3_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=344&c=1
TorqueStructTestStructC_0 TorqueGeneratedExportedMacrosAssembler::TestStruct4(TNode<Context> p_context) {
return TestStruct4_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=353&c=1
void TorqueGeneratedExportedMacrosAssembler::CallTestStructInLabel(TNode<Context> p_context) {
return CallTestStructInLabel_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=362&c=1
void TorqueGeneratedExportedMacrosAssembler::TestForLoop() {
return TestForLoop_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=461&c=1
void TorqueGeneratedExportedMacrosAssembler::TestSubtyping(TNode<Smi> p_x) {
return TestSubtyping_0(state_, p_x);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=507&c=1
void TorqueGeneratedExportedMacrosAssembler::TestTypeswitch(TNode<Context> p_context) {
return TestTypeswitch_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=515&c=1
void TorqueGeneratedExportedMacrosAssembler::TestTypeswitchAsanLsanFailure(TNode<Context> p_context, TNode<Object> p_obj) {
return TestTypeswitchAsanLsanFailure_0(state_, p_context, p_obj);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=537&c=1
void TorqueGeneratedExportedMacrosAssembler::TestGenericOverload(TNode<Context> p_context) {
return TestGenericOverload_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=545&c=1
void TorqueGeneratedExportedMacrosAssembler::TestEquality(TNode<Context> p_context) {
return TestEquality_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=555&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestOrAnd(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
return TestOrAnd_0(state_, p_x, p_y, p_z);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=560&c=1
TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestAndOr(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
return TestAndOr_0(state_, p_x, p_y, p_z);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=565&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLogicalOperators() {
return TestLogicalOperators_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=585&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCall(TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A) {
return TestCall_0(state_, p_i, label_A);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=591&c=1
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode1() {
return TestOtherwiseWithCode1_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=603&c=1
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode2() {
return TestOtherwiseWithCode2_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=613&c=1
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode3() {
return TestOtherwiseWithCode3_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=622&c=1
void TorqueGeneratedExportedMacrosAssembler::TestForwardLabel() {
return TestForwardLabel_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=633&c=1
void TorqueGeneratedExportedMacrosAssembler::TestQualifiedAccess(TNode<Context> p_context) {
return TestQualifiedAccess_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=639&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch1(TNode<Context> p_context) {
return TestCatch1_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=650&c=1
void TorqueGeneratedExportedMacrosAssembler::TestCatch2Wrapper(TNode<Context> p_context) {
return TestCatch2Wrapper_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=655&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch2(TNode<Context> p_context) {
return TestCatch2_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=666&c=1
void TorqueGeneratedExportedMacrosAssembler::TestCatch3WrapperWithLabel(TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort) {
return TestCatch3WrapperWithLabel_0(state_, p_context, label__Abort);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=672&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch3(TNode<Context> p_context) {
return TestCatch3_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=689&c=1
void TorqueGeneratedExportedMacrosAssembler::TestIterator(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Map> p_map) {
return TestIterator_0(state_, p_context, p_o, p_map);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=708&c=1
void TorqueGeneratedExportedMacrosAssembler::TestFrame1(TNode<Context> p_context) {
return TestFrame1_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=724&c=1
void TorqueGeneratedExportedMacrosAssembler::TestNew(TNode<Context> p_context) {
return TestNew_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=748&c=1
void TorqueGeneratedExportedMacrosAssembler::TestStructConstructor(TNode<Context> p_context) {
return TestStructConstructor_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=777&c=1
void TorqueGeneratedExportedMacrosAssembler::TestInternalClass(TNode<Context> p_context) {
return TestInternalClass_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=796&c=1
void TorqueGeneratedExportedMacrosAssembler::TestConstInStructs() {
return TestConstInStructs_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=807&c=1
void TorqueGeneratedExportedMacrosAssembler::TestParentFrameArguments(TNode<Context> p_context) {
return TestParentFrameArguments_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=823&c=1
TNode<Object> TorqueGeneratedExportedMacrosAssembler::TestNewFixedArrayFromSpread(TNode<Context> p_context) {
return TestNewFixedArrayFromSpread_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=843&c=1
void TorqueGeneratedExportedMacrosAssembler::TestReferences() {
return TestReferences_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=854&c=1
void TorqueGeneratedExportedMacrosAssembler::TestSlices() {
return TestSlices_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=882&c=1
TNode<Undefined> TorqueGeneratedExportedMacrosAssembler::TestSliceEnumeration(TNode<Context> p_context) {
return TestSliceEnumeration_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=911&c=1
void TorqueGeneratedExportedMacrosAssembler::TestStaticAssert() {
return TestStaticAssert_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=939&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLoadEliminationFixed(TNode<Context> p_context) {
return TestLoadEliminationFixed_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=953&c=1
void TorqueGeneratedExportedMacrosAssembler::TestLoadEliminationVariable(TNode<Context> p_context) {
return TestLoadEliminationVariable_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=965&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestRedundantArrayElementCheck(TNode<Context> p_context) {
return TestRedundantArrayElementCheck_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=980&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestRedundantSmiCheck(TNode<Context> p_context) {
return TestRedundantSmiCheck_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=999&c=1
TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::TestGenericStruct1() {
return TestGenericStruct1_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1020&c=1
TorqueStructTestTuple_TestTuple_intptr_Smi_TestTuple_Smi_intptr_0 TorqueGeneratedExportedMacrosAssembler::TestGenericStruct2() {
return TestGenericStruct2_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1042&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBranchOnBoolOptimization(TNode<Context> p_context, TNode<Smi> p_input) {
return TestBranchOnBoolOptimization_0(state_, p_context, p_input);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1062&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldLoad(TNode<Uint8T> p_val, TNode<BoolT> p_expectedA, TNode<Uint16T> p_expectedB, TNode<Uint32T> p_expectedC, TNode<BoolT> p_expectedD) {
return TestBitFieldLoad_0(state_, p_val, p_expectedA, p_expectedB, p_expectedC, p_expectedD);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1072&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldStore(TNode<Uint8T> p_val) {
return TestBitFieldStore_0(state_, p_val);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1091&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldInit(TNode<BoolT> p_a, TNode<Uint16T> p_b, TNode<Uint32T> p_c, TNode<BoolT> p_d) {
return TestBitFieldInit_0(state_, p_a, p_b, p_c, p_d);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1109&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldUintptrOps(TNode<Uint32T> p_val2, TNode<UintPtrT> p_val3) {
return TestBitFieldUintptrOps_0(state_, p_val2, p_val3);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1150&c=1
void TorqueGeneratedExportedMacrosAssembler::TestBitFieldMultipleFlags(TNode<BoolT> p_a, TNode<Int32T> p_b, TNode<BoolT> p_c) {
return TestBitFieldMultipleFlags_0(state_, p_a, p_b, p_c);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1210&c=1
TNode<ExportedSubClass> TorqueGeneratedExportedMacrosAssembler::TestFullyGeneratedClassFromCpp() {
return TestFullyGeneratedClassFromCpp_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1223&c=1
void TorqueGeneratedExportedMacrosAssembler::TestGeneratedCastOperators(TNode<Context> p_context) {
return TestGeneratedCastOperators_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1257&c=1
void TorqueGeneratedExportedMacrosAssembler::TestNewPretenured(TNode<Context> p_context) {
return TestNewPretenured_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1264&c=1
void TorqueGeneratedExportedMacrosAssembler::TestWord8Phi() {
return TestWord8Phi_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1277&c=1
void TorqueGeneratedExportedMacrosAssembler::TestOffHeapSlice(TNode<RawPtrT> p_ptr, TNode<IntPtrT> p_length) {
return TestOffHeapSlice_0(state_, p_ptr, p_length);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1300&c=1
void TorqueGeneratedExportedMacrosAssembler::TestCallMultiReturnBuiltin(TNode<Context> p_context) {
return TestCallMultiReturnBuiltin_0(state_, p_context);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1307&c=1
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestRunLazyTwice(std::function<TNode<Smi>()> p_lazySmi) {
return TestRunLazyTwice_0(state_, p_lazySmi);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1326&c=1
void TorqueGeneratedExportedMacrosAssembler::TestCreateLazyNodeFromTorque() {
return TestCreateLazyNodeFromTorque_0(state_);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1350&c=1
void TorqueGeneratedExportedMacrosAssembler::TestCellAccessors(TNode<Context> p_context, TNode<Cell> p_cell) {
return TestCellAccessors_0(state_, p_context, p_cell);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm-to-js.tq?l=50&c=1
TorqueStructWasmToJSResult TorqueGeneratedExportedMacrosAssembler::WasmToJSWrapper(TNode<WasmImportData> p_data) {
return WasmToJSWrapper_0(state_, p_data);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-object.tq?l=10&c=9
TNode<Map> TorqueGeneratedExportedMacrosAssembler::LoadHeapObjectMap(TNode<HeapObject> p_o) {
return LoadHeapObjectMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=9&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadHeapNumberValue(TNode<HeapNumber> p_o) {
return LoadHeapNumberValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreHeapNumberValue(TNode<HeapNumber> p_o, TNode<Float64T> p_v) {
return StoreHeapNumberValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=8&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadNameRawHashField(TNode<Name> p_o) {
return LoadNameRawHashField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreNameRawHashField(TNode<Name> p_o, TNode<Uint32T> p_v) {
return StoreNameRawHashField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=51&c=9
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadStringLength(TNode<String> p_o) {
return LoadStringLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=32&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadSymbolFlags(TNode<Symbol> p_o) {
return LoadSymbolFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSymbolFlags(TNode<Symbol> p_o, TNode<Uint32T> p_v) {
return StoreSymbolFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=33&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadSymbolDescription(TNode<Symbol> p_o) {
return LoadSymbolDescription_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSymbolDescription(TNode<Symbol> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreSymbolDescription_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=9&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadOddballToNumberRaw(TNode<Oddball> p_o) {
return LoadOddballToNumberRaw_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToNumberRaw(TNode<Oddball> p_o, TNode<Float64T> p_v) {
return StoreOddballToNumberRaw_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=10&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOddballToString(TNode<Oddball> p_o) {
return LoadOddballToString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToString(TNode<Oddball> p_o, TNode<String> p_v) {
return StoreOddballToString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=11&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadOddballToNumber(TNode<Oddball> p_o) {
return LoadOddballToNumber_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToNumber(TNode<Oddball> p_o, TNode<Number> p_v) {
return StoreOddballToNumber_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=12&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOddballTypeOf(TNode<Oddball> p_o) {
return LoadOddballTypeOf_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballTypeOf(TNode<Oddball> p_o, TNode<String> p_v) {
return StoreOddballTypeOf_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=13&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadOddballKind(TNode<Oddball> p_o) {
return LoadOddballKind_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOddballKind(TNode<Oddball> p_o, TNode<Smi> p_v) {
return StoreOddballKind_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
TNode<Union<FixedArrayBase, PropertyArray, Smi, SwissNameDictionary>> TorqueGeneratedExportedMacrosAssembler::LoadJSReceiverPropertiesOrHash(TNode<JSReceiver> p_o) {
return LoadJSReceiverPropertiesOrHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSReceiverPropertiesOrHash(TNode<JSReceiver> p_o, TNode<Union<FixedArrayBase, PropertyArray, Smi, SwissNameDictionary>> p_v) {
return StoreJSReceiverPropertiesOrHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=13&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadContextLength(TNode<Context> p_o) {
return LoadContextLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
TorqueStructSlice_Object_MutableReference_Object_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceContextElements(TNode<Context> p_o) {
return FieldSliceContextElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextElements(TNode<Context> p_o, TNode<IntPtrT> p_i) {
return LoadContextElements_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreContextElements(TNode<Context> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreContextElements_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
TNode<FixedArrayBase> TorqueGeneratedExportedMacrosAssembler::LoadJSObjectElements(TNode<JSObject> p_o) {
return LoadJSObjectElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSObjectElements(TNode<JSObject> p_o, TNode<FixedArrayBase> p_v) {
return StoreJSObjectElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=34&c=3
TNode<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, PromiseReaction, Smi, String, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSPromiseReactionsOrResult(TNode<JSPromise> p_o) {
return LoadJSPromiseReactionsOrResult_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPromiseReactionsOrResult(TNode<JSPromise> p_o, TNode<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, PromiseReaction, Smi, String, Symbol, Undefined>> p_v) {
return StoreJSPromiseReactionsOrResult_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSPromiseFlags(TNode<JSPromise> p_o) {
return LoadJSPromiseFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPromiseFlags(TNode<JSPromise> p_o, TNode<Smi> p_v) {
return StoreJSPromiseFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=30
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionDispatchHandle(TNode<JSFunction> p_o) {
return LoadJSFunctionDispatchHandle_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=34&c=30
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionDispatchHandle(TNode<JSFunction> p_o, TNode<Int32T> p_v) {
return StoreJSFunctionDispatchHandle_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=50
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionPadding(TNode<JSFunction> p_o) {
return LoadJSFunctionPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=50
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionPadding(TNode<JSFunction> p_o, TNode<Int32T> p_v) {
return StoreJSFunctionPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=3
TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionSharedFunctionInfo(TNode<JSFunction> p_o) {
return LoadJSFunctionSharedFunctionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionSharedFunctionInfo(TNode<JSFunction> p_o, TNode<SharedFunctionInfo> p_v) {
return StoreJSFunctionSharedFunctionInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=37&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionContext(TNode<JSFunction> p_o) {
return LoadJSFunctionContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=37&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionContext(TNode<JSFunction> p_o, TNode<Context> p_v) {
return StoreJSFunctionContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=38&c=3
TNode<FeedbackCell> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionFeedbackCell(TNode<JSFunction> p_o) {
return LoadJSFunctionFeedbackCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionFeedbackCell(TNode<JSFunction> p_o, TNode<FeedbackCell> p_v) {
return StoreJSFunctionFeedbackCell_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=40&c=3
TNode<Union<JSReceiver, Map>> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionPrototypeOrInitialMap(TNode<JSFunction> p_o) {
return LoadJSFunctionPrototypeOrInitialMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=40&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionPrototypeOrInitialMap(TNode<JSFunction> p_o, TNode<Union<JSReceiver, Map>> p_v) {
return StoreJSFunctionPrototypeOrInitialMap_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=8&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFixedArrayBaseLength(TNode<FixedArrayBase> p_o) {
return LoadFixedArrayBaseLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=14&c=3
TorqueStructSlice_Object_MutableReference_Object_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceFixedArrayObjects(TNode<FixedArray> p_o) {
return FieldSliceFixedArrayObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFixedArrayObjects(TNode<FixedArray> p_o, TNode<IntPtrT> p_i) {
return LoadFixedArrayObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFixedArrayObjects(TNode<FixedArray> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreFixedArrayObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=38&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakFixedArrayLength(TNode<WeakFixedArray> p_o) {
return LoadWeakFixedArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=39&c=3
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceWeakFixedArrayObjects(TNode<WeakFixedArray> p_o) {
return FieldSliceWeakFixedArrayObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=39&c=3
TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadWeakFixedArrayObjects(TNode<WeakFixedArray> p_o, TNode<IntPtrT> p_i) {
return LoadWeakFixedArrayObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=39&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakFixedArrayObjects(TNode<WeakFixedArray> p_o, TNode<IntPtrT> p_i, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> p_v) {
return StoreWeakFixedArrayObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=7&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadForeignForeignAddress(TNode<Foreign> p_o) {
return LoadForeignForeignAddress_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreForeignForeignAddress(TNode<Foreign> p_o, TNode<ExternalPointerT> p_v) {
return StoreForeignForeignAddress_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
TNode<Union<JSReceiver, Null>> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyTarget(TNode<JSProxy> p_o) {
return LoadJSProxyTarget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyTarget(TNode<JSProxy> p_o, TNode<Union<JSReceiver, Null>> p_v) {
return StoreJSProxyTarget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=8&c=3
TNode<Union<JSReceiver, Null>> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyHandler(TNode<JSProxy> p_o) {
return LoadJSProxyHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyHandler(TNode<JSProxy> p_o, TNode<Union<JSReceiver, Null>> p_v) {
return StoreJSProxyHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=9&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyFlags(TNode<JSProxy> p_o) {
return LoadJSProxyFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyFlags(TNode<JSProxy> p_o, TNode<Int32T> p_v) {
return StoreJSProxyFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=10&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyPadding(TNode<JSProxy> p_o) {
return LoadJSProxyPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=10&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyPadding(TNode<JSProxy> p_o, TNode<Uint32T> p_v) {
return StoreJSProxyPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=11&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundTargetFunction(TNode<JSBoundFunction> p_o) {
return LoadJSBoundFunctionBoundTargetFunction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundTargetFunction(TNode<JSBoundFunction> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> p_v) {
return StoreJSBoundFunctionBoundTargetFunction_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=14&c=3
TNode<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, Smi, SourceTextModule, String, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundThis(TNode<JSBoundFunction> p_o) {
return LoadJSBoundFunctionBoundThis_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundThis(TNode<JSBoundFunction> p_o, TNode<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, Smi, SourceTextModule, String, Symbol, Undefined>> p_v) {
return StoreJSBoundFunctionBoundThis_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=17&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundArguments(TNode<JSBoundFunction> p_o) {
return LoadJSBoundFunctionBoundArguments_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundArguments(TNode<JSBoundFunction> p_o, TNode<FixedArray> p_v) {
return StoreJSBoundFunctionBoundArguments_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=23&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> TorqueGeneratedExportedMacrosAssembler::LoadJSWrappedFunctionWrappedTargetFunction(TNode<JSWrappedFunction> p_o) {
return LoadJSWrappedFunctionWrappedTargetFunction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSWrappedFunctionWrappedTargetFunction(TNode<JSWrappedFunction> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> p_v) {
return StoreJSWrappedFunctionWrappedTargetFunction_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=25&c=3
TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadJSWrappedFunctionContext(TNode<JSWrappedFunction> p_o) {
return LoadJSWrappedFunctionContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSWrappedFunctionContext(TNode<JSWrappedFunction> p_o, TNode<NativeContext> p_v) {
return StoreJSWrappedFunctionContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/hole.tq?l=7&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadHoleRawNumericValue(TNode<Hole> p_o) {
return LoadHoleRawNumericValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/hole.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreHoleRawNumericValue(TNode<Hole> p_o, TNode<Float64T> p_v) {
return StoreHoleRawNumericValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=56&c=3
TNode<CppHeapPointerT> TorqueGeneratedExportedMacrosAssembler::LoadJSAPIObjectWithEmbedderSlotsCppHeapWrappable(TNode<JSAPIObjectWithEmbedderSlots> p_o) {
return LoadJSAPIObjectWithEmbedderSlotsCppHeapWrappable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=56&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAPIObjectWithEmbedderSlotsCppHeapWrappable(TNode<JSAPIObjectWithEmbedderSlots> p_o, TNode<CppHeapPointerT> p_v) {
return StoreJSAPIObjectWithEmbedderSlotsCppHeapWrappable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=70&c=3
TNode<CppHeapPointerT> TorqueGeneratedExportedMacrosAssembler::LoadJSSpecialObjectCppHeapWrappable(TNode<JSSpecialObject> p_o) {
return LoadJSSpecialObjectCppHeapWrappable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=70&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSpecialObjectCppHeapWrappable(TNode<JSSpecialObject> p_o, TNode<CppHeapPointerT> p_v) {
return StoreJSSpecialObjectCppHeapWrappable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceSizeInWords(TNode<Map> p_o) {
return LoadMapInstanceSizeInWords_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceSizeInWords(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapInstanceSizeInWords_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapInobjectPropertiesStartOrConstructorFunctionIndex(TNode<Map> p_o) {
return LoadMapInobjectPropertiesStartOrConstructorFunctionIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapInobjectPropertiesStartOrConstructorFunctionIndex(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapInobjectPropertiesStartOrConstructorFunctionIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapUsedOrUnusedInstanceSizeInWords(TNode<Map> p_o) {
return LoadMapUsedOrUnusedInstanceSizeInWords_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapUsedOrUnusedInstanceSizeInWords(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapUsedOrUnusedInstanceSizeInWords_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapVisitorId(TNode<Map> p_o) {
return LoadMapVisitorId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapVisitorId(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapVisitorId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceType(TNode<Map> p_o) {
return LoadMapInstanceType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceType(TNode<Map> p_o, TNode<Uint16T> p_v) {
return StoreMapInstanceType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField(TNode<Map> p_o) {
return LoadMapBitField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapBitField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField2(TNode<Map> p_o) {
return LoadMapBitField2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField2(TNode<Map> p_o, TNode<Uint8T> p_v) {
return StoreMapBitField2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField3(TNode<Map> p_o) {
return LoadMapBitField3_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField3(TNode<Map> p_o, TNode<Uint32T> p_v) {
return StoreMapBitField3_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=68&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadMapOptionalPadding(TNode<Map> p_o) {
return LoadMapOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=68&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreMapOptionalPadding(TNode<Map> p_o, TNode<Uint32T> p_v) {
return StoreMapOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
TNode<Union<JSReceiver, Null>> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototype(TNode<Map> p_o) {
return LoadMapPrototype_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapPrototype(TNode<Map> p_o, TNode<Union<JSReceiver, Null>> p_v) {
return StoreMapPrototype_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMapConstructorOrBackPointerOrNativeContext(TNode<Map> p_o) {
return LoadMapConstructorOrBackPointerOrNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapConstructorOrBackPointerOrNativeContext(TNode<Map> p_o, TNode<Object> p_v) {
return StoreMapConstructorOrBackPointerOrNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=30
TNode<Union<DescriptorArray, WasmStruct>> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceDescriptors(TNode<Map> p_o) {
return LoadMapInstanceDescriptors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=30
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceDescriptors(TNode<Map> p_o, TNode<Union<DescriptorArray, WasmStruct>> p_v) {
return StoreMapInstanceDescriptors_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
TNode<WeakArrayList> TorqueGeneratedExportedMacrosAssembler::LoadMapDependentCode(TNode<Map> p_o) {
return LoadMapDependentCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapDependentCode(TNode<Map> p_o, TNode<WeakArrayList> p_v) {
return StoreMapDependentCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=77&c=3
TNode<Union<Cell, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototypeValidityCell(TNode<Map> p_o) {
return LoadMapPrototypeValidityCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=77&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapPrototypeValidityCell(TNode<Map> p_o, TNode<Union<Cell, Smi>> p_v) {
return StoreMapPrototypeValidityCell_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=78&c=3
TNode<Union<Map, MaybeWeak<HeapObject>, PrototypeInfo, Smi, TransitionArray>> TorqueGeneratedExportedMacrosAssembler::LoadMapTransitionsOrPrototypeInfo(TNode<Map> p_o) {
return LoadMapTransitionsOrPrototypeInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=78&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMapTransitionsOrPrototypeInfo(TNode<Map> p_o, TNode<Union<Map, MaybeWeak<HeapObject>, PrototypeInfo, Smi, TransitionArray>> p_v) {
return StoreMapTransitionsOrPrototypeInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
TNode<Union<JSFinalizationRegistry, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellFinalizationRegistry(TNode<WeakCell> p_o) {
return LoadWeakCellFinalizationRegistry_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellFinalizationRegistry(TNode<WeakCell> p_o, TNode<Union<JSFinalizationRegistry, Undefined>> p_v) {
return StoreWeakCellFinalizationRegistry_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
TNode<Union<JSReceiver, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellTarget(TNode<WeakCell> p_o) {
return LoadWeakCellTarget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellTarget(TNode<WeakCell> p_o, TNode<Union<JSReceiver, Symbol, Undefined>> p_v) {
return StoreWeakCellTarget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
TNode<Union<JSReceiver, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellUnregisterToken(TNode<WeakCell> p_o) {
return LoadWeakCellUnregisterToken_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellUnregisterToken(TNode<WeakCell> p_o, TNode<Union<JSReceiver, Symbol, Undefined>> p_v) {
return StoreWeakCellUnregisterToken_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellHoldings(TNode<WeakCell> p_o) {
return LoadWeakCellHoldings_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellHoldings(TNode<WeakCell> p_o, TNode<JSAny> p_v) {
return StoreWeakCellHoldings_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
TNode<Union<Undefined, WeakCell>> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellPrev(TNode<WeakCell> p_o) {
return LoadWeakCellPrev_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellPrev(TNode<WeakCell> p_o, TNode<Union<Undefined, WeakCell>> p_v) {
return StoreWeakCellPrev_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
TNode<Union<Undefined, WeakCell>> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellNext(TNode<WeakCell> p_o) {
return LoadWeakCellNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellNext(TNode<WeakCell> p_o, TNode<Union<Undefined, WeakCell>> p_v) {
return StoreWeakCellNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
TNode<Union<Undefined, WeakCell>> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellKeyListPrev(TNode<WeakCell> p_o) {
return LoadWeakCellKeyListPrev_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellKeyListPrev(TNode<WeakCell> p_o, TNode<Union<Undefined, WeakCell>> p_v) {
return StoreWeakCellKeyListPrev_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
TNode<Union<Undefined, WeakCell>> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellKeyListNext(TNode<WeakCell> p_o) {
return LoadWeakCellKeyListNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellKeyListNext(TNode<WeakCell> p_o, TNode<Union<Undefined, WeakCell>> p_v) {
return StoreWeakCellKeyListNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=13&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoTemplateInfoFlags(TNode<TemplateInfo> p_o) {
return LoadTemplateInfoTemplateInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoTemplateInfoFlags(TNode<TemplateInfo> p_o, TNode<Smi> p_v) {
return StoreTemplateInfoTemplateInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=18&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoWithPropertiesNumberOfProperties(TNode<TemplateInfoWithProperties> p_o) {
return LoadTemplateInfoWithPropertiesNumberOfProperties_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoWithPropertiesNumberOfProperties(TNode<TemplateInfoWithProperties> p_o, TNode<Smi> p_v) {
return StoreTemplateInfoWithPropertiesNumberOfProperties_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=19&c=3
TNode<Union<ArrayList, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoWithPropertiesPropertyList(TNode<TemplateInfoWithProperties> p_o) {
return LoadTemplateInfoWithPropertiesPropertyList_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoWithPropertiesPropertyList(TNode<TemplateInfoWithProperties> p_o, TNode<Union<ArrayList, Undefined>> p_v) {
return StoreTemplateInfoWithPropertiesPropertyList_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=20&c=3
TNode<Union<ArrayList, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoWithPropertiesPropertyAccessors(TNode<TemplateInfoWithProperties> p_o) {
return LoadTemplateInfoWithPropertiesPropertyAccessors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoWithPropertiesPropertyAccessors(TNode<TemplateInfoWithProperties> p_o, TNode<Union<ArrayList, Undefined>> p_v) {
return StoreTemplateInfoWithPropertiesPropertyAccessors_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=56&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoClassName(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoClassName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=56&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoClassName(TNode<FunctionTemplateInfo> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreFunctionTemplateInfoClassName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=60&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoInterfaceName(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoInterfaceName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=60&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoInterfaceName(TNode<FunctionTemplateInfo> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreFunctionTemplateInfoInterfaceName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=65&c=3
TNode<Union<FunctionTemplateInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoSignature(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoSignature_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoSignature(TNode<FunctionTemplateInfo> p_o, TNode<Union<FunctionTemplateInfo, Undefined>> p_v) {
return StoreFunctionTemplateInfoSignature_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=71&c=3
TNode<Union<FunctionTemplateRareData, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoRareData(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoRareData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=71&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoRareData(TNode<FunctionTemplateInfo> p_o, TNode<Union<FunctionTemplateRareData, Undefined>> p_v) {
return StoreFunctionTemplateInfoRareData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=72&c=3
TNode<Union<SharedFunctionInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoSharedFunctionInfo(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoSharedFunctionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=72&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoSharedFunctionInfo(TNode<FunctionTemplateInfo> p_o, TNode<Union<SharedFunctionInfo, Undefined>> p_v) {
return StoreFunctionTemplateInfoSharedFunctionInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=76&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoCachedPropertyName(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoCachedPropertyName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=76&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoCachedPropertyName(TNode<FunctionTemplateInfo> p_o, TNode<Object> p_v) {
return StoreFunctionTemplateInfoCachedPropertyName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=83&c=36
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoCallbackData(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoCallbackData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=83&c=36
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoCallbackData(TNode<FunctionTemplateInfo> p_o, TNode<Object> p_v) {
return StoreFunctionTemplateInfoCallbackData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=86&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoFlag(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoFlag_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=86&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoFlag(TNode<FunctionTemplateInfo> p_o, TNode<Uint32T> p_v) {
return StoreFunctionTemplateInfoFlag_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=88&c=3
TNode<Int16T> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoLength(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=88&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoLength(TNode<FunctionTemplateInfo> p_o, TNode<Int16T> p_v) {
return StoreFunctionTemplateInfoLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=91&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoInstanceType(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoInstanceType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=91&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoInstanceType(TNode<FunctionTemplateInfo> p_o, TNode<Uint16T> p_v) {
return StoreFunctionTemplateInfoInstanceType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=96&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoExceptionContext(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoExceptionContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=96&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoExceptionContext(TNode<FunctionTemplateInfo> p_o, TNode<Uint32T> p_v) {
return StoreFunctionTemplateInfoExceptionContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=98&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoOptionalPadding(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=98&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoOptionalPadding(TNode<FunctionTemplateInfo> p_o, TNode<Uint32T> p_v) {
return StoreFunctionTemplateInfoOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=105&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoMaybeRedirectedCallback(TNode<FunctionTemplateInfo> p_o) {
return LoadFunctionTemplateInfoMaybeRedirectedCallback_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=105&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoMaybeRedirectedCallback(TNode<FunctionTemplateInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreFunctionTemplateInfoMaybeRedirectedCallback_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmFuncRefTrustedInternal(TNode<WasmFuncRef> p_o) {
return LoadWasmFuncRefTrustedInternal_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=105&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFuncRefTrustedInternal(TNode<WasmFuncRef> p_o, TNode<TrustedPointerT> p_v) {
return StoreWasmFuncRefTrustedInternal_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionTable(TNode<JSCollection> p_o) {
return LoadJSCollectionTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionTable(TNode<JSCollection> p_o, TNode<Object> p_v) {
return StoreJSCollectionTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=6&c=3
TNode<Union<JSReceiver, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityPromise(TNode<PromiseCapability> p_o) {
return LoadPromiseCapabilityPromise_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityPromise(TNode<PromiseCapability> p_o, TNode<Union<JSReceiver, Undefined>> p_v) {
return StorePromiseCapabilityPromise_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=12&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityResolve(TNode<PromiseCapability> p_o) {
return LoadPromiseCapabilityResolve_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityResolve(TNode<PromiseCapability> p_o, TNode<JSAny> p_v) {
return StorePromiseCapabilityResolve_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=13&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityReject(TNode<PromiseCapability> p_o) {
return LoadPromiseCapabilityReject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityReject(TNode<PromiseCapability> p_o, TNode<JSAny> p_v) {
return StorePromiseCapabilityReject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=65&c=3
TNode<JSArrayBuffer> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewBuffer(TNode<JSArrayBufferView> p_o) {
return LoadJSArrayBufferViewBuffer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewBuffer(TNode<JSArrayBufferView> p_o, TNode<JSArrayBuffer> p_v) {
return StoreJSArrayBufferViewBuffer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=66&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewBitField(TNode<JSArrayBufferView> p_o) {
return LoadJSArrayBufferViewBitField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=66&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewBitField(TNode<JSArrayBufferView> p_o, TNode<Uint32T> p_v) {
return StoreJSArrayBufferViewBitField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=67&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewOptionalPadding(TNode<JSArrayBufferView> p_o) {
return LoadJSArrayBufferViewOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=67&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewOptionalPadding(TNode<JSArrayBufferView> p_o, TNode<Uint32T> p_v) {
return StoreJSArrayBufferViewOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=69&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewRawByteOffset(TNode<JSArrayBufferView> p_o) {
return LoadJSArrayBufferViewRawByteOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=69&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewRawByteOffset(TNode<JSArrayBufferView> p_o, TNode<UintPtrT> p_v) {
return StoreJSArrayBufferViewRawByteOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=71&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewRawByteLength(TNode<JSArrayBufferView> p_o) {
return LoadJSArrayBufferViewRawByteLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=71&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewRawByteLength(TNode<JSArrayBufferView> p_o, TNode<UintPtrT> p_v) {
return StoreJSArrayBufferViewRawByteLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=109&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayRawLength(TNode<JSTypedArray> p_o) {
return LoadJSTypedArrayRawLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=109&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayRawLength(TNode<JSTypedArray> p_o, TNode<UintPtrT> p_v) {
return StoreJSTypedArrayRawLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=111&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayExternalPointer(TNode<JSTypedArray> p_o) {
return LoadJSTypedArrayExternalPointer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=111&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayExternalPointer(TNode<JSTypedArray> p_o, TNode<RawPtrT> p_v) {
return StoreJSTypedArrayExternalPointer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=112&c=3
TNode<Union<ByteArray, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayBasePointer(TNode<JSTypedArray> p_o) {
return LoadJSTypedArrayBasePointer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=112&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayBasePointer(TNode<JSTypedArray> p_o, TNode<Union<ByteArray, Smi>> p_v) {
return StoreJSTypedArrayBasePointer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=9&c=3
TNode<AllocationSite> TorqueGeneratedExportedMacrosAssembler::LoadAllocationMementoAllocationSite(TNode<AllocationMemento> p_o) {
return LoadAllocationMementoAllocationSite_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAllocationMementoAllocationSite(TNode<AllocationMemento> p_o, TNode<AllocationSite> p_v) {
return StoreAllocationMementoAllocationSite_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoData(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoData(TNode<InterceptorInfo> p_o, TNode<Object> p_v) {
return StoreInterceptorInfoData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=15&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoFlags(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoFlags(TNode<InterceptorInfo> p_o, TNode<Uint32T> p_v) {
return StoreInterceptorInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=16&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoOptionalPadding(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=16&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoOptionalPadding(TNode<InterceptorInfo> p_o, TNode<Uint32T> p_v) {
return StoreInterceptorInfoOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=18&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoGetter(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoGetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoGetter(TNode<InterceptorInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreInterceptorInfoGetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=19&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoSetter(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoSetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoSetter(TNode<InterceptorInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreInterceptorInfoSetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=20&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoQuery(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoQuery_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoQuery(TNode<InterceptorInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreInterceptorInfoQuery_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=21&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDescriptor(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoDescriptor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDescriptor(TNode<InterceptorInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreInterceptorInfoDescriptor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=22&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDeleter(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoDeleter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDeleter(TNode<InterceptorInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreInterceptorInfoDeleter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=23&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoEnumerator(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoEnumerator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoEnumerator(TNode<InterceptorInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreInterceptorInfoEnumerator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=24&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDefiner(TNode<InterceptorInfo> p_o) {
return LoadInterceptorInfoDefiner_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDefiner(TNode<InterceptorInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreInterceptorInfoDefiner_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
TNode<Union<Foreign, Smi, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoCallback(TNode<AccessCheckInfo> p_o) {
return LoadAccessCheckInfoCallback_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoCallback(TNode<AccessCheckInfo> p_o, TNode<Union<Foreign, Smi, Undefined>> p_v) {
return StoreAccessCheckInfoCallback_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
TNode<Union<InterceptorInfo, Smi, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoNamedInterceptor(TNode<AccessCheckInfo> p_o) {
return LoadAccessCheckInfoNamedInterceptor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoNamedInterceptor(TNode<AccessCheckInfo> p_o, TNode<Union<InterceptorInfo, Smi, Undefined>> p_v) {
return StoreAccessCheckInfoNamedInterceptor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=30&c=3
TNode<Union<InterceptorInfo, Smi, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoIndexedInterceptor(TNode<AccessCheckInfo> p_o) {
return LoadAccessCheckInfoIndexedInterceptor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoIndexedInterceptor(TNode<AccessCheckInfo> p_o, TNode<Union<InterceptorInfo, Smi, Undefined>> p_v) {
return StoreAccessCheckInfoIndexedInterceptor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=31&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoData(TNode<AccessCheckInfo> p_o) {
return LoadAccessCheckInfoData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=31&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoData(TNode<AccessCheckInfo> p_o, TNode<Object> p_v) {
return StoreAccessCheckInfoData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=45&c=3
TNode<Name> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoName(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=45&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoName(TNode<AccessorInfo> p_o, TNode<Name> p_v) {
return StoreAccessorInfoName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=46&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoData(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=46&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoData(TNode<AccessorInfo> p_o, TNode<Object> p_v) {
return StoreAccessorInfoData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=50&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoMaybeRedirectedGetter(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoMaybeRedirectedGetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoMaybeRedirectedGetter(TNode<AccessorInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreAccessorInfoMaybeRedirectedGetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=51&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoSetter(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoSetter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=51&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoSetter(TNode<AccessorInfo> p_o, TNode<ExternalPointerT> p_v) {
return StoreAccessorInfoSetter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=52&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoFlags(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=52&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoFlags(TNode<AccessorInfo> p_o, TNode<Uint32T> p_v) {
return StoreAccessorInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=53&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoOptionalPadding(TNode<AccessorInfo> p_o) {
return LoadAccessorInfoOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=53&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoOptionalPadding(TNode<AccessorInfo> p_o, TNode<Uint32T> p_v) {
return StoreAccessorInfoOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSSloppyArgumentsObjectLength(TNode<JSArgumentsObject> p_o) {
return LoadJSSloppyArgumentsObjectLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSloppyArgumentsObjectLength(TNode<JSArgumentsObject> p_o, TNode<JSAny> p_v) {
return StoreJSSloppyArgumentsObjectLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSSloppyArgumentsObjectCallee(TNode<JSArgumentsObject> p_o) {
return LoadJSSloppyArgumentsObjectCallee_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSloppyArgumentsObjectCallee(TNode<JSArgumentsObject> p_o, TNode<JSAny> p_v) {
return StoreJSSloppyArgumentsObjectCallee_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSStrictArgumentsObjectLength(TNode<JSArgumentsObject> p_o) {
return LoadJSStrictArgumentsObjectLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSStrictArgumentsObjectLength(TNode<JSArgumentsObject> p_o, TNode<JSAny> p_v) {
return StoreJSStrictArgumentsObjectLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=29&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadSloppyArgumentsElementsContext(TNode<SloppyArgumentsElements> p_o) {
return LoadSloppyArgumentsElementsContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSloppyArgumentsElementsContext(TNode<SloppyArgumentsElements> p_o, TNode<Context> p_v) {
return StoreSloppyArgumentsElementsContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=30&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSloppyArgumentsElementsArguments(TNode<SloppyArgumentsElements> p_o) {
return LoadSloppyArgumentsElementsArguments_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSloppyArgumentsElementsArguments(TNode<SloppyArgumentsElements> p_o, TNode<FixedArray> p_v) {
return StoreSloppyArgumentsElementsArguments_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=31&c=3
TorqueStructSlice_Smi_OR_TheHole_MutableReference_Smi_OR_TheHole_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSloppyArgumentsElementsMappedEntries(TNode<SloppyArgumentsElements> p_o) {
return FieldSliceSloppyArgumentsElementsMappedEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=31&c=3
TNode<Union<Hole, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadSloppyArgumentsElementsMappedEntries(TNode<SloppyArgumentsElements> p_o, TNode<IntPtrT> p_i) {
return LoadSloppyArgumentsElementsMappedEntries_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=31&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSloppyArgumentsElementsMappedEntries(TNode<SloppyArgumentsElements> p_o, TNode<IntPtrT> p_i, TNode<Union<Hole, Smi>> p_v) {
return StoreSloppyArgumentsElementsMappedEntries_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=42&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAliasedArgumentsEntryAliasedContextSlot(TNode<AliasedArgumentsEntry> p_o) {
return LoadAliasedArgumentsEntryAliasedContextSlot_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=42&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAliasedArgumentsEntryAliasedContextSlot(TNode<AliasedArgumentsEntry> p_o, TNode<Smi> p_v) {
return StoreAliasedArgumentsEntryAliasedContextSlot_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoCodeObject(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoCodeObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoCodeObject(TNode<CallSiteInfo> p_o, TNode<TrustedPointerT> p_v) {
return StoreCallSiteInfoCodeObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoReceiverOrInstance(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoReceiverOrInstance_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoReceiverOrInstance(TNode<CallSiteInfo> p_o, TNode<JSAny> p_v) {
return StoreCallSiteInfoReceiverOrInstance_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=24&c=3
TNode<Union<JSFunction, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoFunction(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoFunction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoFunction(TNode<CallSiteInfo> p_o, TNode<Union<JSFunction, Smi>> p_v) {
return StoreCallSiteInfoFunction_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=25&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoCodeOffsetOrSourcePosition(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoCodeOffsetOrSourcePosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoCodeOffsetOrSourcePosition(TNode<CallSiteInfo> p_o, TNode<Smi> p_v) {
return StoreCallSiteInfoCodeOffsetOrSourcePosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=26&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoFlags(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoFlags(TNode<CallSiteInfo> p_o, TNode<Smi> p_v) {
return StoreCallSiteInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=27&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadCallSiteInfoParameters(TNode<CallSiteInfo> p_o) {
return LoadCallSiteInfoParameters_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=27&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallSiteInfoParameters(TNode<CallSiteInfo> p_o, TNode<FixedArray> p_v) {
return StoreCallSiteInfoParameters_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadCellMaybeValue(TNode<Cell> p_o) {
return LoadCellMaybeValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCellMaybeValue(TNode<Cell> p_o, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> p_v) {
return StoreCellMaybeValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=78&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakArrayListCapacity(TNode<WeakArrayList> p_o) {
return LoadWeakArrayListCapacity_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=79&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakArrayListLength(TNode<WeakArrayList> p_o) {
return LoadWeakArrayListLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=79&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWeakArrayListLength(TNode<WeakArrayList> p_o, TNode<Smi> p_v) {
return StoreWeakArrayListLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=80&c=36
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceWeakArrayListObjects(TNode<WeakArrayList> p_o) {
return FieldSliceWeakArrayListObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=80&c=36
TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadWeakArrayListObjects(TNode<WeakArrayList> p_o, TNode<IntPtrT> p_i) {
return LoadWeakArrayListObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=80&c=36
void TorqueGeneratedExportedMacrosAssembler::StoreWeakArrayListObjects(TNode<WeakArrayList> p_o, TNode<IntPtrT> p_i, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> p_v) {
return StoreWeakArrayListObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=9&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayLength(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=10&c=3
TNode<BytecodeWrapper> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayWrapper(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayWrapper_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayWrapper(TNode<BytecodeArray> p_o, TNode<BytecodeWrapper> p_v) {
return StoreBytecodeArrayWrapper_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=11&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArraySourcePositionTable(TNode<BytecodeArray> p_o) {
return LoadBytecodeArraySourcePositionTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArraySourcePositionTable(TNode<BytecodeArray> p_o, TNode<MaybeObject> p_v) {
return StoreBytecodeArraySourcePositionTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=12&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayHandlerTable(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayHandlerTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayHandlerTable(TNode<BytecodeArray> p_o, TNode<MaybeObject> p_v) {
return StoreBytecodeArrayHandlerTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=13&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayConstantPool(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayConstantPool_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayConstantPool(TNode<BytecodeArray> p_o, TNode<MaybeObject> p_v) {
return StoreBytecodeArrayConstantPool_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=14&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayFrameSize(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayFrameSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayFrameSize(TNode<BytecodeArray> p_o, TNode<Int32T> p_v) {
return StoreBytecodeArrayFrameSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=15&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayParameterSize(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayParameterSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayParameterSize(TNode<BytecodeArray> p_o, TNode<Uint16T> p_v) {
return StoreBytecodeArrayParameterSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=16&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayMaxArguments(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayMaxArguments_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayMaxArguments(TNode<BytecodeArray> p_o, TNode<Uint16T> p_v) {
return StoreBytecodeArrayMaxArguments_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=17&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayIncomingNewTargetOrGeneratorRegister(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayIncomingNewTargetOrGeneratorRegister_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayIncomingNewTargetOrGeneratorRegister(TNode<BytecodeArray> p_o, TNode<Int32T> p_v) {
return StoreBytecodeArrayIncomingNewTargetOrGeneratorRegister_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=18&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayOptionalPadding(TNode<BytecodeArray> p_o) {
return LoadBytecodeArrayOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=18&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayOptionalPadding(TNode<BytecodeArray> p_o, TNode<Uint32T> p_v) {
return StoreBytecodeArrayOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=20&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceBytecodeArrayBytes(TNode<BytecodeArray> p_o) {
return FieldSliceBytecodeArrayBytes_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=20&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayBytes(TNode<BytecodeArray> p_o, TNode<IntPtrT> p_i) {
return LoadBytecodeArrayBytes_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayBytes(TNode<BytecodeArray> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreBytecodeArrayBytes_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=28&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeWrapperBytecode(TNode<BytecodeWrapper> p_o) {
return LoadBytecodeWrapperBytecode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeWrapperBytecode(TNode<BytecodeWrapper> p_o, TNode<TrustedPointerT> p_v) {
return StoreBytecodeWrapperBytecode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=19&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptContextTableCapacity(TNode<ScriptContextTable> p_o) {
return LoadScriptContextTableCapacity_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptContextTableLength(TNode<ScriptContextTable> p_o) {
return LoadScriptContextTableLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptContextTableLength(TNode<ScriptContextTable> p_o, TNode<Smi> p_v) {
return StoreScriptContextTableLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=21&c=3
TNode<NameToIndexHashTable> TorqueGeneratedExportedMacrosAssembler::LoadScriptContextTableNamesToContextIndex(TNode<ScriptContextTable> p_o) {
return LoadScriptContextTableNamesToContextIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptContextTableNamesToContextIndex(TNode<ScriptContextTable> p_o, TNode<NameToIndexHashTable> p_v) {
return StoreScriptContextTableNamesToContextIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=3
TorqueStructSlice_Context_MutableReference_Context_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScriptContextTableObjects(TNode<ScriptContextTable> p_o) {
return FieldSliceScriptContextTableObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadScriptContextTableObjects(TNode<ScriptContextTable> p_o, TNode<IntPtrT> p_i) {
return LoadScriptContextTableObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptContextTableObjects(TNode<ScriptContextTable> p_o, TNode<IntPtrT> p_i, TNode<Context> p_v) {
return StoreScriptContextTableObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=28&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextCellTaggedValue(TNode<ContextCell> p_o) {
return LoadContextCellTaggedValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreContextCellTaggedValue(TNode<ContextCell> p_o, TNode<Object> p_v) {
return StoreContextCellTaggedValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=29&c=3
TNode<WeakArrayList> TorqueGeneratedExportedMacrosAssembler::LoadContextCellDependentCode(TNode<ContextCell> p_o) {
return LoadContextCellDependentCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreContextCellDependentCode(TNode<ContextCell> p_o, TNode<WeakArrayList> p_v) {
return StoreContextCellDependentCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=30&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadContextCellState(TNode<ContextCell> p_o) {
return LoadContextCellState_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreContextCellState(TNode<ContextCell> p_o, TNode<Int32T> p_v) {
return StoreContextCellState_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=31&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadContextCellOptionalPadding(TNode<ContextCell> p_o) {
return LoadContextCellOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=31&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreContextCellOptionalPadding(TNode<ContextCell> p_o, TNode<Uint32T> p_v) {
return StoreContextCellOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=32&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadContextCellDoubleValue(TNode<ContextCell> p_o) {
return LoadContextCellDoubleValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreContextCellDoubleValue(TNode<ContextCell> p_o, TNode<Float64T> p_v) {
return StoreContextCellDoubleValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=121&c=42
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoFlags(TNode<ScopeInfo> p_o) {
return LoadScopeInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=123&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoOptionalPadding(TNode<ScopeInfo> p_o) {
return LoadScopeInfoOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=123&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoOptionalPadding(TNode<ScopeInfo> p_o, TNode<Uint32T> p_v) {
return StoreScopeInfoOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=127&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoParameterCount(TNode<ScopeInfo> p_o) {
return LoadScopeInfoParameterCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=127&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoParameterCount(TNode<ScopeInfo> p_o, TNode<Smi> p_v) {
return StoreScopeInfoParameterCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=131&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoContextLocalCount(TNode<ScopeInfo> p_o) {
return LoadScopeInfoContextLocalCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=134&c=3
TorqueStructPositionInfo_0 TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoPositionInfo(TNode<ScopeInfo> p_o) {
return LoadScopeInfoPositionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=134&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoPositionInfo(TNode<ScopeInfo> p_o, TorqueStructPositionInfo_0 p_v) {
return StoreScopeInfoPositionInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=139&c=9
TorqueStructSlice_Smi_ConstReference_Smi_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoModuleVariableCount(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoModuleVariableCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=139&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoModuleVariableCount(TNode<ScopeInfo> p_o) {
return LoadScopeInfoModuleVariableCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=145&c=3
TorqueStructSlice_String_MutableReference_String_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoContextLocalNames(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoContextLocalNames_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=145&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoContextLocalNames(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i) {
return LoadScopeInfoContextLocalNames_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=145&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoContextLocalNames(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i, TNode<String> p_v) {
return StoreScopeInfoContextLocalNames_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=150&c=3
TorqueStructSlice_NameToIndexHashTable_MutableReference_NameToIndexHashTable_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoContextLocalNamesHashtable(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoContextLocalNamesHashtable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=150&c=3
TNode<NameToIndexHashTable> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoContextLocalNamesHashtable(TNode<ScopeInfo> p_o) {
return LoadScopeInfoContextLocalNamesHashtable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=150&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoContextLocalNamesHashtable(TNode<ScopeInfo> p_o, TNode<NameToIndexHashTable> p_v) {
return StoreScopeInfoContextLocalNamesHashtable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
TorqueStructSlice_SmiTagged_VariableProperties_MutableReference_SmiTagged_VariableProperties_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoContextLocalInfos(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoContextLocalInfos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoContextLocalInfos(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i) {
return LoadScopeInfoContextLocalInfos_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=156&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoContextLocalInfos(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v) {
return StoreScopeInfoContextLocalInfos_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=161&c=3
TorqueStructSlice_Smi_OR_Name_MutableReference_Smi_OR_Name_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoSavedClassVariableInfo(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoSavedClassVariableInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=161&c=3
TNode<Union<Name, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoSavedClassVariableInfo(TNode<ScopeInfo> p_o) {
return LoadScopeInfoSavedClassVariableInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=161&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoSavedClassVariableInfo(TNode<ScopeInfo> p_o, TNode<Union<Name, Smi>> p_v) {
return StoreScopeInfoSavedClassVariableInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=167&c=3
TorqueStructSlice_FunctionVariableInfo_MutableReference_FunctionVariableInfo_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoFunctionVariableInfo(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoFunctionVariableInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=172&c=3
TorqueStructSlice_String_OR_Undefined_MutableReference_String_OR_Undefined_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoInferredFunctionName(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoInferredFunctionName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=172&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoInferredFunctionName(TNode<ScopeInfo> p_o) {
return LoadScopeInfoInferredFunctionName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=172&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoInferredFunctionName(TNode<ScopeInfo> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreScopeInfoInferredFunctionName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
TorqueStructSlice_TheHole_OR_ScopeInfo_MutableReference_TheHole_OR_ScopeInfo_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoOuterScopeInfo(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoOuterScopeInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
TNode<Union<Hole, ScopeInfo>> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoOuterScopeInfo(TNode<ScopeInfo> p_o) {
return LoadScopeInfoOuterScopeInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoOuterScopeInfo(TNode<ScopeInfo> p_o, TNode<Union<Hole, ScopeInfo>> p_v) {
return StoreScopeInfoOuterScopeInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
TorqueStructSlice_SourceTextModuleInfo_MutableReference_SourceTextModuleInfo_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoModuleInfo(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoModuleInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoModuleInfo(TNode<ScopeInfo> p_o) {
return LoadScopeInfoModuleInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=178&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoModuleInfo(TNode<ScopeInfo> p_o, TNode<FixedArray> p_v) {
return StoreScopeInfoModuleInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=180&c=3
TorqueStructSlice_ModuleVariable_MutableReference_ModuleVariable_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoModuleVariables(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoModuleVariables_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=184&c=3
TorqueStructSlice_DependentCode_MutableReference_DependentCode_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceScopeInfoDependentCode(TNode<ScopeInfo> p_o) {
return FieldSliceScopeInfoDependentCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=184&c=3
TNode<WeakArrayList> TorqueGeneratedExportedMacrosAssembler::LoadScopeInfoDependentCode(TNode<ScopeInfo> p_o) {
return LoadScopeInfoDependentCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=184&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScopeInfoDependentCode(TNode<ScopeInfo> p_o, TNode<WeakArrayList> p_v) {
return StoreScopeInfoDependentCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=33&c=3
TorqueStructSlice_float64_or_undefined_or_hole_MutableReference_float64_or_undefined_or_hole_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceFixedDoubleArrayValues(TNode<FixedDoubleArray> p_o) {
return FieldSliceFixedDoubleArrayValues_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=14&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadRegExpMatchInfoLength(TNode<RegExpMatchInfo> p_o) {
return LoadRegExpMatchInfoLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=15&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadRegExpMatchInfoNumberOfCaptureRegisters(TNode<RegExpMatchInfo> p_o) {
return LoadRegExpMatchInfoNumberOfCaptureRegisters_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpMatchInfoNumberOfCaptureRegisters(TNode<RegExpMatchInfo> p_o, TNode<Smi> p_v) {
return StoreRegExpMatchInfoNumberOfCaptureRegisters_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=16&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadRegExpMatchInfoLastSubject(TNode<RegExpMatchInfo> p_o) {
return LoadRegExpMatchInfoLastSubject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpMatchInfoLastSubject(TNode<RegExpMatchInfo> p_o, TNode<String> p_v) {
return StoreRegExpMatchInfoLastSubject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=17&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadRegExpMatchInfoLastInput(TNode<RegExpMatchInfo> p_o) {
return LoadRegExpMatchInfoLastInput_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpMatchInfoLastInput(TNode<RegExpMatchInfo> p_o, TNode<Object> p_v) {
return StoreRegExpMatchInfoLastInput_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=19&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceRegExpMatchInfoObjects(TNode<RegExpMatchInfo> p_o) {
return FieldSliceRegExpMatchInfoObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=19&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadRegExpMatchInfoObjects(TNode<RegExpMatchInfo> p_o, TNode<IntPtrT> p_i) {
return LoadRegExpMatchInfoObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpMatchInfoObjects(TNode<RegExpMatchInfo> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v) {
return StoreRegExpMatchInfoObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=6&c=3
TNode<CppHeapPointerT> TorqueGeneratedExportedMacrosAssembler::LoadCppHeapExternalObjectCppHeapWrappable(TNode<CppHeapExternalObject> p_o) {
return LoadCppHeapExternalObjectCppHeapWrappable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCppHeapExternalObjectCppHeapWrappable(TNode<CppHeapExternalObject> p_o, TNode<CppHeapPointerT> p_v) {
return StoreCppHeapExternalObjectCppHeapWrappable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=6&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadBreakPointId(TNode<BreakPoint> p_o) {
return LoadBreakPointId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBreakPointId(TNode<BreakPoint> p_o, TNode<Smi> p_v) {
return StoreBreakPointId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadBreakPointCondition(TNode<BreakPoint> p_o) {
return LoadBreakPointCondition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBreakPointCondition(TNode<BreakPoint> p_o, TNode<String> p_v) {
return StoreBreakPointCondition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=12&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadBreakPointInfoSourcePosition(TNode<BreakPointInfo> p_o) {
return LoadBreakPointInfoSourcePosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBreakPointInfoSourcePosition(TNode<BreakPointInfo> p_o, TNode<Smi> p_v) {
return StoreBreakPointInfoSourcePosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
TNode<Union<BreakPoint, FixedArray, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadBreakPointInfoBreakPoints(TNode<BreakPointInfo> p_o) {
return LoadBreakPointInfoBreakPoints_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreBreakPointInfoBreakPoints(TNode<BreakPointInfo> p_o, TNode<Union<BreakPoint, FixedArray, Undefined>> p_v) {
return StoreBreakPointInfoBreakPoints_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoShared(TNode<DebugInfo> p_o) {
return LoadDebugInfoShared_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoShared(TNode<DebugInfo> p_o, TNode<SharedFunctionInfo> p_v) {
return StoreDebugInfoShared_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=36&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoDebuggerHints(TNode<DebugInfo> p_o) {
return LoadDebugInfoDebuggerHints_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoDebuggerHints(TNode<DebugInfo> p_o, TNode<Smi> p_v) {
return StoreDebugInfoDebuggerHints_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoBreakPoints(TNode<DebugInfo> p_o) {
return LoadDebugInfoBreakPoints_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoBreakPoints(TNode<DebugInfo> p_o, TNode<FixedArray> p_v) {
return StoreDebugInfoBreakPoints_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=40&c=36
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoFlags(TNode<DebugInfo> p_o) {
return LoadDebugInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=40&c=36
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoFlags(TNode<DebugInfo> p_o, TNode<Smi> p_v) {
return StoreDebugInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=41&c=3
TNode<Union<CoverageInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoCoverageInfo(TNode<DebugInfo> p_o) {
return LoadDebugInfoCoverageInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=41&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoCoverageInfo(TNode<DebugInfo> p_o, TNode<Union<CoverageInfo, Undefined>> p_v) {
return StoreDebugInfoCoverageInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=45&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoOriginalBytecodeArray(TNode<DebugInfo> p_o) {
return LoadDebugInfoOriginalBytecodeArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=45&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoOriginalBytecodeArray(TNode<DebugInfo> p_o, TNode<TrustedPointerT> p_v) {
return StoreDebugInfoOriginalBytecodeArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=49&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoDebugBytecodeArray(TNode<DebugInfo> p_o) {
return LoadDebugInfoDebugBytecodeArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=49&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoDebugBytecodeArray(TNode<DebugInfo> p_o, TNode<TrustedPointerT> p_v) {
return StoreDebugInfoDebugBytecodeArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=63&c=9
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadCoverageInfoSlotCount(TNode<CoverageInfo> p_o) {
return LoadCoverageInfoSlotCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=64&c=3
TorqueStructSlice_CoverageInfoSlot_MutableReference_CoverageInfoSlot_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceCoverageInfoSlots(TNode<CoverageInfo> p_o) {
return FieldSliceCoverageInfoSlots_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=79&c=3
TNode<Union<Script, SharedFunctionInfo>> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoSharedOrScript(TNode<StackFrameInfo> p_o) {
return LoadStackFrameInfoSharedOrScript_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=79&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoSharedOrScript(TNode<StackFrameInfo> p_o, TNode<Union<Script, SharedFunctionInfo>> p_v) {
return StoreStackFrameInfoSharedOrScript_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=80&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoFunctionName(TNode<StackFrameInfo> p_o) {
return LoadStackFrameInfoFunctionName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=80&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoFunctionName(TNode<StackFrameInfo> p_o, TNode<String> p_v) {
return StoreStackFrameInfoFunctionName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=81&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoFlags(TNode<StackFrameInfo> p_o) {
return LoadStackFrameInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=81&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoFlags(TNode<StackFrameInfo> p_o, TNode<Smi> p_v) {
return StoreStackFrameInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=86&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceInfoId(TNode<StackTraceInfo> p_o) {
return LoadStackTraceInfoId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=86&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceInfoId(TNode<StackTraceInfo> p_o, TNode<Smi> p_v) {
return StoreStackTraceInfoId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=88&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceInfoFrames(TNode<StackTraceInfo> p_o) {
return LoadStackTraceInfoFrames_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=88&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceInfoFrames(TNode<StackTraceInfo> p_o, TNode<FixedArray> p_v) {
return StoreStackTraceInfoFrames_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=108&c=3
TNode<Union<BigInt, Boolean, FixedArray, HeapNumber, JSReceiver, Null, Smi, String, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadErrorStackDataCallSiteInfosOrFormattedStack(TNode<ErrorStackData> p_o) {
return LoadErrorStackDataCallSiteInfosOrFormattedStack_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=108&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreErrorStackDataCallSiteInfosOrFormattedStack(TNode<ErrorStackData> p_o, TNode<Union<BigInt, Boolean, FixedArray, HeapNumber, JSReceiver, Null, Smi, String, Symbol, Undefined>> p_v) {
return StoreErrorStackDataCallSiteInfosOrFormattedStack_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=110&c=3
TNode<StackTraceInfo> TorqueGeneratedExportedMacrosAssembler::LoadErrorStackDataStackTrace(TNode<ErrorStackData> p_o) {
return LoadErrorStackDataStackTrace_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=110&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreErrorStackDataStackTrace(TNode<ErrorStackData> p_o, TNode<StackTraceInfo> p_v) {
return StoreErrorStackDataStackTrace_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=6&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadEnumCacheKeys(TNode<EnumCache> p_o) {
return LoadEnumCacheKeys_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreEnumCacheKeys(TNode<EnumCache> p_o, TNode<FixedArray> p_v) {
return StoreEnumCacheKeys_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=7&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadEnumCacheIndices(TNode<EnumCache> p_o) {
return LoadEnumCacheIndices_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreEnumCacheIndices(TNode<EnumCache> p_o, TNode<FixedArray> p_v) {
return StoreEnumCacheIndices_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=28&c=9
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayNumberOfAllDescriptors(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayNumberOfAllDescriptors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=29&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayNumberOfDescriptors(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayNumberOfDescriptors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayNumberOfDescriptors(TNode<DescriptorArray> p_o, TNode<Uint16T> p_v) {
return StoreDescriptorArrayNumberOfDescriptors_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=32&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayRawGcState(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayRawGcState_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayRawGcState(TNode<DescriptorArray> p_o, TNode<Uint32T> p_v) {
return StoreDescriptorArrayRawGcState_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=33&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayFlags(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayFlags(TNode<DescriptorArray> p_o, TNode<Uint32T> p_v) {
return StoreDescriptorArrayFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=35&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayOptionalPadding(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=35&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayOptionalPadding(TNode<DescriptorArray> p_o, TNode<Uint32T> p_v) {
return StoreDescriptorArrayOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=38&c=3
TNode<EnumCache> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayEnumCache(TNode<DescriptorArray> p_o) {
return LoadDescriptorArrayEnumCache_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayEnumCache(TNode<DescriptorArray> p_o, TNode<EnumCache> p_v) {
return StoreDescriptorArrayEnumCache_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=39&c=3
TorqueStructSlice_DescriptorEntry_MutableReference_DescriptorEntry_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceDescriptorArrayDescriptors(TNode<DescriptorArray> p_o) {
return FieldSliceDescriptorArrayDescriptors_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadEmbedderDataArrayLength(TNode<EmbedderDataArray> p_o) {
return LoadEmbedderDataArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreEmbedderDataArrayLength(TNode<EmbedderDataArray> p_o, TNode<Smi> p_v) {
return StoreEmbedderDataArrayLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=6&c=3
TNode<Union<ClosureFeedbackCellArray, FeedbackVector, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackCellValue(TNode<FeedbackCell> p_o) {
return LoadFeedbackCellValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackCellValue(TNode<FeedbackCell> p_o, TNode<Union<ClosureFeedbackCellArray, FeedbackVector, Undefined>> p_v) {
return StoreFeedbackCellValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=7&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackCellDispatchHandle(TNode<FeedbackCell> p_o) {
return LoadFeedbackCellDispatchHandle_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackCellDispatchHandle(TNode<FeedbackCell> p_o, TNode<Int32T> p_v) {
return StoreFeedbackCellDispatchHandle_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=8&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackCellInterruptBudget(TNode<FeedbackCell> p_o) {
return LoadFeedbackCellInterruptBudget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackCellInterruptBudget(TNode<FeedbackCell> p_o, TNode<Int32T> p_v) {
return StoreFeedbackCellInterruptBudget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=41&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadClosureFeedbackCellArrayLength(TNode<ClosureFeedbackCellArray> p_o) {
return LoadClosureFeedbackCellArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=42&c=3
TorqueStructSlice_FeedbackCell_MutableReference_FeedbackCell_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceClosureFeedbackCellArrayObjects(TNode<ClosureFeedbackCellArray> p_o) {
return FieldSliceClosureFeedbackCellArrayObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=42&c=3
TNode<FeedbackCell> TorqueGeneratedExportedMacrosAssembler::LoadClosureFeedbackCellArrayObjects(TNode<ClosureFeedbackCellArray> p_o, TNode<IntPtrT> p_i) {
return LoadClosureFeedbackCellArrayObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=42&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClosureFeedbackCellArrayObjects(TNode<ClosureFeedbackCellArray> p_o, TNode<IntPtrT> p_i, TNode<FeedbackCell> p_v) {
return StoreClosureFeedbackCellArrayObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=47&c=9
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorLength(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=48&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorInvocationCount(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorInvocationCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=48&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorInvocationCount(TNode<FeedbackVector> p_o, TNode<Int32T> p_v) {
return StoreFeedbackVectorInvocationCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=49&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorOptionalPadding(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=49&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorOptionalPadding(TNode<FeedbackVector> p_o, TNode<Uint32T> p_v) {
return StoreFeedbackVectorOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=50&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorInvocationCountBeforeStable(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorInvocationCountBeforeStable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorInvocationCountBeforeStable(TNode<FeedbackVector> p_o, TNode<Uint8T> p_v) {
return StoreFeedbackVectorInvocationCountBeforeStable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=51&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorOsrState(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorOsrState_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=51&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorOsrState(TNode<FeedbackVector> p_o, TNode<Uint8T> p_v) {
return StoreFeedbackVectorOsrState_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=52&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorFlags(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=52&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorFlags(TNode<FeedbackVector> p_o, TNode<Uint16T> p_v) {
return StoreFeedbackVectorFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=53&c=3
TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorSharedFunctionInfo(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorSharedFunctionInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=53&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorSharedFunctionInfo(TNode<FeedbackVector> p_o, TNode<SharedFunctionInfo> p_v) {
return StoreFeedbackVectorSharedFunctionInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=54&c=3
TNode<ClosureFeedbackCellArray> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorClosureFeedbackCellArray(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorClosureFeedbackCellArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=54&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorClosureFeedbackCellArray(TNode<FeedbackVector> p_o, TNode<ClosureFeedbackCellArray> p_v) {
return StoreFeedbackVectorClosureFeedbackCellArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=55&c=3
TNode<FeedbackCell> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorParentFeedbackCell(TNode<FeedbackVector> p_o) {
return LoadFeedbackVectorParentFeedbackCell_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=55&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorParentFeedbackCell(TNode<FeedbackVector> p_o, TNode<FeedbackCell> p_v) {
return StoreFeedbackVectorParentFeedbackCell_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=57&c=36
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceFeedbackVectorRawFeedbackSlots(TNode<FeedbackVector> p_o) {
return FieldSliceFeedbackVectorRawFeedbackSlots_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=57&c=36
TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorRawFeedbackSlots(TNode<FeedbackVector> p_o, TNode<IntPtrT> p_i) {
return LoadFeedbackVectorRawFeedbackSlots_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=57&c=36
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorRawFeedbackSlots(TNode<FeedbackVector> p_o, TNode<IntPtrT> p_i, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> p_v) {
return StoreFeedbackVectorRawFeedbackSlots_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=21&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTrustedFixedArrayLength(TNode<TrustedFixedArray> p_o) {
return LoadTrustedFixedArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=3
TorqueStructSlice_Object_MutableReference_Object_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceTrustedFixedArrayObjects(TNode<TrustedFixedArray> p_o) {
return FieldSliceTrustedFixedArrayObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTrustedFixedArrayObjects(TNode<TrustedFixedArray> p_o, TNode<IntPtrT> p_i) {
return LoadTrustedFixedArrayObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTrustedFixedArrayObjects(TNode<TrustedFixedArray> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreTrustedFixedArrayObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=27&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadProtectedFixedArrayLength(TNode<ProtectedFixedArray> p_o) {
return LoadProtectedFixedArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=3
TorqueStructSlice_Smi_OR_TrustedObject_MutableReference_Smi_OR_TrustedObject_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceProtectedFixedArrayObjects(TNode<ProtectedFixedArray> p_o) {
return FieldSliceProtectedFixedArrayObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=3
TNode<Union<Smi, TrustedObject>> TorqueGeneratedExportedMacrosAssembler::LoadProtectedFixedArrayObjects(TNode<ProtectedFixedArray> p_o, TNode<IntPtrT> p_i) {
return LoadProtectedFixedArrayObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreProtectedFixedArrayObjects(TNode<ProtectedFixedArray> p_o, TNode<IntPtrT> p_i, TNode<Union<Smi, TrustedObject>> p_v) {
return StoreProtectedFixedArrayObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTrustedWeakFixedArrayLength(TNode<TrustedWeakFixedArray> p_o) {
return LoadTrustedWeakFixedArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=45&c=3
TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceTrustedWeakFixedArrayObjects(TNode<TrustedWeakFixedArray> p_o) {
return FieldSliceTrustedWeakFixedArrayObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=45&c=3
TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadTrustedWeakFixedArrayObjects(TNode<TrustedWeakFixedArray> p_o, TNode<IntPtrT> p_i) {
return LoadTrustedWeakFixedArrayObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=45&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTrustedWeakFixedArrayObjects(TNode<TrustedWeakFixedArray> p_o, TNode<IntPtrT> p_i, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> p_v) {
return StoreTrustedWeakFixedArrayObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=50&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadProtectedWeakFixedArrayLength(TNode<ProtectedWeakFixedArray> p_o) {
return LoadProtectedWeakFixedArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=53&c=3
TorqueStructSlice_Smi_OR_TrustedObject_MutableReference_Smi_OR_TrustedObject_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceProtectedWeakFixedArrayObjects(TNode<ProtectedWeakFixedArray> p_o) {
return FieldSliceProtectedWeakFixedArrayObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=53&c=3
TNode<Union<Smi, TrustedObject>> TorqueGeneratedExportedMacrosAssembler::LoadProtectedWeakFixedArrayObjects(TNode<ProtectedWeakFixedArray> p_o, TNode<IntPtrT> p_i) {
return LoadProtectedWeakFixedArrayObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=53&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreProtectedWeakFixedArrayObjects(TNode<ProtectedWeakFixedArray> p_o, TNode<IntPtrT> p_i, TNode<Union<Smi, TrustedObject>> p_v) {
return StoreProtectedWeakFixedArrayObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=58&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceByteArrayValues(TNode<ByteArray> p_o) {
return FieldSliceByteArrayValues_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=58&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadByteArrayValues(TNode<ByteArray> p_o, TNode<IntPtrT> p_i) {
return LoadByteArrayValues_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=58&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreByteArrayValues(TNode<ByteArray> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreByteArrayValues_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=63&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTrustedByteArrayLength(TNode<TrustedByteArray> p_o) {
return LoadTrustedByteArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=64&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceTrustedByteArrayValues(TNode<TrustedByteArray> p_o) {
return FieldSliceTrustedByteArrayValues_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=64&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadTrustedByteArrayValues(TNode<TrustedByteArray> p_o, TNode<IntPtrT> p_i) {
return LoadTrustedByteArrayValues_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=64&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTrustedByteArrayValues(TNode<TrustedByteArray> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreTrustedByteArrayValues_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=71&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadArrayListCapacity(TNode<ArrayList> p_o) {
return LoadArrayListCapacity_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=72&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadArrayListLength(TNode<ArrayList> p_o) {
return LoadArrayListLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=72&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreArrayListLength(TNode<ArrayList> p_o, TNode<Smi> p_v) {
return StoreArrayListLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=73&c=3
TorqueStructSlice_Object_MutableReference_Object_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceArrayListObjects(TNode<ArrayList> p_o) {
return FieldSliceArrayListObjects_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=73&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadArrayListObjects(TNode<ArrayList> p_o, TNode<IntPtrT> p_i) {
return LoadArrayListObjects_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=73&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreArrayListObjects(TNode<ArrayList> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreArrayListObjects_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=11&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadTrustedForeignForeignAddress(TNode<TrustedForeign> p_o) {
return LoadTrustedForeignForeignAddress_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTrustedForeignForeignAddress(TNode<TrustedForeign> p_o, TNode<RawPtrT> p_v) {
return StoreTrustedForeignForeignAddress_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferDetachKey(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferDetachKey_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferDetachKey(TNode<JSArrayBuffer> p_o, TNode<Object> p_v) {
return StoreJSArrayBufferDetachKey_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=17&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferRawByteLength(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferRawByteLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferRawByteLength(TNode<JSArrayBuffer> p_o, TNode<UintPtrT> p_v) {
return StoreJSArrayBufferRawByteLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferRawMaxByteLength(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferRawMaxByteLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferRawMaxByteLength(TNode<JSArrayBuffer> p_o, TNode<UintPtrT> p_v) {
return StoreJSArrayBufferRawMaxByteLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=21&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferBackingStore_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferBackingStore(TNode<JSArrayBuffer> p_o, TNode<RawPtrT> p_v) {
return StoreJSArrayBufferBackingStore_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=22&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferExtension(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferExtension_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferExtension(TNode<JSArrayBuffer> p_o, TNode<ExternalPointerT> p_v) {
return StoreJSArrayBufferExtension_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=23&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferBitField(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferBitField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferBitField(TNode<JSArrayBuffer> p_o, TNode<Uint32T> p_v) {
return StoreJSArrayBufferBitField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=25&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferOptionalPadding(TNode<JSArrayBuffer> p_o) {
return LoadJSArrayBufferOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=25&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferOptionalPadding(TNode<JSArrayBuffer> p_o, TNode<Uint32T> p_v) {
return StoreJSArrayBufferOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSDataViewOrRabGsabDataViewDataPointer(TNode<JSDataViewOrRabGsabDataView> p_o) {
return LoadJSDataViewOrRabGsabDataViewDataPointer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDataViewOrRabGsabDataViewDataPointer(TNode<JSDataViewOrRabGsabDataView> p_o, TNode<RawPtrT> p_v) {
return StoreJSDataViewOrRabGsabDataViewDataPointer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorIteratedObject(TNode<JSArrayIterator> p_o) {
return LoadJSArrayIteratorIteratedObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorIteratedObject(TNode<JSArrayIterator> p_o, TNode<JSReceiver> p_v) {
return StoreJSArrayIteratorIteratedObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorNextIndex(TNode<JSArrayIterator> p_o) {
return LoadJSArrayIteratorNextIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorNextIndex(TNode<JSArrayIterator> p_o, TNode<Number> p_v) {
return StoreJSArrayIteratorNextIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorKind(TNode<JSArrayIterator> p_o) {
return LoadJSArrayIteratorKind_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorKind(TNode<JSArrayIterator> p_o, TNode<Smi> p_v) {
return StoreJSArrayIteratorKind_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=65&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayLength(TNode<JSArray> p_o) {
return LoadJSArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayLength(TNode<JSArray> p_o, TNode<Number> p_v) {
return StoreJSArrayLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=71&c=3
TNode<JSArray> TorqueGeneratedExportedMacrosAssembler::LoadTemplateLiteralObjectRaw(TNode<TemplateLiteralObject> p_o) {
return LoadTemplateLiteralObjectRaw_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=71&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateLiteralObjectRaw(TNode<TemplateLiteralObject> p_o, TNode<JSArray> p_v) {
return StoreTemplateLiteralObjectRaw_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=72&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTemplateLiteralObjectFunctionLiteralId(TNode<TemplateLiteralObject> p_o) {
return LoadTemplateLiteralObjectFunctionLiteralId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=72&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateLiteralObjectFunctionLiteralId(TNode<TemplateLiteralObject> p_o, TNode<Smi> p_v) {
return StoreTemplateLiteralObjectFunctionLiteralId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=73&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTemplateLiteralObjectSlotId(TNode<TemplateLiteralObject> p_o) {
return LoadTemplateLiteralObjectSlotId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=73&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateLiteralObjectSlotId(TNode<TemplateLiteralObject> p_o, TNode<Smi> p_v) {
return StoreTemplateLiteralObjectSlotId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=7&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadJSSynchronizationPrimitiveWaiterQueueHead(TNode<JSSynchronizationPrimitive> p_o) {
return LoadJSSynchronizationPrimitiveWaiterQueueHead_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSynchronizationPrimitiveWaiterQueueHead(TNode<JSSynchronizationPrimitive> p_o, TNode<ExternalPointerT> p_v) {
return StoreJSSynchronizationPrimitiveWaiterQueueHead_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=8&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadJSSynchronizationPrimitiveState(TNode<JSSynchronizationPrimitive> p_o) {
return LoadJSSynchronizationPrimitiveState_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSynchronizationPrimitiveState(TNode<JSSynchronizationPrimitive> p_o, TNode<Uint32T> p_v) {
return StoreJSSynchronizationPrimitiveState_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=12&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadJSAtomicsMutexOwnerThreadId(TNode<JSAtomicsMutex> p_o) {
return LoadJSAtomicsMutexOwnerThreadId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAtomicsMutexOwnerThreadId(TNode<JSAtomicsMutex> p_o, TNode<Int32T> p_v) {
return StoreJSAtomicsMutexOwnerThreadId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=16&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadJSAtomicsConditionOptionalPadding(TNode<JSAtomicsCondition> p_o) {
return LoadJSAtomicsConditionOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=16&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreJSAtomicsConditionOptionalPadding(TNode<JSAtomicsCondition> p_o, TNode<Uint32T> p_v) {
return StoreJSAtomicsConditionOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionIteratorTable(TNode<JSCollectionIterator> p_o) {
return LoadJSCollectionIteratorTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionIteratorTable(TNode<JSCollectionIterator> p_o, TNode<Object> p_v) {
return StoreJSCollectionIteratorTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionIteratorIndex(TNode<JSCollectionIterator> p_o) {
return LoadJSCollectionIteratorIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionIteratorIndex(TNode<JSCollectionIterator> p_o, TNode<Object> p_v) {
return StoreJSCollectionIteratorIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSWeakCollectionTable(TNode<JSWeakCollection> p_o) {
return LoadJSWeakCollectionTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSWeakCollectionTable(TNode<JSWeakCollection> p_o, TNode<Object> p_v) {
return StoreJSWeakCollectionTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=30&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadJSDisposableStackBaseStack(TNode<JSDisposableStackBase> p_o) {
return LoadJSDisposableStackBaseStack_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDisposableStackBaseStack(TNode<JSDisposableStackBase> p_o, TNode<FixedArray> p_v) {
return StoreJSDisposableStackBaseStack_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=31&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSDisposableStackBaseStatus(TNode<JSDisposableStackBase> p_o) {
return LoadJSDisposableStackBaseStatus_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=31&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDisposableStackBaseStatus(TNode<JSDisposableStackBase> p_o, TNode<Smi> p_v) {
return StoreJSDisposableStackBaseStatus_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=32&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDisposableStackBaseError(TNode<JSDisposableStackBase> p_o) {
return LoadJSDisposableStackBaseError_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDisposableStackBaseError(TNode<JSDisposableStackBase> p_o, TNode<Object> p_v) {
return StoreJSDisposableStackBaseError_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=33&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDisposableStackBaseErrorMessage(TNode<JSDisposableStackBase> p_o) {
return LoadJSDisposableStackBaseErrorMessage_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDisposableStackBaseErrorMessage(TNode<JSDisposableStackBase> p_o, TNode<Object> p_v) {
return StoreJSDisposableStackBaseErrorMessage_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
TNode<JSFunction> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectFunction(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectFunction_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectFunction(TNode<JSGeneratorObject> p_o, TNode<JSFunction> p_v) {
return StoreJSGeneratorObjectFunction_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectContext(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectContext(TNode<JSGeneratorObject> p_o, TNode<Context> p_v) {
return StoreJSGeneratorObjectContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectReceiver(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectReceiver_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectReceiver(TNode<JSGeneratorObject> p_o, TNode<JSAny> p_v) {
return StoreJSGeneratorObjectReceiver_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectInputOrDebugPos(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectInputOrDebugPos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectInputOrDebugPos(TNode<JSGeneratorObject> p_o, TNode<Object> p_v) {
return StoreJSGeneratorObjectInputOrDebugPos_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectResumeMode(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectResumeMode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectResumeMode(TNode<JSGeneratorObject> p_o, TNode<Smi> p_v) {
return StoreJSGeneratorObjectResumeMode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectContinuation(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectContinuation_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectContinuation(TNode<JSGeneratorObject> p_o, TNode<Smi> p_v) {
return StoreJSGeneratorObjectContinuation_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectParametersAndRegisters(TNode<JSGeneratorObject> p_o) {
return LoadJSGeneratorObjectParametersAndRegisters_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectParametersAndRegisters(TNode<JSGeneratorObject> p_o, TNode<FixedArray> p_v) {
return StoreJSGeneratorObjectParametersAndRegisters_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFunctionObjectPromise(TNode<JSAsyncFunctionObject> p_o) {
return LoadJSAsyncFunctionObjectPromise_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFunctionObjectPromise(TNode<JSAsyncFunctionObject> p_o, TNode<JSPromise> p_v) {
return StoreJSAsyncFunctionObjectPromise_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncGeneratorObjectQueue(TNode<JSAsyncGeneratorObject> p_o) {
return LoadJSAsyncGeneratorObjectQueue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncGeneratorObjectQueue(TNode<JSAsyncGeneratorObject> p_o, TNode<HeapObject> p_v) {
return StoreJSAsyncGeneratorObjectQueue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncGeneratorObjectIsAwaiting(TNode<JSAsyncGeneratorObject> p_o) {
return LoadJSAsyncGeneratorObjectIsAwaiting_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncGeneratorObjectIsAwaiting(TNode<JSAsyncGeneratorObject> p_o, TNode<Smi> p_v) {
return StoreJSAsyncGeneratorObjectIsAwaiting_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
TNode<Union<AsyncGeneratorRequest, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestNext(TNode<AsyncGeneratorRequest> p_o) {
return LoadAsyncGeneratorRequestNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestNext(TNode<AsyncGeneratorRequest> p_o, TNode<Union<AsyncGeneratorRequest, Undefined>> p_v) {
return StoreAsyncGeneratorRequestNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestResumeMode(TNode<AsyncGeneratorRequest> p_o) {
return LoadAsyncGeneratorRequestResumeMode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestResumeMode(TNode<AsyncGeneratorRequest> p_o, TNode<Smi> p_v) {
return StoreAsyncGeneratorRequestResumeMode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestValue(TNode<AsyncGeneratorRequest> p_o) {
return LoadAsyncGeneratorRequestValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestValue(TNode<AsyncGeneratorRequest> p_o, TNode<Object> p_v) {
return StoreAsyncGeneratorRequestValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestPromise(TNode<AsyncGeneratorRequest> p_o) {
return LoadAsyncGeneratorRequestPromise_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestPromise(TNode<AsyncGeneratorRequest> p_o, TNode<JSPromise> p_v) {
return StoreAsyncGeneratorRequestPromise_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=9&c=3
TNode<Union<JSReceiver, Null, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorHelperUnderlyingObject(TNode<JSIteratorHelper> p_o) {
return LoadJSIteratorHelperUnderlyingObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorHelperUnderlyingObject(TNode<JSIteratorHelper> p_o, TNode<Union<JSReceiver, Null, Undefined>> p_v) {
return StoreJSIteratorHelperUnderlyingObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorHelperUnderlyingNext(TNode<JSIteratorHelper> p_o) {
return LoadJSIteratorHelperUnderlyingNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorHelperUnderlyingNext(TNode<JSIteratorHelper> p_o, TNode<JSAny> p_v) {
return StoreJSIteratorHelperUnderlyingNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=14&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorMapHelperMapper(TNode<JSIteratorMapHelper> p_o) {
return LoadJSIteratorMapHelperMapper_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorMapHelperMapper(TNode<JSIteratorMapHelper> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> p_v) {
return StoreJSIteratorMapHelperMapper_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorMapHelperCounter(TNode<JSIteratorMapHelper> p_o) {
return LoadJSIteratorMapHelperCounter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorMapHelperCounter(TNode<JSIteratorMapHelper> p_o, TNode<Number> p_v) {
return StoreJSIteratorMapHelperCounter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=19&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorFilterHelperPredicate(TNode<JSIteratorFilterHelper> p_o) {
return LoadJSIteratorFilterHelperPredicate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorFilterHelperPredicate(TNode<JSIteratorFilterHelper> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> p_v) {
return StoreJSIteratorFilterHelperPredicate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorFilterHelperCounter(TNode<JSIteratorFilterHelper> p_o) {
return LoadJSIteratorFilterHelperCounter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorFilterHelperCounter(TNode<JSIteratorFilterHelper> p_o, TNode<Number> p_v) {
return StoreJSIteratorFilterHelperCounter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorTakeHelperRemaining(TNode<JSIteratorTakeHelper> p_o) {
return LoadJSIteratorTakeHelperRemaining_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorTakeHelperRemaining(TNode<JSIteratorTakeHelper> p_o, TNode<Number> p_v) {
return StoreJSIteratorTakeHelperRemaining_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorDropHelperRemaining(TNode<JSIteratorDropHelper> p_o) {
return LoadJSIteratorDropHelperRemaining_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorDropHelperRemaining(TNode<JSIteratorDropHelper> p_o, TNode<Number> p_v) {
return StoreJSIteratorDropHelperRemaining_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorFlatMapHelperMapper(TNode<JSIteratorFlatMapHelper> p_o) {
return LoadJSIteratorFlatMapHelperMapper_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorFlatMapHelperMapper(TNode<JSIteratorFlatMapHelper> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> p_v) {
return StoreJSIteratorFlatMapHelperMapper_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=33&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorFlatMapHelperCounter(TNode<JSIteratorFlatMapHelper> p_o) {
return LoadJSIteratorFlatMapHelperCounter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorFlatMapHelperCounter(TNode<JSIteratorFlatMapHelper> p_o, TNode<Number> p_v) {
return StoreJSIteratorFlatMapHelperCounter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=34&c=3
TorqueStructIteratorRecord TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorFlatMapHelperInnerIterator(TNode<JSIteratorFlatMapHelper> p_o) {
return LoadJSIteratorFlatMapHelperInnerIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorFlatMapHelperInnerIterator(TNode<JSIteratorFlatMapHelper> p_o, TorqueStructIteratorRecord p_v) {
return StoreJSIteratorFlatMapHelperInnerIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=35&c=3
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorFlatMapHelperInnerAlive(TNode<JSIteratorFlatMapHelper> p_o) {
return LoadJSIteratorFlatMapHelperInnerAlive_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorFlatMapHelperInnerAlive(TNode<JSIteratorFlatMapHelper> p_o, TNode<Boolean> p_v) {
return StoreJSIteratorFlatMapHelperInnerAlive_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=44&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadJSExternalObjectValue(TNode<JSExternalObject> p_o) {
return LoadJSExternalObjectValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=44&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSExternalObjectValue(TNode<JSExternalObject> p_o, TNode<ExternalPointerT> p_v) {
return StoreJSExternalObjectValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=120&c=3
TNode<JSGlobalProxy> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalObjectGlobalProxy(TNode<JSGlobalObject> p_o) {
return LoadJSGlobalObjectGlobalProxy_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=120&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalObjectGlobalProxy(TNode<JSGlobalObject> p_o, TNode<JSGlobalProxy> p_v) {
return StoreJSGlobalObjectGlobalProxy_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=124&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSPrimitiveWrapperValue(TNode<JSPrimitiveWrapper> p_o) {
return LoadJSPrimitiveWrapperValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=124&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPrimitiveWrapperValue(TNode<JSPrimitiveWrapper> p_o, TNode<JSAny> p_v) {
return StoreJSPrimitiveWrapperValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=129&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectMessageType(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectMessageType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=129&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectMessageType(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectMessageType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=131&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectArgument(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectArgument_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=131&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectArgument(TNode<JSMessageObject> p_o, TNode<Object> p_v) {
return StoreJSMessageObjectArgument_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
TNode<Script> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectScript(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectScript_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectScript(TNode<JSMessageObject> p_o, TNode<Script> p_v) {
return StoreJSMessageObjectScript_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
TNode<Union<Hole, StackTraceInfo>> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectStackTrace(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectStackTrace_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectStackTrace(TNode<JSMessageObject> p_o, TNode<Union<Hole, StackTraceInfo>> p_v) {
return StoreJSMessageObjectStackTrace_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=136&c=3
TNode<Union<SharedFunctionInfo, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectSharedInfo(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectSharedInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=136&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectSharedInfo(TNode<JSMessageObject> p_o, TNode<Union<SharedFunctionInfo, Smi>> p_v) {
return StoreJSMessageObjectSharedInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=140&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectBytecodeOffset(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectBytecodeOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=140&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectBytecodeOffset(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectBytecodeOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=141&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectStartPosition(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectStartPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=141&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectStartPosition(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectStartPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectEndPosition(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectEndPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectEndPosition(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectEndPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=143&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectErrorLevel(TNode<JSMessageObject> p_o) {
return LoadJSMessageObjectErrorLevel_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=143&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectErrorLevel(TNode<JSMessageObject> p_o, TNode<Smi> p_v) {
return StoreJSMessageObjectErrorLevel_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadJSDateValue(TNode<JSDate> p_o) {
return LoadJSDateValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateValue(TNode<JSDate> p_o, TNode<Float64T> p_v) {
return StoreJSDateValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=153&c=3
TNode<Union<HeapNumber, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSDateYear(TNode<JSDate> p_o) {
return LoadJSDateYear_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=153&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateYear(TNode<JSDate> p_o, TNode<Union<HeapNumber, Smi>> p_v) {
return StoreJSDateYear_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=154&c=3
TNode<Union<HeapNumber, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSDateMonth(TNode<JSDate> p_o) {
return LoadJSDateMonth_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=154&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateMonth(TNode<JSDate> p_o, TNode<Union<HeapNumber, Smi>> p_v) {
return StoreJSDateMonth_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
TNode<Union<HeapNumber, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSDateDay(TNode<JSDate> p_o) {
return LoadJSDateDay_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateDay(TNode<JSDate> p_o, TNode<Union<HeapNumber, Smi>> p_v) {
return StoreJSDateDay_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=156&c=3
TNode<Union<HeapNumber, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSDateWeekday(TNode<JSDate> p_o) {
return LoadJSDateWeekday_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=156&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateWeekday(TNode<JSDate> p_o, TNode<Union<HeapNumber, Smi>> p_v) {
return StoreJSDateWeekday_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=157&c=3
TNode<Union<HeapNumber, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSDateHour(TNode<JSDate> p_o) {
return LoadJSDateHour_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=157&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateHour(TNode<JSDate> p_o, TNode<Union<HeapNumber, Smi>> p_v) {
return StoreJSDateHour_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=3
TNode<Union<HeapNumber, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSDateMin(TNode<JSDate> p_o) {
return LoadJSDateMin_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateMin(TNode<JSDate> p_o, TNode<Union<HeapNumber, Smi>> p_v) {
return StoreJSDateMin_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
TNode<Union<HeapNumber, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSDateSec(TNode<JSDate> p_o) {
return LoadJSDateSec_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateSec(TNode<JSDate> p_o, TNode<Union<HeapNumber, Smi>> p_v) {
return StoreJSDateSec_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=163&c=3
TNode<Union<HeapNumber, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadJSDateCacheStamp(TNode<JSDate> p_o) {
return LoadJSDateCacheStamp_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=163&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateCacheStamp(TNode<JSDate> p_o, TNode<Union<HeapNumber, Smi>> p_v) {
return StoreJSDateCacheStamp_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFromSyncIteratorSyncIterator(TNode<JSAsyncFromSyncIterator> p_o) {
return LoadJSAsyncFromSyncIteratorSyncIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFromSyncIteratorSyncIterator(TNode<JSAsyncFromSyncIterator> p_o, TNode<JSReceiver> p_v) {
return StoreJSAsyncFromSyncIteratorSyncIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=170&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFromSyncIteratorNext(TNode<JSAsyncFromSyncIterator> p_o) {
return LoadJSAsyncFromSyncIteratorNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=170&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFromSyncIteratorNext(TNode<JSAsyncFromSyncIterator> p_o, TNode<Object> p_v) {
return StoreJSAsyncFromSyncIteratorNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=175&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSStringIteratorString(TNode<JSStringIterator> p_o) {
return LoadJSStringIteratorString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=175&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSStringIteratorString(TNode<JSStringIterator> p_o, TNode<String> p_v) {
return StoreJSStringIteratorString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=177&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSStringIteratorIndex(TNode<JSStringIterator> p_o) {
return LoadJSStringIteratorIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=177&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSStringIteratorIndex(TNode<JSStringIterator> p_o, TNode<Smi> p_v) {
return StoreJSStringIteratorIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=184&c=3
TorqueStructIteratorRecord TorqueGeneratedExportedMacrosAssembler::LoadJSValidIteratorWrapperUnderlying(TNode<JSValidIteratorWrapper> p_o) {
return LoadJSValidIteratorWrapperUnderlying_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=184&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSValidIteratorWrapperUnderlying(TNode<JSValidIteratorWrapper> p_o, TorqueStructIteratorRecord p_v) {
return StoreJSValidIteratorWrapperUnderlying_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=14&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyRevocableResultProxy(TNode<JSObject> p_o) {
return LoadJSProxyRevocableResultProxy_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyRevocableResultProxy(TNode<JSObject> p_o, TNode<JSAny> p_v) {
return StoreJSProxyRevocableResultProxy_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=15&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyRevocableResultRevoke(TNode<JSObject> p_o) {
return LoadJSProxyRevocableResultRevoke_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyRevocableResultRevoke(TNode<JSObject> p_o, TNode<JSAny> p_v) {
return StoreJSProxyRevocableResultRevoke_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=13&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorIteratingRegExp(TNode<JSRegExpStringIterator> p_o) {
return LoadJSRegExpStringIteratorIteratingRegExp_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorIteratingRegExp(TNode<JSRegExpStringIterator> p_o, TNode<JSReceiver> p_v) {
return StoreJSRegExpStringIteratorIteratingRegExp_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=15&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorIteratedString(TNode<JSRegExpStringIterator> p_o) {
return LoadJSRegExpStringIteratorIteratedString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorIteratedString(TNode<JSRegExpStringIterator> p_o, TNode<String> p_v) {
return StoreJSRegExpStringIteratorIteratedString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=16&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorFlags(TNode<JSRegExpStringIterator> p_o) {
return LoadJSRegExpStringIteratorFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorFlags(TNode<JSRegExpStringIterator> p_o, TNode<Smi> p_v) {
return StoreJSRegExpStringIteratorFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadRegExpDataTypeTag(TNode<RegExpData> p_o) {
return LoadRegExpDataTypeTag_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpDataTypeTag(TNode<RegExpData> p_o, TNode<Smi> p_v) {
return StoreRegExpDataTypeTag_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=20&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadRegExpDataSource(TNode<RegExpData> p_o) {
return LoadRegExpDataSource_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpDataSource(TNode<RegExpData> p_o, TNode<String> p_v) {
return StoreRegExpDataSource_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=21&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadRegExpDataFlags(TNode<RegExpData> p_o) {
return LoadRegExpDataFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpDataFlags(TNode<RegExpData> p_o, TNode<Smi> p_v) {
return StoreRegExpDataFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=22&c=3
TNode<RegExpDataWrapper> TorqueGeneratedExportedMacrosAssembler::LoadRegExpDataWrapper(TNode<RegExpData> p_o) {
return LoadRegExpDataWrapper_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpDataWrapper(TNode<RegExpData> p_o, TNode<RegExpDataWrapper> p_v) {
return StoreRegExpDataWrapper_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=27&c=9
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadAtomRegExpDataPattern(TNode<AtomRegExpData> p_o) {
return LoadAtomRegExpDataPattern_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=34&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadIrRegExpDataLatin1Bytecode(TNode<IrRegExpData> p_o) {
return LoadIrRegExpDataLatin1Bytecode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreIrRegExpDataLatin1Bytecode(TNode<IrRegExpData> p_o, TNode<MaybeObject> p_v) {
return StoreIrRegExpDataLatin1Bytecode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=35&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadIrRegExpDataUc16Bytecode(TNode<IrRegExpData> p_o) {
return LoadIrRegExpDataUc16Bytecode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreIrRegExpDataUc16Bytecode(TNode<IrRegExpData> p_o, TNode<MaybeObject> p_v) {
return StoreIrRegExpDataUc16Bytecode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=36&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadIrRegExpDataLatin1Code(TNode<IrRegExpData> p_o) {
return LoadIrRegExpDataLatin1Code_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreIrRegExpDataLatin1Code(TNode<IrRegExpData> p_o, TNode<TrustedPointerT> p_v) {
return StoreIrRegExpDataLatin1Code_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=37&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadIrRegExpDataUc16Code(TNode<IrRegExpData> p_o) {
return LoadIrRegExpDataUc16Code_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=37&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreIrRegExpDataUc16Code(TNode<IrRegExpData> p_o, TNode<TrustedPointerT> p_v) {
return StoreIrRegExpDataUc16Code_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=38&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadIrRegExpDataCaptureNameMap(TNode<IrRegExpData> p_o) {
return LoadIrRegExpDataCaptureNameMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreIrRegExpDataCaptureNameMap(TNode<IrRegExpData> p_o, TNode<FixedArray> p_v) {
return StoreIrRegExpDataCaptureNameMap_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=39&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadIrRegExpDataMaxRegisterCount(TNode<IrRegExpData> p_o) {
return LoadIrRegExpDataMaxRegisterCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=39&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreIrRegExpDataMaxRegisterCount(TNode<IrRegExpData> p_o, TNode<Smi> p_v) {
return StoreIrRegExpDataMaxRegisterCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=40&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadIrRegExpDataCaptureCount(TNode<IrRegExpData> p_o) {
return LoadIrRegExpDataCaptureCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=40&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreIrRegExpDataCaptureCount(TNode<IrRegExpData> p_o, TNode<Smi> p_v) {
return StoreIrRegExpDataCaptureCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=41&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadIrRegExpDataTicksUntilTierUp(TNode<IrRegExpData> p_o) {
return LoadIrRegExpDataTicksUntilTierUp_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=41&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreIrRegExpDataTicksUntilTierUp(TNode<IrRegExpData> p_o, TNode<Smi> p_v) {
return StoreIrRegExpDataTicksUntilTierUp_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=42&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadIrRegExpDataBacktrackLimit(TNode<IrRegExpData> p_o) {
return LoadIrRegExpDataBacktrackLimit_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=42&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreIrRegExpDataBacktrackLimit(TNode<IrRegExpData> p_o, TNode<Smi> p_v) {
return StoreIrRegExpDataBacktrackLimit_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=47&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadRegExpDataWrapperData(TNode<RegExpDataWrapper> p_o) {
return LoadRegExpDataWrapperData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=47&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpDataWrapperData(TNode<RegExpDataWrapper> p_o, TNode<TrustedPointerT> p_v) {
return StoreRegExpDataWrapperData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpData(TNode<JSRegExp> p_o) {
return LoadJSRegExpData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpData(TNode<JSRegExp> p_o, TNode<TrustedPointerT> p_v) {
return StoreJSRegExpData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=52&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpSource(TNode<JSRegExp> p_o) {
return LoadJSRegExpSource_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=52&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpSource(TNode<JSRegExp> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreJSRegExpSource_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=53&c=3
TNode<Union<Smi, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpFlags(TNode<JSRegExp> p_o) {
return LoadJSRegExpFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=53&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpFlags(TNode<JSRegExp> p_o, TNode<Union<Smi, Undefined>> p_v) {
return StoreJSRegExpFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=80&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultIndex(TNode<JSArray> p_o) {
return LoadJSRegExpResultIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=80&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultIndex(TNode<JSArray> p_o, TNode<JSAny> p_v) {
return StoreJSRegExpResultIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=81&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultInput(TNode<JSArray> p_o) {
return LoadJSRegExpResultInput_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=81&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultInput(TNode<JSArray> p_o, TNode<JSAny> p_v) {
return StoreJSRegExpResultInput_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=82&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultGroups(TNode<JSArray> p_o) {
return LoadJSRegExpResultGroups_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=82&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultGroups(TNode<JSArray> p_o, TNode<JSAny> p_v) {
return StoreJSRegExpResultGroups_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=85&c=3
TNode<Union<FixedArray, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultNames(TNode<JSArray> p_o) {
return LoadJSRegExpResultNames_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=85&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultNames(TNode<JSArray> p_o, TNode<Union<FixedArray, Undefined>> p_v) {
return StoreJSRegExpResultNames_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=86&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultRegexpInput(TNode<JSArray> p_o) {
return LoadJSRegExpResultRegexpInput_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=86&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultRegexpInput(TNode<JSArray> p_o, TNode<String> p_v) {
return StoreJSRegExpResultRegexpInput_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=87&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultRegexpLastIndex(TNode<JSArray> p_o) {
return LoadJSRegExpResultRegexpLastIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=87&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultRegexpLastIndex(TNode<JSArray> p_o, TNode<Smi> p_v) {
return StoreJSRegExpResultRegexpLastIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=91&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultWithIndicesIndices(TNode<JSRegExpResult> p_o) {
return LoadJSRegExpResultWithIndicesIndices_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=91&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultWithIndicesIndices(TNode<JSRegExpResult> p_o, TNode<JSAny> p_v) {
return StoreJSRegExpResultWithIndicesIndices_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=97&c=3
TNode<JSAny> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultIndicesGroups(TNode<JSArray> p_o) {
return LoadJSRegExpResultIndicesGroups_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=97&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultIndicesGroups(TNode<JSArray> p_o, TNode<JSAny> p_v) {
return StoreJSRegExpResultIndicesGroups_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadJSShadowRealmNativeContext(TNode<JSShadowRealm> p_o) {
return LoadJSShadowRealmNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSShadowRealmNativeContext(TNode<JSShadowRealm> p_o, TNode<NativeContext> p_v) {
return StoreJSShadowRealmNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryNativeContext(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryNativeContext(TNode<JSFinalizationRegistry> p_o, TNode<NativeContext> p_v) {
return StoreJSFinalizationRegistryNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryCleanup(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryCleanup_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryCleanup(TNode<JSFinalizationRegistry> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> p_v) {
return StoreJSFinalizationRegistryCleanup_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
TNode<Union<Undefined, WeakCell>> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryActiveCells(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryActiveCells_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryActiveCells(TNode<JSFinalizationRegistry> p_o, TNode<Union<Undefined, WeakCell>> p_v) {
return StoreJSFinalizationRegistryActiveCells_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
TNode<Union<Undefined, WeakCell>> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryClearedCells(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryClearedCells_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryClearedCells(TNode<JSFinalizationRegistry> p_o, TNode<Union<Undefined, WeakCell>> p_v) {
return StoreJSFinalizationRegistryClearedCells_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryKeyMap(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryKeyMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryKeyMap(TNode<JSFinalizationRegistry> p_o, TNode<Object> p_v) {
return StoreJSFinalizationRegistryKeyMap_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
TNode<Union<JSFinalizationRegistry, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryNextDirty(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryNextDirty_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryNextDirty(TNode<JSFinalizationRegistry> p_o, TNode<Union<JSFinalizationRegistry, Undefined>> p_v) {
return StoreJSFinalizationRegistryNextDirty_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationRegistryFlags(TNode<JSFinalizationRegistry> p_o) {
return LoadJSFinalizationRegistryFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationRegistryFlags(TNode<JSFinalizationRegistry> p_o, TNode<Smi> p_v) {
return StoreJSFinalizationRegistryFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=43&c=3
TNode<Union<JSReceiver, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSWeakRefTarget(TNode<JSWeakRef> p_o) {
return LoadJSWeakRefTarget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=43&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSWeakRefTarget(TNode<JSWeakRef> p_o, TNode<Union<JSReceiver, Symbol, Undefined>> p_v) {
return StoreJSWeakRefTarget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadObjectBoilerplateDescriptionLength(TNode<ObjectBoilerplateDescription> p_o) {
return LoadObjectBoilerplateDescriptionLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=8&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadObjectBoilerplateDescriptionBackingStoreSize(TNode<ObjectBoilerplateDescription> p_o) {
return LoadObjectBoilerplateDescriptionBackingStoreSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreObjectBoilerplateDescriptionBackingStoreSize(TNode<ObjectBoilerplateDescription> p_o, TNode<Smi> p_v) {
return StoreObjectBoilerplateDescriptionBackingStoreSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=9&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadObjectBoilerplateDescriptionFlags(TNode<ObjectBoilerplateDescription> p_o) {
return LoadObjectBoilerplateDescriptionFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreObjectBoilerplateDescriptionFlags(TNode<ObjectBoilerplateDescription> p_o, TNode<Smi> p_v) {
return StoreObjectBoilerplateDescriptionFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=3
TorqueStructSlice_Object_MutableReference_Object_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceObjectBoilerplateDescriptionRawEntries(TNode<ObjectBoilerplateDescription> p_o) {
return FieldSliceObjectBoilerplateDescriptionRawEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadObjectBoilerplateDescriptionRawEntries(TNode<ObjectBoilerplateDescription> p_o, TNode<IntPtrT> p_i) {
return LoadObjectBoilerplateDescriptionRawEntries_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreObjectBoilerplateDescriptionRawEntries(TNode<ObjectBoilerplateDescription> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreObjectBoilerplateDescriptionRawEntries_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=14&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadArrayBoilerplateDescriptionFlags(TNode<ArrayBoilerplateDescription> p_o) {
return LoadArrayBoilerplateDescriptionFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreArrayBoilerplateDescriptionFlags(TNode<ArrayBoilerplateDescription> p_o, TNode<Smi> p_v) {
return StoreArrayBoilerplateDescriptionFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=15&c=3
TNode<FixedArrayBase> TorqueGeneratedExportedMacrosAssembler::LoadArrayBoilerplateDescriptionConstantElements(TNode<ArrayBoilerplateDescription> p_o) {
return LoadArrayBoilerplateDescriptionConstantElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreArrayBoilerplateDescriptionConstantElements(TNode<ArrayBoilerplateDescription> p_o, TNode<FixedArrayBase> p_v) {
return StoreArrayBoilerplateDescriptionConstantElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=20&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadRegExpBoilerplateDescriptionData(TNode<RegExpBoilerplateDescription> p_o) {
return LoadRegExpBoilerplateDescriptionData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpBoilerplateDescriptionData(TNode<RegExpBoilerplateDescription> p_o, TNode<TrustedPointerT> p_v) {
return StoreRegExpBoilerplateDescriptionData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=21&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadRegExpBoilerplateDescriptionSource(TNode<RegExpBoilerplateDescription> p_o) {
return LoadRegExpBoilerplateDescriptionSource_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpBoilerplateDescriptionSource(TNode<RegExpBoilerplateDescription> p_o, TNode<String> p_v) {
return StoreRegExpBoilerplateDescriptionSource_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=22&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadRegExpBoilerplateDescriptionFlags(TNode<RegExpBoilerplateDescription> p_o) {
return LoadRegExpBoilerplateDescriptionFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreRegExpBoilerplateDescriptionFlags(TNode<RegExpBoilerplateDescription> p_o, TNode<Smi> p_v) {
return StoreRegExpBoilerplateDescriptionFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=27&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadClassBoilerplateArgumentsCount(TNode<ClassBoilerplate> p_o) {
return LoadClassBoilerplateArgumentsCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=27&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClassBoilerplateArgumentsCount(TNode<ClassBoilerplate> p_o, TNode<Smi> p_v) {
return StoreClassBoilerplateArgumentsCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=28&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadClassBoilerplateStaticPropertiesTemplate(TNode<ClassBoilerplate> p_o) {
return LoadClassBoilerplateStaticPropertiesTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClassBoilerplateStaticPropertiesTemplate(TNode<ClassBoilerplate> p_o, TNode<Object> p_v) {
return StoreClassBoilerplateStaticPropertiesTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=29&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadClassBoilerplateStaticElementsTemplate(TNode<ClassBoilerplate> p_o) {
return LoadClassBoilerplateStaticElementsTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClassBoilerplateStaticElementsTemplate(TNode<ClassBoilerplate> p_o, TNode<Object> p_v) {
return StoreClassBoilerplateStaticElementsTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=30&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadClassBoilerplateStaticComputedProperties(TNode<ClassBoilerplate> p_o) {
return LoadClassBoilerplateStaticComputedProperties_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClassBoilerplateStaticComputedProperties(TNode<ClassBoilerplate> p_o, TNode<FixedArray> p_v) {
return StoreClassBoilerplateStaticComputedProperties_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=31&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadClassBoilerplateInstancePropertiesTemplate(TNode<ClassBoilerplate> p_o) {
return LoadClassBoilerplateInstancePropertiesTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=31&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClassBoilerplateInstancePropertiesTemplate(TNode<ClassBoilerplate> p_o, TNode<Object> p_v) {
return StoreClassBoilerplateInstancePropertiesTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=32&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadClassBoilerplateInstanceElementsTemplate(TNode<ClassBoilerplate> p_o) {
return LoadClassBoilerplateInstanceElementsTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClassBoilerplateInstanceElementsTemplate(TNode<ClassBoilerplate> p_o, TNode<Object> p_v) {
return StoreClassBoilerplateInstanceElementsTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=33&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadClassBoilerplateInstanceComputedProperties(TNode<ClassBoilerplate> p_o) {
return LoadClassBoilerplateInstanceComputedProperties_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreClassBoilerplateInstanceComputedProperties(TNode<ClassBoilerplate> p_o, TNode<FixedArray> p_v) {
return StoreClassBoilerplateInstanceComputedProperties_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadMegaDomHandlerAccessor(TNode<MegaDomHandler> p_o) {
return LoadMegaDomHandlerAccessor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMegaDomHandlerAccessor(TNode<MegaDomHandler> p_o, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> p_v) {
return StoreMegaDomHandlerAccessor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadMegaDomHandlerContext(TNode<MegaDomHandler> p_o) {
return LoadMegaDomHandlerContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMegaDomHandlerContext(TNode<MegaDomHandler> p_o, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> p_v) {
return StoreMegaDomHandlerContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=8&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMicrotaskContinuationPreservedEmbedderData(TNode<Microtask> p_o) {
return LoadMicrotaskContinuationPreservedEmbedderData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreMicrotaskContinuationPreservedEmbedderData(TNode<Microtask> p_o, TNode<Object> p_v) {
return StoreMicrotaskContinuationPreservedEmbedderData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=12&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadCallbackTaskCallback(TNode<CallbackTask> p_o) {
return LoadCallbackTaskCallback_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallbackTaskCallback(TNode<CallbackTask> p_o, TNode<Foreign> p_v) {
return StoreCallbackTaskCallback_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=13&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadCallbackTaskData(TNode<CallbackTask> p_o) {
return LoadCallbackTaskData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallbackTaskData(TNode<CallbackTask> p_o, TNode<Foreign> p_v) {
return StoreCallbackTaskData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=17&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadCallableTaskCallable(TNode<CallableTask> p_o) {
return LoadCallableTaskCallable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallableTaskCallable(TNode<CallableTask> p_o, TNode<JSReceiver> p_v) {
return StoreCallableTaskCallable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=18&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadCallableTaskContext(TNode<CallableTask> p_o) {
return LoadCallableTaskContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreCallableTaskContext(TNode<CallableTask> p_o, TNode<Context> p_v) {
return StoreCallableTaskContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
TNode<ObjectHashTable> TorqueGeneratedExportedMacrosAssembler::LoadModuleExports(TNode<Module> p_o) {
return LoadModuleExports_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleExports(TNode<Module> p_o, TNode<ObjectHashTable> p_v) {
return StoreModuleExports_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleHash(TNode<Module> p_o) {
return LoadModuleHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleHash(TNode<Module> p_o, TNode<Smi> p_v) {
return StoreModuleHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleStatus(TNode<Module> p_o) {
return LoadModuleStatus_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleStatus(TNode<Module> p_o, TNode<Smi> p_v) {
return StoreModuleStatus_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
TNode<Union<JSModuleNamespace, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadModuleModuleNamespace(TNode<Module> p_o) {
return LoadModuleModuleNamespace_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleModuleNamespace(TNode<Module> p_o, TNode<Union<JSModuleNamespace, Undefined>> p_v) {
return StoreModuleModuleNamespace_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadModuleException(TNode<Module> p_o) {
return LoadModuleException_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleException(TNode<Module> p_o, TNode<Object> p_v) {
return StoreModuleException_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
TNode<Union<JSPromise, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadModuleTopLevelCapability(TNode<Module> p_o) {
return LoadModuleTopLevelCapability_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleTopLevelCapability(TNode<Module> p_o, TNode<Union<JSPromise, Undefined>> p_v) {
return StoreModuleTopLevelCapability_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=21&c=3
TNode<Module> TorqueGeneratedExportedMacrosAssembler::LoadJSModuleNamespaceModule(TNode<JSModuleNamespace> p_o) {
return LoadJSModuleNamespaceModule_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSModuleNamespaceModule(TNode<JSModuleNamespace> p_o, TNode<Module> p_v) {
return StoreJSModuleNamespaceModule_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=25&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptOrModuleResourceName(TNode<ScriptOrModule> p_o) {
return LoadScriptOrModuleResourceName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptOrModuleResourceName(TNode<ScriptOrModule> p_o, TNode<Object> p_v) {
return StoreScriptOrModuleResourceName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=26&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadScriptOrModuleHostDefinedOptions(TNode<ScriptOrModule> p_o) {
return LoadScriptOrModuleHostDefinedOptions_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptOrModuleHostDefinedOptions(TNode<ScriptOrModule> p_o, TNode<FixedArray> p_v) {
return StoreScriptOrModuleHostDefinedOptions_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=27&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetNumberOfElements(TNode<SmallOrderedHashSet> p_o) {
return LoadSmallOrderedHashSetNumberOfElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=27&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetNumberOfElements(TNode<SmallOrderedHashSet> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetNumberOfElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=28&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetNumberOfDeletedElements(TNode<SmallOrderedHashSet> p_o) {
return LoadSmallOrderedHashSetNumberOfDeletedElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetNumberOfDeletedElements(TNode<SmallOrderedHashSet> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetNumberOfDeletedElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=29&c=9
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetNumberOfBuckets(TNode<SmallOrderedHashSet> p_o) {
return LoadSmallOrderedHashSetNumberOfBuckets_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=30&c=28
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashSetPadding(TNode<SmallOrderedHashSet> p_o) {
return FieldSliceSmallOrderedHashSetPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=30&c=28
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetPadding(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashSetPadding_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=30&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetPadding(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetPadding_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=3
TorqueStructSlice_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_Boolean_OR_Null_OR_Undefined_OR_JSReceiver_OR_TheHole_MutableReference_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_Boolean_OR_Null_OR_Undefined_OR_JSReceiver_OR_TheHole_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashSetDataTable(TNode<SmallOrderedHashSet> p_o) {
return FieldSliceSmallOrderedHashSetDataTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=3
TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetDataTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashSetDataTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetDataTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> p_v) {
return StoreSmallOrderedHashSetDataTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=34&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashSetHashTable(TNode<SmallOrderedHashSet> p_o) {
return FieldSliceSmallOrderedHashSetHashTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=34&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetHashTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashSetHashTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetHashTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetHashTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashSetChainTable(TNode<SmallOrderedHashSet> p_o) {
return FieldSliceSmallOrderedHashSetChainTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashSetChainTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashSetChainTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashSetChainTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashSetChainTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=66&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapNumberOfElements(TNode<SmallOrderedHashMap> p_o) {
return LoadSmallOrderedHashMapNumberOfElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=66&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapNumberOfElements(TNode<SmallOrderedHashMap> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapNumberOfElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=67&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapNumberOfDeletedElements(TNode<SmallOrderedHashMap> p_o) {
return LoadSmallOrderedHashMapNumberOfDeletedElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=67&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapNumberOfDeletedElements(TNode<SmallOrderedHashMap> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapNumberOfDeletedElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=68&c=9
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapNumberOfBuckets(TNode<SmallOrderedHashMap> p_o) {
return LoadSmallOrderedHashMapNumberOfBuckets_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=69&c=28
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashMapPadding(TNode<SmallOrderedHashMap> p_o) {
return FieldSliceSmallOrderedHashMapPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=69&c=28
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapPadding(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashMapPadding_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=69&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapPadding(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapPadding_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=3
TorqueStructSlice_HashMapEntry_MutableReference_HashMapEntry_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashMapDataTable(TNode<SmallOrderedHashMap> p_o) {
return FieldSliceSmallOrderedHashMapDataTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=73&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashMapHashTable(TNode<SmallOrderedHashMap> p_o) {
return FieldSliceSmallOrderedHashMapHashTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=73&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapHashTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashMapHashTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=73&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapHashTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapHashTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedHashMapChainTable(TNode<SmallOrderedHashMap> p_o) {
return FieldSliceSmallOrderedHashMapChainTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedHashMapChainTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedHashMapChainTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedHashMapChainTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedHashMapChainTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=103&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryHash(TNode<SmallOrderedNameDictionary> p_o) {
return LoadSmallOrderedNameDictionaryHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=103&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryHash(TNode<SmallOrderedNameDictionary> p_o, TNode<Int32T> p_v) {
return StoreSmallOrderedNameDictionaryHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=104&c=28
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryPadding0(TNode<SmallOrderedNameDictionary> p_o) {
return LoadSmallOrderedNameDictionaryPadding0_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=104&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryPadding0(TNode<SmallOrderedNameDictionary> p_o, TNode<Int32T> p_v) {
return StoreSmallOrderedNameDictionaryPadding0_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=106&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryNumberOfElements(TNode<SmallOrderedNameDictionary> p_o) {
return LoadSmallOrderedNameDictionaryNumberOfElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=106&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryNumberOfElements(TNode<SmallOrderedNameDictionary> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryNumberOfElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=107&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryNumberOfDeletedElements(TNode<SmallOrderedNameDictionary> p_o) {
return LoadSmallOrderedNameDictionaryNumberOfDeletedElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=107&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryNumberOfDeletedElements(TNode<SmallOrderedNameDictionary> p_o, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryNumberOfDeletedElements_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=108&c=9
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryNumberOfBuckets(TNode<SmallOrderedNameDictionary> p_o) {
return LoadSmallOrderedNameDictionaryNumberOfBuckets_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=109&c=28
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedNameDictionaryPadding1(TNode<SmallOrderedNameDictionary> p_o) {
return FieldSliceSmallOrderedNameDictionaryPadding1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=109&c=28
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryPadding1(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedNameDictionaryPadding1_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=109&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryPadding1(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryPadding1_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=3
TorqueStructSlice_NameDictionaryEntry_MutableReference_NameDictionaryEntry_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedNameDictionaryDataTable(TNode<SmallOrderedNameDictionary> p_o) {
return FieldSliceSmallOrderedNameDictionaryDataTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=113&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedNameDictionaryHashTable(TNode<SmallOrderedNameDictionary> p_o) {
return FieldSliceSmallOrderedNameDictionaryHashTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=113&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryHashTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedNameDictionaryHashTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=113&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryHashTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryHashTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSmallOrderedNameDictionaryChainTable(TNode<SmallOrderedNameDictionary> p_o) {
return FieldSliceSmallOrderedNameDictionaryChainTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSmallOrderedNameDictionaryChainTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSmallOrderedNameDictionaryChainTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmallOrderedNameDictionaryChainTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSmallOrderedNameDictionaryChainTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=34&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionContinuationPreservedEmbedderData(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionContinuationPreservedEmbedderData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionContinuationPreservedEmbedderData(TNode<PromiseReaction> p_o, TNode<Object> p_v) {
return StorePromiseReactionContinuationPreservedEmbedderData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=35&c=3
TNode<Union<PromiseReaction, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionNext(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionNext(TNode<PromiseReaction> p_o, TNode<Union<PromiseReaction, Smi>> p_v) {
return StorePromiseReactionNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=36&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionRejectHandler(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionRejectHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionRejectHandler(TNode<PromiseReaction> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> p_v) {
return StorePromiseReactionRejectHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=37&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionFulfillHandler(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionFulfillHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=37&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionFulfillHandler(TNode<PromiseReaction> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> p_v) {
return StorePromiseReactionFulfillHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=40&c=3
TNode<Union<JSPromise, PromiseCapability, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionPromiseOrCapability(TNode<PromiseReaction> p_o) {
return LoadPromiseReactionPromiseOrCapability_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=40&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionPromiseOrCapability(TNode<PromiseReaction> p_o, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_v) {
return StorePromiseReactionPromiseOrCapability_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=58&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskArgument(TNode<PromiseReactionJobTask> p_o) {
return LoadPromiseReactionJobTaskArgument_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=58&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskArgument(TNode<PromiseReactionJobTask> p_o, TNode<Object> p_v) {
return StorePromiseReactionJobTaskArgument_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=59&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskContext(TNode<PromiseReactionJobTask> p_o) {
return LoadPromiseReactionJobTaskContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskContext(TNode<PromiseReactionJobTask> p_o, TNode<Context> p_v) {
return StorePromiseReactionJobTaskContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskHandler(TNode<PromiseReactionJobTask> p_o) {
return LoadPromiseReactionJobTaskHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskHandler(TNode<PromiseReactionJobTask> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> p_v) {
return StorePromiseReactionJobTaskHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=63&c=3
TNode<Union<JSPromise, PromiseCapability, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskPromiseOrCapability(TNode<PromiseReactionJobTask> p_o) {
return LoadPromiseReactionJobTaskPromiseOrCapability_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=63&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskPromiseOrCapability(TNode<PromiseReactionJobTask> p_o, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_v) {
return StorePromiseReactionJobTaskPromiseOrCapability_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=71&c=3
TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskContext(TNode<PromiseResolveThenableJobTask> p_o) {
return LoadPromiseResolveThenableJobTaskContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=71&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskContext(TNode<PromiseResolveThenableJobTask> p_o, TNode<Context> p_v) {
return StorePromiseResolveThenableJobTaskContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=72&c=3
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskPromiseToResolve(TNode<PromiseResolveThenableJobTask> p_o) {
return LoadPromiseResolveThenableJobTaskPromiseToResolve_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=72&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskPromiseToResolve(TNode<PromiseResolveThenableJobTask> p_o, TNode<JSPromise> p_v) {
return StorePromiseResolveThenableJobTaskPromiseToResolve_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=73&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskThenable(TNode<PromiseResolveThenableJobTask> p_o) {
return LoadPromiseResolveThenableJobTaskThenable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=73&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskThenable(TNode<PromiseResolveThenableJobTask> p_o, TNode<JSReceiver> p_v) {
return StorePromiseResolveThenableJobTaskThenable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=74&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskThen(TNode<PromiseResolveThenableJobTask> p_o) {
return LoadPromiseResolveThenableJobTaskThen_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=74&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskThen(TNode<PromiseResolveThenableJobTask> p_o, TNode<JSReceiver> p_v) {
return StorePromiseResolveThenableJobTaskThen_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=6&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyArrayLengthAndHash(TNode<PropertyArray> p_o) {
return LoadPropertyArrayLengthAndHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyArrayLengthAndHash(TNode<PropertyArray> p_o, TNode<Smi> p_v) {
return StorePropertyArrayLengthAndHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=7&c=3
TNode<Union<String, Symbol>> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellName(TNode<PropertyCell> p_o) {
return LoadPropertyCellName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellName(TNode<PropertyCell> p_o, TNode<Union<String, Symbol>> p_v) {
return StorePropertyCellName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=8&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellPropertyDetailsRaw(TNode<PropertyCell> p_o) {
return LoadPropertyCellPropertyDetailsRaw_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellPropertyDetailsRaw(TNode<PropertyCell> p_o, TNode<Smi> p_v) {
return StorePropertyCellPropertyDetailsRaw_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=9&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellValue(TNode<PropertyCell> p_o) {
return LoadPropertyCellValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellValue(TNode<PropertyCell> p_o, TNode<Object> p_v) {
return StorePropertyCellValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=10&c=3
TNode<WeakArrayList> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellDependentCode(TNode<PropertyCell> p_o) {
return LoadPropertyCellDependentCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellDependentCode(TNode<PropertyCell> p_o, TNode<WeakArrayList> p_v) {
return StorePropertyCellDependentCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=47&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyDescriptorObjectFlags(TNode<PropertyDescriptorObject> p_o) {
return LoadPropertyDescriptorObjectFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=47&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyDescriptorObjectFlags(TNode<PropertyDescriptorObject> p_o, TNode<Smi> p_v) {
return StorePropertyDescriptorObjectFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=48&c=3
TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPropertyDescriptorObjectValue(TNode<PropertyDescriptorObject> p_o) {
return LoadPropertyDescriptorObjectValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=48&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyDescriptorObjectValue(TNode<PropertyDescriptorObject> p_o, TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> p_v) {
return StorePropertyDescriptorObjectValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=49&c=3
TNode<Union<BigInt, Boolean, FunctionTemplateInfo, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPropertyDescriptorObjectGet(TNode<PropertyDescriptorObject> p_o) {
return LoadPropertyDescriptorObjectGet_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=49&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyDescriptorObjectGet(TNode<PropertyDescriptorObject> p_o, TNode<Union<BigInt, Boolean, FunctionTemplateInfo, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> p_v) {
return StorePropertyDescriptorObjectGet_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=50&c=3
TNode<Union<BigInt, Boolean, FunctionTemplateInfo, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPropertyDescriptorObjectSet(TNode<PropertyDescriptorObject> p_o) {
return LoadPropertyDescriptorObjectSet_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePropertyDescriptorObjectSet(TNode<PropertyDescriptorObject> p_o, TNode<Union<BigInt, Boolean, FunctionTemplateInfo, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> p_v) {
return StorePropertyDescriptorObjectSet_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=17&c=3
TNode<Union<JSModuleNamespace, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoModuleNamespace(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoModuleNamespace_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoModuleNamespace(TNode<PrototypeInfo> p_o, TNode<Union<JSModuleNamespace, Undefined>> p_v) {
return StorePrototypeInfoModuleNamespace_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=21&c=3
TNode<Union<Smi, WeakArrayList>> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoPrototypeUsers(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoPrototypeUsers_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoPrototypeUsers(TNode<PrototypeInfo> p_o, TNode<Union<Smi, WeakArrayList>> p_v) {
return StorePrototypeInfoPrototypeUsers_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=23&c=3
TNode<Union<FixedArray, Smi, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoPrototypeChainEnumCache(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoPrototypeChainEnumCache_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoPrototypeChainEnumCache(TNode<PrototypeInfo> p_o, TNode<Union<FixedArray, Smi, Undefined>> p_v) {
return StorePrototypeInfoPrototypeChainEnumCache_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=27&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoRegistrySlot(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoRegistrySlot_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=27&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoRegistrySlot(TNode<PrototypeInfo> p_o, TNode<Smi> p_v) {
return StorePrototypeInfoRegistrySlot_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoBitField(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoBitField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoBitField(TNode<PrototypeInfo> p_o, TNode<Smi> p_v) {
return StorePrototypeInfoBitField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=34&c=3
TNode<Union<Undefined, WeakArrayList>> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoDerivedMaps(TNode<PrototypeInfo> p_o) {
return LoadPrototypeInfoDerivedMaps_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoDerivedMaps(TNode<PrototypeInfo> p_o, TNode<Union<Undefined, WeakArrayList>> p_v) {
return StorePrototypeInfoDerivedMaps_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
TorqueStructSlice_Zero_OR_LoadHandler_MutableReference_Zero_OR_LoadHandler_0 TorqueGeneratedExportedMacrosAssembler::FieldSlicePrototypeInfoCachedHandler(TNode<PrototypeInfo> p_o) {
return FieldSlicePrototypeInfoCachedHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
TNode<Union<LoadHandler, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoCachedHandler(TNode<PrototypeInfo> p_o, TNode<IntPtrT> p_i) {
return LoadPrototypeInfoCachedHandler_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoCachedHandler(TNode<PrototypeInfo> p_o, TNode<IntPtrT> p_i, TNode<Union<LoadHandler, Smi>> p_v) {
return StorePrototypeInfoCachedHandler_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=21&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadScriptSource(TNode<Script> p_o) {
return LoadScriptSource_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSource(TNode<Script> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreScriptSource_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=24&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptName(TNode<Script> p_o) {
return LoadScriptName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=24&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptName(TNode<Script> p_o, TNode<Object> p_v) {
return StoreScriptName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=27&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptLineOffset(TNode<Script> p_o) {
return LoadScriptLineOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=27&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptLineOffset(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptLineOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=31&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptColumnOffset(TNode<Script> p_o) {
return LoadScriptColumnOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=31&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptColumnOffset(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptColumnOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=34&c=3
TNode<Union<Smi, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadScriptContextData(TNode<Script> p_o) {
return LoadScriptContextData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptContextData(TNode<Script> p_o, TNode<Union<Smi, Symbol, Undefined>> p_v) {
return StoreScriptContextData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=36&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptScriptType(TNode<Script> p_o) {
return LoadScriptScriptType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptScriptType(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptScriptType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=39&c=3
TNode<Union<FixedArray, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadScriptLineEnds(TNode<Script> p_o) {
return LoadScriptLineEnds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=39&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptLineEnds(TNode<Script> p_o, TNode<Union<FixedArray, Smi>> p_v) {
return StoreScriptLineEnds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=42&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptId(TNode<Script> p_o) {
return LoadScriptId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=42&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptId(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=47&c=3
TNode<Union<FixedArray, SharedFunctionInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadScriptEvalFromSharedOrWrappedArguments(TNode<Script> p_o) {
return LoadScriptEvalFromSharedOrWrappedArguments_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=47&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptEvalFromSharedOrWrappedArguments(TNode<Script> p_o, TNode<Union<FixedArray, SharedFunctionInfo, Undefined>> p_v) {
return StoreScriptEvalFromSharedOrWrappedArguments_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
TNode<Union<Foreign, Smi>> TorqueGeneratedExportedMacrosAssembler::LoadScriptEvalFromPosition(TNode<Script> p_o) {
return LoadScriptEvalFromPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptEvalFromPosition(TNode<Script> p_o, TNode<Union<Foreign, Smi>> p_v) {
return StoreScriptEvalFromPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=50&c=3
TNode<Union<WeakArrayList, WeakFixedArray>> TorqueGeneratedExportedMacrosAssembler::LoadScriptInfos(TNode<Script> p_o) {
return LoadScriptInfos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptInfos(TNode<Script> p_o, TNode<Union<WeakArrayList, WeakFixedArray>> p_v) {
return StoreScriptInfos_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=54&c=3
TNode<Union<ArrayList, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadScriptCompiledLazyFunctionPositions(TNode<Script> p_o) {
return LoadScriptCompiledLazyFunctionPositions_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=54&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptCompiledLazyFunctionPositions(TNode<Script> p_o, TNode<Union<ArrayList, Undefined>> p_v) {
return StoreScriptCompiledLazyFunctionPositions_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=57&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptFlags(TNode<Script> p_o) {
return LoadScriptFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptFlags(TNode<Script> p_o, TNode<Smi> p_v) {
return StoreScriptFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=60&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadScriptSourceUrl(TNode<Script> p_o) {
return LoadScriptSourceUrl_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=60&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSourceUrl(TNode<Script> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreScriptSourceUrl_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=63&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSourceMappingUrl(TNode<Script> p_o) {
return LoadScriptSourceMappingUrl_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=63&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSourceMappingUrl(TNode<Script> p_o, TNode<Object> p_v) {
return StoreScriptSourceMappingUrl_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=66&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadScriptDebugId(TNode<Script> p_o) {
return LoadScriptDebugId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=66&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptDebugId(TNode<Script> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreScriptDebugId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=69&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadScriptHostDefinedOptions(TNode<Script> p_o) {
return LoadScriptHostDefinedOptions_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=69&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptHostDefinedOptions(TNode<Script> p_o, TNode<FixedArray> p_v) {
return StoreScriptHostDefinedOptions_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=78&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadScriptSourceHash(TNode<Script> p_o) {
return LoadScriptSourceHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=78&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSourceHash(TNode<Script> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreScriptSourceHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=9&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadPreparseDataDataLength(TNode<PreparseData> p_o) {
return LoadPreparseDataDataLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePreparseDataDataLength(TNode<PreparseData> p_o, TNode<Int32T> p_v) {
return StorePreparseDataDataLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=10&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadPreparseDataChildrenLength(TNode<PreparseData> p_o) {
return LoadPreparseDataChildrenLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StorePreparseDataChildrenLength(TNode<PreparseData> p_o, TNode<Int32T> p_v) {
return StorePreparseDataChildrenLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=14&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadInterpreterDataBytecodeArray(TNode<InterpreterData> p_o) {
return LoadInterpreterDataBytecodeArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterpreterDataBytecodeArray(TNode<InterpreterData> p_o, TNode<MaybeObject> p_v) {
return StoreInterpreterDataBytecodeArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=15&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadInterpreterDataInterpreterTrampoline(TNode<InterpreterData> p_o) {
return LoadInterpreterDataInterpreterTrampoline_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInterpreterDataInterpreterTrampoline(TNode<InterpreterData> p_o, TNode<MaybeObject> p_v) {
return StoreInterpreterDataInterpreterTrampoline_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=72&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoTrustedFunctionData(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoTrustedFunctionData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=72&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoTrustedFunctionData(TNode<SharedFunctionInfo> p_o, TNode<TrustedPointerT> p_v) {
return StoreSharedFunctionInfoTrustedFunctionData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoUntrustedFunctionData(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoUntrustedFunctionData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoUntrustedFunctionData(TNode<SharedFunctionInfo> p_o, TNode<Object> p_v) {
return StoreSharedFunctionInfoUntrustedFunctionData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=77&c=3
TNode<Union<ScopeInfo, Smi, String>> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoNameOrScopeInfo(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoNameOrScopeInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=77&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoNameOrScopeInfo(TNode<SharedFunctionInfo> p_o, TNode<Union<ScopeInfo, Smi, String>> p_v) {
return StoreSharedFunctionInfoNameOrScopeInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=78&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=78&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(TNode<SharedFunctionInfo> p_o, TNode<HeapObject> p_v) {
return StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=79&c=3
TNode<Union<Script, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoScript(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoScript_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=79&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoScript(TNode<SharedFunctionInfo> p_o, TNode<Union<Script, Undefined>> p_v) {
return StoreSharedFunctionInfoScript_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=83&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoLength(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=83&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoLength(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v) {
return StoreSharedFunctionInfoLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=99&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFormalParameterCount(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFormalParameterCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=99&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFormalParameterCount(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v) {
return StoreSharedFunctionInfoFormalParameterCount_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=100&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionTokenOffset(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFunctionTokenOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=100&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionTokenOffset(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v) {
return StoreSharedFunctionInfoFunctionTokenOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=103&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoExpectedNofProperties(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoExpectedNofProperties_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=103&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoExpectedNofProperties(TNode<SharedFunctionInfo> p_o, TNode<Uint8T> p_v) {
return StoreSharedFunctionInfoExpectedNofProperties_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=104&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFlags2(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFlags2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=104&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFlags2(TNode<SharedFunctionInfo> p_o, TNode<Uint8T> p_v) {
return StoreSharedFunctionInfoFlags2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=105&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFlags(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=105&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFlags(TNode<SharedFunctionInfo> p_o, TNode<Uint32T> p_v) {
return StoreSharedFunctionInfoFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=109&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionLiteralId(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoFunctionLiteralId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=109&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionLiteralId(TNode<SharedFunctionInfo> p_o, TNode<Int32T> p_v) {
return StoreSharedFunctionInfoFunctionLiteralId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=113&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoUniqueId(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoUniqueId_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=113&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoUniqueId(TNode<SharedFunctionInfo> p_o, TNode<Int32T> p_v) {
return StoreSharedFunctionInfoUniqueId_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoAge(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoAge_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=116&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoAge(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v) {
return StoreSharedFunctionInfoAge_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=117&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoPadding(TNode<SharedFunctionInfo> p_o) {
return LoadSharedFunctionInfoPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=117&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoPadding(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v) {
return StoreSharedFunctionInfoPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=126&c=3
TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoWrapperSharedInfo(TNode<SharedFunctionInfoWrapper> p_o) {
return LoadSharedFunctionInfoWrapperSharedInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=126&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoWrapperSharedInfo(TNode<SharedFunctionInfoWrapper> p_o, TNode<SharedFunctionInfo> p_v) {
return StoreSharedFunctionInfoWrapperSharedInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataInferredName(TNode<UncompiledData> p_o) {
return LoadUncompiledDataInferredName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=157&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataInferredName(TNode<UncompiledData> p_o, TNode<String> p_v) {
return StoreUncompiledDataInferredName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=158&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataStartPosition(TNode<UncompiledData> p_o) {
return LoadUncompiledDataStartPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=158&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataStartPosition(TNode<UncompiledData> p_o, TNode<Int32T> p_v) {
return StoreUncompiledDataStartPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=159&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataEndPosition(TNode<UncompiledData> p_o) {
return LoadUncompiledDataEndPosition_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=159&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataEndPosition(TNode<UncompiledData> p_o, TNode<Int32T> p_v) {
return StoreUncompiledDataEndPosition_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=169&c=3
TNode<PreparseData> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataWithPreparseDataPreparseData(TNode<UncompiledDataWithPreparseData> p_o) {
return LoadUncompiledDataWithPreparseDataPreparseData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=169&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataWithPreparseDataPreparseData(TNode<UncompiledDataWithPreparseData> p_o, TNode<PreparseData> p_v) {
return StoreUncompiledDataWithPreparseDataPreparseData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=176&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataWithoutPreparseDataWithJobJob(TNode<UncompiledDataWithoutPreparseDataWithJob> p_o) {
return LoadUncompiledDataWithoutPreparseDataWithJobJob_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=176&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataWithoutPreparseDataWithJobJob(TNode<UncompiledDataWithoutPreparseDataWithJob> p_o, TNode<RawPtrT> p_v) {
return StoreUncompiledDataWithoutPreparseDataWithJobJob_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=183&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataWithPreparseDataAndJobJob(TNode<UncompiledDataWithPreparseDataAndJob> p_o) {
return LoadUncompiledDataWithPreparseDataAndJobJob_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=183&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataWithPreparseDataAndJobJob(TNode<UncompiledDataWithPreparseDataAndJob> p_o, TNode<RawPtrT> p_v) {
return StoreUncompiledDataWithPreparseDataAndJobJob_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=198&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataBlockIds(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataBlockIds_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=198&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataBlockIds(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v) {
return StoreOnHeapBasicBlockProfilerDataBlockIds_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=199&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataCounts(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataCounts_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=199&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataCounts(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v) {
return StoreOnHeapBasicBlockProfilerDataCounts_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=200&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataBranches(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataBranches_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=200&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataBranches(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v) {
return StoreOnHeapBasicBlockProfilerDataBranches_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=201&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataName(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=201&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataName(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v) {
return StoreOnHeapBasicBlockProfilerDataName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=202&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataSchedule(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataSchedule_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=202&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataSchedule(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v) {
return StoreOnHeapBasicBlockProfilerDataSchedule_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=203&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataCode(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=203&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataCode(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v) {
return StoreOnHeapBasicBlockProfilerDataCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=204&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadOnHeapBasicBlockProfilerDataHash(TNode<OnHeapBasicBlockProfilerData> p_o) {
return LoadOnHeapBasicBlockProfilerDataHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=204&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreOnHeapBasicBlockProfilerDataHash(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<Smi> p_v) {
return StoreOnHeapBasicBlockProfilerDataHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
TNode<Union<JSFunction, JSGeneratorObject, SharedFunctionInfo>> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleCode(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleCode(TNode<SourceTextModule> p_o, TNode<Union<JSFunction, JSGeneratorObject, SharedFunctionInfo>> p_v) {
return StoreSourceTextModuleCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleRegularExports(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleRegularExports_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleRegularExports(TNode<SourceTextModule> p_o, TNode<FixedArray> p_v) {
return StoreSourceTextModuleRegularExports_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleRegularImports(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleRegularImports_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleRegularImports(TNode<SourceTextModule> p_o, TNode<FixedArray> p_v) {
return StoreSourceTextModuleRegularImports_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleRequestedModules(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleRequestedModules_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleRequestedModules(TNode<SourceTextModule> p_o, TNode<FixedArray> p_v) {
return StoreSourceTextModuleRequestedModules_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
TNode<Union<Hole, JSObject>> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleImportMeta(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleImportMeta_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleImportMeta(TNode<SourceTextModule> p_o, TNode<Union<Hole, JSObject>> p_v) {
return StoreSourceTextModuleImportMeta_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
TNode<Union<Hole, SourceTextModule>> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleCycleRoot(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleCycleRoot_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleCycleRoot(TNode<SourceTextModule> p_o, TNode<Union<Hole, SourceTextModule>> p_v) {
return StoreSourceTextModuleCycleRoot_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
TNode<ArrayList> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleAsyncParentModules(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleAsyncParentModules_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleAsyncParentModules(TNode<SourceTextModule> p_o, TNode<ArrayList> p_v) {
return StoreSourceTextModuleAsyncParentModules_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=41&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleDfsIndex(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleDfsIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=41&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleDfsIndex(TNode<SourceTextModule> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleDfsIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=42&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleDfsAncestorIndex(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleDfsAncestorIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=42&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleDfsAncestorIndex(TNode<SourceTextModule> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleDfsAncestorIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=45&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModulePendingAsyncDependencies(TNode<SourceTextModule> p_o) {
return LoadSourceTextModulePendingAsyncDependencies_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=45&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModulePendingAsyncDependencies(TNode<SourceTextModule> p_o, TNode<Smi> p_v) {
return StoreSourceTextModulePendingAsyncDependencies_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=47&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleFlags(TNode<SourceTextModule> p_o) {
return LoadSourceTextModuleFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=47&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleFlags(TNode<SourceTextModule> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=59&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadModuleRequestSpecifier(TNode<ModuleRequest> p_o) {
return LoadModuleRequestSpecifier_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleRequestSpecifier(TNode<ModuleRequest> p_o, TNode<String> p_v) {
return StoreModuleRequestSpecifier_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadModuleRequestImportAttributes(TNode<ModuleRequest> p_o) {
return LoadModuleRequestImportAttributes_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleRequestImportAttributes(TNode<ModuleRequest> p_o, TNode<FixedArray> p_v) {
return StoreModuleRequestImportAttributes_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=65&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleRequestFlags(TNode<ModuleRequest> p_o) {
return LoadModuleRequestFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=65&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreModuleRequestFlags(TNode<ModuleRequest> p_o, TNode<Smi> p_v) {
return StoreModuleRequestFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=69&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryExportName(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryExportName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=69&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryExportName(TNode<SourceTextModuleInfoEntry> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreSourceTextModuleInfoEntryExportName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=70&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryLocalName(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryLocalName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=70&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryLocalName(TNode<SourceTextModuleInfoEntry> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreSourceTextModuleInfoEntryLocalName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=71&c=3
TNode<Union<String, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryImportName(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryImportName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=71&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryImportName(TNode<SourceTextModuleInfoEntry> p_o, TNode<Union<String, Undefined>> p_v) {
return StoreSourceTextModuleInfoEntryImportName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=72&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryModuleRequest(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryModuleRequest_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=72&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryModuleRequest(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleInfoEntryModuleRequest_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=73&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryCellIndex(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryCellIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=73&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryCellIndex(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleInfoEntryCellIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=74&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryBegPos(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryBegPos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=74&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryBegPos(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleInfoEntryBegPos_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=75&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryEndPos(TNode<SourceTextModuleInfoEntry> p_o) {
return LoadSourceTextModuleInfoEntryEndPos_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=75&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryEndPos(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v) {
return StoreSourceTextModuleInfoEntryEndPos_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=78&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadConsStringFirst(TNode<ConsString> p_o) {
return LoadConsStringFirst_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=78&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreConsStringFirst(TNode<ConsString> p_o, TNode<String> p_v) {
return StoreConsStringFirst_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=79&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadConsStringSecond(TNode<ConsString> p_o) {
return LoadConsStringSecond_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=79&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreConsStringSecond(TNode<ConsString> p_o, TNode<String> p_v) {
return StoreConsStringSecond_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=86&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadExternalStringResource(TNode<ExternalString> p_o) {
return LoadExternalStringResource_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=86&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExternalStringResource(TNode<ExternalString> p_o, TNode<ExternalPointerT> p_v) {
return StoreExternalStringResource_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=88&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadExternalStringResourceData(TNode<ExternalString> p_o) {
return LoadExternalStringResourceData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=88&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExternalStringResourceData(TNode<ExternalString> p_o, TNode<ExternalPointerT> p_v) {
return StoreExternalStringResourceData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=141&c=9
TorqueStructSlice_char8_ConstReference_char8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSeqOneByteStringChars(TNode<SeqOneByteString> p_o) {
return FieldSliceSeqOneByteStringChars_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=141&c=9
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSeqOneByteStringChars(TNode<SeqOneByteString> p_o, TNode<IntPtrT> p_i) {
return LoadSeqOneByteStringChars_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=147&c=9
TorqueStructSlice_char16_ConstReference_char16_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSeqTwoByteStringChars(TNode<SeqTwoByteString> p_o) {
return FieldSliceSeqTwoByteStringChars_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=147&c=9
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSeqTwoByteStringChars(TNode<SeqTwoByteString> p_o, TNode<IntPtrT> p_i) {
return LoadSeqTwoByteStringChars_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=153&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadSlicedStringParent(TNode<SlicedString> p_o) {
return LoadSlicedStringParent_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=153&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSlicedStringParent(TNode<SlicedString> p_o, TNode<String> p_v) {
return StoreSlicedStringParent_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=154&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSlicedStringOffset(TNode<SlicedString> p_o) {
return LoadSlicedStringOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=154&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSlicedStringOffset(TNode<SlicedString> p_o, TNode<Smi> p_v) {
return StoreSlicedStringOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=160&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadThinStringActual(TNode<ThinString> p_o) {
return LoadThinStringActual_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=160&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreThinStringActual(TNode<ThinString> p_o, TNode<String> p_v) {
return StoreThinStringActual_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=9&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryHash(TNode<SwissNameDictionary> p_o) {
return LoadSwissNameDictionaryHash_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryHash(TNode<SwissNameDictionary> p_o, TNode<Uint32T> p_v) {
return StoreSwissNameDictionaryHash_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=10&c=9
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryCapacity(TNode<SwissNameDictionary> p_o) {
return LoadSwissNameDictionaryCapacity_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=11&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryMetaTable(TNode<SwissNameDictionary> p_o) {
return LoadSwissNameDictionaryMetaTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryMetaTable(TNode<SwissNameDictionary> p_o, TNode<ByteArray> p_v) {
return StoreSwissNameDictionaryMetaTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
TorqueStructSlice_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_Boolean_OR_Null_OR_Undefined_OR_JSReceiver_OR_TheHole_MutableReference_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_Boolean_OR_Null_OR_Undefined_OR_JSReceiver_OR_TheHole_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSwissNameDictionaryDataTable(TNode<SwissNameDictionary> p_o) {
return FieldSliceSwissNameDictionaryDataTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryDataTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSwissNameDictionaryDataTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryDataTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> p_v) {
return StoreSwissNameDictionaryDataTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSwissNameDictionaryCtrlTable(TNode<SwissNameDictionary> p_o) {
return FieldSliceSwissNameDictionaryCtrlTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryCtrlTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSwissNameDictionaryCtrlTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryCtrlTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSwissNameDictionaryCtrlTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
TorqueStructSlice_uint8_MutableReference_uint8_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceSwissNameDictionaryPropertyDetailsTable(TNode<SwissNameDictionary> p_o) {
return FieldSliceSwissNameDictionaryPropertyDetailsTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadSwissNameDictionaryPropertyDetailsTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i) {
return LoadSwissNameDictionaryPropertyDetailsTable_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSwissNameDictionaryPropertyDetailsTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v) {
return StoreSwissNameDictionaryPropertyDetailsTable_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=6&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadSyntheticModuleName(TNode<SyntheticModule> p_o) {
return LoadSyntheticModuleName_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSyntheticModuleName(TNode<SyntheticModule> p_o, TNode<String> p_v) {
return StoreSyntheticModuleName_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=7&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSyntheticModuleExportNames(TNode<SyntheticModule> p_o) {
return LoadSyntheticModuleExportNames_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSyntheticModuleExportNames(TNode<SyntheticModule> p_o, TNode<FixedArray> p_v) {
return StoreSyntheticModuleExportNames_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=8&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadSyntheticModuleEvaluationSteps(TNode<SyntheticModule> p_o) {
return LoadSyntheticModuleEvaluationSteps_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSyntheticModuleEvaluationSteps(TNode<SyntheticModule> p_o, TNode<Foreign> p_v) {
return StoreSyntheticModuleEvaluationSteps_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadTemplateObjectDescriptionRawStrings(TNode<TemplateObjectDescription> p_o) {
return LoadTemplateObjectDescriptionRawStrings_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateObjectDescriptionRawStrings(TNode<TemplateObjectDescription> p_o, TNode<FixedArray> p_v) {
return StoreTemplateObjectDescriptionRawStrings_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadTemplateObjectDescriptionCookedStrings(TNode<TemplateObjectDescription> p_o) {
return LoadTemplateObjectDescriptionCookedStrings_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateObjectDescriptionCookedStrings(TNode<TemplateObjectDescription> p_o, TNode<FixedArray> p_v) {
return StoreTemplateObjectDescriptionCookedStrings_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=25&c=3
TNode<Union<ObjectTemplateInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataPrototypeTemplate(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataPrototypeTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=25&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataPrototypeTemplate(TNode<FunctionTemplateRareData> p_o, TNode<Union<ObjectTemplateInfo, Undefined>> p_v) {
return StoreFunctionTemplateRareDataPrototypeTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=26&c=3
TNode<Union<FunctionTemplateInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataPrototypeProviderTemplate(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataPrototypeProviderTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=26&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataPrototypeProviderTemplate(TNode<FunctionTemplateRareData> p_o, TNode<Union<FunctionTemplateInfo, Undefined>> p_v) {
return StoreFunctionTemplateRareDataPrototypeProviderTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=27&c=3
TNode<Union<FunctionTemplateInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataParentTemplate(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataParentTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=27&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataParentTemplate(TNode<FunctionTemplateRareData> p_o, TNode<Union<FunctionTemplateInfo, Undefined>> p_v) {
return StoreFunctionTemplateRareDataParentTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=28&c=3
TNode<Union<InterceptorInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataNamedPropertyHandler(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataNamedPropertyHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=28&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataNamedPropertyHandler(TNode<FunctionTemplateRareData> p_o, TNode<Union<InterceptorInfo, Undefined>> p_v) {
return StoreFunctionTemplateRareDataNamedPropertyHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=29&c=3
TNode<Union<InterceptorInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataIndexedPropertyHandler(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataIndexedPropertyHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataIndexedPropertyHandler(TNode<FunctionTemplateRareData> p_o, TNode<Union<InterceptorInfo, Undefined>> p_v) {
return StoreFunctionTemplateRareDataIndexedPropertyHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=30&c=3
TNode<Union<ObjectTemplateInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataInstanceTemplate(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataInstanceTemplate_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataInstanceTemplate(TNode<FunctionTemplateRareData> p_o, TNode<Union<ObjectTemplateInfo, Undefined>> p_v) {
return StoreFunctionTemplateRareDataInstanceTemplate_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=31&c=3
TNode<Union<FunctionTemplateInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataInstanceCallHandler(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataInstanceCallHandler_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=31&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataInstanceCallHandler(TNode<FunctionTemplateRareData> p_o, TNode<Union<FunctionTemplateInfo, Undefined>> p_v) {
return StoreFunctionTemplateRareDataInstanceCallHandler_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=32&c=3
TNode<Union<AccessCheckInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataAccessCheckInfo(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataAccessCheckInfo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=32&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataAccessCheckInfo(TNode<FunctionTemplateRareData> p_o, TNode<Union<AccessCheckInfo, Undefined>> p_v) {
return StoreFunctionTemplateRareDataAccessCheckInfo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=33&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataCFunctionOverloads(TNode<FunctionTemplateRareData> p_o) {
return LoadFunctionTemplateRareDataCFunctionOverloads_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataCFunctionOverloads(TNode<FunctionTemplateRareData> p_o, TNode<FixedArray> p_v) {
return StoreFunctionTemplateRareDataCFunctionOverloads_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=116&c=3
TNode<Union<FunctionTemplateInfo, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadObjectTemplateInfoConstructor(TNode<ObjectTemplateInfo> p_o) {
return LoadObjectTemplateInfoConstructor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=116&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreObjectTemplateInfoConstructor(TNode<ObjectTemplateInfo> p_o, TNode<Union<FunctionTemplateInfo, Undefined>> p_v) {
return StoreObjectTemplateInfoConstructor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=117&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadObjectTemplateInfoData(TNode<ObjectTemplateInfo> p_o) {
return LoadObjectTemplateInfoData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=117&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreObjectTemplateInfoData(TNode<ObjectTemplateInfo> p_o, TNode<Smi> p_v) {
return StoreObjectTemplateInfoData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=122&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadDictionaryTemplateInfoPropertyNames(TNode<DictionaryTemplateInfo> p_o) {
return LoadDictionaryTemplateInfoPropertyNames_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=122&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreDictionaryTemplateInfoPropertyNames(TNode<DictionaryTemplateInfo> p_o, TNode<FixedArray> p_v) {
return StoreDictionaryTemplateInfoPropertyNames_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=63&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanBitsetTypeBitsetLow(TNode<TurbofanBitsetType> p_o) {
return LoadTurbofanBitsetTypeBitsetLow_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=63&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanBitsetTypeBitsetLow(TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v) {
return StoreTurbofanBitsetTypeBitsetLow_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=64&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanBitsetTypeBitsetHigh(TNode<TurbofanBitsetType> p_o) {
return LoadTurbofanBitsetTypeBitsetHigh_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=64&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanBitsetTypeBitsetHigh(TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v) {
return StoreTurbofanBitsetTypeBitsetHigh_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=69&c=3
TNode<TurbofanType> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanUnionTypeType1(TNode<TurbofanUnionType> p_o) {
return LoadTurbofanUnionTypeType1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=69&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanUnionTypeType1(TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v) {
return StoreTurbofanUnionTypeType1_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=70&c=3
TNode<TurbofanType> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanUnionTypeType2(TNode<TurbofanUnionType> p_o) {
return LoadTurbofanUnionTypeType2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=70&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanUnionTypeType2(TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v) {
return StoreTurbofanUnionTypeType2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=75&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanRangeTypeMin(TNode<TurbofanRangeType> p_o) {
return LoadTurbofanRangeTypeMin_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=75&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanRangeTypeMin(TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v) {
return StoreTurbofanRangeTypeMin_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=76&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanRangeTypeMax(TNode<TurbofanRangeType> p_o) {
return LoadTurbofanRangeTypeMax_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=76&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanRangeTypeMax(TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v) {
return StoreTurbofanRangeTypeMax_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=81&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanHeapConstantTypeConstant(TNode<TurbofanHeapConstantType> p_o) {
return LoadTurbofanHeapConstantTypeConstant_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=81&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanHeapConstantTypeConstant(TNode<TurbofanHeapConstantType> p_o, TNode<HeapObject> p_v) {
return StoreTurbofanHeapConstantTypeConstant_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=86&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadTurbofanOtherNumberConstantTypeConstant(TNode<TurbofanOtherNumberConstantType> p_o) {
return LoadTurbofanOtherNumberConstantTypeConstant_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=86&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurbofanOtherNumberConstantTypeConstant(TNode<TurbofanOtherNumberConstantType> p_o, TNode<Float64T> p_v) {
return StoreTurbofanOtherNumberConstantTypeConstant_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=29&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord32RangeTypeFrom(TNode<TurboshaftWord32RangeType> p_o) {
return LoadTurboshaftWord32RangeTypeFrom_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftWord32RangeTypeFrom(TNode<TurboshaftWord32RangeType> p_o, TNode<Uint32T> p_v) {
return StoreTurboshaftWord32RangeTypeFrom_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=30&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord32RangeTypeTo(TNode<TurboshaftWord32RangeType> p_o) {
return LoadTurboshaftWord32RangeTypeTo_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=30&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftWord32RangeTypeTo(TNode<TurboshaftWord32RangeType> p_o, TNode<Uint32T> p_v) {
return StoreTurboshaftWord32RangeTypeTo_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=37&c=9
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord32SetTypeSetSize(TNode<TurboshaftWord32SetType> p_o) {
return LoadTurboshaftWord32SetTypeSetSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=38&c=3
TorqueStructSlice_WasmCodePointer_MutableReference_WasmCodePointer_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceTurboshaftWord32SetTypeElements(TNode<TurboshaftWord32SetType> p_o) {
return FieldSliceTurboshaftWord32SetTypeElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=38&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord32SetTypeElements(TNode<TurboshaftWord32SetType> p_o, TNode<IntPtrT> p_i) {
return LoadTurboshaftWord32SetTypeElements_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=38&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftWord32SetTypeElements(TNode<TurboshaftWord32SetType> p_o, TNode<IntPtrT> p_i, TNode<Uint32T> p_v) {
return StoreTurboshaftWord32SetTypeElements_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=50&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord64RangeTypeFromHigh(TNode<TurboshaftWord64RangeType> p_o) {
return LoadTurboshaftWord64RangeTypeFromHigh_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftWord64RangeTypeFromHigh(TNode<TurboshaftWord64RangeType> p_o, TNode<Uint32T> p_v) {
return StoreTurboshaftWord64RangeTypeFromHigh_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=51&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord64RangeTypeFromLow(TNode<TurboshaftWord64RangeType> p_o) {
return LoadTurboshaftWord64RangeTypeFromLow_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=51&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftWord64RangeTypeFromLow(TNode<TurboshaftWord64RangeType> p_o, TNode<Uint32T> p_v) {
return StoreTurboshaftWord64RangeTypeFromLow_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=52&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord64RangeTypeToHigh(TNode<TurboshaftWord64RangeType> p_o) {
return LoadTurboshaftWord64RangeTypeToHigh_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=52&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftWord64RangeTypeToHigh(TNode<TurboshaftWord64RangeType> p_o, TNode<Uint32T> p_v) {
return StoreTurboshaftWord64RangeTypeToHigh_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=53&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord64RangeTypeToLow(TNode<TurboshaftWord64RangeType> p_o) {
return LoadTurboshaftWord64RangeTypeToLow_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=53&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftWord64RangeTypeToLow(TNode<TurboshaftWord64RangeType> p_o, TNode<Uint32T> p_v) {
return StoreTurboshaftWord64RangeTypeToLow_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=60&c=9
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord64SetTypeSetSize(TNode<TurboshaftWord64SetType> p_o) {
return LoadTurboshaftWord64SetTypeSetSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=61&c=3
TorqueStructSlice_WasmCodePointer_MutableReference_WasmCodePointer_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceTurboshaftWord64SetTypeElementsHigh(TNode<TurboshaftWord64SetType> p_o) {
return FieldSliceTurboshaftWord64SetTypeElementsHigh_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=61&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord64SetTypeElementsHigh(TNode<TurboshaftWord64SetType> p_o, TNode<IntPtrT> p_i) {
return LoadTurboshaftWord64SetTypeElementsHigh_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=61&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftWord64SetTypeElementsHigh(TNode<TurboshaftWord64SetType> p_o, TNode<IntPtrT> p_i, TNode<Uint32T> p_v) {
return StoreTurboshaftWord64SetTypeElementsHigh_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=62&c=3
TorqueStructSlice_WasmCodePointer_MutableReference_WasmCodePointer_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceTurboshaftWord64SetTypeElementsLow(TNode<TurboshaftWord64SetType> p_o) {
return FieldSliceTurboshaftWord64SetTypeElementsLow_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=62&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftWord64SetTypeElementsLow(TNode<TurboshaftWord64SetType> p_o, TNode<IntPtrT> p_i) {
return LoadTurboshaftWord64SetTypeElementsLow_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=62&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftWord64SetTypeElementsLow(TNode<TurboshaftWord64SetType> p_o, TNode<IntPtrT> p_i, TNode<Uint32T> p_v) {
return StoreTurboshaftWord64SetTypeElementsLow_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=69&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftFloat64TypeSpecialValues(TNode<TurboshaftFloat64Type> p_o) {
return LoadTurboshaftFloat64TypeSpecialValues_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=69&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftFloat64TypeSpecialValues(TNode<TurboshaftFloat64Type> p_o, TNode<Uint32T> p_v) {
return StoreTurboshaftFloat64TypeSpecialValues_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=76&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftFloat64RangeTypePadding(TNode<TurboshaftFloat64RangeType> p_o) {
return LoadTurboshaftFloat64RangeTypePadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=76&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftFloat64RangeTypePadding(TNode<TurboshaftFloat64RangeType> p_o, TNode<Uint32T> p_v) {
return StoreTurboshaftFloat64RangeTypePadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=77&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftFloat64RangeTypeMin(TNode<TurboshaftFloat64RangeType> p_o) {
return LoadTurboshaftFloat64RangeTypeMin_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=77&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftFloat64RangeTypeMin(TNode<TurboshaftFloat64RangeType> p_o, TNode<Float64T> p_v) {
return StoreTurboshaftFloat64RangeTypeMin_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=78&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftFloat64RangeTypeMax(TNode<TurboshaftFloat64RangeType> p_o) {
return LoadTurboshaftFloat64RangeTypeMax_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=78&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftFloat64RangeTypeMax(TNode<TurboshaftFloat64RangeType> p_o, TNode<Float64T> p_v) {
return StoreTurboshaftFloat64RangeTypeMax_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=85&c=9
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftFloat64SetTypeSetSize(TNode<TurboshaftFloat64SetType> p_o) {
return LoadTurboshaftFloat64SetTypeSetSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=86&c=3
TorqueStructSlice_float64_MutableReference_float64_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceTurboshaftFloat64SetTypeElements(TNode<TurboshaftFloat64SetType> p_o) {
return FieldSliceTurboshaftFloat64SetTypeElements_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=86&c=3
TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadTurboshaftFloat64SetTypeElements(TNode<TurboshaftFloat64SetType> p_o, TNode<IntPtrT> p_i) {
return LoadTurboshaftFloat64SetTypeElements_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=86&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreTurboshaftFloat64SetTypeElements(TNode<TurboshaftFloat64SetType> p_o, TNode<IntPtrT> p_i, TNode<Float64T> p_v) {
return StoreTurboshaftFloat64SetTypeElements_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=769&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassA(TNode<InternalClass> p_o) {
return LoadInternalClassA_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=769&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassA(TNode<InternalClass> p_o, TNode<Smi> p_v) {
return StoreInternalClassA_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=770&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassB(TNode<InternalClass> p_o) {
return LoadInternalClassB_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=770&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassB(TNode<InternalClass> p_o, TNode<Number> p_v) {
return StoreInternalClassB_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=833&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiPairA(TNode<SmiPair> p_o) {
return LoadSmiPairA_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=833&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmiPairA(TNode<SmiPair> p_o, TNode<Smi> p_v) {
return StoreSmiPairA_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=834&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiPairB(TNode<SmiPair> p_o) {
return LoadSmiPairB_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=834&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmiPairB(TNode<SmiPair> p_o, TNode<Smi> p_v) {
return StoreSmiPairB_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=931&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiBoxValue(TNode<SmiBox> p_o) {
return LoadSmiBoxValue_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=931&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmiBoxValue(TNode<SmiBox> p_o, TNode<Smi> p_v) {
return StoreSmiBoxValue_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=932&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiBoxUnrelated(TNode<SmiBox> p_o) {
return LoadSmiBoxUnrelated_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=932&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSmiBoxUnrelated(TNode<SmiBox> p_o, TNode<Smi> p_v) {
return StoreSmiBoxUnrelated_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassBaseA(TNode<ExportedSubClassBase> p_o) {
return LoadExportedSubClassBaseA_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassBaseA(TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v) {
return StoreExportedSubClassBaseA_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1184&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassBaseB(TNode<ExportedSubClassBase> p_o) {
return LoadExportedSubClassBaseB_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1184&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassBaseB(TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v) {
return StoreExportedSubClassBaseB_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1176&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassCField(TNode<ExportedSubClass> p_o) {
return LoadExportedSubClassCField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1176&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassCField(TNode<ExportedSubClass> p_o, TNode<Int32T> p_v) {
return StoreExportedSubClassCField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassDField(TNode<ExportedSubClass> p_o) {
return LoadExportedSubClassDField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassDField(TNode<ExportedSubClass> p_o, TNode<Int32T> p_v) {
return StoreExportedSubClassDField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1178&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClassEField(TNode<ExportedSubClass> p_o) {
return LoadExportedSubClassEField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1178&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClassEField(TNode<ExportedSubClass> p_o, TNode<Smi> p_v) {
return StoreExportedSubClassEField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1200&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsDummy1(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsDummy1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1200&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsDummy1(TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v) {
return StoreInternalClassWithStructElementsDummy1_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1201&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsDummy2(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsDummy2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1201&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsDummy2(TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v) {
return StoreInternalClassWithStructElementsDummy2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsCount(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsCount_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsData(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsData(TNode<InternalClassWithStructElements> p_o, TNode<Smi> p_v) {
return StoreInternalClassWithStructElementsData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsObject(TNode<InternalClassWithStructElements> p_o) {
return LoadInternalClassWithStructElementsObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsObject(TNode<InternalClassWithStructElements> p_o, TNode<Object> p_v) {
return StoreInternalClassWithStructElementsObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceInternalClassWithStructElementsEntries(TNode<InternalClassWithStructElements> p_o) {
return FieldSliceInternalClassWithStructElementsEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassWithStructElementsEntries(TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i) {
return LoadInternalClassWithStructElementsEntries_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassWithStructElementsEntries(TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v) {
return StoreInternalClassWithStructElementsEntries_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceInternalClassWithStructElementsMoreEntries(TNode<InternalClassWithStructElements> p_o) {
return FieldSliceInternalClassWithStructElementsMoreEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1218&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClass2XField(TNode<ExportedSubClass2> p_o) {
return LoadExportedSubClass2XField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1218&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClass2XField(TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v) {
return StoreExportedSubClass2XField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1219&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClass2YField(TNode<ExportedSubClass2> p_o) {
return LoadExportedSubClass2YField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1219&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClass2YField(TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v) {
return StoreExportedSubClass2YField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1220&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadExportedSubClass2ZField(TNode<ExportedSubClass2> p_o) {
return LoadExportedSubClass2ZField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1220&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreExportedSubClass2ZField(TNode<ExportedSubClass2> p_o, TNode<Smi> p_v) {
return StoreExportedSubClass2ZField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadSortStateReceiver(TNode<SortState> p_o) {
return LoadSortStateReceiver_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateReceiver(TNode<SortState> p_o, TNode<JSReceiver> p_v) {
return StoreSortStateReceiver_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
TNode<Map> TorqueGeneratedExportedMacrosAssembler::LoadSortStateInitialReceiverMap(TNode<SortState> p_o) {
return LoadSortStateInitialReceiverMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=62&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateInitialReceiverMap(TNode<SortState> p_o, TNode<Map> p_v) {
return StoreSortStateInitialReceiverMap_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadSortStateInitialReceiverLength(TNode<SortState> p_o) {
return LoadSortStateInitialReceiverLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=63&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateInitialReceiverLength(TNode<SortState> p_o, TNode<Number> p_v) {
return StoreSortStateInitialReceiverLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=66&c=3
TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadSortStateUserCmpFn(TNode<SortState> p_o) {
return LoadSortStateUserCmpFn_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=66&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateUserCmpFn(TNode<SortState> p_o, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> p_v) {
return StoreSortStateUserCmpFn_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=68&c=3
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::LoadSortStateIsResetToGeneric(TNode<SortState> p_o) {
return LoadSortStateIsResetToGeneric_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=68&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateIsResetToGeneric(TNode<SortState> p_o, TNode<Boolean> p_v) {
return StoreSortStateIsResetToGeneric_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=73&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateMinGallop(TNode<SortState> p_o) {
return LoadSortStateMinGallop_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=73&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateMinGallop(TNode<SortState> p_o, TNode<Smi> p_v) {
return StoreSortStateMinGallop_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=85&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStatePendingRunsSize(TNode<SortState> p_o) {
return LoadSortStatePendingRunsSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=85&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStatePendingRunsSize(TNode<SortState> p_o, TNode<Smi> p_v) {
return StoreSortStatePendingRunsSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=86&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStatePendingRuns(TNode<SortState> p_o) {
return LoadSortStatePendingRuns_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=86&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStatePendingRuns(TNode<SortState> p_o, TNode<FixedArray> p_v) {
return StoreSortStatePendingRuns_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStateWorkArray(TNode<SortState> p_o) {
return LoadSortStateWorkArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=91&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateWorkArray(TNode<SortState> p_o, TNode<FixedArray> p_v) {
return StoreSortStateWorkArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStateTempArray(TNode<SortState> p_o) {
return LoadSortStateTempArray_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=94&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateTempArray(TNode<SortState> p_o, TNode<FixedArray> p_v) {
return StoreSortStateTempArray_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=97&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateSortLength(TNode<SortState> p_o) {
return LoadSortStateSortLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=97&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateSortLength(TNode<SortState> p_o, TNode<Smi> p_v) {
return StoreSortStateSortLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=101&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateNumberOfUndefined(TNode<SortState> p_o) {
return LoadSortStateNumberOfUndefined_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=101&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateNumberOfUndefined(TNode<SortState> p_o, TNode<Smi> p_v) {
return StoreSortStateNumberOfUndefined_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorLocale(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorLocale(TNode<JSV8BreakIterator> p_o, TNode<String> p_v) {
return StoreJSV8BreakIteratorLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBreakIterator(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBreakIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBreakIterator(TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v) {
return StoreJSV8BreakIteratorBreakIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorUnicodeString(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorUnicodeString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorUnicodeString(TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v) {
return StoreJSV8BreakIteratorUnicodeString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
TNode<Union<JSFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundAdoptText(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundAdoptText_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundAdoptText(TNode<JSV8BreakIterator> p_o, TNode<Union<JSFunction, Undefined>> p_v) {
return StoreJSV8BreakIteratorBoundAdoptText_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
TNode<Union<JSFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundFirst(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundFirst_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundFirst(TNode<JSV8BreakIterator> p_o, TNode<Union<JSFunction, Undefined>> p_v) {
return StoreJSV8BreakIteratorBoundFirst_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
TNode<Union<JSFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundNext(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundNext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundNext(TNode<JSV8BreakIterator> p_o, TNode<Union<JSFunction, Undefined>> p_v) {
return StoreJSV8BreakIteratorBoundNext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
TNode<Union<JSFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundCurrent(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundCurrent_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundCurrent(TNode<JSV8BreakIterator> p_o, TNode<Union<JSFunction, Undefined>> p_v) {
return StoreJSV8BreakIteratorBoundCurrent_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
TNode<Union<JSFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSV8BreakIteratorBoundBreakType(TNode<JSV8BreakIterator> p_o) {
return LoadJSV8BreakIteratorBoundBreakType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSV8BreakIteratorBoundBreakType(TNode<JSV8BreakIterator> p_o, TNode<Union<JSFunction, Undefined>> p_v) {
return StoreJSV8BreakIteratorBoundBreakType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSCollatorIcuCollator(TNode<JSCollator> p_o) {
return LoadJSCollatorIcuCollator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollatorIcuCollator(TNode<JSCollator> p_o, TNode<Foreign> p_v) {
return StoreJSCollatorIcuCollator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
TNode<Union<JSFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSCollatorBoundCompare(TNode<JSCollator> p_o) {
return LoadJSCollatorBoundCompare_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollatorBoundCompare(TNode<JSCollator> p_o, TNode<Union<JSFunction, Undefined>> p_v) {
return StoreJSCollatorBoundCompare_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSCollatorLocale(TNode<JSCollator> p_o) {
return LoadJSCollatorLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollatorLocale(TNode<JSCollator> p_o, TNode<String> p_v) {
return StoreJSCollatorLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=17&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatLocale(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatLocale(TNode<JSDateTimeFormat> p_o, TNode<String> p_v) {
return StoreJSDateTimeFormatLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=18&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatIcuLocale(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatIcuLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=18&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatIcuLocale(TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v) {
return StoreJSDateTimeFormatIcuLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=19&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatIcuSimpleDateFormat(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatIcuSimpleDateFormat_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatIcuSimpleDateFormat(TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v) {
return StoreJSDateTimeFormatIcuSimpleDateFormat_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=20&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatIcuDateIntervalFormat(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatIcuDateIntervalFormat_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatIcuDateIntervalFormat(TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v) {
return StoreJSDateTimeFormatIcuDateIntervalFormat_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=21&c=3
TNode<Union<JSFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatBoundFormat(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatBoundFormat_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatBoundFormat(TNode<JSDateTimeFormat> p_o, TNode<Union<JSFunction, Undefined>> p_v) {
return StoreJSDateTimeFormatBoundFormat_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=22&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSDateTimeFormatFlags(TNode<JSDateTimeFormat> p_o) {
return LoadJSDateTimeFormatFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateTimeFormatFlags(TNode<JSDateTimeFormat> p_o, TNode<Smi> p_v) {
return StoreJSDateTimeFormatFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDisplayNamesInternal(TNode<JSDisplayNames> p_o) {
return LoadJSDisplayNamesInternal_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDisplayNamesInternal(TNode<JSDisplayNames> p_o, TNode<Foreign> p_v) {
return StoreJSDisplayNamesInternal_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSDisplayNamesFlags(TNode<JSDisplayNames> p_o) {
return LoadJSDisplayNamesFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDisplayNamesFlags(TNode<JSDisplayNames> p_o, TNode<Smi> p_v) {
return StoreJSDisplayNamesFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=44&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSDurationFormatStyleFlags(TNode<JSDurationFormat> p_o) {
return LoadJSDurationFormatStyleFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=44&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDurationFormatStyleFlags(TNode<JSDurationFormat> p_o, TNode<Smi> p_v) {
return StoreJSDurationFormatStyleFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=45&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSDurationFormatDisplayFlags(TNode<JSDurationFormat> p_o) {
return LoadJSDurationFormatDisplayFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=45&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDurationFormatDisplayFlags(TNode<JSDurationFormat> p_o, TNode<Smi> p_v) {
return StoreJSDurationFormatDisplayFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=46&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDurationFormatIcuLocale(TNode<JSDurationFormat> p_o) {
return LoadJSDurationFormatIcuLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=46&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDurationFormatIcuLocale(TNode<JSDurationFormat> p_o, TNode<Foreign> p_v) {
return StoreJSDurationFormatIcuLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=47&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSDurationFormatIcuNumberFormatter(TNode<JSDurationFormat> p_o) {
return LoadJSDurationFormatIcuNumberFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=47&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSDurationFormatIcuNumberFormatter(TNode<JSDurationFormat> p_o, TNode<Foreign> p_v) {
return StoreJSDurationFormatIcuNumberFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSListFormatLocale(TNode<JSListFormat> p_o) {
return LoadJSListFormatLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSListFormatLocale(TNode<JSListFormat> p_o, TNode<String> p_v) {
return StoreJSListFormatLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSListFormatIcuFormatter(TNode<JSListFormat> p_o) {
return LoadJSListFormatIcuFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSListFormatIcuFormatter(TNode<JSListFormat> p_o, TNode<Foreign> p_v) {
return StoreJSListFormatIcuFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSListFormatFlags(TNode<JSListFormat> p_o) {
return LoadJSListFormatFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSListFormatFlags(TNode<JSListFormat> p_o, TNode<Smi> p_v) {
return StoreJSListFormatFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSLocaleIcuLocale(TNode<JSLocale> p_o) {
return LoadJSLocaleIcuLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSLocaleIcuLocale(TNode<JSLocale> p_o, TNode<Foreign> p_v) {
return StoreJSLocaleIcuLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSNumberFormatLocale(TNode<JSNumberFormat> p_o) {
return LoadJSNumberFormatLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSNumberFormatLocale(TNode<JSNumberFormat> p_o, TNode<String> p_v) {
return StoreJSNumberFormatLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSNumberFormatIcuNumberFormatter(TNode<JSNumberFormat> p_o) {
return LoadJSNumberFormatIcuNumberFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSNumberFormatIcuNumberFormatter(TNode<JSNumberFormat> p_o, TNode<Foreign> p_v) {
return StoreJSNumberFormatIcuNumberFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
TNode<Union<JSFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadJSNumberFormatBoundFormat(TNode<JSNumberFormat> p_o) {
return LoadJSNumberFormatBoundFormat_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSNumberFormatBoundFormat(TNode<JSNumberFormat> p_o, TNode<Union<JSFunction, Undefined>> p_v) {
return StoreJSNumberFormatBoundFormat_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSPluralRulesLocale(TNode<JSPluralRules> p_o) {
return LoadJSPluralRulesLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPluralRulesLocale(TNode<JSPluralRules> p_o, TNode<String> p_v) {
return StoreJSPluralRulesLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSPluralRulesFlags(TNode<JSPluralRules> p_o) {
return LoadJSPluralRulesFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPluralRulesFlags(TNode<JSPluralRules> p_o, TNode<Smi> p_v) {
return StoreJSPluralRulesFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSPluralRulesIcuPluralRules(TNode<JSPluralRules> p_o) {
return LoadJSPluralRulesIcuPluralRules_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPluralRulesIcuPluralRules(TNode<JSPluralRules> p_o, TNode<Foreign> p_v) {
return StoreJSPluralRulesIcuPluralRules_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSPluralRulesIcuNumberFormatter(TNode<JSPluralRules> p_o) {
return LoadJSPluralRulesIcuNumberFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSPluralRulesIcuNumberFormatter(TNode<JSPluralRules> p_o, TNode<Foreign> p_v) {
return StoreJSPluralRulesIcuNumberFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRelativeTimeFormatLocale(TNode<JSRelativeTimeFormat> p_o) {
return LoadJSRelativeTimeFormatLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRelativeTimeFormatLocale(TNode<JSRelativeTimeFormat> p_o, TNode<String> p_v) {
return StoreJSRelativeTimeFormatLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRelativeTimeFormatNumberingSystem(TNode<JSRelativeTimeFormat> p_o) {
return LoadJSRelativeTimeFormatNumberingSystem_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRelativeTimeFormatNumberingSystem(TNode<JSRelativeTimeFormat> p_o, TNode<String> p_v) {
return StoreJSRelativeTimeFormatNumberingSystem_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSRelativeTimeFormatIcuFormatter(TNode<JSRelativeTimeFormat> p_o) {
return LoadJSRelativeTimeFormatIcuFormatter_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRelativeTimeFormatIcuFormatter(TNode<JSRelativeTimeFormat> p_o, TNode<Foreign> p_v) {
return StoreJSRelativeTimeFormatIcuFormatter_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSRelativeTimeFormatFlags(TNode<JSRelativeTimeFormat> p_o) {
return LoadJSRelativeTimeFormatFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSRelativeTimeFormatFlags(TNode<JSRelativeTimeFormat> p_o, TNode<Smi> p_v) {
return StoreJSRelativeTimeFormatFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=12&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentIteratorIcuBreakIterator(TNode<JSSegmentIterator> p_o) {
return LoadJSSegmentIteratorIcuBreakIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentIteratorIcuBreakIterator(TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v) {
return StoreJSSegmentIteratorIcuBreakIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=13&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentIteratorRawString(TNode<JSSegmentIterator> p_o) {
return LoadJSSegmentIteratorRawString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentIteratorRawString(TNode<JSSegmentIterator> p_o, TNode<String> p_v) {
return StoreJSSegmentIteratorRawString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=14&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentIteratorUnicodeString(TNode<JSSegmentIterator> p_o) {
return LoadJSSegmentIteratorUnicodeString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentIteratorUnicodeString(TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v) {
return StoreJSSegmentIteratorUnicodeString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=15&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentIteratorFlags(TNode<JSSegmentIterator> p_o) {
return LoadJSSegmentIteratorFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentIteratorFlags(TNode<JSSegmentIterator> p_o, TNode<Smi> p_v) {
return StoreJSSegmentIteratorFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=21&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentDataObjectSegment(TNode<JSSegmentDataObject> p_o) {
return LoadJSSegmentDataObjectSegment_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=21&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentDataObjectSegment(TNode<JSSegmentDataObject> p_o, TNode<String> p_v) {
return StoreJSSegmentDataObjectSegment_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=22&c=3
TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentDataObjectIndex(TNode<JSSegmentDataObject> p_o) {
return LoadJSSegmentDataObjectIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=22&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentDataObjectIndex(TNode<JSSegmentDataObject> p_o, TNode<Number> p_v) {
return StoreJSSegmentDataObjectIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=23&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentDataObjectInput(TNode<JSSegmentDataObject> p_o) {
return LoadJSSegmentDataObjectInput_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=23&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentDataObjectInput(TNode<JSSegmentDataObject> p_o, TNode<String> p_v) {
return StoreJSSegmentDataObjectInput_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=29&c=3
TNode<Boolean> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentDataObjectWithIsWordLikeIsWordLike(TNode<JSSegmentDataObjectWithIsWordLike> p_o) {
return LoadJSSegmentDataObjectWithIsWordLikeIsWordLike_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=29&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentDataObjectWithIsWordLikeIsWordLike(TNode<JSSegmentDataObjectWithIsWordLike> p_o, TNode<Boolean> p_v) {
return StoreJSSegmentDataObjectWithIsWordLikeIsWordLike_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmenterLocale(TNode<JSSegmenter> p_o) {
return LoadJSSegmenterLocale_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmenterLocale(TNode<JSSegmenter> p_o, TNode<String> p_v) {
return StoreJSSegmenterLocale_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmenterIcuBreakIterator(TNode<JSSegmenter> p_o) {
return LoadJSSegmenterIcuBreakIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmenterIcuBreakIterator(TNode<JSSegmenter> p_o, TNode<Foreign> p_v) {
return StoreJSSegmenterIcuBreakIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmenterFlags(TNode<JSSegmenter> p_o) {
return LoadJSSegmenterFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmenterFlags(TNode<JSSegmenter> p_o, TNode<Smi> p_v) {
return StoreJSSegmenterFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentsIcuBreakIterator(TNode<JSSegments> p_o) {
return LoadJSSegmentsIcuBreakIterator_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentsIcuBreakIterator(TNode<JSSegments> p_o, TNode<Foreign> p_v) {
return StoreJSSegmentsIcuBreakIterator_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentsRawString(TNode<JSSegments> p_o) {
return LoadJSSegmentsRawString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentsRawString(TNode<JSSegments> p_o, TNode<String> p_v) {
return StoreJSSegmentsRawString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentsUnicodeString(TNode<JSSegments> p_o) {
return LoadJSSegmentsUnicodeString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentsUnicodeString(TNode<JSSegments> p_o, TNode<Foreign> p_v) {
return StoreJSSegmentsUnicodeString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=15&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSSegmentsFlags(TNode<JSSegments> p_o) {
return LoadJSSegmentsFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=15&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreJSSegmentsFlags(TNode<JSSegments> p_o, TNode<Smi> p_v) {
return StoreJSSegmentsFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmImportDataProtectedInstanceData(TNode<WasmImportData> p_o) {
return LoadWasmImportDataProtectedInstanceData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmImportDataProtectedInstanceData(TNode<WasmImportData> p_o, TNode<MaybeObject> p_v) {
return StoreWasmImportDataProtectedInstanceData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmImportDataProtectedCallOrigin(TNode<WasmImportData> p_o) {
return LoadWasmImportDataProtectedCallOrigin_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmImportDataProtectedCallOrigin(TNode<WasmImportData> p_o, TNode<MaybeObject> p_v) {
return StoreWasmImportDataProtectedCallOrigin_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=52&c=3
TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadWasmImportDataNativeContext(TNode<WasmImportData> p_o) {
return LoadWasmImportDataNativeContext_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=52&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmImportDataNativeContext(TNode<WasmImportData> p_o, TNode<NativeContext> p_v) {
return StoreWasmImportDataNativeContext_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=53&c=3
TNode<Union<JSReceiver, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWasmImportDataCallable(TNode<WasmImportData> p_o) {
return LoadWasmImportDataCallable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=53&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmImportDataCallable(TNode<WasmImportData> p_o, TNode<Union<JSReceiver, Undefined>> p_v) {
return StoreWasmImportDataCallable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=55&c=3
TNode<Cell> TorqueGeneratedExportedMacrosAssembler::LoadWasmImportDataWrapperBudget(TNode<WasmImportData> p_o) {
return LoadWasmImportDataWrapperBudget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=55&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmImportDataWrapperBudget(TNode<WasmImportData> p_o, TNode<Cell> p_v) {
return StoreWasmImportDataWrapperBudget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=57&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmImportDataSig(TNode<WasmImportData> p_o) {
return LoadWasmImportDataSig_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=57&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmImportDataSig(TNode<WasmImportData> p_o, TNode<RawPtrT> p_v) {
return StoreWasmImportDataSig_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=59&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmImportDataBitField(TNode<WasmImportData> p_o) {
return LoadWasmImportDataBitField_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=59&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmImportDataBitField(TNode<WasmImportData> p_o, TNode<Uint32T> p_v) {
return StoreWasmImportDataBitField_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmImportDataOptionalPadding(TNode<WasmImportData> p_o) {
return LoadWasmImportDataOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreWasmImportDataOptionalPadding(TNode<WasmImportData> p_o, TNode<Uint32T> p_v) {
return StoreWasmImportDataOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=33&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmInstanceObjectTrustedData(TNode<WasmInstanceObject> p_o) {
return LoadWasmInstanceObjectTrustedData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=33&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInstanceObjectTrustedData(TNode<WasmInstanceObject> p_o, TNode<TrustedPointerT> p_v) {
return StoreWasmInstanceObjectTrustedData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=34&c=3
TNode<WasmModuleObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmInstanceObjectModuleObject(TNode<WasmInstanceObject> p_o) {
return LoadWasmInstanceObjectModuleObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=34&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInstanceObjectModuleObject(TNode<WasmInstanceObject> p_o, TNode<WasmModuleObject> p_v) {
return StoreWasmInstanceObjectModuleObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=35&c=3
TNode<JSObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmInstanceObjectExportsObject(TNode<WasmInstanceObject> p_o) {
return LoadWasmInstanceObjectExportsObject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=35&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInstanceObjectExportsObject(TNode<WasmInstanceObject> p_o, TNode<JSObject> p_v) {
return StoreWasmInstanceObjectExportsObject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=67&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmFastApiCallDataSignature(TNode<WasmFastApiCallData> p_o) {
return LoadWasmFastApiCallDataSignature_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=67&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFastApiCallDataSignature(TNode<WasmFastApiCallData> p_o, TNode<HeapObject> p_v) {
return StoreWasmFastApiCallDataSignature_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=68&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWasmFastApiCallDataCallbackData(TNode<WasmFastApiCallData> p_o) {
return LoadWasmFastApiCallDataCallbackData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=68&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFastApiCallDataCallbackData(TNode<WasmFastApiCallData> p_o, TNode<Object> p_v) {
return StoreWasmFastApiCallDataCallbackData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
TNode<Union<MaybeWeak<HeapObject>, Null>> TorqueGeneratedExportedMacrosAssembler::LoadWasmFastApiCallDataCachedMap(TNode<WasmFastApiCallData> p_o) {
return LoadWasmFastApiCallDataCachedMap_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFastApiCallDataCachedMap(TNode<WasmFastApiCallData> p_o, TNode<Union<MaybeWeak<HeapObject>, Null>> p_v) {
return StoreWasmFastApiCallDataCachedMap_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=81&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmInternalFunctionProtectedImplicitArg(TNode<WasmInternalFunction> p_o) {
return LoadWasmInternalFunctionProtectedImplicitArg_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=81&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInternalFunctionProtectedImplicitArg(TNode<WasmInternalFunction> p_o, TNode<MaybeObject> p_v) {
return StoreWasmInternalFunctionProtectedImplicitArg_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
TNode<Union<JSFunction, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWasmInternalFunctionExternal(TNode<WasmInternalFunction> p_o) {
return LoadWasmInternalFunctionExternal_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInternalFunctionExternal(TNode<WasmInternalFunction> p_o, TNode<Union<JSFunction, Undefined>> p_v) {
return StoreWasmInternalFunctionExternal_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=91&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmInternalFunctionFunctionIndex(TNode<WasmInternalFunction> p_o) {
return LoadWasmInternalFunctionFunctionIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=91&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInternalFunctionFunctionIndex(TNode<WasmInternalFunction> p_o, TNode<Smi> p_v) {
return StoreWasmInternalFunctionFunctionIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmInternalFunctionRawCallTarget(TNode<WasmInternalFunction> p_o) {
return LoadWasmInternalFunctionRawCallTarget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInternalFunctionRawCallTarget(TNode<WasmInternalFunction> p_o, TNode<Uint32T> p_v) {
return StoreWasmInternalFunctionRawCallTarget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=40
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmInternalFunctionOptionalPadding(TNode<WasmInternalFunction> p_o) {
return LoadWasmInternalFunctionOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=40
void TorqueGeneratedExportedMacrosAssembler::StoreWasmInternalFunctionOptionalPadding(TNode<WasmInternalFunction> p_o, TNode<Uint32T> p_v) {
return StoreWasmInternalFunctionOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmFunctionDataWrapperCode(TNode<WasmFunctionData> p_o) {
return LoadWasmFunctionDataWrapperCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFunctionDataWrapperCode(TNode<WasmFunctionData> p_o, TNode<TrustedPointerT> p_v) {
return StoreWasmFunctionDataWrapperCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=3
TNode<WasmFuncRef> TorqueGeneratedExportedMacrosAssembler::LoadWasmFunctionDataFuncRef(TNode<WasmFunctionData> p_o) {
return LoadWasmFunctionDataFuncRef_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFunctionDataFuncRef(TNode<WasmFunctionData> p_o, TNode<WasmFuncRef> p_v) {
return StoreWasmFunctionDataFuncRef_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmFunctionDataJsPromiseFlags(TNode<WasmFunctionData> p_o) {
return LoadWasmFunctionDataJsPromiseFlags_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=119&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFunctionDataJsPromiseFlags(TNode<WasmFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmFunctionDataJsPromiseFlags_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=122&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmFunctionDataProtectedInternal(TNode<WasmFunctionData> p_o) {
return LoadWasmFunctionDataProtectedInternal_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=122&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmFunctionDataProtectedInternal(TNode<WasmFunctionData> p_o, TNode<MaybeObject> p_v) {
return StoreWasmFunctionDataProtectedInternal_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataProtectedInstanceData(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataProtectedInstanceData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataProtectedInstanceData(TNode<WasmExportedFunctionData> p_o, TNode<MaybeObject> p_v) {
return StoreWasmExportedFunctionDataProtectedInstanceData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataFunctionIndex(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataFunctionIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=133&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataFunctionIndex(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmExportedFunctionDataFunctionIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=3
TNode<Cell> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataWrapperBudget(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataWrapperBudget_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataWrapperBudget(TNode<WasmExportedFunctionData> p_o, TNode<Cell> p_v) {
return StoreWasmExportedFunctionDataWrapperBudget_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=136&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataCanonicalTypeIndex(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataCanonicalTypeIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=136&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataCanonicalTypeIndex(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmExportedFunctionDataCanonicalTypeIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataReceiverIsFirstParam(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataReceiverIsFirstParam_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataReceiverIsFirstParam(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmExportedFunctionDataReceiverIsFirstParam_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=145&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataPackedArgsSize(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataPackedArgsSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=145&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataPackedArgsSize(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmExportedFunctionDataPackedArgsSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataCWrapperCode(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataCWrapperCode_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataCWrapperCode(TNode<WasmExportedFunctionData> p_o, TNode<TrustedPointerT> p_v) {
return StoreWasmExportedFunctionDataCWrapperCode_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=148&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataSig(TNode<WasmExportedFunctionData> p_o) {
return LoadWasmExportedFunctionDataSig_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=148&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataSig(TNode<WasmExportedFunctionData> p_o, TNode<RawPtrT> p_v) {
return StoreWasmExportedFunctionDataSig_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataCanonicalSigIndex(TNode<WasmJSFunctionData> p_o) {
return LoadWasmJSFunctionDataCanonicalSigIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataCanonicalSigIndex(TNode<WasmJSFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmJSFunctionDataCanonicalSigIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataProtectedOffheapData(TNode<WasmJSFunctionData> p_o) {
return LoadWasmJSFunctionDataProtectedOffheapData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataProtectedOffheapData(TNode<WasmJSFunctionData> p_o, TNode<MaybeObject> p_v) {
return StoreWasmJSFunctionDataProtectedOffheapData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=163&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataCanonicalSigIndex(TNode<WasmCapiFunctionData> p_o) {
return LoadWasmCapiFunctionDataCanonicalSigIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=163&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataCanonicalSigIndex(TNode<WasmCapiFunctionData> p_o, TNode<Smi> p_v) {
return StoreWasmCapiFunctionDataCanonicalSigIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=164&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataEmbedderData(TNode<WasmCapiFunctionData> p_o) {
return LoadWasmCapiFunctionDataEmbedderData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=164&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataEmbedderData(TNode<WasmCapiFunctionData> p_o, TNode<Foreign> p_v) {
return StoreWasmCapiFunctionDataEmbedderData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=165&c=3
TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataSig(TNode<WasmCapiFunctionData> p_o) {
return LoadWasmCapiFunctionDataSig_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=165&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataSig(TNode<WasmCapiFunctionData> p_o, TNode<RawPtrT> p_v) {
return StoreWasmCapiFunctionDataSig_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmResumeDataTrustedSuspender(TNode<WasmResumeData> p_o) {
return LoadWasmResumeDataTrustedSuspender_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmResumeDataTrustedSuspender(TNode<WasmResumeData> p_o, TNode<TrustedPointerT> p_v) {
return StoreWasmResumeDataTrustedSuspender_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=170&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmResumeDataOnResume(TNode<WasmResumeData> p_o) {
return LoadWasmResumeDataOnResume_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=170&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmResumeDataOnResume(TNode<WasmResumeData> p_o, TNode<Smi> p_v) {
return StoreWasmResumeDataOnResume_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspenderObjectStack(TNode<WasmSuspenderObject> p_o) {
return LoadWasmSuspenderObjectStack_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspenderObjectStack(TNode<WasmSuspenderObject> p_o, TNode<ExternalPointerT> p_v) {
return StoreWasmSuspenderObjectStack_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=175&c=3
TNode<MaybeObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspenderObjectParent(TNode<WasmSuspenderObject> p_o) {
return LoadWasmSuspenderObjectParent_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=175&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspenderObjectParent(TNode<WasmSuspenderObject> p_o, TNode<MaybeObject> p_v) {
return StoreWasmSuspenderObjectParent_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=176&c=3
TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspenderObjectPromise(TNode<WasmSuspenderObject> p_o) {
return LoadWasmSuspenderObjectPromise_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=176&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspenderObjectPromise(TNode<WasmSuspenderObject> p_o, TNode<JSPromise> p_v) {
return StoreWasmSuspenderObjectPromise_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=177&c=3
TNode<Union<JSObject, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspenderObjectResume(TNode<WasmSuspenderObject> p_o) {
return LoadWasmSuspenderObjectResume_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=177&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspenderObjectResume(TNode<WasmSuspenderObject> p_o, TNode<Union<JSObject, Undefined>> p_v) {
return StoreWasmSuspenderObjectResume_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=178&c=3
TNode<Union<JSObject, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspenderObjectReject(TNode<WasmSuspenderObject> p_o) {
return LoadWasmSuspenderObjectReject_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=178&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspenderObjectReject(TNode<WasmSuspenderObject> p_o, TNode<Union<JSObject, Undefined>> p_v) {
return StoreWasmSuspenderObjectReject_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=182&c=3
TNode<ExternalPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmContinuationObjectStack(TNode<WasmContinuationObject> p_o) {
return LoadWasmContinuationObjectStack_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=182&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmContinuationObjectStack(TNode<WasmContinuationObject> p_o, TNode<ExternalPointerT> p_v) {
return StoreWasmContinuationObjectStack_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExceptionTagIndex(TNode<WasmExceptionTag> p_o) {
return LoadWasmExceptionTagIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExceptionTagIndex(TNode<WasmExceptionTag> p_o, TNode<Smi> p_v) {
return StoreWasmExceptionTagIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=195&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectManagedNativeModule(TNode<WasmModuleObject> p_o) {
return LoadWasmModuleObjectManagedNativeModule_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=195&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectManagedNativeModule(TNode<WasmModuleObject> p_o, TNode<Foreign> p_v) {
return StoreWasmModuleObjectManagedNativeModule_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=196&c=3
TNode<Script> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectScript(TNode<WasmModuleObject> p_o) {
return LoadWasmModuleObjectScript_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=196&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectScript(TNode<WasmModuleObject> p_o, TNode<Script> p_v) {
return StoreWasmModuleObjectScript_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=210&c=3
TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectEntries(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectEntries_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=210&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectEntries(TNode<WasmTableObject> p_o, TNode<FixedArray> p_v) {
return StoreWasmTableObjectEntries_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=211&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectCurrentLength(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectCurrentLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=211&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectCurrentLength(TNode<WasmTableObject> p_o, TNode<Smi> p_v) {
return StoreWasmTableObjectCurrentLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=216&c=3
TNode<Union<BigInt, HeapNumber, Smi, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectMaximumLength(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectMaximumLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=216&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectMaximumLength(TNode<WasmTableObject> p_o, TNode<Union<BigInt, HeapNumber, Smi, Undefined>> p_v) {
return StoreWasmTableObjectMaximumLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=220&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectRawType(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectRawType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=220&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectRawType(TNode<WasmTableObject> p_o, TNode<Smi> p_v) {
return StoreWasmTableObjectRawType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=222&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectTrustedDispatchTable(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectTrustedDispatchTable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=222&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectTrustedDispatchTable(TNode<WasmTableObject> p_o, TNode<TrustedPointerT> p_v) {
return StoreWasmTableObjectTrustedDispatchTable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=226&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectTrustedData(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectTrustedData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=226&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectTrustedData(TNode<WasmTableObject> p_o, TNode<TrustedPointerT> p_v) {
return StoreWasmTableObjectTrustedData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=227&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectAddressType(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectAddressType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=227&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectAddressType(TNode<WasmTableObject> p_o, TNode<Uint8T> p_v) {
return StoreWasmTableObjectAddressType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=229&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectPaddingForAddressType0(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectPaddingForAddressType0_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=229&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectPaddingForAddressType0(TNode<WasmTableObject> p_o, TNode<Uint8T> p_v) {
return StoreWasmTableObjectPaddingForAddressType0_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=230&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectPaddingForAddressType1(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectPaddingForAddressType1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=230&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectPaddingForAddressType1(TNode<WasmTableObject> p_o, TNode<Uint16T> p_v) {
return StoreWasmTableObjectPaddingForAddressType1_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=231&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectPaddingForAddressType2(TNode<WasmTableObject> p_o) {
return LoadWasmTableObjectPaddingForAddressType2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=231&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectPaddingForAddressType2(TNode<WasmTableObject> p_o, TNode<Uint32T> p_v) {
return StoreWasmTableObjectPaddingForAddressType2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=235&c=3
TNode<JSArrayBuffer> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectArrayBuffer(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectArrayBuffer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=235&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectArrayBuffer(TNode<WasmMemoryObject> p_o, TNode<JSArrayBuffer> p_v) {
return StoreWasmMemoryObjectArrayBuffer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=236&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectMaximumPages(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectMaximumPages_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=236&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectMaximumPages(TNode<WasmMemoryObject> p_o, TNode<Smi> p_v) {
return StoreWasmMemoryObjectMaximumPages_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=237&c=3
TNode<WeakArrayList> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectInstances(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectInstances_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=237&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectInstances(TNode<WasmMemoryObject> p_o, TNode<WeakArrayList> p_v) {
return StoreWasmMemoryObjectInstances_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=238&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectAddressType(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectAddressType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=238&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectAddressType(TNode<WasmMemoryObject> p_o, TNode<Uint8T> p_v) {
return StoreWasmMemoryObjectAddressType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=240&c=3
TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectPaddingForAddressType0(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectPaddingForAddressType0_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=240&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectPaddingForAddressType0(TNode<WasmMemoryObject> p_o, TNode<Uint8T> p_v) {
return StoreWasmMemoryObjectPaddingForAddressType0_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=241&c=3
TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectPaddingForAddressType1(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectPaddingForAddressType1_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=241&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectPaddingForAddressType1(TNode<WasmMemoryObject> p_o, TNode<Uint16T> p_v) {
return StoreWasmMemoryObjectPaddingForAddressType1_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=242&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectPaddingForAddressType2(TNode<WasmMemoryObject> p_o) {
return LoadWasmMemoryObjectPaddingForAddressType2_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=242&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectPaddingForAddressType2(TNode<WasmMemoryObject> p_o, TNode<Uint32T> p_v) {
return StoreWasmMemoryObjectPaddingForAddressType2_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=250&c=3
TNode<MaybeWeak<HeapObject>> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryMapDescriptorMemory(TNode<WasmMemoryMapDescriptor> p_o) {
return LoadWasmMemoryMapDescriptorMemory_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=250&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryMapDescriptorMemory(TNode<WasmMemoryMapDescriptor> p_o, TNode<MaybeWeak<HeapObject>> p_v) {
return StoreWasmMemoryMapDescriptorMemory_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=251&c=3
TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryMapDescriptorFileDescriptor(TNode<WasmMemoryMapDescriptor> p_o) {
return LoadWasmMemoryMapDescriptorFileDescriptor_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=251&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryMapDescriptorFileDescriptor(TNode<WasmMemoryMapDescriptor> p_o, TNode<Int32T> p_v) {
return StoreWasmMemoryMapDescriptorFileDescriptor_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=253&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryMapDescriptorOffset(TNode<WasmMemoryMapDescriptor> p_o) {
return LoadWasmMemoryMapDescriptorOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=253&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryMapDescriptorOffset(TNode<WasmMemoryMapDescriptor> p_o, TNode<Uint32T> p_v) {
return StoreWasmMemoryMapDescriptorOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=254&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryMapDescriptorSize(TNode<WasmMemoryMapDescriptor> p_o) {
return LoadWasmMemoryMapDescriptorSize_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=254&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryMapDescriptorSize(TNode<WasmMemoryMapDescriptor> p_o, TNode<Uint32T> p_v) {
return StoreWasmMemoryMapDescriptorSize_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=255&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryMapDescriptorPadding(TNode<WasmMemoryMapDescriptor> p_o) {
return LoadWasmMemoryMapDescriptorPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=255&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryMapDescriptorPadding(TNode<WasmMemoryMapDescriptor> p_o, TNode<Uint32T> p_v) {
return StoreWasmMemoryMapDescriptorPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=262&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectTrustedData(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectTrustedData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=262&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectTrustedData(TNode<WasmGlobalObject> p_o, TNode<TrustedPointerT> p_v) {
return StoreWasmGlobalObjectTrustedData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=263&c=3
TNode<Union<JSArrayBuffer, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectUntaggedBuffer(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectUntaggedBuffer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=263&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectUntaggedBuffer(TNode<WasmGlobalObject> p_o, TNode<Union<JSArrayBuffer, Undefined>> p_v) {
return StoreWasmGlobalObjectUntaggedBuffer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=264&c=3
TNode<Union<FixedArray, Undefined>> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectTaggedBuffer(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectTaggedBuffer_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=264&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectTaggedBuffer(TNode<WasmGlobalObject> p_o, TNode<Union<FixedArray, Undefined>> p_v) {
return StoreWasmGlobalObjectTaggedBuffer_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=265&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectOffset(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=265&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectOffset(TNode<WasmGlobalObject> p_o, TNode<Smi> p_v) {
return StoreWasmGlobalObjectOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=266&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectRawType(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectRawType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=266&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectRawType(TNode<WasmGlobalObject> p_o, TNode<Smi> p_v) {
return StoreWasmGlobalObjectRawType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=269&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectIsMutable(TNode<WasmGlobalObject> p_o) {
return LoadWasmGlobalObjectIsMutable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=269&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectIsMutable(TNode<WasmGlobalObject> p_o, TNode<Smi> p_v) {
return StoreWasmGlobalObjectIsMutable_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=273&c=3
TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTagObjectSerializedSignature(TNode<WasmTagObject> p_o) {
return LoadWasmTagObjectSerializedSignature_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=273&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTagObjectSerializedSignature(TNode<WasmTagObject> p_o, TNode<ByteArray> p_v) {
return StoreWasmTagObjectSerializedSignature_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=274&c=3
TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmTagObjectTag(TNode<WasmTagObject> p_o) {
return LoadWasmTagObjectTag_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=274&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTagObjectTag(TNode<WasmTagObject> p_o, TNode<HeapObject> p_v) {
return StoreWasmTagObjectTag_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=275&c=3
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmTagObjectCanonicalTypeIndex(TNode<WasmTagObject> p_o) {
return LoadWasmTagObjectCanonicalTypeIndex_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=275&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTagObjectCanonicalTypeIndex(TNode<WasmTagObject> p_o, TNode<Smi> p_v) {
return StoreWasmTagObjectCanonicalTypeIndex_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=276&c=3
TNode<TrustedPointerT> TorqueGeneratedExportedMacrosAssembler::LoadWasmTagObjectTrustedData(TNode<WasmTagObject> p_o) {
return LoadWasmTagObjectTrustedData_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=276&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTagObjectTrustedData(TNode<WasmTagObject> p_o, TNode<TrustedPointerT> p_v) {
return StoreWasmTagObjectTrustedData_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=282&c=3
TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataManagedNativeModule(TNode<AsmWasmData> p_o) {
return LoadAsmWasmDataManagedNativeModule_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=282&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataManagedNativeModule(TNode<AsmWasmData> p_o, TNode<Foreign> p_v) {
return StoreAsmWasmDataManagedNativeModule_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=283&c=3
TNode<HeapNumber> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataUsesBitset(TNode<AsmWasmData> p_o) {
return LoadAsmWasmDataUsesBitset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=283&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataUsesBitset(TNode<AsmWasmData> p_o, TNode<HeapNumber> p_v) {
return StoreAsmWasmDataUsesBitset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=287&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmTypeInfoCanonicalType(TNode<WasmTypeInfo> p_o) {
return LoadWasmTypeInfoCanonicalType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=287&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTypeInfoCanonicalType(TNode<WasmTypeInfo> p_o, TNode<Uint32T> p_v) {
return StoreWasmTypeInfoCanonicalType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=288&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmTypeInfoCanonicalElementType(TNode<WasmTypeInfo> p_o) {
return LoadWasmTypeInfoCanonicalElementType_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=288&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTypeInfoCanonicalElementType(TNode<WasmTypeInfo> p_o, TNode<Uint32T> p_v) {
return StoreWasmTypeInfoCanonicalElementType_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=289&c=9
TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmTypeInfoSupertypesLength(TNode<WasmTypeInfo> p_o) {
return LoadWasmTypeInfoSupertypesLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=290&c=3
TorqueStructSlice_Object_MutableReference_Object_0 TorqueGeneratedExportedMacrosAssembler::FieldSliceWasmTypeInfoSupertypes(TNode<WasmTypeInfo> p_o) {
return FieldSliceWasmTypeInfoSupertypes_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=290&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWasmTypeInfoSupertypes(TNode<WasmTypeInfo> p_o, TNode<IntPtrT> p_i) {
return LoadWasmTypeInfoSupertypes_0(state_, p_o, p_i);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=290&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTypeInfoSupertypes(TNode<WasmTypeInfo> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v) {
return StoreWasmTypeInfoSupertypes_0(state_, p_o, p_i, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=302&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmArrayLength(TNode<WasmArray> p_o) {
return LoadWasmArrayLength_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=302&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmArrayLength(TNode<WasmArray> p_o, TNode<Uint32T> p_v) {
return StoreWasmArrayLength_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=304&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmArrayOptionalPadding(TNode<WasmArray> p_o) {
return LoadWasmArrayOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=304&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreWasmArrayOptionalPadding(TNode<WasmArray> p_o, TNode<Uint32T> p_v) {
return StoreWasmArrayOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=309&c=3
TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWasmDescriptorOptionsPrototype(TNode<WasmDescriptorOptions> p_o) {
return LoadWasmDescriptorOptionsPrototype_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=309&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDescriptorOptionsPrototype(TNode<WasmDescriptorOptions> p_o, TNode<Object> p_v) {
return StoreWasmDescriptorOptionsPrototype_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=313&c=3
TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadWasmStringViewIterString(TNode<WasmStringViewIter> p_o) {
return LoadWasmStringViewIterString_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=313&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmStringViewIterString(TNode<WasmStringViewIter> p_o, TNode<String> p_v) {
return StoreWasmStringViewIterString_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=314&c=3
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmStringViewIterOffset(TNode<WasmStringViewIter> p_o) {
return LoadWasmStringViewIterOffset_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=314&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmStringViewIterOffset(TNode<WasmStringViewIter> p_o, TNode<Uint32T> p_v) {
return StoreWasmStringViewIterOffset_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=316&c=28
TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmStringViewIterOptionalPadding(TNode<WasmStringViewIter> p_o) {
return LoadWasmStringViewIterOptionalPadding_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=316&c=28
void TorqueGeneratedExportedMacrosAssembler::StoreWasmStringViewIterOptionalPadding(TNode<WasmStringViewIter> p_o, TNode<Uint32T> p_v) {
return StoreWasmStringViewIterOptionalPadding_0(state_, p_o, p_v);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=326&c=3
TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadWasmSuspendingObjectCallable(TNode<WasmSuspendingObject> p_o) {
return LoadWasmSuspendingObjectCallable_0(state_, p_o);}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=326&c=3
void TorqueGeneratedExportedMacrosAssembler::StoreWasmSuspendingObjectCallable(TNode<WasmSuspendingObject> p_o, TNode<JSReceiver> p_v) {
return StoreWasmSuspendingObjectCallable_0(state_, p_o, p_v);}

}  // namespace internal
}  // namespace v8
