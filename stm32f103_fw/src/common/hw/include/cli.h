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

#define CLI_CMD_LIST_MAX      HW_CLI_CMD_LIST_MAX
#define CLI_CMD_NAME_MAX      HW_CLI_CMD_NAME_MAX

#define CLI_LINE_HIS_MAX      HW_CLI_LINE_HIS_MAX
#define CLI_LINE_BUF_MAX      HW_CLI_LINE_BUF_MAX




typedef struct
{
  uint16_t   argc;
  char     **argv;

  int32_t  (*get_data)(uint8_t index);
  float    (*get_float)(uint8_t index);
  char    *(*get_str)(uint8_t index);
  bool     (*is_str)(uint8_t index, char *p_str);
} cli_args_t;



bool cli_init(void);
bool cli_open(uint8_t ch, uint32_t baud);
bool cli_openLog(uint8_t ch, uint32_t baud);
bool cli_main(void);
void cli_printf(const char *fmt, ...);
bool cli_add(const char *cmd_str, void (*p_func)(cli_args_t *));
bool cli_keep_loop(void);


#endif



#endif /* SRC_COMMON_HW_INCLUDE_CLI_H_ */
