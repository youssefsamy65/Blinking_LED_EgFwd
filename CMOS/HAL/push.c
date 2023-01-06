#include "push_private.h"
void BTN0_Initialize(void)
{
DIO_port(BTN0_PRT);	

DIO_SetPinDirection(BTN0_PRT, BTN0, BTN0_INP);
}
void BTN1_Initialize(void)
{
DIO_port(BTN1_PRT);	
DIO_SetPinDirection(BTN1_PRT, BTN1, BTN1_INP);
}
void BTN2_Initialize(void)
{
DIO_port(BTN2_PRT);	
DIO_SetPinDirection(BTN2_PRT, BTN2, BTN2_INP);
}
void BTN3_Initialize(void)
{
DIO_port(BTN3_PRT);	
DIO_SetPinDirection(BTN3_PRT, BTN3, BTN3_INP);
}
uint8t BTN0_Read(void)
{
	uint8t BTN = BTN0_NPRESSED;
	uint8t Val = 0;
	Val = DIO_ReadPinValue(BTN0_PRT, BTN0);
while(BTN == BTN0_PRESSED)
	{
		BTN = DIO_ReadPinValue(BTN0_PRT, BTN0);
	}
	return Val;
}
uint8t BTN1_Read(void)
{
	uint8t BTN1 = BTN0_NPRESSED;
	uint8t Val1 = 0;
	Val1 = DIO_ReadPinValue(BTN0_PRT, BTN0);
while(BTN1 == BTN0_PRESSED)
	{
		BTN1 = DIO_ReadPinValue(BTN0_PRT, BTN0);
	}
	return Val1;
}

uint8t BTN2_Read(void)
{
	uint8t BTN2 = BTN0_NPRESSED;
	uint8t Val2 = 0;
	Val2 = DIO_ReadPinValue(BTN0_PRT, BTN0);
while(BTN2 == BTN0_PRESSED)
	{
		BTN2 = DIO_ReadPinValue(BTN0_PRT, BTN0);
	}
	return Val2;
}
uint8t BTN3_Read(void)
{
	uint8t BTN3 = BTN0_NPRESSED;
	uint8t Val3 = 0;
	Val3 = DIO_ReadPinValue(BTN0_PRT, BTN0);
while(BTN3 == BTN0_PRESSED)
	{
		BTN3 = DIO_ReadPinValue(BTN0_PRT, BTN0);
	}
	return Val3;
}