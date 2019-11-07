/*
 * Posif.h
 *
 *  Created on: 10 Jun 2019
 *      Author: Administrator
 */

#ifndef POSIF_BLDC_H_
#define POSIF_BLDC_H_
#include <XMC4500.h>
#include <DAVE.h>
void PeriodMatchInterruptHandler(void);
void ResetGateDriver(void);
struct Posif_BLDC {
	uint16_t ten_milli_count;
	uint16_t duty_cycle;
	uint32_t count;
	uint32_t pat_index;
		} Posifval;


#endif /* POSIF_BLDC_H_ */
