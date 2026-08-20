/*
 * Authentication protocol tests.
 *
 * Drives each supported auth flow through the mocked CAPI and verifies:
 *   - mysql_native_password: SHA1 challenge-response token correctness
 *   - caching_sha2_password fast auth (0x03) and full auth (RSA public-key
 *     exchange, 0x04) success paths, plus failure paths
 *   - AuthSwitchRequest to mysql_native_password (the typical 8.0 flow for
 *     native-password users) and to unsupported plugins
 *   - server plugins that the client does not enable (sha256_password,
 *     no PLUGIN_AUTH capability): client falls back to the native path
 *
 * The server side of each flow is reconstructed here with OpenSSL so that the
 * client's token / ciphertext is cryptographically verified, not just
 * length-checked.
 */

#include "Connection.h"
#include "mock_server.h"
#include <gtest/gtest.h>
#include <openssl/evp.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <cstring>

using namespace umysql_test;

// ---------------------------------------------------------------------------
// Server-side auth verification helpers (OpenSSL)
// ---------------------------------------------------------------------------

static std::vector<char> to_bytes(const std::string& s)
{
    return std::vector<char>(s.begin(), s.end());
}

static std::vector<char> concat(const std::vector<char>& a,
    const std::vector<char>& b)
{
    std::vector<char> out = a;
    out.insert(out.end(), b.begin(), b.end());
    return out;
}

static std::vector<char> digest(const EVP_MD* md, const std::vector<char>& data)
{
    std::vector<char> out(EVP_MD_size(md));
    unsigned int len = 0;
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, md, NULL);
    EVP_DigestUpdate(ctx, data.data(), data.size());
    EVP_DigestFinal_ex(ctx, (unsigned char*)out.data(), &len);
    EVP_MD_CTX_free(ctx);
    out.resize(len);
    return out;
}

// Expected mysql_native_password token:
//   SHA1(pw) XOR SHA1(scramble || SHA1(SHA1(pw)))
static std::vector<char> expected_native_token(const std::string& password,
    const std::string& salt)
{
    const EVP_MD* md = EVP_sha1();
    std::vector<char> stage1 = digest(md, to_bytes(password));
    std::vector<char> stage2 = digest(md, stage1);
    std::vector<char> final = digest(md, concat(to_bytes(salt), stage2));
    std::vector<char> token(stage1.size());
    for (size_t i = 0; i < stage1.size(); i++)
        token[i] = (char)((unsigned char)final[i] ^ (unsigned char)stage1[i]);
    return token;
}

// Expected caching_sha2_password token (verified against a real 8.0 server):
//   SHA256(pw) XOR SHA256(SHA256(SHA256(pw)) || scramble)
// i.e. two digest rounds, then the scramble is mixed with the SECOND digest
// (no third round), matching Connection::scramble() exactly.
static std::vector<char> expected_sha2_token(const std::string& password,
    const std::string& salt)
{
    const EVP_MD* md = EVP_sha256();
    std::vector<char> stage1 = digest(md, to_bytes(password));
    std::vector<char> stage2 = digest(md, stage1);
    std::vector<char> final = digest(md, concat(stage2, to_bytes(salt)));
    std::vector<char> token(stage1.size());
    for (size_t i = 0; i < stage1.size(); i++)
        token[i] = (char)((unsigned char)final[i] ^ (unsigned char)stage1[i]);
    return token;
}

// Generate a 2048-bit RSA keypair. Returns the private key (caller owns it)
// and fills pub_pem with the PKCS#8 SubjectPublicKeyInfo PEM.
static EVP_PKEY* make_rsa_key(std::string& pub_pem)
{
    EVP_PKEY* priv = nullptr;
    EVP_PKEY_CTX* ctx = EVP_PKEY_CTX_new_id(EVP_PKEY_RSA, NULL);
    if (!ctx) {
        ADD_FAILURE() << "RSA ctx alloc failed";
        return nullptr;
    }
    if (EVP_PKEY_keygen_init(ctx) != 1 ||
        EVP_PKEY_CTX_set_rsa_keygen_bits(ctx, 2048) != 1 ||
        EVP_PKEY_keygen(ctx, &priv) != 1) {
        ADD_FAILURE() << "RSA keygen failed";
        EVP_PKEY_CTX_free(ctx);
        return nullptr;
    }
    EVP_PKEY_CTX_free(ctx);

    BIO* bio = BIO_new(BIO_s_mem());
    if (!bio) {
        ADD_FAILURE() << "BIO alloc failed";
        EVP_PKEY_free(priv);
        return nullptr;
    }
    if (PEM_write_bio_PUBKEY(bio, priv) != 1) {
        ADD_FAILURE() << "PEM write failed";
        BIO_free(bio);
        EVP_PKEY_free(priv);
        return nullptr;
    }
    char* data = nullptr;
    long len = BIO_get_mem_data(bio, &data);
    pub_pem.assign(data, len);
    BIO_free(bio);
    return priv; // caller owns
}

// Decrypt the client's RSA-OAEP ciphertext and XOR back the salt (which the
// client uses with a trailing NUL); returns true if the plaintext is exactly
// password + NUL.
static bool rsa_decrypt_verify(EVP_PKEY* priv, const std::vector<char>& cipher,
    const std::string& password, const std::string& salt)
{
    RSA* rsa = EVP_PKEY_get1_RSA(priv);
    if (!rsa)
        return false;
    std::vector<char> plain(RSA_size(rsa));
    int n = RSA_private_decrypt((int)cipher.size(),
        (const unsigned char*)cipher.data(), (unsigned char*)plain.data(), rsa,
        RSA_PKCS1_OAEP_PADDING);
    RSA_free(rsa);
    if (n < 0)
        return false;

    std::vector<char> salt_bytes = to_bytes(salt);
    salt_bytes.push_back(0);

    std::vector<char> expected = to_bytes(password);
    expected.push_back(0);
    if ((size_t)n != expected.size())
        return false;
    for (int i = 0; i < n; i++)
        if ((char)((unsigned char)plain[i] ^
                (unsigned char)salt_bytes[i % salt_bytes.size()]) != expected[i])
            return false;
    return true;
}

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

// ---------------------------------------------------------------------------
// mysql_native_password (4.1+, the default up to 5.7)
// ---------------------------------------------------------------------------

TEST(umysql_auth, mysql_native_password_token)
{
    const char* salt = "0123456789abcdefghij";
    const char* password = "secret";

    MockEnv env;
    env.sock.feed(handshake_packet(salt, "mysql_native_password"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "user", password, "", NULL, MCS_utf8mb4_bin));
    EXPECT_TRUE(conn.isConnected());

    HandshakeResponse hs = parse_handshake_response(env.sock);
    EXPECT_EQ(hs.auth_token.size(), (size_t)20);
    // The token must be the correct SHA1 challenge-response, not just 20 bytes
    EXPECT_EQ(hs.auth_token, expected_native_token(password, salt));
    // No plugin name: client stays on the native path
    EXPECT_EQ(hs.plugin, "");
}

// ---------------------------------------------------------------------------
// caching_sha2_password (8.0 default)
// ---------------------------------------------------------------------------

TEST(umysql_auth, caching_sha2_fast_auth_success)
{
    const char* salt = "0123456789abcdefghij";
    const char* password = "secret";

    MockEnv env;
    env.sock.feed(handshake_packet(salt, "caching_sha2_password"));
    env.sock.feed(auth_more_data_packet(2, 0x03)); // fast auth: cache hit
    env.sock.feed(ok_packet(3, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "user", password, "", NULL, MCS_utf8mb4_bin));
    EXPECT_TRUE(conn.isConnected());

    HandshakeResponse hs = parse_handshake_response(env.sock);
    EXPECT_TRUE(hs.caps & MCP_PLUGIN_AUTH);
    EXPECT_EQ(hs.auth_token.size(), (size_t)32);
    // SHA256 challenge-response must be correct
    EXPECT_EQ(hs.auth_token, expected_sha2_token(password, salt));
    EXPECT_EQ(hs.plugin, "caching_sha2_password");
}

TEST(umysql_auth, caching_sha2_empty_password)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij", "caching_sha2_password"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "user", "", "", NULL, MCS_utf8mb4_bin));
    EXPECT_TRUE(conn.isConnected());

    HandshakeResponse hs = parse_handshake_response(env.sock);
    // Empty password: zero-length auth token, but the plugin name is still sent
    EXPECT_TRUE(hs.auth_token.empty());
    EXPECT_EQ(hs.plugin, "caching_sha2_password");
}

TEST(umysql_auth, caching_sha2_full_auth_success)
{
    const char* salt = "0123456789abcdefghij";
    const char* password = "secret";

    std::string pub_pem;
    EVP_PKEY* priv = make_rsa_key(pub_pem);
    ASSERT_NE(priv, (EVP_PKEY*)nullptr);

    MockEnv env;
    env.sock.feed(handshake_packet(salt, "caching_sha2_password"));
    env.sock.feed(auth_more_data_packet(2, 0x04)); // full auth needed
    env.sock.feed(public_key_packet(4, pub_pem));
    env.sock.feed(ok_packet(6, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "user", password, "", NULL, MCS_utf8mb4_bin));
    EXPECT_TRUE(conn.isConnected());

    // Client packet #2 (seq 3): request for the server public key
    std::vector<MockSocket::TxPacket> pkts = env.sock.tx_packets();
    ASSERT_GE(pkts.size(), (size_t)3);
    ASSERT_EQ(pkts[1].seq, (uint8_t)3);
    ASSERT_GE(pkts[1].payload.size(), (size_t)1);
    EXPECT_EQ((uint8_t)pkts[1].payload[0], 0x02);

    // Client packet #3 (seq 5): RSA-OAEP encrypted password
    ASSERT_EQ(pkts[2].seq, (uint8_t)5);
    EXPECT_FALSE(pkts[2].payload.empty());
    EXPECT_TRUE(rsa_decrypt_verify(priv, pkts[2].payload, password, salt));

    // The connection must be fully usable afterwards
    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "1" } }));
    MockResult* res = (MockResult*)conn.query("SELECT 1", sizeof("SELECT 1") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    // NOTE: mock_destroyResult already freed res; do NOT delete it.

    EVP_PKEY_free(priv);
}

TEST(umysql_auth, caching_sha2_full_auth_bad_public_key)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij", "caching_sha2_password"));
    env.sock.feed(auth_more_data_packet(2, 0x04));
    // Invalid PEM: the client cannot parse the public key
    env.sock.feed(public_key_packet(4, "-----BEGIN PUBLIC KEY-----\nnot a key\n"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "user", "secret", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn, "Authentication failed during handshake", 0, UME_OTHER);
}

TEST(umysql_auth, caching_sha2_full_auth_wrong_password)
{
    const char* salt = "0123456789abcdefghij";

    std::string pub_pem;
    EVP_PKEY* priv = make_rsa_key(pub_pem);
    ASSERT_NE(priv, (EVP_PKEY*)nullptr);

    MockEnv env;
    env.sock.feed(handshake_packet(salt, "caching_sha2_password"));
    env.sock.feed(auth_more_data_packet(2, 0x04));
    env.sock.feed(public_key_packet(4, pub_pem));
    // Server decrypts the payload, verifies the password and rejects it
    env.sock.feed(err_packet(6, 1045, "28000", "Access denied for user 'user'"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "user", "secret", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    // The MySQL-level error must be preserved
    expect_error(conn, "Access denied for user 'user'", 1045, UME_MYSQL);

    EVP_PKEY_free(priv);
}

// ---------------------------------------------------------------------------
// AuthSwitchRequest (8.0 servers switching native-password users)
// ---------------------------------------------------------------------------

TEST(umysql_auth, auth_switch_to_mysql_native_success)
{
    const char* switch_salt = "abcdefghijklmnopqrst";
    const char* password = "secret";

    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij", "caching_sha2_password"));
    env.sock.feed(auth_switch_packet(2, "mysql_native_password", switch_salt));
    env.sock.feed(ok_packet(4, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "user", password, "", NULL, MCS_utf8mb4_bin));
    EXPECT_TRUE(conn.isConnected());

    // Client re-sends the auth token with the NEW salt, native (SHA1) style
    std::vector<MockSocket::TxPacket> pkts = env.sock.tx_packets();
    ASSERT_GE(pkts.size(), (size_t)2);
    ASSERT_EQ(pkts[1].seq, (uint8_t)3);
    EXPECT_EQ(pkts[1].payload, expected_native_token(password, switch_salt));

    // Connection is fully usable afterwards
    env.sock.feed(result_set(1, { { "n", MFTYPE_LONG } }, { { "1" } }));
    MockResult* res = (MockResult*)conn.query("SELECT 1", sizeof("SELECT 1") - 1);
    ASSERT_NE(res, (MockResult*)nullptr);
    // NOTE: mock_destroyResult already freed res; do NOT delete it.
}

TEST(umysql_auth, auth_switch_to_unsupported_plugin)
{
    MockEnv env;
    env.sock.feed(handshake_packet("0123456789abcdefghij", "caching_sha2_password"));
    // sha256_password is not implemented: the client must refuse the switch
    env.sock.feed(auth_switch_packet(2, "sha256_password", "abcdefghijklmnopqrst"));

    Connection conn(&env.capi.capi);
    ASSERT_FALSE(conn.connect("h", 3306, "user", "secret", "", NULL, MCS_utf8mb4_bin));
    EXPECT_FALSE(conn.isConnected());
    expect_error(conn,
        "Old Authentication Method switch from server. Not supported by this client.",
        4, UME_OTHER);
}

// ---------------------------------------------------------------------------
// Plugins the client does not enable (falls back to the native path)
// ---------------------------------------------------------------------------

TEST(umysql_auth, server_plugin_sha256_password_no_switch)
{
    const char* salt = "0123456789abcdefghij";

    MockEnv env;
    // Server announces sha256_password in the handshake (no AuthSwitch).
    // The client does not recognise it, so it stays on the native path.
    env.sock.feed(handshake_packet(salt, "sha256_password"));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "user", "secret", "", NULL, MCS_utf8mb4_bin));
    EXPECT_TRUE(conn.isConnected());

    HandshakeResponse hs = parse_handshake_response(env.sock);
    EXPECT_EQ(hs.auth_token.size(), (size_t)20); // SHA1, not SHA256
    EXPECT_EQ(hs.auth_token, expected_native_token("secret", salt));
    EXPECT_EQ(hs.plugin, "");
}

TEST(umysql_auth, server_without_plugin_auth_capability)
{
    const char* salt = "0123456789abcdefghij";

    // Handshake with PLUGIN_AUTH NOT set in the high capability word, even
    // though the plugin name is caching_sha2_password: the client must not
    // enable plugin auth and falls back to the native SHA1 path.
    std::vector<char> p;
    p.push_back(0x0a); // protocol version 10
    packet_put_ntstr(p, "8.0.30-mock");
    packet_put_u32(p, 12345);
    p.insert(p.end(), salt, salt + 8);
    p.push_back(0x00); // filler
    packet_put_u16(p, MCP_PROTOCOL_41 | MCP_CONNECT_WITH_DB | MCP_TRANSACTIONS | MCP_SECURE_CONNECTION);
    p.push_back(33); // charset
    packet_put_u16(p, 2);   // server status
    packet_put_u16(p, 0);   // high caps: NO PLUGIN_AUTH
    for (int i = 0; i < 11; i++)
        p.push_back(0x00);
    p.insert(p.end(), salt + 8, salt + 20);
    p.push_back(0x00);
    packet_put_ntstr(p, "caching_sha2_password");

    MockEnv env;
    env.sock.feed(wrap_packet(p, 0));
    env.sock.feed(ok_packet(2, 0, 0, 2));

    Connection conn(&env.capi.capi);
    ASSERT_TRUE(conn.connect("h", 3306, "user", "secret", "", NULL, MCS_utf8mb4_bin));
    EXPECT_TRUE(conn.isConnected());

    HandshakeResponse hs = parse_handshake_response(env.sock);
    EXPECT_FALSE(hs.caps & MCP_PLUGIN_AUTH);
    EXPECT_EQ(hs.auth_token.size(), (size_t)20); // SHA1, not SHA256
    EXPECT_EQ(hs.auth_token, expected_native_token("secret", salt));
    EXPECT_EQ(hs.plugin, "");
}
