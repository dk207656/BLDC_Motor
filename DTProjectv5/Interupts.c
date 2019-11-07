/*
 * Interupts.c
 *
 *  Created on: 10 Jun 2019
 *      Author: Administrator
 */

#include <Interupts.h>
#include <lut.h>

void LCD_Timer_IR(void)
{
	ResetGateDriver();
	ADC_MEASUREMENT_StartConversion(&ADC_Voltage);
	TIMER_ClearEvent(&LCD_Timer);
	TIMER_Stop(&LCD_Timer);
	TIMER_Clear(&LCD_Timer);
	LCD_SetDuty(LCD.IstTemp);
	LCD_SetDelay(Posifval.ten_milli_count);
	LCD_IstVolt(LCD.IstVolt);
	LCD_SollVolt(LCD.SollVolt);
	LCD_SollRPM(LCD.SollRpm);
	LCD_IstRPM(LCD.IstRpm);
    DisplayTask();
}

void IR_Debouncing(void){
	ResetGateDriver();
	if(BTN.debouncer!=0){

		/*if(Posifval.ten_milli_count>30){
			Posifval.ten_milli_count-=2;
			if(Posifval.ten_milli_count<=70&&Posifval.ten_milli_count>=44){Posifval.ten_milli_count=40;}
			}
		else{Posifval.ten_milli_count=100;Posifval.duty_cycle=350;speedindex=0;}*/
		BTN.debouncer=0;

										}
	if(BTN.debouncer2!=0){

		if(LCD.SollVolt>3.3){
			LCD.SollVolt=1;
		}
		else{
			LCD.SollVolt+=0.1;
			rtU_lut.In1_lut=(double)LCD.SollVolt;

			lut_step();

			if(rtY_lut.Out1_lut>=30&&rtY_lut.Out1_lut<=110 ){
			Posifval.ten_milli_count= rtY_lut.Out1_lut ;}
		}
		BTN.debouncer2=0;
	}

}
void IR_Timer_1000ms(void)
{
	ResetGateDriver();

	LCD.IstRpm=revolves_counter*60;
	LCD_IstRPM(LCD.IstRpm);
	ResetGateDriver();
	revolves_counter=0;

	//DIGITAL_IO_ToggleOutput(&LED1);
	lasthallint_count=hallint_count;


}
