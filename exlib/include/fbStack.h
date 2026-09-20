/*
 *  fbStack.h
 *  Created on: Sep 20, 2026
 *
 *  Copyright (c) 2026 by Leo Hoo
 *  lion@9465.net
 *
 *  Stack ownership model for exlib execution units.
 *
 *  Every execution unit (native thread, fiber, dedicated-service thread) can
 *  describe its stack through a StackDescriptor.  The descriptor is the single
 *  source of truth for:
 *
 *    - guard page layout, so an overflow faults at the overflowing store
 *      instead of silently corrupting the heap,
 *    - per-fiber stack limits, so upper layers (V8, N-API) can synchronize
 *      their own stack checks when they switch execution units,
 *    - diagnostics (stack usage, switch trace, guard hit report).
 *
 *  Fiber stacks on POSIX are carved out of a private mapping:
 *
 *      [ control block ][ guard low ][ usable stack ][ guard high ]
 *
 *  so a downward overflow hits the guard page instead of the control block.
 *  stack_alloc_fiber()/stack_delete_fiber() are implemented per platform
 *  (fb_api_posix.cpp / fb_api_win.cpp); the shared bookkeeping lives in
 *  fbStack.cpp.
 */

#pragma once

#include <stddef.h>
#include <stdint.h>

namespace exlib {

struct StackDescriptor {
    enum class Kind {
        kUnknown = 0,
        // Stack owned by an OS thread, allocated by the OS.
        kNativeThread,
        // Fiber stack carved out of a private mapping with guard pages.
        kFiberMmap,
        // Fiber stack allocated by the OS (Windows fibers keep their own
        // stack with an OS guard page).
        kFiberWin32,
        // Fiber stack allocated as a single malloc block (legacy layout).
        kFiberMallocLegacy,
        // The ucontext wrapper of a unit that keeps using the stack it was
        // already running on (Service::main, converted native threads).
        kBorrowedNativeStack
    };

    // Lowest address of the writable stack area (the stack grows down to it).
    uintptr_t stack_base = 0;
    // Address below which the stack must not grow (== stack_base; kept as its
    // own field for upper layers that want a single "limit" value).
    uintptr_t stack_limit = 0;
    // Highest address of the writable stack area (one past the top): the
    // address the unit starts running at.
    uintptr_t stack_start = 0;
    // Whole reserved range, including control block and guard pages.
    size_t reserved_size = 0;
    // Writable stack bytes between the guard pages.
    size_t usable_size = 0;
    // Guard (PROT_NONE / PAGE_NOACCESS) bytes below and above the stack.
    size_t guard_low_size = 0;
    size_t guard_high_size = 0;
    Kind kind = Kind::kUnknown;
    // Process-unique id of the owning execution unit.
    uint64_t stack_id = 0;
    // Debug label, borrowed (fiber name / thread name): must outlive the stack.
    const char* debug_name = nullptr;
    // Where the context/control block of the unit lives (outside the stack).
    void* control_block = nullptr;

    bool valid() const
    {
        return stack_base != 0 && usable_size != 0;
    }

    bool contains(uintptr_t addr) const
    {
        return valid() && addr >= stack_base && addr < stack_base + usable_size;
    }

    bool in_guard(uintptr_t addr) const
    {
        if (!valid())
            return false;
        if (guard_low_size && addr >= stack_base - guard_low_size && addr < stack_base)
            return true;
        return guard_high_size
            && addr >= stack_base + usable_size
            && addr < stack_base + usable_size + guard_high_size;
    }
};

// ---- layout of a carved stack ------------------------------------------
struct StackLayout {
    size_t control_size;    // page rounded, at the start of the mapping
    size_t guard_low_size;  // page rounded
    size_t stack_size;      // page rounded usable stack
    size_t guard_high_size; // page rounded
    size_t total_size;      // whole mapping
};

// Compute the layout for a fiber stack of `stacksize` usable bytes whose
// control block needs `control_bytes`.  Honors EXLIB_STACK_GUARD.
bool stack_layout_for(size_t stacksize, size_t control_bytes, StackLayout& out);

// ---- shared bookkeeping ------------------------------------------------
// Initialize the control block at `base` (page aligned, writable), place the
// context handle after it, register the stack and fill desc.
void* stack_carve_init(void* base, const StackLayout& layout, size_t ctx_bytes,
    const char* name, StackDescriptor::Kind kind, StackDescriptor& desc);

// Release a stack created by stack_carve_init(); returns false when ctx was not
// carved (caller falls back to free()).
bool stack_carve_delete(void* ctx);

// Descriptor of a carved fiber context, or NULL.
const StackDescriptor* stack_desc_of(void* ctx);

// Address of the mapping that holds the given context (for munmap).
void* stack_carve_mapping(void* ctx);

// ---- platform helpers --------------------------------------------------
size_t stack_page_size();
size_t stack_guard_size();      // EXLIB_STACK_GUARD, default one page
bool stack_use_legacy_malloc(); // EXLIB_STACK_ALLOC=malloc
uintptr_t stack_pointer_now();  // stack pointer of the calling frame
bool stack_query_native(StackDescriptor& desc); // native stack of this thread
void stack_register(const StackDescriptor& desc);
void stack_unregister(void* control_block);
uint64_t stack_next_id();

// Release a fiber context: carved stacks are unmapped, everything else is a
// plain allocation (legacy malloc layout, converted native values).
void stack_delete_fiber(void* ctx);

// ---- registry queries (diagnostics only) -------------------------------
bool stack_lookup(uintptr_t addr, StackDescriptor& out);
bool stack_describe(uintptr_t addr, char* buf, size_t len);

// ---- fiber switch trace (debug facility) -------------------------------
// Enabled with EXLIB_STACK_TRACE=1.
struct StackTraceEntry {
    uint64_t seq;
    uint64_t stack_id;
    uintptr_t sp;
    uint64_t ts_us;
    const char* name;
};

size_t stack_trace_capacity();
size_t stack_trace_snapshot(StackTraceEntry* out, size_t max);
void stack_trace_record(uint64_t stack_id, uintptr_t sp, const char* name);

// ---- guard hit reporting -----------------------------------------------
// With EXLIB_STACK_GUARD_REPORT=1 a SIGSEGV/SIGBUS handler is installed that
// reports which stack/guard was hit and re-raises the signal.
bool stack_guard_report_enabled();
void stack_install_guard_reporter();

} // namespace exlib
