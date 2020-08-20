/**
 * @file main.c
 * @author Guilherme Rocha
 * @date 19 Aug 2020
 * @brief TP 1 de programação de hardware
 *
 * Cálculo em assembly
 */


#include <avr/io.h>

/**
 * @brief Função que executa a equação: (0x45 - 25) + (0b00110110 - 0x62)
 * @code funcao()
 **/

int funcao(void) {
	asm(
	"ldi r16, 0x45\n"
	"ldi r17, 25\n"
	"ldi r18, 0b00110110\n"
	"ldi r19, 0x62\n"
	"sub r16, r17\n"
	"sub r18, r19\n"
	"add r16, r18\n"
	);
}

int main(void)
{
	funcao();
}

