#include "processor_mode_private.h"
/**
 * 
 * @brief switch processor modes 
 * @param Processor_ModeType
 * @return no return state 
 *          
 *          
 */
void Processor_switchMode(Processor_ModeType Mode)
{
    /* TODO use SVC assembly instruction to switch to handler mode*/
    switch (Mode) {
        case (PROCESSOR_MODE_PRIVILEGE):
            __asm(" SVC #1\n");
            break;
        case (PROCESSOR_MODE_NON_PRIVILEGE):
            __asm(" MOV R0, #1\n");
            __asm(" MSR CONTROL, R0\n");
            break;
        default:
            break;
    }
	}