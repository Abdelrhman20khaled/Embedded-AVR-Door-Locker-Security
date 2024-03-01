 /******************************************************************************
 * 																			   *
 * 					Author: Abdelrhman Khaled Sobhi			     			   *
 *																			   *
 * 								Group : 79								       *
 *																			   *
 *******************************************************************************/
#ifndef TIMER1_H_
#define TIMER1_H_

#include "std_types.h"

/*******************************************************************************
 | 							Structures and Enumerators			   		       |
 *******************************************************************************/

typedef enum{
	No_Clock_Source,No_Prescalar,Prescalar_8,Prescalar_64,
	Prescalar_256,Prescalar_1024,External_Falling_Edge,External_Rising_Edge
} Timer1_Prescaler;

typedef enum{
	Normal_Mode,     // Normal mode for timer1 ( table in data sheet )
	Compare_Mode = 4 // CTC mode for timer1    ( table in data sheet )
} Timer1_Mode;

typedef struct {
	 uint16 initial_value;
	 uint16 compare_value; // it will be used in compare mode only.
	 Timer1_Prescaler prescaler;
	 Timer1_Mode mode;

}Timer1_ConfigType;

/*******************************************************************************
 | 					     	Functions Prototypes 			   		           |
 *******************************************************************************/

void Timer1_init(const Timer1_ConfigType * Config_Ptr);

void Timer1_deInit(void);

void Timer1_setCallBack(void(*a_ptr)(void));

#endif /* TIMER1_H_ */
