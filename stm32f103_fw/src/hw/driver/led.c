/*
 * led.c
 *
 *  Created on: Mar 13, 2025
 *      Author: cdm
 */


#include "led.h"

typedef struct
{
	GPIO_TypeDef *port;
	uint16_t      pin;
	GPIO_PinState on_state;
	GPIO_PinState off_state;
} led_table_t;

// 구조체 배열을 통해 코드 재사용률 높이기
led_table_t led_table[LED_MAX_CH] =
	{
			// Low일 때 on, high일 때 off
			{GPIOA, GPIO_PIN_5, GPIO_PIN_RESET, GPIO_PIN_SET},
	};


bool led_init(void)
{
	bool ret = true;

	GPIO_InitTypeDef GPIO_InitStruct = {0};

	/* GPIO Ports Clock Enable */
	__HAL_RCC_GPIOA_CLK_ENABLE();

	/*Configure GPIO pin : PA5 */
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;

	for (int i=0; i<LED_MAX_CH; i++)
	{
		GPIO_InitStruct.Pin = led_table[i].pin;
		HAL_GPIO_Init(led_table[i].port, &GPIO_InitStruct);

		led_off(i);
	}


	return ret;
}

void led_on(uint8_t ch)
{
	if (ch >= LED_MAX_CH) return ;

	HAL_GPIO_WritePin(led_table[ch].port, led_table[ch].pin, led_table[ch].on_state);	// 0
}

void led_off(uint8_t ch)
{
	if (ch >= LED_MAX_CH) return ;

	HAL_GPIO_WritePin(led_table[ch].port, led_table[ch].pin, led_table[ch].off_state);		// 1
}

void led_toggle(uint8_t ch)
{
	if (ch >= LED_MAX_CH) return ;

	HAL_GPIO_TogglePin(led_table[ch].port, led_table[ch].pin);
}
