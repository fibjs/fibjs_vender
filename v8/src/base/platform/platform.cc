#include <exlib/include/fbTls.h>
// Copyright 2023 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#include "src/base/platform/platform.h"

namespace v8 {

namespace base {

namespace {

// A pointer to current thread's stack beginning.
exlib::fiber_local<void*> thread_stack_start;

}  // namespace

// static
Stack::StackSlot Stack::GetStackStart() {
  DCHECK_IMPLIES(thread_stack_start,
                 thread_stack_start == ObtainCurrentThreadStackStart());

  if (!thread_stack_start) {
    thread_stack_start = ObtainCurrentThreadStackStart();
  }
  return thread_stack_start.get();
}

}  // namespace base
}  // namespace v8
