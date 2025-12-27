/*
 * ex_assert.cpp
 *
 *  Created on: Dec 27, 2025
 *      Author: lion
 *
 *  Stack trace implementation for ex_assert
 */

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <windows.h>
#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")
#else
#include <execinfo.h>
#include <cxxabi.h>
#endif

extern "C" void ex_print_stack_trace()
{
#ifdef _WIN32
    // Windows implementation using DbgHelp
    void* stack[64];
    HANDLE process = GetCurrentProcess();

    SymInitialize(process, NULL, TRUE);
    WORD frames = CaptureStackBackTrace(1, 64, stack, NULL);

    SYMBOL_INFO* symbol = (SYMBOL_INFO*)calloc(sizeof(SYMBOL_INFO) + 256 * sizeof(char), 1);
    symbol->MaxNameLen = 255;
    symbol->SizeOfStruct = sizeof(SYMBOL_INFO);

    IMAGEHLP_LINE64 line;
    line.SizeOfStruct = sizeof(IMAGEHLP_LINE64);
    DWORD displacement;

    for (WORD i = 0; i < frames; i++) {
        SymFromAddr(process, (DWORD64)(stack[i]), 0, symbol);
        if (SymGetLineFromAddr64(process, (DWORD64)(stack[i]), &displacement, &line)) {
            fprintf(stderr, "  #%d %s at %s:%lu\n", i, symbol->Name, line.FileName, line.LineNumber);
        } else {
            fprintf(stderr, "  #%d %s [0x%llx]\n", i, symbol->Name, (unsigned long long)symbol->Address);
        }
    }

    free(symbol);
    SymCleanup(process);
#else
    // POSIX implementation using execinfo
    void* stack[64];
    int frames = backtrace(stack, 64);
    char** symbols = backtrace_symbols(stack, frames);

    if (symbols) {
        for (int i = 1; i < frames; i++) {
            // Try to demangle C++ symbols
            char* mangled_start = nullptr;
            char* mangled_end = nullptr;

            // Find the mangled name in the symbol string
            for (char* p = symbols[i]; *p; ++p) {
                if (*p == '(') {
                    mangled_start = p + 1;
                } else if (*p == '+' && mangled_start) {
                    mangled_end = p;
                    break;
                }
            }

            if (mangled_start && mangled_end && mangled_start < mangled_end) {
                *mangled_end = '\0';
                int status = 0;
                char* demangled = abi::__cxa_demangle(mangled_start, nullptr, nullptr, &status);
                *mangled_end = '+';

                if (status == 0 && demangled) {
                    // Print with demangled name
                    fprintf(stderr, "  #%d %s\n", i - 1, demangled);
                    free(demangled);
                } else {
                    fprintf(stderr, "  #%d %s\n", i - 1, symbols[i]);
                }
            } else {
                fprintf(stderr, "  #%d %s\n", i - 1, symbols[i]);
            }
        }
        free(symbols);
    }
#endif
}
