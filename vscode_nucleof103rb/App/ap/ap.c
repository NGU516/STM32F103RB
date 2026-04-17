#include "ap.h"
#include "def.h"
#include "led.h"



void ap_init(void)
{
  // uart_open(_DEF_UART2, 115200);
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
      led_toggle(_DEF_LED1);
    }
   }
}
