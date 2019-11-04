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

void CondVar::wait(Locker& mtxExternal)
{
    int32_t nSignalsWasLeft;

    m_semBlockLock.wait();
    ++m_nWaitersBlocked;
    m_semBlockLock.post();

    mtxExternal.unlock();
    m_semBlockQueue.wait();

    m_mtxUnblockLock.lock();
    if (0 != (nSignalsWasLeft = m_nWaitersToUnblock))
        --m_nWaitersToUnblock;
    else if (INT_MAX / 2 == ++m_nWaitersGone) {
        m_semBlockLock.wait();
        m_nWaitersBlocked -= m_nWaitersGone;
        m_semBlockLock.post();
        m_nWaitersGone = 0;
    }
    m_mtxUnblockLock.unlock();

    if (1 == nSignalsWasLeft)
        m_semBlockLock.post();

    mtxExternal.lock();
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
