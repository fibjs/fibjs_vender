/*
 * Error-path tests for handshake and query/result-set handling.
 *
 * Each test drives a failure scenario through the mocked CAPI and asserts:
 *   - the error message / errno / type recorded by getLastError()
 *   - the connection state afterwards (isConnected / reusability)
 *   - getLastError() is consumed on first read
 */

#include "Connection.h"
#include "mock_server.h"
#include <gtest/gtest.h>

using namespace umysql_test;

// Read (and consume) the last error; asserts it exists.
static void expect_error(Connection& conn, const char* message, int errno_out,
    UMErrorType type)
{
    const char* msg = nullptr;
    int err = 0, t = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &err, &t)) << "no error recorded";
    EXPECT_STREQ(msg, message);
    EXPECT_EQ(err, errno_out);
    EXPECT_EQ(t, (int)type);
}

// getLastError() must be consumed: a second read returns false.
static void expect_error_consumed(Connection& conn)
{
    const char* msg = nullptr;
    int err = 0, t = 0;
    EXPECT_FALSE(conn.getLastError(&msg, &err, &t));
}

// ---------------------------------------------------------------------------
// Handshake errors
// ---------------------------------------------------------------------------

TEST(umysql_connect_errors, too_many_connections)
{
    MockEnv env;
    std::vector<char> p;
    p.push_back(0xff); // ERR packet as the first handshake packet
    env.sock.feed(wrap_packet(p, 0));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Too many connections reported by server", 0, UME_OTHER);
    expect_error_consumed(conn);
}

TEST(umysql_connect_errors, protocol_version_not_supported)
{
    MockEnv env;
    std::vector<char> p;
    p.push_back(0x09); // protocol version 9
    packet_put_ntstr(p, "5.7.0-mock");
    env.sock.feed(wrap_packet(p, 0));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Protocol version not supported(1)", 0, UME_OTHER);
}

TEST(umysql_connect_errors, no_protocol_41)
{
    MockEnv env;
    // Capability bits without MCP_PROTOCOL_41
    env.sock.feed(handshake_packet_ex("0123456789abcdefghij",
        MCP_CONNECT_WITH_DB | MCP_TRANSACTIONS, "mysql_native_password", 0));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Authentication < 4.1 not supported", 1, UME_OTHER);
}

TEST(umysql_connect_errors, missing_salt_part2)
{
    MockEnv env;
    env.sock.feed(handshake_truncated_packet());

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Authentication < 4.1 not supported", 2, UME_OTHER);
}

TEST(umysql_connect_errors, database_without_db_capability)
{
    MockEnv env;
    // No MCP_CONNECT_WITH_DB in server caps, but the client requests a database
    env.sock.feed(handshake_packet_ex("0123456789abcdefghij",
        MCP_PROTOCOL_41 | MCP_TRANSACTIONS, "mysql_native_password", 0));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "mydb", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Protocol < 4.1 not supported", 3, UME_OTHER);
}

TEST(umysql_connect_errors, connect_socket_failure)
{
    MockEnv env;
    env.capi.connect_fail = true;

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Failed to connect to server", 0, UME_OTHER);

    // socket was released
    EXPECT_EQ(env.capi.delete_calls, 1);
}

TEST(umysql_connect_errors, peer_close_during_handshake)
{
    MockEnv env;
    // Half a handshake packet: header + 2 payload bytes, then the peer closes
    std::vector<char> pkt = handshake_packet("0123456789abcdefghij");
    env.sock.feed(std::vector<char>(pkt.begin(), pkt.begin() + 6));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Connection reset by peer when receiving", 0, UME_OTHER);
}

TEST(umysql_connect_errors, recv_error_during_handshake)
{
    MockEnv env;
    env.sock.recv_error = true;

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Socket error when receiving", 0, UME_OTHER);
}

TEST(umysql_connect_errors, send_error_during_handshake)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    env.sock.send_error = true; // handshake response fails to send

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Socket error when sending", 0, UME_OTHER);
}

TEST(umysql_connect_errors, server_error_after_handshake)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(err_packet(2, 1045, "28000", "Access denied for user 'root'"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "bad", "", NULL, MCS_utf8mb4_bin));
    // The MySQL-level error is preserved...
    expect_error(conn, "Access denied for user 'root'", 1045, UME_MYSQL);
    // ...but the handshake failed, so the connection must not look usable
    EXPECT_FALSE(conn.isConnected());

    // connect() can be retried after the failure
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_TRUE(conn.isConnected());
}

TEST(umysql_connect_errors, auth_switch_unsupported)
{
    MockEnv env;
    // Server does not advertise PLUGIN_AUTH (mysql_native_password plugin),
    // yet sends an AuthSwitchRequest.
    env.sock.feed(handshake_packet("0123456789abcdefghij", "mysql_native_password"));
    env.sock.feed(auth_switch_packet(2, "mysql_native_password", "abcdefghijklmnopqrst"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "secret", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn,
        "Old Authentication Method switch from server. Not supported by this client.",
        4, UME_OTHER);
}

TEST(umysql_connect_errors, auth_switch_rejected_by_server)
{
    MockEnv env;
    // Client advertises caching_sha2_password (PLUGIN_AUTH on), server switches
    // to mysql_native_password, then rejects the credentials.
    env.sock.feed(handshake_packet("0123456789abcdefghij", "caching_sha2_password"));
    env.sock.feed(auth_switch_packet(2, "mysql_native_password", "abcdefghijklmnopqrst"));
    env.sock.feed(err_packet(3, 1045, "28000", "Access denied for user 'root'"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "bad", "", NULL, MCS_utf8mb4_bin));
    // The real server error must NOT be overwritten by the generic switch error
    expect_error(conn, "Access denied for user 'root'", 1045, UME_MYSQL);
    EXPECT_FALSE(conn.isConnected());
}

TEST(umysql_connect_errors, sha2_fast_auth_rejected)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij", "caching_sha2_password"));
    env.sock.feed(auth_more_data_packet(2, 0x03)); // fast auth success
    env.sock.feed(err_packet(3, 1045, "28000", "Access denied for user 'root'"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "bad", "", NULL, MCS_utf8mb4_bin));
    expect_error(conn, "Access denied for user 'root'", 1045, UME_MYSQL);
    EXPECT_FALSE(conn.isConnected());
}

TEST(umysql_connect_errors, sha2_full_auth_bad_response)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij", "caching_sha2_password"));
    env.sock.feed(auth_more_data_packet(2, 0x04)); // full auth needed
    // Server answers with a packet that is not the expected 0x01 header
    std::vector<char> bad;
    bad.push_back(0x05);
    env.sock.feed(wrap_packet(bad, 3));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "secret", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    // A fallback error must have been recorded
    expect_error(conn, "Authentication failed during handshake", 0, UME_OTHER);
}

// ---------------------------------------------------------------------------
// Query / result-set errors
// ---------------------------------------------------------------------------

TEST(umysql_query_errors, query_too_big_keeps_connection)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    std::string big(MYSQL_PACKET_SIZE + 16, 'x');
    MockResult* res = (MockResult*)conn->query(big.c_str(), big.size());
    EXPECT_EQ(res, (MockResult*)nullptr);
    expect_error(*conn, "Query too big", 0, UME_MYSQL);

    // Nothing was sent: the connection must stay usable
    EXPECT_TRUE(conn->isConnected());
    env.sock.feed(ok_packet(1, 1, 0, 2));
    res = (MockResult*)conn->query("SELECT 1", 8);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_TRUE(res->is_ok);
    EXPECT_EQ(res->affected, (uint64_t)1);

    delete conn;
}

TEST(umysql_query_errors, send_error_during_query)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.send_error = true;
    MockResult* res = (MockResult*)conn->query("SELECT 1", 8);
    EXPECT_EQ(res, (MockResult*)nullptr);
    expect_error(*conn, "Socket error when sending", 0, UME_OTHER);
    EXPECT_FALSE(conn->isConnected());

    delete conn;
}

TEST(umysql_query_errors, recv_error_during_query)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.recv_error = true;
    MockResult* res = (MockResult*)conn->query("SELECT 1", 8);
    EXPECT_EQ(res, (MockResult*)nullptr);
    expect_error(*conn, "Socket error when receiving", 0, UME_OTHER);
    EXPECT_FALSE(conn->isConnected());

    delete conn;
}

TEST(umysql_query_errors, disconnect_during_field_phase)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    // fieldCount + one column def, then the peer dies before the column EOF
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 2);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c = column_packet(2, "id", MFTYPE_LONG);
    out.insert(out.end(), c.begin(), c.end());
    env.sock.feed(out);

    MockResult* res = (MockResult*)conn->query("SELECT id FROM t", sizeof("SELECT id FROM t") - 1);
    EXPECT_EQ(res, (MockResult*)nullptr);
    expect_error(*conn, "Connection reset by peer when receiving", 0, UME_OTHER);
    EXPECT_FALSE(conn->isConnected());

    // The partially built result must have been destroyed
    EXPECT_TRUE(env.capi.results.empty());

    delete conn;
}

TEST(umysql_query_errors, error_in_second_result_set)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    // First result set signals more results; the second one is an ERR packet
    env.sock.feed(result_set(1, { { "id", MFTYPE_LONG } }, { { "1" } }, SERVER_MORE_RESULTS_EXISTS));
    env.sock.feed(err_packet(5, 1146, "42S02", "Table 'db.x' doesn't exist"));

    MockResult* res = (MockResult*)conn->query("SELECT id FROM t", sizeof("SELECT id FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_TRUE(conn->hasMoreResult());

    MockResult* res2 = (MockResult*)conn->nextResultSet();
    EXPECT_EQ(res2, (MockResult*)nullptr);
    expect_error(*conn, "Table 'db.x' doesn't exist", 1146, UME_MYSQL);

    // ERR terminates the result set: no more results pending
    EXPECT_FALSE(conn->hasMoreResult());

    // MySQL-level error keeps the connection usable
    EXPECT_TRUE(conn->isConnected());
    env.sock.feed(ok_packet(1, 1, 0, 2));
    res = (MockResult*)conn->query("SELECT 1", 8);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_TRUE(res->is_ok);
    EXPECT_FALSE(conn->hasMoreResult());

    delete conn;
}

TEST(umysql_query_errors, get_last_error_is_consumed)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.feed(err_packet(1, 1064, "42000", "You have an error in your SQL syntax"));
    MockResult* res = (MockResult*)conn->query("BROKEN", 6);
    EXPECT_EQ(res, (MockResult*)nullptr);

    expect_error(*conn, "You have an error in your SQL syntax", 1064, UME_MYSQL);
    expect_error_consumed(*conn);

    // A second error overwrites the consumed state and is readable again
    env.sock.feed(err_packet(1, 1054, "42S22", "Unknown column 'x'"));
    res = (MockResult*)conn->query("SELECT x", 8);
    EXPECT_EQ(res, (MockResult*)nullptr);
    expect_error(*conn, "Unknown column 'x'", 1054, UME_MYSQL);

    delete conn;
}

TEST(umysql_query_errors, recover_after_mysql_error)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    // Sequence: ERR -> OK -> ERR -> result set, verifying full recovery
    env.sock.feed(err_packet(1, 1064, "42000", "syntax error"));
    env.sock.feed(ok_packet(1, 2, 0, 2));
    env.sock.feed(err_packet(1, 1054, "42S22", "unknown column"));
    env.sock.feed(result_set(1, { { "id", MFTYPE_LONG } }, { { "7" } }, 0));

    MockResult* res = (MockResult*)conn->query("BAD1", 4);
    EXPECT_EQ(res, (MockResult*)nullptr);
    expect_error(*conn, "syntax error", 1064, UME_MYSQL);

    res = (MockResult*)conn->query("SELECT 1", 8);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_TRUE(res->is_ok);

    res = (MockResult*)conn->query("BAD2", 4);
    EXPECT_EQ(res, (MockResult*)nullptr);
    expect_error(*conn, "unknown column", 1054, UME_MYSQL);

    res = (MockResult*)conn->query("SELECT id FROM t", sizeof("SELECT id FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    ASSERT_EQ(res->rows.size(), (size_t)1);
    EXPECT_EQ(res->rows[0].cells[0].value, "7");

    delete conn;
}
