/*
 * ex_assert.h
 *
 *  Created on: Dec 27, 2025
 *      Author: lion
 *
 *  Custom assertion macros with stack trace output
 */

#pragma once

#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

// Print native C/C++ stack trace (implemented in ex_assert.cpp)
void ex_print_stack_trace();

#ifdef __cplusplus
}
#endif

// Assert with stack trace - debug only
#ifndef NDEBUG
#define ex_assert(condition)                                                          \
    do {                                                                              \
        if (!(condition)) {                                                           \
            fprintf(stderr, "\n");                                                    \
            fprintf(stderr, "================================================================================\n"); \
            fprintf(stderr, "!!! ASSERTION FAILED !!!\n");                            \
            fprintf(stderr, "  Condition: %s\n", #condition);                         \
            fprintf(stderr, "  Location:  %s:%d\n", __FILE__, __LINE__);              \
            fprintf(stderr, "  Function:  %s\n", __FUNCTION__);                       \
            fprintf(stderr, "--------------------------------------------------------------------------------\n"); \
            fprintf(stderr, "Native Stack Trace:\n");                                 \
            ex_print_stack_trace();                                                   \
            fprintf(stderr, "================================================================================\n"); \
            fprintf(stderr, "\n");                                                    \
            fflush(stderr);                                                           \
            abort();                                                                  \
        }                                                                             \
    } while (0)
#else
#define ex_assert(condition) ((void)0)
#endif
