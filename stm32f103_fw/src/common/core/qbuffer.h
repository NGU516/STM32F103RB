/*
 * qbuffer.h
 *
 *  Created on: Jan 26, 2026
 *      Author: cdm05
 */

#ifndef SRC_COMMON_CORE_QBUFFER_H_
#define SRC_COMMON_CORE_QBUFFER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "def.h"

typedef struct
{
  uint32_t in;
  uint32_t out;
  uint32_t len;

  uint8_t *p_buf;
} qbuffer_t;

void qbuffer_init(void);

bool qbuffer_create(qbuffer_t *p_node, uint8_t *p_buf, uint32_t length);
bool qbuffer_write(qbuffer_t *p_node, uint8_t *p_data, uint32_t length);
bool qbuffer_read(qbuffer_t *p_node, uint8_t *p_data, uint32_t length);
uint32_t qbuffer_available(qbuffer_t *p_node);
void qbuffer_flush(qbuffer_t *p_node);



#ifdef __cplusplus
}
#endif


#endif /* SRC_COMMON_CORE_QBUFFER_H_ */
