/*
 * ap.c
 *
 *  Created on: Jan 18, 2026
 *      Author: cdm05
 */


#include "ap.h"




void ap_init(void)
{

}

void ap_main(void)
{
  while(1)
  {
    led_toggle(_DEF_LED1);
    delay(500);
  }
}
