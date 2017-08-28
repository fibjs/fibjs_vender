#if defined(macosx) || (defined(__APPLE__) && defined(__MACH__))
#include "../config/darwin/ares_config.h"
#endif

#if defined(_WIN32) || defined(_WIN64) || defined(WIN32) || defined(WIN64)
#include "../src/config-win32.h"
#endif

#if defined(linux) || defined(__linux) || defined(__linux__)
#include "../config/linux/ares_config.h"
#endif

#if defined(__NetBSD__)
#include "../config/netbsd/ares_config.h"
#endif

#if defined(__OpenBSD__)
#include "../config/openbsd/ares_config.h"
#endif

#if (defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__)) && !defined(FREEBSD)
#include "../config/freebsd/ares_config.h"
#endif

#if defined(sun) || defined(__sun)
#include "../config/solaris/ares_config.h"
#endif