#ifdef SIZE_CHECK_H
#error Already included
#else
#define SIZE_CHECK_H

#include <quadmath.h>
#include <cstdint>

static_assert(sizeof(uint8_t) == 1);
static_assert(sizeof(uint16_t) == 2);
static_assert(sizeof(uint32_t) == 4);
static_assert(sizeof(uint64_t) == 8);
static_assert(sizeof(float) == 4);
static_assert(sizeof(double) == 8);
static_assert(sizeof(long double) == 16);
static_assert(sizeof(__float128) == 16);
static_assert(sizeof(__complex128) == 32);

#endif
