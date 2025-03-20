/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
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

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
osThreadId service_canHandle;
osThreadId store_dataHandle;
osThreadId plm_heartbeatHandle;
osThreadId simulate_dataHandle;
osThreadId collect_dataHandle;
osThreadId monitor_currentHandle;
osThreadId tm_heartbeatHandle;

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void plm_task_service_can(void const * argument);
void plm_task_store_data(void const * argument);
void plm_task_heartbeat(void const * argument);
void plm_task_simulate_data(void const * argument);
void plm_task_collect_data(void const * argument);
void plm_task_monitor_current(void const * argument);
void tm_task_heartbeat(void const * argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/* GetIdleTaskMemory prototype (linked to static allocation support) */
void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize );

/* USER CODE BEGIN GET_IDLE_TASK_MEMORY */
static StaticTask_t xIdleTaskTCBBuffer;
static StackType_t xIdleStack[configMINIMAL_STACK_SIZE];

void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize )
{
  *ppxIdleTaskTCBBuffer = &xIdleTaskTCBBuffer;
  *ppxIdleTaskStackBuffer = &xIdleStack[0];
  *pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
  /* place for user code */
}
/* USER CODE END GET_IDLE_TASK_MEMORY */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of service_can */
  osThreadDef(service_can, plm_task_service_can, osPriorityNormal, 0, 1024);
  service_canHandle = osThreadCreate(osThread(service_can), NULL);

  /* definition and creation of store_data */
  osThreadDef(store_data, plm_task_store_data, osPriorityNormal, 0, 1024);
  store_dataHandle = osThreadCreate(osThread(store_data), NULL);

  /* definition and creation of plm_heartbeat */
  osThreadDef(plm_heartbeat, plm_task_heartbeat, osPriorityLow, 0, 512);
  plm_heartbeatHandle = osThreadCreate(osThread(plm_heartbeat), NULL);

  /* definition and creation of simulate_data */
  osThreadDef(simulate_data, plm_task_simulate_data, osPriorityLow, 0, 1024);
  simulate_dataHandle = osThreadCreate(osThread(simulate_data), NULL);

  /* definition and creation of collect_data */
  osThreadDef(collect_data, plm_task_collect_data, osPriorityNormal, 0, 1024);
  collect_dataHandle = osThreadCreate(osThread(collect_data), NULL);

  /* definition and creation of monitor_current */
  osThreadDef(monitor_current, plm_task_monitor_current, osPriorityNormal, 0, 1024);
  monitor_currentHandle = osThreadCreate(osThread(monitor_current), NULL);

  /* definition and creation of tm_heartbeat */
  osThreadDef(tm_heartbeat, tm_task_heartbeat, osPriorityLow, 0, 512);
  tm_heartbeatHandle = osThreadCreate(osThread(tm_heartbeat), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

}

/* USER CODE BEGIN Header_plm_task_service_can */
/**
  * @brief  Function implementing the service_can thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_plm_task_service_can */
void plm_task_service_can(void const * argument)
{
  /* USER CODE BEGIN plm_task_service_can */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END plm_task_service_can */
}

/* USER CODE BEGIN Header_plm_task_store_data */
/**
* @brief Function implementing the store_data thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_plm_task_store_data */
void plm_task_store_data(void const * argument)
{
  /* USER CODE BEGIN plm_task_store_data */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END plm_task_store_data */
}

/* USER CODE BEGIN Header_plm_task_heartbeat */
/**
* @brief Function implementing the plm_heartbeat thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_plm_task_heartbeat */
void plm_task_heartbeat(void const * argument)
{
  /* USER CODE BEGIN plm_task_heartbeat */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END plm_task_heartbeat */
}

/* USER CODE BEGIN Header_plm_task_simulate_data */
/**
* @brief Function implementing the simulate_data thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_plm_task_simulate_data */
void plm_task_simulate_data(void const * argument)
{
  /* USER CODE BEGIN plm_task_simulate_data */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END plm_task_simulate_data */
}

/* USER CODE BEGIN Header_plm_task_collect_data */
/**
* @brief Function implementing the collect_data thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_plm_task_collect_data */
void plm_task_collect_data(void const * argument)
{
  /* USER CODE BEGIN plm_task_collect_data */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END plm_task_collect_data */
}

/* USER CODE BEGIN Header_plm_task_monitor_current */
/**
* @brief Function implementing the monitor_current thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_plm_task_monitor_current */
void plm_task_monitor_current(void const * argument)
{
  /* USER CODE BEGIN plm_task_monitor_current */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END plm_task_monitor_current */
}

/* USER CODE BEGIN Header_tm_task_heartbeat */
/**
* @brief Function implementing the tm_heartbeat thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_tm_task_heartbeat */
void tm_task_heartbeat(void const * argument)
{
  /* USER CODE BEGIN tm_task_heartbeat */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END tm_task_heartbeat */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */
