/*
 * bsp.h
 *
 *  Created on: Jan 18, 2026
 *      Author: cdm05
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_

#include "def.h"

#define _USE_LOG_PRINT    1

#if _USE_LOG_PRINT
#define log_printf(fmt, ...)    printf(fmt, ##__VA_ARGS__)
#else
#define log_printf(fmt, ...)
#endif


#include "stm32f1xx_hal.h"  // HAL driver

void bsp_init(void);
void delay(uint32_t ms);
uint32_t millis(void);


void Error_Handler(void);
#endif /* SRC_BSP_BSP_H_ */
