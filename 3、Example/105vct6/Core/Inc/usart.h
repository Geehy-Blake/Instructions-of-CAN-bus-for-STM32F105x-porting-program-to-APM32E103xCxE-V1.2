/**
  ******************************************************************************
  * File Name          : USART.h
  * Description        : This file provides code for the configuration
  *                      of the USART instances.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __usart_H
#define __usart_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */
 /**
  * @brief   USART flag define
  */
 typedef enum
 {
     USART_FLAG_CTS       = 0x0200,
     USART_FLAG_LBD       = 0x0100,
     USART_FLAG_TXBE      = 0x0080,
     USART_FLAG_TXC       = 0x0040,
     USART_FLAG_RXBNE     = 0x0020,
     USART_FLAG_IDLE      = 0x0010,
     USART_FLAG_OVRE      = 0x0008,
     USART_FLAG_NE        = 0x0004,
     USART_FLAG_FE        = 0x0002,
     USART_FLAG_PE        = 0x0001
 } USART_FLAG_T;
/* USER CODE END Includes */

extern UART_HandleTypeDef huart2;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_USART2_UART_Init(void);

uint8_t USART_ReadStatusFlag(USART_TypeDef *usart, USART_FLAG_T flag);
void USART_TxData(USART_TypeDef *usart, uint8_t data);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ usart_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
