#ifndef SPECULA_PREPROCESSOR_HPP_
#define SPECULA_PREPROCESSOR_HPP_

#include "log.hpp"

#ifdef __DEBUG__
#define SPECULA_ASSERT(expr)                                                   \
  ((expr) ? (void)0 : LCRITICAL("Assertion \"{}\" failed", #expr))
#else
#define SPECULA_ASSERT(expr) ((void)0)
#endif

#endif // SPECULA_PREPROCESSOR_HPP_