/*
 * reset.h
 *
 *  Created on: Mar 26, 2026
 *      Author: cdm05
 */

#ifndef SRC_HW_DRIVER_RESET_H_
#define SRC_HW_DRIVER_RESET_H_

#include "hw_def.h"


#ifdef _USE_HW_RESET

bool reset_init();

uint32_t reset_get_count();


#endif




#endif /* SRC_HW_DRIVER_RESET_H_ */
