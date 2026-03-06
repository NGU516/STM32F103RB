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
  uint32_t pre_time;

  pre_time = millis();
  while(1)
  {
    if (millis() - pre_time >= 500)
    {
      pre_time = millis();
    }
#if 0
    // Button, UART output
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
#endif
    if (uart_available(_DEF_UART2) > 0)
    {
      uint8_t rx_data;

      rx_data = uart_read(_DEF_UART2);

      if (rx_data == '1')
      {
        uint8_t buf[32];

        log_printf("Flash Read...\n");

        flash_read(0x8000000 + (60*1024), buf, 32);

        for (int i=0; i<32; i++)
        {
          log_printf("0x%X : 0x%x\n", 0x800000 + (60*1024) + i, buf[i]);
        }
      }

      if (rx_data == '2')
      {
        log_printf("Flash Erase...\n");

        if (flash_erase(0x8000000 + (60*1024), 32) == true)
          log_printf("Flash Erase OK\n");
        else
          log_printf("Flash Erase Fail...\n");
      }

      if (rx_data == '3')
      {
        uint8_t buf[32];

        for (int i=0; i<32; i++)
          buf[i] = i;

        log_printf("Flash Write...\n");

        if (flash_write(0x8000000 + (60*1024), buf, 32) == true)
          log_printf("Flash Write OK\n");
        else
          log_printf("Flash Write Fail...\n");
      }
    }

  }
}
