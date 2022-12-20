#include <something.h>

#ifdef __cplusplus
extern "C" {
#endif

   uint32_t something_func(uint32_t n) {
      return n + 47;
   }
#ifdef __cplusplus
}
#endif
