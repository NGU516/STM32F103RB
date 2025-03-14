/*
 * led.h
 *
 *  Created on: Mar 13, 2025
 *      Author: cdm
 */

#ifndef SRC_COMMON_HW_INCLUDE_LED_H_
#define SRC_COMMON_HW_INCLUDE_LED_H_


#include "hw_def.h"


// _USE_HW_LED를 사용할 경우에만 해당하는 함수들
#ifdef _USE_HW_LED

#define LED_MAX_CH		HW_LED_MAX_CH

bool led_init(void);
void led_on(uint8_t ch);
void led_off(uint8_t ch);
void led_toggle(uint8_t ch);

#endif

#endif /* SRC_COMMON_HW_INCLUDE_LED_H_ */
