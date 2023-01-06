#ifndef system_clock_loc_H_
#define system_clock_loc_H_
#include "system_clock_config.h"
/* ----------------- Includes -----------------*/

#define base 0xE000E000

#define STCTRL  (*(volatile uint32*)(base+0x010))
#define STRELOAD (*(volatile uint32*)(base+0x014))
#define STCURRENT  (*(volatile uint32*)(base+0x010))

#define RCC  (*(volatile uint32*)(0x400FE000+0x060))

#endif 