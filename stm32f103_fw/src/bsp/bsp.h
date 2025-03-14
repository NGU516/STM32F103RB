/*
 * bsp.h
 *
 *  Created on: Sep 11, 2024
 *      Author: cdm
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_


#include "def.h"


#include "stm32f1xx_hal.h"



void bsp_Init(void);

void delay(uint32_t ms);
uint32_t mills(void);

void Error_Handler(void);

#endif /* SRC_BSP_BSP_H_ */
