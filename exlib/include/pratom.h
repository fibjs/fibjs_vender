#ifndef pratom_h___
#define pratom_h___

#include "prtypes.h"

PR_BEGIN_EXTERN_C

PRInt32 PR_AtomicIncrement(PRInt32* val);

PRInt32 PR_AtomicDecrement(PRInt32* val);

PR_END_EXTERN_C

#endif // pratom_h___