/*
 * Buttons.h
 *
 *  Created on: 10 Jun 2019
 *      Author: Administrator
 */

#ifndef BUTTONS_H_
#define BUTTONS_H_
#include <XMC4500.h>
#include <DAVE.h>
void Buttonhandler(void);
struct Buttons {
	uint8_t BTN1_status;
	uint8_t debouncer; //
	uint8_t debouncer2;

	uint8_t BTN2_status; //
	uint8_t sem_flank; //
	uint8_t check_flank;
	uint8_t counter;

		} BTN;


#endif /* BUTTONS_H_ */
