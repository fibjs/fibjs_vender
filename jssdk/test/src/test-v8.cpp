#include "gtest/gtest.h"

#include "jssdk-v8.h"

/* ENG means `engine`, use the macro to define engine's api prefix */
#define ENG(n) v8_##n

#include "test-js.inl"