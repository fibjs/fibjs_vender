/*
 *  fbStack.cpp
 *  Created on: Sep 20, 2026
 *
 *  Copyright (c) 2026 by Leo Hoo
 *  lion@9465.net
 *
 *  Shared stack bookkeeping for exlib: layout, control block, registry,
 *  diagnostics (switch trace, guard hit report) and native stack query.
 *
 *  The per-platform allocation itself lives in fb_api_posix.cpp /
 *  fb_api_win.cpp; everything here is platform neutral apart from the few
 *  #ifdef'ed system queries.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _WIN32
#include <pthread.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>
#include <sys/mman.h>
#else
#include <windows.h>
#endif

#include <vector>

#include "osconfig.h"
#include "utils.h"
#include "fiber.h"
#include "fbStack.h"

namespace exlib {

// Control block stored at the start of a carved mapping, inside its own page so
// that neither an overflow of the stack below nor the context handle after it
// can reach it by accident.
#define EXLIB_STACK_MAGIC 0x53544258u /* 'STBX' */

struct StackControlBlock {
    uint32_t magic;
    uint32_t reserved;
    size_t mapping_size;
    StackDescriptor desc;
};

// The context handle is placed this far into the control page.  Kept small and
// well inside the first page so page_align_down(ctx) is always the mapping base.
#define EXLIB_STACK_CTX_OFFSET 256

static size_t s_page_size = 0;
static int s_guard_override = -1;
static int s_legacy_malloc = -1;
static int s_trace_enabled = -1;
static int s_guard_report = -1;

size_t stack_page_size()
{
    if (s_page_size == 0) {
#ifndef _WIN32
        long ps = sysconf(_SC_PAGESIZE);
        s_page_size = ps > 0 ? (size_t)ps : 4096;
#else
        SYSTEM_INFO si;
        GetSystemInfo(&si);
        s_page_size = si.dwPageSize ? si.dwPageSize : 4096;
#endif
    }

    return s_page_size;
}

size_t stack_guard_size()
{
    if (s_guard_override < 0) {
        const char* v = ::getenv("EXLIB_STACK_GUARD");
        s_guard_override = (v && *v) ? atoi(v) : 0;
    }

    // 0 or an unset variable means "one page"; the exact value is rounded up to
    // the page size by stack_layout_for().
    return s_guard_override > 0 ? (size_t)s_guard_override : stack_page_size();
}

bool stack_use_legacy_malloc()
{
    if (s_legacy_malloc < 0) {
        const char* v = ::getenv("EXLIB_STACK_ALLOC");
        s_legacy_malloc = (v && !strcmp(v, "malloc")) ? 1 : 0;
    }

    return s_legacy_malloc == 1;
}

uintptr_t stack_pointer_now()
{
#if defined(_MSC_VER) && !defined(__clang__)
    return (uintptr_t)_AddressOfReturnAddress();
#else
    return (uintptr_t)__builtin_frame_address(0);
#endif
}

static inline size_t page_align_up(size_t v)
{
    size_t ps = stack_page_size();
    return (v + ps - 1) & ~(ps - 1);
}

static inline uintptr_t page_align_down(uintptr_t v)
{
    size_t ps = stack_page_size();
    return v & ~(uintptr_t)(ps - 1);
}

bool stack_layout_for(size_t stacksize, size_t control_bytes, StackLayout& out)
{
    size_t ps = stack_page_size();

    if (stacksize < ps * 2)
        stacksize = ps * 2;

    size_t guard = stack_guard_size();

    // The control block sits at the start of the mapping and the context handle
    // right after it, both starting inside the first control page: this keeps
    // page_align_down(ctx) == mapping base, so stack_desc_of(ctx) is O(1).
    // Only the *start* of the handle has to be in that first page.  The handle
    // itself can be larger than a page - aarch64 keeps a 4 KB reserved block for
    // the FP/SIMD state inside its sigcontext - and that must not cost the
    // target its guard pages, so the control area is sized after the handle
    // instead of being a single page.
    if (EXLIB_STACK_CTX_OFFSET + sizeof(StackControlBlock) > ps)
        return false;

    out.control_size = page_align_up(EXLIB_STACK_CTX_OFFSET + control_bytes);
    out.guard_low_size = guard;
    out.stack_size = page_align_up(stacksize);
    out.guard_high_size = guard;
    out.total_size = out.control_size + out.guard_low_size + out.stack_size + out.guard_high_size;

    return true;
}

// ---- registry ----------------------------------------------------------

struct StackRegistry {
    std::vector<StackDescriptor> stacks;
    spinlock lock;
    size_t dropped = 0;
    size_t high_water = 0;
};

static StackRegistry s_registry;
static atomic s_next_stack_id;

uint64_t stack_next_id()
{
    return (uint64_t)s_next_stack_id.inc();
}

void stack_delete_fiber(void* ctx)
{
    if (!ctx)
        return;

    if (stack_carve_delete(ctx))
        return;

    free(ctx);
}

void stack_register(const StackDescriptor& desc)
{
    s_registry.lock.lock();
    if (s_registry.stacks.size() < 65536)
        s_registry.stacks.push_back(desc);
    else
        s_registry.dropped++;
    if (s_registry.stacks.size() > s_registry.high_water)
        s_registry.high_water = s_registry.stacks.size();
    s_registry.lock.unlock();
}

void stack_unregister(void* control_block)
{
    s_registry.lock.lock();
    for (size_t i = 0; i < s_registry.stacks.size(); i++) {
        if (s_registry.stacks[i].control_block == control_block) {
            s_registry.stacks[i] = s_registry.stacks.back();
            s_registry.stacks.pop_back();
            break;
        }
    }
    s_registry.lock.unlock();
}

bool stack_lookup(uintptr_t addr, StackDescriptor& out)
{
    bool found = false;
    size_t n;

    s_registry.lock.lock();
    n = s_registry.stacks.size();
    s_registry.lock.unlock();

    // Copy candidates first: lookups may be called from diagnostics while other
    // fibers register/unregister.
    std::vector<StackDescriptor> copy;
    copy.reserve(n);
    s_registry.lock.lock();
    copy = s_registry.stacks;
    s_registry.lock.unlock();

    for (size_t i = 0; i < copy.size(); i++) {
        if (copy[i].in_guard(addr) || copy[i].contains(addr)) {
            out = copy[i];
            found = true;
            break;
        }
    }

    return found;
}

bool stack_describe(uintptr_t addr, char* buf, size_t len)
{
    StackDescriptor desc;

    if (!stack_lookup(addr, desc))
        return false;

    const char* where = desc.in_guard(addr) ? "GUARD" : "stack";

    snprintf(buf, len,
        "%s of %s stack %llu [base=%p limit=%p start=%p usable=%zuKB guard=%zuKB/%zuKB id=%llu]",
        where,
        desc.kind == StackDescriptor::Kind::kFiberMmap      ? "fiber"
            : desc.kind == StackDescriptor::Kind::kFiberWin32 ? "fiber(win32)"
            : desc.kind == StackDescriptor::Kind::kFiberMallocLegacy ? "fiber(legacy)"
                                                                     : "native",
        (unsigned long long)desc.stack_id,
        (void*)desc.stack_base, (void*)desc.stack_limit, (void*)desc.stack_start,
        desc.usable_size / 1024, desc.guard_low_size / 1024, desc.guard_high_size / 1024,
        (unsigned long long)desc.stack_id);

    return true;
}

// ---- control block / carve --------------------------------------------

void* stack_carve_init(void* base, const StackLayout& layout, size_t ctx_bytes,
    const char* name, StackDescriptor::Kind kind, StackDescriptor& desc)
{
    if (!base || layout.control_size < sizeof(StackControlBlock) + EXLIB_STACK_CTX_OFFSET)
        return NULL;

    StackControlBlock* ctrl = (StackControlBlock*)base;
    uintptr_t stack_base = (uintptr_t)base + layout.control_size + layout.guard_low_size;

    memset(ctrl, 0, sizeof(*ctrl));
    ctrl->magic = EXLIB_STACK_MAGIC;
    ctrl->mapping_size = layout.total_size;

    desc.stack_base = stack_base;
    desc.stack_limit = stack_base;
    desc.stack_start = stack_base + layout.stack_size;
    desc.reserved_size = layout.total_size;
    desc.usable_size = layout.stack_size;
    desc.guard_low_size = layout.guard_low_size;
    desc.guard_high_size = layout.guard_high_size;
    desc.kind = kind;
    desc.stack_id = stack_next_id();
    desc.debug_name = name;
    desc.control_block = ctrl;

    ctrl->desc = desc;

    stack_register(desc);

    if (stack_trace_capacity())
        stack_trace_record(desc.stack_id, desc.stack_start, name);

    return (char*)base + EXLIB_STACK_CTX_OFFSET;
}

static StackControlBlock* control_of(void* ctx)
{
    if (!ctx)
        return NULL;

    uintptr_t page = page_align_down((uintptr_t)ctx);
    StackControlBlock* ctrl = (StackControlBlock*)page;

    if (ctrl->magic != EXLIB_STACK_MAGIC)
        return NULL;

    // The context handle must live in the control page itself.
    if ((uintptr_t)ctx >= page + ctrl->mapping_size)
        return NULL;

    return ctrl;
}

const StackDescriptor* stack_desc_of(void* ctx)
{
    StackControlBlock* ctrl = control_of(ctx);

    return ctrl ? &ctrl->desc : NULL;
}

void* stack_carve_mapping(void* ctx)
{
    return control_of(ctx);
}

bool stack_carve_delete(void* ctx)
{
    StackControlBlock* ctrl = control_of(ctx);

    if (!ctrl)
        return false;

#ifndef _WIN32
    void* base = ctrl;
    size_t size = ctrl->mapping_size;

    stack_unregister(ctrl);
    ctrl->magic = 0;
    munmap(base, size);
#else
    stack_unregister(ctrl);
    ctrl->magic = 0;
#endif

    return true;
}

// ---- native stack query ------------------------------------------------

bool stack_query_native(StackDescriptor& desc)
{
#if defined(_WIN32)
    ULONG_PTR low = 0, high = 0;
#if _WIN32_WINNT >= 0x0602
    GetCurrentThreadStackLimits(&low, &high);
#endif
    if (low == 0 || high == 0)
        return false;

    desc.stack_base = (uintptr_t)low;
    desc.stack_limit = (uintptr_t)low;
    desc.stack_start = (uintptr_t)high;
    desc.usable_size = (size_t)(high - low);
    desc.reserved_size = desc.usable_size;
    desc.kind = StackDescriptor::Kind::kNativeThread;
#elif defined(__APPLE__)
    pthread_t self = pthread_self();

    desc.stack_start = (uintptr_t)pthread_get_stackaddr_np(self);
    desc.usable_size = (size_t)pthread_get_stacksize_np(self);
    desc.stack_base = desc.stack_start - desc.usable_size;
    desc.stack_limit = desc.stack_base;
    desc.reserved_size = desc.usable_size;
    desc.kind = StackDescriptor::Kind::kNativeThread;
#else
    pthread_attr_t attr;
    void* addr = NULL;
    size_t size = 0;

    if (pthread_getattr_np(pthread_self(), &attr) != 0)
        return false;

    int rc = pthread_attr_getstack(&attr, &addr, &size);
    pthread_attr_destroy(&attr);

    if (rc != 0 || !addr || size == 0)
        return false;

    desc.stack_base = (uintptr_t)addr;
    desc.stack_limit = desc.stack_base;
    desc.stack_start = desc.stack_base + size;
    desc.usable_size = size;
    desc.reserved_size = size;
    desc.kind = StackDescriptor::Kind::kNativeThread;
#endif

    desc.stack_id = stack_next_id();
    return true;
}

// ---- switch trace ------------------------------------------------------

static StackTraceEntry* s_trace_buf = NULL;
static size_t s_trace_cap = 0;
static atomic s_trace_seq;
static atomic s_trace_pos;

size_t stack_trace_capacity()
{
    if (s_trace_enabled < 0) {
        const char* v = ::getenv("EXLIB_STACK_TRACE");
        s_trace_enabled = (v && *v && *v != '0') ? 1 : 0;

        if (s_trace_enabled) {
            const char* n = ::getenv("EXLIB_STACK_TRACE_SIZE");
            size_t cap = (n && *n) ? (size_t)atoi(n) : 4096;

            if (cap < 64)
                cap = 64;

            s_trace_buf = (StackTraceEntry*)calloc(cap, sizeof(StackTraceEntry));
            s_trace_cap = s_trace_buf ? cap : 0;
        }
    }

    return s_trace_cap;
}

void stack_trace_record(uint64_t stack_id, uintptr_t sp, const char* name)
{
    if (!stack_trace_capacity())
        return;

    size_t slot = (size_t)(s_trace_pos.inc() - 1) % s_trace_cap;
    StackTraceEntry* e = &s_trace_buf[slot];

    e->seq = (uint64_t)s_trace_seq.inc();

    uint64_t ts;
#ifndef _WIN32
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);
    ts = (uint64_t)now.tv_sec * 1000000 + (uint64_t)now.tv_nsec / 1000;
#else
    ts = (uint64_t)GetTickCount64() * 1000;
#endif

    e->stack_id = stack_id;
    e->sp = sp;
    e->ts_us = ts;
    e->name = name;
}

size_t stack_trace_snapshot(StackTraceEntry* out, size_t max)
{
    if (!stack_trace_capacity() || !out)
        return 0;

    size_t n = 0;
    size_t pos = (size_t)s_trace_pos.value();

    if (pos > s_trace_cap)
        pos = s_trace_cap;

    for (size_t i = 0; i < pos && n < max; i++) {
        size_t slot = (pos - 1 - i) % s_trace_cap;
        out[n++] = s_trace_buf[slot];
    }

    return n;
}

// ---- guard hit report --------------------------------------------------

bool stack_guard_report_enabled()
{
    if (s_guard_report < 0) {
        const char* v = ::getenv("EXLIB_STACK_GUARD_REPORT");
        s_guard_report = (v && *v && *v != '0') ? 1 : 0;
    }

    return s_guard_report == 1;
}

#ifndef _WIN32
static void guard_report_handler(int sig, siginfo_t* si, void* uc)
{
    char buf[512];
    int len;
    uintptr_t addr = si ? (uintptr_t)si->si_addr : 0;

    len = snprintf(buf, sizeof buf, "\n[exlib] stack guard hit: signal %d addr=%p\n",
        sig, (void*)addr);
    if (len > 0)
        write(2, buf, len);

    // Signal handler: only touch state that needs no lock.  The unit that was
    // running when the guard was hit is the overflow victim in almost every
    // case, and its descriptor is reached through a fiber local.
    Thread_base* current = Thread_base::current();
    const StackDescriptor* desc = current ? &current->stack_desc() : NULL;

    if (desc && desc->valid()) {
        len = snprintf(buf, sizeof buf,
            "[exlib]   %s of stack %llu (name=%s) base=%p start=%p usable=%zuKB guard=%zuKB/%zuKB\n",
            desc->in_guard(addr) ? "GUARD" : (desc->contains(addr) ? "stack" : "other"),
            (unsigned long long)desc->stack_id, desc->debug_name ? desc->debug_name : "?",
            (void*)desc->stack_base, (void*)desc->stack_start,
            desc->usable_size / 1024, desc->guard_low_size / 1024, desc->guard_high_size / 1024);
        if (len > 0)
            write(2, buf, len);
    } else {
        len = snprintf(buf, sizeof buf, "[exlib]   no stack descriptor for the faulting unit\n");
        if (len > 0)
            write(2, buf, len);
    }

    signal(sig, SIG_DFL);

    // Last thing before dying: the faulting stack, so the crash site is known
    // even when no debugger is attached (debug facility, best effort).
    ex_print_stack_trace();

    raise(sig);
}
#endif

void stack_install_guard_reporter()
{
    if (!stack_guard_report_enabled())
        return;

#ifndef _WIN32
    struct sigaction sa;

    memset(&sa, 0, sizeof sa);
    sa.sa_sigaction = guard_report_handler;
    sa.sa_flags = SA_SIGINFO | SA_ONSTACK;
    sigemptyset(&sa.sa_mask);

    sigaction(SIGSEGV, &sa, NULL);
    sigaction(SIGBUS, &sa, NULL);
#endif
}

} // namespace exlib
