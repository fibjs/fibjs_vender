#include "osconfig.h"

#if defined(_MSC_VER) && defined(i386)

extern "C" void fb_switch();

void __declspec(naked) fb_switch()
{
    __asm
    {
        mov eax, [esp + 4]
        mov [eax], ebp
        mov [eax + 004h], ebx
        mov [eax + 008h], ecx
        mov [eax + 00ch], edx
        mov [eax + 010h], esi
        mov [eax + 014h], edi

        mov [eax + 018h], esp

        mov eax, [esp + 08h]
        mov ebp, [eax]
        mov ebx, [eax + 004h]
        mov ecx, [eax + 008h]
        mov edx, [eax + 00ch]
        mov esi, [eax + 010h]
        mov edi, [eax + 014h]
        mov esp, [eax + 018h]
        ret
    }
}

#endif
