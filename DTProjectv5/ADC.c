/*
 * ADC.c
 *
 *  Created on: 10 Jun 2019
 *      Author: Administrator
 */
#include <ADC.h>
 void ADChandler(void){
	ADC.ADCVolt=ADC_MEASUREMENT_GetResult(&ADC_MEASUREMENT_Channel_A)/1.26;
	rtU_temp.SpannungamNTC=(real_T)ADC_MEASUREMENT_GetResult(&ADC_MEASUREMENT_Channel_B)/1260;
	rtU_temp.Versorgungsspannung=3.3;
	LCD.IstVolt=(float)ADC.ADCVolt/1000;
	Temperatur_step();
	LCD.IstTemp=(float)rtY_temp.TEMP_CELSIUS;
}


