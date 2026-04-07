/*
 * ap.c
 *
 *  Created on: Jan 18, 2026
 *      Author: cdm05
 */


#include "ap.h"

static void thread_led(void const *argument);


void ap_init(void)
{
  //uart_open(_DEF_UART1, 115200);
  uart_open(_DEF_UART2, 115200);

  //cli_openLog(_DEF_UART1, 115200);
  cli_open(_DEF_UART2, 115200);

  osThreadDef(thread_led, thread_led, _HW_DEF_RTOS_THREAD_PRI_LED, 0, _HW_DEF_RTOS_THREAD_MEM_LED);
  if (osThreadCreate(osThread(thread_led), NULL) != NULL)
  {
    log_printf("thread_led \t\t: OK\r\n");
  }
  else
  {
    log_printf("thread_led \t\t: Fail\r\n");
    while(1);
  }
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

    cli_main();

   }
}

static void thread_led(void const *argument)
{
  UNUSED(argument);


  while(1)
  {
    led_toggle(_DEF_LED1);
    delay(500);
  }
}


// button, UART1, UART2 Test
#if 0
// Button, UART output
    if (button_get_event(_DEF_BUTTON1))
    {
      led_toggle(_DEF_LED1);

      bool state = led_state(_DEF_LED1);

      uart_printf(_DEF_UART1, "U1: LED %s \r\n", state ? "ON" : "OFF");
      uart_printf(_DEF_UART2, "U2: LED %s \r\n", state ? "ON" : "OFF");
    }
    // echo

    // UART1(CP2102) echo
    if (uart_available(_DEF_UART1) > 0)
    {
      uint8_t rx_data = uart_read(_DEF_UART1);

      uart_printf(_DEF_UART2, "U1 Rx: %c (0x%02X)\r\n", rx_data, rx_data);

      uart_printf(_DEF_UART1, "[U1 -> U2]: %c \r\n", rx_data);
    }

    if (uart_available(_DEF_UART2) > 0)
    {
      uint8_t rx_data;

      rx_data = uart_read(_DEF_UART2);
      uart_printf(_DEF_UART2, "UART2 Rx %c %x\r\n", rx_data, rx_data);
    }

#endif


// flash test
#if 0
    if (uart_available(_DEF_UART2) > 0)
    {
      uint8_t rx_data;

      rx_data = uart_read(_DEF_UART2);

      if (rx_data == '1')
      {
        uint8_t buf[32];

        log_printf("Flash Read...\n");

        flash_read(0x08000000 + (60*1024), buf, 32);

        for (int i=0; i<32; i++)
        {
          log_printf("0x%X : 0x%x\n", 0x0800000 + (60*1024) + i, buf[i]);
        }
      }

      if (rx_data == '2')
      {
        log_printf("Flash Erase...\n");

        if (flash_erase(0x08000000 + (60*1024), 32) == true)
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

        if (flash_write(0x08000000 + (60*1024), buf, 32) == true)
          log_printf("Flash Write OK\n");
        else
          log_printf("Flash Write Fail...\n");
      }
    }
#endif
