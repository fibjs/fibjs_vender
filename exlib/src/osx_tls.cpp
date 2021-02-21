/*
 *  osx_tls.cpp
 *  Created on: Jul 23, 2015
 *
 *  Copyright (c) 2015 by Leo Hoo
 *  lion@9465.net
 */

#include "osconfig.h"

#if defined(Darwin) && (defined(i386) || defined(amd64))

#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include "thread.h"
#include "fiber.h"
#include <mach/mach_init.h>
#include <mach/task.h>
#include <mach/semaphore.h>
#include <sys/sysctl.h>
#include <stdlib.h>

OSTls::OSTls()
{
    static bool s_init = false;

    if (!s_init) {
        const size_t kBufferSize = 128;
        char buffer[kBufferSize];
        size_t buffer_size = kBufferSize;
        int32_t ctl_name[] = { CTL_KERN, KERN_OSRELEASE };
        sysctl(ctl_name, 2, buffer, &buffer_size, NULL, 0);
        buffer[kBufferSize - 1] = '\0';
        char* period_pos = strchr(buffer, '.');
        *period_pos = '\0';
        int32_t kernel_version_major = static_cast<int32_t>(strtol(buffer, NULL, 10));

        if (kernel_version_major < 11) {
#if defined(i386)
            kMacTlsBaseOffset = 0x48;
#else
            kMacTlsBaseOffset = 0x60;
#endif
        } else {
            kMacTlsBaseOffset = 0;
        }

        s_init = true;
    }

    pthread_key_create(&m_index, NULL);
}

intptr_t OSTls::kMacTlsBaseOffset;

#endif
