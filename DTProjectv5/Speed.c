/*
 * Speed.c
 *
 *  Created on: 10 Jun 2019
 *      Author: Administrator
 */

#include <Speed.h>
uint16_t speedindex=0;
uint8_t Hall1_status=0;
uint16_t hallint_count=0;
uint16_t lasthallint_count=0;
uint32_t revolves_counter=0;
void Speedhandler(void){
	ResetGateDriver();
	if(Posifval.ten_milli_count==95){speedindex=1;}
	else if(Posifval.ten_milli_count>95){speedindex=0;}
	else if(Posifval.ten_milli_count<95&&Posifval.ten_milli_count>80){speedindex=2;}
	else if(Posifval.ten_milli_count==80){speedindex=3;}
	else if(Posifval.ten_milli_count<80&&Posifval.ten_milli_count>=70){speedindex=4;}
	else if(Posifval.ten_milli_count<70&&Posifval.ten_milli_count>=60){speedindex=5;}
	else if(Posifval.ten_milli_count<60&&Posifval.ten_milli_count>50){speedindex=6;}
	else if(Posifval.ten_milli_count<50&&Posifval.ten_milli_count>44){speedindex=7;}
	else if(Posifval.ten_milli_count<44&&Posifval.ten_milli_count>32){speedindex=8;}
	else {speedindex=9;}
		switch(speedindex) {
		case 0: Posifval.duty_cycle=375; break;
			case 1: Posifval.duty_cycle=400; break;
			case 2: Posifval.duty_cycle=420; break;
			case 3: Posifval.duty_cycle=430; break;
			case 4: Posifval.duty_cycle=450; break;
			case 5: Posifval.duty_cycle=500; break;
			case 6: Posifval.duty_cycle=580; break;
			case 7: Posifval.duty_cycle=670; break;
			case 8: Posifval.duty_cycle=730; break;
			case 9: Posifval.duty_cycle=780; break;

			default:  break;
		}

}

void Check_RPM(void){
	hallint_count+=1;

	if(hallint_count>=14)
	{revolves_counter+=1;
	hallint_count=0;
	}
	ResetGateDriver();
	//LCD.IstRpm=revolves_counter;

}
void HallEvent(void){
	ResetGateDriver();
	Hall1_status = DIGITAL_IO_GetInput(&Hall1);
		if(Hall1_status==1&&BTN.sem_flank==0){
			BTN.sem_flank=1;


			Check_RPM();


			BTN.sem_flank=0;
		}



}
