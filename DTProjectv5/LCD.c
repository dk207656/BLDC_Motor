/*
 * LCD.c
 *
 *  Created on: 20 Nov 2018
 *      Author: ref42911
 */

#include "DAVE.h"
#include "LCD.h"

unsigned short LCD_state = 0;
unsigned short LCD_Init_Status = 0;
unsigned short LCD_Zeile = 0;
unsigned short LCD_ZeilePos = 0;
struct LCD_Display LCD = {0,0,0,0,0};
char LCD_Display[4][20] = {
			{' ', ' ', ' ', ' ', ' ', ' ', 'S', 'o', 'l', 'l', ' ', ' ', ' ', ' ', 'I', 's', 't', ' ', ' ', ' ', },
			{' ', 'R', 'P', 'M', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', },
			{'V', 'o', 'l', 't', ':', ' ', ' ', ' ', ' ', ' ', ' ', 'V', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', },
			{'T', 'e', 'm', 'p', ':', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 'l', 'a', 'y', ':', ' ', ' ', ' ', ' ', }
			};


void DelayTimer(int TimerLength){
	TIMER_SetTimeInterval(&LCD_Timer, TimerLength);
	TIMER_Start(&LCD_Timer);
	ResetGateDriver();

}





void DisplayTask(void)
{
	ResetGateDriver();
	if(LCD_Init_Status)
	{
		switch(LCD_state)
		{
		case 0: //Start
			LCD_Befehl(0x80);
			DelayTimer(5000);

			LCD_state++;
			break;

		case 1: //Erste Zeile
			LCD_Write(LCD_Display[LCD_Zeile][LCD_ZeilePos]);
			if(LCD_ZeilePos == 19)
			{
				LCD_ZeilePos = 0;
				LCD_Zeile = 1;
				LCD_state++;
			}
			else
			{
				LCD_ZeilePos++;
				DelayTimer(5000);
							}

			DelayTimer(5000);
			break;

		case 2: //Adresse zweite Zeile
			LCD_Befehl(0xC0);
			DelayTimer(5000);
			LCD_state++;
			break;

		case 3: //Schreibe zweite Zeile
			LCD_Write(LCD_Display[LCD_Zeile][LCD_ZeilePos]);
			if(LCD_ZeilePos == 19)
			{
				LCD_ZeilePos = 0;
				LCD_Zeile = 2;
				LCD_state++;
			}
			else
			{
				LCD_ZeilePos++;
				DelayTimer(5000);
			}

			DelayTimer(5000);
			break;

		case 4: //Adresse 3. Zeile
			LCD_Befehl(0x94);
			DelayTimer(5000);
			LCD_state++;
			break;

		case 5: //Schreibe dritte Zeile
			LCD_Write(LCD_Display[LCD_Zeile][LCD_ZeilePos]);
			if(LCD_ZeilePos == 19)
			{
				LCD_ZeilePos = 0;
				LCD_Zeile = 3;
				LCD_state++;
			}
			else
			{
				LCD_ZeilePos++;
				DelayTimer(5000);
			}

			DelayTimer(5000);
			break;

		case 6: //set address for line 3
			LCD_Befehl(0xD4);
			DelayTimer(5000);

			LCD_state++;
			break;

		case 7: //Write line 4
			LCD_Write(LCD_Display[LCD_Zeile][LCD_ZeilePos]);
			if(LCD_ZeilePos == 19)
			{
				LCD_ZeilePos = 0;
				LCD_Zeile = 0;
				LCD_state = 0;
				DelayTimer(20000000);

			}
			else
			{
				LCD_ZeilePos++;
				DelayTimer(11000);

			}
			break;

		default:
			break;

		}
	}
	else //Init Display
	{
		switch (LCD_state)
		{

		case 0:
			DelayTimer(1000000);
			LCD_state++;
			break;

		case 1: //FunctionSet 1
			LCD_Befehl(0x38);
			DelayTimer(500000);
			LCD_state++;
			break;

		case 2: //FunctionSet 2
			LCD_Befehl(0x38);
			DelayTimer(20000);
			LCD_state++;
			break;

		case 3: //Display Off
			LCD_Befehl(0x08);
			DelayTimer(6000);
			LCD_state++;
			break;

		case 4: //Display Clear
			LCD_Befehl(0x01);
			DelayTimer(300000);
			LCD_state++;
			break;

		case 5: //entry mode set
			LCD_Befehl(0x06);
			DelayTimer(6000);
			LCD_state++;
			break;

		case 6: //Display on
			LCD_Befehl(0x0C);
			DelayTimer(20000);
			LCD_Init_Status = 1;
			LCD_state = 0;
			break;

		default:
			break;
		}
	}
}

void LCD_Befehl(unsigned char command)
{
	DIGITAL_IO_SetOutputLow(&LCD_RS);
	DIGITAL_IO_SetOutputLow(&LCD_RW);
	BUS_IO_Write(&LCD_DATA, command);
    DIGITAL_IO_SetOutputHigh(&LCD_Enable);
    DIGITAL_IO_SetOutputLow(&LCD_Enable);
}

void LCD_Write(unsigned char letter)
{
	DIGITAL_IO_SetOutputHigh(&LCD_RS);
	DIGITAL_IO_SetOutputLow(&LCD_RW);
	BUS_IO_Write(&LCD_DATA, letter);
    DIGITAL_IO_SetOutputHigh(&LCD_Enable);

    DIGITAL_IO_SetOutputLow(&LCD_Enable);
}
void LCD_SollRPM(unsigned short RPM)
{
	char sRPM[4];
	sprintf(sRPM, "%*d",4,RPM);
	for(int i = 0; i<4; i++)
	{
		LCD_Display[1][6+i] = sRPM[i];
	}
}
void LCD_IstRPM(uint32_t RPM)
{
	char sRPM[5];
	sprintf(sRPM, "%*.d",5,RPM);
	for(int i = 0; i<5; i++)
	{
		LCD_Display[1][13+i] = sRPM[i];
	}
}
void LCD_IstVolt(float IstVolt)
{
	char sVolt[4];
	sprintf(sVolt, "%*.2f",4,IstVolt);
	for(int i = 0; i<4; i++)
	{
		LCD_Display[2][14+i] = sVolt[i];
	}
}
void LCD_SollVolt(float SollVolt)
{
	char sVolt[4];
	sprintf(sVolt, "%*.2f",4,SollVolt);
	for(int i = 0; i<4; i++)
	{
		LCD_Display[2][6+i] = sVolt[i];
	}
}

void LCD_SetDuty(uint32_t duty_cycle)
{
	char sDuty[3];
	sprintf(sDuty, "%*d" ,3,duty_cycle);
	for(int i = 0; i<3; i++)
	{
		LCD_Display[3][6+i] = sDuty[i];
	}
}
void LCD_SetDelay(short delay)
{
	char sDelay[3];
	sprintf(sDelay, "%*d",3,delay);
	for(int i = 0; i<3; i++)
	{
		LCD_Display[3][17+i] = sDelay[i];
	}
}
