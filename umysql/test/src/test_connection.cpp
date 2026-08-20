/*
 * Integration tests for Connection driven through a mocked CAPI socket.
 * No real MySQL server, no network, no fibjs runtime.
 */

#include "Connection.h"
#include "mock_server.h"
#include <gtest/gtest.h>
#include <cstring>

using namespace umysql_test;

// ---------------------------------------------------------------------------
// Handshake / connect
// ---------------------------------------------------------------------------

TEST(umysql_connect, handshake_ok)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("127.0.0.1", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_TRUE(conn.isConnected());

    // Client handshake response: seq 1, caps, charset, username, no auth.
    // Note: CONNECT_WITH_DB is cleared because database is empty; the driver
    // ORs in MULTI_STATEMENTS|MULTI_RESULTS when server version >= 5.
    HandshakeResponse hs = parse_handshake_response(env.sock);
    EXPECT_EQ(hs.caps & 0xffff,
        (uint32_t)(MCP_PROTOCOL_41 | MCP_TRANSACTIONS | MCP_SECURE_CONNECTION));
    EXPECT_FALSE(hs.caps & MCP_CONNECT_WITH_DB);
    EXPECT_TRUE(hs.caps & MCP_MULTI_STATEMENTS);
    EXPECT_TRUE(hs.caps & MCP_MULTI_RESULTS);
    EXPECT_EQ(hs.charset, (uint8_t)MCS_utf8mb4_bin);
    EXPECT_EQ(hs.username, "root");
    EXPECT_TRUE(hs.auth_token.empty());
    EXPECT_EQ(hs.database, "");
    EXPECT_EQ(hs.plugin, "");

    // connectSocket was invoked with the right host/port
    EXPECT_EQ(env.capi.connect_calls, 1);
    EXPECT_EQ(env.capi.last_host, "127.0.0.1");
    EXPECT_EQ(env.capi.last_port, 3306);
}

TEST(umysql_connect, password_and_database)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "user", "secret", "mydb", NULL, MCS_utf8mb4_bin));

    HandshakeResponse hs = parse_handshake_response(env.sock, true /* expect_db */);
    EXPECT_EQ(hs.username, "user");
    EXPECT_EQ(hs.database, "mydb");
    // mysql_native_password: SHA1 token is 20 bytes
    EXPECT_EQ(hs.auth_token.size(), (size_t)20);
    EXPECT_EQ(hs.plugin, "");
}

TEST(umysql_connect, caching_sha2_password)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij", "caching_sha2_password", 0));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "user", "secret", "", NULL, MCS_utf8mb4_bin));

    HandshakeResponse hs = parse_handshake_response(env.sock);
    EXPECT_TRUE(hs.caps & MCP_PLUGIN_AUTH);
    // caching_sha2_password: SHA256 token is 32 bytes
    EXPECT_EQ(hs.auth_token.size(), (size_t)32);
    EXPECT_EQ(hs.plugin, "caching_sha2_password");
}

TEST(umysql_connect, wrong_protocol_version)
{
    MockEnv env;
    // Protocol version 9 instead of 10
    std::vector<char> p;
    p.push_back(0x09);
    packet_put_ntstr(p, "5.7.0-mock");
    env.sock.feed(wrap_packet(p, 0));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());

    const char* msg = nullptr;
    int errno_out = 0, type = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &errno_out, &type));
    EXPECT_STREQ(msg, "Protocol version not supported(1)");
}

TEST(umysql_connect, server_error_during_handshake)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(err_packet(2, 1045, "28000", "Access denied for user 'root'"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "bad", "", NULL, MCS_utf8mb4_bin));

    const char* msg = nullptr;
    int errno_out = 0, type = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &errno_out, &type));
    EXPECT_EQ(errno_out, 1045);
    EXPECT_EQ(type, (int)UME_MYSQL);
    EXPECT_STREQ(msg, "Access denied for user 'root'");
}

TEST(umysql_connect, autocommit_set_on_connect)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    // SET AUTOCOMMIT response (query seq restarts at 0 -> response seq 1)
    env.sock.feed(ok_packet(1, 0, 0, 0));

    int ac = 1;
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", &ac, MCS_utf8mb4_bin));

    // Last captured packet must be COM_QUERY "SET AUTOCOMMIT = 1"
    std::vector<MockSocket::TxPacket> pkts = env.sock.tx_packets();
    ASSERT_GE(pkts.size(), (size_t)2);
    const std::vector<char>& last = pkts.back().payload;
    ASSERT_GE(last.size(), (size_t)19);
    EXPECT_EQ((uint8_t)last[0], (uint8_t)MC_QUERY);
    EXPECT_EQ(std::string(last.begin() + 1, last.end()), "SET AUTOCOMMIT = 1");
}

TEST(umysql_connect, connect_twice_rejected)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    const char* msg = nullptr;
    int errno_out = 0, type = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &errno_out, &type));
    EXPECT_STREQ(msg, "Socket already connected");
}

// ---------------------------------------------------------------------------
// Query: OK / ERR
// ---------------------------------------------------------------------------

TEST(umysql_query, ok_packet)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    env.sock.feed(ok_packet(1, 3, 42, 2, "Rows matched"));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("UPDATE t SET a=1", sizeof("UPDATE t SET a=1") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_TRUE(res->is_ok);
    EXPECT_EQ(res->affected, (uint64_t)3);
    EXPECT_EQ(res->insert_id, (uint64_t)42);
    EXPECT_EQ(res->server_status, 2);
    EXPECT_EQ(res->ok_message, "Rows matched");

    // Query packet must be COM_QUERY + sql, seq 0
    std::vector<MockSocket::TxPacket> pkts = env.sock.tx_packets();
    ASSERT_GE(pkts.size(), (size_t)2);
    const std::vector<char>& q = pkts[1].payload;
    EXPECT_EQ((uint8_t)q[0], (uint8_t)MC_QUERY);
    EXPECT_EQ(std::string(q.begin() + 1, q.end()), "UPDATE t SET a=1");
    EXPECT_EQ(q.size(), (size_t)(1 + 16));
}

TEST(umysql_query, error_packet_keeps_connection)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    env.sock.feed(err_packet(1, 1064, "42000", "You have an error in your SQL syntax"));
    env.sock.feed(ok_packet(1, 1, 0, 2)); // follow-up query succeeds

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("BROKEN SQL", 10);
    EXPECT_EQ(res, (MockResult*)nullptr);

    const char* msg = nullptr;
    int errno_out = 0, type = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &errno_out, &type));
    EXPECT_EQ(errno_out, 1064);
    EXPECT_EQ(type, (int)UME_MYSQL);
    EXPECT_STREQ(msg, "You have an error in your SQL syntax");

    // UME_MYSQL errors do NOT kill the socket: connection stays usable
    EXPECT_TRUE(conn.isConnected());
    res = (MockResult*)conn.query("SELECT 1", 8);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_TRUE(res->is_ok);
    EXPECT_EQ(res->affected, (uint64_t)1);
}

TEST(umysql_query, not_connected)
{
    MockEnv env;
    Connection conn(&env.capi.capi);
    MockResult* res = (MockResult*)conn.query("SELECT 1", 8);
    EXPECT_EQ(res, (MockResult*)nullptr);

    const char* msg = nullptr;
    int errno_out = 0, type = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &errno_out, &type));
    EXPECT_STREQ(msg, "Not connected");
}

TEST(umysql_query, query_too_big)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    // TX buffer default is 4MB+4; a query larger than that must be rejected
    std::string big(MYSQL_PACKET_SIZE + 16, 'x');
    MockResult* res = (MockResult*)conn.query(big.c_str(), big.size());
    EXPECT_EQ(res, (MockResult*)nullptr);

    const char* msg = nullptr;
    int errno_out = 0, type = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &errno_out, &type));
    EXPECT_STREQ(msg, "Query too big");
}

// ---------------------------------------------------------------------------
// Query: result sets
// ---------------------------------------------------------------------------

TEST(umysql_query, result_set_basic)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    std::vector<std::pair<std::string, uint8_t>> columns = {
        { "id", MFTYPE_LONG },
        { "name", MFTYPE_VAR_STRING },
    };
    std::vector<std::vector<std::string>> rows = {
        { "1", "alice" },
        { "2", "bob" },
        { "3", "carol" },
    };
    env.sock.feed(result_set(1, columns, rows, 0));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("SELECT id, name FROM t", sizeof("SELECT id, name FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_FALSE(res->is_ok);
    EXPECT_EQ(res->columns, 2);

    // Column metadata
    ASSERT_EQ(res->fields.size(), (size_t)2);
    EXPECT_EQ(res->fields[0].name, "id");
    EXPECT_EQ(res->fields[0].ti.type, (UINT8)MFTYPE_LONG);
    EXPECT_EQ(res->fields[1].name, "name");
    EXPECT_EQ(res->fields[1].ti.type, (UINT8)MFTYPE_VAR_STRING);

    // Row data
    ASSERT_EQ(res->rows.size(), (size_t)3);
    EXPECT_EQ(res->rows[0].cells[0].value, "1");
    EXPECT_EQ(res->rows[0].cells[1].value, "alice");
    EXPECT_EQ(res->rows[2].cells[0].value, "3");
    EXPECT_EQ(res->rows[2].cells[1].value, "carol");
    EXPECT_FALSE(res->rows[0].cells[0].is_null);

    // No more results
    EXPECT_FALSE(conn.hasMoreResult());
}

TEST(umysql_query, result_set_with_nulls)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    std::vector<std::pair<std::string, uint8_t>> columns = {
        { "a", MFTYPE_LONG },
        { "b", MFTYPE_VAR_STRING },
    };
    std::vector<char> out;
    // fieldCount packet first, then column defs, column EOF, rows, row EOF
    std::vector<char> fc;
    packet_put_lenenc(fc, 2);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c1 = column_packet(2, "a", MFTYPE_LONG);
    out.insert(out.end(), c1.begin(), c1.end());
    std::vector<char> c2 = column_packet(3, "b", MFTYPE_VAR_STRING);
    out.insert(out.end(), c2.begin(), c2.end());
    std::vector<char> e = eof_packet(4, 0);
    out.insert(out.end(), e.begin(), e.end());
    std::vector<std::pair<bool, std::string>> row1 = { { false, "1" }, { true, "" } };
    std::vector<std::pair<bool, std::string>> row2 = { { true, "" }, { false, "x" } };
    std::vector<char> r1 = row_packet_mixed(5, row1);
    std::vector<char> r2 = row_packet_mixed(6, row2);
    out.insert(out.end(), r1.begin(), r1.end());
    out.insert(out.end(), r2.begin(), r2.end());
    std::vector<char> re = eof_packet(7, 0);
    out.insert(out.end(), re.begin(), re.end());
    env.sock.feed(out);

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("SELECT a, b FROM t", sizeof("SELECT a, b FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    ASSERT_EQ(res->rows.size(), (size_t)2);

    EXPECT_FALSE(res->rows[0].cells[0].is_null);
    EXPECT_EQ(res->rows[0].cells[0].value, "1");
    EXPECT_TRUE(res->rows[0].cells[1].is_null);

    EXPECT_TRUE(res->rows[1].cells[0].is_null);
    EXPECT_FALSE(res->rows[1].cells[1].is_null);
    EXPECT_EQ(res->rows[1].cells[1].value, "x");
}

TEST(umysql_query, empty_result_set)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    env.sock.feed(result_set(1, { { "id", MFTYPE_LONG } }, {}, 0));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("SELECT id FROM t WHERE 0", sizeof("SELECT id FROM t WHERE 0") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_EQ(res->columns, 1);
    EXPECT_EQ(res->fields.size(), (size_t)1);
    EXPECT_EQ(res->rows.size(), (size_t)0);
}

TEST(umysql_query, binary_column_flag)
{
    // BLOB columns: flags carry MFFLAG_BINARY_FLAG, charset MCS_binary.
    // fibjs maps these to Buffer; the driver must preserve the metadata.
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    std::vector<std::pair<std::string, uint8_t>> columns = {
        { "data", MFTYPE_BLOB },
    };
    std::vector<std::vector<std::string>> rows = {
        { std::string("\x00\x01\x02\xff", 4) }, // binary payload with NUL bytes
    };
    env.sock.feed(result_set(1, columns, rows, 0));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("SELECT data FROM t", sizeof("SELECT data FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    ASSERT_EQ(res->rows.size(), (size_t)1);
    // value round-trips through the driver untouched (lenenc encoding)
    EXPECT_EQ(res->rows[0].cells[0].value, std::string("\x00\x01\x02\xff", 4));
}

TEST(umysql_query, large_field_across_chunks)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    // 100KB field: forces many readSocket() rounds and shrink() cycles
    std::string big(100 * 1024, 'y');
    std::vector<std::pair<std::string, uint8_t>> columns = {
        { "blob", MFTYPE_LONG_BLOB },
    };
    std::vector<std::vector<std::string>> rows = {
        { big },
    };
    env.sock.feed(result_set(1, columns, rows, 0));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("SELECT blob FROM t", sizeof("SELECT blob FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    ASSERT_EQ(res->rows.size(), (size_t)1);
    EXPECT_EQ(res->rows[0].cells[0].value.size(), big.size());
    EXPECT_EQ(res->rows[0].cells[0].value, big);
}

TEST(umysql_query, chunked_arrival)
{
    // Server data arrives in small chunks: recvSocket returns <= 7 bytes.
    // This exercises PacketReader's incremental havePacket()/shrink() paths.
    MockEnv env;
    env.sock.max_chunk = 7;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    std::vector<std::pair<std::string, uint8_t>> columns = {
        { "id", MFTYPE_LONG },
        { "name", MFTYPE_VAR_STRING },
        { "note", MFTYPE_STRING },
    };
    std::vector<std::vector<std::string>> rows = {
        { "1", "alice", "hello world, this is a longer note" },
        { "2", "bob", "another note" },
    };
    env.sock.feed(result_set(1, columns, rows, 0));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("SELECT id, name, note FROM t", sizeof("SELECT id, name, note FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    ASSERT_EQ(res->rows.size(), (size_t)2);
    EXPECT_EQ(res->rows[0].cells[0].value, "1");
    EXPECT_EQ(res->rows[0].cells[2].value, "hello world, this is a longer note");
    EXPECT_EQ(res->rows[1].cells[1].value, "bob");
}

// ---------------------------------------------------------------------------
// Query: multiple result sets
// ---------------------------------------------------------------------------

TEST(umysql_query, multi_result_sets)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    // First result set, then OK with SERVER_MORE_RESULTS_EXISTS
    env.sock.feed(result_set(1, { { "id", MFTYPE_LONG } }, { { "1" }, { "2" } }, SERVER_MORE_RESULTS_EXISTS));
    env.sock.feed(ok_packet(5, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("SELECT id FROM t; SELECT 1", sizeof("SELECT id FROM t; SELECT 1") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_EQ(res->columns, 1);
    ASSERT_EQ(res->rows.size(), (size_t)2);
    EXPECT_TRUE(conn.hasMoreResult());

    MockResult* res2 = (MockResult*)conn.nextResultSet();
    ASSERT_NE(res2, (MockResult*)nullptr);
    EXPECT_TRUE(res2->is_ok);
    EXPECT_FALSE(conn.hasMoreResult());
}

// ---------------------------------------------------------------------------
// Error handling / disconnects
// ---------------------------------------------------------------------------

TEST(umysql_query, peer_close_mid_result)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    // fieldCount + column def + column EOF, then the connection dies before
    // any row arrives
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 1);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c = column_packet(2, "id", MFTYPE_LONG);
    out.insert(out.end(), c.begin(), c.end());
    std::vector<char> e = eof_packet(3, 0);
    out.insert(out.end(), e.begin(), e.end());
    env.sock.feed(out);

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("SELECT id FROM t", sizeof("SELECT id FROM t") - 1);
    EXPECT_EQ(res, (MockResult*)nullptr);

    const char* msg = nullptr;
    int errno_out = 0, type = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &errno_out, &type));
    EXPECT_EQ(type, (int)UME_OTHER);
    EXPECT_STREQ(msg, "Connection reset by peer when receiving");

    // Non-MySQL errors kill the socket
    EXPECT_FALSE(conn.isConnected());
}

TEST(umysql_query, malformed_packet_sequence)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    // EOF as the first response to a query is a protocol violation
    env.sock.feed(eof_packet(1, 0));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    MockResult* res = (MockResult*)conn.query("SELECT 1", 8);
    EXPECT_EQ(res, (MockResult*)nullptr);

    const char* msg = nullptr;
    int errno_out = 0, type = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &errno_out, &type));
    EXPECT_STREQ(msg, "Unexpected EOF when decoding result");
}

// ---------------------------------------------------------------------------
// Misc
// ---------------------------------------------------------------------------

TEST(umysql_misc, rx_buffer_size_roundtrip)
{
    MockEnv env;
    Connection conn(&env.capi.capi);

    int old = conn.getRxBufferSize();
    EXPECT_EQ(conn.setRxBufferSize(1024 * 1024), old);
    EXPECT_EQ(conn.getRxBufferSize(), 1024 * 1024);
    EXPECT_EQ(conn.setRxBufferSize(old), 1024 * 1024);
    EXPECT_EQ(conn.getRxBufferSize(), old);
}

TEST(umysql_misc, close_releases_socket)
{
    // NOTE: the current close() skips the COM_QUIT write (PacketWriter::reset()
    // leaves 4 header bytes so isDone() is false right after connect) and just
    // closes the socket. Assert the observable behavior; revisit if close()
    // is fixed to send COM_QUIT.
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    ASSERT_TRUE(conn.close());
    EXPECT_FALSE(conn.isConnected());

    // socket released exactly once
    EXPECT_EQ(env.capi.close_calls, 1);
    EXPECT_EQ(env.capi.delete_calls, 1);
}

TEST(umysql_misc, destroy_closes_socket)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection* conn = new Connection(&env.capi.capi);
    ASSERT_TRUE(conn->connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    delete conn;

    EXPECT_EQ(env.capi.close_calls, 1);
    EXPECT_EQ(env.capi.delete_calls, 1);
}
