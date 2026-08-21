/*
 * Edge-case and malformed-packet tests for the streaming result-set API.
 *
 * Covers: malformed column/row packets, invalid column counts, peer close at
 * every phase, drain failures (peer close / ERR in later result sets),
 * chunked network arrival, large fields, and endResult() semantics when the
 * result set is abandoned mid-iteration.
 */

#include "ConnectionWhitebox.h"

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

// Connect with the standard handshake + OK exchange.
static Connection* make_connected(MockEnv& env)
{
    env.sock.feed(handshake_packet("0123456789abcdefghij"));
    env.sock.feed(ok_packet(2, 0, 0, 2));
    Connection* conn = new Connection(&env.capi.capi);
    if (!conn->connect("h", 3306, "root", "", "", NULL, MCS_utf8mb4_bin)) {
        delete conn;
        return nullptr;
    }
    return conn;
}

// ---------------------------------------------------------------------------
// Malformed packets
// ---------------------------------------------------------------------------

TEST(umysql_stream_edge, begin_query_malformed_column_packet)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // Valid fieldCount, then a column packet whose fixed-fields marker is wrong
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 1);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> col = column_packet(2, "id", MFTYPE_LONG);
    col[10] = (char)0x0d; // corrupt the 0x0c marker inside the payload
    out.insert(out.end(), col.begin(), col.end());
    env.sock.feed(out);

    EXPECT_EQ(conn->beginQuery("SELECT id FROM t", sizeof("SELECT id FROM t") - 1), -1);
    expect_error(*conn, "Malformed column packet", 0, UME_OTHER);
    // Non-MySQL error: connection is dead
    EXPECT_FALSE(conn->isConnected());
    EXPECT_EQ(progress_of(*conn), 0);
    delete conn;
}

TEST(umysql_stream_edge, begin_query_invalid_column_count)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // fieldCount claims 0x10000 columns (lenenc 0xfd form)
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 0x10000);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    env.sock.feed(out);

    EXPECT_EQ(conn->beginQuery("SELECT id FROM t", sizeof("SELECT id FROM t") - 1), -1);
    expect_error(*conn, "Malformed result set: invalid column count", 0, UME_OTHER);
    EXPECT_FALSE(conn->isConnected());
    EXPECT_EQ(progress_of(*conn), 0);
    delete conn;
}

TEST(umysql_stream_edge, begin_query_zero_first_packet_is_ok_path)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // A single 0x00 payload byte is the OK-packet header, not a result-set
    // fieldCount: beginQuery takes the OK path, and the truncated payload
    // must be rejected (malformed OK) with the connection killed.
    std::vector<char> p;
    p.push_back(0x00);
    env.sock.feed(wrap_packet(p, 1));

    EXPECT_EQ(conn->beginQuery("SELECT 1", sizeof("SELECT 1") - 1), 0);
    expect_error(*conn, "Malformed OK packet", 0, UME_OTHER);
    EXPECT_FALSE(conn->isConnected());
    EXPECT_EQ(conn->takeResult(), (void*)nullptr);
    delete conn;
}

TEST(umysql_stream_edge, begin_query_fe_first_packet)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // 0xfe first packet is not valid for a query response
    std::vector<char> p;
    p.push_back(0xfe);
    packet_put_u16(p, 0);
    packet_put_u16(p, 0);
    env.sock.feed(wrap_packet(p, 1));

    EXPECT_EQ(conn->beginQuery("SELECT 1", sizeof("SELECT 1") - 1), -1);
    expect_error(*conn, "Unexpected EOF when decoding result", 0, UME_OTHER);
    EXPECT_FALSE(conn->isConnected());
    delete conn;
}

TEST(umysql_stream_edge, next_row_truncated_cell)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // fieldCount + column + colEOF, then a row whose lenenc claims 100 bytes
    // but carries only 1
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 1);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c1 = column_packet(2, "id", MFTYPE_LONG);
    out.insert(out.end(), c1.begin(), c1.end());
    std::vector<char> ce = eof_packet(3, 0);
    out.insert(out.end(), ce.begin(), ce.end());
    std::vector<char> rp;
    rp.push_back(0x64); // lenenc length 100
    rp.push_back('x');  // only 1 byte
    std::vector<char> rw = wrap_packet(rp, 4);
    out.insert(out.end(), rw.begin(), rw.end());
    env.sock.feed(out);

    ASSERT_EQ(conn->beginQuery("SELECT id FROM t", sizeof("SELECT id FROM t") - 1), 1);
    // The malformed row must be rejected, not silently mis-parsed
    EXPECT_EQ(conn->nextRow(), -1);
    EXPECT_FALSE(conn->isConnected());
    delete conn;
}

// ---------------------------------------------------------------------------
// Peer close at every phase
// ---------------------------------------------------------------------------

TEST(umysql_stream_edge, read_fields_peer_close)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // fieldCount only, then the peer closes before columns arrive
    std::vector<char> fc;
    packet_put_lenenc(fc, 1);
    env.sock.feed(wrap_packet(fc, 1));
    env.sock.peer_closed = true;

    EXPECT_EQ(conn->beginQuery("SELECT id FROM t", sizeof("SELECT id FROM t") - 1), -1);
    expect_error(*conn, "Connection reset by peer when receiving", 0, UME_OTHER);
    EXPECT_FALSE(conn->isConnected());
    EXPECT_EQ(progress_of(*conn), 0);
    delete conn;
}

TEST(umysql_stream_edge, next_row_peer_close_mid_rows)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // Two rows are available; the peer closes before the row EOF arrives
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 1);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c1 = column_packet(2, "n", MFTYPE_LONG);
    out.insert(out.end(), c1.begin(), c1.end());
    std::vector<char> ce = eof_packet(3, 0);
    out.insert(out.end(), ce.begin(), ce.end());
    std::vector<char> r1 = row_packet(4, { "1" });
    out.insert(out.end(), r1.begin(), r1.end());
    std::vector<char> r2 = row_packet(5, { "2" });
    out.insert(out.end(), r2.begin(), r2.end());
    // NO row EOF packet; the peer closes after beginQuery buffered the rows
    env.sock.feed(out);

    ASSERT_EQ(conn->beginQuery("SELECT n FROM t", sizeof("SELECT n FROM t") - 1), 1);
    env.sock.peer_closed = true; // rows are buffered; the EOF never comes
    EXPECT_EQ(conn->nextRow(), 1); // row 1
    EXPECT_EQ(conn->nextRow(), 1); // row 2

    // The row EOF never arrives: nextRow must report the failure
    EXPECT_EQ(conn->nextRow(), -1);
    expect_error(*conn, "Connection reset by peer when receiving", 0, UME_OTHER);
    EXPECT_FALSE(conn->isConnected());
    delete conn;
}

TEST(umysql_stream_edge, abort_result_peer_close_during_drain)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // Two rows, no row EOF: the peer closes while abortResult drains
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 1);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c1 = column_packet(2, "n", MFTYPE_LONG);
    out.insert(out.end(), c1.begin(), c1.end());
    std::vector<char> ce = eof_packet(3, 0);
    out.insert(out.end(), ce.begin(), ce.end());
    std::vector<char> r1 = row_packet(4, { "1" });
    out.insert(out.end(), r1.begin(), r1.end());
    std::vector<char> r2 = row_packet(5, { "2" });
    out.insert(out.end(), r2.begin(), r2.end());
    env.sock.feed(out);

    ASSERT_EQ(conn->beginQuery("SELECT n FROM t", sizeof("SELECT n FROM t") - 1), 1);
    EXPECT_EQ(conn->nextRow(), 1);

    // The peer closes now: the drain cannot reach the row EOF
    env.sock.peer_closed = true;
    EXPECT_FALSE(conn->abortResult());
    EXPECT_FALSE(conn->isConnected());
    // The guard must still be released even though drain failed
    EXPECT_EQ(progress_of(*conn), 0);
    delete conn;
}

// ---------------------------------------------------------------------------
// Drain of later result sets (OK / ERR variants)
// ---------------------------------------------------------------------------

TEST(umysql_stream_edge, drain_multi_result_ok)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // UPDATE;SELECT: first response is OK with MORE_RESULTS, second is OK
    env.sock.feed(ok_packet(1, 1, 2, SERVER_MORE_RESULTS_EXISTS));
    env.sock.feed(ok_packet(2, 3, 4, 0));

    int st = conn->beginQuery("UPDATE a SET x=1; UPDATE b SET y=2",
        sizeof("UPDATE a SET x=1; UPDATE b SET y=2") - 1);
    ASSERT_EQ(st, 0); // OK packet, no result set
    void* res = conn->takeResult();
    ASSERT_NE(res, (void*)nullptr);
    MockResult* mr = (MockResult*)res;
    EXPECT_EQ(mr->affected, (uint64_t)1);
    EXPECT_TRUE(conn->hasMoreResult());

    // Draining the remaining result sets keeps the connection aligned
    EXPECT_TRUE(conn->abortResult());
    EXPECT_FALSE(conn->hasMoreResult());

    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "5" } }));
    MockResult* q = (MockResult*)conn->query("SELECT 5", sizeof("SELECT 5") - 1);
    ASSERT_NE(q, (MockResult*)nullptr);
    delete conn;
}

TEST(umysql_stream_edge, abort_drain_multi_result_error)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // Result set announces MORE_RESULTS; the next result set is an ERR packet
    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "1" } },
        SERVER_MORE_RESULTS_EXISTS));
    env.sock.feed(err_packet(6, 1064, "42000", "You have an error in your SQL syntax"));

    ASSERT_EQ(conn->beginQuery("SELECT 1; BROKEN", sizeof("SELECT 1; BROKEN") - 1), 1);
    EXPECT_EQ(conn->nextRow(), 1);

    EXPECT_FALSE(conn->abortResult());
    expect_error(*conn, "You have an error in your SQL syntax", 1064, UME_MYSQL);
    // MySQL-level error keeps the connection, but the guard is released
    EXPECT_TRUE(conn->isConnected());
    EXPECT_EQ(progress_of(*conn), 0);
    delete conn;
}

// ---------------------------------------------------------------------------
// endResult semantics when abandoning mid-iteration
// ---------------------------------------------------------------------------

TEST(umysql_stream_edge, end_result_mid_iteration_drains)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } },
        { { "1" }, { "2" }, { "3" }, { "4" } }));

    ASSERT_EQ(conn->beginQuery("SELECT n FROM t", sizeof("SELECT n FROM t") - 1), 1);
    EXPECT_EQ(conn->nextRow(), 1);

    // endResult() before EOF must drain the remaining rows
    EXPECT_TRUE(conn->endResult());
    EXPECT_EQ(progress_of(*conn), 0);

    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "9" } }));
    MockResult* res = (MockResult*)conn->query("SELECT 9", sizeof("SELECT 9") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    delete conn;
}

TEST(umysql_stream_edge, next_row_after_end_result)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "1" } }));

    ASSERT_EQ(conn->beginQuery("SELECT n FROM t", sizeof("SELECT n FROM t") - 1), 1);
    EXPECT_EQ(conn->nextRow(), 1);
    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());

    EXPECT_EQ(conn->nextRow(), -1);
    expect_error(*conn, "No active result set", 0, UME_OTHER);
    EXPECT_TRUE(conn->isConnected()); // misuse must not kill the connection
    delete conn;
}

// ---------------------------------------------------------------------------
// Chunked arrival and large fields
// ---------------------------------------------------------------------------

TEST(umysql_stream_edge, chunked_arrival_full_flow)
{
    MockEnv env;
    env.sock.max_chunk = 16; // simulate network fragmentation
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.feed(result_set(1,
        { { "id", MFTYPE_LONG }, { "name", MFTYPE_VAR_STRING } },
        { { "1", "a" }, { "2", "bb" }, { "3", "ccc" } }));

    ASSERT_EQ(conn->beginQuery("SELECT id, name FROM t", sizeof("SELECT id, name FROM t") - 1), 1);
    EXPECT_EQ(conn->fieldCount(), 2);

    size_t len = 0;
    EXPECT_EQ(conn->nextRow(), 1);
    const UINT8* v = conn->columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "a");

    EXPECT_EQ(conn->nextRow(), 1);
    v = conn->columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "bb");

    EXPECT_EQ(conn->nextRow(), 1);
    v = conn->columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "ccc");

    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());
    delete conn;
}

TEST(umysql_stream_edge, large_field_across_chunks)
{
    MockEnv env;
    env.sock.max_chunk = 4096;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // 100 KB field value, arriving in 4 KB chunks
    std::string big(100 * 1024, 'x');
    big[0] = 'H';
    big[big.size() - 1] = 'Z';
    env.sock.feed(result_set(1, { { "data", MFTYPE_LONG_BLOB } },
        { { big } }));

    ASSERT_EQ(conn->beginQuery("SELECT data FROM t", sizeof("SELECT data FROM t") - 1), 1);

    EXPECT_EQ(conn->nextRow(), 1);
    size_t len = 0;
    const UINT8* v = conn->columnValue(0, &len);
    ASSERT_NE(v, (const UINT8*)nullptr);
    EXPECT_EQ(len, big.size());
    EXPECT_EQ(memcmp(v, big.data(), big.size()), 0);

    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());
    delete conn;
}

TEST(umysql_stream_edge, one_byte_at_a_time_full_flow)
{
    MockEnv env;
    env.sock.max_chunk = 1; // extreme fragmentation: one byte per recv
    Connection* conn = make_connected(env); // handshake + OK also byte-wise
    ASSERT_NE(conn, (Connection*)nullptr);

    env.sock.feed(result_set(1,
        { { "id", MFTYPE_LONG }, { "name", MFTYPE_VAR_STRING } },
        { { "1", "a" }, { "2", "bb" }, { "3", "ccc" } }));

    // Every packet header and payload must be reassembled byte by byte
    ASSERT_EQ(conn->beginQuery("SELECT id, name FROM t", sizeof("SELECT id, name FROM t") - 1), 1);
    EXPECT_EQ(conn->fieldCount(), 2);

    size_t len = 0;
    EXPECT_EQ(conn->nextRow(), 1);
    const UINT8* v = conn->columnValue(0, &len);
    EXPECT_EQ(std::string((const char*)v, len), "1");
    v = conn->columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "a");

    EXPECT_EQ(conn->nextRow(), 1);
    v = conn->columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "bb");

    EXPECT_EQ(conn->nextRow(), 1);
    v = conn->columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "ccc");

    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());

    // Connection reuse also works byte-wise
    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "7" } }));
    MockResult* res = (MockResult*)conn->query("SELECT 7", sizeof("SELECT 7") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    delete conn;
}

TEST(umysql_stream_edge, one_byte_at_a_time_triggers_shrink)
{
    MockEnv env;
    env.sock.max_chunk = 1;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // NOTE: a single row must fit in the RX buffer ("Socket receive buffer
    // full" is a documented limit), so use many small rows instead of one
    // huge one. 16 KB buffer + 20 x 1 KB rows = 20 KB of wire data: the
    // byte-wise arrival forces PacketReader::shrink() to compact the buffer
    // many times (exercising the m_packetEnd rebasing inside shrink()).
    conn->setRxBufferSize(16384);

    std::vector<std::vector<std::string>> rows;
    for (int i = 0; i < 20; i++)
        rows.push_back({ std::string(1024, (char)('a' + i % 26)) });
    env.sock.feed(result_set(1, { { "data", MFTYPE_LONG_BLOB } }, rows));

    ASSERT_EQ(conn->beginQuery("SELECT data FROM t", sizeof("SELECT data FROM t") - 1), 1);

    for (int i = 0; i < 20; i++)
    {
        EXPECT_EQ(conn->nextRow(), 1) << "row " << i;
        size_t len = 0;
        const UINT8* v = conn->columnValue(0, &len);
        ASSERT_NE(v, (const UINT8*)nullptr) << "row " << i;
        EXPECT_EQ(len, (size_t)1024) << "row " << i;
        EXPECT_EQ((char)v[0], (char)('a' + i % 26)) << "row " << i;
    }

    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());
    delete conn;
}

// ---------------------------------------------------------------------------
// Split packets (0xffffff continuation packets)
// ---------------------------------------------------------------------------

TEST(umysql_stream_edge, receive_split_packet_large_row)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // A single row larger than 0xffffff: the server splits it into a
    // 0xffffff segment plus a continuation packet. The RX buffer must be
    // large enough to hold the whole logical packet.
    const size_t big_size = 0xffffff + 100;
    conn->setRxBufferSize(20 * 1024 * 1024);

    std::string big(big_size, 'x');
    big[0] = 'H';
    big[big_size - 1] = 'Z';

    // Row payload: lenenc length prefix + data
    std::vector<char> row_payload;
    packet_put_lenenc(row_payload, big_size);
    row_payload.insert(row_payload.end(), big.begin(), big.end());

    // Physical split: segment 1 payload = 0xffffff, segment 2 = the rest
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 1);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c1 = column_packet(2, "data", MFTYPE_LONG_BLOB);
    out.insert(out.end(), c1.begin(), c1.end());
    std::vector<char> ce = eof_packet(3, 0);
    out.insert(out.end(), ce.begin(), ce.end());

    // Segment 1: exactly 0xffffff payload
    std::vector<char> seg1;
    packet_put_u24(seg1, 0xffffff);
    seg1.push_back(4); // seq
    seg1.insert(seg1.end(), row_payload.begin(), row_payload.begin() + 0xffffff);
    out.insert(out.end(), seg1.begin(), seg1.end());

    // Segment 2: continuation, remaining payload
    size_t rest = row_payload.size() - 0xffffff;
    std::vector<char> seg2;
    packet_put_u24(seg2, (uint32_t)rest);
    seg2.push_back(5); // seq
    seg2.insert(seg2.end(), row_payload.begin() + 0xffffff, row_payload.end());
    out.insert(out.end(), seg2.begin(), seg2.end());

    std::vector<char> re = eof_packet(6, 0);
    out.insert(out.end(), re.begin(), re.end());
    env.sock.feed(out);

    ASSERT_EQ(conn->beginQuery("SELECT data FROM t", sizeof("SELECT data FROM t") - 1), 1);

    // The logical packet must be reassembled transparently
    EXPECT_EQ(conn->nextRow(), 1);
    size_t len = 0;
    const UINT8* v = conn->columnValue(0, &len);
    ASSERT_NE(v, (const UINT8*)nullptr);
    EXPECT_EQ(len, big_size);
    EXPECT_EQ((char)v[0], 'H');
    EXPECT_EQ((char)v[big_size - 1], 'Z');
    EXPECT_EQ(memcmp(v, big.data(), big.size()), 0);

    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());
    delete conn;
}

TEST(umysql_stream_edge, send_split_packet_huge_query)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // A query larger than 0xffffff must be sent as split packets. 33 MB
    // yields three query packets: [MC_QUERY + 0xfffffe] + [0xffffff] +
    // [remainder], seqs 0,1,2 (tx[0] is the handshake response, seq 1).
    // sendQuery pre-checks that the whole query fits the TX buffer.
    conn->setTxBufferSize(34 * 1024 * 1024);

    const size_t sql_size = 33 * 1024 * 1024; // 33 MB
    std::string sql(sql_size, 'q');
    env.sock.feed(ok_packet(1, 0, 0, 0));

    int st = conn->beginQuery(sql.c_str(), sql.size());
    ASSERT_EQ(st, 0); // OK packet

    std::vector<MockSocket::TxPacket> pkts = env.sock.tx_packets();
    // tx[0] is the handshake response (seq 1); the query follows as 3 split
    // packets: [MC_QUERY + 0xfffffe] (seq 0) + [0xffffff] (seq 1) + rest (seq 2)
    ASSERT_EQ(pkts.size(), (size_t)4);
    EXPECT_EQ(pkts[0].seq, (uint8_t)1); // handshake response
    EXPECT_EQ(pkts[1].seq, (uint8_t)0);
    EXPECT_EQ(pkts[2].seq, (uint8_t)1);
    EXPECT_EQ(pkts[3].seq, (uint8_t)2);

    EXPECT_EQ(pkts[1].payload.size(), (size_t)(1 + 0xfffffe)); // MC_QUERY + first slice
    EXPECT_EQ((uint8_t)pkts[1].payload[0], (uint8_t)MC_QUERY);
    EXPECT_EQ(pkts[2].payload.size(), (size_t)0xffffff);
    EXPECT_EQ(pkts[3].payload.size(), sql_size - (0xfffffe + 0xffffff));

    // The payload bytes must be preserved in order
    EXPECT_EQ(memcmp(pkts[1].payload.data() + 1, sql.data(), 0xfffffe), 0);
    EXPECT_EQ(memcmp(pkts[2].payload.data(), sql.data() + 0xfffffe, 0xffffff), 0);
    EXPECT_EQ(memcmp(pkts[3].payload.data(), sql.data() + 0xfffffe + 0xffffff,
        pkts[3].payload.size()), 0);

    delete conn;
}

// ---------------------------------------------------------------------------
// Row content edge cases
// ---------------------------------------------------------------------------

TEST(umysql_stream_edge, first_column_null)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 2);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c1 = column_packet(2, "a", MFTYPE_VAR_STRING);
    out.insert(out.end(), c1.begin(), c1.end());
    std::vector<char> c2 = column_packet(3, "b", MFTYPE_VAR_STRING);
    out.insert(out.end(), c2.begin(), c2.end());
    std::vector<char> ce = eof_packet(4, 0);
    out.insert(out.end(), ce.begin(), ce.end());
    std::vector<char> rp = row_packet_mixed(5, { { true, "" }, { false, "v" } });
    out.insert(out.end(), rp.begin(), rp.end());
    std::vector<char> re = eof_packet(6, 0);
    out.insert(out.end(), re.begin(), re.end());
    env.sock.feed(out);

    ASSERT_EQ(conn->beginQuery("SELECT a, b FROM t", sizeof("SELECT a, b FROM t") - 1), 1);
    EXPECT_EQ(conn->nextRow(), 1);

    size_t len = 99;
    EXPECT_EQ(conn->columnValue(0, &len), (const UINT8*)nullptr);
    EXPECT_EQ(len, (size_t)0);
    len = 99;
    const UINT8* v = conn->columnValue(1, &len);
    EXPECT_EQ(std::string((const char*)v, len), "v");

    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());
    delete conn;
}

TEST(umysql_stream_edge, binary_row_values)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // Values containing NUL and 0xff must survive byte-for-byte
    std::string v0("\x00\x01\x02", 3);
    std::string v1("a\xff\x00z", 4);
    env.sock.feed(result_set(1, { { "a", MFTYPE_BLOB }, { "b", MFTYPE_BLOB } },
        { { v0, v1 } }));

    ASSERT_EQ(conn->beginQuery("SELECT a, b FROM t", sizeof("SELECT a, b FROM t") - 1), 1);
    EXPECT_EQ(conn->nextRow(), 1);

    size_t len = 0;
    const UINT8* v = conn->columnValue(0, &len);
    EXPECT_EQ(len, v0.size());
    EXPECT_EQ(memcmp(v, v0.data(), v0.size()), 0);
    v = conn->columnValue(1, &len);
    EXPECT_EQ(len, v1.size());
    EXPECT_EQ(memcmp(v, v1.data(), v1.size()), 0);

    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());
    delete conn;
}

TEST(umysql_stream_edge, utf8_column_names)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // UTF-8 column names survive the heap-copy path
    env.sock.feed(result_set(1,
        { { "\xe5\xad\x97\xe6\xae\xb5", MFTYPE_VAR_STRING } }, // 字段
        { { "v" } }));

    ASSERT_EQ(conn->beginQuery("SELECT \xe5\xad\x97\xe6\xae\xb5 FROM t",
        sizeof("SELECT \xe5\xad\x97\xe6\xae\xb5 FROM t") - 1), 1);
    EXPECT_EQ(conn->fieldName(0), "\xe5\xad\x97\xe6\xae\xb5");
    EXPECT_EQ(conn->nextRow(), 1);
    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());
    delete conn;
}

TEST(umysql_stream_edge, extra_cells_in_row_are_skipped)
{
    MockEnv env;
    Connection* conn = make_connected(env);
    ASSERT_NE(conn, (Connection*)nullptr);

    // The row carries more cells than fieldCount; the extras must be skipped
    // and the row still delivered.
    std::vector<char> out;
    std::vector<char> fc;
    packet_put_lenenc(fc, 1);
    std::vector<char> fcp = wrap_packet(fc, 1);
    out.insert(out.end(), fcp.begin(), fcp.end());
    std::vector<char> c1 = column_packet(2, "a", MFTYPE_VAR_STRING);
    out.insert(out.end(), c1.begin(), c1.end());
    std::vector<char> ce = eof_packet(3, 0);
    out.insert(out.end(), ce.begin(), ce.end());
    std::vector<char> rp = row_packet_mixed(4, { { false, "x" }, { false, "y" } });
    out.insert(out.end(), rp.begin(), rp.end());
    std::vector<char> re = eof_packet(5, 0);
    out.insert(out.end(), re.begin(), re.end());
    env.sock.feed(out);

    ASSERT_EQ(conn->beginQuery("SELECT a FROM t", sizeof("SELECT a FROM t") - 1), 1);
    EXPECT_EQ(conn->fieldCount(), 1);
    EXPECT_EQ(conn->nextRow(), 1);

    size_t len = 0;
    const UINT8* v = conn->columnValue(0, &len);
    EXPECT_EQ(std::string((const char*)v, len), "x");
    // Out-of-range column index is rejected
    EXPECT_EQ(conn->columnValue(1, &len), (const UINT8*)nullptr);

    EXPECT_EQ(conn->nextRow(), 0);
    EXPECT_TRUE(conn->endResult());
    delete conn;
}
