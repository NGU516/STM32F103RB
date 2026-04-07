/*
 * main.c
 *
 *  Created on: Jan 18, 2026
 *      Author: cdm05
 */


#include "main.h"


static void thread_main(void const *argument);

int main(void)
{
  hw_init();
  ap_init();


  osThreadDef(thread_main, thread_main, _HW_DEF_RTOS_THREAD_PRI_MAIN, 0, _HW_DEF_RTOS_THREAD_MEM_MAIN);
  if (osThreadCreate(osThread(thread_main), NULL) != NULL)
  {
    log_printf("thread_main \t\t: OK\r\n");
  }
  else
  {
    log_printf("thread_main \t\t: Fail\r\n");
    while(1);
  }

  osKernelStart();
  return 0;
}

static void thread_main(void const *argument)
{
  UNUSED(argument);

  ap_main();
}
