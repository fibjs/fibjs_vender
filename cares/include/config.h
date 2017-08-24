#include <exlib/include/osconfig.h>

#if defined Darwin
#include "../config/darwin/ares_config.h"
#endif

#if defined Windows
#include "../src/config-win32.h"
#include "../src/windows_port.c"
#include "../src/ares_getenv.c"
#include "../src/ares_iphlpapi.h"
#include "../src/ares_platform.c"
#endif

#if defined Linux
#include "../config/linux/ares_config.h"
#endif

#if defined NetBSD
#include "../config/netbsd/ares_config.h"
#endif

#if defined OpenBSD
#include "../config/openbsd/ares_config.h"
#endif

#if defined FreeBSD
#include "../config/freebsd/ares_config.h"
#endif

#if defined Solaris
#include "../config/solaris/ares_config.h"
#endif