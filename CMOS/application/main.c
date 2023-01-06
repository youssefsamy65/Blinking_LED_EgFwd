#include "main.h"
volatile uint8t timerOverFlowCount=0;
volatile uint8t timerOverFlowCount1=0;
uint32 ON_TIME = 0;
uint32 OFF_TIME = 0;
volatile uint8t flag1=0;
volatile uint8t flag2=0;

void tmrCBK(void)
{
if(flag1==1 && flag2==0)
{
timerOverFlowCount++;
timer_mode(disable);
}
if(flag1==0 && flag2==1)
{
timerOverFlowCount1++;
timer_mode(disable);
}
if(timerOverFlowCount >16)
{
timerOverFlowCount=1;
}
if(timerOverFlowCount1 >16)
{
timerOverFlowCount1=1;
}
}
int main() {
Timer_TypeDef timerStr;
timerStr.Timer_Cbk_ptr = tmrCBK;
timer_Init(&timerStr);
LED1_Initialize();
while(1){

if(GET_BIT(portA,0)==1)
{
flag1=1;
timer_mode(enable);
ON_TIME=timerOverFlowCount;
flag1=0;
}
//0X40000000,0X4000FFFF
//0x40004000,0x40007000
if((((portB>>0)&1))==1)
{
flag2=1;
timer_mode(enable);
OFF_TIME=timerOverFlowCount1;
flag2=0;
}
if((((portB>>0)&1))==0 && GET_BIT(portA,0)==0)
{
LED1_ON();
SysTick_Wait(ON_TIME*1000000);
LED1_OFF();
SysTick_Wait(OFF_TIME*1000000);
}
return 0;

}
}
