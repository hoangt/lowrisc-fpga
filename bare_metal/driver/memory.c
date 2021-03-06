// See LICENSE for license details.

#include "memory.h"

volatile uint64_t * get_bram_base() {
#ifdef DEV_MAP__io_ext_bram__BASE
  return (uint64_t *)(DEV_MAP__io_ext_bram__BASE);
#else
  return (uint64_t *)0;         /* boot ROM, raise error */
#endif
}

volatile uint64_t * get_ddr_base() {
  return (uint64_t *)(DEV_MAP__mem__BASE);
}
