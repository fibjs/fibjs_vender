#ifndef prthread_h___
#define prthread_h___

#include "prlock.h"

PR_BEGIN_EXTERN_C

typedef void PRThread;

PRThread* PR_GetCurrentThread();

typedef void (*PRThreadPrivateDTOR)(void *priv);

PRStatus PR_NewThreadPrivateIndex(PRUintn *newIndex, PRThreadPrivateDTOR destructor);

PRStatus PR_SetThreadPrivate(PRUintn tpdIndex, void *priv);

void* PR_GetThreadPrivate(PRUintn tpdIndex);


PR_END_EXTERN_C

#endif // prthread_h___