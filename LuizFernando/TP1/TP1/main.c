/**
 * @file main.c
 * @author Luiz Fernando
 * @date 19 Aug 2020
 * @brief TP01 da matéria Programação de Hardware do 6 ciclo de engenharia de computação.
 *
 */

#include <avr/io.h>
#include <stdio.h>

/*
 * @brief Desenvolva um código em C, resolvendo (com inline assembly) a equação ( 0x45 - 25 + 0b00110110  - 0x62) e faça um print do resultado (usando C). 
 *A resposta deverá ser implementado cabeçalho e descrição de cada comando usando Doxygen. 
 *A resposta deverá ser enviada pelo Github no repositório da matéria.
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
