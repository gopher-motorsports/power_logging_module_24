/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define HS_VBUS_SNS_Pin GPIO_PIN_13
#define HS_VBUS_SNS_GPIO_Port GPIOC
#define FV1_Pin GPIO_PIN_0
#define FV1_GPIO_Port GPIOC
#define FV2_Pin GPIO_PIN_1
#define FV2_GPIO_Port GPIOC
#define FV3_Pin GPIO_PIN_2
#define FV3_GPIO_Port GPIOC
#define BATV_MEAS_Pin GPIO_PIN_3
#define BATV_MEAS_GPIO_Port GPIOC
#define TV0_Pin GPIO_PIN_0
#define TV0_GPIO_Port GPIOA
#define TV1_Pin GPIO_PIN_2
#define TV1_GPIO_Port GPIOA
#define TV2_Pin GPIO_PIN_3
#define TV2_GPIO_Port GPIOA
#define TV3_Pin GPIO_PIN_4
#define TV3_GPIO_Port GPIOA
#define TV4_Pin GPIO_PIN_5
#define TV4_GPIO_Port GPIOA
#define TV5_Pin GPIO_PIN_6
#define TV5_GPIO_Port GPIOA
#define TV6_Pin GPIO_PIN_7
#define TV6_GPIO_Port GPIOA
#define FV_MEAS_Pin GPIO_PIN_4
#define FV_MEAS_GPIO_Port GPIOC
#define MCU_EXT_EN0_Pin GPIO_PIN_5
#define MCU_EXT_EN0_GPIO_Port GPIOC
#define FV0_Pin GPIO_PIN_0
#define FV0_GPIO_Port GPIOB
#define MCU_EXT_EN2_Pin GPIO_PIN_14
#define MCU_EXT_EN2_GPIO_Port GPIOB
#define TVEN5_Pin GPIO_PIN_15
#define TVEN5_GPIO_Port GPIOB
#define TVE4_Pin GPIO_PIN_6
#define TVE4_GPIO_Port GPIOC
#define TVE5_Pin GPIO_PIN_7
#define TVE5_GPIO_Port GPIOC
#define TVE6_Pin GPIO_PIN_8
#define TVE6_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_10
#define LED2_GPIO_Port GPIOA
#define SD_SW_CD_Pin GPIO_PIN_15
#define SD_SW_CD_GPIO_Port GPIOA
#define MCU_EXT_EN1_Pin GPIO_PIN_4
#define MCU_EXT_EN1_GPIO_Port GPIOB
#define MEDIA_nRST_Pin GPIO_PIN_5
#define MEDIA_nRST_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
