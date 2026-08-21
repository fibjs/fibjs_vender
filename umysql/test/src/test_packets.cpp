/*
 * Unit tests for Packets.h: pure wire-format encode/decode, independent of
 * any connection/protocol flow. Covers primitives, WirePacket framing and
 * every packet object's round-trip plus malformed-input handling.
 */

#include "Packets.h"
#include "mock_server.h" // cross-check: mock builders == packet objects
#include <gtest/gtest.h>
#include <cstring>

using namespace std;
using namespace umysql_test;

// ---------------------------------------------------------------------------
// Primitives: packet_put_* / packet_get_*
// ---------------------------------------------------------------------------

TEST(packets_primitives, u16_roundtrip)
{
    vector<char> v;
    packet_put_u16(v, 0x1234);
    EXPECT_EQ(v.size(), (size_t)2);
    EXPECT_EQ((uint8_t)v[0], 0x34);
    EXPECT_EQ((uint8_t)v[1], 0x12);

    const char* pos = v.data();
    uint16_t out = 0;
    EXPECT_TRUE(packet_get_u16(pos, pos + 2, out));
    EXPECT_EQ(out, 0x1234);
    EXPECT_EQ(pos, v.data() + 2);

    // Not enough bytes -> false, pos unchanged
    const char* p2 = v.data();
    EXPECT_FALSE(packet_get_u16(p2, p2 + 1, out));
    EXPECT_EQ(p2, v.data());
}

TEST(packets_primitives, u24_u32_u64_roundtrip)
{
    vector<char> v;
    packet_put_u24(v, 0xabcdef);
    EXPECT_EQ(v.size(), (size_t)3);
    EXPECT_EQ((uint8_t)v[0], 0xef);
    EXPECT_EQ((uint8_t)v[2], 0xab);

    const char* pos = v.data();
    uint32_t out24 = 0;
    EXPECT_TRUE(packet_get_u24(pos, pos + 3, out24));
    EXPECT_EQ(out24, 0xabcdefu);

    v.clear();
    packet_put_u32(v, 0x89abcdefu);
    EXPECT_EQ((uint8_t)v[3], 0x89);
    pos = v.data();
    uint32_t out32 = 0;
    EXPECT_TRUE(packet_get_u32(pos, pos + 4, out32));
    EXPECT_EQ(out32, 0x89abcdefu);

    v.clear();
    packet_put_u64(v, 0x1122334455667788ull);
    pos = v.data();
    uint64_t out64 = 0;
    EXPECT_TRUE(packet_get_u64(pos, pos + 8, out64));
    EXPECT_EQ(out64, 0x1122334455667788ull);

    // truncation at every width
    const char* p = v.data();
    EXPECT_FALSE(packet_get_u64(p, p + 7, out64));
    EXPECT_EQ(p, v.data());
}

TEST(packets_primitives, lenenc_all_branches)
{
    struct Case {
        uint64_t value;
        size_t wire_len;
    };
    const Case cases[] = {
        { 0, 1 },       // single byte
        { 250, 1 },     // upper bound of single byte
        { 251, 3 },     // 0xfc + u16
        { 252, 3 },
        { 65535, 3 },   // upper bound of 0xfc
        { 65536, 4 },   // 0xfd + u24
        { 0xffffff, 4 },
        { 0x1000000, 9 }, // 0xfe + u64
        { 0xffffffffffffffffull, 9 },
    };
    for (size_t i = 0; i < sizeof(cases) / sizeof(cases[0]); i++) {
        vector<char> v;
        packet_put_lenenc(v, cases[i].value);
        EXPECT_EQ(v.size(), cases[i].wire_len) << "value " << cases[i].value;
        if (cases[i].wire_len > 1)
            EXPECT_EQ((uint8_t)v[0], (uint8_t)(cases[i].value < 0x1000000 ? 0xfc + (cases[i].wire_len == 3 ? 0 : 1) : 0xfe));

        const char* pos = v.data();
        uint64_t out = 0;
        EXPECT_TRUE(packet_get_lenenc(pos, pos + v.size(), out)) << "value " << cases[i].value;
        EXPECT_EQ(out, cases[i].value);
        EXPECT_EQ(pos, v.data() + v.size());
    }
}

TEST(packets_primitives, lenenc_markers_fail)
{
    // 0xfb = NULL marker, 0xff = ERR marker: not valid lengths
    uint64_t out = 0;
    for (uint8_t marker : { (uint8_t)0xfb, (uint8_t)0xff }) {
        vector<char> v;
        v.push_back((char)marker);
        const char* pos = v.data();
        EXPECT_FALSE(packet_get_lenenc(pos, pos + 1, out));
    }

    // Truncated multi-byte encodings
    for (size_t prefix : { (size_t)1, (size_t)2, (size_t)4 }) {
        vector<char> v;
        v.push_back((char)(prefix == 1 ? 0xfc : prefix == 2 ? 0xfd : 0xfe));
        for (size_t i = 0; i < prefix - 1; i++)
            v.push_back(0x01); // one byte short
        const char* pos = v.data();
        EXPECT_FALSE(packet_get_lenenc(pos, pos + v.size(), out));
    }
}

TEST(packets_primitives, lenenc_str_and_ntstr)
{
    // lenenc string round-trip
    vector<char> v;
    const char* text = "hello \xe4\xb8\xad\xe6\x96\x87"; // with UTF-8
    packet_put_lenenc_str(v, text, strlen(text));
    const char* pos = v.data();
    const char* s = nullptr;
    size_t len = 0;
    EXPECT_TRUE(packet_get_lenenc_str(pos, pos + v.size(), s, len));
    EXPECT_EQ(len, strlen(text));
    EXPECT_EQ(memcmp(s, text, len), 0);

    // declared length beyond buffer -> fail
    vector<char> bad;
    packet_put_lenenc(bad, 100);
    bad.push_back('x');
    const char* bp = bad.data();
    EXPECT_FALSE(packet_get_lenenc_str(bp, bp + bad.size(), s, len));

    // ntstr round-trip (embedded NUL impossible; plain + UTF-8)
    v.clear();
    packet_put_ntstr(v, text);
    pos = v.data();
    std::string out;
    EXPECT_TRUE(packet_get_ntstr(pos, pos + v.size(), out));
    EXPECT_EQ(out, std::string(text));

    // unterminated ntstr -> fail
    vector<char> unterminated;
    for (size_t i = 0; i < 5; i++)
        unterminated.push_back('a');
    const char* up = unterminated.data();
    EXPECT_FALSE(packet_get_ntstr(up, up + 5, out));
    EXPECT_EQ(up, unterminated.data());

    // empty ntstr ("\0") is valid
    v.clear();
    packet_put_ntstr(v, "");
    pos = v.data();
    EXPECT_TRUE(packet_get_ntstr(pos, pos + v.size(), out));
    EXPECT_TRUE(out.empty());
}

// ---------------------------------------------------------------------------
// WirePacket framing
// ---------------------------------------------------------------------------

TEST(packets_wire, roundtrip)
{
    WirePacket pkt;
    pkt.seq = 0x42;
    pkt.payload = { 0x00, 0x01, 0x02, (char)0xff };

    vector<char> wire = pkt.wire();
    EXPECT_EQ(wire.size(), pkt.payload.size() + 4);
    EXPECT_EQ((uint8_t)wire[0], 4); // length
    EXPECT_EQ((uint8_t)wire[1], 0);
    EXPECT_EQ((uint8_t)wire[2], 0);
    EXPECT_EQ((uint8_t)wire[3], 0x42);

    WirePacket out;
    EXPECT_TRUE(WirePacket::unwrap(wire.data(), wire.size(), out));
    EXPECT_EQ(out.seq, pkt.seq);
    EXPECT_EQ(out.payload, pkt.payload);
}

TEST(packets_wire, empty_payload)
{
    WirePacket pkt;
    pkt.seq = 7;
    vector<char> wire = pkt.wire();
    EXPECT_EQ(wire.size(), (size_t)4);
    EXPECT_EQ((uint8_t)wire[3], 7);

    WirePacket out;
    EXPECT_TRUE(WirePacket::unwrap(wire.data(), wire.size(), out));
    EXPECT_TRUE(out.payload.empty());
}

TEST(packets_wire, malformed)
{
    // shorter than the 4-byte header
    {
        WirePacket out;
        EXPECT_FALSE(WirePacket::unwrap(nullptr, 0, out));
        char hdr[3] = { 0, 0, 0 };
        EXPECT_FALSE(WirePacket::unwrap(hdr, 3, out));
    }
    // length field beyond the buffer
    {
        vector<char> wire;
        wire.push_back(0x10);
        wire.push_back(0x00);
        wire.push_back(0x00);
        wire.push_back(0x01);
        wire.push_back('a'); // only 1 payload byte, length says 16
        WirePacket out;
        EXPECT_FALSE(WirePacket::unwrap(wire.data(), wire.size(), out));
    }
    // 3-byte length upper bound (0xffffff) parses
    {
        WirePacket pkt;
        pkt.seq = 1;
        pkt.payload.assign(0xffff, 'x');
        vector<char> wire = pkt.wire();
        WirePacket out;
        EXPECT_TRUE(WirePacket::unwrap(wire.data(), wire.size(), out));
        EXPECT_EQ(out.payload.size(), (size_t)0xffff);
    }
}

// ---------------------------------------------------------------------------
// OK / ERR / EOF
// ---------------------------------------------------------------------------

TEST(packets_ok, roundtrip)
{
    OKPacket ok;
    ok.affected = 1;
    ok.insert_id = 0x1234567890ull; // needs long lenenc
    ok.server_status = 0x0200;
    ok.warnings = 3;
    ok.message = "rows affected";

    vector<char> payload = ok.payload();
    // header + lenenc(1) + lenenc(insert) + u16 + u16 + message
    EXPECT_GT(payload.size(), (size_t)0);

    OKPacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.affected, ok.affected);
    EXPECT_EQ(out.insert_id, ok.insert_id);
    EXPECT_EQ(out.server_status, ok.server_status);
    EXPECT_EQ(out.warnings, ok.warnings);
    EXPECT_EQ(out.message, ok.message);
}

TEST(packets_ok, empty_message)
{
    OKPacket ok;
    ok.affected = 0;
    ok.insert_id = 0;
    ok.server_status = 2;

    vector<char> payload = ok.payload();
    OKPacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.affected, (uint64_t)0);
    EXPECT_TRUE(out.message.empty());
}

TEST(packets_ok, malformed)
{
    OKPacket out;
    // wrong header
    {
        vector<char> p;
        p.push_back(0xff);
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // empty input
    EXPECT_FALSE(out.decode(nullptr, 0));
    // truncated lenenc
    {
        vector<char> p;
        p.push_back(0x00);
        p.push_back(0xfc); // 2-byte lenenc, no payload
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // message with binary bytes survives
    {
        OKPacket ok;
        ok.affected = 1;
        ok.message.assign({ 'a', 0x00, (char)0xff, 'b' });
        vector<char> payload = ok.payload();
        EXPECT_TRUE(out.decode(payload.data(), payload.size()));
        EXPECT_EQ(out.message, ok.message);
    }
}

TEST(packets_err, roundtrip)
{
    ERRPacket err;
    err.code = 1045;
    err.sqlstate = "28000";
    err.message = "Access denied for user 'x'\n  (line2)";

    vector<char> payload = err.payload();
    EXPECT_EQ((uint8_t)payload[0], 0xff);

    ERRPacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.code, 1045);
    EXPECT_EQ(out.sqlstate, "28000");
    EXPECT_EQ(out.message, err.message);
}

TEST(packets_err, malformed)
{
    ERRPacket out;
    // wrong header
    {
        vector<char> p;
        p.push_back(0x00);
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // missing sqlstate marker
    {
        vector<char> p;
        p.push_back(0xff);
        packet_put_u16(p, 100);
        p.insert(p.end(), 5, 'X'); // no '#'
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // sqlstate shorter than 5
    {
        vector<char> p;
        p.push_back(0xff);
        packet_put_u16(p, 100);
        p.push_back('#');
        p.insert(p.end(), 3, 'X');
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // empty message is fine
    {
        vector<char> p;
        p.push_back(0xff);
        packet_put_u16(p, 0);
        p.push_back('#');
        p.insert(p.end(), 5, '0');
        EXPECT_TRUE(out.decode(p.data(), p.size()));
        EXPECT_TRUE(out.message.empty());
    }
}

TEST(packets_eof, roundtrip)
{
    EOFPacket eof;
    eof.warnings = 7;
    eof.server_status = 0x0200;

    vector<char> payload = eof.payload();
    EXPECT_EQ(payload.size(), (size_t)5);

    EOFPacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.warnings, 7);
    EXPECT_EQ(out.server_status, 0x0200);
}

TEST(packets_eof, malformed)
{
    EOFPacket out;
    vector<char> p;
    p.push_back(0xfe);
    EXPECT_FALSE(out.decode(p.data(), p.size())); // missing fields
    p.push_back(0x00);
    EXPECT_FALSE(out.decode(p.data(), p.size()));
    p[0] = 0x00;
    EXPECT_FALSE(out.decode(p.data(), p.size())); // wrong header
}

// ---------------------------------------------------------------------------
// Auth packets
// ---------------------------------------------------------------------------

TEST(packets_auth_switch, roundtrip)
{
    AuthSwitchPacket sw;
    sw.plugin = "mysql_native_password";
    sw.salt = "0123456789abcdefghij";

    vector<char> payload = sw.payload();
    EXPECT_EQ((uint8_t)payload[0], 0xfe);

    AuthSwitchPacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.plugin, sw.plugin);
    EXPECT_EQ(out.salt, sw.salt);
}

TEST(packets_auth_switch, malformed)
{
    AuthSwitchPacket out;
    // wrong header
    {
        vector<char> p;
        p.push_back(0x01);
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // plugin without salt
    {
        vector<char> p;
        p.push_back(0xfe);
        packet_put_ntstr(p, "mysql_native_password");
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // plugin with NUL bytes inside salt is not possible (NT), empty salt ok
    {
        vector<char> p;
        p.push_back(0xfe);
        packet_put_ntstr(p, "mysql_native_password");
        packet_put_ntstr(p, "");
        EXPECT_TRUE(out.decode(p.data(), p.size()));
        EXPECT_TRUE(out.salt.empty());
    }
}

TEST(packets_auth_more_data, roundtrip_and_malformed)
{
    AuthMoreDataPacket md;
    md.status = 0x04;
    vector<char> payload = md.payload();
    EXPECT_EQ(payload.size(), (size_t)2);

    AuthMoreDataPacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.status, (uint8_t)0x04);

    // wrong header / missing status
    payload[0] = 0x02;
    EXPECT_FALSE(out.decode(payload.data(), payload.size()));
    payload.resize(1);
    payload[0] = 0x01;
    EXPECT_FALSE(out.decode(payload.data(), payload.size()));
}

TEST(packets_public_key, roundtrip)
{
    PublicKeyPacket pk;
    pk.pem = "-----BEGIN PUBLIC KEY-----\n"
             "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8A\n"
             "-----END PUBLIC KEY-----\n";

    vector<char> payload = pk.payload();
    EXPECT_EQ((uint8_t)payload[0], 0x01);

    PublicKeyPacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.pem, pk.pem);

    // empty pem
    PublicKeyPacket empty;
    vector<char> p2 = empty.payload();
    EXPECT_TRUE(out.decode(p2.data(), p2.size()));
    EXPECT_TRUE(out.pem.empty());

    // wrong header
    p2[0] = 0x02;
    EXPECT_FALSE(out.decode(p2.data(), p2.size()));
}

// ---------------------------------------------------------------------------
// Handshake
// ---------------------------------------------------------------------------

TEST(packets_handshake, roundtrip_full)
{
    HandshakePacket hs;
    hs.server_version = "8.0.30-mock";
    hs.thread_id = 12345;
    hs.salt = "0123456789abcdefghij";
    hs.caps_low = MCP_PROTOCOL_41 | MCP_CONNECT_WITH_DB | MCP_TRANSACTIONS;
    hs.caps_high = MCP_PLUGIN_AUTH >> 16;
    hs.charset = 45;
    hs.server_status = 2;
    hs.auth_plugin = "caching_sha2_password";

    vector<char> payload = hs.payload();
    EXPECT_EQ((uint8_t)payload[0], 0x0a);

    HandshakePacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.protocol_version, (uint8_t)0x0a);
    EXPECT_EQ(out.server_version, hs.server_version);
    EXPECT_EQ(out.thread_id, 12345u);
    EXPECT_EQ(out.salt, hs.salt);
    EXPECT_TRUE(out.has_salt_part2);
    EXPECT_EQ(out.caps_low, hs.caps_low);
    EXPECT_EQ(out.caps_high, hs.caps_high);
    EXPECT_EQ(out.charset, (uint8_t)45);
    EXPECT_EQ(out.server_status, (uint16_t)2);
    EXPECT_EQ(out.auth_plugin, hs.auth_plugin);
}

TEST(packets_handshake, no_plugin)
{
    HandshakePacket hs;
    hs.server_version = "5.7.44";
    hs.salt = "abcdefghijklmnopqrst";

    vector<char> payload = hs.payload();
    HandshakePacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_TRUE(out.auth_plugin.empty());
    EXPECT_TRUE(out.has_salt_part2);
    EXPECT_EQ(out.salt, hs.salt);
}

TEST(packets_handshake, no_salt_part2)
{
    // Simulate a truncated handshake: salt part 2 absent.
    vector<char> p;
    p.push_back(0x0a);
    packet_put_ntstr(p, "5.7.0-mock");
    packet_put_u32(p, 1);
    p.insert(p.end(), 8, 's');
    p.push_back(0x00); // filler
    packet_put_u16(p, MCP_PROTOCOL_41);
    p.push_back(33);
    packet_put_u16(p, 2);
    packet_put_u16(p, 0);
    for (int i = 0; i < 11; i++)
        p.push_back(0x00);
    // NO salt part 2, NO plugin

    HandshakePacket out;
    EXPECT_TRUE(out.decode(p.data(), p.size()));
    EXPECT_FALSE(out.has_salt_part2);
    EXPECT_EQ(out.salt, std::string(8, 's'));
    EXPECT_TRUE(out.auth_plugin.empty());
}

TEST(packets_handshake, malformed)
{
    HandshakePacket out;
    // empty
    EXPECT_FALSE(out.decode(nullptr, 0));
    // protocol version only
    {
        vector<char> p;
        p.push_back(0x0a);
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // no thread id
    {
        vector<char> p;
        p.push_back(0x0a);
        packet_put_ntstr(p, "8.0");
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // salt part1 truncated
    {
        vector<char> p;
        p.push_back(0x0a);
        packet_put_ntstr(p, "8.0");
        packet_put_u32(p, 1);
        p.insert(p.end(), 4, 's'); // only 4 of 8 salt bytes
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
}

// ---------------------------------------------------------------------------
// Handshake response (client -> server)
// ---------------------------------------------------------------------------

TEST(packets_handshake_response, roundtrip_full)
{
    HandshakeResponsePacket hs;
    hs.caps = 0x000f0000;
    hs.max_packet = 16777216;
    hs.charset = 45;
    hs.username = "root";
    hs.auth_token = { 1, 2, 3, 4, 5 }; // arbitrary 5-byte token
    hs.database = "mydb";
    hs.plugin = "caching_sha2_password";

    vector<char> payload = hs.payload();
    EXPECT_EQ(payload.size(),
        (size_t)4 + 4 + 1 + 23 + 5 + 1 + 5 + 5 + 22);

    HandshakeResponsePacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.caps, hs.caps);
    EXPECT_EQ(out.max_packet, 16777216u);
    EXPECT_EQ(out.charset, (uint8_t)45);
    EXPECT_EQ(out.username, "root");
    EXPECT_EQ(out.auth_token, hs.auth_token);
    EXPECT_EQ(out.database, "mydb");
    EXPECT_EQ(out.plugin, hs.plugin);
}

TEST(packets_handshake_response, empty_token_and_minimal)
{
    // no token, no db, no plugin
    HandshakeResponsePacket hs;
    hs.caps = 1;
    hs.username = "u";

    vector<char> payload = hs.payload();
    HandshakeResponsePacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_TRUE(out.auth_token.empty());
    EXPECT_TRUE(out.database.empty());
    EXPECT_TRUE(out.plugin.empty());
    EXPECT_EQ(out.username, "u");
}

TEST(packets_handshake_response, malformed)
{
    HandshakeResponsePacket out;
    EXPECT_FALSE(out.decode(nullptr, 0));
    // caps only
    {
        vector<char> p;
        packet_put_u32(p, 1);
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // filler truncated
    {
        vector<char> p;
        packet_put_u32(p, 1);
        packet_put_u32(p, 2);
        p.push_back(33);
        p.insert(p.end(), 10, 0); // 10 of 23 filler bytes
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // token length beyond buffer
    {
        vector<char> p;
        packet_put_u32(p, 1);
        packet_put_u32(p, 2);
        p.push_back(33);
        for (int i = 0; i < 23; i++)
            p.push_back(0);
        packet_put_ntstr(p, "user");
        p.push_back(0x64); // claims 100-byte token
        p.push_back('x');
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // unterminated username
    {
        vector<char> p;
        packet_put_u32(p, 1);
        packet_put_u32(p, 2);
        p.push_back(33);
        for (int i = 0; i < 23; i++)
            p.push_back(0);
        p.insert(p.end(), 3, 'u'); // no NUL
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
}

// ---------------------------------------------------------------------------
// Column / Row (result-set packets)
// ---------------------------------------------------------------------------

TEST(packets_column, roundtrip)
{
    ColumnPacket col;
    col.schema = "db";
    col.table = "tbl";
    col.org_table = "tbl";
    col.name = "\xe5\xad\x97\xe6\xae\xb5"; // "字段" in UTF-8
    col.org_name = col.name;
    col.charset = 45;
    col.column_length = 1000;
    col.type = MFTYPE_VAR_STRING;
    col.flags = 0x0010;
    col.decimals = 2;

    vector<char> payload = col.payload();
    ColumnPacket out;
    EXPECT_TRUE(out.decode(payload.data(), payload.size()));
    EXPECT_EQ(out.catalog, std::string("def"));
    EXPECT_EQ(out.schema, col.schema);
    EXPECT_EQ(out.table, col.table);
    EXPECT_EQ(out.org_table, col.org_table);
    EXPECT_EQ(out.name, col.name);
    EXPECT_EQ(out.org_name, col.org_name);
    EXPECT_EQ(out.charset, (uint16_t)45);
    EXPECT_EQ(out.column_length, 1000u);
    EXPECT_EQ(out.type, (uint8_t)MFTYPE_VAR_STRING);
    EXPECT_EQ(out.flags, (uint16_t)0x0010);
    EXPECT_EQ(out.decimals, (uint8_t)2);
}

TEST(packets_column, malformed)
{
    ColumnPacket out;
    EXPECT_FALSE(out.decode(nullptr, 0));
    // catalog only
    {
        vector<char> p;
        packet_put_lenenc_str(p, "def");
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // fixed-fields length marker wrong
    {
        vector<char> p;
        packet_put_lenenc_str(p, "def");
        packet_put_lenenc_str(p, "db");
        packet_put_lenenc_str(p, "t");
        packet_put_lenenc_str(p, "t");
        packet_put_lenenc_str(p, "n");
        packet_put_lenenc_str(p, "n");
        p.push_back(0x0d); // wrong: must be 0x0c
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // trailing garbage after fixed fields is tolerated (filler is 2 bytes)
    {
        vector<char> p;
        packet_put_lenenc_str(p, "def");
        packet_put_lenenc_str(p, "db");
        packet_put_lenenc_str(p, "t");
        packet_put_lenenc_str(p, "t");
        packet_put_lenenc_str(p, "n");
        packet_put_lenenc_str(p, "n");
        p.push_back(0x0c);
        packet_put_u16(p, 33);
        packet_put_u32(p, 0xffffffff);
        p.push_back(MFTYPE_LONG);
        packet_put_u16(p, 0);
        p.push_back(0);
        packet_put_u16(p, 0);
        p.push_back('x'); // one extra byte
        EXPECT_TRUE(out.decode(p.data(), p.size()));
    }
}

TEST(packets_row, roundtrip_and_mixed)
{
    // non-NULL values
    RowPacket row;
    row.cells = { { false, "abc" }, { false, "" }, { false, "\x00\x01" } };
    vector<char> payload = row.payload();
    EXPECT_EQ((uint8_t)payload[0], 3); // lenenc "abc"

    RowPacket out;
    size_t count = 0;
    EXPECT_TRUE(out.decode(payload.data(), payload.size(), &count));
    EXPECT_EQ(count, (size_t)3);
    EXPECT_EQ(out.cells, row.cells);

    // NULL mixed in: lenenc "a" = [0x01, 'a'], then 0xfb, then lenenc "b"
    row.cells = { { false, "a" }, { true, "" }, { false, "b" } };
    payload = row.payload();
    EXPECT_EQ((uint8_t)payload[2], 0xfb);
    EXPECT_TRUE(out.decode(payload.data(), payload.size(), &count));
    EXPECT_EQ(count, (size_t)3);
    EXPECT_TRUE(out.cells[1].first);
    EXPECT_EQ(out.cells[1].second, "");

    // empty row (zero columns)
    row.cells.clear();
    payload = row.payload();
    EXPECT_TRUE(payload.empty());
    EXPECT_TRUE(out.decode(payload.data(), payload.size(), &count));
    EXPECT_EQ(count, (size_t)0);
}

TEST(packets_row, malformed)
{
    RowPacket out;
    // declared lenenc length beyond buffer
    {
        vector<char> p;
        p.push_back(0xfd); // 3-byte length
        packet_put_u24(p, 1000);
        p.push_back('x');
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // 0xff marker is not a valid value start
    {
        vector<char> p;
        p.push_back(0xff);
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
    // NULL then truncated lenenc
    {
        vector<char> p;
        p.push_back(0xfb);
        p.push_back(0xfc); // 2-byte lenenc, no bytes
        EXPECT_FALSE(out.decode(p.data(), p.size()));
    }
}

// ---------------------------------------------------------------------------
// Cross-check: mock packet builders stay byte-compatible with the objects
// ---------------------------------------------------------------------------

TEST(packets_crosscheck, mock_builders_decode_as_packets)
{
    // ok_packet() output must decode via OKPacket with identical fields
    {
        vector<char> wire = ok_packet(3, 2, 9, 0x0200, "msg");
        WirePacket wp;
        ASSERT_TRUE(WirePacket::unwrap(wire.data(), wire.size(), wp));
        EXPECT_EQ(wp.seq, (uint8_t)3);
        OKPacket ok;
        ASSERT_TRUE(ok.decode(wp.payload.data(), wp.payload.size()));
        EXPECT_EQ(ok.affected, (uint64_t)2);
        EXPECT_EQ(ok.insert_id, (uint64_t)9);
        EXPECT_EQ(ok.server_status, (uint16_t)0x0200);
        EXPECT_EQ(ok.message, "msg");
    }
    // err_packet()
    {
        vector<char> wire = err_packet(1, 1062, "23000", "Duplicate entry");
        WirePacket wp;
        ASSERT_TRUE(WirePacket::unwrap(wire.data(), wire.size(), wp));
        ERRPacket err;
        ASSERT_TRUE(err.decode(wp.payload.data(), wp.payload.size()));
        EXPECT_EQ(err.code, 1062);
        EXPECT_EQ(err.sqlstate, "23000");
        EXPECT_EQ(err.message, "Duplicate entry");
    }
    // handshake_packet() (with default plugin)
    {
        vector<char> wire = handshake_packet("0123456789abcdefghij");
        WirePacket wp;
        ASSERT_TRUE(WirePacket::unwrap(wire.data(), wire.size(), wp));
        HandshakePacket hs;
        ASSERT_TRUE(hs.decode(wp.payload.data(), wp.payload.size()));
        EXPECT_EQ(hs.salt, "0123456789abcdefghij");
        EXPECT_EQ(hs.auth_plugin, "mysql_native_password");
        EXPECT_TRUE(hs.caps_low & MCP_PROTOCOL_41);
    }
    // result_set row packet
    {
        vector<char> wire = row_packet(5, { "v1", "v2" });
        WirePacket wp;
        ASSERT_TRUE(WirePacket::unwrap(wire.data(), wire.size(), wp));
        RowPacket row;
        ASSERT_TRUE(row.decode(wp.payload.data(), wp.payload.size()));
        ASSERT_EQ(row.cells.size(), (size_t)2);
        EXPECT_EQ(row.cells[0].second, "v1");
        EXPECT_EQ(row.cells[1].second, "v2");
    }
}
