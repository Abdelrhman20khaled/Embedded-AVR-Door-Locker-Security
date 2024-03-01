 /******************************************************************************
 * 																			   *
 * 					Author: Abdelrhman Khaled Sobhi			     			   *
 *																			   *
 * 								Group : 79								       *
 *																			   *
 *******************************************************************************/

#ifndef BUZZER_H_
#define BUZZER_H_

#include "gpio.h"

#define BUZZER_PORT	PORTB_ID
#define BUZZER_PIN  PIN4_ID

void Buzzer_init();

void Buzzer_on(void);

void Buzzer_off(void);

#endif /* BUZZER_H_ */
