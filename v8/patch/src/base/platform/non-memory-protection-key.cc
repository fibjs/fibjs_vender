#include "src/base/build_config.h"

#if V8_HAS_PKU_JIT_WRITE_PROTECT
#undef V8_HAS_PKU_JIT_WRITE_PROTECT
#define V8_HAS_PKU_JIT_WRITE_PROTECT 0
#endif

#include "src/base/platform/memory-protection-key.cc"
