/*
 *  string.h
 *  Created on: Jul 15, 2016
 *
 *  Copyright (c) 2016 by Leo Hoo
 *  lion@9465.net
 */

#ifndef _ex_qstring_h__
#define _ex_qstring_h__

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "utils.h"

namespace exlib {

template <typename T>
inline size_t qstrlen(const T* pStr)
{
    const T* pEnd;

    for (pEnd = pStr; *pEnd != 0; pEnd++)
        continue;

    return pEnd - pStr;
}

inline size_t qstrlen(const char* pStr)
{
    return strlen(pStr);
}

template <typename T>
inline bool qisupper(T ch)
{
    return ch >= 'A' && ch <= 'Z';
}

template <typename T>
inline bool qislower(T ch)
{
    return ch >= 'a' && ch <= 'z';
}

template <typename T>
inline T qtolower(T c)
{
    if (qisupper(c))
        return c + ('a' - 'A');
    return c;
}

template <typename T>
inline T qtoupper(T c)
{
    if (qislower(c))
        return c + ('A' - 'a');
    return c;
}

template <typename T>
inline void qmemset(T* ptr, T value, size_t num)
{
    while (num--)
        *ptr++ = value;
}

template <typename T>
inline void qmemcpy(T* dest, const T* src, size_t count)
{
    if (dest != src)
        memcpy(dest, src, count * sizeof(T));
}

template <typename T>
inline int32_t qmemcmp(const T* s1, const T* s2, size_t count)
{
    if (s1 == s2)
        return 0;

    int32_t n;

    while (count--) {
        n = *s1++ - *s2++;
        if (n != 0)
            return n;
    }

    return 0;
}

inline void qmemset(char* ptr, char value, size_t num)
{
    memset(ptr, value, num);
}

inline int32_t qmemcmp(const char* s1, const char* s2, size_t count)
{
    if (s1 == s2)
        return 0;

    return memcmp(s1, s2, count);
}

template <typename T>
inline const T* qmemfind(const T* s1, size_t sz1, const T* s2, size_t sz2)
{
    while (sz1 >= sz2) {
        if (qmemcmp(s1, s2, sz2) == 0)
            return s1;
        s1++;
        sz1--;
    }

    return NULL;
}

#define MAX_SMALL 16
#define FLAG_BUF (1LL << (sizeof(size_t) * 8 - 1))
#define SSO_MASK (SIZE_MAX ^ FLAG_BUF)

template <typename T>
class basic_string {
public:
#pragma pack(1)
    class Buffer {
    public:
        static Buffer* New(size_t sz, const T* data = NULL, size_t data_sz = 0)
        {
            size_t blk_size = (sz + 15) & (SIZE_MAX - 15);
            Buffer* _buffer = (Buffer*)malloc(blk_size * sizeof(T) + sizeof(Buffer));

            _buffer->refs_ = 1;
            _buffer->blk_size = blk_size;
            _buffer->m_length = sz;

            data_sz = data_sz > sz ? sz : data_sz;
            qmemcpy(_buffer->m_data, data, data_sz);

            _buffer->m_data[sz] = 0;

            return _buffer;
        }

        void ref()
        {
            refs_.inc();
        }

        void unref()
        {
            if (refs_.dec() == 0)
                free(this);
        }

        bool is_shared()
        {
            return refs_ > 1;
        }

        size_t length()
        {
            return m_length;
        }

        T* data()
        {
            return m_data;
        }

        static Buffer* fromData(T* data)
        {
            Buffer* _buffer = NULL;
            return (Buffer*)((char*)data - (intptr_t)_buffer->m_data);
        }

        Buffer* resize(size_t sz)
        {
            if (is_shared()) {
                Buffer* _buffer = Buffer::New(sz, m_data, m_length);
                unref();
                return _buffer;
            }

            if (sz + 1 > blk_size) {
                size_t new_blk_size = (sz + 15) & (SIZE_MAX - 15);

                Buffer* _buffer = (Buffer*)realloc(this, new_blk_size * sizeof(T) + sizeof(Buffer));

                _buffer->blk_size = new_blk_size;
                _buffer->m_length = sz;
                _buffer->m_data[sz] = 0;

                return _buffer;
            }

            m_length = sz;
            m_data[sz] = 0;

            return this;
        }

    private:
        atomic refs_;
        size_t blk_size;
        size_t m_length;
        T m_data[1];
    };
#pragma pack()

    bool is_sso() const
    {
        return !(m_length & FLAG_BUF);
    }

    void unref()
    {
        if (!is_sso())
            m_buffer->unref();
    }

public:
    basic_string()
        : m_length(0)
        , m_buffer(NULL)
    {
    }

    basic_string(size_t n, T ch)
        : m_length(0)
        , m_buffer(NULL)
    {
        assign(n, ch);
    }

    basic_string(const T* str)
        : m_length(0)
        , m_buffer(NULL)
    {
        assign(str);
    }

    basic_string(const T* str, size_t sz)
        : m_length(0)
        , m_buffer(NULL)
    {
        assign(str, sz);
    }

    basic_string(const std::basic_string<T>& v)
        : m_length(0)
        , m_buffer(NULL)
    {
        assign(v);
    }

    basic_string(Buffer* v)
        : m_length(0)
        , m_buffer(NULL)
    {
        assign(v);
    }

    basic_string(const basic_string<T>& v)
        : m_length(0)
        , m_buffer(NULL)
    {
        assign(v);
    }

    ~basic_string()
    {
        unref();
    }

public:
    static const size_t npos = SIZE_MAX;

public:
    size_t length() const
    {
        return is_sso() ? m_length : m_buffer->length();
    }

    const T* c_str() const
    {
        return is_sso() ? m_small_data : m_buffer->data();
    }

    T* c_buffer()
    {
        if (is_sso())
            return m_small_data;

        if (m_buffer->is_shared()) {
            size_t sz = length();

            if (sz < MAX_SMALL) {
                Buffer* _buffer = m_buffer;
                qmemcpy(m_small_data, _buffer->data(), sz + 1);
                _buffer->unref();

                m_length = sz;

                return m_small_data;
            }

            Buffer* _buffer = Buffer::New(sz, m_buffer->data(), sz);

            m_buffer->unref();
            m_buffer = _buffer;
        }

        return m_buffer->data();
    }

    void resize(size_t sz)
    {
        if (sz == 0) {
            unref();
            m_length = 0;
            m_small_data[0] = 0;
        } else if (sz < MAX_SMALL && is_sso()) {
            m_length = sz;
            m_small_data[sz] = 0;
        } else if (is_sso()) {
            m_buffer = Buffer::New(sz, m_small_data, length());
            m_length = FLAG_BUF;
        } else
            m_buffer = m_buffer->resize(sz);
    }

    bool empty() const
    {
        return length() == 0;
    }

    void clear()
    {
        return resize(0);
    }

    int32_t compare(const basic_string<T>& str) const
    {
        const T* s1 = c_str();
        size_t sz1 = length();
        const T* s2 = str.c_str();
        size_t sz2 = str.length();

        if (s1 == s2)
            return 0;

        size_t sz = sz1 > sz2 ? sz2 : sz1;
        int32_t r = qmemcmp(s1, s2, sz);
        if (r != 0 || sz1 == sz2)
            return r;

        return sz1 > sz2 ? 1 : -1;
    }

    int32_t compare(const T* str) const
    {
        const T* s1 = c_str();
        if (s1 == str)
            return 0;

        size_t sz1 = length();
        size_t sz2 = qstrlen(str);

        size_t sz = sz1 > sz2 ? sz2 : sz1;
        int32_t r = qmemcmp(s1, str, sz);
        if (r != 0 || sz1 == sz2)
            return r;

        return sz1 > sz2 ? 1 : -1;
    }

public:
    basic_string<T>& append(size_t n, T ch)
    {
        if (n > 0) {
            size_t len = length();
            resize(len + n);
            qmemset(c_buffer() + len, ch, n);
        }
        return *this;
    }

    basic_string<T>& append(const T* str, size_t sz)
    {
        if (sz > 0) {
            size_t len = length();
            const T* data = c_str();

            if (str >= data && str < data + len) {
                basic_string<T> temp(data, len);
                temp.append(str, sz);
                *this = temp;
            } else {
                resize(len + sz);
                qmemcpy(c_buffer() + len, str, sz);
            }
        }
        return *this;
    }

public:
    basic_string<T>& assign(size_t n, T ch)
    {
        resize(n);
        qmemset(c_buffer(), ch, n);
        return *this;
    }

    basic_string<T>& assign(const T* str, size_t sz)
    {
        resize(sz);
        qmemcpy(c_buffer(), str, sz);
        return *this;
    }

    basic_string<T>& assign(Buffer* buf)
    {
        unref();
        m_length = FLAG_BUF;
        m_buffer = buf;
        m_buffer->ref();

        return *this;
    }

    basic_string<T>& assign(const basic_string<T>& str)
    {
        if (str.is_sso()) {
            unref();
            m_length = str.m_length;
            qmemcpy(m_small_data, str.m_small_data, m_length + 1);

            return *this;
        }

        return assign(str.m_buffer);
    }

public:
    basic_string<T>& append(const T* str)
    {
        return append(str, qstrlen(str));
    }

    basic_string<T>& append(const std::basic_string<T>& str)
    {
        return append(str.c_str(), str.length());
    }

    basic_string<T>& append(const basic_string<T>& str)
    {
        if (empty())
            return assign(str);

        return append(str.c_str(), str.length());
    }

    basic_string<T>& assign(const T* str)
    {
        return assign(str, qstrlen(str));
    }

    basic_string<T>& assign(const std::basic_string<T>& str)
    {
        return assign(str.c_str(), str.length());
    }

public:
    basic_string<T> substr(size_t pos = 0, size_t len = npos) const
    {
        size_t sz = length();

        if (pos >= sz)
            return basic_string<T>();

        if (len == npos || pos + len > sz)
            len = sz - pos;

        if (len == sz)
            return basic_string<T>(*this);

        return basic_string<T>(c_str() + pos, len);
    }

    size_t find(const T* s, size_t pos, size_t n) const
    {
        const T* s1 = c_str();
        size_t n1 = length();

        if (n > n1 + pos)
            return npos;

        const T* s2 = qmemfind(s1 + pos, n1 - pos, s, n);
        return s2 ? s2 - s1 : npos;
    }

    size_t find(const T* s, size_t pos = 0) const
    {
        return find(s, pos, qstrlen(s));
    }

    size_t find(const basic_string<char>& str, size_t pos = 0) const
    {
        return find(str.c_str(), pos, str.length());
    }

    size_t find(T c, size_t pos = 0) const
    {
        return find(&c, pos, 1);
    }

public:
    void tolower()
    {
        T* buf = c_buffer();
        size_t sz = length();

        while (sz--) {
            *buf = qtolower(*buf);
            buf++;
        }
    }

    void toupper()
    {
        T* buf = c_buffer();
        size_t sz = length();

        while (sz--) {
            *buf = qtoupper(*buf);
            buf++;
        }
    }

public:
    basic_string<char> hex() const
    {
        basic_string<char> retVal;
        static char HexChar[] = "0123456789abcdef";
        size_t i, pos, len1;
        size_t len = length();
        const T* ptr = c_str();

        i = len * (sizeof(T) * 2 + 1);
        retVal.resize(i);
        char* data = retVal.c_buffer();

        len1 = 0;
        pos = 0;

        for (i = 0; i < len; i++) {
            if (sizeof(T) == 2) {
                data[pos] = HexChar[(unsigned char)ptr[i] >> 12];
                data[pos + 1] = HexChar[(unsigned char)(ptr[i] >> 8) & 0xf];
                pos += 2;
                len1 += 2;
            }
            data[pos] = HexChar[(unsigned char)(ptr[i] >> 4) & 0x0f];
            data[pos + 1] = HexChar[(unsigned char)ptr[i] & 0xf];
            pos += 2;
            len1 += 2;

            data[pos++] = ' ';
            len1++;
        }

        return retVal;
    }

public:
    T& operator[](size_t i)
    {
        return c_buffer()[i];
    }

    basic_string<T> operator+=(T ch)
    {
        return append(1, ch);
    }

    basic_string<T> operator+=(const T* rhs)
    {
        return append(rhs);
    }

    basic_string<T> operator+=(const basic_string<T>& rhs)
    {
        return append(rhs);
    }

    basic_string<T>& operator=(const T* str)
    {
        return assign(str);
    }

    basic_string<T>& operator=(Buffer* buf)
    {
        return assign(buf);
    }

    basic_string<T>& operator=(const basic_string<T>& str)
    {
        return assign(str);
    }

private:
    size_t m_length;
    union {
        Buffer* m_buffer;
        T m_small_data[MAX_SMALL];
    };
};

template <typename T>
inline basic_string<T> operator+(const basic_string<T>& lhs,
    const basic_string<T>& rhs)
{
    basic_string<T> str(lhs);
    str.append(rhs);
    return str;
}

template <typename T>
inline basic_string<T> operator+(const T* lhs, const basic_string<T>& rhs)
{
    basic_string<T> str(lhs);
    str.append(rhs);
    return str;
}

template <typename T>
inline basic_string<T> operator+(const basic_string<T>& lhs, const T* rhs)
{
    basic_string<T> str(lhs);
    str.append(rhs);
    return str;
}

template <typename T>
inline basic_string<T> operator+(T lhs, const basic_string<T>& rhs)
{
    basic_string<T> str(1, lhs);
    str.append(rhs);
    return str;
}

template <typename T>
inline basic_string<T> operator+(const basic_string<T>& lhs, T rhs)
{
    basic_string<T> str(lhs);
    str.append(1, rhs);
    return str;
}

template <typename T>
bool operator<(const basic_string<T>& lhs,
    const basic_string<T>& rhs)
{
    return lhs.compare(rhs) < 0;
}

template <typename T>
bool operator<(const basic_string<T>& lhs,
    const T* rhs)
{
    return lhs.compare(rhs) < 0;
}

template <typename T>
bool operator<(const T* lhs,
    const basic_string<T>& rhs)
{
    return rhs.compare(lhs) > 0;
}

template <typename T>
bool operator>(const basic_string<T>& lhs,
    const basic_string<T>& rhs)
{
    return lhs.compare(rhs) > 0;
}

template <typename T>
bool operator>(const basic_string<T>& lhs,
    const T* rhs)
{
    return lhs.compare(rhs) > 0;
}

template <typename T>
bool operator>(const T* lhs,
    const basic_string<T>& rhs)
{
    return rhs.compare(lhs) < 0;
}

template <typename T>
bool operator<=(const basic_string<T>& lhs,
    const basic_string<T>& rhs)
{
    return lhs.compare(rhs) <= 0;
}

template <typename T>
bool operator<=(const basic_string<T>& lhs,
    const T* rhs)
{
    return lhs.compare(rhs) <= 0;
}

template <typename T>
bool operator<=(const T* lhs,
    const basic_string<T>& rhs)
{
    return rhs.compare(lhs) >= 0;
}

template <typename T>
bool operator>=(const basic_string<T>& lhs,
    const basic_string<T>& rhs)
{
    return lhs.compare(rhs) >= 0;
}

template <typename T>
bool operator>=(const basic_string<T>& lhs,
    const T* rhs)
{
    return lhs.compare(rhs) >= 0;
}

template <typename T>
bool operator>=(const T* lhs,
    const basic_string<T>& rhs)
{
    return rhs.compare(lhs) <= 0;
}

template <typename T>
bool operator==(const basic_string<T>& lhs,
    const basic_string<T>& rhs)
{
    return lhs.compare(rhs) == 0;
}

template <typename T>
bool operator==(const basic_string<T>& lhs,
    const T* rhs)
{
    return lhs.compare(rhs) == 0;
}

template <typename T>
bool operator==(const T* lhs,
    const basic_string<T>& rhs)
{
    return rhs.compare(lhs) == 0;
}

template <typename T>
bool operator!=(const basic_string<T>& lhs,
    const basic_string<T>& rhs)
{
    return lhs.compare(rhs) != 0;
}

template <typename T>
bool operator!=(const basic_string<T>& lhs,
    const T* rhs)
{
    return lhs.compare(rhs) != 0;
}

template <typename T>
bool operator!=(const T* lhs,
    const basic_string<T>& rhs)
{
    return rhs.compare(lhs) != 0;
}

#ifdef _WIN32
typedef wchar_t wchar;
#else
typedef uint16_t wchar;
#endif

typedef uint32_t wchar32;

typedef basic_string<char> string;
typedef basic_string<wchar> wstring;
typedef basic_string<wchar32> wstring32;
}

#endif