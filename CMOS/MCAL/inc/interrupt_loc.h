#ifndef interrupt_loc_H_
#define interrupt_loc_H_

#include "interrupt_config.h"
/* ----------------- Includes -----------------*/
#define SYSPRI3  (*(volatile uint32*)( 0xE000E000+0xD20))
#endif
