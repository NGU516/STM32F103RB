/*
 * hw.c
 *
 *  Created on: Sep 11, 2024
 *      Author: cdm
 */


#include "hw.h"

void hw_Init(void)
{
	bsp_Init();
	led_init();
}
