/*
 * MySQL protocol packet objects.
 *
 * Pure wire-format layer shared by the client (Connection.cpp / fibjs) and
 * the test mock server (umysql/test). Each packet type knows how to encode
 * itself into a payload (without the 4-byte wire header) and how to decode
 * itself from a payload:
 *
 *   OKPacket ok;
 *   ok.affected = 1;
 *   std::vector<char> payload = ok.payload();       // encode
 *   WirePacket pkt;                                  // add wire header
 *   pkt.seq = 1; pkt.payload = payload;
 *   std::vector<char> wire = pkt.wire();
 *
 *   WirePacket in;
 *   if (WirePacket::unwrap(wire.data(), wire.size(), in)) {
 *       OKPacket parsed;
 *       if (parsed.decode(in.payload.data(), in.payload.size())) { ... }
 *   }
 *
 * All functions are inline; no link dependencies. decode() returns false on
 * malformed input (never asserts / never throws).
 */

#ifndef __UMYSQL_PACKETS_H__
#define __UMYSQL_PACKETS_H__

#include "mysqldefs.h"
#include <cstdint>
#include <cstring>
#include <string>
#include <utility>
#include <vector>

// ---------------------------------------------------------------------------
// Wire-format primitives
// ---------------------------------------------------------------------------

// Little-endian writers (append to v)
inline void packet_put_u16(std::vector<char>& v, uint16_t x)
{
    v.push_back((char)(x & 0xff));
    v.push_back((char)((x >> 8) & 0xff));
}

inline void packet_put_u24(std::vector<char>& v, uint32_t x)
{
    v.push_back((char)(x & 0xff));
    v.push_back((char)((x >> 8) & 0xff));
    v.push_back((char)((x >> 16) & 0xff));
}

inline void packet_put_u32(std::vector<char>& v, uint32_t x)
{
    v.push_back((char)(x & 0xff));
    v.push_back((char)((x >> 8) & 0xff));
    v.push_back((char)((x >> 16) & 0xff));
    v.push_back((char)((x >> 24) & 0xff));
}

inline void packet_put_u64(std::vector<char>& v, uint64_t x)
{
    for (int i = 0; i < 8; i++)
        v.push_back((char)((x >> (8 * i)) & 0xff));
}

// Length-encoded integer (text protocol)
inline void packet_put_lenenc(std::vector<char>& v, uint64_t x)
{
    if (x < 251) {
        v.push_back((char)x);
    } else if (x <= 0xffff) {
        v.push_back(0xfc);
        packet_put_u16(v, (uint16_t)x);
    } else if (x <= 0xffffff) {
        v.push_back(0xfd);
        packet_put_u24(v, (uint32_t)x);
    } else {
        v.push_back(0xfe);
        packet_put_u64(v, x);
    }
}

inline void packet_put_lenenc_str(std::vector<char>& v, const char* s, size_t len)
{
    packet_put_lenenc(v, len);
    v.insert(v.end(), s, s + len);
}

inline void packet_put_lenenc_str(std::vector<char>& v, const std::string& s)
{
    packet_put_lenenc_str(v, s.data(), s.size());
}

// NUL-terminated string
inline void packet_put_ntstr(std::vector<char>& v, const char* s)
{
    v.insert(v.end(), s, s + strlen(s) + 1);
}

inline void packet_put_ntstr(std::vector<char>& v, const std::string& s)
{
    v.insert(v.end(), s.begin(), s.end());
    v.push_back(0);
}

// Cursor-style little-endian readers. pos is advanced past the consumed
// bytes; on failure (out of bounds) pos is left unchanged and false returned.
// All bounds are checked against end.

inline bool packet_get_u16(const char*& pos, const char* end, uint16_t& out)
{
    if (end - pos < 2)
        return false;
    out = (uint16_t)(uint8_t)pos[0] | ((uint16_t)(uint8_t)pos[1] << 8);
    pos += 2;
    return true;
}

inline bool packet_get_u24(const char*& pos, const char* end, uint32_t& out)
{
    if (end - pos < 3)
        return false;
    out = (uint32_t)(uint8_t)pos[0] | ((uint32_t)(uint8_t)pos[1] << 8) |
        ((uint32_t)(uint8_t)pos[2] << 16);
    pos += 3;
    return true;
}

inline bool packet_get_u32(const char*& pos, const char* end, uint32_t& out)
{
    if (end - pos < 4)
        return false;
    out = (uint32_t)(uint8_t)pos[0] | ((uint32_t)(uint8_t)pos[1] << 8) |
        ((uint32_t)(uint8_t)pos[2] << 16) | ((uint32_t)(uint8_t)pos[3] << 24);
    pos += 4;
    return true;
}

inline bool packet_get_u64(const char*& pos, const char* end, uint64_t& out)
{
    if (end - pos < 8)
        return false;
    out = 0;
    for (int i = 0; i < 8; i++)
        out |= (uint64_t)(uint8_t)pos[i] << (8 * i);
    pos += 8;
    return true;
}

inline bool packet_get_lenenc(const char*& pos, const char* end, uint64_t& out)
{
    if (pos >= end)
        return false;
    uint8_t first = (uint8_t)*pos++;
    if (first < 251) {
        out = first;
        return true;
    }
    if (first == 0xfc) {
        uint16_t v;
        if (!packet_get_u16(pos, end, v))
            return false;
        out = v;
        return true;
    }
    if (first == 0xfd) {
        uint32_t v;
        if (!packet_get_u24(pos, end, v))
            return false;
        out = v;
        return true;
    }
    if (first == 0xfe) {
        uint64_t v;
        if (!packet_get_u64(pos, end, v))
            return false;
        out = v;
        return true;
    }
    // 0xfb = NULL, 0xff = error marker: not a length
    return false;
}

// Length-encoded string; on success s points into [pos, end).
inline bool packet_get_lenenc_str(const char*& pos, const char* end,
    const char*& s, size_t& len)
{
    uint64_t n;
    if (!packet_get_lenenc(pos, end, n))
        return false;
    if ((size_t)(end - pos) < n)
        return false;
    s = pos;
    len = (size_t)n;
    pos += n;
    return true;
}

// NUL-terminated string; on success s points into [pos, end).
inline bool packet_get_ntstr(const char*& pos, const char* end,
    const char*& s, size_t& len)
{
    const char* p = pos;
    while (p < end && *p != 0)
        p++;
    if (p == end)
        return false; // unterminated
    s = pos;
    len = (size_t)(p - pos);
    pos = p + 1;
    return true;
}

inline bool packet_get_ntstr(const char*& pos, const char* end, std::string& out)
{
    const char* s;
    size_t len;
    if (!packet_get_ntstr(pos, end, s, len))
        return false;
    out.assign(s, len);
    return true;
}

// ---------------------------------------------------------------------------
// WirePacket: 3-byte LE length + 1-byte seq + payload
// ---------------------------------------------------------------------------

struct WirePacket {
    uint8_t seq = 0;
    std::vector<char> payload;

    // Encode this packet into its full wire representation.
    std::vector<char> wire() const
    {
        std::vector<char> out;
        packet_put_u24(out, (uint32_t)payload.size());
        out.push_back((char)seq);
        out.insert(out.end(), payload.begin(), payload.end());
        return out;
    }

    // Decode one wire packet. Returns false if data is shorter than a header
    // or does not contain the full payload announced by the length field.
    static bool unwrap(const char* data, size_t len, WirePacket& out)
    {
        if (len < 4)
            return false;
        uint32_t payload_len = (uint32_t)(uint8_t)data[0] |
            ((uint32_t)(uint8_t)data[1] << 8) | ((uint32_t)(uint8_t)data[2] << 16);
        if (4 + payload_len > len)
            return false;
        out.seq = (uint8_t)data[3];
        out.payload.assign(data + 4, data + 4 + payload_len);
        return true;
    }

    static bool unwrap(const std::vector<char>& data, WirePacket& out)
    {
        return unwrap(data.data(), data.size(), out);
    }
};

// ---------------------------------------------------------------------------
// Packet payload types
// ---------------------------------------------------------------------------

// OK packet: 0x00 header + affected/insert_id/status/warnings/message
struct OKPacket {
    uint64_t affected = 0;
    uint64_t insert_id = 0;
    uint16_t server_status = 0;
    uint16_t warnings = 0;
    std::string message;

    std::vector<char> payload() const
    {
        std::vector<char> p;
        p.push_back(0x00);
        packet_put_lenenc(p, affected);
        packet_put_lenenc(p, insert_id);
        packet_put_u16(p, server_status);
        packet_put_u16(p, warnings);
        p.insert(p.end(), message.begin(), message.end());
        return p;
    }

    bool decode(const char* data, size_t len)
    {
        const char* pos = data;
        const char* end = data + len;
        if (pos >= end || (uint8_t)*pos++ != 0x00)
            return false;
        uint64_t v;
        if (!packet_get_lenenc(pos, end, affected) ||
            !packet_get_lenenc(pos, end, insert_id) ||
            !packet_get_u16(pos, end, server_status) ||
            !packet_get_u16(pos, end, warnings))
            return false;
        message.assign(pos, end - pos);
        (void)v;
        return true;
    }
};

// ERR packet: 0xff header + code + sqlstate marker + sqlstate + message
struct ERRPacket {
    uint16_t code = 0;
    std::string sqlstate; // 5 chars, without the '#' marker
    std::string message;

    std::vector<char> payload() const
    {
        std::vector<char> p;
        p.push_back(0xff);
        packet_put_u16(p, code);
        p.push_back('#'); // sqlstate marker
        p.insert(p.end(), sqlstate.begin(), sqlstate.end());
        p.insert(p.end(), message.begin(), message.end());
        return p;
    }

    bool decode(const char* data, size_t len)
    {
        const char* pos = data;
        const char* end = data + len;
        if (pos >= end || (uint8_t)*pos++ != 0xff)
            return false;
        if (!packet_get_u16(pos, end, code))
            return false;
        if (pos >= end || *pos++ != '#')
            return false;
        if (end - pos < 5)
            return false;
        sqlstate.assign(pos, 5);
        pos += 5;
        message.assign(pos, end - pos);
        return true;
    }
};

// EOF packet: 0xfe header + warnings + status
struct EOFPacket {
    uint16_t warnings = 0;
    uint16_t server_status = 0;

    std::vector<char> payload() const
    {
        std::vector<char> p;
        p.push_back(0xfe);
        packet_put_u16(p, warnings);
        packet_put_u16(p, server_status);
        return p;
    }

    bool decode(const char* data, size_t len)
    {
        const char* pos = data;
        const char* end = data + len;
        if (pos >= end || (uint8_t)*pos++ != 0xfe)
            return false;
        return packet_get_u16(pos, end, warnings) &&
            packet_get_u16(pos, end, server_status);
    }
};

// AuthSwitchRequest: 0xfe header + plugin NT + salt NT
struct AuthSwitchPacket {
    std::string plugin;
    std::string salt;

    std::vector<char> payload() const
    {
        std::vector<char> p;
        p.push_back(0xfe);
        packet_put_ntstr(p, plugin);
        packet_put_ntstr(p, salt);
        return p;
    }

    bool decode(const char* data, size_t len)
    {
        const char* pos = data;
        const char* end = data + len;
        if (pos >= end || (uint8_t)*pos++ != 0xfe)
            return false;
        return packet_get_ntstr(pos, end, plugin) &&
            packet_get_ntstr(pos, end, salt);
    }
};

// AuthMoreData (caching_sha2_password): 0x01 header + status byte
// (0x03 = fast auth ok, 0x04 = full authentication needed)
struct AuthMoreDataPacket {
    uint8_t status = 0;

    std::vector<char> payload() const
    {
        std::vector<char> p;
        p.push_back(0x01);
        p.push_back((char)status);
        return p;
    }

    bool decode(const char* data, size_t len)
    {
        const char* pos = data;
        const char* end = data + len;
        if (pos >= end || (uint8_t)*pos++ != 0x01)
            return false;
        if (pos >= end)
            return false;
        status = (uint8_t)*pos++;
        return true;
    }
};

// Server public key (caching_sha2 full auth): 0x01 header + PEM bytes
struct PublicKeyPacket {
    std::string pem;

    std::vector<char> payload() const
    {
        std::vector<char> p;
        p.push_back(0x01);
        p.insert(p.end(), pem.begin(), pem.end());
        return p;
    }

    bool decode(const char* data, size_t len)
    {
        const char* pos = data;
        const char* end = data + len;
        if (pos >= end || (uint8_t)*pos++ != 0x01)
            return false;
        pem.assign(pos, end - pos);
        return true;
    }
};

// Handshake v10 (server -> client, protocol 4.1+)
struct HandshakePacket {
    uint8_t protocol_version = 0x0a;
    std::string server_version;
    uint32_t thread_id = 0;
    std::string salt;         // 20 bytes without trailing NUL
    bool has_salt_part2 = false; // set by decode(); false for truncated handshakes
    uint16_t caps_low = 0;
    uint16_t caps_high = 0;
    uint8_t charset = 33;
    uint16_t server_status = 2;
    std::string auth_plugin;  // empty if absent

    std::vector<char> payload() const
    {
        std::vector<char> p;
        p.push_back((char)protocol_version);
        packet_put_ntstr(p, server_version);
        packet_put_u32(p, thread_id);
        p.insert(p.end(), salt.begin(), salt.begin() + (salt.size() < 8 ? salt.size() : 8));
        p.push_back(0x00); // filler
        packet_put_u16(p, caps_low);
        p.push_back((char)charset);
        packet_put_u16(p, server_status);
        packet_put_u16(p, caps_high);
        for (int i = 0; i < 11; i++)
            p.push_back(0x00); // filler
        if (salt.size() > 8)
            p.insert(p.end(), salt.begin() + 8, salt.end());
        p.push_back(0x00); // NUL terminator of salt part 2
        if (!auth_plugin.empty())
            packet_put_ntstr(p, auth_plugin);
        return p;
    }

    bool decode(const char* data, size_t len)
    {
        const char* pos = data;
        const char* end = data + len;
        if (pos >= end)
            return false;
        protocol_version = (uint8_t)*pos++;
        if (!packet_get_ntstr(pos, end, server_version) ||
            !packet_get_u32(pos, end, thread_id))
            return false;
        if (end - pos < 8)
            return false;
        std::string part1(pos, 8);
        pos += 8;
        if (pos >= end)
            return false;
        pos++; // filler
        if (!packet_get_u16(pos, end, caps_low))
            return false;
        if (pos >= end)
            return false;
        charset = (uint8_t)*pos++;
        if (!packet_get_u16(pos, end, server_status) ||
            !packet_get_u16(pos, end, caps_high))
            return false;
        if (end - pos < 11)
            return false;
        pos += 11; // filler
        // salt part 2 + optional plugin
        if (pos < end) {
            const char* s;
            size_t slen;
            if (!packet_get_ntstr(pos, end, s, slen))
                return false;
            salt = part1 + std::string(s, slen);
            has_salt_part2 = true;
            if (pos < end) {
                if (!packet_get_ntstr(pos, end, auth_plugin))
                    return false;
            }
        } else {
            salt = part1;
        }
        return true;
    }
};

// Handshake response (client -> server)
struct HandshakeResponsePacket {
    uint32_t caps = 0;
    uint32_t max_packet = 0;
    uint8_t charset = 0;
    std::string username;
    std::vector<char> auth_token; // empty if no auth
    std::string database;         // empty if absent
    std::string plugin;           // empty if absent

    std::vector<char> payload() const
    {
        std::vector<char> p;
        packet_put_u32(p, caps);
        packet_put_u32(p, max_packet);
        p.push_back((char)charset);
        for (int i = 0; i < 23; i++)
            p.push_back(0x00); // filler
        packet_put_ntstr(p, username);
        p.push_back((char)auth_token.size());
        p.insert(p.end(), auth_token.begin(), auth_token.end());
        if (!database.empty())
            packet_put_ntstr(p, database);
        if (!plugin.empty())
            packet_put_ntstr(p, plugin);
        return p;
    }

    bool decode(const char* data, size_t len)
    {
        const char* pos = data;
        const char* end = data + len;
        if (!packet_get_u32(pos, end, caps) ||
            !packet_get_u32(pos, end, max_packet))
            return false;
        if (pos >= end)
            return false;
        charset = (uint8_t)*pos++;
        if (end - pos < 23)
            return false;
        pos += 23; // filler
        if (!packet_get_ntstr(pos, end, username))
            return false;
        if (pos >= end)
            return false;
        uint8_t token_len = (uint8_t)*pos++;
        if ((size_t)(end - pos) < token_len)
            return false;
        auth_token.assign(pos, pos + token_len);
        pos += token_len;
        // optional database and plugin
        std::string db;
        if (pos < end) {
            if (!packet_get_ntstr(pos, end, db))
                return false;
            if (pos < end) {
                if (!packet_get_ntstr(pos, end, plugin))
                    return false;
            }
        }
        database = db;
        return true;
    }
};

// Column definition (protocol 4.1).
// NOTE: text-protocol column packets have NO header byte; the payload starts
// directly with the lenenc catalog string ("def").
struct ColumnPacket {
    std::string catalog = "def";
    std::string schema;
    std::string table;
    std::string org_table;
    std::string name;
    std::string org_name;
    uint16_t charset = 33;
    uint32_t column_length = 0xffffffff;
    uint8_t type = 0;
    uint16_t flags = 0;
    uint8_t decimals = 0;

    std::vector<char> payload() const
    {
        std::vector<char> p;
        packet_put_lenenc_str(p, catalog);
        packet_put_lenenc_str(p, schema);
        packet_put_lenenc_str(p, table);
        packet_put_lenenc_str(p, org_table);
        packet_put_lenenc_str(p, name);
        packet_put_lenenc_str(p, org_name);
        p.push_back(0x0c); // length of fixed fields
        packet_put_u16(p, charset);
        packet_put_u32(p, column_length);
        p.push_back((char)type);
        packet_put_u16(p, flags);
        p.push_back((char)decimals);
        packet_put_u16(p, 0); // filler
        return p;
    }

    bool decode(const char* data, size_t len)
    {
        const char* pos = data;
        const char* end = data + len;
        const char* s;
        size_t slen;
        if (!packet_get_lenenc_str(pos, end, s, slen))
            return false;
        catalog.assign(s, slen);
        if (!packet_get_lenenc_str(pos, end, s, slen))
            return false;
        schema.assign(s, slen);
        if (!packet_get_lenenc_str(pos, end, s, slen))
            return false;
        table.assign(s, slen);
        if (!packet_get_lenenc_str(pos, end, s, slen))
            return false;
        org_table.assign(s, slen);
        if (!packet_get_lenenc_str(pos, end, s, slen))
            return false;
        name.assign(s, slen);
        if (!packet_get_lenenc_str(pos, end, s, slen))
            return false;
        org_name.assign(s, slen);
        if (pos >= end || (uint8_t)*pos++ != 0x0c)
            return false;
        if (!packet_get_u16(pos, end, charset) ||
            !packet_get_u32(pos, end, column_length))
            return false;
        if (pos >= end)
            return false;
        type = (uint8_t)*pos++;
        if (!packet_get_u16(pos, end, flags))
            return false;
        if (pos >= end)
            return false;
        decimals = (uint8_t)*pos++;
        if (end - pos < 2)
            return false;
        return true;
    }
};

// Text-protocol row: lenenc value sequence, 0xfb marks NULL.
struct RowPacket {
    std::vector<std::pair<bool, std::string>> cells; // first=true => NULL

    std::vector<char> payload() const
    {
        std::vector<char> p;
        for (size_t i = 0; i < cells.size(); i++) {
            if (cells[i].first)
                p.push_back((char)0xfb); // NULL
            else
                packet_put_lenenc_str(p, cells[i].second);
        }
        return p;
    }

    // Decode into cells. Returns false on malformed payload; the number of
    // decoded cells is reported via out_count (may be less than cells.size()
    // if the caller pre-sized for the expected column count).
    bool decode(const char* data, size_t len, size_t* out_count = nullptr)
    {
        const char* pos = data;
        const char* end = data + len;
        cells.clear();
        while (pos < end) {
            uint8_t first = (uint8_t)*pos;
            if (first == 0xfb) {
                pos++;
                cells.push_back(std::make_pair(true, std::string()));
                continue;
            }
            const char* s;
            size_t slen;
            if (!packet_get_lenenc_str(pos, end, s, slen))
                return false;
            cells.push_back(std::make_pair(false, std::string(s, slen)));
        }
        if (out_count)
            *out_count = cells.size();
        return true;
    }
};

#endif // __UMYSQL_PACKETS_H__
