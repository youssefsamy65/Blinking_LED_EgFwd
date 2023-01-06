#ifndef GPIO_CONFIG_H_
#define GPIO_CONFIG_H_
#include "CPU.h"
#include "gpio_loc.h"
/* ----------------- Includes -----------------*/
// ports
typedef enum
{
	DIO_PORTA = 0,
	DIO_PORTB = 1,
	DIO_PORTC = 2,
	DIO_PORTD = 3
}port_t;
//Rename pins
typedef enum
{
	DIO_PIN0 = 0,
	DIO_PIN1 = 1,
	DIO_PIN2 = 2,
	DIO_PIN3 = 3,
	DIO_PIN4 = 4,
	DIO_PIN5 = 5,
	DIO_PIN6 = 6,
	DIO_PIN7 = 7
}pin_t;
//Renaming states
typedef enum
{
	DIO_LOW = 0,
	DIO_HIGH = 1
}state_t;
//Renaming Direction
typedef enum
{
	DIO_INPUT = 0,
	DIO_OUTPUT = 1
}direction_t;
//Renaming Dio Boolean
typedef enum
{
	DIO_FALSE = 0,
	DIO_TRUE = 1
}boolean;
#endif
