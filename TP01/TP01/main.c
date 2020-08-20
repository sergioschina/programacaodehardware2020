/*
 * TP01.c
 *
 * Created: 19/08/2020 19:07:52
 * Author : Fabricio
 */ 

#include <avr/io.h>
#include <stdio.h>
int a,b,c,d;

int main(void)
{
	
	asm(
	"ldi r24, 0x45  \n"
	"ldi r25, 25    \n"
	"ldi r26, 0b00110110 \n"
	"ldi r27, 0x62   \n"
	"sub r24,r25	 \n"
	"add r24,r26	\n"
	"sub r24,27		\n"
	
			
);
	
  
}





