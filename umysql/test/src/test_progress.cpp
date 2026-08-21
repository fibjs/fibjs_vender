/*
 * White-box tests for the m_dbgMethodProgress concurrency guard.
 *
 * The guard must always return to 0 after any operation (success or failure);
 * otherwise the next call on the same connection would spuriously report
 * "Concurrent access in query method" / "... in connect method".
 *
 * Access to the private member is granted via `#define private public`
 * (the class layout is unchanged; this is test-only).
 */

#define private public
#include "Connection.h"
#undef private

#include "mock_server.h"
#include <gtest/gtest.h>

using namespace umysql_test;

static int progress_of(Connection& conn)
{
    return conn.m_dbgMethodProgress;
}

static void expect_error(Connection& conn, const char* message)
{
    const char* msg = nullptr;
    int err = 0, t = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &err, &t)) << "no error recorded";
    EXPECT_STREQ(msg, message);
}

// ---------------------------------------------------------------------------
// Initial state
// ---------------------------------------------------------------------------

TEST(umysql_progress, fresh_connection_is_zero)
{
    MockEnv env;
    Connection conn(&env.capi.capi);
    EXPECT_EQ(progress_of(conn), 0);
}

// ---------------------------------------------------------------------------
// connect(): all exit paths must reset the guard
// ---------------------------------------------------------------------------

TEST(umysql_progress, connect_ok_resets)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
}

TEST(umysql_progress, connect_error_protocol_version)
{
    MockEnv env;
    std::vector<char> p;
    p.push_back(0x09);
    packet_put_ntstr(p, "5.7.0-mock");
    env.sock.feed(wrap_packet(p, 0));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
}

TEST(umysql_progress, connect_error_too_many)
{
    MockEnv env;
    std::vector<char> p;
    p.push_back(0xff);
    env.sock.feed(wrap_packet(p, 0));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
}

TEST(umysql_progress, connect_error_connect_socket)
{
    MockEnv env;
    env.capi.connect_fail = true;

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
}

TEST(umysql_progress, connect_error_get_socket_null)
{
    MockEnv env;
    env.capi.socket_create_fail = true;

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Failed to create socket");
}

TEST(umysql_progress, connect_error_set_timeout)
{
    MockEnv env;
    env.capi.timeout_fail = true;

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.setTimeout(30)); // pre-set: timeout applies on connect
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Failed to set socket timeout");
    // socket must have been released (no leak on this path)
    EXPECT_EQ(env.capi.delete_calls, 1);
}

TEST(umysql_progress, connect_error_send)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    env.sock.send_error = true;

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
}

TEST(umysql_progress, connect_error_recv)
{
    MockEnv env;
    env.sock.recv_error = true;

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
}

TEST(umysql_progress, connect_error_server_err)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(err_packet(2, 1045, "28000", "Access denied"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "bad", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
}

TEST(umysql_progress, connect_error_auth_switch)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(auth_switch_packet(2, "mysql_native_password", "abcdefghijklmnopqrst"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "root", "secret", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
}

// ---------------------------------------------------------------------------
// query(): all exit paths must reset the guard
// ---------------------------------------------------------------------------

TEST(umysql_progress, query_ok_resets)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    // OK packet
    env.sock.feed(ok_packet(1, 1, 0, 2));
    MockResult* res = (MockResult*)conn->query("SELECT 1", 8);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    // Result set
    env.sock.feed(result_set(1, { { "id", MFTYPE_LONG } }, { { "1" }, { "2" } }, 0));
    res = (MockResult*)conn->query("SELECT id FROM t", sizeof("SELECT id FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    // Multiple result sets: guard is released after each nextResultSet()
    env.sock.feed(result_set(1, { { "id", MFTYPE_LONG } }, { { "1" } }, SERVER_MORE_RESULTS_EXISTS));
    env.sock.feed(ok_packet(5, 0, 0, 2));
    res = (MockResult*)conn->query("SELECT id FROM t", sizeof("SELECT id FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);
    MockResult* res2 = (MockResult*)conn->nextResultSet();
    ASSERT_NE(res2, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    delete conn;
}

TEST(umysql_progress, query_error_mysql_err)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.feed(err_packet(1, 1064, "42000", "syntax error"));
    MockResult* res = (MockResult*)conn->query("BAD", 3);
    EXPECT_EQ(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    delete conn;
}

TEST(umysql_progress, query_error_not_connected)
{
    MockEnv env;
    Connection conn(&env.capi.capi);

    MockResult* res = (MockResult*)conn.query("SELECT 1", 8);
    EXPECT_EQ(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(conn), 0);
}

TEST(umysql_progress, query_error_too_big)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    std::string big(MYSQL_PACKET_SIZE + 16, 'x');
    MockResult* res = (MockResult*)conn->query(big.c_str(), big.size());
    EXPECT_EQ(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    delete conn;
}

TEST(umysql_progress, query_error_send)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.send_error = true;
    MockResult* res = (MockResult*)conn->query("SELECT 1", 8);
    EXPECT_EQ(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    delete conn;
}

TEST(umysql_progress, query_error_recv)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.recv_error = true;
    MockResult* res = (MockResult*)conn->query("SELECT 1", 8);
    EXPECT_EQ(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    delete conn;
}

TEST(umysql_progress, query_error_disconnect_mid_result)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    // fieldCount + column def, then the peer dies
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 1);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c = column_packet(2, "id", MFTYPE_LONG);
    out.insert(out.end(), c.begin(), c.end());
    env.sock.feed(out);

    MockResult* res = (MockResult*)conn->query("SELECT id FROM t", sizeof("SELECT id FROM t") - 1);
    EXPECT_EQ(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    delete conn;
}

TEST(umysql_progress, query_error_in_second_result_set)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.feed(result_set(1, { { "id", MFTYPE_LONG } }, { { "1" } }, SERVER_MORE_RESULTS_EXISTS));
    env.sock.feed(err_packet(5, 1146, "42S02", "Table 'db.x' doesn't exist"));

    MockResult* res = (MockResult*)conn->query("SELECT id FROM t", sizeof("SELECT id FROM t") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    MockResult* res2 = (MockResult*)conn->nextResultSet();
    EXPECT_EQ(res2, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 0);

    delete conn;
}

TEST(umysql_progress, close_keeps_zero)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    ASSERT_TRUE(conn->close());
    EXPECT_EQ(progress_of(*conn), 0);

    delete conn;
}

// ---------------------------------------------------------------------------
// The guard itself: spurious concurrency must be reported and reset
// ---------------------------------------------------------------------------

TEST(umysql_progress, concurrent_query_reported_and_reset)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    // Simulate a re-entrant query while the guard is still held by an
    // "outer" call. The rejected call must restore the previous value
    // (the outer holder keeps owning the connection).
    conn->m_dbgMethodProgress = 1;

    MockResult* res = (MockResult*)conn->query("SELECT 1", 8);
    EXPECT_EQ(res, (MockResult*)nullptr);
    EXPECT_EQ(progress_of(*conn), 1); // outer holder still owns the guard

    const char* msg = nullptr;
    int err = 0, t = 0;
    ASSERT_TRUE(conn->getLastError(&msg, &err, &t));
    EXPECT_STREQ(msg, "Concurrent access in query method");

    // Outer holder releases: the connection is fully usable again
    conn->m_dbgMethodProgress = 0;
    env.sock.feed(ok_packet(1, 1, 0, 2));
    res = (MockResult*)conn->query("SELECT 1", 8);
    ASSERT_NE(res, (MockResult*)nullptr);
    EXPECT_TRUE(res->is_ok);
    EXPECT_EQ(progress_of(*conn), 0);

    delete conn;
}

TEST(umysql_progress, concurrent_connect_reported_and_reset)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    // Simulate a re-entrant connect while the guard is still held
    conn.m_dbgMethodProgress = 1;
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 1); // outer holder still owns the guard

    const char* msg = nullptr;
    int err = 0, t = 0;
    ASSERT_TRUE(conn.getLastError(&msg, &err, &t));
    EXPECT_STREQ(msg, "Concurrent access in connect method");

    // Outer holder releases: connect works again
    conn.m_dbgMethodProgress = 0;
    ASSERT_FALSE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_EQ(progress_of(conn), 0);
}

// ---------------------------------------------------------------------------
// Black-box: retries after errors must not trip the concurrency guard
// ---------------------------------------------------------------------------

TEST(umysql_progress, retry_after_error_no_spurious_concurrent)
{
    MockEnv env;
    Connection* conn = create_connected(env.capi, env.sock);
    ASSERT_NE(conn, (Connection*)nullptr);

    // Failure -> retry success, repeatedly (guard must never stick)
    for (int i = 0; i < 5; i++) {
        env.sock.feed(err_packet(1, 1064, "42000", "syntax error"));
        MockResult* res = (MockResult*)conn->query("BAD", 3);
        EXPECT_EQ(res, (MockResult*)nullptr);
        EXPECT_EQ(progress_of(*conn), 0);

        env.sock.feed(ok_packet(1, 1, 0, 2));
        res = (MockResult*)conn->query("SELECT 1", 8);
        ASSERT_NE(res, (MockResult*)nullptr);
        EXPECT_TRUE(res->is_ok);
        EXPECT_EQ(progress_of(*conn), 0);
    }

    delete conn;
}
