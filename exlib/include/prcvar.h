#ifndef prcvar_h___
#define prcvar_h___

#include "prlock.h"

PR_BEGIN_EXTERN_C

typedef void PRCondVar;

PRCondVar* PR_NewCondVar(PRLock* lock);

void PR_DestroyCondVar(PRCondVar* cvar);

PRStatus PR_WaitCondVar(PRCondVar* cvar, PRIntervalTime timeout);

PRStatus PR_NotifyCondVar(PRCondVar* cvar);

PRStatus PR_NotifyAllCondVar(PRCondVar* cvar);

PR_END_EXTERN_C

#endif // prcvar_h___