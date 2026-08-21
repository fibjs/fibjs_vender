/*
 * Mock infrastructure for standalone umysql unit tests.
 *
 * umysql does all I/O through the UMConnectionCAPI function-pointer struct,
 * which makes it trivially mockable: we inject a fake socket that replays
 * pre-built MySQL protocol bytes (no real server, no network, no fibjs).
 *
 * Layout:
 *   - protocol packet builders (handshake / OK / ERR / EOF / column / row)
 *   - MockSocket: replay buffer (recv) + capture buffer (send), chunking support
 *   - MockResult: captures resultSetField / resultRow* / resultOK callbacks
 *   - MockCAPI: fills UMConnectionCAPI with the mocks above
 */

#ifndef __UMYSQL_TEST_MOCK_SERVER_H__
#define __UMYSQL_TEST_MOCK_SERVER_H__

#include "Connection.h"
#include "PacketReader.h"
#include "PacketWriter.h"
#include "Packets.h"
#include "mysqldefs.h"
#include <gtest/gtest.h>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

namespace umysql_test {

// ---------------------------------------------------------------------------
// Wire-packet helpers (thin wrappers over Packets.h)
// ---------------------------------------------------------------------------

// Wrap a payload into a wire packet: 3-byte LE length + 1-byte seq + payload
inline std::vector<char> wrap_packet(const std::vector<char>& payload, uint8_t seq)
{
    WirePacket pkt;
    pkt.seq = seq;
    pkt.payload = payload;
    return pkt.wire();
}

// ---------------------------------------------------------------------------
// Server packet builders
// ---------------------------------------------------------------------------

// Handshake v10 (protocol 4.1+). salt must be at least 20 chars without NUL.
inline std::vector<char> handshake_packet_ex(const char* salt,
    uint16_t caps_low, const char* auth_plugin, uint16_t caps_high)
{
    HandshakePacket hs;
    hs.server_version = "8.0.30-mock";
    hs.thread_id = 12345;
    hs.salt = salt; // full 20 bytes; payload() splits part1/part2
    hs.caps_low = caps_low;
    hs.caps_high = (uint16_t)(caps_high | (MCP_PLUGIN_AUTH >> 16));
    hs.charset = 33;
    hs.server_status = 2;
    hs.auth_plugin = auth_plugin;
    return wrap_packet(hs.payload(), 0);
}

// Standard handshake: lower caps include PROTOCOL_41 | CONNECT_WITH_DB |
// TRANSACTIONS | SECURE_CONNECTION. MULTI_STATEMENTS/MULTI_RESULTS live in the
// upper 16 bits and are implied by the server version >= 5 anyway
// (the client ORs them in during processHandshake).
inline std::vector<char> handshake_packet(const char* salt,
    const char* auth_plugin = "mysql_native_password",
    uint16_t caps_high = 0)
{
    return handshake_packet_ex(salt,
        MCP_PROTOCOL_41 | MCP_CONNECT_WITH_DB | MCP_TRANSACTIONS | MCP_SECURE_CONNECTION,
        auth_plugin, caps_high);
}

// Handshake v10 truncated right after the 11-byte filler: no auth-plugin-data
// part 2 and no plugin name. Triggers "Authentication < 4.1 not supported" (2).
// (Kept manual because HandshakePacket always writes salt part 2.)
inline std::vector<char> handshake_truncated_packet()
{
    const char* salt = "01234567";
    std::vector<char> p;
    p.push_back(0x0a); // protocol version 10
    packet_put_ntstr(p, "8.0.30-mock");
    packet_put_u32(p, 12345);
    p.insert(p.end(), salt, salt + 8);
    p.push_back(0x00);
    packet_put_u16(p, MCP_PROTOCOL_41 | MCP_CONNECT_WITH_DB);
    p.push_back(33);
    packet_put_u16(p, 2);
    packet_put_u16(p, 0);
    for (int i = 0; i < 11; i++)
        p.push_back(0x00);
    // NO auth-plugin-data-part-2
    return wrap_packet(p, 0);
}

// AuthSwitchRequest (handshake response): 0xfe + plugin NTString + salt NTString
inline std::vector<char> auth_switch_packet(uint8_t seq, const char* plugin,
    const char* salt)
{
    AuthSwitchPacket sw;
    sw.plugin = plugin;
    sw.salt = salt;
    return wrap_packet(sw.payload(), seq);
}

// AuthMoreData (caching_sha2_password): 0x01 + payload
// (0x03 = fast auth ok, 0x04 = full authentication needed)
inline std::vector<char> auth_more_data_packet(uint8_t seq, uint8_t status)
{
    AuthMoreDataPacket md;
    md.status = status;
    return wrap_packet(md.payload(), seq);
}

// Server public key (caching_sha2 full auth): 0x01 + PEM
inline std::vector<char> public_key_packet(uint8_t seq, const std::string& pem)
{
    PublicKeyPacket pk;
    pk.pem = pem;
    return wrap_packet(pk.payload(), seq);
}

// OK packet payload
inline std::vector<char> ok_payload(uint64_t affected, uint64_t insert_id,
    uint16_t server_status, const char* message = "")
{
    OKPacket ok;
    ok.affected = affected;
    ok.insert_id = insert_id;
    ok.server_status = server_status;
    ok.message = message ? message : "";
    return ok.payload();
}

inline std::vector<char> ok_packet(uint8_t seq, uint64_t affected,
    uint64_t insert_id, uint16_t server_status, const char* message = "")
{
    return wrap_packet(ok_payload(affected, insert_id, server_status, message), seq);
}

// ERR packet payload
inline std::vector<char> err_payload(uint16_t code, const char* sqlstate, const char* message)
{
    ERRPacket err;
    err.code = code;
    err.sqlstate = sqlstate;
    err.message = message;
    return err.payload();
}

inline std::vector<char> err_packet(uint8_t seq, uint16_t code,
    const char* sqlstate, const char* message)
{
    return wrap_packet(err_payload(code, sqlstate, message), seq);
}

// EOF packet payload (used both as column-EOF and rowset-EOF)
inline std::vector<char> eof_payload(uint16_t server_status)
{
    EOFPacket eof;
    eof.server_status = server_status;
    return eof.payload();
}

inline std::vector<char> eof_packet(uint8_t seq, uint16_t server_status)
{
    return wrap_packet(eof_payload(server_status), seq);
}

// Column definition (protocol 4.1) payload.
// NOTE: text-protocol column packets have NO header byte; the payload starts
// directly with the lenenc catalog string ("def").
inline std::vector<char> column_payload(const char* name, uint8_t type,
    uint16_t flags = 0, uint16_t charset = 33)
{
    ColumnPacket col;
    col.name = name;
    col.org_name = name;
    col.type = type;
    col.flags = flags;
    col.charset = charset;
    return col.payload();
}

inline std::vector<char> column_packet(uint8_t seq, const char* name, uint8_t type,
    uint16_t flags = 0, uint16_t charset = 33)
{
    return wrap_packet(column_payload(name, type, flags, charset), seq);
}

// Text row payload; all values are non-NULL (empty string = lenenc 0).
// NOTE: text-protocol row packets have NO header byte; the payload is the
// lenenc value sequence.
inline std::vector<char> row_payload(const std::vector<std::string>& values)
{
    RowPacket row;
    for (size_t i = 0; i < values.size(); i++)
        row.cells.push_back(std::make_pair(false, values[i]));
    return row.payload();
}

inline std::vector<char> row_packet(uint8_t seq, const std::vector<std::string>& values)
{
    return wrap_packet(row_payload(values), seq);
}

// Text row payload with explicit NULL columns (0xfb marks NULL)
inline std::vector<char> row_payload_mixed(const std::vector<std::pair<bool, std::string>>& cells)
{
    RowPacket row;
    row.cells = cells;
    return row.payload();
}

inline std::vector<char> row_packet_mixed(uint8_t seq,
    const std::vector<std::pair<bool, std::string>>& cells)
{
    return wrap_packet(row_payload_mixed(cells), seq);
}

// A full result set: fieldCount packet + N column defs + column EOF + N rows + row EOF.
// Returns a single byte stream (server pushes it without client interaction).
inline std::vector<char> result_set(uint8_t start_seq,
    const std::vector<std::pair<std::string, uint8_t>>& columns,
    const std::vector<std::vector<std::string>>& rows,
    uint16_t server_status = 0)
{
    std::vector<char> out;
    uint8_t seq = start_seq;

    // fieldCount packet (first response packet of a result set)
    std::vector<char> fc;
    packet_put_lenenc(fc, columns.size());
    std::vector<char> fcp = wrap_packet(fc, seq++);
    out.insert(out.end(), fcp.begin(), fcp.end());

    for (size_t i = 0; i < columns.size(); i++) {
        std::vector<char> pkt = column_packet(seq++, columns[i].first.c_str(), columns[i].second);
        out.insert(out.end(), pkt.begin(), pkt.end());
    }
    std::vector<char> ce = eof_packet(seq++, server_status);
    out.insert(out.end(), ce.begin(), ce.end());
    for (size_t i = 0; i < rows.size(); i++) {
        std::vector<char> rp = row_packet(seq++, rows[i]);
        out.insert(out.end(), rp.begin(), rp.end());
    }
    std::vector<char> re = eof_packet(seq++, server_status);
    out.insert(out.end(), re.begin(), re.end());
    return out;
}

// ---------------------------------------------------------------------------
// MockSocket: replay buffer for recv, capture buffer for send
// ---------------------------------------------------------------------------

class MockSocket {
public:
    // Server -> client bytes, consumed in order by recvSocket.
    std::vector<char> rx;
    size_t rx_pos = 0;

    // Client -> server bytes, captured by sendSocket.
    std::vector<char> tx;

    // If > 0, recvSocket returns at most this many bytes per call,
    // simulating chunked network arrival.
    size_t max_chunk = 0;

    // If true, recvSocket simulates a peer close (returns 0).
    bool peer_closed = false;

    // If true, recvSocket returns -1 (hard I/O error).
    bool recv_error = false;

    // If true, sendSocket returns -1 (hard I/O error).
    bool send_error = false;

    void feed(const std::vector<char>& bytes)
    {
        rx.insert(rx.end(), bytes.begin(), bytes.end());
    }

    void feed(const char* bytes, size_t len)
    {
        rx.insert(rx.end(), bytes, bytes + len);
    }

    int recv(char* buf, int cb)
    {
        if (recv_error)
            return -1;

        if (peer_closed)
            return 0;

        size_t avail = rx.size() - rx_pos;
        if (avail == 0)
            return 0; // no more server data: peer close semantics

        size_t n = avail;
        if (max_chunk > 0 && n > max_chunk)
            n = max_chunk;
        if (n > (size_t)cb)
            n = (size_t)cb;

        memcpy(buf, rx.data() + rx_pos, n);
        rx_pos += n;
        return (int)n;
    }

    int send(const char* buf, int cb)
    {
        if (send_error)
            return -1;

        tx.insert(tx.end(), buf, buf + cb);
        return cb;
    }

    // Parsed view of captured packets: [payload, seq]
    struct TxPacket {
        std::vector<char> payload;
        uint8_t seq;
    };

    // Split captured tx bytes into wire packets.
    std::vector<TxPacket> tx_packets() const
    {
        std::vector<TxPacket> out;
        size_t pos = 0;
        while (pos + 4 <= tx.size()) {
            WirePacket pkt;
            if (!WirePacket::unwrap(tx.data() + pos, tx.size() - pos, pkt))
                break;
            size_t payload_len = pkt.payload.size();
            TxPacket tp;
            tp.payload = std::move(pkt.payload);
            tp.seq = pkt.seq;
            out.push_back(std::move(tp));
            pos += 4 + payload_len;
        }
        return out;
    }
};

// ---------------------------------------------------------------------------
// Client handshake-response parsing (shared by auth / connect tests)
// ---------------------------------------------------------------------------

// Parsed client handshake response (the first packet the client sends).
struct HandshakeResponse {
    uint32_t caps = 0;
    uint8_t charset = 0;
    std::string username;
    std::vector<char> auth_token; // empty if no auth
    std::string database;         // empty if absent
    std::string plugin;           // empty if absent
};

inline HandshakeResponse parse_handshake_response(const MockSocket& sock,
    bool expect_db = false)
{
    HandshakeResponse out;
    std::vector<MockSocket::TxPacket> pkts = sock.tx_packets();
    if (pkts.empty())
        return out;

    // The client writes the database name only when connecting with one, so
    // callers must pass expect_db=true in that case to disambiguate db/plugin.
    HandshakeResponsePacket hs;
    if (!hs.decode(pkts[0].payload.data(), pkts[0].payload.size())) {
        ADD_FAILURE() << "handshake response too short";
        return out;
    }

    out.caps = hs.caps;
    out.charset = hs.charset;
    out.username = hs.username;
    out.auth_token = hs.auth_token;
    // The client writes the database name only when connecting with one, so
    // the first trailing NT string is the db (expect_db) or the plugin name.
    if (expect_db) {
        out.database = hs.database;
        out.plugin = hs.plugin;
    } else {
        out.database = "";
        out.plugin = !hs.database.empty() ? hs.database : hs.plugin;
    }
    return out;
}

// ---------------------------------------------------------------------------
// MockResult: captures result callbacks for assertions
// ---------------------------------------------------------------------------

struct MockColumn {
    std::string name;
    UMTypeInfo ti;
};

struct MockCell {
    bool is_null = false;
    std::string value;
};

struct MockRow {
    std::vector<MockCell> cells;
};

class MockResult {
public:
    explicit MockResult(int columns)
        : columns(columns)
        , is_ok(false)
    {
    }

    static MockResult* make_ok(uint64_t affected, uint64_t insert_id,
        int server_status, const char* message, size_t len)
    {
        MockResult* r = new MockResult(0);
        r->is_ok = true;
        r->affected = affected;
        r->insert_id = insert_id;
        r->server_status = server_status;
        r->ok_message.assign(message, len);
        return r;
    }

    int columns = 0;
    bool is_ok = false;
    uint64_t affected = 0;
    uint64_t insert_id = 0;
    int server_status = 0;
    std::string ok_message;

    std::vector<MockColumn> fields;
    std::vector<MockRow> rows;

    MockRow* current = nullptr;

    bool destroyed = false;
};

// ---------------------------------------------------------------------------
// MockCAPI: fills UMConnectionCAPI with the mocks above
// ---------------------------------------------------------------------------

class MockCAPI {
public:
    MockSocket* sock = nullptr;

    // Live result objects created via createResult / resultOK (owned here).
    std::vector<MockResult*> results;

    // Connection-level call tracking.
    int connect_calls = 0;
    int close_calls = 0;
    int delete_calls = 0;
    std::string last_host;
    int last_port = 0;

    // If true, connectSocket returns 0 (connection refused etc.).
    bool connect_fail = false;

    // If true, getSocket returns NULL (socket creation failure).
    bool socket_create_fail = false;

    // If true, setTimeout returns 0 (failure).
    bool timeout_fail = false;

    UMConnectionCAPI capi;

    MockCAPI()
    {
        memset(&capi, 0, sizeof(capi));
        capi.getSocket = mock_getSocket;
        capi.deleteSocket = mock_deleteSocket;
        capi.closeSocket = mock_closeSocket;
        capi.connectSocket = mock_connectSocket;
        capi.setTimeout = mock_setTimeout;
        capi.clearException = mock_clearException;
        capi.recvSocket = mock_recvSocket;
        capi.sendSocket = mock_sendSocket;
        capi.createResult = mock_createResult;
        capi.resultSetField = mock_resultSetField;
        capi.resultRowBegin = mock_resultRowBegin;
        capi.resultRowValue = mock_resultRowValue;
        capi.resultRowEnd = mock_resultRowEnd;
        capi.destroyResult = mock_destroyResult;
        capi.resultOK = mock_resultOK;
    }

    ~MockCAPI()
    {
        for (size_t i = 0; i < results.size(); i++)
            delete results[i];
    }

    // The single active mock (C API functions are stateless C pointers).
    // Function-local static: one instance shared across all translation units.
    static MockCAPI*& current()
    {
        static MockCAPI* inst = nullptr;
        return inst;
    }

    // --- CAPI implementations ------------------------------------------------

    static void* mock_getSocket()
    {
        return current()->socket_create_fail ? nullptr : current()->sock;
    }

    static void mock_deleteSocket(void* sock)
    {
        current()->delete_calls++;
    }

    static void mock_closeSocket(void* sock)
    {
        current()->close_calls++;
    }

    static int mock_connectSocket(void* sock, const char* host, int port)
    {
        current()->connect_calls++;
        current()->last_host = host ? host : "";
        current()->last_port = port;
        return current()->connect_fail ? 0 : 1; // 0 = failure
    }

    static int mock_setTimeout(void* sock, int timeoutSec)
    {
        return current()->timeout_fail ? 0 : 1;
    }

    static void mock_clearException()
    {
    }

    static int mock_recvSocket(void* sock, char* buffer, int cbBuffer)
    {
        return current()->sock->recv(buffer, cbBuffer);
    }

    static int mock_sendSocket(void* sock, const char* buffer, int cbBuffer)
    {
        return current()->sock->send(buffer, cbBuffer);
    }

    static void* mock_createResult(int columns)
    {
        MockResult* r = new MockResult(columns);
        current()->results.push_back(r);
        return r;
    }

    static void mock_resultSetField(void* result, int ifield, UMTypeInfo* ti,
        void* name, size_t cbName)
    {
        MockResult* r = (MockResult*)result;
        MockColumn c;
        c.name.assign((char*)name, cbName);
        c.ti = *ti;
        if ((int)r->fields.size() <= ifield)
            r->fields.resize(ifield + 1);
        r->fields[ifield] = c;
    }

    static void mock_resultRowBegin(void* result)
    {
        MockResult* r = (MockResult*)result;
        r->rows.push_back(MockRow());
        r->current = &r->rows.back();
    }

    static int mock_resultRowValue(void* result, int icolumn, UMTypeInfo* ti,
        void* value, size_t cbValue)
    {
        MockResult* r = (MockResult*)result;
        MockCell c;
        if (value) {
            c.is_null = false;
            c.value.assign((char*)value, cbValue);
        } else {
            c.is_null = true;
        }
        if ((int)r->current->cells.size() <= icolumn)
            r->current->cells.resize(icolumn + 1);
        r->current->cells[icolumn] = c;
        return 1;
    }

    static void mock_resultRowEnd(void* result)
    {
        MockResult* r = (MockResult*)result;
        r->current = nullptr;
    }

    static void mock_destroyResult(void* result)
    {
        MockResult* r = (MockResult*)result;
        r->destroyed = true;
        for (size_t i = 0; i < current()->results.size(); i++) {
            if (current()->results[i] == r) {
                current()->results.erase(current()->results.begin() + i);
                delete r;
                break;
            }
        }
    }

    static void* mock_resultOK(UINT64 affected, UINT64 insertId, int serverStatus,
        const char* message, size_t len)
    {
        MockResult* r = MockResult::make_ok(affected, insertId, serverStatus, message, len);
        current()->results.push_back(r);
        return r;
    }
};

// ---------------------------------------------------------------------------
// Fixture helpers
// ---------------------------------------------------------------------------

// Common test setup: fresh mock socket + CAPI, current mock routed.
struct MockEnv {
    MockSocket sock;
    MockCAPI capi;

    MockEnv()
    {
        capi.sock = &sock;
        MockCAPI::current() = &capi;
    }
};

// Session bootstrap: handshake + auth OK. Returns a connected Connection.
// sock must outlive conn (Connection holds a raw socket pointer).
inline Connection* create_connected(MockCAPI& mock, MockSocket& sock,
    const char* username = "root", const char* password = "",
    const char* database = "", const char* salt = "0123456789abcdefghij",
    const char* auth_plugin = "mysql_native_password")
{
    sock.feed(handshake_packet(salt, auth_plugin));
    sock.feed(ok_packet(2, 0, 0, 2));

    Connection* conn = new Connection(&mock.capi);
    if (!conn->connect("127.0.0.1", 3306, username, password, database, NULL, MCS_utf8mb4_bin)) {
        delete conn;
        return nullptr;
    }
    return conn;
}

} // namespace umysql_test

#endif // __UMYSQL_TEST_MOCK_SERVER_H__
