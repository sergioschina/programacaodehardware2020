/**
 * @file main.c
 * @author Luiz Fernando
 * @date 19 Aug 2020
 * @brief TP01 da mat�ria Programa��o de Hardware do 6 ciclo de engenharia de computa��o.
 *
 */

#include <avr/io.h>
#include <stdio.h>

/*
 * @brief Desenvolva um c�digo em C, resolvendo (com inline assembly) a equa��o ( 0x45 - 25 + 0b00110110  - 0x62) e fa�a um print do resultado (usando C). 
 *A resposta dever� ser implementado cabe�alho e descri��o de cada comando usando Doxygen. 
 *A resposta dever� ser enviada pelo Github no reposit�rio da mat�ria.
 */

int main(void){
	int resultado;
	asm(
		"ldi r20, 0x45\n"
		"ldi r21, 25\n"
		"ldi r22, 0B00110110\n"
		"ldi r23, 0x62\n"
		"sub r20, r21\n"
		"add r20, r22\n"
		"sub r20, r23\n"
	);
	
	asm("sts" : "=r" (resultado) : "r20" : "r26");
	
	printf("%d", resultado);
}
