/*
 * reset.c
 *
 *  Created on: Mar 26, 2026
 *      Author: cdm05
 */


#include "reset.h"
#include "rtc.h"

static uint32_t reset_count = 0;

bool reset_init()
{
  bool ret = true;

  // Reset Pin set
  if(RCC->CSR & (1 << 26))
  {
    rtc_backup_reg_write(1, rtc_backup_reg_read(1) + 1);
    delay(500);   // blocking
    reset_count = rtc_backup_reg_read(1);
  }

  rtc_backup_reg_write(1, 0);

  RCC->CSR |= (1 << 24);

  return ret;
}

uint32_t reset_get_count()
{
  return reset_count;
}
