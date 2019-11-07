/*
 * Speed.h
 *
 *  Created on: 10 Jun 2019
 *      Author: Administrator
 */

#ifndef SPEED_H_
#define SPEED_H_
#include <Posif_BLDC.h>
#include <Buttons.h>
void Speedhandler(void);
void Check_RPM(void);
void HallEvent(void);
uint16_t speedindex;
uint8_t Hall1_status;
uint16_t hallint_count;
uint16_t lasthallint_count;
uint32_t revolves_counter;


#endif /* SPEED_H_ */
