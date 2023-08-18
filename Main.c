#include <at89c5131.h>
#include "lcd.h"				//Header file with LCD interfacing functions
#include "MorseCode.h"	//Header file for Morse Code 

sbit LED=P1^7;

/*
Port P0.7 is used for the audio signal output
*/	
//Main function

void main(void)
{
		
	//Call initialization functions
	lcd_init();

	
	// Read input nibble here
	P1=0x0F;


	if (P1==0x01){
		lcd_cmd(0x80);
		lcd_write_string("A");
		morsea();}
	else if (P1==0x02){
		lcd_cmd(0x80);
		lcd_write_string("B");
		morseb();}
	else if (P1==0x03){
		lcd_cmd(0x80);
		lcd_write_string("C");
		morsec();}
	else if (P1==0x04){
		lcd_cmd(0x80);
		lcd_write_string("D");
		morsed();}
	else {
		lcd_cmd(0x80);
		lcd_write_string("E");
    morsee();	}	
PCON |=1;
	// Insert Priority Logic
	// Inside each condition, call the functions from MorseCode.h. Fill functions in MorseCode.h
	// Write to LCD using function lcd_write_string() in side the condition as well
	
	
	// 
	
	
}
