#include "interrupt_private.h"
/**
 * 
 * @brief iset piority for system clock 
 * @param piority
 * @return no return state 
 *          
 *          
 */

void sys_tick_piority(piority pi ){
switch ( pi ){
case(0):
CLR_BIT(SYSPRI3,29);
CLR_BIT(SYSPRI3,30);
CLR_BIT(SYSPRI3,31);
case(1):
SET_BIT(SYSPRI3,29)	;
	break;
	case(2):
SET_BIT(SYSPRI3,30);	
break;
	case(3):
SET_BIT(SYSPRI3,29)	;
SET_BIT(SYSPRI3,30);	
break;
	case(4):
SET_BIT(SYSPRI3,31);	
break;
case(5):
SET_BIT(SYSPRI3,29);
SET_BIT(SYSPRI3,31);	
break;
case(6):
SET_BIT(SYSPRI3,30);
SET_BIT(SYSPRI3,31);	
break;
case(7):
SET_BIT(SYSPRI3,29);
SET_BIT(SYSPRI3,30);
SET_BIT(SYSPRI3,31);	
break;
}
}
