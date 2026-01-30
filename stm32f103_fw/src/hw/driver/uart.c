/*
 * uart.c
 *
 *  Created on: Jan 28, 2026
 *      Author: cdm05
 */


#include "uart.h"
#include "qbuffer.h"

static bool is_open[UART_MAX_CH];

static qbuffer_t qbuffer[UART_MAX_CH];
static uint8_t rx_buf[256];
static uint8_t rx_data[UART_MAX_CH];


UART_HandleTypeDef huart2;



bool uart_init(void)
{
  for (int i=0; i<UART_MAX_CH; i++)
  {
    is_open[i] = false;
  }

  return true;
}

bool uart_open(uint8_t ch, uint32_t baudrate)
{
  bool ret = false;

  switch(ch)
  {
    case _DEF_UART1:
//      is_open[ch] = true;
//      ret = true;
      break;

    case _DEF_UART2:
      huart2.Instance           = USART2;
      huart2.Init.BaudRate      = baudrate;
      huart2.Init.WordLength    = UART_WORDLENGTH_8B;
      huart2.Init.StopBits      = UART_STOPBITS_1;
      huart2.Init.Parity        = UART_PARITY_NONE;
      huart2.Init.Mode          = UART_MODE_TX_RX;
      huart2.Init.HwFlowCtl     = UART_HWCONTROL_NONE;
      huart2.Init.OverSampling  = UART_OVERSAMPLING_16;

      // UART2 전용 RX buf
      qbuffer_create(&qbuffer[_DEF_UART2], &rx_buf[0], 256);


      if (HAL_UART_Init(&huart2) != HAL_OK)
      {
        ret = false;
      }
      else
      {
        ret = true;
        is_open[ch] = true;

        if (HAL_UART_Receive_IT(&huart2, (uint8_t *)&rx_data[_DEF_UART2], 1) != HAL_OK)
        {
          ret = false;
        }
      }
      break;
  }

  return ret;
}

uint32_t uart_available(uint8_t ch)
{
  uint32_t ret = 0;

  switch(ch)
  {
    case _DEF_UART1:
      // ret = cdc_available();
      break;
    case _DEF_UART2:

      break;
  }

  return ret;
}

uint32_t uart_read(uint8_t ch)
{
  uint8_t ret = false;

  switch(ch)
  {
    case _DEF_UART1:
      // ret = cdc_read();
      break;
  }

  return ret;
}

uint32_t uart_write(uint8_t ch, uint8_t *p_data, uint32_t length)
{
  uint8_t ret = false;
  HAL_StatusTypeDef status;


    switch(ch)
    {
      case _DEF_UART1:
        // ret = cdc_write();
        break;
      case _DEF_UART2:
        status = HAL_UART_Transmit(&huart2, p_data, length, 100);
        if (status == HAL_OK)
        {
          ret = length;
        }
        break;
    }

    return ret;
}

uint32_t uart_printf(uint8_t ch, char *fmt, ...)  // ... 가변인자
{
  char buf[256];
  va_list args;
  int len;
  uint32_t ret;

  va_start(args, fmt);
  len = vsnprintf(buf, 256, fmt, args);

  ret = uart_write(ch, (uint8_t *)buf, len);

  va_end(args);

  return ret;
}



void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart)
{
  if (huart->Instance == USART2)
  {
    // 만들어둔 qbuffer에 data를 옮긴 후 다음 데이터 수신
    qbuffer_write(&qbuffer[_DEF_UART2], &rx_data[_DEF_UART2], 1);

    HAL_UART_Receive_IT(&huart2, (uint8_t *)&rx_data[_DEF_UART2], 1);
  }
}

// CubeMX generate Code
void HAL_UART_MspInit(UART_HandleTypeDef* uartHandle)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(uartHandle->Instance==USART2)
  {
  /* USER CODE BEGIN USART2_MspInit 0 */

  /* USER CODE END USART2_MspInit 0 */
    /* USART2 clock enable */
    __HAL_RCC_USART2_CLK_ENABLE();

    __HAL_RCC_GPIOA_CLK_ENABLE();
    /**USART2 GPIO Configuration
    PA2     ------> USART2_TX
    PA3     ------> USART2_RX
    */
    GPIO_InitStruct.Pin = GPIO_PIN_2;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /* USART2 interrupt Init */
    HAL_NVIC_SetPriority(USART2_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(USART2_IRQn);
  /* USER CODE BEGIN USART2_MspInit 1 */

  /* USER CODE END USART2_MspInit 1 */
  }
}

void HAL_UART_MspDeInit(UART_HandleTypeDef* uartHandle)
{

  if(uartHandle->Instance==USART2)
  {
  /* USER CODE BEGIN USART2_MspDeInit 0 */

  /* USER CODE END USART2_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_USART2_CLK_DISABLE();

    /**USART2 GPIO Configuration
    PA2     ------> USART2_TX
    PA3     ------> USART2_RX
    */
    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_2|GPIO_PIN_3);

    /* USART2 interrupt Deinit */
    HAL_NVIC_DisableIRQ(USART2_IRQn);
  /* USER CODE BEGIN USART2_MspDeInit 1 */

  /* USER CODE END USART2_MspDeInit 1 */
  }
}
