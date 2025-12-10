/* config.h for PCRE2 - fibjs build configuration */

#ifndef PCRE2_CONFIG_H
#define PCRE2_CONFIG_H

/* Standard headers */
#define HAVE_DIRENT_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1

#ifndef _WIN32
#define HAVE_UNISTD_H 1
#else
#define HAVE_WINDOWS_H 1
#endif

/* Compiler features */
#if defined(__GNUC__) || defined(__clang__)
#define HAVE_BUILTIN_MUL_OVERFLOW 1
#define HAVE_BUILTIN_UNREACHABLE 1
#endif

/* Enable 8-bit PCRE2 library only */
#define SUPPORT_PCRE2_8 1
/* #undef SUPPORT_PCRE2_16 */
/* #undef SUPPORT_PCRE2_32 */

/* Enable Unicode support */
#define SUPPORT_UNICODE 1

/* Disable JIT (not needed for routing) */
/* #undef SUPPORT_JIT */

/* No external library support needed */
/* #undef SUPPORT_LIBBZ2 */
/* #undef SUPPORT_LIBEDIT */
/* #undef SUPPORT_LIBREADLINE */
/* #undef SUPPORT_LIBZ */
/* #undef SUPPORT_VALGRIND */

/* Character set options */
/* #undef BSR_ANYCRLF */
/* #undef EBCDIC */
/* #undef EBCDIC_NL25 */
/* #undef EBCDIC_IGNORING_COMPILER */
/* #undef NEVER_BACKSLASH_C */
/* #undef DISABLE_PERCENT_ZT */

/* Symbol visibility */
#define PCRE2_EXPORT

/* Build configuration */
#define LINK_SIZE               2
#define HEAP_LIMIT              20000000
#define MATCH_LIMIT             10000000
#define MATCH_LIMIT_DEPTH       MATCH_LIMIT
#define MAX_VARLOOKBEHIND       255
#define NEWLINE_DEFAULT         2    /* LF */
#define PARENS_NEST_LIMIT       250
#define PCRE2GREP_BUFSIZE       20480
#define PCRE2GREP_MAX_BUFSIZE   1048576

#define MAX_NAME_SIZE           128
#define MAX_NAME_COUNT          10000

#endif /* PCRE2_CONFIG_H */
