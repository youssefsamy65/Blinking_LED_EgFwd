#include "LED_Private.h"


void LED1_Initialize(void)
{
DIO_port(LED1_PRT);		
DIO_SetPinDirection(LED1_PRT, LED1, LED1_STATE);
}
void LED1_ON(void)
{
	DIO_SetPinValue(LED1_PRT, LED1, LED1_HIGH);
}
void LED1_OFF(void)
{
	DIO_SetPinValue(LED1_PRT, LED1, LED1_LOW);
}