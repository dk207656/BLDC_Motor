/*
 * ADC.h
 *
 *  Created on: 10 Jun 2019
 *      Author: Administrator
 */

#ifndef ADC_H_
#define ADC_H_
#include <XMC4500.h>
#include <DAVE.h>
#include <LCD.h>
#include <Temperatur.h>
void ADChandler(void);
struct ADC {
	XMC_VADC_RESULT_SIZE_t ADCTemp;
	XMC_VADC_RESULT_SIZE_t ADCVolt; //


		} ADC;

#endif /* ADC_H_ */
