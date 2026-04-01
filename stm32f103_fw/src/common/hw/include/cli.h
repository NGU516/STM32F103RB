/*
 * cli.h
 *
 *  Created on: Mar 30, 2026
 *      Author: cdm05
 */

#ifndef SRC_COMMON_HW_INCLUDE_CLI_H_
#define SRC_COMMON_HW_INCLUDE_CLI_H_



#include "hw_def.h"


#ifdef _USE_HW_CLI

#define CLI_LINE_HIS_MAX      HW_CLI_LINE_HIS_MAX
#define CLI_LINE_BUF_MAX      HW_CLI_LINE_BUF_MAX

bool cli_init(void);
bool cli_open(uint8_t ch, uint32_t baud);
bool cli_openLog(uint8_t ch, uint32_t baud);
bool cli_main(void);


#endif



#endif /* SRC_COMMON_HW_INCLUDE_CLI_H_ */
