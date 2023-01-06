
#ifndef GPIO_LOC_H_
#define GPIO_LOC_H_

#include"std.h"
/* ----------------- Includes -----------------*/
#define RCGCGPIO  (*(volatile uint32*)( 0x400FE000+0x608)) //clock register

#define portA  (*(volatile uint32*)(0x400043FC)) //data register
#define GPIODIRA  (*(volatile uint32*)(0x40004000+0x400)) //direction register
#define GPIODR8RA  (*(volatile uint32*)(0x40004000+0x508)) //8 mA drive slect  register
#define GPIOPURA  (*(volatile uint32*)(0x40004000+0x510)) // pull up registor
#define GPIOPDRA (*(volatile uint32*)(0x40004000+0x514)) // ull dwn register 
#define GPIODENA  (*(volatile uint32*)(0x40004000+0x51C)) // digital input output 
#define GPIOAFSELA (*(volatile uint32*)(0x40004000+0x420))
#define GPIOAMSELA (*(volatile uint32*)(0x40004000+0x528))
#define GPIOCRA  (*(volatile uint32*)(0x40004000+0x524))
#define GPIOLOCKA  (*(volatile uint32*)(0x40004000+0x520))

#define portB  (*(volatile uint32*)(0x400053FC))
#define GPIODIRb  (*(volatile uint32*)(0x40005000+0x400))
#define GPIODR8RB  (*(volatile uint32*)(0x40005000+0x508))
#define GPIOPURB  (*(volatile uint32*)(0x40005000+0x510))
#define GPIOPDRB (*(volatile uint32*)(0x40005000+0x514))	
#define GPIODENB  (*(volatile uint32*)(0x40005000+0x51C))
#define GPIOAFSELB (*(volatile uint32*)(0x40005000+0x420))
#define GPIOAMSELB (*(volatile uint32*)(0x40005000+0x528))
#define GPIOCRB  (*(volatile uint32*)(0x40005000+0x524))
#define GPIOLOCKB  (*(volatile uint32*)(0x40005000+0x520))

#define portC  (*(volatile uint32*)(0x400063FC))
#define GPIODIRc  (*(volatile uint32*)(0x40006000+0x400))
#define GPIODR8RC  (*(volatile uint32*)(0x40006000+0x508))
#define GPIOPURC  (*(volatile uint32*)(0x40006000+0x510))
#define GPIOPDRC (*(volatile uint32*)(0x40006000+0x514))
#define GPIODENC  (*(volatile uint32*)(0x40006000+0x51C)) 
#define GPIOAFSELC (*(volatile uint32*)(0x40006000+0x420))
#define GPIOAMSELC (*(volatile uint32*)(0x40006000+0x528))
#define GPIOCRC  (*(volatile uint32*)(0x40006000+0x524))
#define GPIOLOCKC  (*(volatile uint32*)(0x40006000+0x520))

#define portD  (*(volatile uint32*)(0x400073FC))
#define GPIODIRD  (*(volatile uint32*)(0x40007000+0x400))
#define GPIODR8RD  (*(volatile uint32*)(0x40007000+0x508))	
#define GPIOPURD  (*(volatile uint32*)(0x40007000+0x510))
#define GPIOPDRD (*(volatile uint32*)(0x40007000+0x514))
#define GPIODEND   (*(volatile uint32*)(0x40007000+0x51C))	
#define GPIOAFSELD (*(volatile uint32*)(0x40007000+0x420))	
#define GPIOAMSELD (*(volatile uint32*)(0x40007000+0x528))
#define GPIOCRD  (*(volatile uint32*)(0x40007000+0x524))
#define GPIOLOCKD  (*(volatile uint32*)(0x40007000+0x520))
#endif
