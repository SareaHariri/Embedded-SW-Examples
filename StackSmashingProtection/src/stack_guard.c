#include "msp432p401r.h"
#include <stdint.h>


extern uint32_t __stack_chk_guard = 0xDEADBEEFu;

void __stack_chk_fail(void)
{
  /*perform soft reset */
  RSTCTL->RESET_REQ = RSTCTL_RESET_REQ_SOFT_REQ|RSTCTL_RESETREQ_RSTKEY_VAL;
}
