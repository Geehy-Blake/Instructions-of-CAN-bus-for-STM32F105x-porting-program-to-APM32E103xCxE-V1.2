/**
  ******************************************************************************
  * File Name          : CAN.h
  * Description        : This file provides code for the configuration
  *                      of the CAN instances.
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
#ifndef __can_H
#define __can_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"



/* USER CODE BEGIN Includes */
 typedef enum
 {
     CAN_INT_TXME   = ((uint32_t)0x00000001), //!< Transmit mailbox empty Interrupt
     CAN_INT_F0MP   = ((uint32_t)0x00000002), //!< FIFO 0 message pending Interrupt
     CAN_INT_F0FULL = ((uint32_t)0x00000004), //!< FIFO 0 full Interrupt
     CAN_INT_F0OVR  = ((uint32_t)0x00000008), //!< FIFO 0 overrun Interrupt
     CAN_INT_F1MP   = ((uint32_t)0x00000010), //!< FIFO 1 message pending Interrupt
     CAN_INT_F1FULL = ((uint32_t)0x00000020), //!< FIFO 1 full Interrupt
     CAN_INT_F1OVR  = ((uint32_t)0x00000040), //!< FIFO 1 overrun Interrupt
     CAN_INT_ERRW   = ((uint32_t)0x00000100), //!< Error warning Interrupt
     CAN_INT_ERRP   = ((uint32_t)0x00000200), //!< Error passive Interrupt
     CAN_INT_BOF    = ((uint32_t)0x00000400), //!< Bus-off Interrupt
     CAN_INT_LEC    = ((uint32_t)0x00000800), //!< Last error record code Interrupt
     CAN_INT_ERR    = ((uint32_t)0x00008000), //!< Error Interrupt
     CAN_INT_WUP    = ((uint32_t)0x00010000), //!< Wake-up Interrupt
     CAN_INT_SLEEP  = ((uint32_t)0x00020000)  //!< Sleep acknowledge Interrupt
 } CAN_INT_T;

/* USER CODE END Includes */

extern CAN_HandleTypeDef hcan1;
extern CAN_HandleTypeDef hcan2;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_CAN1_Init(void);
void MX_CAN2_Init(void);
void CAN_Filter_Config(CAN_HandleTypeDef *hcan);
void CAN_Send(CAN_HandleTypeDef *hcan,uint8_t *data,uint8_t len);
void CAN_EnableInterrupt(CAN_TypeDef *hcan, uint32_t interrupts);
void CAN_DisableInterrupt(CAN_TypeDef *hcan, uint32_t interrupts);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ can_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
