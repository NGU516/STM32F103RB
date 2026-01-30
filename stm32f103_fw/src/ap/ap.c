/*
 * ap.c
 *
 *  Created on: Jan 18, 2026
 *      Author: cdm05
 */


#include "ap.h"




void ap_init(void)
{
  uart_open(_DEF_UART2, 115200);
}

void ap_main(void)
{

  while(1)
  {
    // 버튼을 누르고 있을 때만 LED가 켜지고, 떼면 꺼지는지 확인
    if (button_pressed(_DEF_BUTTON1))
    {
      led_on(_DEF_LED1);
      uart_printf(_DEF_UART2, "UART2 : led on \n");
    }
    else
    {
      led_off(_DEF_LED1);
    }

  }
}
