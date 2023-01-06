
#ifndef system_clock_config_H_
#define system_clock_config_H_

/* ----------------- Includes -----------------*/
#include "CPU.h"
/* ----------------- Macro-----------------*/

#define enable       (1)
#define disable	(0)
#define Decrese_Precision_internal_oscillator (0x078E3AE1)
#define increase_Precision_internal_oscillator (0x078E3AD1)
#define max_system_clck_number (0x00FFFFFF)
#define ovf_every_sec (0x00F423FF)
/* ----------------- body  -----------------*/
typedef uint8t Timer_mode;


typedef struct
{
void (*Timer_Cbk_ptr)(void);

}Timer_TypeDef;


#endif