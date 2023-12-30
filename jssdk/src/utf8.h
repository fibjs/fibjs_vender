/***************************************************************************
 *   Copyright (C) 2012 by Leo Hoo                                         *
 *   lion@9465.net                                                         *
 *                                                                         *
 ***************************************************************************/

#ifndef _utf_8_H_
#define _utf_8_H_

/**
 @author Leo Hoo <lion@9465.net>
 */

#include <exlib/include/qstring.h>

namespace js {

int32_t utf8_mbstowcs(const char* src, int32_t srclen, char16_t* dst, int32_t dstlen);
int32_t utf8_wcstombs(const char16_t* src, int32_t srclen, char* dst, int32_t dstlen);
int32_t utf8_getchar(const char*& src, const char* end);
int32_t utf8_putchar(int32_t ch, char*& dst, const char* end);
int32_t utf16_getchar(const char16_t*& src, const char16_t* end);
int32_t utf16_putchar(int32_t ch, char16_t*& dst, const char16_t* end);

inline int32_t utf8_strlen(const char* src, int32_t srclen)
{
    if (srclen == -1)
        srclen = (int32_t)exlib::qstrlen(src);

    return utf8_mbstowcs(src, srclen, NULL, 0);
}

inline int32_t utf8_strlen(const char16_t* src, int32_t srclen)
{
    if (srclen == -1)
        srclen = (int32_t)exlib::qstrlen(src);

    return utf8_wcstombs(src, srclen, NULL, 0);
}

inline exlib::wstring utf8to16String(const char* src, int32_t srclen = -1)
{
    exlib::wstring str;

    if (srclen == -1)
        srclen = (int32_t)exlib::qstrlen(src);

    if (srclen) {
        int32_t n = utf8_mbstowcs(src, srclen, NULL, 0);
        str.resize(n);

        utf8_mbstowcs(src, srclen, str.data(), n);
    }

    return str;
}

inline exlib::wstring utf8to16String(exlib::string src)
{
    return utf8to16String(src.c_str(), (int32_t)src.length());
}

#define UTF8_W(s) utf8to16String(s).c_str()

inline exlib::string utf16to8String(const char16_t* src, int32_t srclen = -1)
{
    exlib::string str;

    if (srclen == -1)
        srclen = (int32_t)exlib::qstrlen(src);

    if (srclen) {
        int32_t n = utf8_wcstombs(src, srclen, NULL, 0);
        str.resize(n);

        utf8_wcstombs(src, srclen, str.data(), n);
    }

    return str;
}

inline exlib::string utf16to8String(exlib::wstring src)
{
    return utf16to8String(src.c_str(), (int32_t)src.length());
}

#define UTF8_A(s) utf16to8String(s).c_str()
}

#endif
