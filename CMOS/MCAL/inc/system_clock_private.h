#ifndef system_clock_PRIVATE_H_
#define system_clock_PRIVATE_H_
/* ----------------- Includes -----------------*/
#include "system_clock_loc.h"
/* Section: Function Declarations */


void timer_mode( Timer_mode Mode);

uint32 SysTick_Wait(uint32 delay );

uint8t timer_Init(Timer_TypeDef* timer_Str);

#endif