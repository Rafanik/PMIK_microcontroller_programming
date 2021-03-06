/**
  ******************************************************************************
  * File Name          : lcd_hd44780.h
  * Description        : This file contains all the functions prototypes for
  *                      the lcd_hd44780 library
  * Authors			   : Unknown
  ******************************************************************************
  *
  *     THE SOFTWARE INCLUDED IN THIS FILE IS FOR GUIDANCE ONLY.
  *     AUTHOR SHALL NOT BE HELD LIABLE FOR ANY DIRECT, INDIRECT
  *     OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  *     FROM USE OF THIS SOFTWARE.
  *
  *     PROGRAM ZAWARTY W TYM PLIKU PRZEZNACZONY JEST WYLACZNIE
  *     DO CELOW SZKOLENIOWYCH. AUTOR NIE PONOSI ODPOWIEDZIALNOSCI
  *     ZA ZADNE EWENTUALNE, BEZPOSREDNIE I POSREDNIE SZKODY
  *     WYNIKLE Z JEGO WYKORZYSTANIA.
  *
  ******************************************************************************
  */

#ifndef __LCD_HD44780_H
#define __LCD_HD44780_H
#include "main.h"

#define LCD_GPIO GPIOC
#define LCD_D4 D4_Pin
#define LCD_D5 D5_Pin
#define LCD_D6 D6_Pin
#define LCD_D7 D7_Pin

#define LCD_RS RS_Pin
#define LCD_RW RW_Pin
#define LCD_EN EN_Pin


#define HD44780_CLEAR					       0x01

#define HD44780_HOME					       0x02

#define HD44780_ENTRY_MODE				   0x04
	#define HD44780_EM_SHIFT_CURSOR		 0
	#define HD44780_EM_SHIFT_DISPLAY	 1
	#define HD44780_EM_DECREMENT		   0
	#define HD44780_EM_INCREMENT		   2

#define HD44780_DISPLAY_ONOFF			   0x08
	#define HD44780_DISPLAY_OFF		     0
	#define HD44780_DISPLAY_ON			   4
	#define HD44780_CURSOR_OFF			   0
	#define HD44780_CURSOR_ON			     2
	#define HD44780_CURSOR_NOBLINK	   0
	#define HD44780_CURSOR_BLINK		   1

#define HD44780_DISPLAY_CURSOR_SHIFT 0x10
	#define HD44780_SHIFT_CURSOR		   0
	#define HD44780_SHIFT_DISPLAY		   8
	#define HD44780_SHIFT_LEFT			   0
	#define HD44780_SHIFT_RIGHT		     4

#define HD44780_FUNCTION_SET			   0x20
	#define HD44780_FONT5x7				     0
	#define HD44780_FONT5x10			     4
	#define HD44780_ONE_LINE			     0
	#define HD44780_TWO_LINE			     8
	#define HD44780_4_BIT				       0
	#define HD44780_8_BIT				       16

#define HD44780_CGRAM_SET				     0x40

#define HD44780_DDRAM_SET				     0x80

void LCD_Initialize(void);
void LCD_WriteData(unsigned char dataToWrite);
void LCD_WriteCommand(unsigned char commandToWrite);
void LCD_WriteText(unsigned char * text);
void LCD_WriteTextXY(unsigned char * text, unsigned char x, unsigned char y);
void LCD_GoTo(unsigned char x, unsigned char y);
void LCD_WriteBinary(unsigned int var, unsigned char bitCount);
void LCD_SetUserChar (unsigned char chrNum, unsigned char n, const unsigned char *p);
void LCD_Clear(void);

#endif /* __LCD_HD44780_H */
