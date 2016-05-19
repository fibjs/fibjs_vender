#ifndef prlock_h___
#define prlock_h___

#include "prtypes.h"

PR_BEGIN_EXTERN_C

typedef void PRLock;

PRLock* PR_NewLock();

void PR_DestroyLock(PRLock *lock);

void PR_Lock(PRLock *lock);

PRStatus PR_Unlock(PRLock *lock);

PR_END_EXTERN_C

#endif // prlock_h___