/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CAN_TERM_Pin GPIO_PIN_14
#define CAN_TERM_GPIO_Port GPIOC
#define OSC_8Mhz_Pin GPIO_PIN_0
#define OSC_8Mhz_GPIO_Port GPIOF
#define OSC_8MhzF1_Pin GPIO_PIN_1
#define OSC_8MhzF1_GPIO_Port GPIOF
#define VBUS_Pin GPIO_PIN_0
#define VBUS_GPIO_Port GPIOA
#define Curr_fdbk1_OPAmp__Pin GPIO_PIN_1
#define Curr_fdbk1_OPAmp__GPIO_Port GPIOA
#define OP1_OUT_Pin GPIO_PIN_2
#define OP1_OUT_GPIO_Port GPIOA
#define Curr_fdbk1_OPAmp_A3_Pin GPIO_PIN_3
#define Curr_fdbk1_OPAmp_A3_GPIO_Port GPIOA
#define BEMF1_Pin GPIO_PIN_4
#define BEMF1_GPIO_Port GPIOA
#define Curr_fdbk2_OPAmp__Pin GPIO_PIN_5
#define Curr_fdbk2_OPAmp__GPIO_Port GPIOA
#define OP2_OUT_Pin GPIO_PIN_6
#define OP2_OUT_GPIO_Port GPIOA
#define Curr_fdbk2_OPAmp_A7_Pin GPIO_PIN_7
#define Curr_fdbk2_OPAmp_A7_GPIO_Port GPIOA
#define BEMF2_Pin GPIO_PIN_4
#define BEMF2_GPIO_Port GPIOC
#define Curr_fdbk3_OPAmp__Pin GPIO_PIN_0
#define Curr_fdbk3_OPAmp__GPIO_Port GPIOB
#define TP3_Pin GPIO_PIN_1
#define TP3_GPIO_Port GPIOB
#define Curr_fdbk3_OPAmp_B2_Pin GPIO_PIN_2
#define Curr_fdbk3_OPAmp_B2_GPIO_Port GPIOB
#define BEMF3_Pin GPIO_PIN_11
#define BEMF3_GPIO_Port GPIOB
#define A___POTENTIOMETER_Pin GPIO_PIN_12
#define A___POTENTIOMETER_GPIO_Port GPIOB
#define Temperature_feedback_Pin GPIO_PIN_14
#define Temperature_feedback_GPIO_Port GPIOB
#define STATUS_Pin GPIO_PIN_6
#define STATUS_GPIO_Port GPIOC
#define CAN_RX_Pin GPIO_PIN_11
#define CAN_RX_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define PWM_Pin GPIO_PIN_15
#define PWM_GPIO_Port GPIOA
#define BUTTON_Pin GPIO_PIN_10
#define BUTTON_GPIO_Port GPIOC
#define CAN_SHDN_TP2_Pin GPIO_PIN_11
#define CAN_SHDN_TP2_GPIO_Port GPIOC
#define GPIO_BEMF_Pin GPIO_PIN_5
#define GPIO_BEMF_GPIO_Port GPIOB
#define A__H1_Pin GPIO_PIN_6
#define A__H1_GPIO_Port GPIOB
#define B__H2_Pin GPIO_PIN_7
#define B__H2_GPIO_Port GPIOB
#define Z__H3_Pin GPIO_PIN_8
#define Z__H3_GPIO_Port GPIOB
#define CAN_TX_Pin GPIO_PIN_9
#define CAN_TX_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
