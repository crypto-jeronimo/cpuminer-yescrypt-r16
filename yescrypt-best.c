#ifdef __ARM_NEON__
#include "yescrypt-neon.c"
#elif defined __SSE__
#include "yescrypt-sse.c"
#else
#include "yescrypt-opt.c"
#endif
