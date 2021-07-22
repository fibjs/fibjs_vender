/*
 *  dl_func.h
 *  Created on: May 8, 2021
 *
 *  lion@9465.net
 */

#pragma once

#include <stdlib.h>
#include <stdio.h>

#ifndef _WIN32
#include <dlfcn.h>
#else
#include <windows.h>

#define RTLD_LOCAL 0
#define RTLD_LAZY 0x1
#define RTLD_FIRST 0x100

inline void* dlopen(const char* file, int mode)
{
    wchar_t* p = NULL;
    int nbr;
    void* handle = NULL;

    if (file) {
        nbr = MultiByteToWideChar(CP_UTF8, 0, file, -1, NULL, 0);
        if (nbr == 0)
            return NULL;

        p = (wchar_t*)malloc(nbr * sizeof(*p));
        MultiByteToWideChar(CP_UTF8, 0, file, -1, p, nbr);
    }

    HMODULE m = LoadLibraryW(p);

    if (p)
        free(p);

    return (void*)m;
}

inline int dlclose(void* handle)
{
    return FreeLibrary((HMODULE)handle) ? 0 : -1;
}

inline void* dlsym(void* handle, const char* name)
{
    return (void*)GetProcAddress((HMODULE)handle, name);
}

inline char* dlerror(void)
{
    static char error_buffer_a[256];

    DWORD msglen = FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
        NULL, GetLastError(), 0, error_buffer_a, sizeof(error_buffer_a), NULL);
    if (msglen == 0)
        return "unknown error";
    return error_buffer_a;
}
#endif

namespace exlib {

template <typename T>
T dl_func(void*& handle, const char* dl_name, const char* func_name, T func)
{
    if (!handle) {
        handle = dlopen(dl_name, RTLD_LAZY);
        if (!handle) {
            fputs(dlerror(), stderr);
            exit(1);
        }
    }

    T func1 = (T)::dlsym(handle, func_name);
    if (!func1) {
        fputs(dlerror(), stderr);
        exit(1);
    }

    return func1;
}
}

#define dl_def_func(so, so_name, func) static auto s_##func = exlib::dl_func(so, so_name, #func, func)
