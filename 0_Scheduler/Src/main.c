/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
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

#include <stdint.h>
#include "gsc_sch_core.h"
#include "gsc_sch_core_tick_isr.h"
#include "stm32f4xx.h"

#include "led.h"

volatile unsigned int sys_tick_counter = 0;

int main(void)
{
	/* SysTick Configuration */
	SysTick_Config(16000000U/1000U); //This only applies for ARM Cores with SysTick capability
	led_init();
	/* Scheduler Initialization and tasks initialization  */
	gsc_sch_core_Init();

	/* Execute Scheduler */
	gsc_sch_core_exec();
}

void SysTick_Handler(void)
 {
 	sys_tick_counter++;
 	gsc_sch_core_tick_isr();
 }
