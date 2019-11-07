/*
 * LCD.h
 *
 *  Created on: 17 May 2019
 *      Author: Administrator
 */

#ifndef LCD_H_
#define LCD_H_
#include <Interupts.h>
#include <XMC4500.h>
/* Define IO004 GPIO App handles connected to the respective pins on the LCD*/
struct LCD_Display {

	uint16_t SollRpm;
	uint16_t IstRpm;
	float IstVolt;
	float IstTemp;
	float SollVolt;
		} LCD;
extern unsigned short LCD_state;
extern unsigned short LCD_Init_Status;
extern unsigned short LCD_Zeile;
extern unsigned short LCD_ZeilePos;
extern char LCD_Display[4][20];
extern uint16_t duty_cycle;
extern void ResetGateDriver(void);
void sprintf();
void DelayTimer(int TimerLength);
void DisplayTask(void);
void LCD_Befehl(unsigned char command);
void LCD_Write(unsigned char letter);

void LCD_SetDuty(uint32_t duty);
void LCD_SetDelay(short delay);
void LCD_IstVolt(float Volt);
void LCD_SollVolt(float SollVolt);
void LCD_SollRPM(unsigned short RPM);
void LCD_IstRPM(uint32_t RPM);




#endif /* LCD_H_ */
