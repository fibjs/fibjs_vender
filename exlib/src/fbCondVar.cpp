/*
 *  fbCondVar.cpp
 *  Created on: Mar 19, 2012
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#include "service.h"
#include "limits.h"

namespace exlib {

bool CondVar::wait(Locker& mtxExternal, int32_t ms)
{
    bool result;
    int32_t nSignalsWasLeft;
    int32_t nWaitersWasGone;

    m_semBlockLock.wait();
    ++m_nWaitersBlocked;
    m_semBlockLock.post();

    mtxExternal.unlock();
    result = m_semBlockQueue.wait(ms);

    m_mtxUnblockLock.lock();
    if (0 != (nSignalsWasLeft = m_nWaitersToUnblock)) {
        if (!result)
            if (0 != m_nWaitersBlocked)
                m_nWaitersBlocked--;
            else
                m_nWaitersGone++;

        if (0 == --m_nWaitersToUnblock)
            if (0 != m_nWaitersBlocked) {
                m_semBlockLock.post();
                nSignalsWasLeft = 0;
            } else if (0 != (nWaitersWasGone = m_nWaitersGone))
                m_nWaitersGone = 0;
    } else if (INT_MAX / 2 == ++m_nWaitersGone) {
        m_semBlockLock.wait();
        m_nWaitersBlocked -= m_nWaitersGone;

        m_semBlockLock.post();
        m_nWaitersGone = 0;
    }
    m_mtxUnblockLock.unlock();

    if (1 == nSignalsWasLeft) {
        while (nWaitersWasGone--)
            m_semBlockQueue.wait();

        m_semBlockLock.post();
    }

    mtxExternal.lock();

    return result;
}

void CondVar::notify(bool bAll)
{
    int32_t nSignalsToIssue;

    m_mtxUnblockLock.lock();

    if (0 != m_nWaitersToUnblock) {
        if (0 == m_nWaitersBlocked) {
            m_mtxUnblockLock.unlock();
            return;
        }
        if (bAll) {
            m_nWaitersToUnblock += nSignalsToIssue = m_nWaitersBlocked;
            m_nWaitersBlocked = 0;
        } else {
            nSignalsToIssue = 1;
            ++m_nWaitersToUnblock;
            --m_nWaitersBlocked;
        }
    } else if (m_nWaitersBlocked > m_nWaitersGone) {
        m_semBlockLock.wait();
        if (0 != m_nWaitersGone) {
            m_nWaitersBlocked -= m_nWaitersGone;
            m_nWaitersGone = 0;
        }
        if (bAll) {
            nSignalsToIssue = m_nWaitersToUnblock = m_nWaitersBlocked;
            m_nWaitersBlocked = 0;
        } else {
            nSignalsToIssue = m_nWaitersToUnblock = 1;
            --m_nWaitersBlocked;
        }
    } else {
        m_mtxUnblockLock.unlock();
        return;
    }

    m_mtxUnblockLock.unlock();
    m_semBlockQueue.post(nSignalsToIssue);
}
}
