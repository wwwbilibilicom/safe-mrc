/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

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
#define LED1_Pin GPIO_PIN_4
#define LED1_GPIO_Port GPIOE
#define LED2_Pin GPIO_PIN_5
#define LED2_GPIO_Port GPIOE
#define KEY_Pin GPIO_PIN_0
#define KEY_GPIO_Port GPIOA
#define PWM2_CH2_Pin GPIO_PIN_1
#define PWM2_CH2_GPIO_Port GPIOA
#define M_CMD_TX_Pin GPIO_PIN_2
#define M_CMD_TX_GPIO_Port GPIOA
#define M_CMD_RX_Pin GPIO_PIN_3
#define M_CMD_RX_GPIO_Port GPIOA
#define PWM2_CH1_Pin GPIO_PIN_5
#define PWM2_CH1_GPIO_Port GPIOA
#define SPI4_NSS_Pin GPIO_PIN_11
#define SPI4_NSS_GPIO_Port GPIOE
#define PWM3_CH1_Pin GPIO_PIN_6
#define PWM3_CH1_GPIO_Port GPIOC
#define PWM3_CH2_Pin GPIO_PIN_7
#define PWM3_CH2_GPIO_Port GPIOC
#define BT_RST_Pin GPIO_PIN_8
#define BT_RST_GPIO_Port GPIOC
#define BT_DISC_Pin GPIO_PIN_9
#define BT_DISC_GPIO_Port GPIOC
#define BT_SLEEP_Pin GPIO_PIN_8
#define BT_SLEEP_GPIO_Port GPIOA
#define BT_MODE_Pin GPIO_PIN_9
#define BT_MODE_GPIO_Port GPIOA
#define BT_DATA_Pin GPIO_PIN_10
#define BT_DATA_GPIO_Port GPIOA
#define PWM_CAP_Pin GPIO_PIN_11
#define PWM_CAP_GPIO_Port GPIOA
#define KEY2_Pin GPIO_PIN_0
#define KEY2_GPIO_Port GPIOD
#define KEY1_Pin GPIO_PIN_3
#define KEY1_GPIO_Port GPIOB
#define INA1_Pin GPIO_PIN_0
#define INA1_GPIO_Port GPIOE
#define INB1_Pin GPIO_PIN_1
#define INB1_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
