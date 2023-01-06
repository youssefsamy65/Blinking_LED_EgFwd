#ifndef p_config_H_
#define p_config_H_
#include "cpu.h"
#define BTN0_PRT   DIO_PORTA
#define BTN0       DIO_PIN0
#define BTN0_LOW   DIO_LOW
#define BTN0_HIGH  DIO_HIGH
#define BTN0_INP   DIO_INPUT

#define BTN1_PRT   DIO_PORTA
#define BTN1       DIO_PIN1
#define BTN1_LOW   DIO_LOW
#define BTN1_HIGH  DIO_HIGH
#define BTN1_INP   DIO_INPUT

#define BTN2_PRT   DIO_PORTC
#define BTN2       DIO_PIN5
#define BTN2_LOW   DIO_LOW
#define BTN2_HIGH  DIO_HIGH
#define BTN2_INP   DIO_INPUT


#define BTN3_PRT   DIO_PORTC
#define BTN3       DIO_PIN6
#define BTN3_LOW   DIO_LOW
#define BTN3_HIGH  DIO_HIGH
#define BTN3_INP   DIO_INPUT

typedef enum
{
	BTN0_NPRESSED = 0,
	BTN0_PRESSED = 1
}BTN0_State;

#endif