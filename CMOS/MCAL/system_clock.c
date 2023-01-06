#include  "system_clock_private.h"
#include "processor_mode_private.h"

/* ----------------- Includes -----------------*/
static void (*Timer_OVF_CBK_Ptr)(void) = NULL;
/**
 * @brief Initialize  system tick
 * @param Timer_TypeDef
 * @return Status of the function
 *          1 : The function done successfully
 *          0 : The function has issue to perform this action
 */

uint8t timer_Init(Timer_TypeDef* timer_Str)
{
if(timer_Str != NULL)  {
Timer_OVF_CBK_Ptr = timer_Str->Timer_Cbk_ptr;
Processor_switchMode(PROCESSOR_MODE_PRIVILEGE); // use PRIVILEGE mode
__asm  ("    CPSIE  I\n"); // enable globale interrupt
SET_BIT(STCTRL,1);//enable int
sys_tick_piority(zero); // set piority
STCURRENT = 0;
	return 1 ;
	}
 else
{
return 0 ;
}
}
/**
 *
 * @brief it enable or disable timer also it set Processor Mode
 * @param Timer_mode and Processor_ModeType
 * @return no return state
 *
 *
 */
void timer_mode( Timer_mode Mode){
switch (Mode){
case(enable):    /*16 MHz internal oscillator SYSTIC will take 1.048576 seconds to reach 1 overflow */
STRELOAD =ovf_every_sec ;  //over flow every 1 sec
STCURRENT = 0x00000000 ;
SET_BIT(STCTRL,0);//start
SET_BIT(STCTRL,1);// enable interrupt
break ;
case (disable):
CLR_BIT(STCTRL,1); // clear interrupt bit
CLR_BIT(STCTRL,0);//stop
break;
}
}
/**
 * @brief delay with seconds
 * @param uint32 delay
 * @return Status of the function
 *          0 : The function done successfully
 *          1 : The function has issue to perform this action
 */
uint32 SysTick_Wait(uint32 delay)
{
__asm  ("    CPSID  I\n");  //disable globale interrupt
CLR_BIT(STCTRL,1);
//RCC=Decrese_Precision_internal_oscillator;    /* Precision internal oscillator / 4 */
CLR_BIT(STCTRL,2);  /* Precision internal oscillator (PIOSC) divided by 4  */
/* internal oscillator freqency is now 1 MHz systick will over flow every 16.777216 second  */
STRELOAD = (uint32) (delay); // number of counts to wait
STCURRENT =0x00000000 ;
SET_BIT(STCTRL,0); //systick start
while(GET_BIT(STCTRL,16) != 1); // wait tell flag is set
CLR_BIT(STCTRL,0); //sys tick disable
CLR_BIT(STCTRL,16); // clear the flag
//RCC=increase_Precision_internal_oscillator; /* make system freqency 16 MHZ */
SET_BIT(STCTRL,2);
/* internal oscillator freqency is now 16 MHz */
__asm  ("    CPSIE  I\n"); //enable globale intterput

return 0 ;

}
//system clock  exception handler
void SysTick_Handler(void)
{
Timer_OVF_CBK_Ptr();
}

