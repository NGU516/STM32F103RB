/*
 * button.h
 *
 *  Created on: Jan 27, 2026
 *      Author: cdm05
 */

#ifndef SRC_COMMON_HW_INCLUDE_BUTTON_H_
#define SRC_COMMON_HW_INCLUDE_BUTTON_H_

#include "hw_def.h"

#ifdef _USE_HW_BUTTON

#define BUTTON_MAX_CH    HW_BUTTON_MAX_CH

// button control api
bool button_init(void);
bool button_pressed(uint8_t ch);
bool button_get_event(uint8_t ch);


#endif

#endif /* SRC_COMMON_HW_INCLUDE_BUTTON_H_ */
