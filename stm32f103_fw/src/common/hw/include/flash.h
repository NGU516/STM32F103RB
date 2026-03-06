/*
 * flash.h
 *
 *  Created on: Feb 19, 2026
 *      Author: cdm05
 */

#ifndef SRC_COMMON_HW_INCLUDE_FLASH_H_
#define SRC_COMMON_HW_INCLUDE_FLASH_H_

#include "hw_def.h"


#ifdef _USE_HW_FLASH

bool flash_init(void);
bool flash_erase(uint32_t addr, uint32_t length);
bool flash_write(uint32_t addr, uint8_t *p_data, uint32_t length);
bool flash_read(uint32_t addr, uint8_t *p_data, uint32_t length);


#endif


#endif /* SRC_COMMON_HW_INCLUDE_FLASH_H_ */
