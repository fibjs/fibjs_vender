/*
Copyright (c) 2011, Jonas Tarnstrom and ESN Social Software AB
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.
3. All advertising materials mentioning features or use of this software
must display the following acknowledgement:
This product includes software developed by ESN Social Software AB (www.esn.me).
4. Neither the name of the ESN Social Software AB nor the
names of its contributors may be used to endorse or promote products
derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY ESN SOCIAL SOFTWARE AB ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL ESN SOCIAL SOFTWARE AB BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Portions of code from gevent-MySQL
Copyright (C) 2010, Markus Thurlin
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

* Neither the name of Hyves (Startphone Ltd.) nor the names of its
contributors may be used to endorse or promote products derived from this
software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "Connection.h"
#include "Packets.h"
#include <assert.h>
#include <string>
#include <stdio.h>
#include <time.h>
#include <crypto/evp.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/err.h>

#ifdef _WIN32
#define snprintf _snprintf
#endif

//#define PRINTMARK() fprintf(stderr, "%08x:%s:%s MARK(%d)\n", GetTickCount(), __FILE__, __FUNCTION__, __LINE__)		
#define PRINTMARK() 		

Connection::Connection (UMConnectionCAPI *_capi) 
  :	m_reader(MYSQL_RX_BUFFER_SIZE)
  , m_writer(MYSQL_TX_BUFFER_SIZE)
{
  PRINTMARK();

  m_timeout = -1;
  m_state = NONE;
  m_sockInst = NULL;
  m_errno = -1;
  memcpy (&m_capi, _capi, sizeof (UMConnectionCAPI));
  m_dbgMethodProgress = 0;
  m_errorType = UME_OTHER;
  m_has_more_result = false;

  // Streaming result-set state
  m_resultState = RS_NONE;
  m_fieldCount = 0;
  m_resultEOF = false;
  m_lastResult = NULL;
}

Connection::~Connection()
{
  PRINTMARK();

  if (m_sockInst)
  {
    PRINTMARK();
    m_capi.closeSocket(m_sockInst);
    m_capi.deleteSocket(m_sockInst);
  }

}

size_t Connection::scramble(const char *_scramble1, UINT8* _outToken)
{
  const EVP_MD *md = (m_clientCaps & MCP_PLUGIN_AUTH) ? EVP_sha256() : EVP_sha1();
  size_t md_size = EVP_MD_size(md);

  UINT8 stage1_hash[32];

  EVP_MD_CTX* ctx = EVP_MD_CTX_new();
  EVP_DigestInit_ex(ctx, md, NULL);
  EVP_DigestUpdate(ctx, (UINT8 *) m_password.c_str(), m_password.size());
  EVP_DigestFinal_ex(ctx, stage1_hash, NULL);
  EVP_MD_CTX_free(ctx);

  UINT8 stage2_hash[32];

  ctx = EVP_MD_CTX_new();
  EVP_DigestInit_ex(ctx, md, NULL);
  EVP_DigestUpdate(ctx, stage1_hash, md_size);
  EVP_DigestFinal_ex(ctx, stage2_hash, NULL);
  EVP_MD_CTX_free(ctx);

  UINT8 final_hash[32];

  ctx = EVP_MD_CTX_new();
  EVP_DigestInit_ex(ctx, md, NULL);

  if (m_clientCaps & MCP_PLUGIN_AUTH)
  {
    EVP_DigestUpdate(ctx, stage2_hash, md_size);
    EVP_DigestUpdate(ctx, (UINT8*) _scramble1, strlen(_scramble1));
  }
  else
  {
    EVP_DigestUpdate(ctx, (UINT8*) _scramble1, strlen(_scramble1));
    EVP_DigestUpdate(ctx, stage2_hash, md_size);
  }
  EVP_DigestFinal_ex(ctx, final_hash, NULL);
  EVP_MD_CTX_free(ctx);

  for (int index = 0; index < md_size; index ++)
  {
    _outToken[index] = final_hash[index] ^ stage1_hash[index]; 
  }

  return md_size;
}

bool Connection::readSocket()
{
  size_t bytesToRecv = m_reader.getEndPtr() - m_reader.getWritePtr();

  if (bytesToRecv < 4096)
  {
    m_reader.shrink();
    bytesToRecv = m_reader.getEndPtr() - m_reader.getWritePtr();
  }

  if (bytesToRecv == 0)
  {
    // Socket buffer got full!
    setError("Socket receive buffer full", 0, UME_OTHER);
    return false;
  }
  else
    if (bytesToRecv > 65536)
    {
      bytesToRecv = 65536;
    }


    int recvResult = m_capi.recvSocket(m_sockInst, m_reader.getWritePtr(), bytesToRecv);

    if (recvResult == -1)
    {
      setError("Socket error when receiving", 0, UME_OTHER);
      return false;
    }
    else
      if (recvResult == 0)
      {
        setError("Connection reset by peer when receiving", 0, UME_OTHER);
        return false;
      }

      m_reader.push (recvResult);

      return true;
}

bool Connection::writeSocket()
{
  size_t bytesToSend = m_writer.getWriteCursor() - m_writer.getReadCursor();

  assert (bytesToSend > 0);
  assert ((int)bytesToSend < m_writer.getEnd() - m_writer.getStart());

  int sendResult = m_capi.sendSocket(m_sockInst, m_writer.getReadCursor(), bytesToSend);

  if (sendResult == -1)
  {
    setError("Socket error when sending", 0, UME_OTHER);
    return false;
  }
  else
    if (sendResult == 0)
    {
      setError("Connection reset by peer when sending", 0, UME_OTHER);
      return false;
    }

    m_writer.pull(sendResult);
    return true;
}

bool Connection::close(void)
{
  PRINTMARK();

  if (m_sockInst)
  {
    PRINTMARK();

    if (m_writer.isDone())
    {
      m_writer.reset();
      m_writer.writeByte(MC_QUIT);
      m_writer.finalize(0);

      if (!sendPacket())
      {	
        m_capi.clearException();
      }
    }

    if (m_sockInst)
    {
      m_capi.closeSocket(m_sockInst);
      m_capi.clearException();
      m_capi.deleteSocket(m_sockInst);
      m_sockInst = NULL;
      return true;
    }
  }

  return true;
}

bool Connection::connectSocket()
{
  if (!m_capi.connectSocket(m_sockInst, m_host.c_str(), m_port))
  {
    return false;
  }

  PRINTMARK();
  return true;
}

bool Connection::processHandshake()
{
  // Parse data
  UINT8 protocolVersion = m_reader.readByte();

  if (protocolVersion == 0xff)
  {
    setError("Too many connections reported by server", 0, UME_OTHER);
    return false;
  }
  else
    if (protocolVersion != MYSQL_PROTOCOL_VERSION)
    {
      setError("Protocol version not supported(1)", 0, UME_OTHER);
      return false;
    }

    // Decode the rest of the handshake packet
    m_reader.rewind(1);
    size_t len = m_reader.getBytesLeft();
    const char *data = (const char *) m_reader.readBytes(len);

    HandshakePacket hs;
    if (!hs.decode(data, len) || !hs.has_salt_part2)
    {
      setError("Authentication < 4.1 not supported", 2, UME_OTHER);
      return false;
    }

    if (!(hs.caps_low & MCP_PROTOCOL_41))
    {
      setError("Authentication < 4.1 not supported", 1, UME_OTHER);
      return false;
    }

    m_clientCaps = hs.caps_low;

    if (hs.caps_high & (MCP_PLUGIN_AUTH >> 16)
      && !hs.auth_plugin.empty()
      && hs.auth_plugin == "caching_sha2_password")
    {
      m_clientCaps |= MCP_PLUGIN_AUTH;
    }

    m_salt = hs.salt;

    m_clientCaps  &= ~MCP_COMPRESS;
    m_clientCaps  &= ~MCP_NO_SCHEMA;
    m_clientCaps &= ~MCP_SSL;

    if(!hs.server_version.empty() && hs.server_version[0]>='5')
        m_clientCaps |= MCP_MULTI_STATEMENTS | MCP_MULTI_RESULTS;

    if (!(hs.caps_low & MCP_CONNECT_WITH_DB) && !m_database.empty())
    {
      setError("Protocol < 4.1 not supported", 3, UME_OTHER);
      return false;
    }

    if ((hs.caps_low & MCP_CONNECT_WITH_DB) && m_database.empty())
    {
      m_clientCaps &= ~MCP_CONNECT_WITH_DB;
    }

    m_reader.skip();

    m_writer.reset();

    HandshakeResponsePacket resp;
    resp.caps = m_clientCaps;
    resp.max_packet = MYSQL_PACKET_SIZE;
    resp.charset = (m_charset != MCS_UNDEFINED) ? (UINT8) (int) m_charset : hs.charset;
    resp.username = m_username;

    if (!m_password.empty())
    {
      UINT8 token[32];
      size_t sz = scramble(m_salt.c_str(), token);
      resp.auth_token.assign(token, token + sz);
    }

    resp.database = m_database;

    if (m_clientCaps & MCP_PLUGIN_AUTH)
    {
      resp.plugin = "caching_sha2_password";
    }

    std::vector<char> payload = resp.payload();
    m_writer.writeBytes(payload.data(), payload.size());
    m_writer.finalize(1);

    return true;
}

bool Connection::recvPacket()
{
  while (true)
  {
    if (m_reader.havePacket())
    {
      break;
    }

    if (!readSocket())
    {
      return false;
    }

    if (m_reader.havePacket())
    {
      break;
    }
  }

  return true;
}

bool Connection::isConnected(void)
{
  return (m_sockInst != NULL);
}


bool Connection::sendPacket()
{
  while (true)
  {
    if (!writeSocket())
    {
      return false;
    }

    if (m_writer.isDone())
    {
      break;
    }
  }

  return true;
}

void Connection::setError (const char *_message, int _errno, UMErrorType _type)
{
  m_errorMessage = _message;
  m_errno = _errno;
  m_errorType = _type;

  PRINTMARK();

  if (_type != UME_MYSQL)
  {

    if (m_sockInst)
    {
      PRINTMARK();
      m_capi.closeSocket(m_sockInst);
      m_capi.deleteSocket(m_sockInst);
      m_sockInst = NULL;
    }
  }
}


bool Connection::getLastError (const char **_ppOutMessage, int *_outErrno, int *_outErrorType)
{
  if (m_errno == -1)
  {
    return false;
  }

  *_ppOutMessage = m_errorMessage.c_str();
  *_outErrorType = (int) m_errorType;
  *_outErrno = m_errno;

  m_errno = -1;

  return true;
}

bool Connection::processHandshakeSwitch()
{
  if ((m_clientCaps & MCP_PLUGIN_AUTH) == 0)
    return false;

  // The caller (connect) already consumed the 0xfe header byte
  m_reader.rewind(1);
  size_t len = m_reader.getBytesLeft();
  const char *data = (const char *) m_reader.readBytes(len);

  AuthSwitchPacket sw;
  if (!sw.decode(data, len) || sw.plugin != "mysql_native_password")
  {
    return false;
  }

  m_clientCaps &= ~MCP_PLUGIN_AUTH;

  UINT8 token[32];
  size_t sz = scramble(sw.salt.c_str(), token);
  m_reader.skip();

  m_writer.writeBytes(token, sz);
  m_writer.finalize(3);

  PRINTMARK();
  if (!sendPacket())
  {
    return false;
  }

  PRINTMARK();
  m_writer.reset();

  if (!recvPacket())
  {
    return false;
  }

  PRINTMARK();
  UINT8 result = m_reader.readByte();
  if (result == 0xff)
  {
    handleErrorPacket();
    return false;
  }

  return true;
}

void xor_password(unsigned char *password, size_t password_len, unsigned char *salt, size_t salt_len, unsigned char *output)
{
  for (size_t i = 0; i < password_len; ++i)
  {
    output[i] = password[i] ^ salt[i % salt_len];
  }
}

int sha2_rsa_encrypt(unsigned char *password, size_t password_len, unsigned char *salt, size_t salt_len,
  const char *public_key_pem, size_t public_key_pem_len,
  unsigned char **encrypted, size_t *encrypted_len)
{
  unsigned char *xor_result = (unsigned char *)malloc(password_len);
  xor_password(password, password_len, salt, salt_len, xor_result);

  BIO *bio = BIO_new_mem_buf(public_key_pem, (int)public_key_pem_len);
  RSA *rsa_key = PEM_read_bio_RSA_PUBKEY(bio, NULL, NULL, NULL);
  BIO_free(bio);

  if (!rsa_key) {
    free(xor_result);
    return -1;
  }

  // Encrypt the message
  *encrypted = (unsigned char *)malloc(RSA_size(rsa_key));
  int result = RSA_public_encrypt((int)password_len, xor_result, *encrypted,
      rsa_key, RSA_PKCS1_OAEP_PADDING);

  RSA_free(rsa_key);
  free(xor_result);

  if (result == -1) {
    free(*encrypted);
    return -1;
  }

  *encrypted_len = result;
  return 0;
}

bool Connection::processHandshakeResponse()
{
  if (!m_reader.getBytesLeft ())
  {
    return true;
  }

  UINT8 auth_resopnse = m_reader.readByte();

  if (auth_resopnse == 0x03)
  {
    m_reader.skip();
    if (!recvPacket())
    {
      return false;
    }

    UINT8 result = m_reader.readByte();
    if (result == 0xff)
    {
      handleErrorPacket();
      return false;
    }

    return true;
  }

  if (auth_resopnse == 0x04)
  {
    m_writer.writeByte(0x02);
    m_writer.finalize(3);

    PRINTMARK();
    if (!sendPacket())
    {
      return false;
    }

    PRINTMARK();
    m_writer.reset();

    if (!recvPacket())
    {
      return false;
    }

    if (!m_reader.getBytesLeft ())
    {
      return false;
    }

    size_t len = m_reader.getBytesLeft ();
    const char *data = (const char *) m_reader.readBytes(len);

    PublicKeyPacket pk;
    if (!pk.decode(data, len))
    {
      return false;
    }

    unsigned char *encrypted;
    size_t encrypted_len;
    int res = sha2_rsa_encrypt((unsigned char*)m_password.c_str(), m_password.length() + 1
      ,(unsigned char*)m_salt.c_str(), m_salt.length() + 1
      ,pk.pem.c_str(), pk.pem.size(), &encrypted, &encrypted_len);
    if (res < 0)
    {
      return false;
    }

    m_writer.writeBytes(encrypted, encrypted_len);
    m_writer.finalize(5);

    free(encrypted);

    PRINTMARK();
    if (!sendPacket())
    {
      return false;
    }

    PRINTMARK();
    m_writer.reset();

    if (!recvPacket())
    {
      return false;
    }

    UINT8 result = m_reader.readByte();
    if (result == 0xff)
    {
      handleErrorPacket();
      return false;
    }
  }

  return true;
}

bool Connection::connect(const char *_host, int _port, const char *_username, const char *_password, const char *_database, int *_autoCommit, MYSQL_CHARSETS _charset)
{
  m_dbgMethodProgress ++;

  if (m_dbgMethodProgress > 1)
  {
    /*
    NOTE: We don't call setError here because it will close the socket worsening the concurrent access error making it impossible to trace */
    m_errorMessage = "Concurrent access in connect method";
    m_errno = 0;
    m_errorType = UME_OTHER;
    m_dbgMethodProgress --;
    return false;
  }


  if (m_sockInst != NULL)
  {
    m_dbgMethodProgress --;
    setError ("Socket already connected", 0, UME_OTHER);
    return false;
  }

  m_host = _host ? _host : "localhost";
  m_port = _port ? _port : 3306;
  m_username = _username ? _username : "";
  m_password = _password ? _password : "";
  m_database = _database ? _database : "";
  m_autoCommit = _autoCommit ? (*_autoCommit) != 0 : false;
  m_charset = _charset;

  PRINTMARK();
  m_sockInst = m_capi.getSocket();

  if (m_sockInst == NULL)
  {
    setError("Failed to create socket", 0, UME_OTHER);
    m_dbgMethodProgress --;
    return false;
  }

  if (m_timeout != -1)
  {
    if (!setTimeout (m_timeout))
    {
      // setError() (UME_OTHER) closes the socket, keeping the connection
      // state consistent.
      setError("Failed to set socket timeout", 0, UME_OTHER);
      m_dbgMethodProgress --;
      return false;
    }
  }

  if (!connectSocket())
  {
    setError("Failed to connect to server", 0, UME_OTHER);
    m_dbgMethodProgress --;
    return false;
  }

  PRINTMARK();
  if (!recvPacket())
  {
    m_dbgMethodProgress --;
    return false;
  }

  PRINTMARK();
  if (!processHandshake())
  {
    m_dbgMethodProgress --;
    return false;
  }

  PRINTMARK();
  if (!sendPacket())
  {
    m_dbgMethodProgress --;
    return false;
  }

  PRINTMARK();
  m_writer.reset();

  if (!recvPacket())
  {
    m_dbgMethodProgress --;
    return false;
  }

  PRINTMARK();
  UINT8 result = m_reader.readByte();
  if (result == 0xff)
  {
    handleErrorPacket();

    // Handshake failed: the connection is unusable even though the error is a
    // MySQL-level one (handleErrorPacket keeps the socket alive). Close it so
    // isConnected() reflects the real state and connect() can be retried.
    if (m_sockInst)
    {
      m_capi.closeSocket(m_sockInst);
      m_capi.deleteSocket(m_sockInst);
      m_sockInst = NULL;
    }

    m_dbgMethodProgress --;
    return false;
  }
  if (result == 0xfe)
  {
    if (!processHandshakeSwitch())
    {
      // Keep a more specific error if one was already recorded (e.g. the
      // server rejected the auth switch with an ERR packet).
      if (m_errno == -1)
        setError ("Old Authentication Method switch from server. Not supported by this client.", 4, UME_OTHER);

      if (m_sockInst)
      {
        m_capi.closeSocket(m_sockInst);
        m_capi.deleteSocket(m_sockInst);
        m_sockInst = NULL;
      }

      m_dbgMethodProgress --;
      return false;
    }
  }

  if (result == 0x01)
  {
    if (!processHandshakeResponse())
    {
      if (m_errno == -1)
        setError("Authentication failed during handshake", 0, UME_OTHER);

      if (m_sockInst)
      {
        m_capi.closeSocket(m_sockInst);
        m_capi.deleteSocket(m_sockInst);
        m_sockInst = NULL;
      }

      m_dbgMethodProgress --;
      return false;
    }
  }

  m_reader.skip();

  PRINTMARK();
  if (_autoCommit)
  {
    PRINTMARK();
    char strTemp[256 + 1];
    PRINTMARK();
    size_t len = snprintf (strTemp, 256, "SET AUTOCOMMIT = %d", *_autoCommit);
    PRINTMARK();
    m_writer.reset();
    m_writer.writeByte(MC_QUERY);
    m_writer.writeBytes ( (void *) strTemp, len);
    m_writer.finalize(0);

    PRINTMARK();
    if (!sendPacket())
    {
      m_dbgMethodProgress --;
      return false;
    }

    PRINTMARK();
    if (!recvPacket())
    {
      m_dbgMethodProgress --;
      return false;
    }
    m_reader.skip();
  }

  PRINTMARK();
  m_state = QUERY_WAIT;
  m_dbgMethodProgress --;

  return true;
}

void *Connection::handleOKPacket()
{
  // nextResultSet already consumed the 0x00 header byte
  m_reader.rewind(1);
  size_t len = m_reader.getBytesLeft();
  const char *data = (const char *) m_reader.readBytes(len);

  OKPacket ok;
  if (!ok.decode(data, len))
  {
    m_reader.skip();
    setError("Malformed OK packet", 0, UME_OTHER);
    return NULL;
  }

  m_reader.skip();

  m_has_more_result = ok.server_status & SERVER_MORE_RESULTS_EXISTS;

  return m_capi.resultOK(ok.affected, ok.insert_id, ok.server_status,
      ok.message.c_str(), ok.message.size());
}

void Connection::handleErrorPacket()
{
  // The caller already consumed the 0xff header byte
  m_reader.rewind(1);
  size_t len = m_reader.getBytesLeft();
  const char *data = (const char *) m_reader.readBytes(len);

  ERRPacket err;
  if (!err.decode(data, len))
  {
    m_reader.skip();
    setError("Malformed ERR packet", 0, UME_OTHER);
    return;
  }

  m_reader.skip();
  setError (err.message.c_str (), (int) err.code, UME_MYSQL);

  // An ERR packet terminates the current result set: no more results follow.
  m_has_more_result = false;
}

void *Connection::handleResultPacket()
{
  if (readFields() < 0)
  {
    resetResultState();
    return NULL;
  }

  void *resultSet = m_capi.createResult(m_fieldCount);

  // Feed column metadata to the result (names are heap copies in
  // m_fieldNames, decoupled from m_reader's buffer).
  for (int i = 0; i < m_fieldCount; i++)
    m_capi.resultSetField(resultSet, i, &m_fieldInfo[i],
        (void *) m_fieldNames[i].c_str(), m_fieldNames[i].size());

  // Read row data
  while (true)
  {
    int r = nextRow();
    if (r == 0)
      break;
    if (r < 0)
    {
      m_capi.destroyResult(resultSet);
      resetResultState();
      return NULL;
    }

    m_capi.resultRowBegin(resultSet);

    for (int index = 0; index < m_fieldCount; index++)
    {
      size_t cb_column = 0;
      const UINT8 *cell = columnValue(index, &cb_column);
      if (!m_capi.resultRowValue(resultSet, index, &m_fieldInfo[index], (void *) cell, cb_column))
      {
        m_capi.destroyResult(resultSet);
        resetResultState();
        return NULL;
      }
    }

    m_capi.resultRowEnd(resultSet);
  }

  // Rows exhausted: clear the (internal, non-guarded) result-set state.
  // m_dbgMethodProgress is NOT touched here: on this path no one holds it.
  resetResultState();
  return resultSet;
}

// ---------------------------------------------------------------------------
// Streaming result-set API
// ---------------------------------------------------------------------------

// Send COM_QUERY (with >16MB chunking). Does not manage m_dbgMethodProgress;
// the caller holds the guard and checks the connection first.
bool Connection::sendQuery(const char *_query, size_t _cbQuery)
{
  size_t len = _cbQuery;

  if (len > m_writer.getSize () - (MYSQL_PACKET_HEADER_SIZE + 1))
  {
    // Client-side error: nothing has been sent, the protocol stream is intact
    // and the connection stays usable. UME_MYSQL keeps the socket alive.
    setError ("Query too big", 0, UME_MYSQL);
    return false;
  }

  UINT8 seqid = 0;
  UINT32 pack_size;
  bool done = false;

  while (!done) {
    m_writer.reset();

    if(seqid == 0) {
      m_writer.writeByte(MC_QUERY);

      if ( len >= 0xfffffe ) {
        pack_size = 0xfffffe;
      } else {
        done = true;
        pack_size = len;
      }

      m_writer.writeBytes ( (void *) _query, pack_size);
    } else {
       if ( len >= 0xffffff ) {
        pack_size = 0xffffff;
      } else {
        done = true;
        pack_size = len;
      }

      m_writer.writeBytes ( (void *) _query, pack_size);
    }

    m_writer.finalize(seqid);

    if (!sendPacket())
    {
      PRINTMARK();
      return false;
    }

    _query += pack_size;
    len -= pack_size;
    seqid ++;
  }

  return true;
}

// Read the field phase of a result set (first packet byte already consumed).
// Populates m_fieldInfo/m_fieldNames, sets RS_ROWSET on success.
int Connection::readFields()
{
  m_reader.rewind(1);
  UINT64 fieldCount = m_reader.readLengthCodedInteger();
  m_reader.skip();

  // Sanity cap: a real server cannot have more columns than the protocol
  // allows in one packet; guard against malformed lenenc values that would
  // otherwise trigger a huge vector resize.
  if (fieldCount == 0 || fieldCount > 0xffff)
  {
    setError("Malformed result set: invalid column count", 0, UME_OTHER);
    return -1;
  }

  m_fieldCount = (int) fieldCount;
  m_fieldInfo.resize(m_fieldCount);
  m_fieldNames.resize(m_fieldCount);
  m_rowValues.clear();
  m_resultEOF = false;

  int iField = 0;

  while (true)
  {
    if (!recvPacket())
      return -1;

    UINT8 result = m_reader.readByte();
    if (result == 0xfe)
    {
      // Column EOF: warnings + server status
      m_reader.rewind(1);
      size_t len = m_reader.getBytesLeft();
      const char *data = (const char *) m_reader.readBytes(len);
      EOFPacket eof;
      if (eof.decode(data, len))
        m_has_more_result = eof.server_status & SERVER_MORE_RESULTS_EXISTS;
      m_reader.skip();
      break;
    }

    m_reader.rewind(1);
    size_t len = m_reader.getBytesLeft();
    const char *data = (const char *) m_reader.readBytes(len);

    ColumnPacket col;
    if (!col.decode(data, len))
    {
      setError("Malformed column packet", 0, UME_OTHER);
      return -1;
    }

    m_fieldInfo[iField].type = col.type;
    m_fieldInfo[iField].flags = col.flags;
    m_fieldInfo[iField].charset = col.charset;
    m_fieldNames[iField] = col.name;
    iField ++;
    m_reader.skip();
  }

  m_resultState = RS_ROWSET;
  return 0;
}

// Clear the result-set state without touching m_dbgMethodProgress (which is
// only released by endResult()/abortResult() when beginQuery() held it).
void Connection::resetResultState()
{
  m_fieldInfo.clear();
  m_fieldNames.clear();
  m_fieldCount = 0;
  m_rowValues.clear();
  m_resultState = RS_NONE;
  m_resultEOF = false;
}

int Connection::beginQuery(const char *_query, size_t _cbQuery)
{
  m_dbgMethodProgress ++;
  m_has_more_result = false;
  m_lastResult = NULL;

  if (m_dbgMethodProgress > 1)
  {
    /*
    NOTE: We don't call setError here because it will close the socket worsening the concurrent access error making it impossible to trace */
    m_errorMessage = "Concurrent access in query method";
    m_errno = 0;
    m_errorType = UME_OTHER;
    m_dbgMethodProgress --;
    return -1;
  }

  if (m_sockInst == NULL)
  {
    PRINTMARK();
    setError ("Not connected", 0, UME_OTHER);
    m_dbgMethodProgress --;
    return -1;
  }

  if (!sendQuery(_query, _cbQuery))
  {
    m_dbgMethodProgress --;
    return -1;
  }

  if (!recvPacket())
  {
    m_dbgMethodProgress --;
    return -1;
  }

  UINT8 result = m_reader.readByte();

  switch (result)
  {
  case 0x00:
    m_lastResult = handleOKPacket();
    m_dbgMethodProgress --;
    return 0; // OK: no result set, takeResult() owns the result

  case 0xff:
    handleErrorPacket();
    m_dbgMethodProgress --;
    return -1;

  case 0xfe:
    setError ("Unexpected EOF when decoding result", 0, UME_OTHER);
    m_dbgMethodProgress --;
    return -1;

  default:
    break;
  }

  if (readFields() < 0)
  {
    m_dbgMethodProgress --;
    return -1;
  }

  // RS_ROWSET: the guard stays held until endResult()/abortResult()
  return 1;
}

void *Connection::takeResult()
{
  void *r = m_lastResult;
  m_lastResult = NULL;
  return r;
}

int Connection::nextRow()
{
  if (m_resultState != RS_ROWSET)
  {
    // Caller misuse (no active result set): report an error but do NOT kill
    // the connection (setError() with UME_OTHER would close the socket).
    m_errorMessage = "No active result set";
    m_errno = 0;
    m_errorType = UME_OTHER;
    return -1;
  }

  if (m_resultEOF)
    return 0;

  if (!recvPacket())
    return -1;

  UINT8 result = m_reader.readByte();
  if (result == 0xfe && m_reader.getBytesLeft() == 4)
  {
    // Row EOF: exactly 0xfe + warnings(2) + status(2). A 0xfe first byte
    // with more bytes left is a length-coded 8-byte integer prefix (large
    // fields), not an EOF.
    m_reader.rewind(1);
    size_t len = m_reader.getBytesLeft();
    const char *data = (const char *) m_reader.readBytes(len);
    EOFPacket eof;
    if (eof.decode(data, len))
      m_has_more_result = eof.server_status & SERVER_MORE_RESULTS_EXISTS;
    m_reader.skip();
    m_resultEOF = true;
    return 0;
  }

  m_reader.rewind(1);
  m_rowValues.resize(m_fieldCount);
  for (int i = 0; i < m_fieldCount; i++)
  {
    size_t before = m_reader.getBytesLeft();
    size_t cb = 0;
    UINT8 *v = m_reader.readLengthCodedBinary(&cb);
    // A well-formed cell consumes bytes within the current packet. If the
    // lenenc claimed more than the packet holds, getBytesLeft() underflows
    // to a huge value and the row is malformed.
    if (m_reader.getBytesLeft() > before)
    {
      setError("Malformed row packet", 0, UME_OTHER);
      return -1;
    }
    m_rowValues[i] = std::make_pair(v, cb);
  }
  m_reader.skip();
  return 1;
}

bool Connection::endResult()
{
  if (m_resultState != RS_ROWSET)
    return true; // idempotent

  if (!m_resultEOF)
  {
    // Rows not fully consumed: endResult() must not leave rows on the wire.
    // Drain them (same semantics as abortResult()) so the connection stays
    // aligned and reusable.
    return abortResult();
  }

  m_dbgMethodProgress --;
  resetResultState();
  return true;
}

bool Connection::abortResult()
{
  bool had_result = (m_resultState == RS_ROWSET);

  // Idempotent when there is no active result set and nothing pending.
  // RS_NONE + m_has_more_result (e.g. OK-packet multi-result, consumed via
  // beginQuery()==0) still needs the pending result sets drained.
  if (!had_result && !m_has_more_result)
    return true;

  bool ok = true;

  // Drain remaining rows without decoding (zero allocation)
  while (had_result && !m_resultEOF)
  {
    if (!recvPacket())
    {
      ok = false;
      goto done;
    }

    UINT8 r = m_reader.readByte();
    if (r == 0xfe && m_reader.getBytesLeft() == 4)
    {
      // Row EOF (0xfe + 4 bytes); a 0xfe with more bytes left is a
      // length-coded 8-byte integer prefix of a large field.
      m_reader.rewind(1);
      size_t len = m_reader.getBytesLeft();
      const char *data = (const char *) m_reader.readBytes(len);
      EOFPacket eof;
      if (eof.decode(data, len))
        m_has_more_result = eof.server_status & SERVER_MORE_RESULTS_EXISTS;
      m_reader.skip();
      break;
    }
    m_reader.skip();
  }

  // Drain any further result sets so the connection stream stays aligned
  while (m_has_more_result)
  {
    if (!recvPacket())
    {
      ok = false;
      goto done;
    }

    UINT8 r = m_reader.readByte();
    if (r == 0x00)
    {
      handleOKPacket(); // rewind(1) inside; consumes the OK packet
      continue;
    }
    if (r == 0xff)
    {
      handleErrorPacket();
      ok = false;
      goto done;
    }

    // Next result set: the fieldCount packet is already buffered with the
    // cursor at its payload start (readByte + rewind above). Consume it
    // first, then fetch the remaining field packets (zero allocation).
    m_reader.rewind(1);
    while (true)
    {
      UINT8 f = m_reader.readByte();
      if (f == 0xfe)
      {
        m_reader.rewind(1);
        size_t len = m_reader.getBytesLeft();
        const char *data = (const char *) m_reader.readBytes(len);
        EOFPacket eof;
        if (eof.decode(data, len))
          m_has_more_result = eof.server_status & SERVER_MORE_RESULTS_EXISTS;
        m_reader.skip();
        break;
      }
      m_reader.skip();
      if (!recvPacket())
      {
        ok = false;
        goto done;
      }
    }

    // Skip rows until row EOF
    while (true)
    {
      if (!recvPacket())
      {
        ok = false;
        goto done;
      }
      UINT8 row = m_reader.readByte();
      if (row == 0xfe && m_reader.getBytesLeft() == 4)
      {
        // Row EOF (0xfe + 4 bytes); a 0xfe with more bytes left is a
        // length-coded 8-byte integer prefix of a large field.
        m_reader.rewind(1);
        size_t len = m_reader.getBytesLeft();
        const char *data = (const char *) m_reader.readBytes(len);
        EOFPacket eof;
        if (eof.decode(data, len))
          m_has_more_result = eof.server_status & SERVER_MORE_RESULTS_EXISTS;
        m_reader.skip();
        break;
      }
      m_reader.skip();
    }
  }

done:
  // The guard held by beginQuery() is released on every outcome; the state
  // is reset so the connection can be retried (or is known dead). On the
  // RS_NONE + pending-results path no guard was held, so it must not be
  // decremented.
  if (had_result)
    m_dbgMethodProgress --;
  resetResultState();
  return ok;
}

int Connection::fieldCount() const
{
  return m_fieldCount;
}

const UMTypeInfo& Connection::fieldInfo(int i) const
{
  return m_fieldInfo[i];
}

const std::string& Connection::fieldName(int i) const
{
  return m_fieldNames[i];
}

const UINT8 *Connection::columnValue(int i, size_t *len) const
{
  if (len)
    *len = 0;
  if (i < 0 || i >= (int) m_rowValues.size())
    return NULL;
  if (len)
    *len = m_rowValues[i].second;
  return m_rowValues[i].first;
}


void *Connection::query(const char *_query, size_t _cbQuery)
{
  // Non-streaming path: fully driven by the streaming state machine so there
  // is a single implementation of the result-set protocol.
  int st = beginQuery(_query, _cbQuery);
  if (st <= 0)
  {
    // 0 = OK packet (result via takeResult()), -1 = error (guard released)
    return st == 0 ? takeResult() : NULL;
  }

  // RS_ROWSET: materialize all rows through the CAPI callbacks.
  void *resultSet = m_capi.createResult(m_fieldCount);

  for (int i = 0; i < m_fieldCount; i++)
    m_capi.resultSetField(resultSet, i, &m_fieldInfo[i],
        (void *) m_fieldNames[i].c_str(), m_fieldNames[i].size());

  while (true)
  {
    int r = nextRow();
    if (r == 0)
      break;
    if (r < 0)
    {
      m_capi.destroyResult(resultSet);
      m_dbgMethodProgress --;
      resetResultState();
      return NULL;
    }

    m_capi.resultRowBegin(resultSet);

    for (int index = 0; index < m_fieldCount; index++)
    {
      size_t cb_column = 0;
      const UINT8 *cell = columnValue(index, &cb_column);
      if (!m_capi.resultRowValue(resultSet, index, &m_fieldInfo[index], (void *) cell, cb_column))
      {
        m_capi.destroyResult(resultSet);
        m_dbgMethodProgress --;
        resetResultState();
        return NULL;
      }
    }

    m_capi.resultRowEnd(resultSet);
  }

  // Rows exhausted: release the guard held by beginQuery().
  m_dbgMethodProgress --;
  resetResultState();
  return resultSet;
}

void *Connection::nextResultSet()
{
  if (!recvPacket())
  {
    PRINTMARK();
    return NULL;
  }

  UINT8 result = m_reader.readByte();

  switch (result)
  {
  case 0x00:
    PRINTMARK();
    return handleOKPacket();

  case 0xff:
    PRINTMARK();
    handleErrorPacket();
    return NULL;

  case 0xfe:
    PRINTMARK();
    setError ("Unexpected EOF when decoding result", 0, UME_OTHER);
    return NULL;


  default:
    PRINTMARK();
    return handleResultPacket();
  }

  PRINTMARK();
  return NULL;
}


int Connection::getRxBufferSize()
{
  return (int) m_reader.getSize();
}

int Connection::getTxBufferSize()
{
  return (int) m_writer.getSize();
}

int Connection::setRxBufferSize(int num)
{
  return (int) m_reader.setSize(num);
}

int Connection::setTxBufferSize(int num)
{
  return (int) m_writer.setSize(num);
}

bool Connection::setTimeout(int timeout)
{
  m_timeout = timeout;

  if (m_sockInst)
  {
    if (!m_capi.setTimeout(m_sockInst, timeout))
    {
      return false;
    }
  }

  return true;
}
