/*
 * Posif.c
 *
 *  Created on: 10 Jun 2019
 *      Author: Administrator
 */

#include <Posif_BLDC.h>
struct Posif_BLDC Posifval = {108,300,0,1};
void ResetGateDriver(void)
{
	if(!DIGITAL_IO_GetInput(&I_nFAULT))
	{
		DIGITAL_IO_SetOutputLow(&O_G_EN);
		for(int y=0;y<30;y++){
		asm("nop");
		}
		DIGITAL_IO_SetOutputHigh(&O_G_EN);

	}

}
void PeriodMatchInterruptHandler(void)

{
	//ResetGateDriver();

if(Posifval.count > Posifval.ten_milli_count) /*Check if it is time to apply next pattern?*/

{

if(Posifval.pat_index > (uint8_t)6) /*Check if pattern index is greater than 6*/

{

	Posifval.pat_index = (uint8_t)1;

}


PWM_BC_SetNextMCPatt(&PWM_BC_0,Posifval.pat_index); /*Sets the MCM pattern to shadow register*/


PWM_BC_ModulationForSyncTransfer(&PWM_BC_0); /*Compare value update*/
//PWM_BC_ModulationForImmedTransfer(&PWM_BC_0);
XMC_POSIF_MCM_UpdateMultiChannelPattern(POSIF0);/*Immediate Shadow transfer*/


/*Apply dutycyle*/

PWM_BC_DutyCycleUpdate(&PWM_BC_0,Posifval.duty_cycle);


Posifval.pat_index++;

Posifval.count = 0;

}

else

{

	Posifval.count++;

}


}
