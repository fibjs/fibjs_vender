/*
 * White-box include of Connection.h for unit tests.
 *
 * Tests need access to private members (e.g. m_dbgMethodProgress), granted
 * via `#define private public` (class layout is unchanged; test-only).
 *
 * MSVC's C++ STL (xkeycheck.h) explicitly rejects macroized keywords, so
 * every C++ STL header reachable from Connection.h must be included BEFORE
 * the macro is defined; the include guards then make the later (macroized)
 * includes inside Connection.h no-ops. Connection.h pulls in <string>,
 * <utility> and <vector>; if it grows more STL includes, add them here.
 */
#ifndef __UMYQL_TEST_CONNECTION_WHITEBOX_H__
#define __UMYQL_TEST_CONNECTION_WHITEBOX_H__

#include <string>
#include <utility>
#include <vector>

#define private public
#include "Connection.h"
#undef private

#endif // __UMYQL_TEST_CONNECTION_WHITEBOX_H__
