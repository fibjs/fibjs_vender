/*
 * Unit tests for PacketReader / PacketWriter (pure buffer logic, no I/O).
 * These do not need the CAPI mock at all.
 */

#include "PacketReader.h"
#include "PacketWriter.h"
#include "mock_server.h"
#include <gtest/gtest.h>
#include <cstring>

using namespace umysql_test;

// Push raw bytes into a reader (feed happens before push, like readSocket)
inline void feed_bytes(PacketReader& r, const std::vector<char>& bytes)
{
    char* w = r.getWritePtr();
    memcpy(w, bytes.data(), bytes.size());
    r.push(bytes.size());
}

// ---------------------------------------------------------------------------
// PacketWriter
// ---------------------------------------------------------------------------

TEST(packet_writer, basics)
{
    PacketWriter w(1024);
    w.reset();
    w.writeByte(0x03); // COM_QUERY
    w.writeBytes((void*)"SELECT 1", 8);
    w.finalize(0);

    // Not sent yet: read cursor sits at the header
    EXPECT_FALSE(w.isDone());

    // Wire format: 3-byte LE payload length + 1-byte seq + payload
    const char* buf = w.getStart();
    EXPECT_EQ((uint8_t)buf[0], 9); // 1 + 8
    EXPECT_EQ((uint8_t)buf[1], 0);
    EXPECT_EQ((uint8_t)buf[2], 0);
    EXPECT_EQ((uint8_t)buf[3], 0); // seq
    EXPECT_EQ((uint8_t)buf[4], 0x03);
    EXPECT_EQ(memcmp(buf + 5, "SELECT 1", 8), 0);

    // Simulate full send: pull consumes the packet, isDone becomes true
    w.pull(w.getWriteCursor() - w.getReadCursor());
    EXPECT_TRUE(w.isDone());
}

TEST(packet_writer, big_payload)
{
    // Payload larger than 0xffff exercises the 3-byte length encoding.
    PacketWriter w(1024 * 1024);
    size_t payload = 70000;
    w.reset();
    w.writeByte(0x03);
    std::vector<char> data(payload, 'x');
    w.writeBytes(data.data(), payload);
    w.finalize(7);

    const char* buf = w.getStart();
    EXPECT_EQ((uint8_t)buf[0], (uint8_t)((payload + 1) & 0xff));
    EXPECT_EQ((uint8_t)buf[1], (uint8_t)(((payload + 1) >> 8) & 0xff));
    EXPECT_EQ((uint8_t)buf[2], (uint8_t)(((payload + 1) >> 16) & 0xff));
    EXPECT_EQ((uint8_t)buf[3], 7); // seq
    // Payload follows the header untouched
    EXPECT_EQ((uint8_t)buf[4], 0x03);
    EXPECT_EQ(memcmp(buf + 5, data.data(), payload), 0);
}

TEST(packet_writer, ntstring)
{
    PacketWriter w(128);
    w.reset();
    w.writeNTString("abc");
    w.writeByte(0x01);
    w.finalize(1);

    const char* buf = w.getStart();
    EXPECT_EQ((uint8_t)buf[0], 5); // "abc\0" + 0x01
    EXPECT_EQ((uint8_t)buf[3], 1);
    EXPECT_EQ(memcmp(buf + 4, "abc", 3), 0);
    EXPECT_EQ((uint8_t)buf[7], 0);
    EXPECT_EQ((uint8_t)buf[8], 0x01);
}

TEST(packet_writer, set_size_grow_shrink)
{
    PacketWriter w(64);
    size_t old = w.getSize();
    EXPECT_EQ(old, (size_t)64);
    EXPECT_EQ(w.setSize(256), (size_t)64);
    EXPECT_EQ(w.getSize(), (size_t)256);

    // Shrink below buffered data must fail (returns 0), keeping buffer intact.
    w.reset();
    w.writeBytes((void*)"0123456789", 10);
    EXPECT_EQ(w.setSize(4), (size_t)0);
    EXPECT_EQ(w.getSize(), (size_t)256);
}

// ---------------------------------------------------------------------------
// PacketReader
// ---------------------------------------------------------------------------

TEST(packet_reader, have_packet_incremental)
{
    PacketReader r(4096);
    std::vector<char> pkt = wrap_packet(ok_payload(1, 2, 0), 2);

    // 1. partial header -> no packet
    feed_bytes(r, std::vector<char>(pkt.begin(), pkt.begin() + 2));
    EXPECT_FALSE(r.havePacket());

    // 2. full header, no payload -> no packet (cursor rewound)
    feed_bytes(r, std::vector<char>(pkt.begin() + 2, pkt.begin() + 4));
    EXPECT_FALSE(r.havePacket());

    // 3. partial payload -> no packet
    feed_bytes(r, std::vector<char>(pkt.begin() + 4, pkt.begin() + 5));
    EXPECT_FALSE(r.havePacket());

    // 4. rest of payload -> packet available
    feed_bytes(r, std::vector<char>(pkt.begin() + 5, pkt.end()));
    EXPECT_TRUE(r.havePacket());

    // Payload should decode as an OK packet: 0x00, lenenc 1, lenenc 2, status
    EXPECT_EQ(r.readByte(), 0x00);
    EXPECT_EQ(r.readLengthCodedInteger(), (uint64_t)1);
    EXPECT_EQ(r.readLengthCodedInteger(), (uint64_t)2);
    EXPECT_EQ(r.readShort(), 0);

    // skip() resets the buffer when fully consumed
    r.skip();
    EXPECT_FALSE(r.havePacket());
    // Buffer is aligned: next push starts at the beginning
    EXPECT_EQ(r.getWritePtr(), r.getStartPtr());
}

TEST(packet_reader, length_coded_integer_branches)
{
    // 0xfc (2-byte), 0xfd (3-byte), 0xfe (8-byte)
    struct Case {
        uint64_t value;
        int prefix;
    };
    Case cases[] = {
        { 0xffff, 0xfc },
        { 0x10000, 0xfd },
        { 0xffffff, 0xfd },
        { 0x1000000, 0xfe },
        { 0x1122334455667788ULL, 0xfe },
    };

    for (size_t i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
        PacketReader r(4096);
        std::vector<char> payload;
        packet_put_lenenc(payload, cases[i].value);
        std::vector<char> pkt = wrap_packet(payload, 0);
        feed_bytes(r, pkt);

        ASSERT_TRUE(r.havePacket());
        EXPECT_EQ(r.readLengthCodedInteger(), cases[i].value)
            << "value " << cases[i].value;
        r.skip();
    }
}

TEST(packet_reader, length_coded_binary_null)
{
    PacketReader r(4096);
    std::vector<char> payload;
    payload.push_back(0xfb); // NULL
    payload.push_back(0x03);
    payload.push_back('a');
    payload.push_back('b');
    payload.push_back('c');
    std::vector<char> pkt = wrap_packet(payload, 0);
    feed_bytes(r, pkt);

    ASSERT_TRUE(r.havePacket());
    size_t len = 0;
    UINT8* v = r.readLengthCodedBinary(&len);
    EXPECT_EQ(v, (UINT8*)nullptr);
    EXPECT_EQ(len, (size_t)0);

    v = r.readLengthCodedBinary(&len);
    ASSERT_NE(v, (UINT8*)nullptr);
    EXPECT_EQ(len, (size_t)3);
    EXPECT_EQ(memcmp(v, "abc", 3), 0);
}

TEST(packet_reader, shrink_compacts_consumed_prefix)
{
    // Simulate the readSocket() pattern: read data, consume one packet,
    // then read more — shrink() compacts the consumed prefix.
    PacketReader r(4096);
    char* w = r.getWritePtr();
    w[0] = 0x02;
    w[1] = 0x00;
    w[2] = 0x00;
    w[3] = 0x00;
    w[4] = 0xaa;
    w[5] = 0xbb;
    r.push(6);
    ASSERT_TRUE(r.havePacket());
    EXPECT_EQ(r.readByte(), 0xaa);
    r.skip();

    // All consumed -> shrink leaves an empty, aligned buffer
    r.shrink();
    EXPECT_EQ(r.getWritePtr(), r.getStartPtr());

    // Feed another packet and confirm it lands at the start again
    w = r.getWritePtr();
    w[0] = 0x01;
    w[1] = 0x00;
    w[2] = 0x00;
    w[3] = 0x01;
    w[4] = 0xcc;
    r.push(5);
    ASSERT_TRUE(r.havePacket());
    EXPECT_EQ(r.readByte(), 0xcc);
}

TEST(packet_reader, set_size_keeps_pending_data)
{
    // setSize() must preserve any unread packet bytes (regression guard for
    // the m_packetEnd pointer arithmetic when no packet was ever completed).
    PacketReader r(64);
    std::vector<char> pkt = wrap_packet(ok_payload(5, 0, 0), 1);
    feed_bytes(r, pkt);

    ASSERT_TRUE(r.havePacket());
    EXPECT_EQ(r.setSize(256), (size_t)64);

    // The pending packet is still readable after resizing.
    EXPECT_EQ(r.readByte(), 0x00);
    EXPECT_EQ(r.readLengthCodedInteger(), (uint64_t)5);
    r.skip();
}

TEST(packet_reader, set_size_without_packet_is_safe)
{
    // Regression for the setSize() UB: when no packet has ever completed,
    // m_packetEnd is NULL. Old code did pointer arithmetic on it.
    PacketReader r(64);
    std::vector<char> partial(4, 0);
    partial[0] = 0x10; // header: 0x10-byte payload, not delivered yet
    feed_bytes(r, partial);
    ASSERT_FALSE(r.havePacket());

    EXPECT_EQ(r.setSize(128), (size_t)64);

    // Buffer still usable: deliver the payload and read the packet
    std::vector<char> payload(0x10);
    for (size_t i = 0; i < payload.size(); i++)
        payload[i] = (char)i;
    feed_bytes(r, payload);
    ASSERT_TRUE(r.havePacket());
    EXPECT_EQ(r.readByte(), 0x00);
    r.skip();
}

TEST(packet_reader, read_packet_exactly_filling_buffer)
{
    // A packet that exactly fills the receive buffer must be readable
    // (regression guard for the readINT24 `<=` boundary assertion).
    size_t bufsize = 64;
    size_t payload_size = bufsize - 4; // header included in buffer capacity
    PacketReader r(bufsize);

    std::vector<char> payload(payload_size, 'z');
    std::vector<char> pkt = wrap_packet(payload, 0);
    ASSERT_EQ(pkt.size(), bufsize);

    feed_bytes(r, pkt);
    ASSERT_TRUE(r.havePacket());

    // Consume payload in two chunks to cross the readINT24 boundary path.
    EXPECT_EQ(r.readByte(), 'z');
    EXPECT_EQ(r.readByte(), 'z');
    r.skip();
    EXPECT_FALSE(r.havePacket());
}

TEST(packet_reader, rewind)
{
    PacketReader r(4096);
    std::vector<char> pkt = wrap_packet(err_payload(1045, "28000", "denied"), 1);
    feed_bytes(r, pkt);
    ASSERT_TRUE(r.havePacket());

    EXPECT_EQ(r.readByte(), 0xff); // ERR header
    r.rewind(1);
    EXPECT_EQ(r.readByte(), 0xff);
    EXPECT_EQ(r.readShort(), 1045);
}
