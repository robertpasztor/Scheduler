/*
 * led.c
 *
 *  Created on: Nov 15, 2024
 *      Author: Robert Pasztor
 */

#include "led.h"

#define GPIOAEN			(1U<<0) // 0b 0000 0000 0000 0000 0000 0000 0000 0001
#define LED_PIN			(1U<<5)

void led_init(void)
{
	/*Enable clock access to led port (Port A)*/
	RCC->AHB1ENR |= GPIOAEN; // 0b 0000 0000 0000 0000 0000 0000 0000 0001
	/*Set led pin as output pin*/
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &= ~(1U<<11);
}

void Set_led(int led_status)
{
	if(led_status == 1)
	{
		/*Set led pin HIGH (PA5)*/
		GPIOA->ODR |= LED_PIN;
	}
	else if(led_status == 0)
	{
		/*Set led pin LOW (PA5)*/
		GPIOA->ODR &= ~LED_PIN;
	}
}

//void led_on(void)
//{
	/*Set led pin LOW (PA5)*/
//	GPIOA->ODR &= ~LED_PIN;
//}

//void led_off(void)
//{
	/*Set led pin LOW (PA5)*/
//	GPIOA->ODR |= LED_PIN;
//}

