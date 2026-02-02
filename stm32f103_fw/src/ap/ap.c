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
    if (button_get_event(_DEF_BUTTON1))
    {
      led_toggle(_DEF_LED1);

      if (led_state(_DEF_LED1))
      {
        uart_printf(_DEF_UART2, "UART2 LED On \r\n");
      }
      else
      {
        uart_printf(_DEF_UART2, "UART2 LED Off \r\n");
      }
    }

    // echo
    if (uart_available(_DEF_UART2) > 0)
    {
      uint8_t rx_data;

      rx_data = uart_read(_DEF_UART2);
      uart_printf(_DEF_UART2, "UART2 Rx %c %x\r\n", rx_data, rx_data);
    }

  }
}
