#include <windows.h>

#ifndef DLFCN_WIN_H
#define DLFCN_WIN_H

#define RTLD_LOCAL 0
#define RTLD_LAZY 0x1
#define RTLD_FIRST 0x100

#ifdef __cplusplus
extern "C" {
#endif

inline void* dlopen(const char* file, int mode)
{
    wchar_t* p = NULL;
    int nbr;
    void* handle = NULL;

    if (file) {
        nbr = MultiByteToWideChar(CP_THREAD_ACP, 0, file, -1, NULL, 0);
        if (nbr == 0)
            return NULL;

        p = (wchar_t*)malloc(nbr * sizeof(*p));
        MultiByteToWideChar(CP_THREAD_ACP, 0, file, -1, p, nbr);
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
    static char error_buffer[256];

    DWORD msglen = FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
        NULL, GetLastError(), 0, error_buffer, sizeof(error_buffer), NULL);
    if (msglen == 0)
        return "unknown error";
    else
        return error_buffer;
}

#ifdef __cplusplus
}
#endif

#endif