/*
Copyright (c) 2011, Jonas Tarnstrom and ESN Social Software AB
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.
3. All advertising materials mentioning features or use of this software
must display the following acknowledgement:
This product includes software developed by ESN Social Software AB (www.esn.me).
4. Neither the name of the ESN Social Software AB nor the
names of its contributors may be used to endorse or promote products
derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY ESN SOCIAL SOFTWARE AB ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL ESN SOCIAL SOFTWARE AB BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Portions of code from gevent-MySQL
Copyright (C) 2010, Markus Thurlin
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

* Neither the name of Hyves (Startphone Ltd.) nor the names of its
contributors may be used to endorse or promote products derived from this
software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "PacketReader.h"
#include "mysqldefs.h"
#include <assert.h>

#define BYTEORDER_UINT16(_x) (_x)
#define BYTEORDER_UINT32(_x) (_x)

PacketReader::PacketReader (size_t _cbSize)
{
  m_buffStart = new char[_cbSize];
  m_writeCursor = m_buffStart;
  m_buffEnd = m_buffStart + _cbSize;
  m_readCursor = m_buffStart;
  m_packetEnd = NULL;
}

PacketReader::~PacketReader (void)
{
  delete[] m_buffStart;
}

void PacketReader::shrink()
{
  if (m_readCursor != m_buffStart)
  {
    size_t consumed = m_readCursor - m_buffStart;
    memmove(m_buffStart, m_readCursor, m_writeCursor - m_readCursor);
    m_writeCursor -= consumed;
    // m_packetEnd points into the buffer: must follow the data, or become
    // NULL when it pointed at already-consumed bytes (<= old read cursor).
    if (m_packetEnd)
      m_packetEnd -= consumed;
    if (m_packetEnd && m_packetEnd < m_buffStart)
      m_packetEnd = NULL;
    m_readCursor = m_buffStart;
  }
}

void PacketReader::skip()
{
  assert (m_packetEnd != NULL);
  assert (m_readCursor <= m_packetEnd);

  m_readCursor = m_packetEnd;

  if (m_readCursor == m_writeCursor)
  {
    //fprintf (stderr, "%s: Buffer is aligned, moving back\n", __FUNCTION__);

    m_readCursor = m_buffStart;
    m_writeCursor = m_buffStart;
    m_packetEnd = NULL;
  }
}

void PacketReader::push(size_t _cbData)
{
  //fprintf (stderr, "%s: Pushing %u bytes\n", __FUNCTION__, _cbData);
  m_writeCursor += _cbData;
}

char *PacketReader::getWritePtr()
{
  return m_writeCursor;
}

char *PacketReader::getStartPtr()
{
  return m_buffStart;
}

char *PacketReader::getEndPtr()
{
  return m_buffEnd;
}

extern void PrintBuffer(FILE *file, void *_offset, size_t len, int perRow);


bool PacketReader::havePacket()
{
  m_packetEnd = NULL;

  size_t len = (m_writeCursor - m_readCursor);

  if (len < MYSQL_PACKET_HEADER_SIZE)
  {
    return false;
  }

  // Reassemble split packets: a physical packet whose payload is exactly
  // 0xffffff is followed by continuation packets (same logical packet) until
  // a segment with payload < 0xffffff arrives. Walk the segment chain with a
  // local cursor so m_readCursor stays at the logical packet start.
  const char *pos = m_readCursor;
  size_t remaining = len;
  size_t segs = 0;
  size_t total_payload = 0;

  while (true)
  {
    if (remaining < MYSQL_PACKET_HEADER_SIZE)
    {
      return false;
    }

    UINT32 packetSize = (UINT32)(UINT8)pos[0] |
        ((UINT32)(UINT8)pos[1] << 8) |
        ((UINT32)(UINT8)pos[2] << 16);
    // pos[3] is the packet sequence number; it is not validated (the
    // connection layer does not track it either).

    remaining -= MYSQL_PACKET_HEADER_SIZE;
    if (remaining < packetSize)
    {
      return false;
    }

    remaining -= packetSize;
    pos += MYSQL_PACKET_HEADER_SIZE + packetSize;
    total_payload += packetSize;
    segs++;

    if (packetSize < 0xffffff)
    {
      break; // last segment of the logical packet
    }
  }

  // For split packets, compact the continuation headers away so the logical
  // payload is contiguous: the legacy read paths consume bytes up to
  // m_packetEnd without skipping inter-segment headers. Segments only move
  // left (dst <= src), so this is safe. Data after the logical packet (e.g.
  // the next packet) must follow the compaction, otherwise it would be
  // truncated by the writeCursor adjustment.
  if (segs > 1)
  {
    size_t removed = (segs - 1) * MYSQL_PACKET_HEADER_SIZE;

    // 1. Concatenate the segment payloads, dropping the continuation headers
    char *dst = m_readCursor + MYSQL_PACKET_HEADER_SIZE;
    const char *p = m_readCursor;

    while (true)
    {
      UINT32 packetSize = (UINT32)(UINT8)p[0] |
          ((UINT32)(UINT8)p[1] << 8) |
          ((UINT32)(UINT8)p[2] << 16);
      const char *payload = p + MYSQL_PACKET_HEADER_SIZE;

      if (packetSize < 0xffffff)
      {
        // Last segment: move its payload if it is not already in place
        if (dst != payload)
          memmove(dst, payload, packetSize);
        break;
      }

      memmove(dst, payload, packetSize);
      dst += packetSize;
      p += MYSQL_PACKET_HEADER_SIZE + packetSize;
    }

    // 2. Shift the data after the logical packet (pos is the original
    //    physical end) so the whole buffer stays contiguous
    char *logical_end = m_readCursor + MYSQL_PACKET_HEADER_SIZE + total_payload;
    size_t tail = (size_t)(m_writeCursor - pos);
    if (tail > 0)
      memmove(logical_end, pos, tail);

    m_writeCursor -= removed;
  }

  // Legacy semantics: on success the first segment's header is consumed, so
  // m_readCursor sits at the payload start and m_packetEnd at the end of the
  // (now contiguous) logical payload.
  m_packetEnd = m_readCursor + MYSQL_PACKET_HEADER_SIZE + total_payload;
  m_readCursor += MYSQL_PACKET_HEADER_SIZE;
  return true;
}

UINT8 PacketReader::readByte()
{
  assert (m_readCursor + 1 <= m_packetEnd || m_packetEnd == NULL);
  assert (m_packetEnd <= m_writeCursor);

  return (*m_readCursor++);
}

UINT16 PacketReader::readShort()
{
  assert (m_readCursor + 2 <= m_packetEnd);
  assert (m_packetEnd <= m_writeCursor);

  UINT16 ret = BYTEORDER_UINT16(*((UINT16*)m_readCursor));
  m_readCursor += 2;
  return ret;
}

UINT32 PacketReader::readINT24()
{
  assert (m_readCursor < m_packetEnd || m_packetEnd == NULL);
  // `<=`: a packet may exactly fill the buffer (m_packetEnd == m_writeCursor)
  assert (m_packetEnd <= m_writeCursor);

  UINT32 ret = readByte() | (readByte() << 8) | (readByte() << 16);

  return ret;
}

UINT32 PacketReader::readLong()
{
  assert (m_readCursor + 4 <= m_packetEnd);
  assert (m_packetEnd <= m_writeCursor);

  UINT32 ret = BYTEORDER_UINT32(*((UINT32*)m_readCursor));
  m_readCursor += 4;
  return ret;
}

char *PacketReader::readNTString()
{
  assert (m_readCursor < m_packetEnd);
  assert (m_packetEnd <= m_writeCursor);

  char *ret = m_readCursor;

  while (m_readCursor < m_packetEnd)
  {
    if (*(m_readCursor++) == '\0')
    {
      return ret;
    }
  }

  assert (false);
  return NULL;
}


UINT8 *PacketReader::readBytes(size_t cbsize)
{
  assert (m_readCursor + cbsize <= m_packetEnd);
  assert (m_packetEnd <= m_writeCursor);

  UINT8 *ret = (UINT8 *) m_readCursor;
  m_readCursor += cbsize;

  return ret;
}

size_t PacketReader::getBytesLeft()
{
  return (m_packetEnd - m_readCursor);
}

void PacketReader::rewind(size_t num)
{
  m_readCursor -= num;
}


UINT8 *PacketReader::readLengthCodedBinary(size_t *_outLen)
{
  assert (m_readCursor < m_packetEnd);
  assert (m_packetEnd <= m_writeCursor);

  switch (*((UINT8 *) m_readCursor))
  {
  default:
    *_outLen = (size_t) *((UINT8 *) m_readCursor);
    m_readCursor ++;
    break;

  case 251:
    m_readCursor ++;
    *_outLen = 0;
    return NULL;

  case 252:
    m_readCursor ++;
    *_outLen = (size_t) *((UINT16 *) m_readCursor);
    m_readCursor += 2; 
    break;

  case 253:
    m_readCursor ++;
    *_outLen = (size_t) *((UINT32 *) m_readCursor);
    *_outLen &= 0xffffff;
    m_readCursor += 3; 
    break;

  case 254:
    m_readCursor ++;
    *_outLen = (size_t) *((UINT64 *) m_readCursor);
    m_readCursor += 8; 
    break;
  }

  UINT8 *ret = (UINT8*) m_readCursor;
  m_readCursor += (*_outLen);

  assert (m_readCursor <= m_packetEnd);

  return ret;
}

size_t PacketReader::getSize()
{
  return m_buffEnd - m_buffStart;
}

size_t PacketReader::setSize(size_t _cbSize)
{
  if((int)_cbSize < m_writeCursor - m_buffStart)
	return 0;

  size_t old_cbSize = m_buffEnd - m_buffStart;

  char* buffStart = new char[_cbSize];
  char* buffEnd = buffStart + _cbSize;

  memcpy(buffStart, m_buffStart, m_writeCursor - m_buffStart);
  m_readCursor = m_readCursor - m_buffStart + buffStart;
  m_writeCursor = m_writeCursor - m_buffStart + buffStart;
  // m_packetEnd may be NULL (no packet in flight): NULL arithmetic is UB, so
  // rebase it only when it points into the old buffer.
  if (m_packetEnd)
    m_packetEnd = m_packetEnd - m_buffStart + buffStart;

  delete m_buffStart;
  m_buffStart = buffStart;
  m_buffEnd = buffEnd;

  return old_cbSize;
}


UINT64 PacketReader::readLengthCodedInteger()
{
  assert (m_readCursor < m_packetEnd);
  assert (m_packetEnd <= m_writeCursor);

  UINT64 ret;

  switch (*((UINT8 *) m_readCursor))
  {
  default:
    ret = (UINT64) *((UINT8 *) m_readCursor);
    m_readCursor ++;
    assert (m_readCursor <= m_packetEnd);
    return ret;

  case 251:
    ret = 0;
    m_readCursor ++;
    assert (m_readCursor <= m_packetEnd);
    return ret;

  case 252:
    m_readCursor ++;
    ret = (UINT64) *((UINT16 *) m_readCursor);
    m_readCursor += 2;
    assert (m_readCursor <= m_packetEnd);
    return ret;

  case 253:
    m_readCursor ++;
    ret = (UINT64) *((UINT32 *) m_readCursor);
    ret &= 0xffffff;
    m_readCursor += 3;
    assert (m_readCursor <= m_packetEnd);
    return ret;

  case 254:
    m_readCursor ++;
    ret = (UINT64) *((UINT64 *) m_readCursor);
    m_readCursor += 8;
    assert (m_readCursor <= m_packetEnd);
    return ret;
  }

  return ret;
}



