# Update v8

### get source
```
git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
depot_tools/fetch v8 
```
### checkout
```
git checkout $tag
gclient sync
```

### generate args.gn
```
fibjs mk_gen.js
```

### copy gen to gen/64|32
```
├── builtins-generated
├── include
├── src
│   └── regexp
└── torque-generated
```

### patch code
#### include/v8config.h
```cpp
#define V8_NODISCARD
```
#### src/common/segmented-table-inl.h
```cpp
typename SegmentedTable<Entry, size>::FreelistHead
```
#### src/base/contextual.h
```cpp
return Base::HasScope() ? Base::Get() : default_value_.get();
```
#### src/base/compiler-specific.h
```cpp
// #ifdef __cpp_concepts
// #define HAS_CPP_CONCEPTS 1
// #define CONCEPT(name) name
// #else
#define CONCEPT(name) typename
// #endif
```
#### src/compiler/turboshaft/assembler.h
```cpp
typename xxx;
```
#### src/wasm/std-object-sizes.h
```cpp
defined(V8_TARGET_OS_LINUX)
```
#### src/wasm/baseline/x64/liftoff-assembler-x64-inl.h
```cpp
// #ifdef __clang__
//   static_assert(std::find(std::begin(wasm::kGpParamRegisters),
//                           std::end(wasm::kGpParamRegisters),
//                           kLiftoffFrameSetupFunctionReg) ==
//                 std::end(wasm::kGpParamRegisters));
// #endif
```
#### src/wasm/baseline/ia32/liftoff-assembler-ia32-inl.h
```cpp
// #ifdef __clang__
//   static_assert(std::find(std::begin(wasm::kGpParamRegisters),
//                           std::end(wasm::kGpParamRegisters),
//                           kLiftoffFrameSetupFunctionReg) ==
//                 std::end(wasm::kGpParamRegisters));
// #endif
```
#### src/compiler/pipeline.cc
```cpp
// if (!turboshaft_pipeline.CreateGraphWithMaglev()) {
    return AbortOptimization(BailoutReason::kGraphBuildingFailed);
// }
```
#### src/compiler/turboshaft/wasm-revec-reducer.h
```cpp
template TryCast<LoadOp>();
```
#### src/objects/tagged-field.h
```cpp
  using FlexibleDataReturnType = Type[0];                     \
  FlexibleDataReturnType& name() {                            \
    using ReturnType = Type[0];                               \
    return reinterpret_cast<ReturnType&>(*(this + 1));        \
  }                                                           \
  const FlexibleDataReturnType& name() const {                \
    using ReturnType = Type[0];                               \
    return reinterpret_cast<const ReturnType&>(*(this + 1));  \
  }                                                           \
  using FlexibleDataType = Type
```
#### src/base/platform/platform-win32.cc
```cpp
bool OS::IsHardwareEnforcedShadowStacksEnabled() {
  // static bool cet_enabled = UserShadowStackEnabled();
  return false;
}
```
#### src/snapshot/embedded/platform-embedded-file-writer-win.cc
```cpp
// #if defined(_MSC_VER) && !defined(__clang__)
#define V8_COMPILER_IS_MSVC
// #endif
```