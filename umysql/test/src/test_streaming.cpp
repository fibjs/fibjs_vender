/*
 * Tests for the streaming result-set API (beginQuery / nextRow / endResult /
 * abortResult). These exercise the resumable state machine directly:
 *   - metadata and per-row access through the accessors
 *   - mid-iteration abort (drain) and connection reuse
 *   - multi-result-set drain
 *   - concurrency guard held across the result-set lifetime
 *   - OK / ERR first-packet handling
 */

#define private public
#include "Connection.h"
#undef private

#include "mock_server.h"
#include <gtest/gtest.h>
#include <cstring>

using namespace umysql_test;

static int progress_of(Connection& conn)
{
    return conn.m_dbgMethodProgress;
}

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

// ---------------------------------------------------------------------------
// beginQuery: metadata + row-by-row iteration
// ---------------------------------------------------------------------------

TEST(umysql_stream, begin_query_reads_metadata_and_rows)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    env.sock.feed(result_set(1,
        { { "id", MFTYPE_LONG }, { "name", MFTYPE_VAR_STRING } },
        { { "1", "a" }, { "2", "b" }, { "3", "c" } }));

    int st = conn.beginQuery("SELECT id, name FROM t", sizeof("SELECT id, name FROM t") - 1);
    ASSERT_EQ(st, 1);
    EXPECT_EQ(progress_of(conn), 1); // guard held for the result-set lifetime

    // Column metadata (heap copies, stable across nextRow calls)
    EXPECT_EQ(conn.fieldCount(), 2);
    EXPECT_EQ(conn.fieldName(0), "id");
    EXPECT_EQ(conn.fieldName(1), "name");
    EXPECT_EQ(conn.fieldInfo(0).type, (UINT8)MFTYPE_LONG);
    EXPECT_EQ(conn.fieldInfo(1).type, (UINT8)MFTYPE_VAR_STRING);

    // Row 1
    EXPECT_EQ(conn.nextRow(), 1);
    size_t len = 0;
    const UINT8* v = conn.columnValue(0, &len);
    ASSERT_NE(v, (const UINT8*)nullptr);
    EXPECT_EQ(len, (size_t)1);
    EXPECT_EQ((char)v[0], '1');
    v = conn.columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "a");

    // Row 2
    EXPECT_EQ(conn.nextRow(), 1);
    v = conn.columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "b");

    // Row 3
    EXPECT_EQ(conn.nextRow(), 1);
    v = conn.columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "c");

    // EOF
    EXPECT_EQ(conn.nextRow(), 0);
    // Calling nextRow again after EOF stays at EOF
    EXPECT_EQ(conn.nextRow(), 0);

    EXPECT_TRUE(conn.endResult());
    EXPECT_EQ(progress_of(conn), 0); // guard released

    // Connection is reusable afterwards
    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "7" } }));
    MockResult* res = (MockResult*)conn.query("SELECT 7", sizeof("SELECT 7") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
}

TEST(umysql_stream, begin_query_null_cells)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    // One row: value, NULL, value
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 3);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c1 = column_packet(2, "a", MFTYPE_LONG);
    out.insert(out.end(), c1.begin(), c1.end());
    std::vector<char> c2 = column_packet(3, "b", MFTYPE_VAR_STRING);
    out.insert(out.end(), c2.begin(), c2.end());
    std::vector<char> c3 = column_packet(4, "c", MFTYPE_LONG);
    out.insert(out.end(), c3.begin(), c3.end());
    std::vector<char> ce = eof_packet(5, 0);
    out.insert(out.end(), ce.begin(), ce.end());
    std::vector<char> rp = row_packet_mixed(6, { { false, "5" }, { true, "" }, { false, "9" } });
    out.insert(out.end(), rp.begin(), rp.end());
    std::vector<char> re = eof_packet(7, 0);
    out.insert(out.end(), re.begin(), re.end());
    env.sock.feed(out);

    ASSERT_EQ(conn.beginQuery("SELECT a, b, c FROM t", sizeof("SELECT a, b, c FROM t") - 1), 1);
    EXPECT_EQ(conn.nextRow(), 1);

    size_t len = 99;
    const UINT8* v = conn.columnValue(0, &len);
    EXPECT_EQ(std::string((const char*)v, len), "5");

    // NULL cell: NULL pointer, len = 0
    len = 99;
    v = conn.columnValue(1, &len);
    EXPECT_EQ(v, (const UINT8*)nullptr);
    EXPECT_EQ(len, (size_t)0);

    len = 99;
    v = conn.columnValue(2, &len);
    EXPECT_EQ(std::string((const char*)v, len), "9");

    // Out-of-range column
    len = 99;
    EXPECT_EQ(conn.columnValue(3, &len), (const UINT8*)nullptr);
    EXPECT_EQ(len, (size_t)0);

    EXPECT_EQ(conn.nextRow(), 0);
    EXPECT_TRUE(conn.endResult());
}

TEST(umysql_stream, empty_result_set)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    env.sock.feed(result_set(1, { { "id", MFTYPE_LONG } }, {}));

    ASSERT_EQ(conn.beginQuery("SELECT id FROM t WHERE 0", sizeof("SELECT id FROM t WHERE 0") - 1), 1);
    EXPECT_EQ(conn.fieldCount(), 1);
    EXPECT_EQ(conn.nextRow(), 0); // EOF immediately
    EXPECT_TRUE(conn.endResult());
    EXPECT_EQ(progress_of(conn), 0);
}

// ---------------------------------------------------------------------------
// beginQuery: OK / ERR first packets
// ---------------------------------------------------------------------------

TEST(umysql_stream, begin_query_ok_packet)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    env.sock.feed(ok_packet(1, 2, 9, 0)); // affected = 2, insert_id = 9

    int st = conn.beginQuery("UPDATE t SET a=1", sizeof("UPDATE t SET a=1") - 1);
    ASSERT_EQ(st, 0);
    EXPECT_EQ(progress_of(conn), 0); // no guard held without a result set

    void* res = conn.takeResult();
    ASSERT_NE(res, (void*)nullptr);
    MockResult* mr = (MockResult*)res;
    EXPECT_TRUE(mr->is_ok);
    EXPECT_EQ(mr->affected, (uint64_t)2);
    EXPECT_EQ(mr->insert_id, (uint64_t)9);

    // takeResult is consumed
    EXPECT_EQ(conn.takeResult(), (void*)nullptr);

    // No nextRow allowed without a result set
    EXPECT_EQ(conn.nextRow(), -1);
    expect_error(conn, "No active result set", 0, UME_OTHER);
}

TEST(umysql_stream, begin_query_error_packet)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    env.sock.feed(err_packet(1, 1146, "42S02", "Table 'x' doesn't exist"));

    EXPECT_EQ(conn.beginQuery("SELECT * FROM x", sizeof("SELECT * FROM x") - 1), -1);
    expect_error(conn, "Table 'x' doesn't exist", 1146, UME_MYSQL);
    EXPECT_EQ(progress_of(conn), 0);
    EXPECT_TRUE(conn.isConnected()); // MySQL-level error keeps the connection
}

TEST(umysql_stream, begin_query_not_connected)
{
    MockEnv env;
    Connection conn(&env.capi.capi);
    EXPECT_EQ(conn.beginQuery("SELECT 1", 8), -1);
    expect_error(conn, "Not connected", 0, UME_OTHER);
}

// ---------------------------------------------------------------------------
// abortResult: mid-iteration drain and connection reuse
// ---------------------------------------------------------------------------

TEST(umysql_stream, abort_result_reuses_connection)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    // A large result set: 1000 rows
    std::vector<std::vector<std::string>> rows;
    for (int i = 0; i < 1000; i++)
        rows.push_back({ std::to_string(i) });
    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, rows));

    ASSERT_EQ(conn.beginQuery("SELECT n FROM big", sizeof("SELECT n FROM big") - 1), 1);
    EXPECT_EQ(conn.nextRow(), 1);
    EXPECT_EQ(conn.nextRow(), 1);

    // Abandon after 2 rows: the remaining 998 rows must be drained
    EXPECT_TRUE(conn.abortResult());
    EXPECT_EQ(progress_of(conn), 0);

    // Idempotent
    EXPECT_TRUE(conn.abortResult());

    // Connection is fully reusable
    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "1" } }));
    MockResult* res = (MockResult*)conn.query("SELECT 1", sizeof("SELECT 1") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
}

TEST(umysql_stream, abort_result_before_any_row)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "1" }, { "2" } }));

    ASSERT_EQ(conn.beginQuery("SELECT n FROM t", sizeof("SELECT n FROM t") - 1), 1);
    // Abort right after metadata, before reading any row
    EXPECT_TRUE(conn.abortResult());
    EXPECT_EQ(progress_of(conn), 0);

    // nextRow after abort reports no active result set
    EXPECT_EQ(conn.nextRow(), -1);

    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "3" } }));
    MockResult* res = (MockResult*)conn.query("SELECT 3", sizeof("SELECT 3") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
}

TEST(umysql_stream, abort_result_drains_multi_result_sets)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    // First result set announces MORE_RESULTS; a second result set follows.
    // seq: rs1 = 1..5 (fieldCount 1, col 2, colEOF 3, row 4, rowEOF 5)
    //       rs2 = 6..10
    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "1" }, { "2" } }, SERVER_MORE_RESULTS_EXISTS));
    env.sock.feed(result_set(6, { { "m", MFTYPE_LONG } }, { { "3" } }, 0));

    ASSERT_EQ(conn.beginQuery("SELECT n FROM t; SELECT m FROM u", sizeof("SELECT n FROM t; SELECT m FROM u") - 1), 1);
    EXPECT_EQ(conn.nextRow(), 1);

    // Abort: must drain the remaining row of rs1 AND the whole rs2
    EXPECT_TRUE(conn.abortResult());
    EXPECT_EQ(progress_of(conn), 0);
    EXPECT_FALSE(conn.hasMoreResult());

    // Reusable
    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "9" } }));
    MockResult* res = (MockResult*)conn.query("SELECT 9", sizeof("SELECT 9") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
}

// ---------------------------------------------------------------------------
// Concurrency guard across the result-set lifetime
// ---------------------------------------------------------------------------

TEST(umysql_stream, concurrent_query_while_rowset_active)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "1" }, { "2" }, { "3" } }));

    ASSERT_EQ(conn.beginQuery("SELECT n FROM t", sizeof("SELECT n FROM t") - 1), 1);
    EXPECT_EQ(conn.nextRow(), 1);

    // A new query on the same connection while the rowset is active
    MockResult* res = (MockResult*)conn.query("SELECT 1", sizeof("SELECT 1") - 1);
    EXPECT_EQ(res, (MockResult*)nullptr);
    expect_error(conn, "Concurrent access in query method", 0, UME_OTHER);

    // Another beginQuery is also rejected
    EXPECT_EQ(conn.beginQuery("SELECT 2", sizeof("SELECT 2") - 1), -1);

    // Draining the rowset releases the guard
    EXPECT_TRUE(conn.abortResult());
    EXPECT_EQ(progress_of(conn), 0);

    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "5" } }));
    res = (MockResult*)conn.query("SELECT 5", sizeof("SELECT 5") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
}

TEST(umysql_stream, end_result_releases_guard)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin));

    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "1" } }));

    ASSERT_EQ(conn.beginQuery("SELECT n FROM t", sizeof("SELECT n FROM t") - 1), 1);
    EXPECT_EQ(conn.nextRow(), 1);
    EXPECT_EQ(conn.nextRow(), 0);
    EXPECT_TRUE(conn.endResult());
    EXPECT_EQ(progress_of(conn), 0);

    // endResult is idempotent
    EXPECT_TRUE(conn.endResult());
    EXPECT_EQ(progress_of(conn), 0);
}
