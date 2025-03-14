/*
 * ap.c
 *
 *  Created on: Sep 11, 2024
 *      Author: cdm
 */


#include "ap.h"




void ap_Init(void)
{

}

void ap_Main(void)
{
	while(1)
	{
		led_toggle(_DEF_LED1);
		delay(500);
	}
}
