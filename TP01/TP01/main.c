/*
 * TP01.c
 *
 * Created: 19/08/2020 20:43:11
 * Author : Robson Mello
 */ 
/************************************************************************/
/*
Desenvolva um código em C, resolvendo (com inline assembly) a equação ( 0x45 - 25 + 0b00110110  - 0x62) e faça um print do resultado (usando C). A resposta deverá ser implementado cabeçalho e descrição de cada comando usando Doxygen. A resposta deverá ser enviada pelo Github no repositório da matéria.
                                                                     */
/************************************************************************/
#include <avr/io.h>
#include <stdio.h>
/**
* préprocessor soma(a,b,c,d).
* realiza a soma das quatro variáveis (b-d+a-c).
*/
#define soma(a,b,c,d) (b-d+a-c)
/** 
* Variável global binario.
* receberá o valor binário.
*/
int binario ;
/**
* Variável global hexa1.
* receberá o primeiro valor hexadecimal.
*/
int hexa1	;
/**
* Variável global hexa2.
* receberá o segundo valor hexadecimal.
*/
int hexa2	;
/**
* Variável global decimal.
* receberá o valor decimal.
*/
int decimal ;
/**
* Variável global decimal.
* receberá o valor da soma.
*/
int somaDosValores;
/**
* Função principal, que receberá os dados da função asm e jogará para as variaveis
* @return (int) 0 para finalizar função
*/
int main(void)
{
	/**Função assembler, responsável por setar os valores nos registradores e passa-los para as variaveis*/
	asm(
		"ldi r20, 0b00110110\n"
		"ldi r21, 0x45\n"
		"ldi r22, 0x62\n"
		"ldi r23, 25\n"
		"sts (binario), r20\n"
		"sts (hexa1), r21\n"
		"sts (hexa2), r22\n"
		"sts (decimal), r23\n"
	);
	/**Variável que recebe o preprocessor soma para somar as variáveis*/
	somaDosValores = soma(binario,hexa1,hexa2,decimal);
	/**Função printf, responsável por printar na tela uma ou mais variáveis. No caso, mostrando a variável somaDosValores*/
	printf("%d", somaDosValores);
	return 0;
}

