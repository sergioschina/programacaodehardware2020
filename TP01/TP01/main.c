/*
/**
 * @file main.c
 * @author Fabregas
 * @date 19 Aug 2020
 * @brief TP 01
 *
 * Operação de soma e subtração em assembly
 */
 */ 

#include <avr/io.h>
/**
 * @brief Função que executa a equação: (0x45 - 25) + (0b00110110 - 0x62)
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





