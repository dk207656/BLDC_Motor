

#include <XMC4500.h>
#include <DAVE.h> //Declarations from DAVE Code Generation (includes SFR declaration)
#include <LCD.h>
#include <Temperatur.h>
#include <Buttons.h>
#include <ADC.h>
#include <Posif_BLDC.h>
#include <Speed.h>
#include <Interupts.h>




int main(void)

{

DAVE_STATUS_t status;
status = DAVE_Init(); /* Initialization of DAVE Apps */

DisplayTask();// Init Display and start Interrupts

if(status == DAVE_STATUS_FAILURE)

{

/* Placeholder for error handler code. The while loop below can be replaced with an user error handler */

XMC_DEBUG(("DAVE Apps initialization failed with status %d\n", status));

while(1U)

{

}

}


/* Placeholder for user application code. The while loop below can be replaced with user application code. */
LCD.SollVolt=1;
while(1U)

{
	ResetGateDriver();
	HallEvent();
	Speedhandler();
	Buttonhandler();
	ADChandler();

}

return 1;

}










