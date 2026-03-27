/*
 * rtc.h
 *
 *  Created on: Mar 26, 2026
 *      Author: cdm05
 */

#ifndef SRC_COMMON_HW_INCLUDE_RTC_H_
#define SRC_COMMON_HW_INCLUDE_RTC_H_

#include "hw_def.h"


#ifdef _USE_HW_RTC

bool rtc_init();

uint32_t rtc_backup_reg_read(uint32_t index);
void     rtc_backup_reg_write(uint32_t index, uint32_t data);





#endif

#endif /* SRC_COMMON_HW_INCLUDE_RTC_H_ */
