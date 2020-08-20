/*
 * TP01.c
 *
 * Created: 19/08/2020 20:43:11
 * Author : Robson Mello
 */ 
/************************************************************************/
/*
Desenvolva um c�digo em C, resolvendo (com inline assembly) a equa��o ( 0x45 - 25 + 0b00110110  - 0x62) e fa�a um print do resultado (usando C). A resposta dever� ser implementado cabe�alho e descri��o de cada comando usando Doxygen. A resposta dever� ser enviada pelo Github no reposit�rio da mat�ria.
                                                                     */
/************************************************************************/
#include <avr/io.h>
#include <stdio.h>
/**
* pr�processor soma(a,b,c,d).
* realiza a soma das quatro vari�veis (b-d+a-c).
*/
#define soma(a,b,c,d) (b-d+a-c)
/** 
* Vari�vel global binario.
* receber� o valor bin�rio.
*/
int binario ;
/**
* Vari�vel global hexa1.
* receber� o primeiro valor hexadecimal.
*/
int hexa1	;
/**
* Vari�vel global hexa2.
* receber� o segundo valor hexadecimal.
*/
int hexa2	;
/**
* Vari�vel global decimal.
* receber� o valor decimal.
*/
int decimal ;
/**
* Vari�vel global decimal.
* receber� o valor da soma.
*/
int somaDosValores;
/**
* Fun��o principal, que receber� os dados da fun��o asm e jogar� para as variaveis
* @return (int) 0 para finalizar fun��o
*/
int main(void)
{
	/**Fun��o assembler, respons�vel por setar os valores nos registradores e passa-los para as variaveis*/
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
	/**Vari�vel que recebe o preprocessor soma para somar as vari�veis*/
	somaDosValores = soma(binario,hexa1,hexa2,decimal);
	/**Fun��o printf, respons�vel por printar na tela uma ou mais vari�veis. No caso, mostrando a vari�vel somaDosValores*/
	printf("%d", somaDosValores);
	return 0;
}

