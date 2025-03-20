/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, RFD_GPIO0_Pin|LED3_Pin|LED4_Pin|RFD_GPIO5_Pin
                          |RFD_GPIO6_Pin|USB_RESET_Pin|EN_5V_0_Pin|EN_5V_1_Pin
                          |EN_5V_2_Pin|LED5_Pin|BMS_LIGHT_CTRL_Pin|IMD_LIGHT_CTRL_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, EN_12V_0_Pin|EN_12V_4_Pin|EN_12V_5_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, EN_12V_2_Pin|EN_12V_3_Pin|EN_12V_1_Pin|USB_RESETB6_Pin
                          |LED1_Pin|GPIO_PIN_8|GPIO_PIN_9, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, LED_FAULT_Pin|LED0_Pin|RFD_GPIO3_Pin|RPD_GPIO2_Pin
                          |RFD_GPIO1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(EN_12V_6_GPIO_Port, EN_12V_6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : RFD_GPIO0_Pin LED3_Pin LED4_Pin RFD_GPIO5_Pin
                           RFD_GPIO6_Pin USB_RESET_Pin EN_5V_0_Pin EN_5V_1_Pin
                           EN_5V_2_Pin LED5_Pin BMS_LIGHT_CTRL_Pin IMD_LIGHT_CTRL_Pin */
  GPIO_InitStruct.Pin = RFD_GPIO0_Pin|LED3_Pin|LED4_Pin|RFD_GPIO5_Pin
                          |RFD_GPIO6_Pin|USB_RESET_Pin|EN_5V_0_Pin|EN_5V_1_Pin
                          |EN_5V_2_Pin|LED5_Pin|BMS_LIGHT_CTRL_Pin|IMD_LIGHT_CTRL_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : EN_12V_0_Pin EN_12V_4_Pin EN_12V_5_Pin */
  GPIO_InitStruct.Pin = EN_12V_0_Pin|EN_12V_4_Pin|EN_12V_5_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : SCD_MCU_1_Pin SDC_MCU_2_Pin SDC_MCU_3_Pin SDC_MCU_4_Pin */
  GPIO_InitStruct.Pin = SCD_MCU_1_Pin|SDC_MCU_2_Pin|SDC_MCU_3_Pin|SDC_MCU_4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pin : USB_BUS_SNS_Pin */
  GPIO_InitStruct.Pin = USB_BUS_SNS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(USB_BUS_SNS_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : EN_12V_2_Pin EN_12V_3_Pin EN_12V_1_Pin USB_RESETB6_Pin
                           LED1_Pin PB8 PB9 */
  GPIO_InitStruct.Pin = EN_12V_2_Pin|EN_12V_3_Pin|EN_12V_1_Pin|USB_RESETB6_Pin
                          |LED1_Pin|GPIO_PIN_8|GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_FAULT_Pin LED0_Pin RFD_GPIO3_Pin RPD_GPIO2_Pin
                           RFD_GPIO1_Pin */
  GPIO_InitStruct.Pin = LED_FAULT_Pin|LED0_Pin|RFD_GPIO3_Pin|RPD_GPIO2_Pin
                          |RFD_GPIO1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin : EN_12V_6_Pin */
  GPIO_InitStruct.Pin = EN_12V_6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(EN_12V_6_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : SDIO_CD_Pin */
  GPIO_InitStruct.Pin = SDIO_CD_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(SDIO_CD_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
