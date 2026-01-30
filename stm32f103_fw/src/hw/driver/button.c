/*
 * button.c
 *
 *  Created on: Jan 27, 2026
 *      Author: cdm05
 */
#include "button.h"





typedef struct
{
  GPIO_TypeDef *port;
  uint16_t      pin;
  GPIO_PinState pressed_state;
} button_tbl_t;

button_tbl_t button_tbl[BUTTON_MAX_CH] =
    {
        // PC13, CH 0번, Active low
        {GPIOC, GPIO_PIN_13, GPIO_PIN_RESET},
    };

bool button_init(void)
{
  bool ret = true;

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();

  /*Configure GPIO pin : USER_BUTTON_Pin */
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;

  for(int i=0; i<BUTTON_MAX_CH; i++)
  {
    GPIO_InitStruct.Pin = button_tbl[i].pin;
    HAL_GPIO_Init(button_tbl[i].port, &GPIO_InitStruct);
  }

  return ret;
}

bool button_pressed(uint8_t ch)
{
  bool ret = false;

  if (ch >= BUTTON_MAX_CH) return false;

  if (HAL_GPIO_ReadPin(button_tbl[ch].port,button_tbl[ch].pin)
      == button_tbl[ch].pressed_state)
  {
    ret = true;
  }

  return ret;
}



