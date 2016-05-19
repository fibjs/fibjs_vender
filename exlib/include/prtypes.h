#ifndef prtypes_h___
#define prtypes_h___

#include <stdint.h>

#ifdef __cplusplus
#define PR_BEGIN_EXTERN_C       extern "C" {
#define PR_END_EXTERN_C         }
#else
#define PR_BEGIN_EXTERN_C
#define PR_END_EXTERN_C
#endif

typedef enum { PR_FAILURE = -1, PR_SUCCESS = 0 } PRStatus;

typedef uint32_t PRIntervalTime;

typedef int32_t PRIntn;
typedef uint32_t PRUintn;

typedef int32_t PRInt32;
typedef uint32_t PRUint32;

#define PR_INTERVAL_NO_WAIT 0UL
#define PR_INTERVAL_NO_TIMEOUT 0xffffffffUL

#endif // prtypes_h___