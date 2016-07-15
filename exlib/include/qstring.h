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
#include <string.h>
#include "utils.h"

namespace exlib
{

template<typename T>
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

template<typename T>
inline void qmemset(T* ptr, T value, size_t num)
{
	while (num--)
		*ptr++ = value;
}

template<typename T>
inline void qmemcpy(T* dest, const T* src, size_t count)
{
	if (dest != src)
		memcpy(dest, src, count * sizeof(T));
}

template<typename T>
inline int32_t qmemcmp(const T* s1, const T* s2, size_t count)
{
	if (s1 == s2)
		return 0;

	int32_t n;

	while (count--)
	{
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

template<typename T>
inline const T* qmemfind(const T* s1, size_t sz1, const T* s2, size_t sz2)
{
	while (sz1 >= sz2)
	{
		if (qmemcmp(s1, s2, sz2) == 0)
			return s1;
		s1 ++;
		sz1 --;
	}

	return NULL;
}

#define MAX_SMALL   16

template<typename T>
class basic_string
{
private:
#pragma pack(1)
	struct buffer
	{
		atomic refs_;
		size_t blk_size;
		T data[1];
	};
#pragma pack()

	void unref()
	{
		if (m_buffer != NULL)
		{
			if (m_buffer->refs_.dec() == 0)
				free(m_buffer);
			m_buffer = NULL;
		}
	}

public:
	basic_string() :
		m_length(0), m_buffer(NULL)
	{
		m_small_data[0] = 0;
	}

	basic_string(size_t n, T ch) :
		m_length(0), m_buffer(NULL)
	{
		m_small_data[0] = 0;
		assign(n, ch);
	}

	basic_string(const T* str) :
		m_length(0), m_buffer(NULL)
	{
		m_small_data[0] = 0;
		assign(str);
	}

	basic_string(const T* str, size_t sz) :
		m_length(0), m_buffer(NULL)
	{
		m_small_data[0] = 0;
		assign(str, sz);
	}

	basic_string(const std::basic_string<T>& v) :
		m_length(0), m_buffer(NULL)
	{
		m_small_data[0] = 0;
		assign(v);
	}

	basic_string(const basic_string<T>& v) :
		m_length(0), m_buffer(NULL)
	{
		m_small_data[0] = 0;
		assign(v);
	}

	~basic_string()
	{
		unref();
	}

public:
	static const size_t npos = SIZE_MAX;

public:
	const T* c_str() const
	{
		return m_buffer ? m_buffer->data : m_small_data;
	}

	T* c_buffer()
	{
		if (!m_buffer)
			return m_small_data;

		if (m_buffer->refs_ > 1)
		{
			size_t sz = m_length;

			if (sz < MAX_SMALL)
			{
				qmemcpy(m_small_data, m_buffer->data, sz + 1);
				unref();

				return m_small_data;
			} else
			{
				size_t blk_size = (sz + 15) & (SIZE_MAX - 15);
				buffer* _buffer = (buffer*)malloc(blk_size * sizeof(T) + sizeof(buffer));

				_buffer->refs_ = 1;
				_buffer->blk_size = blk_size;

				qmemcpy(_buffer->data, m_buffer->data, sz + 1);
				unref();

				m_buffer = _buffer;

				return m_buffer->data;
			}
		}

		return m_buffer->data;
	}

	size_t length() const
	{
		return m_length;
	}

	void resize(size_t sz)
	{
		if (sz == 0)
		{
			unref();
			m_length = 0;
			m_small_data[0] = 0;
		} else if (sz < MAX_SMALL && m_buffer == 0)
		{
			m_length = sz;
			m_small_data[sz] = 0;
		}
		else
		{
			size_t blk_size = (sz + 15) & (SIZE_MAX - 15);
			size_t sz1 = m_length;

			if (sz1 == 0)
			{
				m_buffer = (buffer*)malloc(blk_size * sizeof(T) + sizeof(buffer));

				m_buffer->refs_ = 1;
				m_buffer->blk_size = blk_size;
			} else if (m_buffer ==  NULL)
			{
				m_buffer = (buffer*)malloc(blk_size * sizeof(T) + sizeof(buffer));

				m_buffer->refs_ = 1;
				m_buffer->blk_size = blk_size;

				qmemcpy(m_buffer->data, m_small_data, sz < sz1 ? sz : sz1);
			} else if (m_buffer->refs_ > 1)
			{
				buffer* _buffer = (buffer*)malloc(blk_size * sizeof(T) + sizeof(buffer));

				_buffer->refs_ = 1;
				_buffer->blk_size = blk_size;

				qmemcpy(_buffer->data, m_buffer->data, sz < sz1 ? sz : sz1);
				unref();

				m_buffer = _buffer;
			} else if (blk_size > m_buffer->blk_size)
			{
				m_buffer = (buffer*)realloc(m_buffer, blk_size * sizeof(T) + sizeof(buffer));
				m_buffer->blk_size = blk_size;
			}

			m_length = sz;
			m_buffer->data[sz] = 0;
		}
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

public:
	basic_string<T>& append(size_t n, T ch)
	{
		if (n > 0)
		{
			size_t len = length();
			resize(len + n);
			qmemset(c_buffer() + len, ch, n);
		}
		return *this;
	}

	basic_string<T>& append(const T* str, size_t sz)
	{
		if (sz > 0)
		{
			size_t len = length();
			const T* data = c_str();

			if (str >= data && str < data + len)
			{
				basic_string<T> temp(data, len);
				temp.append(str, sz);
				*this = temp;
			} else
			{
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

	basic_string<T>& assign(const basic_string<T>& str)
	{
		unref();

		if (str.m_buffer == NULL)
		{
			m_length = str.m_length;
			qmemcpy(m_small_data, str.m_small_data, m_length + 1);
		} else
		{
			m_length = str.m_length;
			m_buffer = str.m_buffer;
			if (m_buffer)
				m_buffer->refs_.inc();
		}

		return *this;
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

		for (i = 0; i < len; i++)
		{
			if (sizeof(T) == 2)
			{
				data[pos] = HexChar[(unsigned char) ptr[i] >> 12];
				data[pos + 1] = HexChar[(unsigned char) (ptr[i] >> 8) & 0xf];
				pos += 2;
				len1 += 2;
			}
			data[pos] = HexChar[(unsigned char) (ptr[i] >> 4) & 0x0f];
			data[pos + 1] = HexChar[(unsigned char) ptr[i] & 0xf];
			pos += 2;
			len1 += 2;

			data[pos++] = ' ';
			len1 ++;
		}

		return retVal;
	}

public:
	T &operator[](size_t i)
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

	basic_string<T>& operator=(const basic_string<T>& str)
	{
		return assign(str);
	}

private:
	size_t m_length;
	buffer* m_buffer;
	T m_small_data[MAX_SMALL];
};

template<typename T>
inline basic_string <T> operator+(const basic_string<T>& lhs,
                                  const basic_string<T>& rhs)
{
	basic_string<T> str(lhs);
	str.append(rhs);
	return str;
}

template<typename T>
inline basic_string <T> operator+(const T* lhs, const basic_string<T>& rhs)
{
	basic_string<T> str(lhs);
	str.append(rhs);
	return str;
}

template<typename T>
inline basic_string <T> operator+(const basic_string<T>& lhs, const T* rhs)
{
	basic_string<T> str(lhs);
	str.append(rhs);
	return str;
}

template<typename T>
inline basic_string <T> operator+(T lhs, const basic_string<T>& rhs)
{
	basic_string<T> str(1, lhs);
	str.append(rhs);
	return str;
}

template<typename T>
inline basic_string <T> operator+(const basic_string<T>& lhs, T rhs)
{
	basic_string<T> str(lhs);
	str.append(1, rhs);
	return str;
}

template<typename T>
bool operator<(const basic_string<T>& lhs,
               const basic_string<T>& rhs)
{
	return lhs.compare(rhs) < 0;
}

template<typename T>
bool operator>(const basic_string<T>& lhs,
               const basic_string<T>& rhs)
{
	return lhs.compare(rhs) > 0;
}

template<typename T>
bool operator<=(const basic_string<T>& lhs,
                const basic_string<T>& rhs)
{
	return lhs.compare(rhs) <= 0;
}

template<typename T>
bool operator>=(const basic_string<T>& lhs,
                const basic_string<T>& rhs)
{
	return lhs.compare(rhs) >= 0;
}

template<typename T>
bool operator==(const basic_string<T>& lhs,
                const basic_string<T>& rhs)
{
	return lhs.compare(rhs) == 0;
}

template<typename T>
bool operator!=(const basic_string<T>& lhs,
                const basic_string<T>& rhs)
{
	return lhs.compare(rhs) != 0;
}

}

#endif