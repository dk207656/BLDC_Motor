/*
 * Buttons.c
 *
 *  Created on: 10 Jun 2019
 *      Author: Administrator
 */
#include <Buttons.h>
#include <LCD.h>

struct Buttons BTN = {1,0,1,0,0,0};

void Buttonhandler(void){
	BTN.BTN1_status = DIGITAL_IO_GetInput(&BTN_1);
	BTN.BTN2_status = DIGITAL_IO_GetInput(&BTN_2);
	if(BTN.BTN1_status!=0&&BTN.debouncer==0){

				ResetGateDriver();
				BTN.BTN1_status = DIGITAL_IO_GetInput(&BTN_1);
				if(BTN.BTN1_status!=0){
					BTN.counter++;
					BTN.debouncer=1;
				}

								}


	if(BTN.BTN2_status!=0&&BTN.debouncer2==0){
		ResetGateDriver();
		BTN.BTN2_status = DIGITAL_IO_GetInput(&BTN_2);

			if(BTN.BTN2_status!=0){

				BTN.debouncer2=1;
			}

	}
	if(BTN.counter==1){
		DIGITAL_IO_SetOutputHigh(&O_G_EN);
		PWM_BC_Start(&PWM_BC_0);

	}

}

