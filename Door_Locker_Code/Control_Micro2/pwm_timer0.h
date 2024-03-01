 /******************************************************************************
 * 																			   *
 * 					Author: Abdelrhman Khaled Sobhi			     			   *
 *																			   *
 * 								Group : 79								       *
 *																			   *
 *******************************************************************************/

#ifndef PWM_TIMER0_H_
#define PWM_TIMER0_H_

#include "gpio.h"

/*******************************************************************************
 | 						        	Definitions			   		               |
 *******************************************************************************/

/*
 * this two preprocessor identifiers used for determine the port that PWM pin in it
 * and for determine the pin 3 in port B.
 *
 */

#define TIMER0_PWM_PORT      PORTB_ID
#define TIMER0_PWM_PIN       PIN3_ID

/*******************************************************************************
 | 						   	Functions Prototypes 			   		           |
 *******************************************************************************/

/*
 * the PWM function is used for determine the speed of the motor and put it on the
 * pin 3 in portB that is an output pin.
 */
void PWM_Timer0_Start(uint8 duty_cycle);


#endif /* PWM_TIMER0_H_ */
