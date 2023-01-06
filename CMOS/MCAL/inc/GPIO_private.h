#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

/* ----------------- Includes -----------------*/
#include "gpio_config.h"

/* Section: Function Declarations */
void DIO_port(port_t Port);
void DIO_SetPinDirection(port_t Port, pin_t Pin, direction_t Direction);
void DIO_SetPinValue(port_t Port, pin_t Pin, state_t State);
uint8t DIO_ReadPinValue(port_t Port, pin_t Pin);
void GPIO_special_pin(port_t Port, pin_t Pin);
void GPIO_analoge_pin(port_t Port, pin_t Pin);
#endif