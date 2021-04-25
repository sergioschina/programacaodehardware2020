/*
/**
 * @file main.c
 * @author Fabregas
 * @date 19 Aug 2020
 * @brief TP 01
 *
 * Opera��o de soma e subtra��o em assembly
 */
 */ 

#include <avr/io.h>
/**
 * @brief Fun��o que executa a equa��o: (0x45 - 25) + (0b00110110 - 0x62)
 * @code funcao()
 **/


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





