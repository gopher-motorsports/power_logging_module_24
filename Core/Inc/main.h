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
#define ADC_5V_1_Pin GPIO_PIN_0
#define ADC_5V_1_GPIO_Port GPIOC
#define ADC_5V_2_Pin GPIO_PIN_1
#define ADC_5V_2_GPIO_Port GPIOC
#define ADC_5V_3_Pin GPIO_PIN_2
#define ADC_5V_3_GPIO_Port GPIOC
#define VBAT_MEAS_Pin GPIO_PIN_3
#define VBAT_MEAS_GPIO_Port GPIOC
#define ADC_12V_0_Pin GPIO_PIN_0
#define ADC_12V_0_GPIO_Port GPIOA
#define ADC_12V_1_Pin GPIO_PIN_2
#define ADC_12V_1_GPIO_Port GPIOA
#define ADC_12V_2_Pin GPIO_PIN_3
#define ADC_12V_2_GPIO_Port GPIOA
#define ADC_12V_3_Pin GPIO_PIN_4
#define ADC_12V_3_GPIO_Port GPIOA
#define ADC_12V_4_Pin GPIO_PIN_5
#define ADC_12V_4_GPIO_Port GPIOA
#define ADC_12V_5_Pin GPIO_PIN_6
#define ADC_12V_5_GPIO_Port GPIOA
#define ADC_12V_6_Pin GPIO_PIN_7
#define ADC_12V_6_GPIO_Port GPIOA
#define FV_MEAS_Pin GPIO_PIN_4
#define FV_MEAS_GPIO_Port GPIOC
#define EN_12V_0_Pin GPIO_PIN_5
#define EN_12V_0_GPIO_Port GPIOC
#define ADC_5V_0_Pin GPIO_PIN_0
#define ADC_5V_0_GPIO_Port GPIOB
#define EN_12V_2_Pin GPIO_PIN_14
#define EN_12V_2_GPIO_Port GPIOB
#define EN_12V_3_Pin GPIO_PIN_15
#define EN_12V_3_GPIO_Port GPIOB
#define EN_12V_4_Pin GPIO_PIN_6
#define EN_12V_4_GPIO_Port GPIOC
#define EN_12V_5_Pin GPIO_PIN_7
#define EN_12V_5_GPIO_Port GPIOC
#define EN_12V_6_Pin GPIO_PIN_8
#define EN_12V_6_GPIO_Port GPIOA
#define LED_FAULT_Pin GPIO_PIN_10
#define LED_FAULT_GPIO_Port GPIOA
#define SD_SW_CD_Pin GPIO_PIN_15
#define SD_SW_CD_GPIO_Port GPIOA
#define EN_12V_1_Pin GPIO_PIN_4
#define EN_12V_1_GPIO_Port GPIOB
#define MEDIA_nRST_Pin GPIO_PIN_5
#define MEDIA_nRST_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
